#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("./img/title.jpg"));
    setFixedSize(QSize(1200,650));

    isSizeFixed = true;
    setSheet("./sheet/SendDataBtn.qss",ui->SendDataBtn);
    setSheet("./sheet/OpenPortBtn.qss",ui->OpenPortBtn);
    ui->InputFormat->setPlaceholderText("仅支持以\\n结尾");
    initTitle();
    initConnects();
    initToolTips();

    initCurve();
    GraphInit();
    PortInit();
}

void MainWindow::initToolTips()
{
    ui->SaveCurveBtn->setToolTip("同时保存为pdf");
}
void MainWindow::initTitle()
{
    this->setWindowFlag(Qt::FramelessWindowHint);
    title = new Title(this,isSizeFixed);
    title->setGeometry(1,1,this->width()-1,31);
    title->TitleContent->setText("  Serial Assistant");
}
void MainWindow::initCurve()
{
    ui->curve1->setStyleSheet("color:red");
    ui->curve2->setStyleSheet("color:green");
    ui->curve3->setStyleSheet("color:blue");
    ui->curve4->setStyleSheet("color:cyan");
    ui->curve5->setStyleSheet("color:magenta");
    ui->curve6->setStyleSheet("color:yellow");
}
MainWindow::~MainWindow()
{
    delete ui;
}
/*********************定义连接************************/
void MainWindow::initConnects()
{
    connect(ui->SearchPortBtn,&QPushButton::clicked,this,&MainWindow::SearchPort);
    connect(ui->OpenPortBtn,&QPushButton::clicked,this,&MainWindow::OpenPortButton);
    connect(ui->ClearDataBtn,&QPushButton::clicked,this,&MainWindow::ClearData);
    connect(ui->PlotCheck,&QCheckBox::stateChanged,this,&MainWindow::GraphPlot);
    connect(ui->InputFormat,&QLineEdit::textChanged,this,&MainWindow::CurveChecks);
    connect(ui->curve1,&QCheckBox::stateChanged,this,&MainWindow::curve1slot);
    connect(ui->curve2,&QCheckBox::stateChanged,this,&MainWindow::curve2slot);
    connect(ui->curve3,&QCheckBox::stateChanged,this,&MainWindow::curve3slot);
    connect(ui->curve4,&QCheckBox::stateChanged,this,&MainWindow::curve4slot);
    connect(ui->curve5,&QCheckBox::stateChanged,this,&MainWindow::curve5slot);
    connect(ui->curve6,&QCheckBox::stateChanged,this,&MainWindow::curve6slot);
    connect(this, SIGNAL(curve1statechanged(int)), this, SLOT(curvePlot(int)));
    connect(this, SIGNAL(curve2statechanged(int)), this, SLOT(curvePlot(int)));
    connect(this, SIGNAL(curve3statechanged(int)), this, SLOT(curvePlot(int)));
    connect(this, SIGNAL(curve4statechanged(int)), this, SLOT(curvePlot(int)));
    connect(this, SIGNAL(curve5statechanged(int)), this, SLOT(curvePlot(int)));
    connect(this, SIGNAL(curve6statechanged(int)), this, SLOT(curvePlot(int)));
    connect(ui->verticalSlider,&QSlider::valueChanged,this,&MainWindow::VerticalSliderValueChaged);
    connect(ui->spinBox,SIGNAL(valueChanged(int)),this,SLOT(SpinBoxValueChanged(int)));

    connect(ui->SendTimeCheck,&QCheckBox::stateChanged,this,&MainWindow::SendCheckStateChanged);
    connect(ui->SendDataBtn,&QPushButton::clicked,this, &MainWindow::SendDataButton);
    connect(ui->TimeSpinBox,SIGNAL(valueChanged(int)),this,SLOT(TimeIntervalChanged(int)));
    connect(ui->TextSendplain,&QPlainTextEdit::textChanged,this,&MainWindow::SendDataChanged);

    connect(ui->SaveReceivedDataBtn,&QPushButton::clicked,this,&MainWindow::SaveReceivedData);
    connect(ui->SaveCurveBtn,&QPushButton::clicked,this,&MainWindow::SaveCurvePng);
}
/********************串口初始化***********************/
void MainWindow::PortInit()
{
    SearchPort();
    ui->BaudRate->setCurrentText("19200");
    ui->dataBit->setCurrentText("8");
    ui->Parity->setCurrentText("0");
    ui->StopBit->setCurrentText("1");
}
/*******************搜索可用串口**********************/
void MainWindow::SearchPort()
{
    ui->serialport->clear();
    int max_len=0;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QString str = info.portName().append(" ");
        str = str.append(info.description());
        if(max_len<str.length())
            max_len = str.length();
        ui->serialport->addItem(str);
    }
    int pt = ui->serialport->font().pointSize();
    if(max_len!=0)
        ui->serialport->setFixedWidth(max_len*pt*0.8);
}
/********************打开串口**********************/
void MainWindow::OpenPortButton()
{
    if(ui->OpenPortBtn->text()=="打开串口")
    {
        QString str = ui->serialport->currentText();

        opend_serial.setPortName(str.mid(0,str.indexOf(QRegExp(" "))));
        opend_serial.setBaudRate(ui->BaudRate->currentText().toInt());
        opend_serial.setDataBits((QSerialPort::DataBits)ui->dataBit->currentText().toInt());
        opend_serial.setParity((QSerialPort::Parity)ui->Parity->currentText().toInt());
        opend_serial.setStopBits((QSerialPort::StopBits)ui->StopBit->currentText().toInt());
        opend_serial.setFlowControl(QSerialPort::NoFlowControl);
        opend_serial.setReadBufferSize(1);
        if(!opend_serial.open(QIODevice::ReadWrite))
        {
            QMessageBox::critical(NULL, "提示","串口打开失败");
            return;
        }
        setSheet("./sheet/closePortBtn.qss",ui->OpenPortBtn);
        ui->OpenPortBtn->setText("关闭串口");
        //自动串口数据接收
        connect(&this->opend_serial, &QSerialPort::readyRead, this, &MainWindow::ReadPortData);
    }
    else
    {
        /********关闭串口发送数据************/
        SendTimer.stop();
        opend_serial.close();
        disconnect(&this->opend_serial, &QSerialPort::readyRead, this, &MainWindow::ReadPortData);
        ui->SendDataBtn->setText("发送");
        setSheet("./sheet/SendDataBtn.qss",ui->SendDataBtn);
        /***********************************/
        ui->PlotCheck->setCheckState(Qt::Unchecked);
        setSheet("./sheet/OpenPortBtn.qss",ui->OpenPortBtn);
        ui->OpenPortBtn->setText("打开串口");
    }
}
/**********************串口读取数据*************************/
void MainWindow::ReadPortData()
{
    QByteArray rx_buf = opend_serial.readAll();
    rx_buf_tmp = QString::fromLocal8Bit(rx_buf);

    rx_buf_tmp_last += rx_buf_tmp;
    RX_lenth++;
    if(RX_lenth==INT_MAX)
        RX_lenth = 0;
    ShowRXLength(RX_lenth);

    if(ui->Char2HexCheck->isChecked())
    {
        ui->DataReceiveArea->insertPlainText(rx_buf.toHex());
    }
    else
    {
        ui->DataReceiveArea->insertPlainText(rx_buf_tmp);
    }
    ui->DataReceiveArea->moveCursor(QTextCursor::End);
    if(rx_buf_tmp_last.lastIndexOf('\n')!=(rx_buf_tmp_last.length()-1))
        return;
    for(int i=0;i<curveSize;i++)
    {
        QString pattern;
        if(i<curveSize-1)
            pattern = RegularExp[i]+"(.+)"+RegularExp[i+1];
        else
            pattern = RegularExp[i]+"(.+)"+"\n";
        QRegExp rx(pattern);

        int pos = rx.indexIn(rx_buf_tmp_last);
        if(pos>=0)
        {
            dataReceArr[i]=rx.cap(1).toFloat();
        }
    }
    //dataReceived = rx_buf_tmp_last.toInt();


    rx_buf_tmp_last = QString();
    emit ReceiveDataAlready();
    rx_buf.clear();
}
/***********************显示已接受数据长度******************/
void MainWindow::ShowRXLength(int len)
{
    QString str = QString::number(len);
    ui->RX_label->setText(str);
}
/**********************清空数据接收区数据*******************/
void MainWindow::ClearData()
{
    ui->DataReceiveArea->setPlainText("");
    RX_lenth = 0;
    ShowRXLength(RX_lenth);
}
/**********************图像区初始化************************/
void MainWindow::GraphInit()
{
    /*ui->qcustomplot->addGraph();
    ui->qcustomplot->graph(0)->setPen(QPen(Qt::blue));
    ui->qcustomplot->graph(0)->setName("line1");*/
    QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
    timeTicker->setTimeFormat("%h:%m:%s");
    ui->qcustomplot->xAxis->setTicker(timeTicker);
    ui->qcustomplot->yAxis->setRange(-SliderBarValueMax,SliderBarValueMax);
    ui->qcustomplot->axisRect()->setupFullAxesBox();
    /************设置滑动条***********/
    ui->verticalSlider->setMaximum(SliderBarValueMax);
    ui->verticalSlider->setValue(SliderBarValueMax);
    ui->spinBox->setMaximum(INT_MAX);
    ui->spinBox->setValue(SliderBarValueMax);
    connect(ui->qcustomplot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->qcustomplot->xAxis2, SLOT(setRange(QCPRange)));
    connect(ui->qcustomplot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->qcustomplot->yAxis2, SLOT(setRange(QCPRange)));
}
/************************显示曲线************************/
void MainWindow::GraphPlot()
{
    if(!(ui->PlotCheck->isChecked()))
    {
        ui->InputFormat->setEnabled(false);
        ui->InputFormat_label->setEnabled(false);
        ui->InputFormat_label_2->setEnabled(false);
        disconnect(this,SIGNAL(ReceiveDataAlready()),this,SLOT(realtimeDataSlot()));
        return;
    }

    ui->qcustomplot->addGraph();
    ui->qcustomplot->graph(0)->setPen(QPen(Qt::black));
    ui->InputFormat->setEnabled(true);
    ui->InputFormat_label->setEnabled(true);
    ui->InputFormat_label_2->setEnabled(true);
    connect(this,SIGNAL(ReceiveDataAlready()),this,SLOT(realtimeDataSlot()));
}
/********************实时更新曲线***********************/
void MainWindow::realtimeDataSlot()
{
    static QTime time(QTime::currentTime());
    // calculate two new data points:
    double key = time.elapsed()/1000.0; // time elapsed since start of demo, in seconds
    static double lastPointKey = 0;

  //if (key-lastPointKey > 0.002) // at most add point every 2 ms
  //{
    // add data to lines:
  if(isCurvePlot[0])
      curve[0]->addData(key, dataReceArr[0]);
  if(isCurvePlot[1])
      curve[1]->addData(key, dataReceArr[1]);
  if(isCurvePlot[2])
      curve[2]->addData(key, dataReceArr[2]);
  if(isCurvePlot[3])
      curve[3]->addData(key, dataReceArr[3]);
  if(isCurvePlot[4])
      curve[4]->addData(key, dataReceArr[4]);
  if(isCurvePlot[5])
      curve[5]->addData(key, dataReceArr[5]);
    ui->qcustomplot->graph(0)->addData(key, dataReceived);
    lastPointKey = key;
 // }
  // make key axis range scroll with the data (at a constant range size of 8):
  ui->qcustomplot->xAxis->setRange(key, 10, Qt::AlignRight);
  ui->qcustomplot->replot();
}
/**********************根据数据格式确定曲线数量**********************/
void MainWindow::CurveChecks()
{
    curveSize=0;
    Dataformat = ui->InputFormat->text();
    for(int i=0;i<Dataformat.length()-1;i++)
    {
        if(Dataformat[i]=='%'&&(Dataformat[i+1]=='d'||Dataformat[i+1]=='f'))
        {
            curveSize++;
            Dataformat[i+1]='d';
            if(curveSize>6)
            {
                QMessageBox::warning(this,"提示","最多显示六条曲线！");
                Dataformat = Dataformat.mid(0,Dataformat.length()-2);
                ui->InputFormat->setText(Dataformat);
                return;
            }
            i++;
        }
    }
    RegularExp = Dataformat.split("%d");
    for(int i=1;i<=curveSize;i++)
    {
        QString curvename = QString("curve%1").arg(i);
        this->findChild<QCheckBox *>(curvename)->setEnabled(true);
    }
    for(int i=6;i>curveSize;i--)
    {
        QString curvename = QString("curve%1").arg(i);
        this->findChild<QCheckBox *>(curvename)->setEnabled(false);
        this->findChild<QCheckBox *>(curvename)->setCheckState(Qt::CheckState::Unchecked);
    }

}
void MainWindow::curvePlot(int curvenum)
{
    QString curvename = QString("curve%1").arg(curvenum);
    QCheckBox * tempCurve = this->findChild<QCheckBox *>(curvename);
    if(!tempCurve->isChecked())
    {
        removeCurve(curvenum);
        isCurvePlot[curvenum-1] = false;
    }
    else
    {
        addCurvePlot(curvenum);
        isCurvePlot[curvenum-1] = true;
    }
}
/**********************添加曲线*********************/
void MainWindow::addCurvePlot(int curvenum)
{
    curve[curvenum-1] = ui->qcustomplot->addGraph();
    curve[curvenum-1]->setPen(QPen(Qt::GlobalColor(6+curvenum)));

    QString curvename = QString("curve%1").arg(curvenum);
    curve[curvenum-1]->setName(curvename);
}
/***********************移除曲线*******************/
void MainWindow::removeCurve(int curvenum)
{
    ui->qcustomplot->removeGraph(curve[curvenum-1]);
}
/*****************图像显示Y最大值发生变化**************/
void MainWindow::VerticalSliderValueChaged()
{
    int rag = ui->verticalSlider->value();
    ui->qcustomplot->yAxis->setRange(-rag,rag);
    ui->qcustomplot->replot();

}
void MainWindow::SpinBoxValueChanged(int maxVal)
{
    SliderBarValueMax = maxVal;
    ui->verticalSlider->setMaximum(SliderBarValueMax);
}

void MainWindow::SendDataButton()
{
    if(!opend_serial.isOpen())
    {
        QMessageBox::warning(this,"错误","请先打开串口\n再尝试发送！");
        return;
    }
    else
    {
        SendDataChanged();
        if(!ui->SendTimeCheck->isChecked())
        {
            opend_serial.write(data2send);
        }
        else
        {
            if(ui->SendDataBtn->text()=="发送")
            {
                setSheet("./sheet/cancelDataBtn.qss",ui->SendDataBtn);
                ui->SendDataBtn->setText("停止");
                nmillisecond = ui->TimeSpinBox->value();
                connect(&SendTimer, SIGNAL(timeout()), this, SLOT(SendDataTime()));
                SendTimer.start(nmillisecond);
            }
            else
            {
                SendTimer.stop();
                //disconnect(&this->opend_serial, &QSerialPort::readyRead, this, &MainWindow::ReadPortData);
                ui->SendDataBtn->setText("发送");
                setSheet("./sheet/SendDataBtn.qss",ui->SendDataBtn);
            }
        }
    }
}
void MainWindow::SendDataTime()
{
    opend_serial.write(data2send);
}
void MainWindow::TimeIntervalChanged(int n)
{
    SendTimer.stop();
    nmillisecond = n;
    if(ui->SendDataBtn->text()=="停止")
        SendTimer.start(nmillisecond);
}
void MainWindow::SendDataChanged()
{
    QString Data2SendBuf;
    QString temp = ui->TextSendplain->toPlainText().toLocal8Bit();
    int len = temp.length();
    for(int i=0;i<len;i++)
    {
        QChar ch = temp[i];
        if((temp[i]=='\\')&&((i+1)<len)&&(temp[i+1]=='n'))
        {
            ch = '\n';
            i++;
        }
        Data2SendBuf += ch;
    }
    data2send = Data2SendBuf.toLocal8Bit();
}
void MainWindow::SendCheckStateChanged()
{
    if(!ui->SendTimeCheck->isChecked())
    {
        SendTimer.stop();
        ui->SendDataBtn->setText("发送");
        setSheet("./sheet/SendDataBtn.qss",ui->SendDataBtn);
    }
}


void MainWindow::setSheet(QString path, QPushButton * button)
{
    QFile file(path);
    file.open(QFile::ReadOnly);
    if(file.isOpen())
    {
        button->setStyleSheet(QLatin1String(file.readAll()));
    }
}

void MainWindow::SaveReceivedData()
{
    QString savedfilePath = QFileDialog::getSaveFileName(this,tr("保存已接收的数据"),QString(),QString("文本文档(*.txt)"));

    if(!savedfilePath.isEmpty())
    {
        QFile datafile(savedfilePath);
        if(!datafile.open(QIODevice::ReadWrite|QIODevice::Text))
        {
            QMessageBox::warning(this,"错误","数据保存失败!");
            return;
        }
        QTextStream out(&datafile);
        out << ui->DataReceiveArea->toPlainText();
        datafile.close();
    }
    else
    {
        return;
    }

}

void MainWindow::SaveCurvePng()
{
    QString savedfilePath = QFileDialog::getSaveFileName(this,tr("保存图像"),QString(),QString("*.png\n*.jpg\n*.bmp"));

    if(!savedfilePath.isEmpty())
    {
        QFile datafile(savedfilePath);
        if(!datafile.open(QIODevice::ReadWrite|QIODevice::Text))
        {
            QMessageBox::warning(this,"错误","图像保存失败!");
            return;
        }
        QTextStream out(&datafile);
        QStringList temp = savedfilePath.split(".");
        QByteArray tempArr = temp[temp.size()-1].toLatin1();
        ui->qcustomplot->saveRastered(savedfilePath,1000,1000,1,tempArr.data());
        ui->qcustomplot->savePdf(savedfilePath+".pdf",500,500);
        datafile.close();
    }
    else
    {
        return;
    }
}

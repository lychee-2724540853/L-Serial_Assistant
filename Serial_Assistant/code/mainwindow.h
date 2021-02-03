#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "title.h"
#include "qcustomplot.h"
#include "QtSerialPort/QSerialPort"
#include "QtSerialPort/QSerialPortInfo"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool isSizeFixed = true;
private slots:
  void realtimeDataSlot();
  void curvePlot(int ncurve);
  void SpinBoxValueChanged(int);
  void VerticalSliderValueChaged();
  void SendDataTime();
  void TimeIntervalChanged(int);
private:
    Ui::MainWindow *ui;
    Title * title;
    int RX_lenth=0;
    QSerialPort opend_serial;
    QString SerialName;
    //QTimer dataTimer;
    int dataReceived=0;
    float dataReceArr[6]={0};
    QStringList RegularExp;
    QString rx_buf_tmp;
    QString rx_buf_tmp_last=QString();
    int SliderBarValueMax = 100;
    bool isCurvePlot[6] = {false};
    QByteArray data2send;
    int nmillisecond;
    QTimer SendTimer;
    QCPGraph * curve[6];
    QString Dataformat;
    int curveSize=0;

    void initTitle();
    void initToolTips();
    void initConnects();
    void initCurve();
    void SearchPort();
    void PortInit();
    void OpenPortButton();
    void ReadPortData();
    void ShowRXLength(int len);
    void ClearData();
    void GraphInit();
    void GraphPlot();
    void CurveChecks();
    void curvePlot1();
    void curvePlot2();
    void curvePlot3();
    void curvePlot4();
    void curvePlot5();
    void curvePlot6();
    void curve1slot(){emit curve1statechanged(1);};
    void curve2slot(){emit curve2statechanged(2);};
    void curve3slot(){emit curve3statechanged(3);};
    void curve4slot(){emit curve4statechanged(4);};
    void curve5slot(){emit curve5statechanged(5);};
    void curve6slot(){emit curve6statechanged(6);};
    void addCurvePlot(int);
    void removeCurve(int);

    void SendDataButton();
    void SendDataChanged();
    void SendCheckStateChanged();

    void setSheet(QString path, QPushButton * button);

    void SaveReceivedData();
    void SaveCurvePng();

signals:
    void ReceiveDataAlready();
    void curve1statechanged(int n=1);
    void curve2statechanged(int n=2);
    void curve3statechanged(int n=3);
    void curve4statechanged(int n=4);
    void curve5statechanged(int n=5);
    void curve6statechanged(int n=6);

};
#endif // MAINWINDOW_H

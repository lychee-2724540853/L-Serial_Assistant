/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *qcustomplot;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *serialport;
    QLabel *label_2;
    QComboBox *BaudRate;
    QLabel *label_3;
    QComboBox *dataBit;
    QLabel *label_4;
    QComboBox *Parity;
    QLabel *label_5;
    QComboBox *StopBit;
    QCheckBox *Char2HexCheck;
    QPushButton *ClearDataBtn;
    QPushButton *OpenPortBtn;
    QPushButton *SearchPortBtn;
    QTextBrowser *DataReceiveArea;
    QLabel *label_7;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *PlotCheck;
    QLabel *InputFormat_label;
    QLineEdit *InputFormat;
    QLabel *RX_label;
    QFrame *curveFrame;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QCheckBox *curve1;
    QCheckBox *curve2;
    QCheckBox *curve3;
    QCheckBox *curve4;
    QCheckBox *curve5;
    QCheckBox *curve6;
    QLabel *InputFormat_label_2;
    QSlider *verticalSlider;
    QLabel *SliderLabel;
    QSpinBox *spinBox;
    QPlainTextEdit *TextSendplain;
    QLabel *label_8;
    QCheckBox *Char2HexCheckSend;
    QCheckBox *SendTimeCheck;
    QSpinBox *TimeSpinBox;
    QPushButton *SendDataBtn;
    QLabel *label_9;
    QPushButton *SaveReceivedDataBtn;
    QPushButton *SaveCurveBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 650);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        qcustomplot = new QCustomPlot(centralwidget);
        qcustomplot->setObjectName(QString::fromUtf8("qcustomplot"));
        qcustomplot->setGeometry(QRect(600, 70, 581, 441));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 70, 191, 160));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        serialport = new QComboBox(layoutWidget);
        serialport->setObjectName(QString::fromUtf8("serialport"));
        serialport->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, serialport);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        BaudRate = new QComboBox(layoutWidget);
        BaudRate->addItem(QString());
        BaudRate->addItem(QString());
        BaudRate->addItem(QString());
        BaudRate->addItem(QString());
        BaudRate->addItem(QString());
        BaudRate->addItem(QString());
        BaudRate->addItem(QString());
        BaudRate->setObjectName(QString::fromUtf8("BaudRate"));
        BaudRate->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, BaudRate);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        dataBit = new QComboBox(layoutWidget);
        dataBit->addItem(QString());
        dataBit->addItem(QString());
        dataBit->addItem(QString());
        dataBit->addItem(QString());
        dataBit->setObjectName(QString::fromUtf8("dataBit"));
        dataBit->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, dataBit);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        Parity = new QComboBox(layoutWidget);
        Parity->addItem(QString());
        Parity->addItem(QString());
        Parity->addItem(QString());
        Parity->addItem(QString());
        Parity->addItem(QString());
        Parity->addItem(QString());
        Parity->addItem(QString());
        Parity->setObjectName(QString::fromUtf8("Parity"));
        Parity->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, Parity);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        StopBit = new QComboBox(layoutWidget);
        StopBit->addItem(QString());
        StopBit->addItem(QString());
        StopBit->addItem(QString());
        StopBit->addItem(QString());
        StopBit->setObjectName(QString::fromUtf8("StopBit"));
        StopBit->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, StopBit);

        Char2HexCheck = new QCheckBox(centralwidget);
        Char2HexCheck->setObjectName(QString::fromUtf8("Char2HexCheck"));
        Char2HexCheck->setGeometry(QRect(30, 350, 171, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(12);
        Char2HexCheck->setFont(font1);
        Char2HexCheck->setLayoutDirection(Qt::LeftToRight);
        ClearDataBtn = new QPushButton(centralwidget);
        ClearDataBtn->setObjectName(QString::fromUtf8("ClearDataBtn"));
        ClearDataBtn->setGeometry(QRect(30, 290, 191, 41));
        ClearDataBtn->setFont(font);
        OpenPortBtn = new QPushButton(centralwidget);
        OpenPortBtn->setObjectName(QString::fromUtf8("OpenPortBtn"));
        OpenPortBtn->setGeometry(QRect(130, 240, 91, 41));
        OpenPortBtn->setFont(font);
        OpenPortBtn->setAutoFillBackground(false);
        SearchPortBtn = new QPushButton(centralwidget);
        SearchPortBtn->setObjectName(QString::fromUtf8("SearchPortBtn"));
        SearchPortBtn->setGeometry(QRect(30, 240, 91, 41));
        SearchPortBtn->setFont(font);
        SearchPortBtn->setAutoFillBackground(false);
        DataReceiveArea = new QTextBrowser(centralwidget);
        DataReceiveArea->setObjectName(QString::fromUtf8("DataReceiveArea"));
        DataReceiveArea->setGeometry(QRect(240, 70, 331, 501));
        DataReceiveArea->setFont(font);
        DataReceiveArea->setAcceptDrops(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(240, 40, 111, 21));
        label_7->setFont(font);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(600, 530, 426, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PlotCheck = new QCheckBox(layoutWidget1);
        PlotCheck->setObjectName(QString::fromUtf8("PlotCheck"));
        PlotCheck->setEnabled(true);
        PlotCheck->setFont(font1);
        PlotCheck->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(PlotCheck);

        InputFormat_label = new QLabel(layoutWidget1);
        InputFormat_label->setObjectName(QString::fromUtf8("InputFormat_label"));
        InputFormat_label->setEnabled(false);
        InputFormat_label->setFont(font);
        InputFormat_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(InputFormat_label);

        InputFormat = new QLineEdit(layoutWidget1);
        InputFormat->setObjectName(QString::fromUtf8("InputFormat"));
        InputFormat->setEnabled(false);
        InputFormat->setFont(font);

        horizontalLayout->addWidget(InputFormat);


        horizontalLayout_2->addLayout(horizontalLayout);

        RX_label = new QLabel(centralwidget);
        RX_label->setObjectName(QString::fromUtf8("RX_label"));
        RX_label->setGeometry(QRect(360, 40, 111, 21));
        RX_label->setFont(font);
        curveFrame = new QFrame(centralwidget);
        curveFrame->setObjectName(QString::fromUtf8("curveFrame"));
        curveFrame->setGeometry(QRect(810, 560, 361, 91));
        curveFrame->setFrameShape(QFrame::StyledPanel);
        curveFrame->setFrameShadow(QFrame::Raised);
        layoutWidget2 = new QWidget(curveFrame);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 341, 81));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        curve1 = new QCheckBox(layoutWidget2);
        curve1->setObjectName(QString::fromUtf8("curve1"));
        curve1->setEnabled(false);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(12);
        curve1->setFont(font2);
        curve1->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(curve1, 0, 0, 1, 1);

        curve2 = new QCheckBox(layoutWidget2);
        curve2->setObjectName(QString::fromUtf8("curve2"));
        curve2->setEnabled(false);
        curve2->setFont(font2);
        curve2->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(curve2, 0, 1, 1, 1);

        curve3 = new QCheckBox(layoutWidget2);
        curve3->setObjectName(QString::fromUtf8("curve3"));
        curve3->setEnabled(false);
        curve3->setFont(font2);
        curve3->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(curve3, 0, 2, 1, 1);

        curve4 = new QCheckBox(layoutWidget2);
        curve4->setObjectName(QString::fromUtf8("curve4"));
        curve4->setEnabled(false);
        curve4->setFont(font2);
        curve4->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(curve4, 1, 0, 1, 1);

        curve5 = new QCheckBox(layoutWidget2);
        curve5->setObjectName(QString::fromUtf8("curve5"));
        curve5->setEnabled(false);
        curve5->setFont(font2);
        curve5->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(curve5, 1, 1, 1, 1);

        curve6 = new QCheckBox(layoutWidget2);
        curve6->setObjectName(QString::fromUtf8("curve6"));
        curve6->setEnabled(false);
        curve6->setFont(font2);
        curve6->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(curve6, 1, 2, 1, 1);

        InputFormat_label_2 = new QLabel(centralwidget);
        InputFormat_label_2->setObjectName(QString::fromUtf8("InputFormat_label_2"));
        InputFormat_label_2->setEnabled(false);
        InputFormat_label_2->setGeometry(QRect(710, 590, 100, 27));
        InputFormat_label_2->setFont(font);
        InputFormat_label_2->setAlignment(Qt::AlignCenter);
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(590, 70, 22, 221));
        verticalSlider->setSingleStep(1);
        verticalSlider->setPageStep(10);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksBelow);
        verticalSlider->setTickInterval(0);
        SliderLabel = new QLabel(centralwidget);
        SliderLabel->setObjectName(QString::fromUtf8("SliderLabel"));
        SliderLabel->setGeometry(QRect(550, 40, 41, 21));
        SliderLabel->setFont(font);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(590, 40, 61, 22));
        spinBox->setFrame(false);
        spinBox->setMaximum(1000);
        TextSendplain = new QPlainTextEdit(centralwidget);
        TextSendplain->setObjectName(QString::fromUtf8("TextSendplain"));
        TextSendplain->setGeometry(QRect(30, 420, 201, 87));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 390, 111, 21));
        label_8->setFont(font);
        Char2HexCheckSend = new QCheckBox(centralwidget);
        Char2HexCheckSend->setObjectName(QString::fromUtf8("Char2HexCheckSend"));
        Char2HexCheckSend->setGeometry(QRect(30, 510, 171, 31));
        Char2HexCheckSend->setFont(font1);
        Char2HexCheckSend->setLayoutDirection(Qt::LeftToRight);
        SendTimeCheck = new QCheckBox(centralwidget);
        SendTimeCheck->setObjectName(QString::fromUtf8("SendTimeCheck"));
        SendTimeCheck->setGeometry(QRect(30, 550, 111, 31));
        SendTimeCheck->setFont(font1);
        SendTimeCheck->setLayoutDirection(Qt::LeftToRight);
        TimeSpinBox = new QSpinBox(centralwidget);
        TimeSpinBox->setObjectName(QString::fromUtf8("TimeSpinBox"));
        TimeSpinBox->setGeometry(QRect(30, 590, 70, 21));
        TimeSpinBox->setMinimum(1);
        TimeSpinBox->setMaximum(100000);
        TimeSpinBox->setValue(100);
        SendDataBtn = new QPushButton(centralwidget);
        SendDataBtn->setObjectName(QString::fromUtf8("SendDataBtn"));
        SendDataBtn->setGeometry(QRect(140, 540, 91, 71));
        SendDataBtn->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 590, 21, 21));
        label_9->setFont(font);
        SaveReceivedDataBtn = new QPushButton(centralwidget);
        SaveReceivedDataBtn->setObjectName(QString::fromUtf8("SaveReceivedDataBtn"));
        SaveReceivedDataBtn->setEnabled(true);
        SaveReceivedDataBtn->setGeometry(QRect(480, 580, 91, 41));
        SaveReceivedDataBtn->setFont(font);
        SaveReceivedDataBtn->setAutoFillBackground(false);
        SaveCurveBtn = new QPushButton(centralwidget);
        SaveCurveBtn->setObjectName(QString::fromUtf8("SaveCurveBtn"));
        SaveCurveBtn->setGeometry(QRect(1090, 520, 91, 41));
        SaveCurveBtn->setFont(font);
        SaveCurveBtn->setAutoFillBackground(false);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        BaudRate->setItemText(0, QCoreApplication::translate("MainWindow", "4800", nullptr));
        BaudRate->setItemText(1, QCoreApplication::translate("MainWindow", "9600", nullptr));
        BaudRate->setItemText(2, QCoreApplication::translate("MainWindow", "14400", nullptr));
        BaudRate->setItemText(3, QCoreApplication::translate("MainWindow", "19200", nullptr));
        BaudRate->setItemText(4, QCoreApplication::translate("MainWindow", "38400", nullptr));
        BaudRate->setItemText(5, QCoreApplication::translate("MainWindow", "115200", nullptr));
        BaudRate->setItemText(6, QCoreApplication::translate("MainWindow", "256000", nullptr));

        BaudRate->setCurrentText(QCoreApplication::translate("MainWindow", "4800", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        dataBit->setItemText(0, QCoreApplication::translate("MainWindow", "5", nullptr));
        dataBit->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        dataBit->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        dataBit->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));

        dataBit->setCurrentText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        Parity->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));
        Parity->setItemText(1, QCoreApplication::translate("MainWindow", "1", nullptr));
        Parity->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));
        Parity->setItemText(3, QCoreApplication::translate("MainWindow", "3", nullptr));
        Parity->setItemText(4, QCoreApplication::translate("MainWindow", "4", nullptr));
        Parity->setItemText(5, QCoreApplication::translate("MainWindow", "5", nullptr));
        Parity->setItemText(6, QCoreApplication::translate("MainWindow", "-1", nullptr));

        Parity->setCurrentText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        StopBit->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        StopBit->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        StopBit->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        StopBit->setItemText(3, QCoreApplication::translate("MainWindow", "-1", nullptr));

        Char2HexCheck->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        ClearDataBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        OpenPortBtn->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        SearchPortBtn->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\344\270\262\345\217\243", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\216\245\346\224\266\345\214\272:", nullptr));
        PlotCheck->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\263\242\345\275\242", nullptr));
        InputFormat_label->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\240\274\345\274\217\357\274\232", nullptr));
        RX_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        curve1->setText(QCoreApplication::translate("MainWindow", "Curve 1", nullptr));
        curve2->setText(QCoreApplication::translate("MainWindow", "Curve 2", nullptr));
        curve3->setText(QCoreApplication::translate("MainWindow", "Curve 3", nullptr));
        curve4->setText(QCoreApplication::translate("MainWindow", "Curve 4", nullptr));
        curve5->setText(QCoreApplication::translate("MainWindow", "Curve 5", nullptr));
        curve6->setText(QCoreApplication::translate("MainWindow", "Curve 6", nullptr));
        InputFormat_label_2->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\233\262\347\272\277\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        verticalSlider->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SliderLabel->setText(QCoreApplication::translate("MainWindow", "Max:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\217\221\351\200\201\345\214\272:", nullptr));
        Char2HexCheckSend->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        SendTimeCheck->setText(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        SendDataBtn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        SaveReceivedDataBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
#if QT_CONFIG(tooltip)
        SaveCurveBtn->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        SaveCurveBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\233\276\345\203\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

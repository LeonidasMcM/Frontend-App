/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QStringLiteral("CalculatorClass"));
        CalculatorClass->resize(357, 385);
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 80, 75, 71));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 290, 75, 71));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 290, 75, 71));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 220, 75, 71));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(70, 220, 75, 71));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 220, 75, 71));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(140, 150, 75, 71));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(70, 150, 75, 71));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 150, 75, 71));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(140, 80, 75, 71));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(0, 80, 75, 71));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 351, 81));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(140, 290, 75, 71));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(210, 290, 75, 71));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(210, 220, 75, 71));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(210, 150, 75, 71));
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(210, 80, 75, 71));
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(280, 80, 75, 71));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(280, 150, 75, 71));
        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(280, 220, 75, 71));
        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(280, 290, 75, 71));
        CalculatorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CalculatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculatorClass->setStatusBar(statusBar);

        retranslateUi(CalculatorClass);

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QApplication::translate("CalculatorClass", "Calculator", nullptr));
        pushButton->setText(QApplication::translate("CalculatorClass", "2", nullptr));
        pushButton_2->setText(QApplication::translate("CalculatorClass", "Clear", nullptr));
        pushButton_3->setText(QApplication::translate("CalculatorClass", "0", nullptr));
        pushButton_4->setText(QApplication::translate("CalculatorClass", "9", nullptr));
        pushButton_5->setText(QApplication::translate("CalculatorClass", "8", nullptr));
        pushButton_6->setText(QApplication::translate("CalculatorClass", "7", nullptr));
        pushButton_7->setText(QApplication::translate("CalculatorClass", "6", nullptr));
        pushButton_8->setText(QApplication::translate("CalculatorClass", "5", nullptr));
        pushButton_9->setText(QApplication::translate("CalculatorClass", "4", nullptr));
        pushButton_10->setText(QApplication::translate("CalculatorClass", "3", nullptr));
        pushButton_11->setText(QApplication::translate("CalculatorClass", "1", nullptr));
        label->setText(QApplication::translate("CalculatorClass", "TextLabel", nullptr));
        pushButton_12->setText(QApplication::translate("CalculatorClass", ".", nullptr));
        pushButton_13->setText(QApplication::translate("CalculatorClass", "/", nullptr));
        pushButton_14->setText(QApplication::translate("CalculatorClass", "*", nullptr));
        pushButton_15->setText(QApplication::translate("CalculatorClass", "-", nullptr));
        pushButton_16->setText(QApplication::translate("CalculatorClass", "+", nullptr));
        pushButton_17->setText(QApplication::translate("CalculatorClass", "^", nullptr));
        pushButton_18->setText(QApplication::translate("CalculatorClass", "sqrt", nullptr));
        pushButton_19->setText(QApplication::translate("CalculatorClass", "log", nullptr));
        pushButton_20->setText(QApplication::translate("CalculatorClass", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Header;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *OverallFinallabel;
    QLabel *Outputlabel;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *Midtermnumlabel;
    QLabel *Midtermlabel;
    QSpinBox *Midtermspinbox;
    QLabel *MidtermWeightlabel;
    QPushButton *finalizemidterms;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QPushButton *finalizeassignments;
    QLabel *Assignemtnumlabel;
    QSpinBox *Assignmentspinbox;
    QLabel *AssignmentLabel;
    QLabel *Assignmentweightlabel;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *Finalscorelabel;
    QLabel *Finallabel;
    QLabel *Finalweightlabel;
    QLineEdit *line_gradescore;
    QPushButton *calculate;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QGridLayout *gridLayout_4;
    QLabel *label_15;
    QLabel *label;
    QLineEdit *lineEdit_5;
    QLabel *label_13;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QWidget *widget2;
    QGridLayout *gridLayout_6;
    QLabel *label_2;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit_8;
    QLabel *label_8;
    QLineEdit *lineEdit_9;
    QLabel *label_10;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLabel *label_11;
    QLineEdit *lineEdit_13;
    QLabel *label_9;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_17;
    QLabel *label_18;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(738, 680);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Header = new QLabel(centralWidget);
        Header->setObjectName(QStringLiteral("Header"));
        Header->setGeometry(QRect(0, 0, 271, 71));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 0, 401, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        OverallFinallabel = new QLabel(layoutWidget);
        OverallFinallabel->setObjectName(QStringLiteral("OverallFinallabel"));

        horizontalLayout->addWidget(OverallFinallabel);

        Outputlabel = new QLabel(layoutWidget);
        Outputlabel->setObjectName(QStringLiteral("Outputlabel"));

        horizontalLayout->addWidget(Outputlabel);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(360, 70, 371, 171));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Midtermnumlabel = new QLabel(layoutWidget1);
        Midtermnumlabel->setObjectName(QStringLiteral("Midtermnumlabel"));

        gridLayout->addWidget(Midtermnumlabel, 1, 0, 1, 1);

        Midtermlabel = new QLabel(layoutWidget1);
        Midtermlabel->setObjectName(QStringLiteral("Midtermlabel"));

        gridLayout->addWidget(Midtermlabel, 0, 0, 1, 1);

        Midtermspinbox = new QSpinBox(layoutWidget1);
        Midtermspinbox->setObjectName(QStringLiteral("Midtermspinbox"));

        gridLayout->addWidget(Midtermspinbox, 1, 1, 2, 1);

        MidtermWeightlabel = new QLabel(layoutWidget1);
        MidtermWeightlabel->setObjectName(QStringLiteral("MidtermWeightlabel"));

        gridLayout->addWidget(MidtermWeightlabel, 3, 0, 1, 2);

        finalizemidterms = new QPushButton(layoutWidget1);
        finalizemidterms->setObjectName(QStringLiteral("finalizemidterms"));

        gridLayout->addWidget(finalizemidterms, 2, 0, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 4, 0, 1, 1);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 70, 341, 171));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        finalizeassignments = new QPushButton(layoutWidget2);
        finalizeassignments->setObjectName(QStringLiteral("finalizeassignments"));

        gridLayout_2->addWidget(finalizeassignments, 2, 0, 1, 1);

        Assignemtnumlabel = new QLabel(layoutWidget2);
        Assignemtnumlabel->setObjectName(QStringLiteral("Assignemtnumlabel"));

        gridLayout_2->addWidget(Assignemtnumlabel, 1, 0, 1, 1);

        Assignmentspinbox = new QSpinBox(layoutWidget2);
        Assignmentspinbox->setObjectName(QStringLiteral("Assignmentspinbox"));

        gridLayout_2->addWidget(Assignmentspinbox, 1, 1, 2, 1);

        AssignmentLabel = new QLabel(layoutWidget2);
        AssignmentLabel->setObjectName(QStringLiteral("AssignmentLabel"));

        gridLayout_2->addWidget(AssignmentLabel, 0, 0, 1, 1);

        Assignmentweightlabel = new QLabel(layoutWidget2);
        Assignmentweightlabel->setObjectName(QStringLiteral("Assignmentweightlabel"));

        gridLayout_2->addWidget(Assignmentweightlabel, 3, 0, 1, 2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 5, 1, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 5, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(480, 250, 251, 351));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 3, 1, 1, 1);

        Finalscorelabel = new QLabel(widget);
        Finalscorelabel->setObjectName(QStringLiteral("Finalscorelabel"));

        gridLayout_3->addWidget(Finalscorelabel, 4, 0, 1, 1);

        Finallabel = new QLabel(widget);
        Finallabel->setObjectName(QStringLiteral("Finallabel"));

        gridLayout_3->addWidget(Finallabel, 0, 0, 1, 1);

        Finalweightlabel = new QLabel(widget);
        Finalweightlabel->setObjectName(QStringLiteral("Finalweightlabel"));

        gridLayout_3->addWidget(Finalweightlabel, 1, 0, 1, 1);

        line_gradescore = new QLineEdit(widget);
        line_gradescore->setObjectName(QStringLiteral("line_gradescore"));

        gridLayout_3->addWidget(line_gradescore, 5, 0, 1, 1);

        calculate = new QPushButton(widget);
        calculate->setObjectName(QStringLiteral("calculate"));

        gridLayout_3->addWidget(calculate, 6, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 3, 0, 1, 1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(250, 240, 221, 221));
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(widget1);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_4->addWidget(label_15, 2, 0, 1, 1);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_4->addWidget(lineEdit_5, 1, 1, 1, 1);

        label_13 = new QLabel(widget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_4->addWidget(label_13, 1, 0, 1, 1);

        label_12 = new QLabel(widget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 3, 0, 1, 1);

        lineEdit_6 = new QLineEdit(widget1);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_4->addWidget(lineEdit_6, 2, 1, 1, 1);

        lineEdit_7 = new QLineEdit(widget1);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_4->addWidget(lineEdit_7, 3, 1, 1, 1);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 240, 241, 411));
        gridLayout_6 = new QGridLayout(widget2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_6->addWidget(label_2, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_6 = new QLabel(widget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(widget2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_5->addWidget(lineEdit_4, 0, 1, 1, 1);

        label_7 = new QLabel(widget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 1, 0, 1, 1);

        lineEdit_8 = new QLineEdit(widget2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout_5->addWidget(lineEdit_8, 1, 1, 1, 1);

        label_8 = new QLabel(widget2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 2, 0, 1, 1);

        lineEdit_9 = new QLineEdit(widget2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        gridLayout_5->addWidget(lineEdit_9, 2, 1, 1, 1);

        label_10 = new QLabel(widget2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 3, 0, 1, 1);

        lineEdit_10 = new QLineEdit(widget2);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        gridLayout_5->addWidget(lineEdit_10, 3, 1, 1, 1);

        lineEdit_11 = new QLineEdit(widget2);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        gridLayout_5->addWidget(lineEdit_11, 4, 1, 1, 1);

        label_11 = new QLabel(widget2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_5->addWidget(label_11, 5, 0, 1, 1);

        lineEdit_13 = new QLineEdit(widget2);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        gridLayout_5->addWidget(lineEdit_13, 6, 1, 1, 1);

        label_9 = new QLabel(widget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 7, 0, 1, 1);

        lineEdit_12 = new QLineEdit(widget2);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        gridLayout_5->addWidget(lineEdit_12, 8, 1, 1, 1);

        lineEdit_14 = new QLineEdit(widget2);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));

        gridLayout_5->addWidget(lineEdit_14, 9, 1, 1, 1);

        lineEdit_15 = new QLineEdit(widget2);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));

        gridLayout_5->addWidget(lineEdit_15, 5, 1, 1, 1);

        lineEdit_16 = new QLineEdit(widget2);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));

        gridLayout_5->addWidget(lineEdit_16, 7, 1, 1, 1);

        label_16 = new QLabel(widget2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_5->addWidget(label_16, 4, 0, 1, 1);

        label_14 = new QLabel(widget2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_5->addWidget(label_14, 6, 0, 1, 1);

        label_17 = new QLabel(widget2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_5->addWidget(label_17, 8, 0, 1, 1);

        label_18 = new QLabel(widget2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_5->addWidget(label_18, 9, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(finalizeassignments, Midtermspinbox);
        QWidget::setTabOrder(Midtermspinbox, line_gradescore);
        QWidget::setTabOrder(line_gradescore, calculate);
        QWidget::setTabOrder(calculate, finalizemidterms);
        QWidget::setTabOrder(finalizemidterms, Assignmentspinbox);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Header->setText(QApplication::translate("MainWindow", "Grade Calulator", nullptr));
        OverallFinallabel->setText(QApplication::translate("MainWindow", "Final Grade:", nullptr));
        Outputlabel->setText(QApplication::translate("MainWindow", "Output Grade", nullptr));
        Midtermnumlabel->setText(QApplication::translate("MainWindow", "Number of Midterms:", nullptr));
        Midtermlabel->setText(QApplication::translate("MainWindow", "Midterms", nullptr));
        MidtermWeightlabel->setText(QApplication::translate("MainWindow", "Weighted percentage of Grade:", nullptr));
        finalizemidterms->setText(QApplication::translate("MainWindow", "Add Midterms", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "%", nullptr));
        finalizeassignments->setText(QApplication::translate("MainWindow", "Add Assignments", nullptr));
        Assignemtnumlabel->setText(QApplication::translate("MainWindow", "Number of Assignments:", nullptr));
        AssignmentLabel->setText(QApplication::translate("MainWindow", "Assignments", nullptr));
        Assignmentweightlabel->setText(QApplication::translate("MainWindow", "Weighted percentage of Grade:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "%", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "%", nullptr));
        Finalscorelabel->setText(QApplication::translate("MainWindow", "Score:", nullptr));
        Finallabel->setText(QApplication::translate("MainWindow", "Final exam", nullptr));
        Finalweightlabel->setText(QApplication::translate("MainWindow", "Weighted percentage of Grade:", nullptr));
        line_gradescore->setText(QString());
        calculate->setText(QApplication::translate("MainWindow", "Calculate overall!", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Midterm 2", nullptr));
        label->setText(QApplication::translate("MainWindow", "Midterms:", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Midterm 1", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Midterm 3", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Assignments:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Assignment 1", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Assignment 2", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Assignment 3", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Assignment 4", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Assignment 6", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Assignment 8", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Assingment 5", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Assignment 7", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Assignment 9", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Assignment 10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

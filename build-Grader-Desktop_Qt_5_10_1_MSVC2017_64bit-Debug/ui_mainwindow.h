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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Header;
    QScrollArea *Assignment_Scroller;
    QWidget *Assignmentscroller;
    QScrollBar *verticalScrollBar;
    QScrollArea *Midterm_Scroller;
    QWidget *Midtermscroller;
    QScrollBar *ScrollbarMidterm;
    QLabel *label_2;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *Finallabel;
    QLabel *Finalweightlabel;
    QLineEdit *line_weightFinal;
    QLabel *Finalscorelabel;
    QLineEdit *line_gradescore;
    QPushButton *calculate;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *OverallFinallabel;
    QLabel *Outputlabel;
    QWidget *widget2;
    QGridLayout *gridLayout;
    QLabel *Midtermlabel;
    QSpinBox *Midtermspinbox;
    QLineEdit *line_weightMidterms;
    QLabel *MidtermWeightlabel;
    QLabel *Midtermnumlabel;
    QPushButton *finalizemidterms;
    QWidget *widget3;
    QGridLayout *gridLayout_2;
    QLabel *AssignmentLabel;
    QLabel *Assignemtnumlabel;
    QSpinBox *Assignmentspinbox;
    QLabel *Assignmentweightlabel;
    QLineEdit *line_weightassignments;
    QPushButton *finalizemidterms_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(736, 634);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Header = new QLabel(centralWidget);
        Header->setObjectName(QStringLiteral("Header"));
        Header->setGeometry(QRect(0, 0, 271, 71));
        Assignment_Scroller = new QScrollArea(centralWidget);
        Assignment_Scroller->setObjectName(QStringLiteral("Assignment_Scroller"));
        Assignment_Scroller->setGeometry(QRect(10, 260, 221, 351));
        Assignment_Scroller->setWidgetResizable(true);
        Assignmentscroller = new QWidget();
        Assignmentscroller->setObjectName(QStringLiteral("Assignmentscroller"));
        Assignmentscroller->setGeometry(QRect(0, 0, 219, 349));
        verticalScrollBar = new QScrollBar(Assignmentscroller);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(200, 0, 16, 351));
        verticalScrollBar->setOrientation(Qt::Vertical);
        Assignment_Scroller->setWidget(Assignmentscroller);
        Midterm_Scroller = new QScrollArea(centralWidget);
        Midterm_Scroller->setObjectName(QStringLiteral("Midterm_Scroller"));
        Midterm_Scroller->setGeometry(QRect(240, 260, 201, 351));
        Midterm_Scroller->setWidgetResizable(true);
        Midtermscroller = new QWidget();
        Midtermscroller->setObjectName(QStringLiteral("Midtermscroller"));
        Midtermscroller->setGeometry(QRect(0, 0, 199, 349));
        ScrollbarMidterm = new QScrollBar(Midtermscroller);
        ScrollbarMidterm->setObjectName(QStringLiteral("ScrollbarMidterm"));
        ScrollbarMidterm->setGeometry(QRect(180, 0, 16, 351));
        ScrollbarMidterm->setOrientation(Qt::Vertical);
        Midterm_Scroller->setWidget(Midtermscroller);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 240, 141, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 240, 91, 31));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(450, 380, 271, 211));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        Finallabel = new QLabel(widget);
        Finallabel->setObjectName(QStringLiteral("Finallabel"));

        gridLayout_3->addWidget(Finallabel, 0, 0, 1, 1);

        Finalweightlabel = new QLabel(widget);
        Finalweightlabel->setObjectName(QStringLiteral("Finalweightlabel"));

        gridLayout_3->addWidget(Finalweightlabel, 1, 0, 1, 1);

        line_weightFinal = new QLineEdit(widget);
        line_weightFinal->setObjectName(QStringLiteral("line_weightFinal"));

        gridLayout_3->addWidget(line_weightFinal, 2, 0, 1, 1);

        Finalscorelabel = new QLabel(widget);
        Finalscorelabel->setObjectName(QStringLiteral("Finalscorelabel"));

        gridLayout_3->addWidget(Finalscorelabel, 3, 0, 1, 1);

        line_gradescore = new QLineEdit(widget);
        line_gradescore->setObjectName(QStringLiteral("line_gradescore"));

        gridLayout_3->addWidget(line_gradescore, 4, 0, 1, 1);

        calculate = new QPushButton(widget);
        calculate->setObjectName(QStringLiteral("calculate"));

        gridLayout_3->addWidget(calculate, 5, 0, 1, 1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(320, 0, 401, 71));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        OverallFinallabel = new QLabel(widget1);
        OverallFinallabel->setObjectName(QStringLiteral("OverallFinallabel"));

        horizontalLayout->addWidget(OverallFinallabel);

        Outputlabel = new QLabel(widget1);
        Outputlabel->setObjectName(QStringLiteral("Outputlabel"));

        horizontalLayout->addWidget(Outputlabel);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(360, 70, 371, 171));
        gridLayout = new QGridLayout(widget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Midtermlabel = new QLabel(widget2);
        Midtermlabel->setObjectName(QStringLiteral("Midtermlabel"));

        gridLayout->addWidget(Midtermlabel, 0, 0, 1, 1);

        Midtermspinbox = new QSpinBox(widget2);
        Midtermspinbox->setObjectName(QStringLiteral("Midtermspinbox"));

        gridLayout->addWidget(Midtermspinbox, 1, 1, 2, 1);

        line_weightMidterms = new QLineEdit(widget2);
        line_weightMidterms->setObjectName(QStringLiteral("line_weightMidterms"));

        gridLayout->addWidget(line_weightMidterms, 4, 0, 1, 2);

        MidtermWeightlabel = new QLabel(widget2);
        MidtermWeightlabel->setObjectName(QStringLiteral("MidtermWeightlabel"));

        gridLayout->addWidget(MidtermWeightlabel, 3, 0, 1, 2);

        Midtermnumlabel = new QLabel(widget2);
        Midtermnumlabel->setObjectName(QStringLiteral("Midtermnumlabel"));

        gridLayout->addWidget(Midtermnumlabel, 1, 0, 1, 1);

        finalizemidterms = new QPushButton(widget2);
        finalizemidterms->setObjectName(QStringLiteral("finalizemidterms"));

        gridLayout->addWidget(finalizemidterms, 2, 0, 1, 1);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(0, 70, 341, 171));
        gridLayout_2 = new QGridLayout(widget3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        AssignmentLabel = new QLabel(widget3);
        AssignmentLabel->setObjectName(QStringLiteral("AssignmentLabel"));

        gridLayout_2->addWidget(AssignmentLabel, 0, 0, 1, 1);

        Assignemtnumlabel = new QLabel(widget3);
        Assignemtnumlabel->setObjectName(QStringLiteral("Assignemtnumlabel"));

        gridLayout_2->addWidget(Assignemtnumlabel, 1, 0, 1, 1);

        Assignmentspinbox = new QSpinBox(widget3);
        Assignmentspinbox->setObjectName(QStringLiteral("Assignmentspinbox"));

        gridLayout_2->addWidget(Assignmentspinbox, 1, 1, 2, 1);

        Assignmentweightlabel = new QLabel(widget3);
        Assignmentweightlabel->setObjectName(QStringLiteral("Assignmentweightlabel"));

        gridLayout_2->addWidget(Assignmentweightlabel, 3, 0, 1, 2);

        line_weightassignments = new QLineEdit(widget3);
        line_weightassignments->setObjectName(QStringLiteral("line_weightassignments"));

        gridLayout_2->addWidget(line_weightassignments, 4, 0, 1, 2);

        finalizemidterms_2 = new QPushButton(widget3);
        finalizemidterms_2->setObjectName(QStringLiteral("finalizemidterms_2"));

        gridLayout_2->addWidget(finalizemidterms_2, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Header->setText(QApplication::translate("MainWindow", "Grade Calulator", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Assignments:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Midterms:", nullptr));
        Finallabel->setText(QApplication::translate("MainWindow", "Final exam", nullptr));
        Finalweightlabel->setText(QApplication::translate("MainWindow", "Weighted percentage of Grade:", nullptr));
        line_weightFinal->setText(QApplication::translate("MainWindow", "%", nullptr));
        Finalscorelabel->setText(QApplication::translate("MainWindow", "Score:", nullptr));
        line_gradescore->setText(QApplication::translate("MainWindow", "Grade", nullptr));
        calculate->setText(QApplication::translate("MainWindow", "Calculate!", nullptr));
        OverallFinallabel->setText(QApplication::translate("MainWindow", "Final Grade:", nullptr));
        Outputlabel->setText(QApplication::translate("MainWindow", "Output Grade", nullptr));
        Midtermlabel->setText(QApplication::translate("MainWindow", "Midterms", nullptr));
        line_weightMidterms->setText(QApplication::translate("MainWindow", "%", nullptr));
        MidtermWeightlabel->setText(QApplication::translate("MainWindow", "Weighted percentage of Grade:", nullptr));
        Midtermnumlabel->setText(QApplication::translate("MainWindow", "Number of Midterms:", nullptr));
        finalizemidterms->setText(QApplication::translate("MainWindow", "Add Midterms", nullptr));
        AssignmentLabel->setText(QApplication::translate("MainWindow", "Assignments", nullptr));
        Assignemtnumlabel->setText(QApplication::translate("MainWindow", "Number of Assignments:", nullptr));
        Assignmentweightlabel->setText(QApplication::translate("MainWindow", "Weighted percentage of Grade:", nullptr));
        line_weightassignments->setText(QApplication::translate("MainWindow", "%", nullptr));
        finalizemidterms_2->setText(QApplication::translate("MainWindow", "Add Assignments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

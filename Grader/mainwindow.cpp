#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_finalizemidterms_2_clicked()
{
    int Aspinbox=ui->Assignmentspinbox->value();
    for(int i=0;i<Aspinbox;i++){


    }
}

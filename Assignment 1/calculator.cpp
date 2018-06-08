#include "calculator.h"
#include "ui_calculator.h"
#include "cmath"

#include <QDebug>

double firstnum;
bool usertyping=false;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));

     connect(ui->pushButton_add,SIGNAL(released()),this,SLOT(binary_pressed()));
     connect(ui->pushButton_minus,SIGNAL(released()),this,SLOT(binary_pressed()));
     connect(ui->pushButton_muliply,SIGNAL(released()),this,SLOT(binary_pressed()));
     connect(ui->pushButton_divide,SIGNAL(released()),this,SLOT(binary_pressed()));

     ui->pushButton_add->setCheckable(true);
     ui->pushButton_muliply->setCheckable(true);
     ui->pushButton_minus->setCheckable(true);
     ui->pushButton_divide->setCheckable(true);


}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::digit_pressed(){
QPushButton*button= (QPushButton*)sender();

double labelnum;QString newlabel;

if((ui->pushButton_add->isChecked()||
        ui->pushButton_minus->isChecked()||
        ui->pushButton_muliply->isChecked()||
        ui->pushButton_divide->isChecked())&&!usertyping)
{
    labelnum=button->text().toDouble();
    newlabel= QString::number(labelnum,'g',15);
    usertyping=true;
}
else{
    if(ui->label->text().contains('.')&&button->text()=="0"){
        newlabel= ui->label->text()+button->text();
    }
    else{
    labelnum=(ui->label->text()+button->text()).toDouble();
    newlabel= QString::number(labelnum,'g',15);
    }


}


  ui->label->setText(newlabel);

}



void Calculator::on_pushButton_decimal_released()
{QString newstr=ui->label->text();


        if(newstr.contains("."))
            return;
else
    ui->label->setText(ui->label->text()+".");
}



void Calculator::on_pushButton_clr_released()
{

    ui->pushButton_add->setChecked(false);
    ui->pushButton_muliply->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_divide->setChecked(false);

    usertyping=false;

    ui->label->setText("0");

}

void Calculator::on_pushButton_sqrt_released()
{
    double labelnum;QString newlabel;



    labelnum=ui->label->text().toDouble();


    newlabel= QString::number(sqrt(labelnum),'g',12);

      ui->label->setText(newlabel);
}

void Calculator::on_pushButton_sqrd_released()
{
    double labelnum;QString newlabel;



    labelnum=ui->label->text().toDouble();


    newlabel= QString::number(labelnum*labelnum,'g',12);

      ui->label->setText(newlabel);
}

void Calculator::on_pushButton_equal_released()
{
    double labelnum,secondnum;
    QString newlabel;
    secondnum=ui->label->text().toDouble();


    if(ui->pushButton_add->isChecked()){
        labelnum= firstnum+secondnum;
        newlabel=QString::number(labelnum,'g',15);
        ui->label->setText(newlabel);
        ui->pushButton_add->setChecked(false);
    }
    else if(ui->pushButton_minus->isChecked()){
        labelnum= firstnum-secondnum;
        newlabel=QString::number(labelnum,'g',15);
        ui->label->setText(newlabel);
        ui->pushButton_minus->setChecked(false);
    }
    else if(ui->pushButton_muliply->isChecked()){
        labelnum= firstnum*secondnum;
        newlabel=QString::number(labelnum,'g',15);
        ui->label->setText(newlabel);
        ui->pushButton_muliply->setChecked(false);

    }
    else if(ui->pushButton_divide->isChecked()){
        labelnum= firstnum/secondnum;
        newlabel=QString::number(labelnum,'g',15);
        ui->label->setText(newlabel);
        ui->pushButton_divide->setChecked(false);

    }

    usertyping=false;
}

void Calculator::binary_pressed(){
    QPushButton*button=(QPushButton*)sender();


    firstnum=ui->label->text().toDouble();



    button->setChecked(true);


}

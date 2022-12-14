#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pbCoffee->setEnabled(false);
//    ui->pbCoffee->isEnabled();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int diff)
{
    money += diff;
    ui->lcdNumber->display(money);
}


void Widget::on_pb500_clicked()
{
    changeMoney(500);
}


void Widget::on_pb100_clicked()
{
    changeMoney(100);
}


void Widget::on_pb50_clicked()
{
    changeMoney(50);
}


void Widget::on_pb10_clicked()
{
    changeMoney(10);
}


void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
}


void Widget::on_pbMilk_clicked()
{
    changeMoney(-300);
}


void Widget::on_pbMango_clicked()
{
    changeMoney(-500);
}


void Widget::on_pbReset_clicked()
{
    QMessageBox msg;
    msg.information(nullptr, "title", "text");
}


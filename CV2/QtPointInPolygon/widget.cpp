#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_3_clicked()
{
    ui->Canvas->clearCanvas();
}

void Widget::on_pushButton_clicked()
{
    ui->Canvas->setDrawPoint();
}

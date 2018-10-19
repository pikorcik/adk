#include "widget.h"
#include "ui_widget.h"

#include "algorithms.h"

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

void Widget::on_pushButton_2_clicked()
{
    QPoint q = ui->Canvas->getPoint();
    std::vector<QPoint> pol = ui->Canvas->getPolygon();
    int res = ui->comboBox->currentIndex() == 0? Algorithms::getPositionWinding(q, pol) : Algorithms::getPositionRay(q, pol);

    if (res == 1)
        ui->label_2->setText("inside");
    else
        ui->label_2->setText("outside");

    //    ui->

}

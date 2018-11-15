#include <ctime>
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

void Widget::on_pushButton_clicked()
{
    QPolygon ch;
    std::vector<QPoint> points = ui->Canvas->getPoints();

    //Start time
    clock_t s = std::clock();

    //Construct CH
    if (ui->comboBox->currentIndex()==0)
        ch = Algorithms::CHJarvis(points);
    else if (ui->comboBox->currentIndex()==1)
        ch = Algorithms::QHull(points);
    else ch= Algorithms::CHSweep(points);

    //End time
    clock_t e = std::clock();
    clock_t time = float (e - s) / CLOCKS_PER_SEC;

    //Write time
    ui->label_2->setText(QString::number(time));

    //Set and repaint
    ui->Canvas->setCH(ch);
    repaint();
}

void Widget::on_pushButton_2_clicked()
{
    ui->Canvas->clearAll();
    repaint();
}

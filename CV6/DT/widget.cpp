#include "widget.h"
#include "ui_widget.h"

#include <vector>
#include <fstream>
#include <QtGui>


//#include "edge.h"
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
    std::vector<QPoint> points = ui->Canvas->getPoints();

    std::ofstream f ("test.fxt");
    for(QPoint p: points)
    {
        f << p.x() << "  " << p.y() <<'\n';
    }
    f.close();

    std::vector<Edge> dt = Algorithms::DT(points);
    ui->Canvas->setDT(dt);
    repaint();
}

void Widget::on_pushButton_3_clicked()
{
    ui->Canvas->clearDT();
    repaint();
}

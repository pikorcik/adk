#include "mainform.h"
#include "ui_mainform.h"
#include "algorithms.h"

MainForm::MainForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);
}

MainForm::~MainForm()
{
    delete ui;
}

void MainForm::on_pushButton_clicked()
{
    std::vector <QPoint> &points = ui->Canvas->getPoints();
    double area = Algorithms::LH(points);
    ui->label_2->setText(QString::number(area));
}

void MainForm::on_pushButton_2_clicked()
{
    std::vector <QPoint> &points = ui->Canvas->getPoints();
    points.clear();
    repaint();
}

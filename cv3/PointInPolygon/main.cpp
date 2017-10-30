#include "widget.h"
#include <QApplication>
#include <vector>
#include "algorithms.h"

int main(int argc, char *argv[])
{
    //Create polygon
    std::vector<QPoint> pol;
    pol.push_back(QPoint(0,0));
    pol.push_back(QPoint(10,0));
    pol.push_back(QPoint(5,5));
    pol.push_back(QPoint(10,10));
    pol.push_back(QPoint(0,10));

    //Create tested point
    QPoint q(2.5,5);

    //Test point and polygon position
    int t0 = algorithms::getWindingPos(q,pol);

    //Simple test: position
    QPoint p(5,-5);
    QPoint b(0,0);
    QPoint c(10,0);
    int t1 = algorithms::getPosition(p,b,c);

    //Simple test: angle
    QPoint p2(5,5);
    QPoint b2(10,10);
    QPoint c2(10,0);
    int t2 = algorithms::getAngle(b2,p2,c2,p2);




    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}

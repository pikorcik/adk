#include "algorithms.h"

algorithms::algorithms()
{

}

int algorithms::getPosition(QPoint &q,QPoint &a, QPoint &b)
{
    double eps = 1.0e-6;
    double ux = b.x() - a.x();
    double uy = b.y() - a.y();
    double vx = q.x() - a.x();
    double vy = q.y() - a.y();

    double det = (ux * vy - uy * vx);
    if(det>eps)
        return 1;

    if(det<-eps)
        return 0;

    return -1;
}

double algorithms::getAngle(QPoint &p1,QPoint &p2,QPoint &p3, QPoint &p4)
{
    double ux = p2.x() - p1.x();
    double uy = p2.y() - p1.y();
    double vx = p4.x() - p3.x();
    double vy = p4.y() - p3.y();

    double s = ux * vx + uy * vy;
    double normU = sqrt(ux * ux + uy * uy);
    double normV = sqrt(vx * vx + vy * vy);

    return (acos(s/(normU * normV)))*(180/M_PI);
}

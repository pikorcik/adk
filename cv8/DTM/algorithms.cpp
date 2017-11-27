#include "algorithms.h"

Algorithms::Algorithms()
{

}

int Algorithms::getPosition(QPoint3D &q,QPoint3D &a, QPoint3D &b)
{
    double eps = 1.0e-6;
    double ux = b.getX() - a.getX();
    double uy = b.getY() - a.getY();
    double vx = q.getX() - a.getX();
    double vy = q.getY() - a.getY();

    double det = (ux * vy - uy * vx);
    if(det>eps)
        return 1;

    if(det<-eps)
        return 0;

    return -1;
}

double Algorithms::getCircleRadius(QPoint3D &p1, QPoint3D &p2,QPoint3D &p3)
{
    //Return circle radius
    double x1 = p1.getX();
    double y1 = p1.getY();
    double x2 = p2.getX();
    double y2 = p2.getY();
    double x3 = p3.getX();
    double y3 = p3.getY();

    //Compute k1 - k12
    double k1 = x1 * x1 + y1 * y1;
    double k2 = x2 * x2 + y2 * y2;
    double k3 = x3 * x3 + y3 * y3;
    double k4 = y1 - y2;
    double k5 = y1 - y3;
    double k6 = y2 - y3;
    double k7 = x1 - x2;
    double k8 = x1 - x3;
    double k9 = x2 - x3;
    double k10 = x1 * x1;
    double k11 = x2 * x2;
    double k12 = x3 * x3;

    //Mid-point of the circle
    double m = 0.5 * (k12 * (-k4) + k11 * k5 - (k10 + k4 * k5) * k6)/
                     (x3 * (-k4) + x2 * k5 + x1 * (-k6));
    double n = 0.5 * ((k1 * (-k9) + k2 * k8 + k3 * (-k7))/
                      (y1 * (-k9) + y2 * k8 + y3 * (-k7)));

    //Radius
    return sqrt((x1 - m) * (x1 - m) + (y1 - n) * (y1 - n));

}

int Algorithms::getDelaunayPoint(Edge &e, std::vector <QPoint3D> &points)
{
    QPoint3D p1 = e.getStart();
    QPoint3D p2 = e.getEnd();

    for( int i = 0 ; i < points.size() ; i++)
    {
        int test = getPosition(points[i], p1, p2);
        if( test > 0){
            //
        }
    }

}

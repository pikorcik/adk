#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include "edge.h"

#include "qpoint3d.h"

class Algorithms
{
public:
    Algorithms();
    static int getPosition(QPoint3D &q,QPoint3D &a, QPoint3D &b);
    static double getCircleRadius(QPoint3D &p1, QPoint3D &p2,QPoint3D &p3);
    static int getDelaunayPoint(Edge &e, std::vector <QPoint3D> &points);
};

#endif // ALGORITHMS_H

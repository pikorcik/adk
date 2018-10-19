#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <vector>
#include <QtGui>


class Algorithms
{
public:
    Algorithms();
    static int getPositionRay(QPoint q, std::vector<QPoint> pol);
    static int getPositionWinding(QPoint q, std::vector<QPoint> pol);
    static int getPointLinePosition(QPoint &q, QPoint &a, QPoint &b);
    static double get2LinesAngle(QPoint &p1,QPoint &p2,QPoint &p3, QPoint &p4);

};

#endif // ALGORITHMS_H

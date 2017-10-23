#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include <QPoint>


class algorithms
{
public:
    algorithms();
    int getPosition(QPoint &p,QPoint &a,QPoint &b);
    double getAngle(QPoint &,QPoint &,QPoint &, QPoint &);
};

#endif // ALGORITHMS_H

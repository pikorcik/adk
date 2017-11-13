#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <QPoint>

class algorithms
{
public:
    algorithms();
    static int getPosition(QPoint &p,QPoint &a,QPoint &b);
    static double getAngle(QPoint &,QPoint &,QPoint &, QPoint &);
    static std::vector<QPoint> jarvisCH(std::vector<QPoint>points);

};

#endif // ALGORITHMS_H

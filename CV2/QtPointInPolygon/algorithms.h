#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <vector>
#include <QtGui>


class Algorithms
{
public:
    Algorithms();
    static int getPositionRay(QPoint q, std::vector<QPoint> pol);
};

#endif // ALGORITHMS_H

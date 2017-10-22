#include "algorithms.h"

Algorithms::Algorithms() {}

double Algorithms::LH(const std::vector<QPoint> &points)
{
    //Polygon area
    const unsigned int n = points.size();
    double area = 0;
    for (int i = 1; i < n - 1; i++)
    {
        area += points[i].x() * (points[i+1].y() - points[i-1].y());
    }

    area+=points[0].x() * (points[1].y() - points[n-1].y());
    area+=points[n-1].x() * (points[0].y() - points[n-2].y());

    return 0.5 * area;
}

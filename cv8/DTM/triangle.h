#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "qpoint3d.h"

class Triangle
{
private:
    QPoint3D p1,p2,p3;
    double slope, exposition;

public:
    Triangle(QPoint3D &p1_,QPoint3D &p2_,QPoint3D &p3_, double slope_, double exposition_): p1(p1_),p2(p2_),p3(p3_),slope(slope_),exposition(exposition_){};

    QPoint3D getP1(){return p1;}
    QPoint3D getP2(){return p2;}
    QPoint3D getP3(){return p3;}
    double getSlope(){return slope;}
    double getExposition(){return exposition;}
    void  setP1(QPoint3D &p1){this -> p1 = p1;}
    void  setP2(QPoint3D &p2){this -> p2 = p2;}
    void  setP3(QPoint3D &p3){this -> p3 = p3;}
    void  setSlope(double slope){this -> slope = slope;}
    void  setExposition(double exposition){this -> exposition = exposition;}




};

#endif // TRIANGLE_H

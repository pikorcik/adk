#ifndef DRAW_H
#define DRAW_H

#include <QWidget>
#include <vector>

#include "edge.h"

class Draw : public QWidget
{
    Q_OBJECT
    private:
        std::vector<QPoint> points;     //List of points
        std::vector<Edge> dt;           //List of Delaunay edges

    public:
        explicit Draw(QWidget *parent = nullptr);
        void paintEvent(QPaintEvent *e);
        void mousePressEvent(QMouseEvent *e);
        void clearPoints() {points.clear();}
        void clearDT() {dt.clear();}
        std::vector<QPoint> & getPoints(){return points;}
        void setDT(std::vector<Edge> &dt_){dt = dt_;}

    signals:

    public slots:

};

#endif // DRAW_H

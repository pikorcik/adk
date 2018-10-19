#ifndef DRAW_H
#define DRAW_H

#include <QWidget>
#include <vector>

class Draw : public QWidget
{
    Q_OBJECT

private:
    bool draw_point;                //Switch, whether to draw a point or a polygon
    QPoint q;                       //The analyzed point q
    std::vector<QPoint> pol;        //The polygon

public:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void clearCanvas();
    void setDrawPoint();
    QPoint getPoint() {return q;}
    std::vector<QPoint> getPolygon(){return pol;}
    explicit Draw(QWidget *parent = nullptr);


signals:

public slots:
};

#endif // DRAW_H

#ifndef DRAW_H
#define DRAW_H

#include <QWidget>

class Draw: public QWidget
{
    Q_OBJECT

    private:
        std::vector <QPoint> points;

    public:
        Draw(QWidget *parent = 0);
        void mousePressEvent(QMouseEvent *e);
        void paintEvent (QPaintEvent *e);
        std::vector<QPoint> & getPoints() {return points;}

};

#endif // DRAW_H

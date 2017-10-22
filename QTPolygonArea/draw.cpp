#include "draw.h"

#include <QtGui>

Draw::Draw(QWidget *parent):QWidget (parent) {}

void Draw::mousePressEvent(QMouseEvent *e)
{
    QPoint point(e->pos().x(), e->pos().y());
    points.push_back(point);
    repaint();
}


void Draw::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.begin(this);

    //Draw polygon
    QPolygon pol;
    for (unsigned int i = 0; i < points.size(); i++)
        pol.append(points[i]);

    painter.drawPolygon(pol);

    //Draw points
    for (unsigned int i = 0; i < points.size(); i++)
        painter.drawEllipse(points[i].x() - 10, points[i].y() -10, 20, 20
                            );

    painter.end();
}

#include "draw.h"
#include <QtGui>

Draw::Draw(QWidget *parent) : QWidget(parent)
{
    //Set the initial values
    draw_point = false;
    q.setX(-5);
    q.setY(-5);
}

void Draw::paintEvent(QPaintEvent *e)
{
    //Draw the polygon and the point
    QPainter painter(this);

    //Start drawing
    painter.begin(this);

    //Create the polygon
    QPolygon p;

    //Add points to the polygon
    for(int i=0; i<pol.size(); i++)
        p.append(pol[i]);

    //Draw the polygon
    painter.drawPolygon(p);

    //Draw the points
    for(int i=0; i<pol.size(); i++)
        painter.drawEllipse(pol[i].x() - 5, pol[i].y() -5, 10, 10);

    //Draw q
    painter.drawEllipse(q.x() - 2.5, q.y() - 2.5, 5, 5);


    //Stop drawing
    painter.end();
}

void Draw::mousePressEvent(QMouseEvent *e)
{
    //Set point q
    if(draw_point)
    {
        q.setX(e->x());
        q.setY(e->y());
    }

    //Add point to the polygon
    else
    {
        QPoint point(e->x(), e->y());
        pol.push_back(point);
    }

    //Repaint the screen
    repaint();

}

void Draw::setDrawPoint()
{
    //Switch, whether to draw a point or a polygon
    draw_point = !draw_point;
}

void Draw::clearCanvas()
{
    //Clear the Canvas
    pol.clear();
    q.setX(-5);
    q.setY(-5);

    repaint();
}

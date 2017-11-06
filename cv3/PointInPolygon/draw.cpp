#include "draw.h"


draw::draw(QWidget *parent) : QWidget(parent)
{
    point = false;
}
void draw::mousePressEvent(QMouseEvent *e)
{
    if (point)
    {
        q.setX(e->pos().x());
        q.setY(e->pos().y());
    }

    else
    {
        QPoint p(e->pos().x(), e->pos().y());
        points.push_back(p);
    }

    repaint();


}

void draw::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.begin(this);
    QPolygon polygon;
    for (int i=0;i < points.size(); i++)
    {
        polygon.append(points[i]);
    }
    painter.drawPolygon(polygon);
    painter.drawEllipse(q.x() - 5 ,q.y()-5, 10, 10);

    painter.end();

}
void draw::clear(){
    points.clear();
    repaint();
}

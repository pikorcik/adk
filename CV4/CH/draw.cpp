#include "draw.h"

Draw::Draw(QWidget *parent) : QWidget(parent)
{
    /*
    //Test
    for (int i = 0; i < 100; i++)
    {
        int x =  std::rand() % ( 2000);
        int y =  std::rand() % ( 1000);
        //int r =  std::rand() % ( 1000);
        int phi =  std::rand() % ( 360);
        int r = 1000;
        x = 1000 + r * cos(phi * M_PI / 180);
        y = 1000 + r * sin(phi * M_PI / 180);

        points.push_back(QPoint(x,	y));
    }
    */

    /*
    points.push_back(QPoint(120,	279));
    points.push_back(QPoint(263,	405));
    points.push_back(QPoint(550,	271));
    points.push_back(QPoint(306,	139));
    points.push_back(QPoint(722,	305));
    */
}

void Draw::paintEvent(QPaintEvent *e)
{
   QPainter painter(this);
   painter.begin(this);
   painter.setPen(Qt::red);

   //Draw convex hull
   painter.drawPolygon(ch);

   //Draw points
   for(int i = 0; i < points.size(); i++)
   {
       painter.drawEllipse(points[i].x()-5, points[i].y()-5, 10, 10);
       //painter.drawText(points[i].x()+10, points[i].y()+10, QString::number(i));
   }


   painter.end();
}

void Draw::mousePressEvent(QMouseEvent *e)
{
    QPoint p(e->x(), e->y());

    points.push_back(p);

    repaint();

}

void Draw::clearAll()
{
    points.clear();
    ch.clear();
}

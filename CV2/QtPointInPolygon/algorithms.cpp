#include "algorithms.h"

Algorithms::Algorithms()
{

}

int Algorithms::getPositionRay(QPoint q, std::vector<QPoint> pol)
{
    int k =0;

    //Add point to polygon
    pol.push_back(pol[0]);

    for(int i=0;i<pol.size()-1;i++){

        //Reduce the coordiates
        double xir= pol[i].x()-q.x();
        double yir= pol[i].y()-q.y();
        double xiir= pol[i+1].x()-q.x();
        double yiir= pol[i+1].y()-q.y();

        //Upper halfplane
        if((yiir>0)&&(yir<=0)||(yir>0)&&(yiir<=0))
        {
            //Right half plane
            double xm = (xiir*yir-xir*yiir)/(yiir-yir);

            if(xm >0)
             k++;
        }
    }

    return k%2;
}

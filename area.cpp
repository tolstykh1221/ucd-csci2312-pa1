#include <cmath>
#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c)
{
    double sideA,sideB,sideC,semiP,area;
    sideA = a.distanceTo(b);
    sideB = b.distanceTo(c);
    sideC = c.distanceTo(a);
    semiP = (sideA + sideB + sideC)/2;

    area = sqrt( semiP * (semiP - sideA )*(semiP - sideB)*(semiP - sideC) );

    return area;
}

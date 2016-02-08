#include <cmath>
#include "Point.h"

Point::Point()
{
    x=0;
    y=0;
    z=0;
    return;
}

Point::Point(double X, double Y, double Z)
{
    x=X;
    y=Y;
    z=Z;
    return;
}

void Point::setX(double newX)
{
    x=newX;
    return;
}

void Point::setY(double newY)
{
    y=newY;
    return;
}

void Point::setZ(double newZ)
{
    z=newZ;
    return;
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

double Point::getZ() const
{
    return z;
}

double Point::distanceTo(const Point &otherP) const
{
    double dis;
    dis = sqrt( pow(otherP.x - x,2) + pow(otherP.y - y,2) + pow(otherP.z - z,2));
    return dis;
}

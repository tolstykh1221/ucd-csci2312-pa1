// A 3-dimensional point class!
// Coordinates are double-precision floating point.
#include "Point.cpp"

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x, y, z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;
    
    // member function that finds the distance from calling point to another point
    double Point::distanceTo(const Point &otherP) const
    
};

#endif // __POINT_H

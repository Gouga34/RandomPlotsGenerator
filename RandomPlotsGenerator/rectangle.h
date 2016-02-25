#ifndef POLYGON_H
#define POLYGON_H

#include "point.h"
#include <array>

class Rectangle
{
private:
    std::array<Point, 4> m_points;

public:
    Rectangle(Point a, Point b, Point c, Point d);
    virtual ~Rectangle();
    virtual QString toString() const;
};

#endif // POLYGON_H

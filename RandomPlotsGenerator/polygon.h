#ifndef POLYGON_H
#define POLYGON_H

#include "point.h"
#include <array>

class Polygon
{
private:
    std::array<Point, 4> m_points;

public:
    Polygon(Point a, Point b, Point c, Point d);
    virtual ~Polygon();
    virtual QString toString() const;
};

#endif // POLYGON_H

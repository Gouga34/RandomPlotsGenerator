#include "polygon.h"

Polygon::Polygon(Point a, Point b, Point c, Point d) :  m_points {a, b, c, d}
{

}

Polygon::~Polygon() {

}

QString Polygon::toString() const {
    return "ST_GeomFromText('POLYGON(" + m_points[0].toString() + ", "
                                       + m_points[1].toString() + ", "
                                       + m_points[2].toString() + ", "
                                       + m_points[3].toString() + ", "
                                       + m_points[0].toString() + ")')";
}

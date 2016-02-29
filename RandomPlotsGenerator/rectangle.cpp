#include "rectangle.h"

Rectangle::Rectangle(Point a, Point b, Point c, Point d) :  m_points {a, b, c, d}
{

}

Rectangle::~Rectangle() {

}

QString Rectangle::toString() const {
    return "POLYGON((" + m_points[0].toString() + ", "
                                       + m_points[1].toString() + ", "
                                       + m_points[2].toString() + ", "
                                       + m_points[3].toString() + ", "
                                       + m_points[0].toString() + "))";
}

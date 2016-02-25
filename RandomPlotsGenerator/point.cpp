#include "point.h"

Point::Point() {

}

Point::Point(double x, double y) : m_x(x), m_y(y) {

}

Point::~Point() {

}

double Point::getX() const {
    return m_x;
}

double Point::getY() const {
    return m_y;
}

QString Point::toString() const {
    return QString::number(m_x) + " " + QString::number(m_y);
}

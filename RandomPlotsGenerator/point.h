#ifndef POINT_H
#define POINT_H

#include <QString>

class Point
{
private:
    double m_x;
    double m_y;

public:
    Point();
    Point(double x, double y);
    virtual ~Point();
    virtual double getX() const;
    virtual double getY() const;
    virtual QString toString() const;
};

#endif // POINT_H

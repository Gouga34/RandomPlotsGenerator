#include "plot.h"

Plot::Plot(QString name, PlantType type, Point a, Point b, Point c, Point d) :
    Rectangle(a, b, c, d), m_name(name), m_type(type)
{
}

Plot::~Plot() {

}

QString Plot::getName() const {
    return m_name;
}

PlantType Plot::getType() const {
    return m_type;
}

QString Plot::toString() const {
    return m_name + "\t" + PlantTypeString[static_cast<std::size_t>(m_type)] + "\t" + Rectangle::toString();
}

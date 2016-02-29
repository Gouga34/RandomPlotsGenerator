#include "plot.h"

Plot::Plot(int id, QString name, PlantType type, Point a, Point b, Point c, Point d) :
    Rectangle(a, b, c, d), m_name(name), m_type(type), m_id(id)
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

int Plot::getId() const {
    return m_id;
}

QString Plot::toString() const {
    return QString::number(m_id) + "\t" + m_name + "\t" + Rectangle::toString() + "\t" + PlantTypeString[static_cast<std::size_t>(m_type)];
}

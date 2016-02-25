#ifndef PLOT_H
#define PLOT_H

#include "Constantes.h"
#include "polygon.h"

class Plot : public Polygon
{
private:
    QString m_name;
    PlantType m_type;



public:
    Plot(QString name, PlantType type, Point a, Point b, Point c, Point d);
    virtual ~Plot();

    virtual QString getName() const;
    virtual PlantType getType() const;
    virtual QString toString() const;
};

#endif // PLOT_H

#ifndef PLOT_H
#define PLOT_H

#include "Constantes.h"
#include "rectangle.h"

class Plot : public Rectangle
{
private:
    QString m_name;
    PlantType m_type;
    int m_id;

public:
    Plot(int id, QString name, PlantType type, Point a, Point b, Point c, Point d);
    virtual ~Plot();

    virtual QString getName() const;
    virtual PlantType getType() const;
    virtual int getId() const;

    virtual QString toString() const;
};

#endif // PLOT_H

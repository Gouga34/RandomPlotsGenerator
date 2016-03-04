#ifndef RANDOMPLOTSGENERATOR_H
#define RANDOMPLOTSGENERATOR_H

#include <QList>

#include "plot.h"

class RandomPlotsGenerator
{

private:
    QList<Plot> m_plots;

    virtual void generateNbRandomPlots(int nbPlotsToGenerate);
    virtual void generateRandomPlot(int i, int j);
    virtual void writePlotsInFile() const;

public:
    RandomPlotsGenerator();
    virtual ~RandomPlotsGenerator();

    virtual void generateAndWriteRandomPlots(int nbPlotsToGenerate);
    virtual QString toString() const;
};

#endif // RANDOMPLOTSGENERATOR_H

#include "randomplotsgenerator.h"
#include "Constantes.h"

#include <stdlib.h>

RandomPlotsGenerator::RandomPlotsGenerator() {

}

RandomPlotsGenerator::~RandomPlotsGenerator() {

}

void RandomPlotsGenerator::generateRandomPlot(int i, int j) {
    Point a(i*PLOT_SIZE, j*PLOT_SIZE);
    Point b((i+1)*PLOT_SIZE, (j*PLOT_SIZE));
    Point c(i*PLOT_SIZE, (j+1)*PLOT_SIZE);
    Point d((i+1)*PLOT_SIZE, (j+1)*PLOT_SIZE);

    QString name = BASIC_PLOTS_NAME+QString::number(m_plots.size()+1);

    int typeNumber = rand() % (int) PlantType::NB_PLANT_TYPES;
    PlantType type = static_cast<PlantType>(typeNumber);

    Plot newRandomPlot(name, type, a, b, c, d);
    m_plots.append(newRandomPlot);
}

void RandomPlotsGenerator::generateNbRandomPlots() {
    for (int i = 0; i < PLOTS_NB_SQRT; i++) {
        for (int j = 0; j < PLOTS_NB_SQRT; j++) {
            generateRandomPlot(i,j);
        }
    }
}

void RandomPlotsGenerator::writePlotsInFile() const {

}

void RandomPlotsGenerator::generateAndWriteRandomPlots() {
    generateNbRandomPlots();
    writePlotsInFile();
}

QString RandomPlotsGenerator::toString() const {
    QString plots;
    for (auto a_plot : m_plots) {
        plots += a_plot.toString() + "\n";
    }

    return plots;
}

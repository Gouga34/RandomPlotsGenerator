#include "randomplotsgenerator.h"
#include "Constantes.h"
#include "filewriter.h"


RandomPlotsGenerator::RandomPlotsGenerator() {

}

RandomPlotsGenerator::~RandomPlotsGenerator() {

}

void RandomPlotsGenerator::generateRandomPlot(int i, int j) {
    Point a(i*PLOT_SIZE, j*PLOT_SIZE);
    Point b((i+1)*PLOT_SIZE, (j*PLOT_SIZE));
    Point d(i*PLOT_SIZE, (j+1)*PLOT_SIZE);
    Point c((i+1)*PLOT_SIZE, (j+1)*PLOT_SIZE);

    QString name = BASIC_PLOTS_NAME+QString::number(m_plots.size()+1);

    int typeNumber = rand() % (int) PlantType::NB_PLANT_TYPES;
    PlantType type = static_cast<PlantType>(typeNumber);

    Plot newRandomPlot(m_plots.size() ,name, type, a, b, c, d);
    m_plots.append(newRandomPlot);
}

void RandomPlotsGenerator::generateNbRandomPlots(int nbPlotsToGenerate) {
    int plots_nb_sqrt = sqrt(nbPlotsToGenerate);
    for (int i = 0; i < plots_nb_sqrt; i++) {
        for (int j = 0; j < plots_nb_sqrt; j++) {
            generateRandomPlot(i,j);
        }
    }
}

void RandomPlotsGenerator::writePlotsInFile() const {
    FileWriter fileWriter;
    fileWriter.writePlots(m_plots);
}

void RandomPlotsGenerator::generateAndWriteRandomPlots(int nbPlotsToGenerate) {
    generateNbRandomPlots(nbPlotsToGenerate);
    writePlotsInFile();
}

QString RandomPlotsGenerator::toString() const {
    QString plots;
    for (auto a_plot : m_plots) {
        plots += a_plot.toString() + "\n";
    }

    return plots;
}

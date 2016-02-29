#ifndef CONSTANTES_H
#define CONSTANTES_H

#include <QString>
#include <array>
#include <math.h>

enum class PlantType : int {
  WHEAT,
  MAIZE,
  BARLEY,
  NB_PLANT_TYPES
};

const std::array<QString,static_cast<std::size_t>(PlantType::NB_PLANT_TYPES)> PlantTypeString {
   "ble",
   "mais",
   "orge"
};

constexpr int PLOTS_NB = 10'000;
constexpr int PLOTS_NB_SQRT = sqrt(PLOTS_NB);
constexpr int PLOT_SIZE = 10;

const QString BASIC_PLOTS_NAME = "plot";

const QString FILENAME = "plots.txt";



#endif // CONSTANTES_H

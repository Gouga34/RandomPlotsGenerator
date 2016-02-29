#ifndef CONSTANTES_H
#define CONSTANTES_H

#include <QString>
#include <array>

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

constexpr int PLOT_NB = 10'000;
const QString FILENAME = "plots.txt";



#endif // CONSTANTES_H

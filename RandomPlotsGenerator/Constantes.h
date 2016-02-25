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

std::array<QString,static_cast<std::size_t>(PlantType::NB_PLANT_TYPES)> PlantTypeString {
   "ble",
   "mais",
   "orge"
};

#endif // CONSTANTES_H

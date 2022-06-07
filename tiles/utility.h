//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_UTILITY_H
#define CONGLOMERATE_UTILITY_H

#include "property.h"

#include <string>

namespace cong::Tile {
  class Utility:public Property {
  public:
    Utility(const std::string nameInit, const std::string nameShortInit, const std::string descriptionInit,
            const unsigned int priceInit, const unsigned int rentInit, const unsigned int rentBothInit,
            const unsigned int mortageInit);

  };
}

#endif //CONGLOMERATE_UTILITY_H

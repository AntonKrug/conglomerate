//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_UTILITY_H
#define CONGLOMERATE_UTILITY_H

#include "tile/property.h"

#include <string>

namespace cong::Tile {

  class Utility: public Property {
  public:
    Utility(std::string nameInit,
            std::string nameShortInit,
            unsigned int priceInit,
            unsigned int rentInit,
            unsigned int rentBothInit,
            int mortageInit);

    void displayTile(void) override;

//    int rentToPay(void) override;
//
//    void doAction(cong::Player &currentPlayer) override;

  };
}

#endif //CONGLOMERATE_UTILITY_H
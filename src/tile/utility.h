//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_UTILITY_H
#define CONGLOMERATE_UTILITY_H

#include "tile/property.h"

#include <string>

namespace cong::tile {

  class Utility: public Property {
  public:

    Utility(std::string nameInit,
            std::string nameShortInit,
            unsigned int priceInit,
            unsigned int rentInit,
            unsigned int rentBothInit,
            unsigned int mortgageInit) noexcept;

    void displayTile() override;

    unsigned int rentToPay(cong::Player &currentPlayer) override;

//    void doAction(cong::Player &currentPlayer) override;

  };
}

#endif //CONGLOMERATE_UTILITY_H

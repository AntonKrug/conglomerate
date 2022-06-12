//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_COUNTY_H
#define CONGLOMERATE_COUNTY_H

#include "tile/color.h"
#include "tile/property.h"

namespace cong::Tile {

  class County : public Tile::Property {
  public:
    Color color;
    int upgradeLevel;

    unsigned int costToUpgrade; // upgrade to levels 1-4 of houses, then level 5 hotel

    County(
        std::string nameInit,
        std::string nameShortInit,
        cong::Tile::Color colorInit,
        unsigned int priceInit,
        std::array<unsigned int, 6> rentInit,
        unsigned int costToUpgradeInit,
        unsigned int mortgageInit
        ) noexcept;

    void upgradeIncrement();

    void upgradeStripDown();

    void displayTile() override;

//    void doAction(Player &currentPlayer);
  };

}

#endif //CONGLOMERATE_COUNTY_H

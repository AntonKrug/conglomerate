//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_COUNTY_H
#define CONGLOMERATE_COUNTY_H

#include "color.h"
#include "property.h"

namespace cong::Tile {

  class County : public Tile::Property {
  public:
    Color color;
    int upgradeLevel;

    int costHouse; // upgrade 1-4 levels
    int costHotel; // upgrade to level 5 hotel

    void upgradeIncrement();

    void upgradeStripDown();

    void doAction(Player &currentPlayer);
  };


}

#endif //CONGLOMERATE_COUNTY_H

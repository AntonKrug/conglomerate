//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_PROPERTY_H
#define CONGLOMERATE_PROPERTY_H

#include "interface.h"

#include <array>

namespace cong::Tile {

  class Property : public Tile::Basic {
  public:
    unsigned int price;

    bool mortaged;
    int mortage;

    Player *owner;

    // For County 4 levels of houses to rent + level 5 is hotel rent
    // For Province 1-4 rents for how many provinces are owned
    // For Utility 1-2 rents for how many utilities are owned
    std::array<unsigned int, 5> rent;

    Property(const Tile::Type typeInit, const std::string nameInit, const std::string shortNameInit,
             const std::string descriptionInit, const unsigned int priceInit, unsigned int mortageInit,
             std::array<unsigned int, 5> rentInit);

  };

}

#endif //CONGLOMERATE_PROPERTY_H

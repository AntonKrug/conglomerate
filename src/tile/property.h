//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_PROPERTY_H
#define CONGLOMERATE_PROPERTY_H

#include "tile/interface.h"
#include "player.h"  //TODO: is it really needed?

#include <array>

namespace cong::Tile {

  class Property : public cong::Tile::Basic {
  public:
    unsigned int price;

    bool mortaged;
    int mortage;

    cong::Player *owner;

    // For County 4 levels of houses to rent + level 5 is hotel rent
    // For Province 1-4 rents for how many provinces are owned
    // For Utility 1-2 rents for how many utilities are owned
    std::array<unsigned int, 5> rent;

    Property(Tile::Type typeInit,
             std::string nameInit,
             std::string shortNameInit,
             std::string descriptionInit,
             unsigned int priceInit,
             std::array<unsigned int, 5> rentInit,
             int mortageInit);

    virtual void displayTile(void) = 0;

//    virtual int rentToPay(void) = 0;

//    virtual void doAction(Player &currentPlayer) = 0;

  };

}

#endif //CONGLOMERATE_PROPERTY_H

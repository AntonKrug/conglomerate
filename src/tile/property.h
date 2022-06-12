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

    bool mortgaged;
    unsigned int mortgage;

    cong::Player *owner;

    // For County level 0 for no upgrades, 4 levels of houses to rent + level 5 is hotel rent
    // For Province 0-3 rents for how many provinces are owned (1-4)
    // For Utility 0-1 rents for how many utilities are owned (1-2)
    std::array<unsigned int, 6> rent;

    Property(Tile::Type typeInit,
             std::string nameInit,
             std::string nameShortInit,
             std::string descriptionInit,
             unsigned int priceInit,
             std::array<unsigned int, 6> rentInit,
             unsigned int mortgageInit);

//    virtual void displayTile(void) = 0;

//    virtual int rentToPay(void) = 0;

//    virtual void doAction(Player &currentPlayer) = 0;

  };

}

#endif //CONGLOMERATE_PROPERTY_H

//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_PROPERTY_H
#define CONGLOMERATE_PROPERTY_H

#include "tile/interface.h"

#include <array>

// Forward declarations
namespace cong {
  class Player;
}


// Real declarations
namespace cong::tile {

  class Property : public cong::tile::Basic {
  public:
    const unsigned int price;

    bool mortgaged;
    const unsigned int mortgage;

    cong::Player *owner;

    // For County level 0 for no upgrades, 4 levels of houses to rent + level 5 is hotel rent
    // For Province 0-3 rents for how many provinces are owned (1-4)
    // For Utility 0-1 rents for how many utilities are owned (1-2)
    std::array<unsigned int, 6> rent;


    Property(tile::Type typeInit,
             std::string nameInit,
             std::string nameShortInit,
             std::string descriptionInit,
             unsigned int priceInit,
             std::array<unsigned int, 6> rentInit,
             unsigned int mortgageInit) noexcept;

    virtual unsigned int rentToPay(cong::Player &currentPlayer) = 0;

  };

}

#endif //CONGLOMERATE_PROPERTY_H

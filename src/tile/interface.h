//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_TILE_INTERFACE_H
#define CONGLOMERATE_TILE_INTERFACE_H

#include "player.h"

#include "tile/type.h"

#include <string>

namespace cong::tile {

  class Basic {
  public:

    tile::Type type;
    std::string name;
    std::string nameShort;
    std::string description;
    bool canBePurchased;


    Basic(tile::Type typeInit,
          std::string nameInit,
          std::string nameShortInit,
          std::string descriptionInit,
          bool canBePurchasedInit) noexcept;


    virtual void displayTile() = 0;

//    virtual void doAction(Player &currentPlayer) = 0;

  };

}
#endif //CONGLOMERATE_TILE_INTERFACE_H

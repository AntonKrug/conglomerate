//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_TILE_INTERFACE_H
#define CONGLOMERATE_TILE_INTERFACE_H

#include "player.h"

#include "tile/type.h"

#include <string>

namespace cong::Tile {

  class Basic {
  public:
    Tile::Type type;
    std::string name;
    std::string shortName;
    std::string description;
    bool canBePurchased;

    Basic(Tile::Type typeInit,
          std::string nameInit,
          std::string shortNameInit,
          std::string descriptionInit,
          bool canBePurchasedInit);

    virtual void displayTile() = 0;

//    virtual int rentToPay() = 0;

//    virtual void doAction(Player &currentPlayer) = 0;
  };

}
#endif //CONGLOMERATE_TILE_INTERFACE_H

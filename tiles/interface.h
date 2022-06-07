//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_TILE_INTERFACE_H
#define CONGLOMERATE_TILE_INTERFACE_H

#include "../player.h"

#include "type.h"

#include <string>

namespace cong::Tile {

  class Basic {
  public:
    Tile::Type type;
    std::string name;
    std::string shortName;
    std::string description;
    bool canBePurchased;

    Basic(const Tile::Type typeInit, const std::string nameInit, const std::string shortNameInit,
          const std::string descriptionInit, const bool canBePurchasedInit);

    virtual void displayTile(void) = 0;

    virtual int rentToPay(void) = 0;

    virtual void doAction(Player &currentPlayer) = 0;
  };

}
#endif //CONGLOMERATE_TILE_INTERFACE_H

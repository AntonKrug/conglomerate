//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_INTERFACE_H
#define CONGLOMERATE_INTERFACE_H

#include "../player.h"

#include <string>

namespace Tile {

  class Basic {
  public:
    std::string name;
    std::string shortName;
    std::string description;
    bool        canBePurchased;

    virtual void displayTile(void);
    virtual int  rentToPay(void);
    virtual void doAction(Player &currentPlayer);
  };

}


#endif //CONGLOMERATE_INTERFACE_H

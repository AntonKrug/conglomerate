//
// Created by anton.krug@gmail.com on 13/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_JAIL_H
#define CONGLOMERATE_JAIL_H

#include "interface.h"

#include <iostream>

namespace cong::tile {

  class Jail: public cong::tile::Basic {
  public:

    Jail();

    void displayTile() override;
  };

}

#endif //CONGLOMERATE_JAIL_H

//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_NOP_H
#define CONGLOMERATE_NOP_H

#include "interface.h"

namespace cong::tile {

  class Nop: public cong::tile::Basic {
  public:

    Nop(std::string nameInit, std::string nameShortInit, std::string descriptionInit) noexcept;

    void displayTile() override;

  };

}

#endif //CONGLOMERATE_NOP_H

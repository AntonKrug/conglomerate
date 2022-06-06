//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_BOARD_H
#define CONGLOMERATE_BOARD_H

#include "tiles/interface.h"

#include <array>

class Board {
public:
  const std::array<Tile,1> tiles;
};

#endif //CONGLOMERATE_BOARD_H

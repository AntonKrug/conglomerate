//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_BOARD_H
#define CONGLOMERATE_BOARD_H

#include "tile/interface.h"
#include "tile/province.h"
#include "tile/utility.h"

#include <array>

namespace cong {

  class Board {
  public:
    const std::array<cong::Tile::Basic *, 6> tiles = {{
      new Tile::Utility("Post Office", "Post", 1500u, 40u, 100u, 750u),
      new Tile::Utility("Internet",    "Inet", 1500u, 40u, 100u, 750u),

      new Tile::Province("Munster",    "P:Mu", 2000u, {{ 250u, 500u, 1000u, 2000u, 0u }}, 1000u),
      new Tile::Province("Connaught",  "P:Co", 2000u, {{ 250u, 500u, 1000u, 2000u, 0u }}, 1000u),
      new Tile::Province("Leinster",   "P:Le", 2000u, {{ 250u, 500u, 1000u, 2000u, 0u }}, 1000u),
      new Tile::Province("Ulster",     "P:Ul", 2000u, {{ 250u, 500u, 1000u, 2000u, 0u }}, 1000u),
    }};

    Board();

    void listTiles() const;

//    const std::array<int, 1> tiles = {{1}};

  };

}




#endif //CONGLOMERATE_BOARD_H

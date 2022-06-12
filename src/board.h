//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_BOARD_H
#define CONGLOMERATE_BOARD_H

#include "tile/interface.h"
#include "tile/province.h"
#include "tile/utility.h"
#include "tile/county.h"
#include "tile/nop.h"

#include <array>

namespace cong {

  class Board {
  private:
    static cong::Tile::Utility post;
    static cong::Tile::Utility internet;

    static cong::Tile::Province munster;
    static cong::Tile::Province connaught;
    static cong::Tile::Province leinster;
    static cong::Tile::Province ulster;

    static cong::Tile::County westmeath;
    static cong::Tile::County donegal;

    static cong::Tile::County sligo;
    static cong::Tile::County down;
    static cong::Tile::County laois;

    static cong::Tile::County tyrone;
    static cong::Tile::County cavan;
    static cong::Tile::County kerry;

    static cong::Tile::County fermanagh;
    static cong::Tile::County leitrim;
    static cong::Tile::County galway;

    static cong::Tile::County meath;
    static cong::Tile::County kilkenny;
    static cong::Tile::County offaly;

    static cong::Tile::County mayo;
    static cong::Tile::County dublin;
    static cong::Tile::County louth;

    static cong::Tile::County wexford;
    static cong::Tile::County limerick;
    static cong::Tile::County waterford;

    static cong::Tile::County cork;
    static cong::Tile::County roscommon;

    static cong::Tile::Nop go;
    static cong::Tile::Nop parking;

  public:
    constexpr static std::array<cong::Tile::Basic *, 30> tiles = {{
      &post,
      &internet,

      &munster,
      &connaught,
      &leinster,
      &ulster,

      &westmeath,
      &donegal,

      &sligo,
      &down,
      &laois,

      &tyrone,
      &cavan,
      &kerry,

      &fermanagh,
      &leitrim,
      &galway,

      &meath,
      &kilkenny,
      &offaly,

      &mayo,
      &dublin,
      &louth,

      &wexford,
      &limerick,
      &waterford,

      &cork,
      &roscommon,

      &go,
      &parking,
    }};


    static void listTiles(); // can't be listTiles() const as now it doesn't have access to the object's variables

    static void reset();


  };

}




#endif //CONGLOMERATE_BOARD_H

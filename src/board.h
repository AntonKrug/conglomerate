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
#include "tile/pickCard.h"
#include "tile/action.h"

#include <array>

namespace cong {

  class Board {
  private:
    static cong::tile::Utility post;
    static cong::tile::Utility internet;

    static cong::tile::Province munster;
    static cong::tile::Province connaught;
    static cong::tile::Province leinster;
    static cong::tile::Province ulster;

    static cong::tile::County westmeath;
    static cong::tile::County donegal;

    static cong::tile::County sligo;
    static cong::tile::County down;
    static cong::tile::County laois;

    static cong::tile::County tyrone;
    static cong::tile::County cavan;
    static cong::tile::County kerry;

    static cong::tile::County fermanagh;
    static cong::tile::County leitrim;
    static cong::tile::County galway;

    static cong::tile::County meath;
    static cong::tile::County kilkenny;
    static cong::tile::County offaly;

    static cong::tile::County mayo;
    static cong::tile::County dublin;

    static cong::tile::Nop go;
    static cong::tile::Nop parking;

    static cong::tile::PickCard chance;
    static cong::tile::PickCard community;

    static cong::tile::Action goToJail;
    static cong::tile::Action incomeTax;
    static cong::tile::Action dutyPayment;

  public:
    constexpr static std::array<cong::tile::Basic *, 31> tiles = {{
      &go,

      &westmeath,
      &donegal,

      &incomeTax,

      &munster,

      &sligo,
      &chance,
      &down,
      &laois,

      //jail

      &tyrone,
      &cavan,
      &post,
      &kerry,

      &connaught,

      &fermanagh,
      &leitrim,
      &community,
      &galway,

      &parking,

      &meath,
      &kilkenny,
      &chance,
      &offaly,

      &leinster,

      &mayo,
      &community,
      &dublin,
      &ulster,

      &internet,
      &goToJail,

      &dutyPayment,
    }};


    static void listTiles(); // can't be listTiles() const as now it doesn't have access to the object's variables

    static void reset();


  };

}




#endif //CONGLOMERATE_BOARD_H

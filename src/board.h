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
#include "tile/jail.h"

#include <array>
#include <memory>

namespace cong {

  class Board {
  private:
    static cong::tile::Action   goToJail;
    static cong::tile::Action   incomeTax;
    static cong::tile::Action   dutyPayment;

    static cong::tile::Nop      go;
    static cong::tile::Nop      parking;

    static cong::tile::PickCard chance;
    static cong::tile::PickCard community;

    static cong::tile::Jail     jail;

  public:
    std::array<cong::tile::Basic*, 32> tiles;

    Board();

    ~Board();


    void listTiles() const;


  };

}




#endif //CONGLOMERATE_BOARD_H

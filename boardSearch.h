//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_BOARDSEARCH_H
#define CONGLOMERATE_BOARDSEARCH_H

#include "tiles/color.h"
#include "tiles/type.h"
#include "menu/item.h"
#include "board.h"

namespace cong {

  class BoardSearch {
  private:
    Board &board;

  public:
    BoardSearch(Board &boardInit);

    BoardSearch *filterColor(Tile::Color color);

    BoardSearch *filterOwner(Player &player);

    BoardSearch *filterType(Tile::Type type);

    BoardSearch *filterMortaged(bool mortaged);

    unsigned int size();

    std::vector<Menu::Item> toMenu();
  };
}

#endif //CONGLOMERATE_BOARDSEARCH_H


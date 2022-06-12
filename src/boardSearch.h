//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_BOARDSEARCH_H
#define CONGLOMERATE_BOARDSEARCH_H

#include "tile/color.h"
#include "tile/type.h"
#include "menu/item.h"
#include "board.h"

namespace cong {

  class BoardSearch {
  private:
    Board &board;

    bool whereColor;
    bool whereOwner;
    bool whereType;
    bool whereMortaged;

    tile::Color color;
    Player player;
    tile::Type type;
    bool mortaged;

    bool justCounting;
    std::vector<menu::Item> menu;

    unsigned int executeSearch(void);

  public:
    BoardSearch(Board &boardInit);

    BoardSearch *filterColor(tile::Color searchColor);

    BoardSearch *filterOwner(Player &searchPlayer);

    BoardSearch *filterType(tile::Type searchType);

    BoardSearch *filterMortaged(bool searchMortaged);

    unsigned int size();

    std::vector<menu::Item> toMenu();
  };
}

#endif //CONGLOMERATE_BOARDSEARCH_H


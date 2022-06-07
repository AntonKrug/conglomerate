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

    bool whereColor;
    bool whereOwner;
    bool whereType;
    bool whereMortaged;

    Tile::Color color;
    Player player;
    Tile::Type type;
    bool mortaged;

    bool justCounting;
    std::vector<Menu::Item> menu;

    unsigned int executeSearch(void);

  public:
    BoardSearch(Board &boardInit);

    BoardSearch *filterColor(Tile::Color searchColor);

    BoardSearch *filterOwner(Player &searchPlayer);

    BoardSearch *filterType(Tile::Type searchType);

    BoardSearch *filterMortaged(bool searchMortaged);

    unsigned int size();

    std::vector<Menu::Item> toMenu();
  };
}

#endif //CONGLOMERATE_BOARDSEARCH_H


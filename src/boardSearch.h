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
    bool whereColor;
    bool whereOwner;
    bool whereType;
    bool whereMortaged;

    cong::tile::Color color;
    cong::Player *player;
    cong::tile::Type type;
    bool mortaged;

    unsigned int foundIndex;
    cong::tile::Basic *foundTile;
    std::vector<cong::menu::Item> menu;

    unsigned int executeSearch(bool populateMenu, bool stopAfterFirstMatch);

  public:
    BoardSearch();

    BoardSearch *filterColor(cong::tile::Color searchColor);

    BoardSearch *filterOwner(cong::Player *searchPlayer);

    BoardSearch *filterType(cong::tile::Type searchType);

    BoardSearch *filterMortaged(bool searchMortaged);

    unsigned int getSize();

    unsigned int getIndex();

    cong::tile::Basic* getTile();

    std::vector<cong::menu::Item> getMenu();
  };
}

#endif //CONGLOMERATE_BOARDSEARCH_H


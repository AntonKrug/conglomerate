//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_BOARDSEARCH_H
#define CONGLOMERATE_BOARDSEARCH_H

#include "tile/color.h"
#include "tile/type.h"

#include <vector>
#include <string>


// Forward declarations
namespace cong {
  class Player;
  class Board;

  namespace tile {
    class Basic;
  }

  namespace menu {
    class Item;
  }
}


// Real declaration
namespace cong {

  class BoardSearch {
  private:
    Board &board;
    bool whereName;
    bool whereColor;
    bool whereOwner;
    bool whereType;
    bool whereMortgaged;

    std::string name;
    cong::tile::Color color;
    cong::Player *player;
    cong::tile::Type type;
    bool mortgage;

    int foundPosition;
    std::vector<cong::tile::Basic*> foundTiles;
    std::vector<cong::menu::Item*> menu;

    unsigned int executeSearch(bool populateMenu, bool stopAfterFirstMatch);

  public:
    BoardSearch(Board &boardInit);

    BoardSearch *filterName(std::string searchName);

    BoardSearch *filterColor(cong::tile::Color searchColor);

    BoardSearch *filterOwner(cong::Player *searchPlayer);

    BoardSearch *filterType(cong::tile::Type searchType);

    BoardSearch *filterMortaged(bool searchMortaged);

    unsigned int getSize();

    int getPosition();

    std::vector<cong::tile::Basic*> getTiles();

    std::vector<cong::menu::Item*> getMenu();
  };
}

#endif //CONGLOMERATE_BOARDSEARCH_H


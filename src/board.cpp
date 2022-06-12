//
// Created by anton.krug@gmail.com on 10/06/22.
// License: MIT
//

#include "board.h"

cong::Board::Board() {
}

void cong::Board::listTiles() const {
  for (auto tile:tiles) {
    tile->displayTile();
  }
}


cong::Board::~Board() {
  for (auto tile:tiles) {
    delete tile;
  }

}

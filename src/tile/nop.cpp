//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#include "tile/nop.h"
#include "tile/type.h"

#include <iostream>

cong::Tile::Nop::Nop(std::string nameInit, std::string nameShortInit, std::string descriptionInit) :
  cong::Tile::Basic(
      cong::Tile::Type::Nop,
      std::move(nameInit),
      std::move(nameShortInit),
      std::move(descriptionInit),
      false)
{ }

void cong::Tile::Nop::displayTile() {
  std::cout << "No-operation tile " << name << std::endl;
}

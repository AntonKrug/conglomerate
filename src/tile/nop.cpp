//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#include "tile/nop.h"
#include "tile/type.h"

#include <iostream>
#include <type_traits>

static_assert(!std::is_abstract<cong::tile::Nop>(), "cong::tile::Nop should not be abstract");


cong::tile::Nop::Nop(std::string nameInit, std::string nameShortInit, std::string descriptionInit) noexcept :
  cong::tile::Basic(
      cong::tile::Type::Nop,
      std::move(nameInit),
      std::move(nameShortInit),
      std::move(descriptionInit),
      false)
  { }


void cong::tile::Nop::displayTile() {
  std::cout << "No-operation tile " << name << std::endl;
}

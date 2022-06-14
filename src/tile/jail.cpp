//
// Created by anton.krug@gmail.com on 13/06/22.
// License: MIT
//

#include "jail.h"

#include <type_traits>

static_assert(!std::is_abstract<cong::tile::Jail>(), "cong::tile::Jail should not be abstract");


cong::tile::Jail::Jail():
    cong::tile::Basic(
        cong::tile::Type::Jail,
        "Jail",
        "Jail",
        "",
        false)
{ }


void cong::tile::Jail::displayTile() {
  std::cout << "Jail type tile" << std::endl;
}

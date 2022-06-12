//
// Created by anton.krug@gmail.com on 09/06/22.
// License: MIT
//

#include "province.h"

#include <utility>
#include <iostream>
#include <type_traits>

static_assert(!std::is_abstract<cong::tile::Province>(), "cong::tile::Province should not be abstract");


cong::tile::Province::Province(
    std::string nameInit,
    std::string nameShortInit,
    unsigned int priceInit,
    std::array<unsigned int, 6> rentInit,
    unsigned int mortgageInit) noexcept:

    Property(
        Type::Province,
        std::move(nameInit),
        std::move(nameShortInit),
        "",
        priceInit,
        rentInit,    // can do trivial copy, no need for std::move
        mortgageInit
        )
    { } // Nothing to do in the constructor


void cong::tile::Province::displayTile() {
  std::cout << "Province " << name << std::endl;
}


unsigned int cong::tile::Province::rentToPay(cong::Player &currentPlayer) {
  return 0;
}


//void cong::Tile::Province::doAction(cong::Player &currentPlayer) {
//
//}

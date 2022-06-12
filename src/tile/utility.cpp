//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//
#include "tile/utility.h"
#include "tile/type.h"

#include <string>

#include <iostream>
#include <utility>
#include <type_traits>

static_assert(!std::is_abstract<cong::tile::Utility>(), "cong::tile::Utility should not be abstract");


cong::tile::Utility::Utility(
    std::string nameInit,
    std::string nameShortInit,
    const unsigned int priceInit,
    const unsigned int rentInit,
    const unsigned int rentBothInit,
    const unsigned int mortgageInit) noexcept :

    Property(
        Type::Utility,
        std::move(nameInit),
        std::move(nameShortInit),
        "",
        priceInit,
        {rentInit, rentBothInit, 0, 0, 0, 0},
        mortgageInit)
    { }  // Do nothing in the constructor


void cong::tile::Utility::displayTile() {
  std::cout << "Utility " << name << std::endl;
}


unsigned int cong::tile::Utility::rentToPay(cong::Player &currentPlayer) {
  return 0;
}

//
//void cong::Tile::Utility::doAction(cong::Player &currentPlayer) {
//
//}

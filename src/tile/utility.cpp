//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//
#include "tile/utility.h"
#include "tile/type.h"

#include <string>

#include <type_traits>
#include <utility>
#include <iostream>

static_assert(!std::is_abstract<cong::Tile::Utility>(), "cong::Tile::Utility should not be abstract");


cong::Tile::Utility::Utility(
    std::string nameInit,
    std::string nameShortInit,
    const unsigned int priceInit,
    const unsigned int rentInit,
    const unsigned int rentBothInit,
    const int mortageInit):

    Property(
        Type::Utility,
        std::move(nameInit),
        std::move(nameShortInit),
        std::move(""),
        priceInit,
        {rentInit, rentBothInit, 0, 0, 0},
        mortageInit)
{
  // Do nothing in the constructor
}

void cong::Tile::Utility::displayTile() {
  std::cout << "Utility " << name << std::endl;
}

//
//int cong::Tile::Utility::rentToPay(void) {
//  return 0;
//}
//
//void cong::Tile::Utility::doAction(cong::Player &currentPlayer) {
//
//}

//
// Created by anton.krug@gmail.com on 09/06/22.
// License: MIT
//

#include "province.h"

#include <utility>
#include <iostream>

cong::Tile::Province::Province(
    std::string nameInit,
    std::string nameShortInit,
    unsigned int priceInit,
    std::array<unsigned int, 6> rentInit,
    int mortageInit):

    Property(
        Type::Province,
        std::move(nameInit),
        std::move(nameShortInit),
        std::move(""),
        priceInit,
        std::move(rentInit),
        mortageInit
        )

{
  // Nothing to do in the constructor
}

void cong::Tile::Province::displayTile(void) {
  std::cout << "Province " << name << std::endl;
}

//int cong::Tile::Province::rentToPay(void) {
//  return 0;
//}
//
//void cong::Tile::Province::doAction(cong::Player &currentPlayer) {
//
//}

//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#include "county.h"

#include <iostream>
#include <type_traits>

static_assert(!std::is_abstract<cong::tile::County>(), "cong::tile::County should not be abstract");


cong::tile::County::County(
    std::string nameInit,
    std::string nameShortInit,
    cong::tile::Color colorInit,
    unsigned int priceInit,
    std::array<unsigned int, 6> rentInit,
    unsigned int costToUpgradeInit,
    unsigned int mortgageInit) noexcept :

    tile::Property(
        cong::tile::Type::County,
        std::move(nameInit),
        std::move(nameShortInit),
        "",
        priceInit,
        rentInit,
        mortgageInit),

    upgradeLevel(0),
    color(colorInit),
    costToUpgrade(costToUpgradeInit)

    { }


void cong::tile::County::upgradeIncrement() {

}


void cong::tile::County::upgradeStripDown() {

}


unsigned int cong::tile::County::rentToPay(cong::Player &currentPlayer)  {
  return 0;
}


void cong::tile::County::displayTile() {
    std::cout << "County " << name << std::endl;
}

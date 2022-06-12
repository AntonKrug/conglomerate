//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#include "county.h"

cong::Tile::County::County(
    std::string nameInit,
    std::string nameShortInit,
    cong::Tile::Color colorInit,
    unsigned int priceInit,
    std::array<unsigned int, 6> rentInit,
    unsigned int costToUpgradeInit,
    unsigned int mortgageInit) :

    Tile::Property(
        cong::Tile::Type::County,
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

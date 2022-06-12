//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#include "tile/property.h"
#include "tile/type.h"

#include <type_traits>
#include <utility>

static_assert(std::is_abstract<cong::Tile::Property>(), "cong::Tile::Property should be abstract");

cong::Tile::Property::Property(
    const Tile::Type typeInit,
    std::string nameInit,
    std::string nameShortInit,
    std::string descriptionInit,
    const unsigned int priceInit,
    std::array<unsigned int, 6> rentInit,
    const int mortageInit):

    Tile::Basic(typeInit,
               std::move(nameInit),
               std::move(nameShortInit),
               std::move(descriptionInit),
               true),
    price(priceInit),
    mortaged(false),
    mortage(mortageInit),
    owner(nullptr),
    rent(rent)
    {
      // Nothing to do in the constructor
    }

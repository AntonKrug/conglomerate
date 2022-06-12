//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#include "tile/property.h"
#include "tile/type.h"

#include <type_traits>
#include <utility>

static_assert(std::is_abstract<cong::tile::Property>(), "cong::Tile::Property should be abstract");

cong::tile::Property::Property(
    const tile::Type typeInit,
    std::string nameInit,
    std::string nameShortInit,
    std::string descriptionInit,
    const unsigned int priceInit,
    std::array<unsigned int, 6> rentInit,
    const unsigned int mortgageInit):

    tile::Basic(typeInit,
                std::move(nameInit),
                std::move(nameShortInit),
                std::move(descriptionInit),
                true),
    price(priceInit),
    mortgaged(false),
    mortgage(mortgageInit),
    owner(nullptr),
    rent(rentInit)
    {
      // Nothing to do in the constructor
    }

//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#include "property.h"
#include "type.h"

#include <type_traits>

static_assert(std::is_abstract<cong::Tile::Property>(), "cong::Tile::Property should be abstract");

cong::Tile::Property::Property(const Tile::Type typeInit, const std::string nameInit, const std::string shortNameInit,
                               const std::string descriptionInit, const unsigned int priceInit,
                               unsigned int mortageInit, std::array<unsigned int, 5> rentInit):

                               Tile::Basic(typeInit, nameInit, shortNameInit, descriptionInit, true),
                               price(priceInit),
                               mortaged(false),
                               mortage(mortageInit),
                               owner(nullptr),
                               rent(rent){
}

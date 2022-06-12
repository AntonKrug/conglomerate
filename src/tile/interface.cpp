//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#include "tile/interface.h"

#include <type_traits>
#include <utility>

static_assert(std::is_abstract<cong::Tile::Basic>(), "cong::Tile::Basic should be abstract");

cong::Tile::Basic::Basic(const cong::Tile::Type typeInit,
                         const std::string nameInit,
                         const std::string nameShortInit,
                         const std::string descriptionInit,
                         const bool canBePurchasedInit):

                         type(typeInit),
                         name(std::move(nameInit)),
                         nameShort(std::move(nameShortInit)),
                         description(std::move(descriptionInit)),
                         canBePurchased(canBePurchasedInit)
{
  // Nothing to do in the constructor
}

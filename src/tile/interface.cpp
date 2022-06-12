//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#include "tile/interface.h"

#include <type_traits>
#include <utility>

static_assert(std::is_abstract<cong::tile::Basic>(), "cong::Tile::Basic should be abstract");


cong::tile::Basic::Basic(const cong::tile::Type typeInit,
                         std::string nameInit,
                         std::string nameShortInit,
                         std::string descriptionInit,
                         const bool canBePurchasedInit) noexcept :

                         type(typeInit),
                         name(std::move(nameInit)),
                         nameShort(std::move(nameShortInit)),
                         description(std::move(descriptionInit)),
                         canBePurchased(canBePurchasedInit)
{
  // Nothing to do in the constructor
}

//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#include "interface.h"

cong::Tile::Basic::Basic(const cong::Tile::Type typeInit,
                         const std::string nameInit,
                         const std::string shortNameInit,
                         const std::string descriptionInit,
                         const bool canBePurchasedInit):
                         type(typeInit),
                         name(nameInit),
                         shortName(shortNameInit),
                         description(descriptionInit),
                         canBePurchased(canBePurchasedInit) {
}

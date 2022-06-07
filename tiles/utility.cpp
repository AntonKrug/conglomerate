//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#include "utility.h"
#include "type.h"

#include <string>

cong::Tile::Utility::Utility(const std::string nameInit,
                             const std::string nameShortInit,
                             const std::string descriptionInit,
                             const unsigned int priceInit,
                             const unsigned int rentInit,
                             const unsigned int rentBothInit,
                             const unsigned int mortageInit):
                             Property(Type::Utility,
                                      nameInit, nameShortInit, descriptionInit,
                                      priceInit, mortageInit,
                                      {rentInit, rentBothInit, 0, 0, 0})
                             {

}

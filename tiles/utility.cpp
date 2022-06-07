//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#include "utility.h"
#include "type.h"

#include <string>

#include <type_traits>

static_assert(!std::is_abstract<cong::Tile::Utility>(), "cong::Tile::Utility should not be abstract");


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

void cong::Tile::Utility::displayTile(void) {

}

int cong::Tile::Utility::rentToPay(void) {
  return 0;
}

void cong::Tile::Utility::doAction(cong::Player &currentPlayer) {

}

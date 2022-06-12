//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#include "tile/action.h"
#include "tile/type.h"

#include <utility>
#include <iostream>
#include <type_traits>

static_assert(!std::is_abstract<cong::tile::Action>(), "cong::tile::Action should not be abstract");


cong::tile::Action::Action(
    std::string nameInit,
    std::string nameShortInit,
    std::string descriptionInit,
    const bool goToJailInit,
    const unsigned int payAmountInit,
    const unsigned int payPercentageInit) noexcept :

    cong::tile::Basic(
        cong::tile::Type::Action,
        std::move(nameInit),
        std::move(nameShortInit),
        std::move(descriptionInit),
        false
        ),

    goToJail(goToJailInit),
    payAmount(payAmountInit),
    payPercentage(payPercentageInit)

    { }


void cong::tile::Action::displayTile() {
  std::cout << "Action " << name << std::endl;
}

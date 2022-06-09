//
// Created by anton.krug@gmail.com on 02/06/22.
// License: MIT
//

#include "card/card.h"

#include <utility>

// instead of const references, do not use references, but use std::move

cong::Card::Card(
    std::string textInit,
    const bool keepTheCardInit,
    const int cashFlowInit,
    std::function<void(cong::Player &, const cong::Board &)> doActionInit) :

    text(std::move(textInit)),
    keepTheCard(keepTheCardInit),
    cashFlow(cashFlowInit),
    doAction(std::move(doActionInit))
    {}

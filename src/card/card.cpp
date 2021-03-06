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
  std::function<void(cong::Game &)> doActionInit) noexcept :

  text(std::move(textInit)),
  keepTheCard(keepTheCardInit),
  cashFlow(cashFlowInit),
  doAction(std::move(doActionInit))
  {}


cong::Card::Card(
  std::string textInit,
  bool keepTheCardInit,
  int cashFlowInit) noexcept :

  text(std::move(textInit)),
  keepTheCard(keepTheCardInit),
  cashFlow(cashFlowInit)
  {}


void cong::Card::swap(cong::Card &other) {
  std::swap(text, other.text);
  std::swap(keepTheCard, other.keepTheCard);
  std::swap(cashFlow, other.cashFlow);
  doAction.swap(other.doAction);
}


//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#include "pickCard.h"

#include <iostream>
#include <type_traits>

static_assert(!std::is_abstract<cong::tile::PickCard>(), "cong::tile::PickCard should not be abstract");


cong::tile::PickCard::PickCard(const cong::Deck deck) :
  Basic(
      cong::tile::Type::PickCard,
      cong::deckToString(deck),
      "Card",
      "Draw a card",
      false)
  , deck(deck)
  {}


void cong::tile::PickCard::displayTile() {
  std::cout << "Pick card -> " << name << std::endl;
}

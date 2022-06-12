//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#include "pickCard.h"

#include <iostream>

cong::Tile::PickCard::PickCard(const cong::Deck deck) :
  Basic(
      cong::Tile::Type::PickCard,
      cong::deckToString(deck),
      "Card",
      "Draw a card",
      false)
  , deck(deck)
  {}


void cong::Tile::PickCard::displayTile() {
  std::cout << "Pick card -> " << name << std::endl;
}

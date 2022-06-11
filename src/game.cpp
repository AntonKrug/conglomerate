//
// Created by anton.krug@gmail.com on 11/06/22.
// License: MIT
//
#include "game.h"

#include <random>

void cong::Game::shuffleCards() {
  std::shuffle(cardsChance.begin(), cardsChance.end(), std::mt19937(std::random_device()()));
}


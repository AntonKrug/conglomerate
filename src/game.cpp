//
// Created by anton.krug@gmail.com on 11/06/22.
// License: MIT
//
#include "game.h"

#include <random>

void cong::Game::shuffleCards() {
  for (int i=0; i<10; i++) {
    std::shuffle(cardsChance.begin(), cardsChance.end(), std::mt19937(std::random_device()()));
  }
}


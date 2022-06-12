//
// Created by anton.krug@gmail.com on 11/06/22.
// License: MIT
//
#include "game.h"

#include <random>

void cong::Game::shuffleCards() {
  for (int i=0; i<10; i++) {
    // Shuffle both decks 10 times
    std::shuffle(cards[0].begin(), cards[0].end(), std::mt19937(std::random_device()()));
    std::shuffle(cards[1].begin(), cards[1].end(), std::mt19937(std::random_device()()));
  }
}


//
// Created by anton.krug@gmail.com on 11/06/22.
// License: MIT
//
#include "game.h"
#include "card/deck.h"

#include <random>


cong::Card cong::Game::cardGetOutJail("Get out of Jail card. This card may be kept until needed or sold.", true, 0, [] (cong::Game &game) {
  // TODO: does player need state for being stuck in jail? So we can unstuck him?
  // TODO: does the card have value, to be sold?
});


void cong::Game::shuffleCards() {
  for (int i=0; i<10; i++) {
    // Shuffle both decks 10 times
    std::shuffle(deck[cong::deckToInt(cong::Deck::Chance)].begin(),    deck[cong::deckToInt(cong::Deck::Chance)].end(),    std::mt19937(std::random_device()()));
    std::shuffle(deck[cong::deckToInt(cong::Deck::Community)].begin(), deck[cong::deckToInt(cong::Deck::Community)].end(), std::mt19937(std::random_device()()));
  }
}


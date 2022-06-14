//
// Created by anton.krug@gmail.com on 11/06/22.
// License: MIT
//
#include "game.h"
#include "player.h"

#include "card/card.h"

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


cong::Game::Game():
  housesAvaiable(30),
  hotelsAvaiable(10),
  players(),
  currentPlayer(nullptr),
  deck( {{
    {
      cardGetOutJail,

      cardGetOutJail,

      cong::Card("Advance to Dublin.", false, 0),
      // TODO advance to a tile

      cong::Card("Advance to Tyrone. If you pass Go, collect $50k.", false, 0, [] (cong::Game &game) {
        //TODO: need access to boardsearch, not just board
        //          unsigned int size = cong::BoardSearch().filterColor(cong::tile::Color::Blue)->getSize();
        if (game.currentPlayer->getPosition() > 10) {
          game.currentPlayer->moneyFromBank(50);
        }
        game.currentPlayer->moveToPosition(10);
        // TODO: trigger board action, might need Game class access, to pick cards, whatever, might never happen
      }),

      cong::Card("Advance to Offaly. If you pass Go, collect $50k.", false, 0, [] (cong::Game &game) {
        if (game.currentPlayer->getPosition() > 20) {
          game.currentPlayer->moneyFromBank(50);
        }
        game.currentPlayer->moveToPosition(20);
      }),

      cong::Card("Pay private school fees of $37k.", false, -37),

      cong::Card("Rush hour traffic! Go back 3 spaces.", false, 0, [] (cong::Game &game) {
        game.currentPlayer->moveSteps(-3);
        // Do i need to trigger tile action?
      }),

      cong::Card("Advance to Go and collect $50k.", false, 50, [] (cong::Game &game) {
        game.currentPlayer->moveToPosition(0);
      }),

      cong::Card("Sell your shares for a profit. Collect $37k.", false, 37),

    }, {

      cardGetOutJail,

      cong::Card("You win tickets to a sold out All-Ireland final and sell for a huge profit. Collect $5k.", false, 5),

      cong::Card("Advance to Go. Collect $50k.", false, 50),
      // TODO: should the trigger on the Go tile give the money instead?

      cong::Card("Pay $12k for a 4-star weekend spa break in Donegal.", false, -12),

      cong::Card("Advance to Westmeath.", false, 0),

      cong::Card("Collect $25k profits for chartering your private helicopter.", false, 25),

      cong::Card("Your colleagues hire your holiday home for a week. Collect $2k from each player.", false, 0),
      // TODO access to the Game state and all players
      // TODO can that trigger negative on non-active player, support auction for non-playing player
      // TODO prepare for long line text of the cards // support multiline?

      cong::Card("Your car insurance claim is settled. Collect $6k", false, 6),

      cong::Card("You are investigated for identity fraud. Go to jail. Move directly to jail. Do not pass go. Do not collect $50k.", true, 0),
    }

}})

{
  shuffleCards();
  cong::Board::reset();
}



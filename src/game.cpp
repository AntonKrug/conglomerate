//
// Created by anton.krug@gmail.com on 11/06/22.
// License: MIT
//
#include "game.h"
#include "player.h"
#include "card/card.h"
#include "boardSearch.h"

#include <random>


cong::Card cong::Game::cardGetOutJail("Get out of Jail card. This card may be kept until needed or sold.", true, 0, [] (cong::Game &game) {
  game.currentPlayer->stuckInJail = false;
  // Could this be non-action card and the 'unstucking' implemented somewhere elsewhere?
  // TODO: does the card have value, to be sold?
});


cong::Card cong::Game::advanceToGo("Advance to Go and collect $50k.", false, 0, [] (cong::Game &game) {
  game.currentPlayer->moveToPosition(0);
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
  players({}),
  currentPlayer(nullptr),
  currentPlayerIndex(0),
  deck( {{
    {
      cardGetOutJail,

      cardGetOutJail,

      advanceToGo,

      cong::Card("Advance to Dublin.", false, 0, [] (cong::Game &game) {
        int position = cong::BoardSearch().filterName("Dublin")->getPosition();
        game.currentPlayer->setPosition(position);
      }),

      cong::Card("Advance to Tyrone. If you pass Go, collect $50k.", false, 0, [] (cong::Game &game) {
        int position = cong::BoardSearch().filterName("Tyrone")->getPosition();
        game.currentPlayer->moveToPosition(position);
        // TODO: trigger board action, might need Game class access, to pick cards, whatever, might never happen
      }),

      cong::Card("Advance to Offaly. If you pass Go, collect $50k.", false, 0, [] (cong::Game &game) {
        int position = cong::BoardSearch().filterName("Offaly")->getPosition();
        game.currentPlayer->moveToPosition(position);
      }),

      cong::Card("Pay private school fees of $37k.", false, -37),

      cong::Card("Rush hour traffic! Go back 3 spaces.", false, 0, [] (cong::Game &game) {
        game.currentPlayer->moveSteps(-3);
        // Do i need to trigger tile action?
      }),

      cong::Card("Sell your shares for a profit. Collect $37k.", false, 37),

    }, {

      cardGetOutJail,

      advanceToGo,

      cong::Card("You won tickets to a exclusive event and sold them for $5k.", false, 5),

      cong::Card("Pay $12k for a 5-star spa holiday in Donegal.", false, -12),

      cong::Card("Advance to Westmeath.", false, 0, [] (cong::Game &game) {
        int position = cong::BoardSearch().filterName("Westmeath")->getPosition();
        game.currentPlayer->setPosition(position);
        // i think I need to trigger boards actions
      }),

      cong::Card("Collect $25k for chartering your private jet.", false, 25),

      cong::Card("Your colleagues pay for your holiday. Collect $2k from each player.", false, 0, [] (cong::Game &game) {
        int count = 0;
        for (auto &player:game.players) {
          if (player != game.currentPlayer && player->playing) {
            player->moneyTransfer(-2);
            // TODO can that trigger negative on non-active player, support auction for non-playing player
            // might need access to the board, or whole game state to resolve this
            count++;
          }
        }
        game.currentPlayer->moneyTransfer(2 * count);
      }),

      cong::Card("Your insurance claim is settled. Collect $6k", false, 6),

      cong::Card("You are investigated for fraud. Go to jail. Do not pass go.", true, 0, [] (cong::Game &game) {
        int position = cong::BoardSearch().filterType(cong::tile::Type::Jail)->getPosition();
        game.currentPlayer->setPosition(position);
        game.currentPlayer->stuckInJail = true;
      }),
    }

}})

{
  shuffleCards();
  cong::Board::reset();
}



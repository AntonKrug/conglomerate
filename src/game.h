//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_GAME_H
#define CONGLOMERATE_GAME_H

#include "player.h"
#include "card/card.h"
#include "board.h"
#include "bank.h"

#include <queue>

namespace cong {
  class Game {
  public:
    cong::Board board;
    cong::Bank bank; // TODO: Do I need a bank at all
    std::queue<cong::Player*> players;
    cong::Player* currentPlayer;

    // TODO: can the card's init be abstracted away?
    std::deque<cong::Card> cardsChance = {
        cong::Card("Advance to Roscommon.", false, 0),
        // TODO advance to a tile

        cong::Card("Advance to Tyrone. If you pass Go, collect 100k$.", false, 0, [] (cong::Game &game) {
          //TODO: need access to boardsearch, not just board
          if (game.currentPlayer->getPosition() > 10) {
            game.currentPlayer->moneyFromBank(100);
          }
          game.currentPlayer->moveToPosition(10);
          // TODO: trigger board action, might need Game class access, to pick cards, whatever, might never happen
        }),

        cong::Card("Advance to Offaly. If you pass Go, collect 100k$.", false, 0, [] (cong::Game &game) {
          if (game.currentPlayer->getPosition() > 20) {
            game.currentPlayer->moneyFromBank(100);
          }
          game.currentPlayer->moveToPosition(20);
        }),

        cong::Card("Pay private school fees of 75k$.", false, -75),

        cong::Card("Get out of Jail card. This card may be kept until needed or sold.", true, 0, [] (cong::Game &game) {
          // TODO: does player need state for being stuck in jail? So we can unstuck him?
          // TODO: does the card have value, to be sold?
        }),

        cong::Card("Get out of Jail card. This card may be kept until needed or sold.", true, 0, [] (cong::Game &game) {
          // TODO: does player need state for being stuck in jail? So we can unstuck him?
          // TODO: does the card have value, to be sold?
        }),

        cong::Card("Rush hour traffic! Go back 3 spaces.", false, 0, [] (cong::Game &game) {
          game.currentPlayer->moveSteps(-3);
          // Do i need to trigger tile action?
        }),

        cong::Card("Advance to Go and collect 100k$.", false, 100, [] (cong::Game &game) {
          game.currentPlayer->moveToPosition(0);
        }),

        cong::Card("Sell your shares for a profit. Collect 75k$.", false, 75),
    };


    std::deque<cong::Card> cardsCommunity = {
        cong::Card("You win tickets to a sold out All-Ireland final and sell for a huge profit. Collect 10k$.", false, 10),

        cong::Card("Advance to Go. Collect 100k$.", false, 100),
        // TODO: should the trigger on the Go tile give the money instead?

        cong::Card("Pay 25k$ for a 4-star weekend spa break in Donegal.", false, -25),

        cong::Card("Advance to Westmeath.", false, 0),

        cong::Card("Collect 50k$ profits for chartering your private helicopter.", false, 50),

        cong::Card("Your colleagues hire your holiday home for a week. Collect 100$ from each player.", false, 0),
        // TODO access to the Game state and all players
        // TODO can that trigger negative on non-active player, support auction for non-playing player
        // TODO prepare for long line text of the cards // support multiline?

        cong::Card("Your car insurance claim is settled. Collect 12k$", false, 12),

        cong::Card("Get out of Jail card. This card may be kept until needed or sold.", true, 0),

        cong::Card("You are investigated for identity fraud. Go to jail. Move directly to jail. Do not pass go. Do not collect 100k$.", true, 0),
    };

    void shuffleCards();
  };
}

#endif //CONGLOMERATE_GAME_H

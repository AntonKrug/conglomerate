//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_GAME_H
#define CONGLOMERATE_GAME_H

#include "player.h"
#include "card/card.h"
#include "board.h"

#include <list>
#include <queue>

namespace cong {
  class Game {
  public:
    std::list<Player> players;
    std::deque<Card> cardsChance = {
        cong::Card("Advance to Roscommon.", false, 0),
        // TODO advance to a tile
        cong::Card("Advance to Tyrone. If you pass Go, collect 2000$.", false, 0, [] (cong::Player &p, const cong::Board &b) {
          //TODO: need access to boardsearch, not just board
          if (p.position > 10) {
            p.moneyFromBank(2000);
          }
          p.moveToPosition(10);
          // TODO: trigger board action
        }),
        cong::Card("Advance to Offaly. If you pass Go, collect 2000$.", false, 0, [] (cong::Player &p, const cong::Board &b) {
          if (p.position > 20) {
            p.moneyFromBank(2000);
          }
          p.moveToPosition(20);
        }),
        cong::Card("Pay private school fees of 1500$.", false, -1500),
        cong::Card("Get out of Jail card. This card may be kept until needed or sold.", true, 0, [] (cong::Player &p, const cong::Board &b) {
          // TODO: does player need state for being stuck in jail? So we can unstuck him?
          // TODO: does the card have value, to be sold?
        }),
        cong::Card("Get out of Jail card. This card may be kept until needed or sold.", true, 0, [] (cong::Player &p, const cong::Board &b) {
          // TODO: does player need state for being stuck in jail? So we can unstuck him?
          // TODO: does the card have value, to be sold?
        }),
        cong::Card("Rush hour traffic! Go back 3 spaces.", false, 0, [] (cong::Player &p, const cong::Board &b) {
          p.moveSteps(-3);
          // Do i need to trigger tile action?
        }),
        cong::Card("Advance to Go and collect 2000$.", false, 2000, [] (cong::Player &p, const cong::Board &b) {
          p.moveToPosition(0);
        }),
        cong::Card("Sell your shares for a profit. Collect 1500$.", false, 1500),


    };

    void shuffleCards();
  };
}


#endif //CONGLOMERATE_GAME_H

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
        cong::Card("karta", true, 0, [] (cong::Player &p, const cong::Board &b) {
          p.moneyFromBank(100);
          b.listTiles();
        })
    };

    void shuffleCards();
  };
}


#endif //CONGLOMERATE_GAME_H

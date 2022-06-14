//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_GAME_H
#define CONGLOMERATE_GAME_H

#include "board.h"

#include <queue>
#include <array>


// Forward declarations
namespace cong {
  class Player;

  class Card;
}


// Real declarations
namespace cong {
  class Game {
  public:
    cong::Board board;
    int housesAvaiable;
    int hotelsAvaiable;

    // queue is nice for cycling players, but I will have to do from time to time for each so maybe use list
    std::queue<cong::Player*> players;
    cong::Player* currentPlayer;

    static cong::Card cardGetOutJail;

    // chance deck (index 0) and community deck (index 1) in one array
    std::array<std::deque<cong::Card>, 2> deck;

    Game();

    void shuffleCards();
  };
}

#endif //CONGLOMERATE_GAME_H

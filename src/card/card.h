//
// Created by anton.krug@gmail.com on 02/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_CARD_H
#define CONGLOMERATE_CARD_H

//#include "player.h"
//#include "board.h"

#include <string>
#include <functional>

namespace cong {
  class Player;
  class Board;

  class Card {
  public:
    std::string text;
    bool keepTheCard;
    int cashFlow;
    std::function<void(cong::Player &, const cong::Board &)> doAction;

    Card(
        std::string textInit,
        bool keepTheCardInit,
        int cashFlowInit,
        std::function<void(cong::Player &, const cong::Board &)> doActionInit);

//    void doCommonAction(cong::Player &player);
    void swap(Card& other);
  };

}

#endif //CONGLOMERATE_CARD_H

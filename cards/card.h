//
// Created by anton.krug@gmail.com on 02/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_CARD_H
#define CONGLOMERATE_CARD_H

#include "../player.h"
#include "../board.h"

#include <string>
#include <functional>

namespace cong {

  class Card {
  private:
  public:
    const std::string text;
    const bool keepTheCard;
    const int cashFlow;

    const std::function<void(Player &, Board &)> doAction
  };

}

#endif //CONGLOMERATE_CARD_H

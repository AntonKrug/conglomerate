//
// Created by anton.krug@gmail.com on 02/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_PLAYER_H
#define CONGLOMERATE_PLAYER_H

#include "cards/card.h"

#include <string>
#include <vector>

namespace cong {

  class Player {
  private:
    std::vector<Card> cards;
    int cash; // when negative then owning money

  public:
    std::string name;
    bool playing;

    int getNetWorth(void);

    void moneyGetFromBank(int amount);

    void moneyReturnToBank(int amount);
  };

}

#endif //CONGLOMERATE_PLAYER_H

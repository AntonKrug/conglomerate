//
// Created by anton.krug@gmail.com on 02/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_PLAYER_H
#define CONGLOMERATE_PLAYER_H

#include "card/card.h"

#include <string>
#include <vector>

namespace cong {

  class Player {
  private:
    std::vector<Card> cards;
    int cash; // when negative then owning money

  public:
    const std::string name;
    bool playing;
    unsigned int position;

    explicit Player(std::string name);

    void moveToPosition(unsigned int destinationPosition);

    void moveSteps(int steps);

    int getNetWorth(void);

    void moneyFromBank(int amount);
  };

}

#endif //CONGLOMERATE_PLAYER_H

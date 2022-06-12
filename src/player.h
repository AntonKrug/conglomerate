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
    int cash; // when negative then owning money in (k units)
    unsigned int position;

  public:
    const std::string name;
    bool playing;
    bool stuckInJail;

    // Single argument construction set to explicit, so no accidental/implicit casting will happen
    explicit Player(std::string name);

    void gainCard(Card card);

    unsigned int getPosition();

    void setPosition(unsigned int destinationPosition);

    void moveToPosition(unsigned int destinationPosition);

    void moveSteps(int steps);

    int getNetWorth(void);

    void moneyFromBank(int amount);
  };

}

#endif //CONGLOMERATE_PLAYER_H

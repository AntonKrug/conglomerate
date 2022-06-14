//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_ACTION_H
#define CONGLOMERATE_ACTION_H

#include "interface.h"

namespace cong::tile {

  class Action : public Basic {
  public:

    const bool goToJail;
    const unsigned int payAmount;
    const unsigned int payPercentage;


    Action(
        std::string nameInit,
        std::string nameShortInit,
        std::string descriptionInit,
        bool goToJailInit,
        unsigned int payAmountInit,
        unsigned int payPercentageInit) noexcept;


    void displayTile() override;


  };

}

#endif //CONGLOMERATE_ACTION_H

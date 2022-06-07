//
// Created by anton.krug@gmail.com on 02/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_UI_INTERFACE_H
#define CONGLOMERATE_UI_INTERFACE_H

#include <string>

namespace cong {
  class UI {
  public:
    static std::string moneyHumanFriendly(int amount);

  };
}

#endif //CONGLOMERATE_UI_INTERFACE_H

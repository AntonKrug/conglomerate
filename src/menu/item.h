//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_ITEM_H
#define CONGLOMERATE_ITEM_H


#include "game.h"

#include <functional>
#include <string>

namespace cong::Menu {

  class Item {
    std::string name;
    const std::function<void (Game &)> doAction;

  };

}

#endif //CONGLOMERATE_ITEM_H

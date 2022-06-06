//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_MENUITEM_H
#define CONGLOMERATE_MENUITEM_H


#include "../game.h"

#include <functional>
#include <string>

namespace cong {

  namespace Menu {

    class Item {
      std::string name;
      const std::function<void (Game &)> doAction;

    };

  }

}

#endif //CONGLOMERATE_MENUITEM_H

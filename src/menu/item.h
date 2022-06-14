//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_ITEM_H
#define CONGLOMERATE_ITEM_H

#include <functional>
#include <string>


// Forward declarations
namespace cong {
  class Game;
}


// Real declaration
namespace cong::menu {


  class Item {
    std::string name;
    const std::function<void (Game &)> doAction;

  };


}

#endif //CONGLOMERATE_ITEM_H

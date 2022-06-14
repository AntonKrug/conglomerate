//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_TYPE_H
#define CONGLOMERATE_TYPE_H

namespace cong::tile {

  enum class Type {
    Nop,
    Action,
    Jail,
    Utility,
    County,
    Province,
    PickCard,
  };

}

#endif //CONGLOMERATE_TYPE_H
//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_TYPE_H
#define CONGLOMERATE_TYPE_H

namespace cong::tile {

  enum class Type : unsigned int {
    Nop,
    StampDuty,
    Jail,
    GoToJail,
    Utility,
    County,
    Province,
    IncomeTax,
    PickCard,
  };

}

#endif //CONGLOMERATE_TYPE_H
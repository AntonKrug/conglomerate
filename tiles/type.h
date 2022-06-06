//
// Created by anton.krug@gmail.com on 07/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_TYPE_H
#define CONGLOMERATE_TYPE_H

namespace Tile {

  enum class Type : unsigned int {
    Go,
    FreeParking,
    StampDuty,
    Jail,
    GoToJail,
    Utility,
    County,
    Province,
    IncomeTax,
    CardCommunity,
    CardChance
  };

}

#endif //CONGLOMERATE_TYPE_H
//
// Created by anton.krug@gmail.com on 09/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_PROVINCE_H
#define CONGLOMERATE_PROVINCE_H

#include "tile/property.h"


namespace cong::Tile {

  class Province: public cong::Tile::Property {
  public:

    Province(
        std::string nameInit,
        std::string nameShortInit,
        unsigned int priceInit,
        std::array<unsigned int, 6> rentInit,
        unsigned int mortgageInit);


    void displayTile(void) override;

//    int rentToPay(void) override;

//    void doAction(Player &currentPlayer) override;

  };
}


#endif //CONGLOMERATE_PROVINCE_H

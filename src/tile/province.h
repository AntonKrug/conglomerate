//
// Created by anton.krug@gmail.com on 09/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_PROVINCE_H
#define CONGLOMERATE_PROVINCE_H

#include "tile/property.h"


namespace cong::tile {

  class Province: public cong::tile::Property {
  public:

    Province(
        std::string nameInit,
        std::string nameShortInit,
        unsigned int priceInit,
        std::array<unsigned int, 6> rentInit,
        unsigned int mortgageInit) noexcept;


    void displayTile() override;

    unsigned int rentToPay(cong::Player &currentPlayer) override;

//    void doAction(Player &currentPlayer) override;

  };
}


#endif //CONGLOMERATE_PROVINCE_H

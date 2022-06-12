//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_PICKCARD_H
#define CONGLOMERATE_PICKCARD_H

#include "tile/interface.h"
#include "card/deck.h"

namespace cong::Tile {

  class PickCard: public cong::Tile::Basic {
  public:
    const cong::Deck deck;

    explicit PickCard(cong::Deck deckInit);

    void displayTile() override;
  };

}

#endif //CONGLOMERATE_PICKCARD_H

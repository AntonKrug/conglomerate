//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_PICKCARD_H
#define CONGLOMERATE_PICKCARD_H

#include "tile/interface.h"
#include "card/deck.h"

namespace cong::tile {

  class PickCard: public cong::tile::Basic {
  public:

    const cong::Deck deck;

    explicit PickCard(cong::Deck deckInit) noexcept;

    void displayTile() override;

  };

}

#endif //CONGLOMERATE_PICKCARD_H

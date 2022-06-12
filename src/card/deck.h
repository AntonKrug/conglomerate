//
// Created by anton.krug@gmail.com on 12/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_CARD_DECK_H
#define CONGLOMERATE_CARD_DECK_H

#include <string>

namespace cong {

  enum class CardDeck {
    Chance = 0,
    Community = 1
  };

  constexpr const char *deckToString(CardDeck deck) noexcept {
    switch (deck) {

      case CardDeck::Chance:
        return "Chance";

      case CardDeck::Community:
        return "Community";

      // no exceptions and no default state
    }
  }


  constexpr unsigned int deckToInt(CardDeck deck) {
    return static_cast<unsigned int>(deck);
  }

}

#endif //CONGLOMERATE_CARD_DECK_H

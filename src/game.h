//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_GAME_H
#define CONGLOMERATE_GAME_H

#include "player.h"
#include "card/card.h"
#include "board.h"

#include <list>
#include <queue>

namespace cong {
  class Game {
  public:
    std::list<Player> players;
    std::deque<Card> cardsChance = {
        cong::Card("Advance to Roscommon", false, 0, [] (cong::Player &p, const cong::Board &b) {
        })
    };

//    case (0):
//    UI.displayCard();
//    // Move current player to Roscommon.
//    Game.getCurrentPlayer().jumpTo(Game.getBoard().getRoscommon());
//    this.putCardOnBottom(drawnCard);
//
//    Game.getBoard().tileActions();
//    break;
//
//    case (1):
//    UI.displayCard("Advance to Tyrone. If you pass Go, collect €2M");
//    // Move current player to Tyrone.
//    // If pass Go, add 2000000 to current player cash.
//    if (Game.getCurrentPlayer().getPosition() > Game.getBoard().getTyrone())
//    {
//      Game.getBank().getMoneyFromBank(2000000L);
//    }
//    Game.getCurrentPlayer().jumpTo(Game.getBoard().getTyrone());
//    this.putCardOnBottom(drawnCard);
//    Game.getBoard().tileActions();
//    break;
//
//    case (2):
//    UI.displayCard("Pay private school fees of €1.5M");
//    // Remove 1500000 from current player cash.
//    Game.getBank().returnMoneyToBank(1500000L);
//    this.putCardOnBottom(drawnCard);
//    break;
//
//    case (3):
//    UI.displayCard("GET OUT OF JAIL FREE card.\n This card may be kept until needed or sold.");
//    // keep card in possession
//    // Game.getCurrentPlayer().receiveCardJail();
//    Game.getCurrentPlayer().receiveCard(this, drawnCard);
//    break;


    void shuffleCards();
  };
}


#endif //CONGLOMERATE_GAME_H

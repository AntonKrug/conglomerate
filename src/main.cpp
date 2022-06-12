#include "board.h"
#include "card/card.h"
#include "game.h"

#include <iostream>

cong::Game game;


void handleCard(const cong::Card &card) {
  std::cout << " ----------------- " << std::endl;
  std::cout << "Got card: " << card.text << std::endl;

  if (card.keepTheCard) {
    std::cout << "Keeping it for later ... " << std::endl;
    game.currentPlayer->gainCard(card);
    // store the card for later use
  } else {
    // do not store the care, invoke it right now
    std::cout << "Invoking it... " << std::endl;

    game.currentPlayer->moneyFromBank(card.cashFlow);

    if (card.doAction) {
      std::cout << "Has extra logic ... " << std::endl;
      card.doAction.value()(game);
    }
  }
}


int main() {
  cong::Player player("Meno");
  game.currentPlayer = &player;
  game.players.push(&player);
  game.shuffleCards();

  game.board.listTiles();

  for (const auto &c:game.cards[0]) {
    handleCard(c);
  }

  for (const auto &c:game.cards[1]) {
    handleCard(c);
  }

  return 0;

}

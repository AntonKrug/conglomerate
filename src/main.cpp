#include "board.h"
#include "card/card.h"
#include "game.h"

#include <iostream>


const cong::Board board;
cong::Player player("Meno");


void handleCard(const cong::Card &card) {
  std::cout << " ----------------- " << std::endl;
  std::cout << "Got card: " << card.text << std::endl;

  if (card.keepTheCard) {
    std::cout << "Keeping it for later ... " << std::endl;
    // store the card for later use
  } else {
    // do not store the care, invoke it right now
    std::cout << "Invoking it... " << std::endl;

    player.moneyFromBank(card.cashFlow);

    if (card.doAction) {
      std::cout << "Has extra logic ... " << std::endl;
      card.doAction.value()(player, board);
    }
  }
}


int main() {
  std::cout << "Hello, World!" << std::endl;

  cong::Game game;

  game.shuffleCards();

  for (const auto &c:game.cardsChance) {
    handleCard(c);
  }

  return 0;

}

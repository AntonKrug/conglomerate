#include "board.h"
#include "card/card.h"
#include "card/deck.h"
#include "game.h"
#include "boardSearch.h"
#include "player.h"

#include <iostream>

void handleCard(cong::Game &game, const cong::Card &card) {
  std::cout << " ----------------- " << std::endl;
  std::cout << "Got card: " << card.text << std::endl;

  if (card.keepTheCard) {
    std::cout << "Keeping it for later ... " << std::endl;
    game.currentPlayer->freeFromJailIncrement();
    // store the card for later use
  } else {
    // do not store the care, invoke it right now
    std::cout << "Invoking it... " << std::endl;

    game.currentPlayer->moneyTransfer(card.cashFlow);

    if (card.doAction) {
      std::cout << "Has extra logic ... " << std::endl;
      card.doAction.value()(game);
    }
  }
}


int main() {
  cong::Game game;

  cong::Player player("Meno");
  game.currentPlayer = &player;
  game.players.push_back(&player);
  game.shuffleCards();

  game.board.listTiles();

  for (const auto &c:game.deck[cong::deckToInt(cong::Deck::Chance)]) {
    handleCard(game, c);
  }

  for (const auto &c:game.deck[cong::deckToInt(cong::Deck::Community)]) {
    handleCard(game, c);
  }

  unsigned int size = cong::BoardSearch(game.board).filterColor(cong::tile::Color::Blue)->getSize();
  std::cout << "size of blue tiles " << size << std::endl;

  auto a = cong::BoardSearch(game.board).filterName("Dublin")->getPosition();
  std::cout << "index of Dublin " << a << std::endl;

  return 0;
}

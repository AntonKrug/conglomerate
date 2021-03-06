#include "board.h"
#include "card/card.h"
#include "card/deck.h"
#include "game.h"
#include "boardSearch.h"
#include "player.h"

#include <iostream>

static cong::Game game;


void handleCard(const cong::Card &card) {
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
  cong::Player player("Meno");
  game.currentPlayer = &player;
  game.players.push_back(&player);
  game.shuffleCards();

  cong::Board board;
  board.listTiles();

  for (const auto &c:game.deck[cong::deckToInt(cong::Deck::Chance)]) {
    handleCard(c);
  }

  for (const auto &c:game.deck[cong::deckToInt(cong::Deck::Community)]) {
    handleCard(c);
  }

  unsigned int size = cong::BoardSearch(board).filterColor(cong::tile::Color::Blue)->getSize();
  std::cout << "size of blue tiles " << size << std::endl;

  auto a = cong::BoardSearch(board).filterName("Dublin")->getPosition();
  std::cout << "index of Dublin " << a << std::endl;

  return 0;
}

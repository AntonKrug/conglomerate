//
// Created by anton.krug@gmail.com on 02/06/22.
// License: MIT
//

#include "player.h"

#include <iostream>
#include <utility>

cong::Player::Player(std::string name) :
  name(std::move(name)),
  cash(0),
  position(0),
  cards(),
  playing(true)
  {}


int cong::Player::getNetWorth() {
  std::cout << "Player " << name << " has some net worth and " << cards.size() << " cards";
  return 0;
}


void cong::Player::moneyFromBank(int amount) {
  if (amount > 0) {
    std::cout << "Player gained from bank " << amount << std::endl;
    cash += amount;
  } else if (amount < 0) {

    std::cout << "Player had to return money to bank " << -amount << std::endl;
    cash -= amount;

    if (cash < 0) {
      std::cout << "Player is in debt " << -cash << std::endl;
    }
  } else {
    // no money movement
  }

}


void cong::Player::setPosition(unsigned int destinationPosition) {
  std::cout << "Player moves to " << destinationPosition << std::endl;
  position = destinationPosition;
}


void cong::Player::moveToPosition(unsigned int destinationPosition) {
  // TODO: consider passing Go as getting 2000$
  std::cout << "Player moves to " << destinationPosition << std::endl;
  position = destinationPosition;
}


void cong::Player::moveSteps(int steps) {
  // TODO: check for board overflow (can go to negative too)
  // positive one can trigger Go
  std::cout << "Player moves by " << steps << " steps " << std::endl;
  position += steps;
}


void cong::Player::gainCard(cong::Card card) {
  std::cout << "Player gained a card " << std::endl;
  // TODO: cards have just description, not the titles, displaying
  // titles would be have to be implemented, only for jail cards anyway
  cards.push_back(std::move(card));
}


unsigned int cong::Player::getPosition() {
  return position;
}


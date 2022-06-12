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

void cong::Player::moveToPosition(unsigned int destinationPosition) {
  std::cout << "Player moves to " << destinationPosition << std::endl;
  position = destinationPosition;
}

void cong::Player::moveSteps(int steps) {
  // TODO: check for board overflow (can go to negative too)
  std::cout << "Player moves by " << steps << " steps " << std::endl;
  position += steps;
}

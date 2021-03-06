//
// Created by anton.krug@gmail.com on 02/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_CARD_H
#define CONGLOMERATE_CARD_H

#include <string>
#include <optional>
#include <functional>


// Forward declarations
namespace cong {
  class Game;
}


// Real declarations
namespace cong {
  class Card {
  public:

    std::string text;
    bool keepTheCard;
    int cashFlow;
    std::optional<std::function<void(cong::Game &)>> doAction;


    Card(std::string textInit,
         bool keepTheCardInit,
         int cashFlowInit,
         std::function<void(cong::Game &)> doActionInit) noexcept;


    Card(std::string textInit,
         bool keepTheCardInit,
         int cashFlowInit) noexcept;


    void swap(Card& other);


  };

}

#endif //CONGLOMERATE_CARD_H

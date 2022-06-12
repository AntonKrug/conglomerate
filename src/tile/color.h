//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_COLOR_H
#define CONGLOMERATE_COLOR_H

#include <string>

namespace cong::tile {

  enum class Color : unsigned int {
    Brown,
    Blue,
    Pink,
    Orange,
    Red,
    Yellow
  };

  constexpr const char *colorToString(Color color) noexcept {
    switch (color) {

      case Color::Brown:
        return "Brown";

      case Color::Blue:
        return "Blue";

      case Color::Pink:
        return "Pink";

      case Color::Orange:
        return "Orange";

      case Color::Red:
        return "Red";

      case Color::Yellow:
        return "Yellow";
        
        // no exceptions and no default state
    }
  }

}

#endif //CONGLOMERATE_COLOR_H

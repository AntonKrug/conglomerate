//
// Created by anton.krug@gmail.com on 03/06/22.
// License: MIT
//

#ifndef CONGLOMERATE_BOARD_H
#define CONGLOMERATE_BOARD_H

#include "tile/interface.h"
#include "tile/province.h"
#include "tile/utility.h"
#include "tile/county.h"

#include <array>

namespace cong {

  class Board {
  public:
    const std::array<cong::Tile::Basic *, 28> tiles = {{
      new cong::Tile::Utility("Post Office", "Post", 75u, 2u, 5u, 38u),
      new cong::Tile::Utility("Internet",    "Inet", 75u, 2u, 5u, 38u),

      new cong::Tile::Province("Munster",    "P:Mu", 100u, {{ 13u, 25u, 50u, 100u, 0u }}, 50u),
      new cong::Tile::Province("Connaught",  "P:Co", 100u, {{ 13u, 25u, 50u, 100u, 0u }}, 50u),
      new cong::Tile::Province("Leinster",   "P:Le", 100u, {{ 13u, 25u, 50u, 100u, 0u }}, 50u),
      new cong::Tile::Province("Ulster",     "P:Ul", 100u, {{ 13u, 25u, 50u, 100u, 0u }}, 50u),

      new cong::Tile::County("Westmeath",    "C:WH", cong::Tile::Color::Brown,   30u, {{  1u,   5u,  15u,   45u,   80u,  125u }},  25u,  25u,  15u),
      new cong::Tile::County("Donegal",      "C:DL", cong::Tile::Color::Brown,   30u, {{  2u,  10u,  30u,   90u,  160u,  225u }},  25u,  25u,  15u),

      new cong::Tile::County("Sligo",        "C:SO", cong::Tile::Color::Blue,    50u, {{  3u,  15u,  45u,  135u,  200u,  230u }},  25u,  25u,  25u),
      new cong::Tile::County("Down",         "C:DN", cong::Tile::Color::Blue,    50u, {{  3u,  15u,  45u,  135u,  200u,  230u }},  25u,  25u,  25u),
      new cong::Tile::County("Laois",        "C:LS", cong::Tile::Color::Blue,    60u, {{  4u,  20u,  50u,  150u,  225u,  300u }},  25u,  25u,  30u),

      new cong::Tile::County("Tyrone",       "C:TE", cong::Tile::Color::Pink,    70u, {{  5u,  25u,  75u,  225u,  313u,  375u }},  50u,  50u,  35u),
      new cong::Tile::County("Cavan",        "C:CN", cong::Tile::Color::Pink,    70u, {{  5u,  25u,  75u,  225u,  313u,  375u }},  50u,  50u,  35u),
      new cong::Tile::County("Kerry",        "C:KY", cong::Tile::Color::Pink,    80u, {{  6u,  30u,  90u,  250u,  350u,  450u }},  50u,  50u,  40u),

      new cong::Tile::County("Fermanagh",    "C:FE", cong::Tile::Color::Orange,  90u, {{  7u,  35u, 100u,  225u,  375u,  475u }},  50u,  50u,  45u),
      new cong::Tile::County("Leitrim",      "C:LM", cong::Tile::Color::Orange,  90u, {{  7u,  35u, 100u,  225u,  375u,  475u }},  50u,  50u,  45u),
      new cong::Tile::County("Galway",       "C:G ", cong::Tile::Color::Orange, 100u, {{  8u,  40u, 110u,  300u,  400u,  500u }},  50u,  50u,  50u),

      new cong::Tile::County("Meath",        "C:MH", cong::Tile::Color::Red,    110u, {{  9u,  45u, 125u,  350u,  437u,  525u }},  75u,  75u,  55u),
      new cong::Tile::County("Kilkenny",     "C:KK", cong::Tile::Color::Red,    110u, {{  9u,  45u, 125u,  350u,  437u,  525u }},  75u,  75u,  55u),
      new cong::Tile::County("Offaly",       "C:OY", cong::Tile::Color::Red,    120u, {{ 10u,  50u, 150u,  375u,  461u,  550u }},  75u,  75u,  60u),

      new cong::Tile::County("Mayo",         "C:MO", cong::Tile::Color::Yellow, 130u, {{ 11u,  55u, 165u,  400u,  487u,  575u }},  75u,  75u,  65u),
      new cong::Tile::County("Dublin",       "C:D ", cong::Tile::Color::Yellow, 130u, {{ 11u,  55u, 165u,  400u,  487u,  575u }},  75u,  75u,  65u),
      new cong::Tile::County("Louth",        "C:LH", cong::Tile::Color::Yellow, 140u, {{ 12u,  60u, 180u,  425u,  512u,  600u }},  75u,  75u,  70u),

      new cong::Tile::County("Wexford",      "C:WX", cong::Tile::Color::Green,  150u, {{ 13u,  65u, 195u,  450u,  550u,  638u }}, 100u, 100u,  75u),
      new cong::Tile::County("Limerick",     "C:L ", cong::Tile::Color::Green,  150u, {{ 13u,  65u, 195u,  450u,  550u,  638u }}, 100u, 100u,  75u),
      new cong::Tile::County("Waterford",    "C:WD", cong::Tile::Color::Green,  160u, {{ 14u, 125u, 220u,  500u,  600u,  700u }}, 100u, 100u,  80u),

      new cong::Tile::County("Cork",         "C:C ", cong::Tile::Color::Navy,   175u, {{ 17u,  87u, 250u,  600u,  650u,  750u }}, 100u, 100u,  88u),
      new cong::Tile::County("Roscommon",    "C:RN", cong::Tile::Color::Navy,   200u, {{ 20u, 100u, 300u,  650u,  700u,  850u }}, 100u, 100u, 100u),
    }};

    Board();

    ~Board();

    void listTiles() const;

//    const std::array<int, 1> tiles = {{1}};

  };

}




#endif //CONGLOMERATE_BOARD_H

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
      new cong::Tile::Utility("Post Office", "Post", 37u, 1u, 3u, 19u),
      new cong::Tile::Utility("Internet",    "Inet", 37u, 1u, 3u, 19u),

      new cong::Tile::Province("Munster",    "P:Mu",  50u, {{ 7u, 13u, 25u, 50u, 0u }}, 25u),
      new cong::Tile::Province("Connaught",  "P:Co",  50u, {{ 7u, 13u, 25u, 50u, 0u }}, 25u),
      new cong::Tile::Province("Leinster",   "P:Le",  50u, {{ 7u, 13u, 25u, 50u, 0u }}, 25u),
      new cong::Tile::Province("Ulster",     "P:Ul",  50u, {{ 7u, 13u, 25u, 50u, 0u }}, 25u),

      new cong::Tile::County("Westmeath",    "C:WH", cong::Tile::Color::Brown,   15u, {{  1u,   3u,   7u,   22u,   40u,   62u }},  12u,  12u,  7u),
      new cong::Tile::County("Donegal",      "C:DL", cong::Tile::Color::Brown,   15u, {{  2u,   5u,  15u,   45u,   80u,  112u }},  12u,  12u,  7u),

      new cong::Tile::County("Sligo",        "C:SO", cong::Tile::Color::Blue,    25u, {{  2u,   7u,  22u,   67u,  100u,  115u }},  13u,  13u,  12u),
      new cong::Tile::County("Down",         "C:DN", cong::Tile::Color::Blue,    25u, {{  2u,   8u,  23u,   68u,  100u,  116u }},  13u,  13u,  13u),
      new cong::Tile::County("Laois",        "C:LS", cong::Tile::Color::Blue,    30u, {{  3u,  10u,  25u,   75u,  112u,  150u }},  13u,  13u,  15u),

      new cong::Tile::County("Tyrone",       "C:TE", cong::Tile::Color::Pink,    35u, {{  3u,  12u,  37u,  112u,  156u,  187u }},  25u,  25u,  17u),
      new cong::Tile::County("Cavan",        "C:CN", cong::Tile::Color::Pink,    35u, {{  3u,  13u,  38u,  113u,  157u,  188u }},  25u,  25u,  18u),
      new cong::Tile::County("Kerry",        "C:KY", cong::Tile::Color::Pink,    40u, {{  4u,  15u,  45u,  125u,  175u,  225u }},  25u,  25u,  20u),

      new cong::Tile::County("Fermanagh",    "C:FE", cong::Tile::Color::Orange,  45u, {{  4u,  17u,  50u,  112u,  187u,  237u }},  25u,  25u,  22u),
      new cong::Tile::County("Leitrim",      "C:LM", cong::Tile::Color::Orange,  45u, {{  4u,  18u,  50u,  113u,  188u,  238u }},  25u,  25u,  23u),
      new cong::Tile::County("Galway",       "C:G ", cong::Tile::Color::Orange,  50u, {{  5u,  20u,  55u,  150u,  200u,  250u }},  25u,  25u,  25u),

      new cong::Tile::County("Meath",        "C:MH", cong::Tile::Color::Red,     55u, {{  5u,  22u,  62u,  175u,  218u,  262u }},  37u,  37u,  27u),
      new cong::Tile::County("Kilkenny",     "C:KK", cong::Tile::Color::Red,     55u, {{  5u,  23u,  63u,  175u,  219u,  263u }},  37u,  37u,  28u),
      new cong::Tile::County("Offaly",       "C:OY", cong::Tile::Color::Red,     60u, {{  6u,  25u,  75u,  187u,  230u,  275u }},  37u,  37u,  30u),

      new cong::Tile::County("Mayo",         "C:MO", cong::Tile::Color::Yellow,  65u, {{  6u,  27u,  82u,  200u,  243u,  287u }},  38u,  38u,  32u),
      new cong::Tile::County("Dublin",       "C:D ", cong::Tile::Color::Yellow,  65u, {{  6u,  28u,  83u,  200u,  244u,  288u }},  38u,  38u,  33u),
      new cong::Tile::County("Louth",        "C:LH", cong::Tile::Color::Yellow,  70u, {{  7u,  30u,  90u,  226u,  256u,  300u }},  38u,  38u,  35u),

      new cong::Tile::County("Wexford",      "C:WX", cong::Tile::Color::Green,   75u, {{  7u,  32u,  92u,  225u,  275u,  319u }},  50u,  50u,  37u),
      new cong::Tile::County("Limerick",     "C:L ", cong::Tile::Color::Green,   75u, {{  7u,  33u,  93u,  226u,  278u,  320u }},  50u,  50u,  38u),
      new cong::Tile::County("Waterford",    "C:WD", cong::Tile::Color::Green,   80u, {{  8u,  40u, 110u,  250u,  300u,  350u }},  50u,  50u,  40u),

      new cong::Tile::County("Cork",         "C:C ", cong::Tile::Color::Navy,    87u, {{  9u,  43u, 125u,  300u,  325u,  375u }},  50u,  50u,  44u),
      new cong::Tile::County("Roscommon",    "C:RN", cong::Tile::Color::Navy,   100u, {{ 10u,  50u, 150u,  325u,  350u,  425u }},  50u,  50u,  50u),
    }};

    Board();

    ~Board();

    void listTiles() const;

//    const std::array<int, 1> tiles = {{1}};

  };

}




#endif //CONGLOMERATE_BOARD_H

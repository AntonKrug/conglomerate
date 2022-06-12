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
      new cong::Tile::Utility("Post Office", "Post", 1500u, 40u, 100u, 750u),
      new cong::Tile::Utility("Internet",    "Inet", 1500u, 40u, 100u, 750u),

      new cong::Tile::Province("Munster",    "P:Mu", 2000u, {{ 250u, 500u, 1000u, 2000u, 0u }}, 1000u),
      new cong::Tile::Province("Connaught",  "P:Co", 2000u, {{ 250u, 500u, 1000u, 2000u, 0u }}, 1000u),
      new cong::Tile::Province("Leinster",   "P:Le", 2000u, {{ 250u, 500u, 1000u, 2000u, 0u }}, 1000u),
      new cong::Tile::Province("Ulster",     "P:Ul", 2000u, {{ 250u, 500u, 1000u, 2000u, 0u }}, 1000u),

      new cong::Tile::County("Westmeath",    "C:WH", cong::Tile::Color::Brown,   600u, {{ 20u,   100u,  300u,   900u,  1600u,  2500u }}, 500u,  500u,   300u),
      new cong::Tile::County("Donegal",      "C:DL", cong::Tile::Color::Brown,   600u, {{ 40u,   200u,  600u,  1800u,  3200u,  4500u }}, 500u,  500u,   300u),

      new cong::Tile::County("Sligo",        "C:SO", cong::Tile::Color::Blue,   1000u, {{ 60u,   300u,  900u,  2700u,  4000u,  5500u }}, 500u,  500u,   500u),
      new cong::Tile::County("Down",         "C:DN", cong::Tile::Color::Blue,   1000u, {{ 60u,   300u,  900u,  2700u,  4000u,  5500u }}, 500u,  500u,   500u),
      new cong::Tile::County("Laois",        "C:LS", cong::Tile::Color::Blue,   1200u, {{ 80u,   400u, 1000u,  3000u,  4500u,  6000u }}, 500u,  500u,   600u),

      new cong::Tile::County("Tyrone",       "C:TE", cong::Tile::Color::Pink,   1400u, {{ 100u,  500u, 1500u,  4500u,  6250u,  7500u }}, 1000u, 1000u,  700u),
      new cong::Tile::County("Cavan",        "C:CN", cong::Tile::Color::Pink,   1400u, {{ 100u,  500u, 1500u,  4500u,  6250u,  7500u }}, 1000u, 1000u,  700u),
      new cong::Tile::County("Kerry",        "C:KY", cong::Tile::Color::Pink,   1600u, {{ 120u,  600u, 1800u,  5000u,  7000u,  9000u }}, 1000u, 1000u,  800u),

      new cong::Tile::County("Fermanagh",    "C:FE", cong::Tile::Color::Orange, 1800u, {{ 140u,  700u, 2000u,  5500u,  7500u,  9500u }}, 1000u, 1000u,  900u),
      new cong::Tile::County("Leitrim",      "C:LM", cong::Tile::Color::Orange, 1800u, {{ 140u,  700u, 2000u,  5500u,  7500u,  9500u }}, 1000u, 1000u,  900u),
      new cong::Tile::County("Galway",       "C:G ", cong::Tile::Color::Orange, 2000u, {{ 160u,  800u, 2200u,  6000u,  8000u, 10000u }}, 1000u, 1000u, 1000u),

      new cong::Tile::County("Meath",        "C:MH", cong::Tile::Color::Red,    2200u, {{ 180u,  900u, 2500u,  7000u,  8750u, 10500u }}, 1500u, 1500u, 1100u),
      new cong::Tile::County("Kilkenny",     "C:KK", cong::Tile::Color::Red,    2200u, {{ 180u,  900u, 2500u,  7000u,  8750u, 10500u }}, 1500u, 1500u, 1100u),
      new cong::Tile::County("Offaly",       "C:OY", cong::Tile::Color::Red,    2400u, {{ 200u, 1000u, 3000u,  7500u,  9255u, 11000u }}, 1500u, 1500u, 1200u),

      new cong::Tile::County("Mayo",         "C:MO", cong::Tile::Color::Yellow, 2600u, {{ 220u, 1100u, 3300u,  8000u,  9750u, 11500u }}, 1500u, 1500u, 1300u),
      new cong::Tile::County("Dublin",       "C:D ", cong::Tile::Color::Yellow, 2600u, {{ 220u, 1100u, 3300u,  8000u,  9750u, 11500u }}, 1500u, 1500u, 1300u),
      new cong::Tile::County("Louth",        "C:LH", cong::Tile::Color::Yellow, 2800u, {{ 240u, 1200u, 3600u,  8500u, 10250u, 12000u }}, 1500u, 1500u, 1400u),

      new cong::Tile::County("Wexford",      "C:WX", cong::Tile::Color::Green,  3000u, {{ 260u, 1300u, 3900u,  9000u, 11000u, 12750u }}, 2000u, 2000u, 1500u),
      new cong::Tile::County("Limerick",     "C:L ", cong::Tile::Color::Green,  3000u, {{ 260u, 1300u, 3900u,  9000u, 11000u, 12750u }}, 2000u, 2000u, 1500u),
      new cong::Tile::County("Waterford",    "C:WD", cong::Tile::Color::Green,  3200u, {{ 280u, 1500u, 4500u, 10000u, 12000u, 14000u }}, 2000u, 2000u, 1600u),

      new cong::Tile::County("Cork",         "C:C ", cong::Tile::Color::Navy,   3500u, {{ 350u, 1750u, 5000u, 12000u, 13000u, 15000u }}, 2000u, 2000u, 1750u),
      new cong::Tile::County("Roscommon",    "C:RN", cong::Tile::Color::Navy,   4000u, {{ 400u, 2000u, 6000u, 13000u, 14000u, 17000u }}, 2000u, 2000u, 2000u),
    }};

    Board();

    ~Board();

    void listTiles() const;

//    const std::array<int, 1> tiles = {{1}};

  };

}




#endif //CONGLOMERATE_BOARD_H

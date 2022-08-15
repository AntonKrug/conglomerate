//
// Created by anton.krug@gmail.com on 10/06/22.
// License: MIT
//

#include "board.h"


void cong::Board::listTiles() const {
  for (auto *tile:tiles) {
    tile->displayTile();
  }
}


cong::Board::Board(): tiles(
    {{
         new cong::tile::Nop (    "go",           "-go-", "Collect $50k as you pass 'go'"),

         new cong::tile::County(  "Westmeath",    "C:WH", cong::tile::Color::Brown,  15, {{ 1,  3,   7,  22,  40,  62 }}, 12,  7),
         new cong::tile::County(  "Donegal",      "C:DL", cong::tile::Color::Brown,  15, {{ 2,  5,  15,  45,  80, 112 }}, 12,  7),

         new cong::tile::Action(  "Income tax",   "Tax ", "Pay $50k or 2% of your net worth", false, 50, 2),
         new cong::tile::Province("Munster",      "P:Mu", 50, {{7, 13, 25, 50, 0 }}, 25),

         new cong::tile::County(  "Sligo",        "C:SO", cong::tile::Color::Blue,   25, {{ 2,  7,  22,  67, 100, 115 }}, 13, 12),
         new cong::tile::PickCard(cong::Deck::Chance),
         new cong::tile::County(  "Down",         "C:DN", cong::tile::Color::Blue,   25, {{ 2,  8,  23,  68, 100, 116 }}, 13, 13),
         new cong::tile::County(  "Laois",        "C:LS", cong::tile::Color::Blue,   30, {{ 3, 10,  25,  75, 112, 150 }}, 13, 15),

         new cong::tile::Nop(     "Jail",         "Jail", "Visiting Jail"),

         new cong::tile::County(  "Tyrone",       "C:TE", cong::tile::Color::Pink,   35, {{ 3, 12,  37, 112, 156, 187 }}, 25, 17),
         new cong::tile::County(  "Cavan",        "C:CN", cong::tile::Color::Pink,   35, {{ 3, 13,  38, 113, 157, 188 }}, 25, 18),
         new cong::tile::Utility( "Post Office",  "Post", 37, 1, 3, 19),
         new cong::tile::County(  "Kerry",        "C:KY", cong::tile::Color::Pink,   40, {{ 4, 15,  45, 125, 175, 225 }}, 25, 20),

         new cong::tile::Province("Connaught",    "P:Co", 50, {{7, 13, 25, 50, 0 }}, 25),

         new cong::tile::County(  "Fermanagh",    "C:FE", cong::tile::Color::Orange, 45, {{ 4, 17,  50, 112, 187, 237 }}, 25, 22),
         new cong::tile::County(  "Leitrim",      "C:LM", cong::tile::Color::Orange, 45, {{ 4, 18,  50, 113, 188, 238 }}, 25, 23),
         new cong::tile::PickCard(cong::Deck::Community),
         new cong::tile::County(  "Galway",       "C:G ", cong::tile::Color::Orange, 50, {{ 5, 20,  55, 150, 200, 250 }}, 25, 25),

         new cong::tile::Nop(    "Free parking",  "Free", "You can stay here for free"),

         new cong::tile::County(  "Meath",        "C:MH", cong::tile::Color::Red,    55, {{ 5, 22,  62, 175, 218, 262 }}, 37, 27),
         new cong::tile::County(  "Kilkenny",     "C:KK", cong::tile::Color::Red,    55, {{ 5, 23,  63, 175, 219, 263 }}, 37, 28),
         new cong::tile::PickCard(cong::Deck::Chance),
         new cong::tile::County(  "Offaly",       "C:OY", cong::tile::Color::Red,    60, {{ 6, 25,  75, 187, 230, 275 }}, 37, 30),

         new cong::tile::Province("Leinster",     "P:Le", 50, {{7, 13, 25, 50, 0 }}, 25),

         new cong::tile::County(  "Mayo",         "C:MO", cong::tile::Color::Yellow, 65, {{ 6, 27,  82, 200, 243, 287 }}, 38, 32),
         new cong::tile::PickCard(cong::Deck::Community),
         new cong::tile::County(  "Dublin",       "C:D ", cong::tile::Color::Yellow, 65, {{ 6, 28,  83, 200, 244, 288 }}, 38, 33),

         new cong::tile::Province("Ulster",       "P:Ul", 50, {{7, 13, 25, 50, 0 }}, 25),
         new cong::tile::Utility( "Internet",     "Inet", 37, 1, 3, 19),
         new cong::tile::Action(  "Go to Jail",   "GoTJ", "Go directly to Jail", true, 0, 0),
         new cong::tile::Action(  "Duty payment", "Duty", "Pay $25k", false, 25, 100),
     }})
{ }


cong::Board::~Board() {
  std::cout << "Freeing board tiles" << std::endl;
  for (auto tile:tiles) {
    delete tile;
  }
}


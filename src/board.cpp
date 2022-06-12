//
// Created by anton.krug@gmail.com on 10/06/22.
// License: MIT
//

#include "board.h"

cong::Tile::Utility cong::Board::post(      "Post Office",  "Post", 37u, 1u, 3u, 19u);
cong::Tile::Utility cong::Board::internet(  "Internet",     "Inet", 37u, 1u, 3u, 19u);

cong::Tile::Province cong::Board::munster(  "Munster",      "P:Mu",  50u, {{ 7u, 13u, 25u, 50u, 0u }}, 25u);
cong::Tile::Province cong::Board::connaught("Connaught",    "P:Co",  50u, {{ 7u, 13u, 25u, 50u, 0u }}, 25u);
cong::Tile::Province cong::Board::leinster( "Leinster",     "P:Le",  50u, {{ 7u, 13u, 25u, 50u, 0u }}, 25u);
cong::Tile::Province cong::Board::ulster(   "Ulster",       "P:Ul",  50u, {{ 7u, 13u, 25u, 50u, 0u }}, 25u);

cong::Tile::County cong::Board::westmeath(  "Westmeath",    "C:WH", cong::Tile::Color::Brown,  15u, {{  1u,  3u,   7u,  22u,  40u,  62u }}, 12u, 7u);
cong::Tile::County cong::Board::donegal(    "Donegal",      "C:DL", cong::Tile::Color::Brown,  15u, {{  2u,  5u,  15u,  45u,  80u, 112u }}, 12u, 7u);

cong::Tile::County cong::Board::sligo(      "Sligo",        "C:SO", cong::Tile::Color::Blue,   25u, {{  2u,  7u,  22u,  67u, 100u, 115u }}, 13u, 12u);
cong::Tile::County cong::Board::down(       "Down",         "C:DN", cong::Tile::Color::Blue,   25u, {{  2u,  8u,  23u,  68u, 100u, 116u }}, 13u, 13u);
cong::Tile::County cong::Board::laois(      "Laois",        "C:LS", cong::Tile::Color::Blue,   30u, {{  3u, 10u,  25u,  75u, 112u, 150u }}, 13u, 15u);

cong::Tile::County cong::Board::tyrone(     "Tyrone",       "C:TE", cong::Tile::Color::Pink,   35u, {{  3u, 12u,  37u, 112u, 156u, 187u }}, 25u, 17u);
cong::Tile::County cong::Board::cavan(      "Cavan",        "C:CN", cong::Tile::Color::Pink,   35u, {{  3u, 13u,  38u, 113u, 157u, 188u }}, 25u, 18u);
cong::Tile::County cong::Board::kerry(      "Kerry",        "C:KY", cong::Tile::Color::Pink,   40u, {{  4u, 15u,  45u, 125u, 175u, 225u }}, 25u, 20u);

cong::Tile::County cong::Board::fermanagh(  "Fermanagh",    "C:FE", cong::Tile::Color::Orange, 45u, {{  4u, 17u,  50u, 112u, 187u, 237u }}, 25u, 22u);
cong::Tile::County cong::Board::leitrim(    "Leitrim",      "C:LM", cong::Tile::Color::Orange, 45u, {{  4u, 18u,  50u, 113u, 188u, 238u }}, 25u, 23u);
cong::Tile::County cong::Board::galway(     "Galway",       "C:G ", cong::Tile::Color::Orange, 50u, {{  5u, 20u,  55u, 150u, 200u, 250u }}, 25u, 25u);

cong::Tile::County cong::Board::meath(      "Meath",        "C:MH", cong::Tile::Color::Red,    55u, {{  5u, 22u,  62u, 175u, 218u, 262u }}, 37u, 27u);
cong::Tile::County cong::Board::kilkenny(   "Kilkenny",     "C:KK", cong::Tile::Color::Red,    55u, {{  5u, 23u,  63u, 175u, 219u, 263u }}, 37u, 28u);
cong::Tile::County cong::Board::offaly(     "Offaly",       "C:OY", cong::Tile::Color::Red,    60u, {{  6u, 25u,  75u, 187u, 230u, 275u }}, 37u, 30u);

cong::Tile::County cong::Board::mayo(       "Mayo",         "C:MO", cong::Tile::Color::Yellow, 65u, {{  6u, 27u,  82u, 200u, 243u, 287u }}, 38u, 32u);
cong::Tile::County cong::Board::dublin(     "Dublin",       "C:D ", cong::Tile::Color::Yellow, 65u, {{  6u, 28u,  83u, 200u, 244u, 288u }}, 38u, 33u);
cong::Tile::County cong::Board::louth(      "Louth",        "C:LH", cong::Tile::Color::Yellow, 70u, {{  7u, 30u,  90u, 226u, 256u, 300u }}, 38u, 35u);

cong::Tile::County cong::Board::wexford(    "Wexford",      "C:WX", cong::Tile::Color::Green,  75u, {{  7u, 32u,  92u, 225u, 275u, 319u }}, 50u, 37u);
cong::Tile::County cong::Board::limerick(   "Limerick",     "C:L ", cong::Tile::Color::Green,  75u, {{  7u, 33u,  93u, 226u, 278u, 320u }}, 50u, 38u);
cong::Tile::County cong::Board::waterford(  "Waterford",    "C:WD", cong::Tile::Color::Green,  80u, {{  8u, 40u, 110u, 250u, 300u, 350u }}, 50u, 40u);

cong::Tile::County cong::Board::cork(       "Cork",         "C:C ", cong::Tile::Color::Navy,   87u, {{  9u, 43u, 125u, 300u, 325u, 375u }}, 50u, 44u);
cong::Tile::County cong::Board::roscommon(  "Roscommon",    "C:RN", cong::Tile::Color::Navy,   99u, {{ 10u, 50u, 150u, 325u, 350u, 425u }}, 50u, 50u);

cong::Tile::Nop cong::Board::go(            "go",           "-go-", "Collect $50k as you pass 'go'");
cong::Tile::Nop cong::Board::parking(       "Free parking", "Free", "Collect $50k as you pass 'go'");

void cong::Board::listTiles() {
  for (auto tile:tiles) {
    tile->displayTile();
  }
}


void cong::Board::reset() {
  for (auto tile:tiles) {
    if (tile->canBePurchased) {
      auto aProperty = dynamic_cast<cong::Tile::Property *>(tile);

      aProperty->owner     = nullptr;
      aProperty->mortgaged = false;
    }
  }
}


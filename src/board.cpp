//
// Created by anton.krug@gmail.com on 10/06/22.
// License: MIT
//

#include "board.h"

cong::tile::Utility cong::Board::post(      "Post Office", "Post", 37, 1, 3, 19);
cong::tile::Utility cong::Board::internet(  "Internet",    "Inet", 37, 1, 3, 19);

cong::tile::Province cong::Board::munster(  "Munster",     "P:Mu", 50, {{7, 13, 25, 50, 0 }}, 25);
cong::tile::Province cong::Board::connaught("Connaught",   "P:Co", 50, {{7, 13, 25, 50, 0 }}, 25);
cong::tile::Province cong::Board::leinster( "Leinster",    "P:Le", 50, {{7, 13, 25, 50, 0 }}, 25);
cong::tile::Province cong::Board::ulster(   "Ulster",      "P:Ul", 50, {{7, 13, 25, 50, 0 }}, 25);

cong::tile::County cong::Board::westmeath(  "Westmeath",   "C:WH", cong::tile::Color::Brown,  15, {{ 1,  3,   7,  22,  40,  62 }}, 12,  7);
cong::tile::County cong::Board::donegal(    "Donegal",     "C:DL", cong::tile::Color::Brown,  15, {{ 2,  5,  15,  45,  80, 112 }}, 12,  7);

cong::tile::County cong::Board::sligo(      "Sligo",       "C:SO", cong::tile::Color::Blue,   25, {{ 2,  7,  22,  67, 100, 115 }}, 13, 12);
cong::tile::County cong::Board::down(       "Down",        "C:DN", cong::tile::Color::Blue,   25, {{ 2,  8,  23,  68, 100, 116 }}, 13, 13);
cong::tile::County cong::Board::laois(      "Laois",       "C:LS", cong::tile::Color::Blue,   30, {{ 3, 10,  25,  75, 112, 150 }}, 13, 15);

cong::tile::County cong::Board::tyrone(     "Tyrone",      "C:TE", cong::tile::Color::Pink,   35, {{ 3, 12,  37, 112, 156, 187 }}, 25, 17);
cong::tile::County cong::Board::cavan(      "Cavan",       "C:CN", cong::tile::Color::Pink,   35, {{ 3, 13,  38, 113, 157, 188 }}, 25, 18);
cong::tile::County cong::Board::kerry(      "Kerry",       "C:KY", cong::tile::Color::Pink,   40, {{ 4, 15,  45, 125, 175, 225 }}, 25, 20);

cong::tile::County cong::Board::fermanagh(  "Fermanagh",   "C:FE", cong::tile::Color::Orange, 45, {{ 4, 17,  50, 112, 187, 237 }}, 25, 22);
cong::tile::County cong::Board::leitrim(    "Leitrim",     "C:LM", cong::tile::Color::Orange, 45, {{ 4, 18,  50, 113, 188, 238 }}, 25, 23);
cong::tile::County cong::Board::galway(     "Galway",      "C:G ", cong::tile::Color::Orange, 50, {{ 5, 20,  55, 150, 200, 250 }}, 25, 25);

cong::tile::County cong::Board::meath(      "Meath",       "C:MH", cong::tile::Color::Red,    55, {{ 5, 22,  62, 175, 218, 262 }}, 37, 27);
cong::tile::County cong::Board::kilkenny(   "Kilkenny",    "C:KK", cong::tile::Color::Red,    55, {{ 5, 23,  63, 175, 219, 263 }}, 37, 28);
cong::tile::County cong::Board::offaly(     "Offaly",      "C:OY", cong::tile::Color::Red,    60, {{ 6, 25,  75, 187, 230, 275 }}, 37, 30);

cong::tile::County cong::Board::mayo(       "Mayo",        "C:MO", cong::tile::Color::Yellow, 65, {{ 6, 27,  82, 200, 243, 287 }}, 38, 32);
cong::tile::County cong::Board::dublin(     "Dublin",      "C:D ", cong::tile::Color::Yellow, 65, {{ 6, 28,  83, 200, 244, 288 }}, 38, 33);

cong::tile::Nop cong::Board::go(            "go",           "-go-", "Collect $50k as you pass 'go'");
cong::tile::Nop cong::Board::parking(       "Free parking", "Free", "You can stay here for free");

cong::tile::PickCard cong::Board::chance(   cong::Deck::Chance);
cong::tile::PickCard cong::Board::community(cong::Deck::Community);

cong::tile::Action cong::Board::goToJail(   "Go to Jail",   "GoTJ", "Go directly to Jail", true, 0, 0);
cong::tile::Action cong::Board::incomeTax(  "Income tax",   "TAX",  "Pay $50k or 2% of your net worth", false, 50, 2);
cong::tile::Action cong::Board::dutyPayment("Duty payment", "Duty", "Pay $25k", false, 25, 100);

cong::tile::Jail   cong::Board::jail;


void cong::Board::listTiles() const {
  for (auto tile:tiles) {
    tile->displayTile();
  }
}


//void cong::Board::reset() {
//  for (auto tile:tiles) {
//    if (tile->canBePurchased) {
//      auto aProperty = dynamic_cast<cong::tile::Property *>(tile);
//
//      aProperty->owner     = nullptr;
//      aProperty->mortgaged = false;
//    }
//  }
//}
//

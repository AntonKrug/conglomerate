//
// Created by anton.krug@gmail.com on 13/06/22.
// License: MIT
//
#include "boardSearch.h"

#include "tile/color.h"
#include "tile/type.h"
//#include "menu/item.h"
#include "board.h"

cong::BoardSearch::BoardSearch(cong::Board &boardInit) :
    board(boardInit),
    whereName(false),
    whereColor(false),
    whereOwner(false),
    whereMortgaged(false),
    whereType(false),
    name(""),                       // just some init value, will be changed later
    color(cong::tile::Color::Red),  // just some init value, will be changed later
    player(nullptr),
    type(cong::tile::Type::Nop),    // just some init value, will be changed later
    menu({}),
    mortgage(false),                // just some init value, will be changed later
    foundPosition(-1),                 // by default return (not found index)
    foundTiles({})
    { }


unsigned int cong::BoardSearch::executeSearch(bool populateMenu, bool stopAfterFirstMatch) {
  unsigned int count = 0;

  if (!whereName &&
      !whereColor &&
      !whereMortgaged &&
      !whereType &&
      !whereOwner) {

    // If we didn't specify search criteria then no point to continue
    return 0;
  }

  for (int i=0; i<board.tiles.size(); i++) {
    auto *tile = board.tiles[i];

    // Searching values in all types
    if (whereName && name != tile->name) continue;
    if (whereType && type != tile->type) continue;

    // Searching in the values of the property types
    if (whereOwner || whereMortgaged) {
      auto property = dynamic_cast<cong::tile::Property*>(tile);
      if (property) {
        if (whereOwner && player != property->owner) continue;
        if (whereMortgaged && mortgage != property->mortgaged) continue;
      } else {
        // we wanted to search in property type of tiles but this is
        // completely different type of tile, so no point to keep searching,
        // skip the rest of the tests and do NOT save this tile as a match
        continue;
      }
    }

    // Searching in the values of the county type
    if (whereColor) {
      auto county = dynamic_cast<cong::tile::County*>(tile);
      if (county) {
        if (color != county->color) continue;
      } else {
        // Not even county type of tile, no point searching it then
        continue;
      }
    }

    // passed all tests, the tile can be counted and optionally added to the menu
    count++;
    foundPosition = i;
    foundTiles.push_back(tile);
//    if (populateMenu) menu.push_back(cong::menu::Item(tile->name));

    if (stopAfterFirstMatch) break;
  }

  return count;
}


cong::BoardSearch *cong::BoardSearch::filterName(std::string searchName) {
  whereName = true;
  name = searchName;  // std::move
  return this;
}


cong::BoardSearch *cong::BoardSearch::filterColor(cong::tile::Color searchColor) {
  whereColor = true;
  color = searchColor;
  return this;
}


cong::BoardSearch *cong::BoardSearch::filterOwner(cong::Player *searchPlayer) {
  whereOwner = true;
  player = searchPlayer;
  return this;
}


cong::BoardSearch *cong::BoardSearch::filterType(cong::tile::Type searchType) {
  whereType = true;
  type = searchType;
  return this;
}


cong::BoardSearch *cong::BoardSearch::filterMortaged(bool searchMortaged) {
  whereMortgaged = true;
  mortgage = searchMortaged;
  return this;
}


unsigned int cong::BoardSearch::getSize() {
  return executeSearch(false, false);
}


std::vector<cong::menu::Item*> cong::BoardSearch::getMenu() {
  executeSearch(true, false);
  return menu;
}


int cong::BoardSearch::getPosition() {
  executeSearch(false, true);
  return foundPosition;
}


std::vector<cong::tile::Basic*> cong::BoardSearch::getTiles() {
  executeSearch(false, false);
  return foundTiles;
}


//
// Created by anton.krug@gmail.com on 13/06/22.
// License: MIT
//
#include "boardSearch.h"

cong::BoardSearch::BoardSearch() :
  whereColor(false),
  whereOwner(false),
  whereMortaged(false),
  whereType(false),
  color(cong::tile::Color::Red),  // just some init value, will be chaned later
  player(nullptr),
  type(cong::tile::Type::Nop),    // just some init value
  menu({}),
  mortaged(false),                // just some init value
  foundIndex(0),                  // just some init value
  foundTile(nullptr)
  { }


unsigned int cong::BoardSearch::executeSearch(bool populateMenu, bool stopAfterFirstMatch) {
  unsigned int count = 0;

  // If we didn't specify search criteria then no point to
  if (!whereColor && !whereMortaged && !whereType && !whereOwner) return 0;

  for (int i=0; i<Board::tiles.size(); i++) {
    auto *tile = Board::tiles[i];
    if (whereType && type != tile->type) continue;

    if (whereOwner || whereMortaged) {
      auto property = dynamic_cast<cong::tile::Property*>(tile);
      if (whereOwner && player != property->owner) continue;
      if (whereMortaged && mortaged != property->mortgaged) continue;
    }

    if (whereColor) {
      auto county = dynamic_cast<cong::tile::County*>(tile);
      if (color != county->color) continue;
    }

    // passed all checks, the tile can be counted and optionally added to the menu
    count++;
    foundIndex = i;
    foundTile = tile;
//    if (populateMenu) menu.push_back(cong::menu::Item(tile->name));

    if (stopAfterFirstMatch) break;
  }

  return count;
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
  whereMortaged = true;
  mortaged = searchMortaged;
  return this;
}


unsigned int cong::BoardSearch::getSize() {
  return executeSearch(false, false);
}


std::vector<cong::menu::Item> cong::BoardSearch::getMenu() {
  executeSearch(true, false);
  return menu;
}


unsigned int cong::BoardSearch::getIndex() {
  executeSearch(false, true);
  return foundIndex;
}


cong::tile::Basic* cong::BoardSearch::getTile() {
  executeSearch(false, true);
  return foundTile;
}


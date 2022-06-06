cmake_minimum_required(VERSION 3.22)
project(conglomerate)

set(CMAKE_CXX_STANDARD 17)

add_executable(conglomerate main.cpp cards/card.cpp player.cpp player.h cards/card.h ui/interface.h ui/base.cpp game.h board.h tiles/interface.h tiles/county.h tiles/color.h tiles/property.h bank.h ui/terminalStdout.cpp boardSearch.h tiles/type.h menu/item.h tiles/utility.h)

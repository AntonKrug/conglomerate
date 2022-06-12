cmake_minimum_required(VERSION 3.22)
project(conglomerate)

set(CMAKE_CXX_STANDARD 17)

#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++")

include_directories (${PROJECT_SOURCE_DIR}/src)

add_executable(conglomerate src/main.cpp src/card/card.cpp src/player.cpp src/player.h src/card/card.h src/ui/interface.h src/ui/base.cpp src/game.h src/board.h src/tile/interface.h src/tile/county.h src/tile/color.h src/tile/property.h src/ui/terminalStdout.cpp src/boardSearch.h src/tile/type.h src/menu/item.h src/tile/utility.h src/tile/utility.cpp src/tile/interface.cpp src/tile/property.cpp src/auction.h src/tile/province.h src/tile/province.cpp src/board.cpp src/game.cpp src/tile/county.cpp src/tile/nop.h src/tile/nop.cpp)

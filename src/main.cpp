#include "board.h"
#include "card/card.h"

#include <iostream>


const cong::Board board;
cong::Player player("Meno");

//void func(const std::function<void(const cong::Board &board)> &f){
//  int a = 2;
//  f(board);
//}

//cong::Card card("karta", true, 0, [] (const int a) {
//  std::cout << a * 20000 << std::endl;
//});


cong::Card card("karta", true, 0, [] (cong::Player &p, const cong::Board &b) {
  b.listTiles();
  std::cout << p.name << std::endl;
});

//void func2(const std::function<void(cong::Player &player, const cong::Board &board)> &f){
//  f(player, board);
//}


//void func3(std::function<void(cong::Player &player, const cong::Board &board)> f){
//  f(player, board);
//}

int main() {
  std::cout << "Hello, World!" << std::endl;

  if (card.doAction) {
    card.doAction.value()(player, board);
  }

//  func2([] (cong::Player &pla, const cong::Board &a) {
////    std::cout << "22" << " " << a*2 << std::endl;
//    board.listTiles();
//    std::cout << pla.name << std::endl;
//  });

//  func3(std::move([] (cong::Player &pla, const cong::Board &a) {
////    std::cout << "22" << " " << a*2 << std::endl;
//    board.listTiles();
//    std::cout << pla.name << std::endl;
//  }));


//  func([] (const cong::Board &a) {
////    std::cout << "22" << " " << a*2 << std::endl;
//    std::cout << "22" << " " << std::endl;
//    board.listTiles();
//  });

//  cong::Player player1("Not AI player");

//  int a = 2;
//  cong::Card card("Card", true, 0, [a] () -> {
////    player1.getNetWorth();
////    board.listTiles();
//  });


  return 0;

}

//#include <array>
//#include <iostream>
//
//std::array<int, 4> ans = {{ 1,2,3,4 }};
//
//for (int i:ans) {
//  std::cout << "hi" << std::endl;
//}
//


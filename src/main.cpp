#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "IO.h"
#include "menu.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  IO io("../data/leaderboard.txt");
  Menu menu;

  int option;
  while (option != 3) {
    menu.makeMenu();
    option = menu.getChoice();
    if (option == 1) {
      std::cout << std::endl;
      break;
    } else if (option == 2) {
      io.Print();
    } else if (option == 3) {
      return 0;
    }
  }

  Controller controller;
  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Game game(kGridWidth, kGridHeight);
  game.Run(controller, renderer, kMsPerFrame);
  
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  char flag;
  std::cout << "Do you want to write your score onto the leaderboard (y/n)? ";
  std::cin >> flag;
  if (flag == 'y') io.Add(game.GetScore());
  std::cout << std::endl;
  io.Write();

  return 0;
}
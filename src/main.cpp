//Using SDL and standard IO
#include "Game.h"

Game game;

int main(int argc, char* args[])
{
  //game* = new Game();
  game.Init();
  game.GameLoop();
  game.Finalize();

  return 0;
}

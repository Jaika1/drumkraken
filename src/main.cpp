#include <iostream>
#include "common/Game.h"

int main(int, char**){
    Game* game = new Game();
    game->Run();
    delete game;
    return EXIT_SUCCESS;
}

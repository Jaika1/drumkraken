#include <iostream>
#include <filesystem>
#include "common/Game.h"

int main(int, char**) {
    std::cout << std::filesystem::current_path() << std::endl;
    game->Run();
    delete game;
    return EXIT_SUCCESS;
}

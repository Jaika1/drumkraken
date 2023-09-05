#include "Game.h"
#include <raylib.h>

void Game::Run() {
    InitWindow(1280, 720, "Drum Kraken");
    while(!WindowShouldClose()) {
        Update();
        Draw();
    }
    CloseWindow();
}

void Game::Update() {

}

void Game::Draw() {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawFPS(16, 16);
    EndDrawing();
}
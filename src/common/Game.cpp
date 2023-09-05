#include "Game.h"
#include <raylib.h>
#include <string>
#include "../scene/InitScene.h"

void Game::Run() {
    scene = new InitScene();

    SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_WINDOW_RESIZABLE | FLAG_WINDOW_ALWAYS_RUN);

    InitWindow(1280, 720, "Drum Kraken");
    while(!WindowShouldClose()) {
        Update();
        Draw();
    }
    CloseWindow();

    delete scene;
}

void Game::Update() {
    scene->Update();
}

void Game::Draw() {
    scene->Draw();
}
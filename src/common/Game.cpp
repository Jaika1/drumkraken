#include "Game.h"
#include <raylib.h>
#include <string>
#include "../scene/InitScene.h"
#include "../resources.h"

using namespace std;

Game* game = new Game();

void Game::Run() {
    LoadScene(new InitScene());
    SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_WINDOW_RESIZABLE | FLAG_WINDOW_ALWAYS_RUN);
    InitWindow(1280, 720, "Drum Kraken");
    while(!WindowShouldClose()) {
        Update();
        Draw();
        PostDraw();
    }
    CloseWindow();

    UnloadScene();
}

void Game::Update() {
    _scene->Update();
}

void Game::Draw() {
    _scene->Draw();
}

void Game::PostDraw() {
    _scene->PostDraw();
    if (_sceneToChange != nullptr) {
        UnloadScene();
        LoadScene(_sceneToChange);
        _sceneToChange = nullptr;
    }
}

void Game::ChangeScene(Scene* scene) {
    _sceneToChange = scene;
}

void Game::LoadScene(Scene* scene) {
    _scene = scene;
}

void Game::UnloadScene() {
    delete _scene;
    _scene = nullptr;
}
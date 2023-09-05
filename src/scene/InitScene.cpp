#include "InitScene.h"
#include <raylib.h>
#include <math.h>
#include "../common/Game.h"

void InitScene::Update() {
    if (!_loadingComplete) {
        _loadingComplete = true;
    }
}

void InitScene::Draw() {
    char text[15] = "Now loading...";
    int textw = MeasureText(text, 32);
    Color textColor = Color { 0xFF, 0xFF, 0xFF, (unsigned char)(sinf(GetTime() * (PI / fadeRate)) * 127.0f + 127.0f) };

    BeginDrawing();
    ClearBackground(BLACK);
    DrawTextEx(GetFontDefault(), text, Vector2 { (float)GetRenderWidth()/2.0f - textw/2.0f, (float)GetRenderHeight()/2.0f - 16.0f }, 33.0f, 2.0f, textColor);
    DrawText("Drum Kraken, made by Jaika 2023", 8, GetRenderHeight() - 24, 22, WHITE);
    if (_loadingComplete) {
        DrawRectangle(0, 0, GetRenderWidth(), GetRenderHeight(), Color { 0x00, 0x00, 0x00, (unsigned char)(_screenFadeAmount * 255.0f)} );
    }
    EndDrawing();
}

void InitScene::PostDraw() {
    _screenFadeAmount += GetFrameTime() / 1.0f; // RHS is time in seconds.
    if (_screenFadeAmount >= 1.0f) {
        //Change scene
        game->ChangeScene(new Scene());
    }
}
#include "ChartScene.h"
#include <raylib.h>
#include "../resources.h"

void ChartScene::Update() {

}

void ChartScene::Draw() {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawTextEx(*generalFont, "MMM YUMMY TEXT", Vector2 { 8.0f, 8.0f }, 64.0f, 1.5f, WHITE);
    EndDrawing();
}
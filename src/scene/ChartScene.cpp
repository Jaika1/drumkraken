#include "ChartScene.h"
#include <raylib.h>
#include "../resources.h"

void ChartScene::Update() {

}

void ChartScene::Draw() {
    BeginDrawing();
    ClearBackground(BLACK);
    DrawTexturePro(
        *referenceImage,
        Rectangle { 0, 0, 2560, 1440 },
        Rectangle { 0, 0, (float)GetRenderWidth(), (float)GetRenderHeight() },
        Vector2(),
        0.0f,
        WHITE
    );
    DrawRectangle(0, 276, 498, 264, Color { 255, 255, 255, 127 });
    DrawRectangle(498, 276, GetRenderWidth() - 498, 264, Color { 255, 0, 255, 127 });
    DrawRectangle(724, 204, GetRenderWidth() - 724, 84, Color { 0, 127, 255, 127 });
    DrawRectangle(1300, 334, 104, 104, Color { 0, 255, 127, 127 });
    //DrawTextEx(*generalFont, "MMM YUMMY TEXT", Vector2 { 8.0f, 8.0f }, 64.0f, 1.5f, WHITE);
    EndDrawing();
}
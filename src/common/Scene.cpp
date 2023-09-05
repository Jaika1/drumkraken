#include "Scene.h"
#include <raylib.h>

void Scene::Update() {

}

void Scene::Draw() {
    char text[46] = "This scene has been left intentionally blank.";
    int textw = MeasureText(text, 32);

    BeginDrawing();
    ClearBackground(BLACK);
    DrawText(text, GetRenderWidth()/2 - textw/2, GetRenderHeight()/2 - 16, 32, WHITE);
    EndDrawing();
}

void Scene::PostDraw() {
    
}
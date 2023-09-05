#include <iostream>
#include <raylib.h>

int main(int, char**){
    InitWindow(1280, 720, "Drum Kraken");
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        DrawFPS(16, 16);
        EndDrawing();
    }
    CloseWindow();
}

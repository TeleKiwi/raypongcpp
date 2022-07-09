#include "../lib/raylib/src/raylib.h"
#include <stdio.h>
#include <string>

int main() {
    InitWindow(600, 400, "Pong");
    SetTargetFPS(60);
    SetWindowState(FLAG_VSYNC_HINT);

    while(!WindowShouldClose()) {
        // will just print FPS basically
        BeginDrawing();

        ClearBackground(BLACK);
        DrawFPS(0, 0);

        EndDrawing();
    }

    return 0;
}
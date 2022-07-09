#include "../lib/raylib/src/raylib.h"

#include <string>

int main() {
    InitWindow(800, 600, "Pong");
    SetWindowState(FLAG_VSYNC_HINT);

    float ballX;
    float ballY;
    float ballRadius;

    while(!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(BLACK);

        // pong ball
        DrawCircle((GetScreenWidth()) / 2, (GetScreenHeight() / 2), 5, WHITE);

        // left paddle
        DrawRectangle()
    }
    return 0;   
}
#include "raylib.h"
#include "player.h"

int main() {
    InitWindow(800, 600, "Raylib Multi-file Demo");

    Player p{400, 300, 5};
    Player two{150, 100, 10};

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        UpdatePlayer(p);
        UpdatePlayer(two);

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawPlayer(p);
        DrawPlayer(two);
        EndDrawing();
    }

    CloseWindow();
}

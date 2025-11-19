#include "player.h"
#include "raylib.h"

void UpdatePlayer(Player& p) {
    if (IsKeyDown(KEY_W)) p.y -= p.speed;
    if (IsKeyDown(KEY_S)) p.y += p.speed;
    if (IsKeyDown(KEY_A)) p.x -= p.speed;
    if (IsKeyDown(KEY_D)) p.x += p.speed;
}

void DrawPlayer(const Player& p) {
    DrawRectangle(p.x, p.y, 60, 60, RED);
}

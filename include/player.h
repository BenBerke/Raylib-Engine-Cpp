#pragma once

struct Player {
    int x;
    int y;
    float speed;
};

void UpdatePlayer(Player& p);
void DrawPlayer(const Player& p);

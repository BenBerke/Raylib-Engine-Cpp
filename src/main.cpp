#include "raylib.h"
#include "GameObject.h"
#include "Scene.h"
#include "Components/Transform.h"
#include "Components/SpriteRenderer.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Raylib ECS Demo");
    SetTargetFPS(60);

    Scene currentScene;

    GameObject& player = currentScene.CreateObject<GameObject>();
    TransformComponent& t = player.AddComponent<TransformComponent>(Vector2{screenWidth/2.0f, screenHeight/2.0f});
    player.AddComponent<SpriteRenderer>(&t, Vector2{100,100});

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        if(IsKeyDown(KEY_A)) t.Translate(Vector2{t.position.x+1, t.position.y});

        currentScene.Update();
        EndDrawing();
    }

    CloseWindow();
}

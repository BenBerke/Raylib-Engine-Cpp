// TransformComponent.h
#pragma once
#include "Component.h"
#include "raylib.h"

class TransformComponent : public Component {
public:
    Vector2 position;
    float rotation;
    Vector2 scale;

    TransformComponent(Vector2 pos = {0,0}, float rot = 0, Vector2 scl = {1,1})
        : position(pos), rotation(rot), scale(scl) {}

    void Update() override {}

    void Translate(Vector2 pos){
        position = pos;
    }
};

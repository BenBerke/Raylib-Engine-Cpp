#include "Transform.h"

class SpriteRenderer : public Component {
private:
    TransformComponent* transform;  // <-- updated
    Vector2 size;
public:
    SpriteRenderer(TransformComponent* t, Vector2 s = {50,50})
        : transform(t), size(s) {}

    void Update() override {
        if (transform) {
            DrawRectangle(
                static_cast<int>(transform->position.x),
                static_cast<int>(transform->position.y),
                static_cast<int>(size.x),
                static_cast<int>(size.y),
                BLACK
            );
        }
    }
};

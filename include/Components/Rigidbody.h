#include "Component.h"

class Rigidbody : public Component{
    private:
    Vector2 velocity;
    public:
    bool isKinematic;
};
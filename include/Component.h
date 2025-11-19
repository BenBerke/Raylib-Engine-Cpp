#pragma once
#include <raylib.h>

class GameObject;

class Component{
    public:
    Component() = default;
    virtual ~Component() {}

    virtual void Update() {}
};
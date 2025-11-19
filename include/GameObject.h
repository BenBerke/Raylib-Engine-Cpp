#pragma once
#include <vector>
#include <memory>
#include <iostream>
#include "Component.h"

class GameObject{
    private:
        std::vector<std::unique_ptr<Component>> components;
    public:
        bool isActive = true;

        GameObject() = default;
        ~GameObject() = default;

        template<typename T, typename... Args>
        T& AddComponent(Args&&... args) {
            auto comp = std::make_unique<T>(std::forward<Args>(args)...);
            T& ref = *comp;
            components.push_back(std::move(comp));
            return ref;
        }

        template<typename T>
        T* GetComponent() {
            for(auto& c : components){
                if(auto casted = dynamic_cast<T*>(c.get())) return casted;
                return nullptr;
            }

            return nullptr;
        }
        void Update() {
        for (auto& c : components)
            c->Update();  
        }
};
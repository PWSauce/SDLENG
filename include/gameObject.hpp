#pragma once

#include "vector2.hpp"

class GameObject
{
public:
    GameObject() = default;

    Vector2 const&localPosition() const;
    Vector2 const&globalPosition() const;
private:
    Vector2 _position;
};
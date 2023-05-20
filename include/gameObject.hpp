#pragma once

#include "sprite.hpp"
#include "renderer.hpp"

class GameObject
{
public:
    GameObject(Sprite const& sprite);

    void draw(Renderer const& rend);
private:
    Sprite sprite;

    int x;
    int y;
};
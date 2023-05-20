#include "gameObject.hpp"
#include <SDL2/SDL.h>

GameObject::GameObject(Sprite const& sprite)
    : sprite(sprite), x(), y()
{}

void GameObject::draw(Renderer const& rend)
{
    sprite.queryTexture(NULL, NULL);
    SDL_Rect dest{};
    dest.x = x;
    dest.y = y;
    Vector2<int> spriteSize{sprite.size()};

    dest.h = spriteSize.x;
    dest.w = spriteSize.y;
    SDL_RenderCopy(rend.renderer(), sprite.texture(), NULL, &dest);
}
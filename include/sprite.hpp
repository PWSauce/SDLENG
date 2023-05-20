#pragma once

#include <SDL2/SDL.h>
#include "renderer.hpp"
#include "vector2.hpp"

class Sprite
{
public:
    Sprite(Renderer const& rend, char const* path, Vector2<int> const& size);
    Sprite(Sprite const&) = default;
    ~Sprite();

    Sprite& operator=(Sprite const&) = delete;

    SDL_Texture *texture() const;
    Vector2<int> const&size() const;
    int queryTexture(Uint32 *, int *);
private:
    SDL_Texture *_texture;
    Vector2<int> _size;
};
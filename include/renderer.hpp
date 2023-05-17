#pragma once

#include <SDL2/SDL.h>

#include "window.hpp"

class Renderer
{
public:
    Renderer(Window const&);
    Renderer(Renderer const&) = delete;
    ~Renderer();

    Renderer operator=(Renderer const&) = delete;

    SDL_Renderer *renderer() const;
private:
    SDL_Renderer *rend;
};
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

    void bufferDraw();
    /// Updates the screen with the rendering from the backbuffer.
    void render();
    void renderClear();
private:
    SDL_Renderer *rend;
};
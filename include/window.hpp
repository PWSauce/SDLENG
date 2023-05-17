#pragma once

#include <SDL2/SDL.h>

class Window
{
public:
    Window(char const *name, int x, int y, int w, int h, Uint32 flags);

    SDL_Window *window() const;
private:
    SDL_Window *wind;
};
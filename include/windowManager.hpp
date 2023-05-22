#pragma once

#include <SDL2/SDL.h>
#include "sprite.hpp"

class WindowManager
{
public:
    WindowManager(char const *name, int x, int y, int w, int h, Uint32 flags);

    void clearBuffer();
    void drawToBuffer(Sprite const&);
    void updateScreen();
private:    
    SDL_Window *window;
    SDL_Renderer *renderer;
};
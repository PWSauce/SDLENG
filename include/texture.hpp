#pragma once

#include <SDL2/SDL.h>

class Texture
{
public:
    Texture();
    ~Texture();

    SDL_Texture &texture() const;
private:
    SDL_Texture *tex;
};
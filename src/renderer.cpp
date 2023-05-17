#include "renderer.hpp"

Renderer::Renderer(Window const& wind)
    : rend(SDL_CreateRenderer(wind.window(), -1, 0))
{
}

Renderer::~Renderer()
{
    SDL_DestroyRenderer(rend);
}

SDL_Renderer *Renderer::renderer() const
{
    return rend;
}

#include "window.hpp"

Window::Window(char const *name, int x, int y, int w, int h, Uint32 flags)
    : wind(SDL_CreateWindow(name, x, y, w, h, flags))
{
}

SDL_Window *Window::window() const
{
    return wind;
}

#pragma once

#include <SDL2/SDL.h>

class Game
{
public:
    Game();

    void run();
protected:
    virtual void initialize();
    virtual void update();
    virtual void fixedUpdate();
    virtual void draw();
private:
    SDL_Renderer *renderer;
    SDL_Window *window;

    bool isRunning;
};
#pragma once

#include <SDL2/SDL.h>
#include "renderer.hpp"
#include "window.hpp"

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
    Renderer renderer;
    Window window;

    bool isRunning;
};
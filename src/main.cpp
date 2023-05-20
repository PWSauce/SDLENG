#include <SDL2/SDL.h>
#include <iostream>
#include <SDL2/SDL_image.h>
#include "renderer.hpp"
#include "window.hpp"
#include "sprite.hpp"
#include "gameObject.hpp"
#include "vector2.hpp"
//STBImage

int main(int argv, char** args)
{
    SDL_Init(SDL_INIT_EVERYTHING);

    Window wind {"Hello SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0};

    Renderer rend{wind};

    bool isRunning = true;
    SDL_Event event;

    SDL_Texture *texture{};
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", "resources/RubberDucky.png");
    texture = IMG_LoadTexture(rend.renderer(), "resources/RubberDucky.png");
    Vector2<int> vector2{100, 100};
    Sprite sprite {rend, "resources/RubberDucky.png", vector2};
    GameObject object{sprite};

    while (isRunning)
    {
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                isRunning = false;
                break;

            case SDL_KEYDOWN:
                if (event.key.keysym.sym == SDLK_ESCAPE)
                {
                    isRunning = false;
                }
            }
        }

        SDL_RenderClear(rend.renderer());

        object.draw(rend);
        SDL_SetRenderDrawColor(rend.renderer(), 255, 0, 0, 255);

        SDL_RenderPresent(rend.renderer());
    }

    SDL_DestroyRenderer(rend.renderer());
    SDL_DestroyWindow(wind.window());
    SDL_DestroyTexture(texture);
    SDL_Quit();

    return 0;
}
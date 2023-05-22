#pragma once

#include <SDL2/SDL.h>
#include <map>
#include <string>
#include "texture.hpp"

class ResourceManager
{
public:
    ResourceManager();

    void loadTexture();
    Texture &getTexture() const;
private:
    std::map<std::string, Texture> textures;
};
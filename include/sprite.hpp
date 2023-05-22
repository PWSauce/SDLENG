#pragma once

#include <string>
#include "gameObject.hpp"
#include "vector2.hpp"

class Sprite : public GameObject
{
public:
    Sprite(std::string const& path, Vector2 const& size);

    std::string const&texturePath() const;
private:
    std::string texPath;
    Vector2 size;
};
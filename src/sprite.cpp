#include "sprite.hpp"
#include <SDL2/SDL_image.h>

Sprite::Sprite(Renderer const& rend, char const* path, Vector2<int> const& size)
    : _texture(IMG_LoadTexture(rend.renderer(), path)), _size(size)
{

}

Sprite::~Sprite()
{
    SDL_DestroyTexture(_texture);
}

SDL_Texture *Sprite::texture() const
{
    return _texture;
}

Vector2<int> const&Sprite::size() const
{
    return _size;
}

int Sprite::queryTexture(Uint32 *format, int *access)
{
    return SDL_QueryTexture(_texture, format, access, &_size.x, &_size.y);
}

#pragma once

template <typename T>
class Vector2
{
public:
    Vector2();
    Vector2(T x, T y);

    T length() const;

    T x;
    T y;
};

#include "vector2.tpp"

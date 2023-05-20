#pragma once


template <class T>
class Vector2
{
public:
    Vector2() = default;
    Vector2(T x, T y);

    T x;
    T y;
};

#include "vector2.tpp"

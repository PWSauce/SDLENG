#include "vector2.hpp"
#include <cmath>

template <typename T>
Vector2<T>::Vector2()
    : x(), y()
{

}

template <typename T>
Vector2<T>::Vector2(T x, T y)
    : x(x), y(y)
{

}

template <typename T>
T Vector2<T>::length() const
{
    T l = x*x + y*y;

    return std::sqrt(l);
}
#include "BasicObject.hpp"

BasicObject::BasicObject(float x, float y, float width, float height):
_size(width, height),
_position(x, y)
{

}

const sf::Vector2f& BasicObject::getPosition()
{
    return _position;
}

const sf::Vector2f& BasicObject::getSize()
{
    return _size;
}

void BasicObject::move(const sf::Vector2f& moveVector)
{
    _position += moveVector;
}
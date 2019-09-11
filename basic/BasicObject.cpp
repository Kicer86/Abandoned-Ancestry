#include "BasicObject.hpp"

BasicObject::BasicObject(float x, float y):
_position(x, y)
{

}

const sf::Vector2f& BasicObject::getPosition()
{
    return _position;
}

void BasicObject::move(const sf::Vector2f& moveVector)
{
    _position += moveVector;
}

void BasicObject::moveTo(const sf::Vector2f& position)
{
    _position = position;
}

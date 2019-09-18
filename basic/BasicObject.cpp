#include "BasicObject.hpp"

BasicObject::BasicObject(float x, float y, float rotationDegrees):
_position(x, y),
_rotationDegrees(rotationDegrees)
{

}

const sf::Vector2f& BasicObject::getPosition()
{
    return _position;
}

const float BasicObject::getRotationDegrees()
{
    return _rotationDegrees;
}

void BasicObject::move(const sf::Vector2f& moveVector)
{
    _position += moveVector;
}

void BasicObject::moveTo(const sf::Vector2f& position)
{
    _position = position;
}

void BasicObject::rotate(const float rotation)
{
    _rotationDegrees += rotation;
}
void BasicObject::rotateTo(const float degree)
{
    _rotationDegrees = degree;
}
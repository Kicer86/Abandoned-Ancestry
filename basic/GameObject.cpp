#include "GameObject.hpp"

const sf::Vector2f& GameObject::getPosition()
{
    return _position;
}
const sf::Vector2f& GameObject::getSize()
{
    return _size;
}
void GameObject::move(const sf::Vector2f& moveVector)
{
    _position += moveVector;
}
void GameObject::draw(sf::RenderTarget *drawer)
{
    sf::RectangleShape rectangle(_size);
    rectangle.setPosition(_position);
    rectangle.setFillColor(sf::Color(0, 0, 0, 255));
    rectangle.setOutlineColor(sf::Color(255, 0, 0, 0));
    drawer->draw(rectangle);
}
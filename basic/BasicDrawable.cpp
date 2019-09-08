#include "BasicDrawable.hpp"

BasicDrawable::BasicDrawable(IObject *owner):
_owner(owner)
{

}
void BasicDrawable::draw(sf::RenderTarget *drawer)
{
    sf::RectangleShape rectangle(_owner->getSize());
    rectangle.setPosition(_owner->getPosition());
    rectangle.setFillColor(sf::Color(0, 0, 0, 0));
    rectangle.setOutlineThickness(1.0f);
    rectangle.setOutlineColor(sf::Color(255, 0, 0, 255));
    drawer->draw(rectangle);
}
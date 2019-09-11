#include "BasicDrawable.hpp"

void BasicDrawable::draw(IObject *model, sf::RenderTarget *drawer)
{
    sf::RectangleShape rectangle(model->getSize());
    rectangle.setPosition(model->getPosition());
    rectangle.setFillColor(sf::Color(0, 0, 0, 0));
    rectangle.setOutlineThickness(1.0f);
    rectangle.setOutlineColor(sf::Color(255, 0, 0, 255));
    drawer->draw(rectangle);
}
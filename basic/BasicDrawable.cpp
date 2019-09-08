#include "BasicDrawable.hpp"

BasicDrawable::BasicDrawable(IObject *model):
_model(model)
{

}
void BasicDrawable::draw(sf::RenderTarget *drawer)
{
    sf::RectangleShape rectangle(_model->getSize());
    rectangle.setPosition(_model->getPosition());
    rectangle.setFillColor(sf::Color(0, 0, 0, 0));
    rectangle.setOutlineThickness(1.0f);
    rectangle.setOutlineColor(sf::Color(255, 0, 0, 255));
    drawer->draw(rectangle);
}
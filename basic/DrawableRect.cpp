
#include "DrawableRect.hpp"


DrawableRect::DrawableRect(float width, float height):
    _rect({width, height})
{
    _rect.setFillColor(sf::Color(0, 0, 0, 0));
    _rect.setOutlineThickness(1.0f);
    _rect.setOutlineColor(sf::Color(255, 0, 0, 255));
}


void DrawableRect::draw(const IObject *model, sf::RenderTarget *drawer)
{
    sf::Transform t;
    t.translate(model->getPosition());
    t.rotate(model->getRotationDegrees());

    sf::RenderStates states;
    states.transform = t;

    drawer->draw(_rect, states);
}

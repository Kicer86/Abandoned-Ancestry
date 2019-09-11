
#include "BasicDrawable.hpp"


BasicDrawable::BasicDrawable():
    _rect({100, 40})
{
    _rect.setFillColor(sf::Color(0, 0, 0, 0));
    _rect.setOutlineThickness(1.0f);
    _rect.setOutlineColor(sf::Color(255, 0, 0, 255));
}


void BasicDrawable::draw(IObject *model, sf::RenderTarget *drawer)
{
    sf::Transform t;
    t.translate(model->getPosition());

    sf::RenderStates states;
    states.transform = t;

    drawer->draw(_rect, states);
}

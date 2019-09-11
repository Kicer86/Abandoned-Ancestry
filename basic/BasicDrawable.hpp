#ifndef BASICDRAWABLE_HPP
#define BASICDRAWABLE_HPP

#include "IDrawable.hpp"
#include "IObject.hpp"

class BasicDrawable : public IDrawable {
public:
    BasicDrawable();

    virtual void draw(IObject *model, sf::RenderTarget *drawer);

private:
    sf::RectangleShape _rect;
};

#endif // BASICDRAWABLE_HPP

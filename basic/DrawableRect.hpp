#ifndef BASICDRAWABLE_HPP
#define BASICDRAWABLE_HPP

#include "IDrawable.hpp"
#include "IObject.hpp"

class DrawableRect : public IDrawable {
public:
    DrawableRect(int width, int height);

    virtual void draw(IObject *model, sf::RenderTarget *drawer);

private:
    sf::RectangleShape _rect;
};

#endif // BASICDRAWABLE_HPP

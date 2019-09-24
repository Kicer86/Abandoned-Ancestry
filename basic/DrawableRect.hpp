#ifndef BASICDRAWABLE_HPP
#define BASICDRAWABLE_HPP

#include "IDrawable.hpp"
#include "IObject.hpp"

class DrawableRect : public IDrawable {
public:
    DrawableRect(float width, float height);

    void draw(const IObject& model, sf::RenderTarget *drawer) override;

private:
    sf::RectangleShape _rect;
};

#endif // BASICDRAWABLE_HPP

#ifndef BASICDRAWABLE_HPP
#define BASICDRAWABLE_HPP

#include "IDrawable.hpp"
#include "IObject.hpp"

class BasicDrawable : public IDrawable {
public:
    virtual void draw(IObject *model, sf::RenderTarget *drawer);
};

#endif // BASICDRAWABLE_HPP
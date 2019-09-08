#ifndef BASICDRAWABLE_HPP
#define BASICDRAWABLE_HPP

#include "IDrawable.hpp"
#include "IObject.hpp"

class BasicDrawable : public IDrawable {
public:
    BasicDrawable(IObject* model);

    virtual void draw(sf::RenderTarget *drawer);
private:
    IObject* _model;
};

#endif // BASICDRAWABLE_HPP
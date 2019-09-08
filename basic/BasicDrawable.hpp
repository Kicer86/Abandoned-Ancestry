#ifndef BASICDRAWABLE_HPP
#define BASICDRAWABLE_HPP

#include "IDrawable.hpp"
#include "IObject.hpp"

class BasicDrawable : public IDrawable {
public:
    BasicDrawable(IObject* owner);

    virtual void draw(sf::RenderTarget *drawer);
private:
    IObject* _owner;
};

#endif // BASICDRAWABLE_HPP
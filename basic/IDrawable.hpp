#ifndef IDRAWABLE_HPP
#define IDRAWABLE_HPP
#include "IObject.hpp"
#include "SFML/Graphics.hpp"
class IDrawable {
public:
    virtual void draw(const IObject *model, sf::RenderTarget *drawer) = 0;
    virtual ~IDrawable() = default;
};
#endif //DRAWABLE_HPP
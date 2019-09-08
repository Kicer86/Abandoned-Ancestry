#ifndef IDRAWABLE_HPP
#define IDRAWABLE_HPP
#include "SFML/Graphics.hpp"
class IDrawable {
public:
    virtual void draw(sf::RenderTarget *drawer) = 0;
    virtual ~IDrawable() = default;
};
#endif //DRAWABLE_HPP
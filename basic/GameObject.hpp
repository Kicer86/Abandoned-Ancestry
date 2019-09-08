#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include "IDrawable.hpp"
#include "IObject.hpp"

class GameObject : public IObject, public IDrawable {
public:
    virtual const sf::Vector2f& getPosition();
    virtual const sf::Vector2f& getSize();
    virtual void move(const sf::Vector2f& moveVector);
    virtual void draw(sf::RenderTarget *drawer);
private:
    sf::Vector2f _position;
    sf::Vector2f _size;
};

#endif // GAMEOBJECT_HPP
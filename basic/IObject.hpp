#ifndef IOBJECT_HPP
#define IOBJECT_HPP

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class IObject
{
public:
    virtual const sf::Vector2f& getPosition() const = 0;
    virtual const float getRotationDegrees() const = 0;

    virtual void move(const sf::Vector2f& moveVector) = 0;
    virtual void moveTo(const sf::Vector2f& position) = 0;

    virtual void rotate(const float rotation) = 0;
    virtual void rotateTo(const float degree) = 0;

    virtual ~IObject() = default;
};

#endif //IOBJECT_HPP

#ifndef BASICOBJECT_HPP
#define BASICOBJECT_HPP

#include "IObject.hpp"

class BasicObject : public IObject
{
public:
    BasicObject(float x, float y, float width, float height);

    virtual const sf::Vector2f& getPosition();
    virtual const sf::Vector2f& getSize();
    virtual void move(const sf::Vector2f& moveVector);
    void moveTo(const sf::Vector2f & position) override;

private:
    sf::Vector2f _position;
    sf::Vector2f _size;
};

#endif //BASICOBJECT_HPP

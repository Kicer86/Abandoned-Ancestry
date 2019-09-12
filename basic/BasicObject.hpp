#ifndef BASICOBJECT_HPP
#define BASICOBJECT_HPP

#include "IObject.hpp"

class BasicObject : public IObject
{
public:
    BasicObject(float x, float y);

    const sf::Vector2f& getPosition() override;
    void move(const sf::Vector2f& moveVector) override;
    void moveTo(const sf::Vector2f & position) override;

private:
    sf::Vector2f _position;
};

#endif //BASICOBJECT_HPP

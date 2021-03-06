#ifndef BASICOBJECT_HPP
#define BASICOBJECT_HPP

#include "IObject.hpp"

class BasicObject : public IObject
{
public:
    BasicObject(float x, float y, float rotationDegrees = 0);

    const sf::Vector2f& getPosition() const override;
    const float getRotationDegrees() const override;

    void move(const sf::Vector2f& moveVector) override;
    void moveTo(const sf::Vector2f & position) override;

    void rotate(const float rotation) override;
    void rotateTo(const float degree) override;

private:
    sf::Vector2f _position;
    float _rotationDegrees;
};

#endif //BASICOBJECT_HPP

#ifndef WORLDDRAWER_HPP
#define WORLDDRAWER_HPP

#include "SFML/Graphics.hpp"

#include <map>
#include <memory>

#include "IObject.hpp"
#include "IDrawable.hpp"

class WorldDrawer
{
public:
    WorldDrawer(sf::RenderTarget* target);

    void addDrawable(std::unique_ptr<IDrawable> drawable, const std::string& resourceName);
    void drawElement(const IObject *object, const std::string& resource);
private:
    sf::RenderTarget* _target;

    std::map<std::string, std::unique_ptr<IDrawable>> _drawables;
};

#endif // !WORLD_DRAWER_HPP

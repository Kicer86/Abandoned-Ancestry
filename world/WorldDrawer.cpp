#include "WorldDrawer.hpp"

WorldDrawer::WorldDrawer(sf::RenderTarget* target):
_target(target)
{

}

void WorldDrawer::drawElement(const IObject *object, const std::string& resource)
{
    try
    {
        _drawables.at(resource)->draw(object, _target);
    }
    catch(const std::out_of_range&)
    {

    }
}

void WorldDrawer::addDrawable(std::unique_ptr<IDrawable> drawable, const std::string& resourceName)
{
    _drawables.emplace(resourceName, std::move(drawable));
}
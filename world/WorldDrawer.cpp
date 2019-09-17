#include "WorldDrawer.hpp"

WorldDrawer::WorldDrawer(sf::RenderTarget* target):
_target(std::move(target))
{

}

void WorldDrawer::drawElement(IObject *object, const std::string& resource)
{
    try
    {
        _drawables.at(resource)->draw(object, _target.get());
    }
    catch(const std::out_of_range&)
    {

    }
}

void WorldDrawer::addDrawable(std::unique_ptr<IDrawable> drawable, const std::string& resourceName)
{
    _drawables.emplace(resourceName, std::move(drawable));
}
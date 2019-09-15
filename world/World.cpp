#include "World.hpp"

World::World(sf::RenderTarget* target):
_objectCounter(0),
_renderingTarget(target)
{
    
}

uint World::addObject(IObject* object)
{
    _objects.emplace(_objectCounter++, std::move(object));
    return _objectCounter - 1;
}

void World::addDrawable(IDrawable* drawable, const std::string& resourceName)
{
    _drawables.emplace(resourceName, std::move(drawable));
}
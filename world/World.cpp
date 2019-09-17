#include "World.hpp"

World::World(sf::RenderTarget* target):
_objectCounter(0),
_drawer(target)
{
}

uint World::addObject(IObject* object)
{
    _objects.emplace(_objectCounter++, std::move(object));
    return _objectCounter - 1;
}
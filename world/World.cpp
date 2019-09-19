#include "World.hpp"

World::World()
{
}

uint World::addObject(std::unique_ptr<IObject> object)
{
    _objects.emplace(_objectCounter++, std::move(object));
    return _objectCounter - 1;
}
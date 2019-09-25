#include "World.hpp"

World::World()
{
}

uint World::addObject(std::unique_ptr<IObject> object)
{
    _objects.emplace(_objectCounter++, std::move(object));
    return _objectCounter - 1;
}

const IObject* World::getObject(uint id)
{
    try
    {
        return _objects.at(id).get();
    }
    catch(const std::out_of_range&)
    {
        return nullptr;
    }
}
#ifndef WORLD_HPP
#define WORLD_HPP
#include <memory>
#include <list>
#include <vector>
#include <string>
#include <map>

#include "IObject.hpp"
#include "IDrawable.hpp"
#include "WorldDrawer.hpp"
#include "WorldController.hpp"

class World {
public:
    World(sf::RenderTarget* target);
    uint addObject(IObject* object);
    void addDrawable(IDrawable* drawable, const std::string& resourceName);
    void bindObject(uint id, const std::string& resourceName);
private:
    WorldDrawer _drawer;
    WorldController _controller;

    uint _objectCounter;
    sf::RenderTarget* _renderingTarget;

    std::map<uint, std::unique_ptr<IObject>> _objects;
    std::map<std::string, std::unique_ptr<IDrawable>> _drawables;
    std::map<uint, std::string> _objectBindMap;
};

#endif //WORLD_HPP
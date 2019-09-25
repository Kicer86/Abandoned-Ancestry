#ifndef GAMEMANAGER_HPP
#define GAMEMANAGER_HPP

#include "World.hpp"
#include "WorldController.hpp"
#include "WorldDrawer.hpp"
#include "WorldObjectsBinder.hpp"

class GameManager
{
private:
    World _world;
    WorldController _controller;
    WorldDrawer _drawer;
    WorldObjectsBinder _binder;

public:
    GameManager(sf::RenderTarget* target);

    void addDrawable(std::unique_ptr<IDrawable> drawable, const std::string& resourceName);
    void addObject(std::unique_ptr<IObject> object, const std::string& resourceForObject);
    void frameDraw();
};

#endif
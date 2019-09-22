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
    ~GameManager();
};

#endif
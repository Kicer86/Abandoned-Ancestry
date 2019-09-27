#ifndef GAMEMANAGER_HPP
#define GAMEMANAGER_HPP

#include "World.hpp"
#include "WorldController.hpp"
#include "WorldDrawer.hpp"
#include "WorldObjectsBinder.hpp"
#include "WorldSimulation.hpp"
#include "ILogicable.hpp"

class GameManager
{
private:
    World _world;
    WorldController _controller;
    WorldDrawer _drawer;
    WorldSimulation _simulation;
    WorldObjectsBinder _binder;

public:
    GameManager(sf::RenderTarget* target);

    void addDrawable(std::unique_ptr<IDrawable> drawable, const std::string& resourceName);
    void addLogic(std::unique_ptr<ILogicable> logic, const std::string& resourceName);
    void addObject(std::unique_ptr<IObject> object, const std::string& resourceForObject = "", const std::string& logicForObject = "");
    void frameDraw();
    void processLogic();
};

#endif
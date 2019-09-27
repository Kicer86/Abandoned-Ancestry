#include "GameManager.hpp"

GameManager::GameManager(sf::RenderTarget* target):
_drawer(target)
{

}

void GameManager::frameDraw()
{
    auto objects = _binder.getGraphicalObjectMap();
    for(const auto& objectBind : objects)
    {
        auto object = _world.getObject(objectBind.first);
        if(object != nullptr) {
            _drawer.drawElement(*object, objectBind.second);
        }
    }
}

void GameManager::addDrawable(std::unique_ptr<IDrawable> drawable, const std::string& resourceName)
{
    _drawer.addDrawable(std::move(drawable), resourceName);
}

void GameManager::addLogic(std::unique_ptr<ILogicable> logic, const std::string& resourceName)
{
    _simulation.addLogicable(std::move(logic), resourceName);
}

void GameManager::addObject(std::unique_ptr<IObject> object, const std::string& drawableForObject, const std::string& logicForObject)
{
    auto objectID = _world.addObject(std::move(object));
    _binder.addObjectBinding(objectID, drawableForObject, logicForObject);
}
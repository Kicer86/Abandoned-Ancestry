#include "GameManager.hpp"

GameManager::GameManager(sf::RenderTarget* target):
_drawer(target)
{

}

void GameManager::frameDraw()
{
    auto objects = _binder.getObjectMap();
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

void GameManager::addObject(std::unique_ptr<IObject> object, const std::string& resourceForObject)
{
    auto objectID = _world.addObject(std::move(object));
    _binder.addObjectBinding(objectID, resourceForObject);
}
#include "WorldController.hpp"

void WorldController::addKeyMessage(const sf::Keyboard::Key& key, uint objectID)
{
    if(_keyMap.find(key) == _keyMap.end())
    {
        _keyMap[key] = objectID
    }
}

void WorldController::processEvent(const sf::Event& event) const
{
    if(event.type == sf::Event::KeyPressed)
    {
        try
        {
            _keyMap.at(event.key.code);
        }
        catch(const std::out_of_range& e)
        {
        }
    }
}
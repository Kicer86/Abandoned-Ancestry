#include "WorldController.hpp"
#include <utility>

void WorldController::addKeyMessage(sf::Keyboard::Key key, std::function<void()>& func)
{
    _keyMap.emplace(key, func);
}

void WorldController::processEvent(const sf::Event& event) const
{
    if(event.type == sf::Event::KeyPressed)
    {
        auto result = _keyMap.equal_range(event.key.code);
        for(auto iter = result.first; iter != result.second; iter++) {
            iter->second();
        }
    }
}
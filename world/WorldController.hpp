#ifndef WORLDCONTROLLER_HPP
#define WORLDCONTROLLER_HPP

#include <map>

#include <SFML/Window.hpp>

#include "WorldEvent.hpp"


class WorldController
{
private:
    std::map<sf::Keyboard::Key, uint> _keyMap;
public:
    void addKeyMessage(const sf::Keyboard::Key& key, uint objectID);

    WorldEvent processEvent(const sf::Event& event) const;
};

#endif // WORLDCONTROLLER_HPP
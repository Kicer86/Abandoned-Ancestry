#ifndef WORLDCONTROLLER_HPP
#define WORLDCONTROLLER_HPP

#include <functional>
#include <map>

#include <SFML/Window.hpp>

class WorldController
{
private:
    std::multimap<sf::Keyboard::Key, std::function<void()> > _keyMap;
public:
    void addKeyMessage(sf::Keyboard::Key key, const std::function<void()>& func);

    void processEvent(const sf::Event& event) const;
};

#endif // WORLDCONTROLLER_HPP
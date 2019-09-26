#include <SFML/Graphics.hpp>
#include "basic/DrawableRect.hpp"
#include "basic/BasicObject.hpp"
#include "world/GameManager.hpp"

#include <memory>

int main() {

    sf::RenderWindow window(sf::VideoMode(800, 600), "Abondoned Ancestry");

    GameManager manager(&window);
    manager.addDrawable(std::make_unique<DrawableRect>(100, 20), "block");
    manager.addObject(std::make_unique<BasicObject>(231, 100, 120), "block");
    manager.addObject(std::make_unique<BasicObject>(300, 450), "block");
    manager.addObject(std::make_unique<BasicObject>(200, 200, 50), "block");

    window.setFramerateLimit(30);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(210, 200, 222));

        manager.frameDraw();

        window.display();
    }

    return 0;
}

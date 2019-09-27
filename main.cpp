#include <SFML/Graphics.hpp>
#include "basic/IObject.hpp"
#include "basic/DrawableRect.hpp"
#include "basic/BasicObject.hpp"
#include "basic/UniversalLogic.hpp"
#include "world/GameManager.hpp"

#include <memory>
#include <functional>

int main() {

    std::function<void(IObject&)> rotationLogic = [](IObject& object){ object.rotate(0.5); };
    std::function<void(IObject&)> shakingLogic = [](IObject& object){
        object.moveTo(sf::Vector2f(200 + (rand() % 10) - 5,
                                   200 + (rand() % 10) - 5));
    };

    sf::RenderWindow window(sf::VideoMode(800, 600), "Abondoned Ancestry");

    GameManager manager(&window);
    manager.addDrawable(std::make_unique<DrawableRect>(100, 20), "block");
    manager.addLogic(std::make_unique<UniversalLogic>(shakingLogic), "shakinStevens");
    manager.addLogic(std::make_unique<UniversalLogic>(rotationLogic), "rotatinStevens");
    manager.addObject(std::make_unique<BasicObject>(231, 100, 120), "block", "shakinStevens");
    manager.addObject(std::make_unique<BasicObject>(300, 450), "block", "rotatinStevens");
    manager.addObject(std::make_unique<BasicObject>(200, 200, 50), "block");

    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(210, 200, 222));

        manager.processLogic();
        manager.frameDraw();

        window.display();
    }

    return 0;
}

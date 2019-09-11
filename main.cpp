#include <SFML/Graphics.hpp>
#include "basic/BasicDrawable.hpp"
#include "basic/BasicObject.hpp"

int main() {

    sf::RenderWindow window(sf::VideoMode(800, 600), "Abondoned Ancestry");
    BasicObject shakinStevens(20, 20, 100, 50);
    BasicObject shakinStevens2(200, 200, 100, 50);
    BasicObject shakinStevens3(200, 200, 100, 50);
    BasicDrawable instance;

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(210, 200, 222));

        instance.draw(&shakinStevens, &window);
        instance.draw(&shakinStevens2, &window);
        instance.draw(&shakinStevens3, &window);

        shakinStevens.moveTo(sf::Vector2f(20 + (rand() % 10) - 5,
                                   20 + (rand() % 10) - 5));

        shakinStevens2.moveTo(sf::Vector2f(200 + (rand() % 20) - 10,
                                           200 + (rand() % 20) - 10));

        shakinStevens3.move(sf::Vector2f((rand() % 3) - 1,
                                         (rand() % 3) - 1));

        window.display();
    }

    return 0;
}

#include <SFML/Graphics.hpp>
#include "basic/BasicDrawable.hpp"
#include "basic/BasicObject.hpp"

int main() {

    sf::RenderWindow window(sf::VideoMode(800, 600), "Abondoned Ancestry");
    BasicObject shakinStevens(20, 20, 100, 50);
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

        shakinStevens.moveTo(sf::Vector2f(20 + (rand() % 10) - 5,
                                   20 + (rand() % 10) - 5));

        window.display();
    }

    return 0;
}

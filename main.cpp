#include <SFML/Graphics.hpp>
#include "basic/DrawableRect.hpp"
#include "basic/BasicObject.hpp"
#include "world/World.hpp"

int main() {

    sf::RenderWindow window(sf::VideoMode(800, 600), "Abondoned Ancestry");
    BasicObject shakinStevens(200, 200, 120);
    BasicObject rotatinStevens(300, 450, 0);
    BasicObject shakinStevens2(200, 200, 50);
    DrawableRect instance(100, 20);
    World world;

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
        instance.draw(&rotatinStevens, &window);
        instance.draw(&shakinStevens2, &window);

        shakinStevens.moveTo(sf::Vector2f(200 + (rand() % 10) - 5,
                                   200 + (rand() % 10) - 5));


        rotatinStevens.rotate(0.005f);

        shakinStevens2.move(sf::Vector2f((rand() % 3) - 1,
                                         (rand() % 3) - 1));

        window.display();
    }

    return 0;
}

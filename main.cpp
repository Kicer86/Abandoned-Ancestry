#include <SFML/Graphics.hpp>
#include "basic/BasicDrawable.hpp"
#include "basic/BasicObject.hpp"

int main() {

    sf::RenderWindow window(sf::VideoMode(800, 600), "Abondoned Ancestry");
    BasicObject object(20, 20, 100, 50);
    BasicDrawable instance(&object);

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(210, 200, 222));

        instance.draw(&window);

        window.display();
    }

    return 0;
}
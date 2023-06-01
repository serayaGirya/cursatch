#include <iostream>
#include "Game.h"
#include "Field.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(width * cellSize, height * cellSize), "Tetris");
    window.setFramerateLimit(60);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        Field::getInstance().render(window);

        window.display();
    }

    return 0;
}

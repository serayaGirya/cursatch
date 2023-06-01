//
// Created by serge on 01.06.2023.
//

#ifndef REWORK_MODEL_FIELD_H
#define REWORK_MODEL_FIELD_H

#include <SFML/Graphics.hpp>

//отрисовка сетки игрового поля

const int width = 10;
const int height = 20;
const int cellSize = 30;

class Field {
private:

    Field() {}

    Field(const Field &) = delete;

    Field &operator=(const Field &) = delete;

public:
    static Field &getInstance() {
        static Field instance;
        return instance;
    }

    void render(sf::RenderWindow &window) {
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                sf::RectangleShape cell(sf::Vector2f(cellSize, cellSize));
                cell.setPosition(x * cellSize, y * cellSize);
                cell.setOutlineThickness(1);
                cell.setOutlineColor(sf::Color::Black);
                cell.setFillColor(sf::Color::White);
                window.draw(cell);
            }
        }
    }

};



#endif //REWORK_MODEL_FIELD_H

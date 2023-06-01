//
// Created by serge on 01.06.2023.
//

#ifndef REWORK_MODEL_SHAPE_H
#define REWORK_MODEL_SHAPE_H

#include <SFML/Graphics.hpp>
#include <random>

//отрисовка фигур

class Shape {
public:
    int red;
    int green;
    int blue;

    virtual void draw(sf::RenderWindow window) = 0;

};

class Square : public Shape {
public:
    void draw(sf::RenderWindow window) override {
        sf::RectangleShape square(sf::Vector2f(10.f, 10.f));

        std::random_device randomDevice;
        std::mt19937 gen(randomDevice());
        std::uniform_int_distribution<int> colorDistribution(0, 255);

        red = colorDistribution(gen);
        green = colorDistribution(gen);
        blue = colorDistribution(gen);

        square.setFillColor(sf::Color(red, green, blue));
        square.setPosition(10.f, 10.f);

    }
};

class Line : public Shape {
    void draw(sf::RenderWindow window) override {

    }
};


#endif //REWORK_MODEL_SHAPE_H

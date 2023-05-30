//
// Created by serge on 30.05.2023.
//

#ifndef REWORK_MODEL_CAR_H
#define REWORK_MODEL_CAR_H


#include <iostream>
#include <string>
#include <utility>

class Car {
private:
    std::string color;
    int length;
    int width;
    double speed;
public:
    std::string carName; //ласточка, мальчик, конь
    Car(std::string carName, std::string color, int length, int width, double speed) : carName(std::move(carName)),
                                                                                       color(std::move(color)),
                                                                                       length(length), width(width),
                                                                                       speed(speed) {}

};

class Sedan : public Car {
public:
    Sedan(std::string carName, const std::string &color, int length, int width, double speed) : Car(std::move(carName),
                                                                                                    color, 6, 4,
                                                                                                    speed) {}
};

class Bus : public Car {
public:
    Bus(std::string carName, const std::string &color, int length, int width, double speed) : Car(std::move(carName),
                                                                                                  color, 10, 6,
                                                                                                  speed) {}
};

class Truck : public Car {
public:
    Truck(std::string carName, const std::string &color, int length, int width, double speed) : Car(std::move(carName),
                                                                                                    color, 8, 6,
                                                                                                    speed) {}
};

class CarFactory {
public:
    static Car *
    createCar(const std::string &carName, const std::string &carType, const std::string &color, int length, int width,
              double speed) {
        if (carType == "sedan") {
            return new Sedan(carName, color, length, width, speed);
        } else if (carType == "bus") {
            return new Bus(carName, color, length, width, speed);
        } else if (carType == "truck") {
            return new Truck(carName, color, length, width, speed);
        } else {
            throw std::invalid_argument("Invalid car type");
        }
    }
};


#endif //REWORK_MODEL_CAR_H

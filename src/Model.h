//
// Created by serge on 30.05.2023.
//

#ifndef REWORK_MODEL_MODEL_H
#define REWORK_MODEL_MODEL_H


#include <iostream>
#include <vector>
#include "Car.h"
#include "TransportRoute.h"


class Model {
private:
    std::vector<Car> transports;

public:
    void addTransport(Car &transport);

    void removeTransport(Car &car);

    void updateTransportRoute(Car &car, TransportRoute &newRoute);

};


#endif //REWORK_MODEL_MODEL_H

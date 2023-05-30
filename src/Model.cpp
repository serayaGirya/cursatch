//
// Created by serge on 30.05.2023.
//

#include "Model.h"

#include "Model.h"
#include <algorithm>
#include <iterator>

void Model::addTransport(Car &transport) {
    transports.push_back(transport);
}

//TODO ДОДЕЛАТЬ!!!
void Model::removeTransport(Car &car) {
    auto it = std::find(transports.begin(), transports.end(), car.carName);
}

//TODO ДОДЕЛАТЬ!!!
void Model::updateTransportRoute(Car& car, TransportRoute& newRoute) {
    // Ищем транспорт в контейнере
    auto it = std::find(transports.begin(), transports.end(), car);
    if (it != transports.end()) {
        // Обновляем маршрут транспорта
        it->setRoute(newRoute);
    }
}
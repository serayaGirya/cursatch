//
// Created by serge on 30.05.2023.
//

#include "TransportRoute.h"

#include "TransportRoute.h"

void TransportRoute::addCrossroad(const Crossroad &component) {
    route.push_back(component);
}

void TransportRoute::removeLastCrossroad() {
    if (!route.empty()) {
        route.pop_back();
    }
}

void TransportRoute::setCrossroadAtIndex(int index, const Crossroad &component) {
    if (index >= 0 && index < route.size()) {
        route[index] = component;
    }
    throw std::exception();
}

Crossroad TransportRoute::getCrossroadAtIndex(int index) {
    if (index >= 0 && index < route.size()) {
        return route[index];
    }

    throw std::exception();
}
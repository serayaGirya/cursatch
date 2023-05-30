//
// Created by serge on 30.05.2023.
//

#ifndef REWORK_MODEL_TOWNROADS_H
#define REWORK_MODEL_TOWNROADS_H

#include <iostream>
#include <vector>
#include "Road.h"
#include "Crossroad.h"
#include "Car.h"


class TownRoads {
private:
    std::vector<std::vector<int>> adjacencyMatrix;

public:
    void drawMap();
};


#endif //REWORK_MODEL_TOWNROADS_H

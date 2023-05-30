//
// Created by serge on 30.05.2023.
//

#ifndef REWORK_MODEL_TRANSPORTROUTE_H
#define REWORK_MODEL_TRANSPORTROUTE_H

#include <iostream>
#include <vector>
#include "Crossroad.h"
#include <exception>

class TransportRoute {
private:
    std::vector<Crossroad> route;
public:
    void addCrossroad(const Crossroad &component);

    void removeLastCrossroad();

    void setCrossroadAtIndex(int index, const Crossroad &component);

    Crossroad getCrossroadAtIndex(int index);


};


#endif //REWORK_MODEL_TRANSPORTROUTE_H

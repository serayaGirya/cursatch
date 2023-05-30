cmake_minimum_required(VERSION 3.25)
project(reWork_Model)

set(CMAKE_CXX_STANDARD 17)

add_executable(reWork_Model src/main.cpp src/AdjacencyMatrix.cpp src/AdjacencyMatrix.h src/Car.cpp src/Car.h src/Crossroad.cpp src/Crossroad.h src/Model.cpp src/Model.h src/Road.cpp src/Road.h src/TownRoads.cpp src/TownRoads.h src/TransportRoute.cpp src/TransportRoute.h)

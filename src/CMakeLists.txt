add_executable(reWork_Model src/main.cpp src/AdjacencyMatrix.cpp src/AdjacencyMatrix.h src/Car.cpp src/Car.h src/Crossroad.cpp src/Crossroad.h src/Model.cpp src/Model.h src/Road.cpp src/Road.h src/TownRoads.cpp src/TownRoads.h src/TransportRoute.cpp src/TransportRoute.h)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS *.cpp *.h)
target_sources(reWork_Model PRIVATE ${SOURCE_FILES})
target_link_libraries(reWork_Model sfml-system sfml-window sfml-graphics sfml-audio)
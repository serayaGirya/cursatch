add_executable(reWork_Model Field.cpp Field.h Game.cpp Game.h Shape.cpp Shape.h FiguresGeneration.cpp FiguresGeneration.h)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS *.cpp *.h)
target_sources(reWork_Model PRIVATE ${SOURCE_FILES})
target_link_libraries(reWork_Model sfml-system sfml-window sfml-graphics sfml-audio)

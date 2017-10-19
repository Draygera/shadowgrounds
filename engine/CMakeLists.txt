project(engine)

add_subdirectory(ai)
add_subdirectory(audio)
add_subdirectory(net)
add_subdirectory(render)
add_subdirectory(ui)
add_subdirectory(util)

add_dependencies(ai audio net render ui util)
add_library(engine 
        Storm3D.cpp)

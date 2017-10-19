project(engine)

add_subdirectory(ai)
add_subdirectory(audio)
add_subdirectory(net)
add_subdirectory(render)
add_subdirectory(ui)
add_subdirectory(util)

add_library(engine SHARED 
        Storm3D.cpp)
add_dependencies(engine ai audio net render ui util)

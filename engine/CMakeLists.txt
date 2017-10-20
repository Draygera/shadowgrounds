project(engine)

add_subdirectory(render)

add_library(engine SHARED 
        Storm3D.cpp)
add_dependencies(engine render)

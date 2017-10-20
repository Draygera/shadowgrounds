project(sg-game)

add_subdirectory(../engine engine)
add_executable(game
        game.cpp)
add_dependencies(game engine)
target_link_libraries(game engine render glfw3 ${GLFW_LIBRARIES} SDL2)

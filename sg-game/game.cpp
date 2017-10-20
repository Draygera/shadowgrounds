/**
 * File            : ../sg-game/game.cpp
 * Author          : Brandon Dulaney <draygera@gmail.com>
 * Date            : 20.10.2017
 * Last Modified By: Brandon Dulaney <draygera@gmail.com>
 */
/**
 * File            : ../sg-game/game.cpp
 * Date            : 20.10.2017
 * Last Modified Date            : 20.10.2017
 */


#include "storm3d.h"
/* #include <GL/glew.h> */
#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
/* #include <SDL2/SDL.h> */
using namespace std;

int main(int argc, char *argv[]){
        Storm3D *storm3d;

        if (!glfwInit()){
                fprintf( stderr, "Failed to open GLFW Window. If you use an Intel GPU, use version 2.1 of GLFW instead.\n" );
                glfwTerminate();
                return -1;
        }
        
        VkInstance instance = 0;
        PFN_vkCreateInstance pfnCreateInstance = (PFN_vkCreateInstance)
                glfwGetInstanceProcAddress(NULL, "vkCreateInstance");

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        GLFWwindow *window = glfwCreateWindow(640, 480, "Test", NULL, NULL);

        storm3d->test(instance, window);
        /* glfwMakeContextCurrent(window); */

        /* SDL_Window *window; */
        /* if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) != 0){ */
        /*         SDL_Log("Unable to initialize SDL: %s", SDL_GetError()); */
        /*         return 1; */
        /* } */

        /* storm3d->test(window); */
        
        /* SDL_Quit(); */
        glfwTerminate();
        return 0;
}

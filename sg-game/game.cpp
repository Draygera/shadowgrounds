/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 20.10.2017
 * Last Modified Date: 20.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/**
 * File              : ../sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/**
 * File              : sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/**
 * File              : sg-game/game.cpp
 * Date              : 18.10.2017
 * Last Modified Date: 18.10.2017
 */
/*
 * =====================================================================================
 *
 *       Filename:  game.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/18/2017 15:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brandon Dulaney (DeejStar), Draygera@gmail.com
 *   Organization:  Shades of Grey Interactive
 *
 * =====================================================================================
 */

#include "storm3d.h"
/* #include <GL/glew.h> */
#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <iostream>
/* #include <SDL2/SDL.h> */
using namespace std;

int main(int argc, char *argv[]){
        Storm3D *storm3d;

        if (!glfwInit()){
                fprintf( stderr, "Failed to open GLFW Window. If you use an Intel GPU, use version 2.1 of GLFW instead.\n" );
                glfwTerminate();
                return -1;
        }
        
        GLFWwindow *window = glfwCreateWindow(640, 480, "Test", NULL, NULL);
        glfwMakeContextCurrent(window);

        /* SDL_Window *window; */
        /* if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) != 0){ */
        /*         SDL_Log("Unable to initialize SDL: %s", SDL_GetError()); */
        /*         return 1; */
        /* } */

        /* storm3d->test(window); */
        
        /* SDL_Quit(); */
        return 0;
}

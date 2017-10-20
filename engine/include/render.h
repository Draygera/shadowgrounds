/**
 * File            : ../engine/include/render.h
 * Author          : Brandon Dulaney <draygera@gmail.com>
 * Date            : 20.10.2017
 * Last Modified By: Brandon Dulaney <draygera@gmail.com>
 */

#include <SDL2/SDL.h>
#include <iostream>

class Render {
        public:
                Render(){}
                void initializeWindow(SDL_Window *window, const char* title, int x, int y, int w, int h, Uint32 flags);
};

/**
 * File              : ../engine/render/Render.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../engine/render/Render.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../engine/render/Render.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../engine/render/Render.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../engine/render/Render.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../engine/render/Render.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../engine/render/Render.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../engine/render/Render.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../engine/render/Render.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/**
 * File              : ../engine/render/Render.cpp
 * Date              : 19.10.2017
 * Last Modified Date: 19.10.2017
 */
/*
 * =====================================================================================
 *
 *       Filename:  Render.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/19/2017 10:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brandon Dulaney (DeejStar), Draygera@gmail.com
 *   Organization:  Shades of Grey Interactive
 *
 * =====================================================================================
 */

#include "render.h"

void Render::initializeWindow(SDL_Window *window, const char* title, int x, int y, int w, int h, Uint32 flags) {
        std::cout << "Window initialized" << std::endl;

        window = SDL_CreateWindow(title,
                        x, y,
                        w, h,
                        flags);
}

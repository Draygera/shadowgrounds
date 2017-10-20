/**
 * File            : ../engine/render/Render.cpp
 * Author          : Brandon Dulaney <draygera@gmail.com>
 * Date            : 20.10.2017
 * Last Modified By: Brandon Dulaney <draygera@gmail.com>
 */
#include "render.h"

void Render::initializeWindow(VkInstance instance, GLFWwindow *window) {
        VkSurfaceKHR surface;
        VkResult err = glfwCreateWindowSurface(instance, window, NULL, &surface);
        if(err){
                fprintf(stderr, "Vulkan Surface Failed.");
        }

        glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

        do{
                glfwSwapBuffers(window);
                glfwPollEvents();
        }
        while( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
                        glfwWindowShouldClose(window) == 0);
}

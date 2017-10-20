/**
 * File            : ../engine/include/storm3d.h
 * Author          : Brandon Dulaney <draygera@gmail.com>
 * Date            : 20.10.2017
 * Last Modified By: Brandon Dulaney <draygera@gmail.com>
 */

#pragma once

// Includes
#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>

using namespace std;

class Storm3D {
        public:
                Storm3D(){}
                void test(VkInstance instance, GLFWwindow *window);
};

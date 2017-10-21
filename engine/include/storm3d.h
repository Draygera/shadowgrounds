/**
 * File            : ../engine/include/storm3d.h
 * Author          : Brandon Dulaney <draygera@gmail.com>
 * Date            : 20.10.2017
 * Last Modified By: Brandon Dulaney <draygera@gmail.com>
 */

// Includes
#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>

using namespace std;

class Storm3D {
        public:
                Storm3D(){}
                void run();
        private:
                void initVulkan();
                void mainLoop();
                void cleanup();
};

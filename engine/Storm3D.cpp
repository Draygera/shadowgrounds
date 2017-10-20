/**
 * File            : ../engine/Storm3D.cpp
 * Author          : Brandon Dulaney <draygera@gmail.com>
 * Date            : 20.10.2017
 * Last Modified By: Brandon Dulaney <draygera@gmail.com>
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 19.10.2017
 * Last Modified Date            : 19.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 19.10.2017
 * Last Modified Date            : 19.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 19.10.2017
 * Last Modified Date            : 19.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 19.10.2017
 * Last Modified Date            : 19.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 19.10.2017
 * Last Modified Date            : 19.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 19.10.2017
 * Last Modified Date            : 19.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 19.10.2017
 * Last Modified Date            : 19.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 19.10.2017
 * Last Modified Date            : 19.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 18.10.2017
 * Last Modified Date            : 18.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 18.10.2017
 * Last Modified Date            : 18.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 18.10.2017
 * Last Modified Date            : 18.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 18.10.2017
 * Last Modified Date            : 18.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 18.10.2017
 * Last Modified Date            : 18.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 18.10.2017
 * Last Modified Date            : 18.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 18.10.2017
 * Last Modified Date            : 18.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 18.10.2017
 * Last Modified Date            : 18.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 18.10.2017
 * Last Modified Date            : 18.10.2017
 */
/**
 * File            : ../engine/Storm3D.cpp
 * Date            : 18.10.2017
 * Last Modified Date            : 18.10.2017
 */
/*
 * =====================================================================================
 *
 *       File            : ../engine/Storm3D.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/18/2017 15:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author          :  Brandon Dulaney (DeejStar), Draygera@gmail.com
 *   Organization:  Shades of Grey Interactive
 *
 * =====================================================================================
 */

#include "storm3d.h"
#include "render.h"

void Storm3D::test(VkInstance instance, GLFWwindow *window){
        uint32_t count = 0;
        VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;
        vkEnumeratePhysicalDevices(instance, &count, nullptr);

        Render *render;
        render->initializeWindow(instance, window);
}

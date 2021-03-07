#ifndef HelloTriangleApplication_H
#define HelloTriangleApplication_H

#include <vulkan/vulkan.h>
#include <iostream>
#include <stdexcept>
#include <cstdlib>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class HelloTriangleApplication {
	private:
		GLFWwindow* window;
		
		const uint32_t WIDTH = 800;
		const uint32_t HEIGHT = 800;

		VkInstance instance;

		void initVulkan();
		void initWindow();
		void createInstance();
		void mainLoop();
		void cleanup();

	public:
		HelloTriangleApplication();
		void run();
};

#endif

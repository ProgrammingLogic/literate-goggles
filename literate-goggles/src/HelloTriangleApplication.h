#ifndef HelloTriangleApplication_H
#define HelloTriangleApplication_H

#include <vulkan/vulkan.h>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <vector>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class HelloTriangleApplication {
	private:
		
		const uint32_t WIDTH = 800;
		const uint32_t HEIGHT = 800;

		const std::vector<const char*> validationLayers = {
			"VK_LAYER_KHRONOS_validation"
		};

#ifdef NDEBUG
		const bool enableValidationLayers = false;
#else
		const bool enableValidationLayers = true;
#endif 

		GLFWwindow* window;
		VkInstance instance;

		bool checkValidationLayerSupport();

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

#include <iostream>

#include "HelloTriangleApplication.h"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>


HelloTriangleApplication::HelloTriangleApplication() {

};

void HelloTriangleApplication::run() {
	initWindow();
	initVulkan();
	mainLoop();
	cleanup();
};

void HelloTriangleApplication::initWindow() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);

	
}

void HelloTriangleApplication::initVulkan() {

};

void HelloTriangleApplication::mainLoop() {

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

};

void HelloTriangleApplication::cleanup() {
	glfwDestroyWindow(window);
	glfwTerminate();
};

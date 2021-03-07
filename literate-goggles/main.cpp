#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class HelloTriangleApplication {
	private:
		int running;
	public:
		HelloTriangleApplication();
};


HelloTriangleApplication::HelloTriangleApplication() {

	std::cout << "Hello world!" << std::endl;

}

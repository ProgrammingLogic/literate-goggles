#include <exception>
#include <iostream>

#include "HelloTriangleApplication.h"

using namespace std;

int main (int argc, char* argv[]) {

	HelloTriangleApplication app;

	try {
		app.run();
	}
		catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}



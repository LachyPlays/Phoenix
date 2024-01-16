#include <vulkan/vulkan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace Phoenix {
	/*
		The core Phoenix renderer. Although it is relatively low level,
		this renderer still exposes all aspects of the Vulkan API, albeit with 
		a "safety net" to catch and manage said aspects. 
	*/
	class Renderer {
	public:
		// Initialise all boilerplate code 
		Renderer();	
		// Clean up all memory and structures
		~Renderer();	
	private:
		VkInstance instance;
	};
}


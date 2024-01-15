# Add source to this project's executable.
add_executable (Phoenix 
	main.cpp
)

set_property(TARGET Phoenix PROPERTY CXX_STANDARD 20)
target_include_directories(Phoenix PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(Phoenix PUBLIC 
	Vulkan::Vulkan 
	glfw
)

# TODO: Add tests and install targets if needed.

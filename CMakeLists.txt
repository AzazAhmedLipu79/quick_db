# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name
project(QuickDb)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include the source directory
add_subdirectory(src)

# Add unit tests directory
add_subdirectory(tests)

# Optionally, you can specify to build your tests only in debug mode
# if(CMAKE_BUILD_TYPE STREQUAL "Debug")
#   enable_testing()
#   add_subdirectory(tests)
# endif()

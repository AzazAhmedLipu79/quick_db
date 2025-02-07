cmake_minimum_required(VERSION 3.10)
project(QuickDb)

set(CMAKE_CXX_STANDARD 17)

# Include the source directory
add_subdirectory(src)

# Add unit tests directory
add_subdirectory(tests)

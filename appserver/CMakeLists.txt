cmake_minimum_required(VERSION 2.8)

project (appserver CXX)

# Enable C++14 and use strict compiler settings
set(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra -Werror -pedantic")

# Generated executable will be saved to bin/
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Include project sources under src directory
add_subdirectory(${CMAKE_SOURCE_DIR}/src)

cmake_minimum_required(VERSION 2.8)
project(startProject)
find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(startProject main.cpp)
target_link_libraries(startProject ${OpenCV_LIBS})

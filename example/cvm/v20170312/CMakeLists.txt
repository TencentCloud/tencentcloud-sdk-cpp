cmake_minimum_required (VERSION 3.1)
project(DescribeInstances)

set(CMAKE_CXX_STANDARD 11)

add_executable(DescribeInstances DescribeInstances.cpp)
add_executable(DescribeInstancesAsync DescribeInstancesAsync.cpp)
target_link_libraries(DescribeInstances cvm core)
target_link_libraries(DescribeInstancesAsync cvm core)
target_include_directories(DescribeInstances PRIVATE ../../../core/include ../../../cvm/include)
target_include_directories(DescribeInstancesAsync PRIVATE ../../../core/include ../../../cvm/include)
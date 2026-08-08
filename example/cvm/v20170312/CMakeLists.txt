cmake_minimum_required (VERSION 3.1)
project(DescribeInstances)

set(CMAKE_CXX_STANDARD 11)

add_executable(DescribeInstances DescribeInstances.cpp)
add_executable(DescribeInstancesAsync DescribeInstancesAsync.cpp)
add_executable(DomainFailover DomainFailover.cpp)
target_link_libraries(DescribeInstances tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core)
target_link_libraries(DescribeInstancesAsync tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core)
target_link_libraries(DomainFailover tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core)
target_include_directories(DescribeInstances PRIVATE ../../../core/include ../../../cvm/include)
target_include_directories(DescribeInstancesAsync PRIVATE ../../../core/include ../../../cvm/include)
target_include_directories(DomainFailover PRIVATE ../../../core/include ../../../cvm/include)

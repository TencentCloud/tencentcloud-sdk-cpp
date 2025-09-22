cmake_minimum_required (VERSION 3.1)
project(DescribeInstances)

set(CMAKE_CXX_STANDARD 11)


# add_executable(DescribeInstancesAsync DescribeInstancesAsync.cpp)
add_executable(stress_test stress_test.cpp)
# target_link_libraries(DescribeInstancesAsync tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core)
target_link_libraries(stress_test tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core)

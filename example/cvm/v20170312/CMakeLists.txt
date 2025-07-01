cmake_minimum_required (VERSION 3.15)
project(DescribeInstances)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")  # 添加 -g 调试符号


add_executable(DescribeInstances DescribeInstances.cpp)
add_executable(DescribeInstancesAsync DescribeInstancesAsync.cpp)
target_link_libraries(DescribeInstances tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core)
target_link_libraries(DescribeInstancesAsync tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core)

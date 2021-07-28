cmake_minimum_required (VERSION 3.1)
project(DescribeInstances)

set(CMAKE_CXX_STANDARD 11)

add_executable(DescribeInstances DescribeInstances.cpp)
add_executable(ClsUploadLog ClsUploadLog.cpp)

target_link_libraries(DescribeInstances tencentcloud-sdk-cpp-core)
target_link_libraries(ClsUploadLog tencentcloud-sdk-cpp-core)



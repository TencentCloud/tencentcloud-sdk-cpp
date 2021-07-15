#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

cmake_minimum_required(VERSION 3.1)
project(FunctionTest)
set(CMAKE_CXX_STANDARD 11)

# note ft_build is the dir you build sdk

include_directories("../../../core/include/")
include_directories("../../../cvm/include/")
link_directories(${CMAKE_SOURCE_DIR}/ft_build/lib)

add_executable(cvm_ft Cvm_DescribeInstances_Ft.cpp Main.cpp)
target_link_libraries(cvm_ft tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core)
target_link_libraries(cvm_ft gtest gmock_main -lpthread -lm)

set_target_properties(cvm_ft
  PROPERTIES
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cvm_ft
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_test(NAME cvm_ft COMMAND cvm_ft)

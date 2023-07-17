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

set(mall_public_header
  include/tencentcloud/mall/v20230518/MallClient.h
  )

set(mall_public_header_model
  include/tencentcloud/mall/v20230518/model/DescribeDrawResourceListResponse.h
  include/tencentcloud/mall/v20230518/model/ResourceDrawListType.h
  include/tencentcloud/mall/v20230518/model/DescribeDrawResourceListRequest.h
  )

set(mall_src
  src/v20230518/MallClient.cpp
  src/v20230518/model/DescribeDrawResourceListResponse.cpp
  src/v20230518/model/ResourceDrawListType.cpp
  src/v20230518/model/DescribeDrawResourceListRequest.cpp
  )

set(mall_include
    include/tencentcloud/mall
  )

add_library(mall ${LIB_TYPE}
  ${mall_public_header}
  ${mall_public_header_model}
  ${mall_src})

set_target_properties(mall
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mall
  )

target_include_directories(mall
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mall
  core)

#install(FILES ${mall_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mall/v20230518)
#install(FILES ${mall_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mall/v20230518/model)
install(DIRECTORY ${mall_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mall
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

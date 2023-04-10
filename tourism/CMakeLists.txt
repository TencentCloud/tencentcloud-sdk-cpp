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

set(tourism_public_header
  include/tencentcloud/tourism/v20230215/TourismClient.h
  )

set(tourism_public_header_model
  include/tencentcloud/tourism/v20230215/model/DescribeDrawResourceListResponse.h
  include/tencentcloud/tourism/v20230215/model/ResourceDrawListType.h
  include/tencentcloud/tourism/v20230215/model/DescribeDrawResourceListRequest.h
  )

set(tourism_src
  src/v20230215/TourismClient.cpp
  src/v20230215/model/DescribeDrawResourceListResponse.cpp
  src/v20230215/model/ResourceDrawListType.cpp
  src/v20230215/model/DescribeDrawResourceListRequest.cpp
  )

set(tourism_include
    include/tencentcloud/tourism
  )

add_library(tourism ${LIB_TYPE}
  ${tourism_public_header}
  ${tourism_public_header_model}
  ${tourism_src})

set_target_properties(tourism
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tourism
  )

target_include_directories(tourism
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tourism
  core)

#install(FILES ${tourism_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tourism/v20230215)
#install(FILES ${tourism_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tourism/v20230215/model)
install(DIRECTORY ${tourism_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tourism
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

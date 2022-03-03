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

set(api_public_header
  include/tencentcloud/api/v20201106/ApiClient.h
  )

set(api_public_header_model
  include/tencentcloud/api/v20201106/model/RegionProduct.h
  include/tencentcloud/api/v20201106/model/DescribeProductsRequest.h
  include/tencentcloud/api/v20201106/model/DescribeProductsResponse.h
  include/tencentcloud/api/v20201106/model/ZoneInfo.h
  include/tencentcloud/api/v20201106/model/DescribeZonesRequest.h
  include/tencentcloud/api/v20201106/model/DescribeZonesResponse.h
  include/tencentcloud/api/v20201106/model/RegionInfo.h
  include/tencentcloud/api/v20201106/model/DescribeRegionsResponse.h
  include/tencentcloud/api/v20201106/model/DescribeRegionsRequest.h
  )

set(api_src
  src/v20201106/ApiClient.cpp
  src/v20201106/model/RegionProduct.cpp
  src/v20201106/model/DescribeProductsRequest.cpp
  src/v20201106/model/DescribeProductsResponse.cpp
  src/v20201106/model/ZoneInfo.cpp
  src/v20201106/model/DescribeZonesRequest.cpp
  src/v20201106/model/DescribeZonesResponse.cpp
  src/v20201106/model/RegionInfo.cpp
  src/v20201106/model/DescribeRegionsResponse.cpp
  src/v20201106/model/DescribeRegionsRequest.cpp
  )

set(api_include
    include/tencentcloud/api
  )

add_library(api ${LIB_TYPE}
  ${api_public_header}
  ${api_public_header_model}
  ${api_src})

set_target_properties(api
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}api
  )

target_include_directories(api
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(api
  core)

#install(FILES ${api_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/api/v20201106)
#install(FILES ${api_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/api/v20201106/model)
install(DIRECTORY ${api_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS api
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

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

set(region_public_header
  include/tencentcloud/region/v20220627/RegionClient.h
  )

set(region_public_header_model
  include/tencentcloud/region/v20220627/model/RegionProduct.h
  include/tencentcloud/region/v20220627/model/DescribeProductsRequest.h
  include/tencentcloud/region/v20220627/model/DescribeProductsResponse.h
  include/tencentcloud/region/v20220627/model/ZoneInfo.h
  include/tencentcloud/region/v20220627/model/DescribeZonesRequest.h
  include/tencentcloud/region/v20220627/model/DescribeZonesResponse.h
  include/tencentcloud/region/v20220627/model/RegionInfo.h
  include/tencentcloud/region/v20220627/model/DescribeRegionsResponse.h
  include/tencentcloud/region/v20220627/model/DescribeRegionsRequest.h
  )

set(region_src
  src/v20220627/RegionClient.cpp
  src/v20220627/model/RegionProduct.cpp
  src/v20220627/model/DescribeProductsRequest.cpp
  src/v20220627/model/DescribeProductsResponse.cpp
  src/v20220627/model/ZoneInfo.cpp
  src/v20220627/model/DescribeZonesRequest.cpp
  src/v20220627/model/DescribeZonesResponse.cpp
  src/v20220627/model/RegionInfo.cpp
  src/v20220627/model/DescribeRegionsResponse.cpp
  src/v20220627/model/DescribeRegionsRequest.cpp
  )

set(region_include
    include/tencentcloud/region
  )

add_library(region ${LIB_TYPE}
  ${region_public_header}
  ${region_public_header_model}
  ${region_src})

set_target_properties(region
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}region
  )

target_include_directories(region
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(region
  core)

#install(FILES ${region_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/region/v20220627)
#install(FILES ${region_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/region/v20220627/model)
install(DIRECTORY ${region_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS region
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

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

set(cdz_public_header
  include/tencentcloud/cdz/v20221123/CdzClient.h
  )

set(cdz_public_header_model
  include/tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneResourceSummaryRequest.h
  include/tencentcloud/cdz/v20221123/model/CloudDedicatedZoneResourceStatisticsInfo.h
  include/tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneHostsResponse.h
  include/tencentcloud/cdz/v20221123/model/ExtraInfo.h
  include/tencentcloud/cdz/v20221123/model/CloudDedicatedZoneHostsInfo.h
  include/tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneHostsRequest.h
  include/tencentcloud/cdz/v20221123/model/CloudDedicatedZoneResourceSummaryInfo.h
  include/tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneResourceSummaryResponse.h
  )

set(cdz_src
  src/v20221123/CdzClient.cpp
  src/v20221123/model/DescribeCloudDedicatedZoneResourceSummaryRequest.cpp
  src/v20221123/model/CloudDedicatedZoneResourceStatisticsInfo.cpp
  src/v20221123/model/DescribeCloudDedicatedZoneHostsResponse.cpp
  src/v20221123/model/ExtraInfo.cpp
  src/v20221123/model/CloudDedicatedZoneHostsInfo.cpp
  src/v20221123/model/DescribeCloudDedicatedZoneHostsRequest.cpp
  src/v20221123/model/CloudDedicatedZoneResourceSummaryInfo.cpp
  src/v20221123/model/DescribeCloudDedicatedZoneResourceSummaryResponse.cpp
  )

set(cdz_include
    include/tencentcloud/cdz
  )

add_library(cdz ${LIB_TYPE}
  ${cdz_public_header}
  ${cdz_public_header_model}
  ${cdz_src})

set_target_properties(cdz
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdz
  )

target_include_directories(cdz
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cdz
  core)

#install(FILES ${cdz_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdz/v20221123)
#install(FILES ${cdz_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdz/v20221123/model)
install(DIRECTORY ${cdz_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cdz
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

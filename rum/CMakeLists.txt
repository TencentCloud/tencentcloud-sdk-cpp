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

set(rum_public_header
  include/tencentcloud/rum/v20210622/RumClient.h
  )

set(rum_public_header_model
  include/tencentcloud/rum/v20210622/model/ScoreInfo.h
  include/tencentcloud/rum/v20210622/model/DescribeProjectsRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataEventUrlRequest.h
  include/tencentcloud/rum/v20210622/model/RumProject.h
  include/tencentcloud/rum/v20210622/model/DescribeProjectsResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataFetchUrlResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeErrorRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeLogListRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeScoresResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeErrorResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPerformancePageRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeScoresRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataFetchUrlRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeDataLogUrlStatisticsResponse.h
  include/tencentcloud/rum/v20210622/model/CreateProjectResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataFetchUrlInfoResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsRequest.h
  include/tencentcloud/rum/v20210622/model/Filter.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPerformancePageResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataEventUrlResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataFetchUrlInfoRequest.h
  include/tencentcloud/rum/v20210622/model/DescribeLogListResponse.h
  include/tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsResponse.h
  include/tencentcloud/rum/v20210622/model/CreateProjectRequest.h
  )

set(rum_src
  src/v20210622/RumClient.cpp
  src/v20210622/model/ScoreInfo.cpp
  src/v20210622/model/DescribeProjectsRequest.cpp
  src/v20210622/model/DescribeDataEventUrlRequest.cpp
  src/v20210622/model/RumProject.cpp
  src/v20210622/model/DescribeProjectsResponse.cpp
  src/v20210622/model/DescribeDataFetchUrlResponse.cpp
  src/v20210622/model/DescribeErrorRequest.cpp
  src/v20210622/model/DescribeLogListRequest.cpp
  src/v20210622/model/DescribeScoresResponse.cpp
  src/v20210622/model/DescribeErrorResponse.cpp
  src/v20210622/model/DescribeDataLogUrlStatisticsRequest.cpp
  src/v20210622/model/DescribeDataPerformancePageRequest.cpp
  src/v20210622/model/DescribeScoresRequest.cpp
  src/v20210622/model/DescribeDataFetchUrlRequest.cpp
  src/v20210622/model/DescribeDataLogUrlStatisticsResponse.cpp
  src/v20210622/model/CreateProjectResponse.cpp
  src/v20210622/model/DescribeDataFetchUrlInfoResponse.cpp
  src/v20210622/model/DescribeDataPvUrlStatisticsRequest.cpp
  src/v20210622/model/Filter.cpp
  src/v20210622/model/DescribeDataPerformancePageResponse.cpp
  src/v20210622/model/DescribeDataEventUrlResponse.cpp
  src/v20210622/model/DescribeDataFetchUrlInfoRequest.cpp
  src/v20210622/model/DescribeLogListResponse.cpp
  src/v20210622/model/DescribeDataPvUrlStatisticsResponse.cpp
  src/v20210622/model/CreateProjectRequest.cpp
  )

set(rum_include
    include/tencentcloud/rum
  )

add_library(rum ${LIB_TYPE}
  ${rum_public_header}
  ${rum_public_header_model}
  ${rum_src})

set_target_properties(rum
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rum
  )

target_include_directories(rum
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(rum
  core)

#install(FILES ${rum_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rum/v20210622)
#install(FILES ${rum_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/rum/v20210622/model)
install(DIRECTORY ${rum_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS rum
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

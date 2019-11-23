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

set(dbbrain_public_header
  include/tencentcloud/dbbrain/v20191016/DbbrainClient.h
  )

set(dbbrain_public_header_model
  include/tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTopSqlsResponse.h
  include/tencentcloud/dbbrain/v20191016/model/MonitorMetricSeriesData.h
  include/tencentcloud/dbbrain/v20191016/model/DiagHistoryEventItem.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDBDiagHistoryResponse.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDBDiagEventRequest.h
  include/tencentcloud/dbbrain/v20191016/model/SlowLogTopSqlItem.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDBDiagEventResponse.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeDBDiagHistoryRequest.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsResponse.h
  include/tencentcloud/dbbrain/v20191016/model/TimeSlice.h
  include/tencentcloud/dbbrain/v20191016/model/MonitorMetric.h
  include/tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTopSqlsRequest.h
  )

set(dbbrain_src
  src/v20191016/DbbrainClient.cpp
  src/v20191016/model/DescribeSlowLogTopSqlsResponse.cpp
  src/v20191016/model/MonitorMetricSeriesData.cpp
  src/v20191016/model/DiagHistoryEventItem.cpp
  src/v20191016/model/DescribeSlowLogTimeSeriesStatsRequest.cpp
  src/v20191016/model/DescribeDBDiagHistoryResponse.cpp
  src/v20191016/model/DescribeDBDiagEventRequest.cpp
  src/v20191016/model/SlowLogTopSqlItem.cpp
  src/v20191016/model/DescribeDBDiagEventResponse.cpp
  src/v20191016/model/DescribeDBDiagHistoryRequest.cpp
  src/v20191016/model/DescribeSlowLogTimeSeriesStatsResponse.cpp
  src/v20191016/model/TimeSlice.cpp
  src/v20191016/model/MonitorMetric.cpp
  src/v20191016/model/DescribeSlowLogTopSqlsRequest.cpp
  )

set(dbbrain_include
    include/tencentcloud/dbbrain
  )

add_library(dbbrain ${LIB_TYPE}
  ${dbbrain_public_header}
  ${dbbrain_public_header_model}
  ${dbbrain_src})

set_target_properties(dbbrain
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dbbrain
  )

target_include_directories(dbbrain
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dbbrain
  core)

#install(FILES ${dbbrain_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dbbrain/v20191016)
#install(FILES ${dbbrain_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dbbrain/v20191016/model)
install(DIRECTORY ${dbbrain_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dbbrain
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

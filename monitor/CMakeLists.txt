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

set(monitor_public_header
  include/tencentcloud/monitor/v20180724/MonitorClient.h
  )

set(monitor_public_header_model
  include/tencentcloud/monitor/v20180724/model/GetMonitorDataRequest.h
  include/tencentcloud/monitor/v20180724/model/Instance.h
  include/tencentcloud/monitor/v20180724/model/PeriodsSt.h
  include/tencentcloud/monitor/v20180724/model/Dimension.h
  include/tencentcloud/monitor/v20180724/model/DescribeBaseMetricsRequest.h
  include/tencentcloud/monitor/v20180724/model/GetMonitorDataResponse.h
  include/tencentcloud/monitor/v20180724/model/MetricSet.h
  include/tencentcloud/monitor/v20180724/model/DataPoint.h
  include/tencentcloud/monitor/v20180724/model/MetricObjectMeaning.h
  include/tencentcloud/monitor/v20180724/model/DimensionsDesc.h
  include/tencentcloud/monitor/v20180724/model/DescribeBaseMetricsResponse.h
  )

set(monitor_src
  src/v20180724/MonitorClient.cpp
  src/v20180724/model/GetMonitorDataRequest.cpp
  src/v20180724/model/Instance.cpp
  src/v20180724/model/PeriodsSt.cpp
  src/v20180724/model/Dimension.cpp
  src/v20180724/model/DescribeBaseMetricsRequest.cpp
  src/v20180724/model/GetMonitorDataResponse.cpp
  src/v20180724/model/MetricSet.cpp
  src/v20180724/model/DataPoint.cpp
  src/v20180724/model/MetricObjectMeaning.cpp
  src/v20180724/model/DimensionsDesc.cpp
  src/v20180724/model/DescribeBaseMetricsResponse.cpp
  )

set(monitor_include
    include/tencentcloud/monitor
  )

add_library(monitor ${LIB_TYPE}
  ${monitor_public_header}
  ${monitor_public_header_model}
  ${monitor_src})

set_target_properties(monitor
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}monitor
  )

target_include_directories(monitor
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(monitor
  core)

#install(FILES ${monitor_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/monitor/v20180724)
#install(FILES ${monitor_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/monitor/v20180724/model)
install(DIRECTORY ${monitor_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS monitor
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

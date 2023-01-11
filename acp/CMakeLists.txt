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

set(acp_public_header
  include/tencentcloud/acp/v20220105/AcpClient.h
  )

set(acp_public_header_model
  include/tencentcloud/acp/v20220105/model/CreateAppScanTaskRepeatRequest.h
  include/tencentcloud/acp/v20220105/model/DescribeScanTaskListResponse.h
  include/tencentcloud/acp/v20220105/model/AppInfoItem.h
  include/tencentcloud/acp/v20220105/model/DescribeResourceUsageInfoResponse.h
  include/tencentcloud/acp/v20220105/model/DescribeScanTaskListRequest.h
  include/tencentcloud/acp/v20220105/model/ResourceUsageInfoData.h
  include/tencentcloud/acp/v20220105/model/TaskFlowStepsInfo.h
  include/tencentcloud/acp/v20220105/model/CreateAppScanTaskRequest.h
  include/tencentcloud/acp/v20220105/model/DescribeChannelTaskReportUrlResponse.h
  include/tencentcloud/acp/v20220105/model/DescribeFileTicketResponse.h
  include/tencentcloud/acp/v20220105/model/DescribeScanTaskStatusResponse.h
  include/tencentcloud/acp/v20220105/model/DescribeScanTaskReportUrlRequest.h
  include/tencentcloud/acp/v20220105/model/DescribeChannelTaskReportUrlRequest.h
  include/tencentcloud/acp/v20220105/model/AppTaskData.h
  include/tencentcloud/acp/v20220105/model/DescribeScanTaskStatusRequest.h
  include/tencentcloud/acp/v20220105/model/DescribeFileTicketRequest.h
  include/tencentcloud/acp/v20220105/model/CreateAppScanTaskResponse.h
  include/tencentcloud/acp/v20220105/model/DescribeResourceUsageInfoRequest.h
  include/tencentcloud/acp/v20220105/model/DescribeScanTaskReportUrlResponse.h
  include/tencentcloud/acp/v20220105/model/CreateAppScanTaskRepeatResponse.h
  )

set(acp_src
  src/v20220105/AcpClient.cpp
  src/v20220105/model/CreateAppScanTaskRepeatRequest.cpp
  src/v20220105/model/DescribeScanTaskListResponse.cpp
  src/v20220105/model/AppInfoItem.cpp
  src/v20220105/model/DescribeResourceUsageInfoResponse.cpp
  src/v20220105/model/DescribeScanTaskListRequest.cpp
  src/v20220105/model/ResourceUsageInfoData.cpp
  src/v20220105/model/TaskFlowStepsInfo.cpp
  src/v20220105/model/CreateAppScanTaskRequest.cpp
  src/v20220105/model/DescribeChannelTaskReportUrlResponse.cpp
  src/v20220105/model/DescribeFileTicketResponse.cpp
  src/v20220105/model/DescribeScanTaskStatusResponse.cpp
  src/v20220105/model/DescribeScanTaskReportUrlRequest.cpp
  src/v20220105/model/DescribeChannelTaskReportUrlRequest.cpp
  src/v20220105/model/AppTaskData.cpp
  src/v20220105/model/DescribeScanTaskStatusRequest.cpp
  src/v20220105/model/DescribeFileTicketRequest.cpp
  src/v20220105/model/CreateAppScanTaskResponse.cpp
  src/v20220105/model/DescribeResourceUsageInfoRequest.cpp
  src/v20220105/model/DescribeScanTaskReportUrlResponse.cpp
  src/v20220105/model/CreateAppScanTaskRepeatResponse.cpp
  )

set(acp_include
    include/tencentcloud/acp
  )

add_library(acp ${LIB_TYPE}
  ${acp_public_header}
  ${acp_public_header_model}
  ${acp_src})

set_target_properties(acp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}acp
  )

target_include_directories(acp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(acp
  core)

#install(FILES ${acp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/acp/v20220105)
#install(FILES ${acp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/acp/v20220105/model)
install(DIRECTORY ${acp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS acp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

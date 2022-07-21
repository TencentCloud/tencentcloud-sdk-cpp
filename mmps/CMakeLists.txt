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

set(mmps_public_header
  include/tencentcloud/mmps/v20200710/MmpsClient.h
  )

set(mmps_public_header_model
  include/tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppReportUrlRequest.h
  include/tencentcloud/mmps/v20200710/model/DescribeScanTaskListRequest.h
  include/tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskParamRequest.h
  include/tencentcloud/mmps/v20200710/model/ResourceUsageInfoData.h
  include/tencentcloud/mmps/v20200710/model/CreateAppScanTaskRequest.h
  include/tencentcloud/mmps/v20200710/model/FlySecMiniAppRiskItems.h
  include/tencentcloud/mmps/v20200710/model/DescribeScanTaskStatusRequest.h
  include/tencentcloud/mmps/v20200710/model/DescribeBasicDiagnosisResourceUsageInfoResponse.h
  include/tencentcloud/mmps/v20200710/model/CreateAppScanTaskRepeatResponse.h
  include/tencentcloud/mmps/v20200710/model/DescribeBasicDiagnosisResourceUsageInfoRequest.h
  include/tencentcloud/mmps/v20200710/model/DescribeResourceUsageInfoResponse.h
  include/tencentcloud/mmps/v20200710/model/DescribeScanTaskReportUrlResponse.h
  include/tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskStatusRequest.h
  include/tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppScanTaskResponse.h
  include/tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppProfessionalScanTaskRequest.h
  include/tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppProfessionalScanTaskResponse.h
  include/tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskListRequest.h
  include/tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanReportListRequest.h
  include/tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskParamResponse.h
  include/tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppScanTaskRepeatRequest.h
  include/tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppScanTaskRequest.h
  include/tencentcloud/mmps/v20200710/model/CreateAppScanTaskRepeatRequest.h
  include/tencentcloud/mmps/v20200710/model/DescribeScanTaskReportUrlRequest.h
  include/tencentcloud/mmps/v20200710/model/TaskFlowStepsInfo.h
  include/tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskListResponse.h
  include/tencentcloud/mmps/v20200710/model/FlySecMiniAppTaskData.h
  include/tencentcloud/mmps/v20200710/model/CreateAppScanTaskResponse.h
  include/tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppReportUrlResponse.h
  include/tencentcloud/mmps/v20200710/model/DescribeScanTaskListResponse.h
  include/tencentcloud/mmps/v20200710/model/AppInfoItem.h
  include/tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanTaskStatusResponse.h
  include/tencentcloud/mmps/v20200710/model/DescribeFlySecMiniAppScanReportListResponse.h
  include/tencentcloud/mmps/v20200710/model/CreateFlySecMiniAppScanTaskRepeatResponse.h
  include/tencentcloud/mmps/v20200710/model/DescribeScanTaskStatusResponse.h
  include/tencentcloud/mmps/v20200710/model/AppTaskData.h
  include/tencentcloud/mmps/v20200710/model/FlySecMiniAppReportData.h
  include/tencentcloud/mmps/v20200710/model/DescribeResourceUsageInfoRequest.h
  )

set(mmps_src
  src/v20200710/MmpsClient.cpp
  src/v20200710/model/DescribeFlySecMiniAppReportUrlRequest.cpp
  src/v20200710/model/DescribeScanTaskListRequest.cpp
  src/v20200710/model/DescribeFlySecMiniAppScanTaskParamRequest.cpp
  src/v20200710/model/ResourceUsageInfoData.cpp
  src/v20200710/model/CreateAppScanTaskRequest.cpp
  src/v20200710/model/FlySecMiniAppRiskItems.cpp
  src/v20200710/model/DescribeScanTaskStatusRequest.cpp
  src/v20200710/model/DescribeBasicDiagnosisResourceUsageInfoResponse.cpp
  src/v20200710/model/CreateAppScanTaskRepeatResponse.cpp
  src/v20200710/model/DescribeBasicDiagnosisResourceUsageInfoRequest.cpp
  src/v20200710/model/DescribeResourceUsageInfoResponse.cpp
  src/v20200710/model/DescribeScanTaskReportUrlResponse.cpp
  src/v20200710/model/DescribeFlySecMiniAppScanTaskStatusRequest.cpp
  src/v20200710/model/CreateFlySecMiniAppScanTaskResponse.cpp
  src/v20200710/model/CreateFlySecMiniAppProfessionalScanTaskRequest.cpp
  src/v20200710/model/CreateFlySecMiniAppProfessionalScanTaskResponse.cpp
  src/v20200710/model/DescribeFlySecMiniAppScanTaskListRequest.cpp
  src/v20200710/model/DescribeFlySecMiniAppScanReportListRequest.cpp
  src/v20200710/model/DescribeFlySecMiniAppScanTaskParamResponse.cpp
  src/v20200710/model/CreateFlySecMiniAppScanTaskRepeatRequest.cpp
  src/v20200710/model/CreateFlySecMiniAppScanTaskRequest.cpp
  src/v20200710/model/CreateAppScanTaskRepeatRequest.cpp
  src/v20200710/model/DescribeScanTaskReportUrlRequest.cpp
  src/v20200710/model/TaskFlowStepsInfo.cpp
  src/v20200710/model/DescribeFlySecMiniAppScanTaskListResponse.cpp
  src/v20200710/model/FlySecMiniAppTaskData.cpp
  src/v20200710/model/CreateAppScanTaskResponse.cpp
  src/v20200710/model/DescribeFlySecMiniAppReportUrlResponse.cpp
  src/v20200710/model/DescribeScanTaskListResponse.cpp
  src/v20200710/model/AppInfoItem.cpp
  src/v20200710/model/DescribeFlySecMiniAppScanTaskStatusResponse.cpp
  src/v20200710/model/DescribeFlySecMiniAppScanReportListResponse.cpp
  src/v20200710/model/CreateFlySecMiniAppScanTaskRepeatResponse.cpp
  src/v20200710/model/DescribeScanTaskStatusResponse.cpp
  src/v20200710/model/AppTaskData.cpp
  src/v20200710/model/FlySecMiniAppReportData.cpp
  src/v20200710/model/DescribeResourceUsageInfoRequest.cpp
  )

set(mmps_include
    include/tencentcloud/mmps
  )

add_library(mmps ${LIB_TYPE}
  ${mmps_public_header}
  ${mmps_public_header_model}
  ${mmps_src})

set_target_properties(mmps
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mmps
  )

target_include_directories(mmps
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mmps
  core)

#install(FILES ${mmps_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mmps/v20200710)
#install(FILES ${mmps_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mmps/v20200710/model)
install(DIRECTORY ${mmps_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mmps
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

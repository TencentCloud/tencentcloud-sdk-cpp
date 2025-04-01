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

set(trro_public_header
  include/tencentcloud/trro/v20220325/TrroClient.h
  )

set(trro_public_header_model
  include/tencentcloud/trro/v20220325/model/CloudStorage.h
  include/tencentcloud/trro/v20220325/model/StartPublishLiveStreamResponse.h
  include/tencentcloud/trro/v20220325/model/DeleteProjectRequest.h
  include/tencentcloud/trro/v20220325/model/License.h
  include/tencentcloud/trro/v20220325/model/BoundLicensesRequest.h
  include/tencentcloud/trro/v20220325/model/PolicyInfo.h
  include/tencentcloud/trro/v20220325/model/CreateCloudRecordingResponse.h
  include/tencentcloud/trro/v20220325/model/StartPublishLiveStreamRequest.h
  include/tencentcloud/trro/v20220325/model/ModifyDeviceResponse.h
  include/tencentcloud/trro/v20220325/model/GetLicensesRequest.h
  include/tencentcloud/trro/v20220325/model/DescribePolicyResponse.h
  include/tencentcloud/trro/v20220325/model/BatchDeleteDevicesRequest.h
  include/tencentcloud/trro/v20220325/model/ModifyProjectSecModeRequest.h
  include/tencentcloud/trro/v20220325/model/DescribeDeviceInfoRequest.h
  include/tencentcloud/trro/v20220325/model/DescribeSessionStatisticsByIntervalResponse.h
  include/tencentcloud/trro/v20220325/model/GetLicenseStatResponse.h
  include/tencentcloud/trro/v20220325/model/SessionInfo.h
  include/tencentcloud/trro/v20220325/model/DescribeRecentSessionListRequest.h
  include/tencentcloud/trro/v20220325/model/DescribeDeviceSessionDetailsResponse.h
  include/tencentcloud/trro/v20220325/model/DescribeProjectInfoRequest.h
  include/tencentcloud/trro/v20220325/model/ModifyPolicyRequest.h
  include/tencentcloud/trro/v20220325/model/DescribeDeviceInfoResponse.h
  include/tencentcloud/trro/v20220325/model/GetLicenseStatRequest.h
  include/tencentcloud/trro/v20220325/model/DescribeProjectListResponse.h
  include/tencentcloud/trro/v20220325/model/ModifyProjectResponse.h
  include/tencentcloud/trro/v20220325/model/BatchDeletePolicyResponse.h
  include/tencentcloud/trro/v20220325/model/CreateCloudRecordingRequest.h
  include/tencentcloud/trro/v20220325/model/DescribePolicyRequest.h
  include/tencentcloud/trro/v20220325/model/ModifyPolicyResponse.h
  include/tencentcloud/trro/v20220325/model/Device.h
  include/tencentcloud/trro/v20220325/model/DeleteCloudRecordingResponse.h
  include/tencentcloud/trro/v20220325/model/DescribeSessionStatisticsRequest.h
  include/tencentcloud/trro/v20220325/model/ModifyProjectSecModeResponse.h
  include/tencentcloud/trro/v20220325/model/BatchDeleteDevicesResponse.h
  include/tencentcloud/trro/v20220325/model/ModifyProjectRequest.h
  include/tencentcloud/trro/v20220325/model/DescribeRecentSessionListResponse.h
  include/tencentcloud/trro/v20220325/model/ModifyDeviceRequest.h
  include/tencentcloud/trro/v20220325/model/DescribeProjectListRequest.h
  include/tencentcloud/trro/v20220325/model/ProjectInfo.h
  include/tencentcloud/trro/v20220325/model/BatchDeletePolicyRequest.h
  include/tencentcloud/trro/v20220325/model/RecentSessionInfo.h
  include/tencentcloud/trro/v20220325/model/CreateProjectResponse.h
  include/tencentcloud/trro/v20220325/model/DescribeProjectInfoResponse.h
  include/tencentcloud/trro/v20220325/model/DescribeDeviceListResponse.h
  include/tencentcloud/trro/v20220325/model/StopPublishLiveStreamRequest.h
  include/tencentcloud/trro/v20220325/model/DeleteCloudRecordingRequest.h
  include/tencentcloud/trro/v20220325/model/DeleteProjectResponse.h
  include/tencentcloud/trro/v20220325/model/DescribeDeviceListRequest.h
  include/tencentcloud/trro/v20220325/model/SessionDeviceDetail.h
  include/tencentcloud/trro/v20220325/model/GetDeviceLicenseResponse.h
  include/tencentcloud/trro/v20220325/model/CreateDeviceResponse.h
  include/tencentcloud/trro/v20220325/model/MultiNet.h
  include/tencentcloud/trro/v20220325/model/DescribeSessionStatisticsByIntervalRequest.h
  include/tencentcloud/trro/v20220325/model/CreateDeviceRequest.h
  include/tencentcloud/trro/v20220325/model/StopPublishLiveStreamResponse.h
  include/tencentcloud/trro/v20220325/model/DescribeSessionStatisticsResponse.h
  include/tencentcloud/trro/v20220325/model/PublishParams.h
  include/tencentcloud/trro/v20220325/model/GetDevicesResponse.h
  include/tencentcloud/trro/v20220325/model/BoundLicensesResponse.h
  include/tencentcloud/trro/v20220325/model/DescribeDeviceSessionDetailsRequest.h
  include/tencentcloud/trro/v20220325/model/GetLicensesResponse.h
  include/tencentcloud/trro/v20220325/model/DeviceInfo.h
  include/tencentcloud/trro/v20220325/model/DescribeDeviceSessionListRequest.h
  include/tencentcloud/trro/v20220325/model/ModifyCallbackUrlRequest.h
  include/tencentcloud/trro/v20220325/model/VideoList.h
  include/tencentcloud/trro/v20220325/model/GetDevicesRequest.h
  include/tencentcloud/trro/v20220325/model/DescribeDeviceSessionListResponse.h
  include/tencentcloud/trro/v20220325/model/VideoParams.h
  include/tencentcloud/trro/v20220325/model/SessionIntervalStatistic.h
  include/tencentcloud/trro/v20220325/model/ModifyCallbackUrlResponse.h
  include/tencentcloud/trro/v20220325/model/GetDeviceLicenseRequest.h
  include/tencentcloud/trro/v20220325/model/CreateProjectRequest.h
  )

set(trro_src
  src/v20220325/TrroClient.cpp
  src/v20220325/model/CloudStorage.cpp
  src/v20220325/model/StartPublishLiveStreamResponse.cpp
  src/v20220325/model/DeleteProjectRequest.cpp
  src/v20220325/model/License.cpp
  src/v20220325/model/BoundLicensesRequest.cpp
  src/v20220325/model/PolicyInfo.cpp
  src/v20220325/model/CreateCloudRecordingResponse.cpp
  src/v20220325/model/StartPublishLiveStreamRequest.cpp
  src/v20220325/model/ModifyDeviceResponse.cpp
  src/v20220325/model/GetLicensesRequest.cpp
  src/v20220325/model/DescribePolicyResponse.cpp
  src/v20220325/model/BatchDeleteDevicesRequest.cpp
  src/v20220325/model/ModifyProjectSecModeRequest.cpp
  src/v20220325/model/DescribeDeviceInfoRequest.cpp
  src/v20220325/model/DescribeSessionStatisticsByIntervalResponse.cpp
  src/v20220325/model/GetLicenseStatResponse.cpp
  src/v20220325/model/SessionInfo.cpp
  src/v20220325/model/DescribeRecentSessionListRequest.cpp
  src/v20220325/model/DescribeDeviceSessionDetailsResponse.cpp
  src/v20220325/model/DescribeProjectInfoRequest.cpp
  src/v20220325/model/ModifyPolicyRequest.cpp
  src/v20220325/model/DescribeDeviceInfoResponse.cpp
  src/v20220325/model/GetLicenseStatRequest.cpp
  src/v20220325/model/DescribeProjectListResponse.cpp
  src/v20220325/model/ModifyProjectResponse.cpp
  src/v20220325/model/BatchDeletePolicyResponse.cpp
  src/v20220325/model/CreateCloudRecordingRequest.cpp
  src/v20220325/model/DescribePolicyRequest.cpp
  src/v20220325/model/ModifyPolicyResponse.cpp
  src/v20220325/model/Device.cpp
  src/v20220325/model/DeleteCloudRecordingResponse.cpp
  src/v20220325/model/DescribeSessionStatisticsRequest.cpp
  src/v20220325/model/ModifyProjectSecModeResponse.cpp
  src/v20220325/model/BatchDeleteDevicesResponse.cpp
  src/v20220325/model/ModifyProjectRequest.cpp
  src/v20220325/model/DescribeRecentSessionListResponse.cpp
  src/v20220325/model/ModifyDeviceRequest.cpp
  src/v20220325/model/DescribeProjectListRequest.cpp
  src/v20220325/model/ProjectInfo.cpp
  src/v20220325/model/BatchDeletePolicyRequest.cpp
  src/v20220325/model/RecentSessionInfo.cpp
  src/v20220325/model/CreateProjectResponse.cpp
  src/v20220325/model/DescribeProjectInfoResponse.cpp
  src/v20220325/model/DescribeDeviceListResponse.cpp
  src/v20220325/model/StopPublishLiveStreamRequest.cpp
  src/v20220325/model/DeleteCloudRecordingRequest.cpp
  src/v20220325/model/DeleteProjectResponse.cpp
  src/v20220325/model/DescribeDeviceListRequest.cpp
  src/v20220325/model/SessionDeviceDetail.cpp
  src/v20220325/model/GetDeviceLicenseResponse.cpp
  src/v20220325/model/CreateDeviceResponse.cpp
  src/v20220325/model/MultiNet.cpp
  src/v20220325/model/DescribeSessionStatisticsByIntervalRequest.cpp
  src/v20220325/model/CreateDeviceRequest.cpp
  src/v20220325/model/StopPublishLiveStreamResponse.cpp
  src/v20220325/model/DescribeSessionStatisticsResponse.cpp
  src/v20220325/model/PublishParams.cpp
  src/v20220325/model/GetDevicesResponse.cpp
  src/v20220325/model/BoundLicensesResponse.cpp
  src/v20220325/model/DescribeDeviceSessionDetailsRequest.cpp
  src/v20220325/model/GetLicensesResponse.cpp
  src/v20220325/model/DeviceInfo.cpp
  src/v20220325/model/DescribeDeviceSessionListRequest.cpp
  src/v20220325/model/ModifyCallbackUrlRequest.cpp
  src/v20220325/model/VideoList.cpp
  src/v20220325/model/GetDevicesRequest.cpp
  src/v20220325/model/DescribeDeviceSessionListResponse.cpp
  src/v20220325/model/VideoParams.cpp
  src/v20220325/model/SessionIntervalStatistic.cpp
  src/v20220325/model/ModifyCallbackUrlResponse.cpp
  src/v20220325/model/GetDeviceLicenseRequest.cpp
  src/v20220325/model/CreateProjectRequest.cpp
  )

set(trro_include
    include/tencentcloud/trro
  )

add_library(trro ${LIB_TYPE}
  ${trro_public_header}
  ${trro_public_header_model}
  ${trro_src})

set_target_properties(trro
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}trro
  )

target_include_directories(trro
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(trro
  core)

#install(FILES ${trro_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trro/v20220325)
#install(FILES ${trro_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/trro/v20220325/model)
install(DIRECTORY ${trro_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS trro
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

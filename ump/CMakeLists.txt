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

set(ump_public_header
  include/tencentcloud/ump/v20200918/UmpClient.h
  )

set(ump_public_header_model
  include/tencentcloud/ump/v20200918/model/ModifyMultiBizConfigResponse.h
  include/tencentcloud/ump/v20200918/model/CreateMultiBizAlertResponse.h
  include/tencentcloud/ump/v20200918/model/CameraConfig.h
  include/tencentcloud/ump/v20200918/model/CreateServerStateResponse.h
  include/tencentcloud/ump/v20200918/model/Polygon.h
  include/tencentcloud/ump/v20200918/model/CreateCaptureResponse.h
  include/tencentcloud/ump/v20200918/model/DescribeConfigRequest.h
  include/tencentcloud/ump/v20200918/model/DeleteTaskRequest.h
  include/tencentcloud/ump/v20200918/model/CreateCameraAlertsRequest.h
  include/tencentcloud/ump/v20200918/model/CreateCameraAlertsResponse.h
  include/tencentcloud/ump/v20200918/model/DeleteMultiBizAlertRequest.h
  include/tencentcloud/ump/v20200918/model/ServerStateItem.h
  include/tencentcloud/ump/v20200918/model/DescribeZonesRequest.h
  include/tencentcloud/ump/v20200918/model/Config.h
  include/tencentcloud/ump/v20200918/model/TaskContent.h
  include/tencentcloud/ump/v20200918/model/SearchImageResponse.h
  include/tencentcloud/ump/v20200918/model/CreateProgramStateResponse.h
  include/tencentcloud/ump/v20200918/model/ServiceRegisterInfo.h
  include/tencentcloud/ump/v20200918/model/DescribeTasksRequest.h
  include/tencentcloud/ump/v20200918/model/SearchImageRequest.h
  include/tencentcloud/ump/v20200918/model/DeleteMultiBizAlertResponse.h
  include/tencentcloud/ump/v20200918/model/ReportServiceRegisterRequest.h
  include/tencentcloud/ump/v20200918/model/DescribeImageResponse.h
  include/tencentcloud/ump/v20200918/model/CreateCameraAlertAlert.h
  include/tencentcloud/ump/v20200918/model/ReportServiceRegisterResponse.h
  include/tencentcloud/ump/v20200918/model/DiskInfo.h
  include/tencentcloud/ump/v20200918/model/CreateCameraStateResponse.h
  include/tencentcloud/ump/v20200918/model/CreateMultiBizAlertRequest.h
  include/tencentcloud/ump/v20200918/model/CreateProgramStateRequest.h
  include/tencentcloud/ump/v20200918/model/DescribeMultiBizBaseImageRequest.h
  include/tencentcloud/ump/v20200918/model/MultiBizWarningInfo.h
  include/tencentcloud/ump/v20200918/model/Task.h
  include/tencentcloud/ump/v20200918/model/ZoneConfig.h
  include/tencentcloud/ump/v20200918/model/ProgramStateItem.h
  include/tencentcloud/ump/v20200918/model/DescribeTasksResponse.h
  include/tencentcloud/ump/v20200918/model/DescribeCamerasRequest.h
  include/tencentcloud/ump/v20200918/model/DescribeMultiBizBaseImageResponse.h
  include/tencentcloud/ump/v20200918/model/DescribeImageRequest.h
  include/tencentcloud/ump/v20200918/model/ZoneArea.h
  include/tencentcloud/ump/v20200918/model/SearchResult.h
  include/tencentcloud/ump/v20200918/model/CameraState.h
  include/tencentcloud/ump/v20200918/model/CreateCaptureRequest.h
  include/tencentcloud/ump/v20200918/model/CreateCameraAlertsMoveAlert.h
  include/tencentcloud/ump/v20200918/model/CreateCameraStateRequest.h
  include/tencentcloud/ump/v20200918/model/DescribeCamerasResponse.h
  include/tencentcloud/ump/v20200918/model/DescribeConfigResponse.h
  include/tencentcloud/ump/v20200918/model/DeleteTaskResponse.h
  include/tencentcloud/ump/v20200918/model/DescribeZonesResponse.h
  include/tencentcloud/ump/v20200918/model/ModifyMultiBizConfigRequest.h
  include/tencentcloud/ump/v20200918/model/CameraZones.h
  include/tencentcloud/ump/v20200918/model/CreateCameraAlertsCoverAlert.h
  include/tencentcloud/ump/v20200918/model/BunkZone.h
  include/tencentcloud/ump/v20200918/model/Point.h
  include/tencentcloud/ump/v20200918/model/CreateServerStateRequest.h
  include/tencentcloud/ump/v20200918/model/MultiBizWarning.h
  )

set(ump_src
  src/v20200918/UmpClient.cpp
  src/v20200918/model/ModifyMultiBizConfigResponse.cpp
  src/v20200918/model/CreateMultiBizAlertResponse.cpp
  src/v20200918/model/CameraConfig.cpp
  src/v20200918/model/CreateServerStateResponse.cpp
  src/v20200918/model/Polygon.cpp
  src/v20200918/model/CreateCaptureResponse.cpp
  src/v20200918/model/DescribeConfigRequest.cpp
  src/v20200918/model/DeleteTaskRequest.cpp
  src/v20200918/model/CreateCameraAlertsRequest.cpp
  src/v20200918/model/CreateCameraAlertsResponse.cpp
  src/v20200918/model/DeleteMultiBizAlertRequest.cpp
  src/v20200918/model/ServerStateItem.cpp
  src/v20200918/model/DescribeZonesRequest.cpp
  src/v20200918/model/Config.cpp
  src/v20200918/model/TaskContent.cpp
  src/v20200918/model/SearchImageResponse.cpp
  src/v20200918/model/CreateProgramStateResponse.cpp
  src/v20200918/model/ServiceRegisterInfo.cpp
  src/v20200918/model/DescribeTasksRequest.cpp
  src/v20200918/model/SearchImageRequest.cpp
  src/v20200918/model/DeleteMultiBizAlertResponse.cpp
  src/v20200918/model/ReportServiceRegisterRequest.cpp
  src/v20200918/model/DescribeImageResponse.cpp
  src/v20200918/model/CreateCameraAlertAlert.cpp
  src/v20200918/model/ReportServiceRegisterResponse.cpp
  src/v20200918/model/DiskInfo.cpp
  src/v20200918/model/CreateCameraStateResponse.cpp
  src/v20200918/model/CreateMultiBizAlertRequest.cpp
  src/v20200918/model/CreateProgramStateRequest.cpp
  src/v20200918/model/DescribeMultiBizBaseImageRequest.cpp
  src/v20200918/model/MultiBizWarningInfo.cpp
  src/v20200918/model/Task.cpp
  src/v20200918/model/ZoneConfig.cpp
  src/v20200918/model/ProgramStateItem.cpp
  src/v20200918/model/DescribeTasksResponse.cpp
  src/v20200918/model/DescribeCamerasRequest.cpp
  src/v20200918/model/DescribeMultiBizBaseImageResponse.cpp
  src/v20200918/model/DescribeImageRequest.cpp
  src/v20200918/model/ZoneArea.cpp
  src/v20200918/model/SearchResult.cpp
  src/v20200918/model/CameraState.cpp
  src/v20200918/model/CreateCaptureRequest.cpp
  src/v20200918/model/CreateCameraAlertsMoveAlert.cpp
  src/v20200918/model/CreateCameraStateRequest.cpp
  src/v20200918/model/DescribeCamerasResponse.cpp
  src/v20200918/model/DescribeConfigResponse.cpp
  src/v20200918/model/DeleteTaskResponse.cpp
  src/v20200918/model/DescribeZonesResponse.cpp
  src/v20200918/model/ModifyMultiBizConfigRequest.cpp
  src/v20200918/model/CameraZones.cpp
  src/v20200918/model/CreateCameraAlertsCoverAlert.cpp
  src/v20200918/model/BunkZone.cpp
  src/v20200918/model/Point.cpp
  src/v20200918/model/CreateServerStateRequest.cpp
  src/v20200918/model/MultiBizWarning.cpp
  )

set(ump_include
    include/tencentcloud/ump
  )

add_library(ump ${LIB_TYPE}
  ${ump_public_header}
  ${ump_public_header_model}
  ${ump_src})

set_target_properties(ump
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ump
  )

target_include_directories(ump
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ump
  core)

#install(FILES ${ump_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ump/v20200918)
#install(FILES ${ump_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ump/v20200918/model)
install(DIRECTORY ${ump_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ump
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

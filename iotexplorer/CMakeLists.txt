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

set(iotexplorer_public_header
  include/tencentcloud/iotexplorer/v20190423/IotexplorerClient.h
  )

set(iotexplorer_public_header_model
  include/tencentcloud/iotexplorer/v20190423/model/DescribeProjectResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/ControlDeviceDataResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataHistoryRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/SearchStudioProductResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/DeviceData.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeStudioProductRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DeleteProjectRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/ListEventHistoryRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/ListEventHistoryResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/DeviceDataHistoryItem.h
  include/tencentcloud/iotexplorer/v20190423/model/ProductEntry.h
  include/tencentcloud/iotexplorer/v20190423/model/GetStudioProductListResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeModelDefinitionResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/ProjectEntryEx.h
  include/tencentcloud/iotexplorer/v20190423/model/GetProjectListRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DeleteStudioProductResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/EventHistoryItem.h
  include/tencentcloud/iotexplorer/v20190423/model/DeleteDeviceRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/GetDeviceListResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/ModifyStudioProductResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/ControlDeviceDataRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/SearchStudioProductRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/ReleaseStudioProductResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/ProjectEntry.h
  include/tencentcloud/iotexplorer/v20190423/model/ModifyProjectResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/ModifyModelDefinitionRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/CreateStudioProductResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/CallDeviceActionSyncRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DeleteStudioProductRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/ModifyProjectRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/CallDeviceActionSyncResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/ModifyStudioProductRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataHistoryResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/CreateStudioProductRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/ProductModelDefinition.h
  include/tencentcloud/iotexplorer/v20190423/model/CreateProjectResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/ReleaseStudioProductRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeModelDefinitionRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DeleteProjectResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/CallDeviceActionAsyncResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/CallDeviceActionAsyncRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/CreateDeviceResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/CreateDeviceRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeProjectRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/GetStudioProductListRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DeleteDeviceResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/DeviceInfo.h
  include/tencentcloud/iotexplorer/v20190423/model/ModifyModelDefinitionResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeDeviceRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/GetDeviceListRequest.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeStudioProductResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/DescribeDeviceResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/GetProjectListResponse.h
  include/tencentcloud/iotexplorer/v20190423/model/CreateProjectRequest.h
  )

set(iotexplorer_src
  src/v20190423/IotexplorerClient.cpp
  src/v20190423/model/DescribeProjectResponse.cpp
  src/v20190423/model/ControlDeviceDataResponse.cpp
  src/v20190423/model/DescribeDeviceDataHistoryRequest.cpp
  src/v20190423/model/SearchStudioProductResponse.cpp
  src/v20190423/model/DeviceData.cpp
  src/v20190423/model/DescribeStudioProductRequest.cpp
  src/v20190423/model/DeleteProjectRequest.cpp
  src/v20190423/model/ListEventHistoryRequest.cpp
  src/v20190423/model/ListEventHistoryResponse.cpp
  src/v20190423/model/DeviceDataHistoryItem.cpp
  src/v20190423/model/ProductEntry.cpp
  src/v20190423/model/GetStudioProductListResponse.cpp
  src/v20190423/model/DescribeModelDefinitionResponse.cpp
  src/v20190423/model/ProjectEntryEx.cpp
  src/v20190423/model/GetProjectListRequest.cpp
  src/v20190423/model/DeleteStudioProductResponse.cpp
  src/v20190423/model/EventHistoryItem.cpp
  src/v20190423/model/DeleteDeviceRequest.cpp
  src/v20190423/model/GetDeviceListResponse.cpp
  src/v20190423/model/ModifyStudioProductResponse.cpp
  src/v20190423/model/ControlDeviceDataRequest.cpp
  src/v20190423/model/SearchStudioProductRequest.cpp
  src/v20190423/model/ReleaseStudioProductResponse.cpp
  src/v20190423/model/ProjectEntry.cpp
  src/v20190423/model/ModifyProjectResponse.cpp
  src/v20190423/model/ModifyModelDefinitionRequest.cpp
  src/v20190423/model/CreateStudioProductResponse.cpp
  src/v20190423/model/CallDeviceActionSyncRequest.cpp
  src/v20190423/model/DeleteStudioProductRequest.cpp
  src/v20190423/model/ModifyProjectRequest.cpp
  src/v20190423/model/CallDeviceActionSyncResponse.cpp
  src/v20190423/model/ModifyStudioProductRequest.cpp
  src/v20190423/model/DescribeDeviceDataHistoryResponse.cpp
  src/v20190423/model/CreateStudioProductRequest.cpp
  src/v20190423/model/ProductModelDefinition.cpp
  src/v20190423/model/CreateProjectResponse.cpp
  src/v20190423/model/ReleaseStudioProductRequest.cpp
  src/v20190423/model/DescribeModelDefinitionRequest.cpp
  src/v20190423/model/DeleteProjectResponse.cpp
  src/v20190423/model/CallDeviceActionAsyncResponse.cpp
  src/v20190423/model/CallDeviceActionAsyncRequest.cpp
  src/v20190423/model/DescribeDeviceDataResponse.cpp
  src/v20190423/model/CreateDeviceResponse.cpp
  src/v20190423/model/CreateDeviceRequest.cpp
  src/v20190423/model/DescribeProjectRequest.cpp
  src/v20190423/model/GetStudioProductListRequest.cpp
  src/v20190423/model/DescribeDeviceDataRequest.cpp
  src/v20190423/model/DeleteDeviceResponse.cpp
  src/v20190423/model/DeviceInfo.cpp
  src/v20190423/model/ModifyModelDefinitionResponse.cpp
  src/v20190423/model/DescribeDeviceRequest.cpp
  src/v20190423/model/GetDeviceListRequest.cpp
  src/v20190423/model/DescribeStudioProductResponse.cpp
  src/v20190423/model/DescribeDeviceResponse.cpp
  src/v20190423/model/GetProjectListResponse.cpp
  src/v20190423/model/CreateProjectRequest.cpp
  )

set(iotexplorer_include
    include/tencentcloud/iotexplorer
  )

add_library(iotexplorer ${LIB_TYPE}
  ${iotexplorer_public_header}
  ${iotexplorer_public_header_model}
  ${iotexplorer_src})

set_target_properties(iotexplorer
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iotexplorer
  )

target_include_directories(iotexplorer
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iotexplorer
  core)

#install(FILES ${iotexplorer_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotexplorer/v20190423)
#install(FILES ${iotexplorer_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotexplorer/v20190423/model)
install(DIRECTORY ${iotexplorer_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iotexplorer
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

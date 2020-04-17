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

set(iotvideo_public_header
  include/tencentcloud/iotvideo/v20191126/IotvideoClient.h
  )

set(iotvideo_public_header_model
  include/tencentcloud/iotvideo/v20191126/model/UploadOtaVersionResponse.h
  include/tencentcloud/iotvideo/v20191126/model/CreateGencodeResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeLogsRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateIotDataTypeRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribePubVersionsRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeIotModelResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DisableDeviceResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeRunLogRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeProductsRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteTraceIdsRequest.h
  include/tencentcloud/iotvideo/v20191126/model/IotModelData.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeDevicesResponse.h
  include/tencentcloud/iotvideo/v20191126/model/ModifyProductResponse.h
  include/tencentcloud/iotvideo/v20191126/model/ModifyProductRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DisableDeviceStreamRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateIotModelRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeTraceStatusResponse.h
  include/tencentcloud/iotvideo/v20191126/model/CreateUploadPathRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateDevTokenRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteIotDataTypeRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeMessageQueueRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteAppUsrResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeRegistrationStatusResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeProductRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeProductsResponse.h
  include/tencentcloud/iotvideo/v20191126/model/CreateAppUsrRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DeviceCertificate.h
  include/tencentcloud/iotvideo/v20191126/model/UpgradeDeviceRequest.h
  include/tencentcloud/iotvideo/v20191126/model/LogData.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeModelDataRetResponse.h
  include/tencentcloud/iotvideo/v20191126/model/RunIotModelResponse.h
  include/tencentcloud/iotvideo/v20191126/model/RunIotModelRequest.h
  include/tencentcloud/iotvideo/v20191126/model/OtaPubHistory.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteProductRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeBindUsrResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeviceData.h
  include/tencentcloud/iotvideo/v20191126/model/SetMessageQueueRequest.h
  include/tencentcloud/iotvideo/v20191126/model/BindUsrInfo.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteOtaVersionRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeIotDataTypeResponse.h
  include/tencentcloud/iotvideo/v20191126/model/ProductData.h
  include/tencentcloud/iotvideo/v20191126/model/CreateBindingRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteDeviceRequest.h
  include/tencentcloud/iotvideo/v20191126/model/TraceStatus.h
  include/tencentcloud/iotvideo/v20191126/model/CreateDevTokenResponse.h
  include/tencentcloud/iotvideo/v20191126/model/ModifyDevicePropertyRequest.h
  include/tencentcloud/iotvideo/v20191126/model/RunDeviceStreamRequest.h
  include/tencentcloud/iotvideo/v20191126/model/RunDeviceResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteIotDataTypeResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeTraceStatusRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateUsrTokenResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DevTokenInfo.h
  include/tencentcloud/iotvideo/v20191126/model/CreateTraceIdsRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteMessageQueueResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeOtaVersionsRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeTraceIdsResponse.h
  include/tencentcloud/iotvideo/v20191126/model/CreateProductResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeRegistrationStatusRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateStorageRequest.h
  include/tencentcloud/iotvideo/v20191126/model/UpgradeDeviceResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DisableOtaVersionResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeBindDevResponse.h
  include/tencentcloud/iotvideo/v20191126/model/CreateProductRequest.h
  include/tencentcloud/iotvideo/v20191126/model/RunTestOtaVersionResponse.h
  include/tencentcloud/iotvideo/v20191126/model/RunTestOtaVersionRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeDeviceResponse.h
  include/tencentcloud/iotvideo/v20191126/model/SetMessageQueueResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteOtaVersionResponse.h
  include/tencentcloud/iotvideo/v20191126/model/UploadOtaVersionRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeIotModelsRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeModelDataRetRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateTraceIdsResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteBindingRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeOtaVersionsResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteProductResponse.h
  include/tencentcloud/iotvideo/v20191126/model/RunOtaVersionRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateDevicesResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeviceModelData.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeIotDataTypeRequest.h
  include/tencentcloud/iotvideo/v20191126/model/SendOnlineMsgRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeDeviceRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeRunLogResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeIotModelRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeTraceIdsRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateAppUsrResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteTraceIdsResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteMessageQueueRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateUsrTokenRequest.h
  include/tencentcloud/iotvideo/v20191126/model/RunDeviceRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeDeviceModelResponse.h
  include/tencentcloud/iotvideo/v20191126/model/ProductBase.h
  include/tencentcloud/iotvideo/v20191126/model/CreateGencodeRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribePubVersionsResponse.h
  include/tencentcloud/iotvideo/v20191126/model/ModifyDeviceActionRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateIotModelResponse.h
  include/tencentcloud/iotvideo/v20191126/model/BindDevInfo.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeBindDevRequest.h
  include/tencentcloud/iotvideo/v20191126/model/MsgQueueData.h
  include/tencentcloud/iotvideo/v20191126/model/RegisteredStatus.h
  include/tencentcloud/iotvideo/v20191126/model/RunDeviceStreamResponse.h
  include/tencentcloud/iotvideo/v20191126/model/RunOtaVersionResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeDeviceModelRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeLogsResponse.h
  include/tencentcloud/iotvideo/v20191126/model/ModifyDeviceActionResponse.h
  include/tencentcloud/iotvideo/v20191126/model/CreateBindingResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DevicesData.h
  include/tencentcloud/iotvideo/v20191126/model/CreateDevicesRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DisableDeviceRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DisableOtaVersionRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeProductResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeBindUsrRequest.h
  include/tencentcloud/iotvideo/v20191126/model/SendOnlineMsgResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteAppUsrRequest.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeIotModelsResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeMessageQueueResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DescribeDevicesRequest.h
  include/tencentcloud/iotvideo/v20191126/model/CreateIotDataTypeResponse.h
  include/tencentcloud/iotvideo/v20191126/model/ModifyDevicePropertyResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteBindingResponse.h
  include/tencentcloud/iotvideo/v20191126/model/CreateStorageResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DisableDeviceStreamResponse.h
  include/tencentcloud/iotvideo/v20191126/model/DeleteDeviceResponse.h
  include/tencentcloud/iotvideo/v20191126/model/CreateUploadPathResponse.h
  include/tencentcloud/iotvideo/v20191126/model/VersionData.h
  )

set(iotvideo_src
  src/v20191126/IotvideoClient.cpp
  src/v20191126/model/UploadOtaVersionResponse.cpp
  src/v20191126/model/CreateGencodeResponse.cpp
  src/v20191126/model/DescribeLogsRequest.cpp
  src/v20191126/model/CreateIotDataTypeRequest.cpp
  src/v20191126/model/DescribePubVersionsRequest.cpp
  src/v20191126/model/DescribeIotModelResponse.cpp
  src/v20191126/model/DisableDeviceResponse.cpp
  src/v20191126/model/DescribeRunLogRequest.cpp
  src/v20191126/model/DescribeProductsRequest.cpp
  src/v20191126/model/DeleteTraceIdsRequest.cpp
  src/v20191126/model/IotModelData.cpp
  src/v20191126/model/DescribeDevicesResponse.cpp
  src/v20191126/model/ModifyProductResponse.cpp
  src/v20191126/model/ModifyProductRequest.cpp
  src/v20191126/model/DisableDeviceStreamRequest.cpp
  src/v20191126/model/CreateIotModelRequest.cpp
  src/v20191126/model/DescribeTraceStatusResponse.cpp
  src/v20191126/model/CreateUploadPathRequest.cpp
  src/v20191126/model/CreateDevTokenRequest.cpp
  src/v20191126/model/DeleteIotDataTypeRequest.cpp
  src/v20191126/model/DescribeMessageQueueRequest.cpp
  src/v20191126/model/DeleteAppUsrResponse.cpp
  src/v20191126/model/DescribeRegistrationStatusResponse.cpp
  src/v20191126/model/DescribeProductRequest.cpp
  src/v20191126/model/DescribeProductsResponse.cpp
  src/v20191126/model/CreateAppUsrRequest.cpp
  src/v20191126/model/DeviceCertificate.cpp
  src/v20191126/model/UpgradeDeviceRequest.cpp
  src/v20191126/model/LogData.cpp
  src/v20191126/model/DescribeModelDataRetResponse.cpp
  src/v20191126/model/RunIotModelResponse.cpp
  src/v20191126/model/RunIotModelRequest.cpp
  src/v20191126/model/OtaPubHistory.cpp
  src/v20191126/model/DeleteProductRequest.cpp
  src/v20191126/model/DescribeBindUsrResponse.cpp
  src/v20191126/model/DeviceData.cpp
  src/v20191126/model/SetMessageQueueRequest.cpp
  src/v20191126/model/BindUsrInfo.cpp
  src/v20191126/model/DeleteOtaVersionRequest.cpp
  src/v20191126/model/DescribeIotDataTypeResponse.cpp
  src/v20191126/model/ProductData.cpp
  src/v20191126/model/CreateBindingRequest.cpp
  src/v20191126/model/DeleteDeviceRequest.cpp
  src/v20191126/model/TraceStatus.cpp
  src/v20191126/model/CreateDevTokenResponse.cpp
  src/v20191126/model/ModifyDevicePropertyRequest.cpp
  src/v20191126/model/RunDeviceStreamRequest.cpp
  src/v20191126/model/RunDeviceResponse.cpp
  src/v20191126/model/DeleteIotDataTypeResponse.cpp
  src/v20191126/model/DescribeTraceStatusRequest.cpp
  src/v20191126/model/CreateUsrTokenResponse.cpp
  src/v20191126/model/DevTokenInfo.cpp
  src/v20191126/model/CreateTraceIdsRequest.cpp
  src/v20191126/model/DeleteMessageQueueResponse.cpp
  src/v20191126/model/DescribeOtaVersionsRequest.cpp
  src/v20191126/model/DescribeTraceIdsResponse.cpp
  src/v20191126/model/CreateProductResponse.cpp
  src/v20191126/model/DescribeRegistrationStatusRequest.cpp
  src/v20191126/model/CreateStorageRequest.cpp
  src/v20191126/model/UpgradeDeviceResponse.cpp
  src/v20191126/model/DisableOtaVersionResponse.cpp
  src/v20191126/model/DescribeBindDevResponse.cpp
  src/v20191126/model/CreateProductRequest.cpp
  src/v20191126/model/RunTestOtaVersionResponse.cpp
  src/v20191126/model/RunTestOtaVersionRequest.cpp
  src/v20191126/model/DescribeDeviceResponse.cpp
  src/v20191126/model/SetMessageQueueResponse.cpp
  src/v20191126/model/DeleteOtaVersionResponse.cpp
  src/v20191126/model/UploadOtaVersionRequest.cpp
  src/v20191126/model/DescribeIotModelsRequest.cpp
  src/v20191126/model/DescribeModelDataRetRequest.cpp
  src/v20191126/model/CreateTraceIdsResponse.cpp
  src/v20191126/model/DeleteBindingRequest.cpp
  src/v20191126/model/DescribeOtaVersionsResponse.cpp
  src/v20191126/model/DeleteProductResponse.cpp
  src/v20191126/model/RunOtaVersionRequest.cpp
  src/v20191126/model/CreateDevicesResponse.cpp
  src/v20191126/model/DeviceModelData.cpp
  src/v20191126/model/DescribeIotDataTypeRequest.cpp
  src/v20191126/model/SendOnlineMsgRequest.cpp
  src/v20191126/model/DescribeDeviceRequest.cpp
  src/v20191126/model/DescribeRunLogResponse.cpp
  src/v20191126/model/DescribeIotModelRequest.cpp
  src/v20191126/model/DescribeTraceIdsRequest.cpp
  src/v20191126/model/CreateAppUsrResponse.cpp
  src/v20191126/model/DeleteTraceIdsResponse.cpp
  src/v20191126/model/DeleteMessageQueueRequest.cpp
  src/v20191126/model/CreateUsrTokenRequest.cpp
  src/v20191126/model/RunDeviceRequest.cpp
  src/v20191126/model/DescribeDeviceModelResponse.cpp
  src/v20191126/model/ProductBase.cpp
  src/v20191126/model/CreateGencodeRequest.cpp
  src/v20191126/model/DescribePubVersionsResponse.cpp
  src/v20191126/model/ModifyDeviceActionRequest.cpp
  src/v20191126/model/CreateIotModelResponse.cpp
  src/v20191126/model/BindDevInfo.cpp
  src/v20191126/model/DescribeBindDevRequest.cpp
  src/v20191126/model/MsgQueueData.cpp
  src/v20191126/model/RegisteredStatus.cpp
  src/v20191126/model/RunDeviceStreamResponse.cpp
  src/v20191126/model/RunOtaVersionResponse.cpp
  src/v20191126/model/DescribeDeviceModelRequest.cpp
  src/v20191126/model/DescribeLogsResponse.cpp
  src/v20191126/model/ModifyDeviceActionResponse.cpp
  src/v20191126/model/CreateBindingResponse.cpp
  src/v20191126/model/DevicesData.cpp
  src/v20191126/model/CreateDevicesRequest.cpp
  src/v20191126/model/DisableDeviceRequest.cpp
  src/v20191126/model/DisableOtaVersionRequest.cpp
  src/v20191126/model/DescribeProductResponse.cpp
  src/v20191126/model/DescribeBindUsrRequest.cpp
  src/v20191126/model/SendOnlineMsgResponse.cpp
  src/v20191126/model/DeleteAppUsrRequest.cpp
  src/v20191126/model/DescribeIotModelsResponse.cpp
  src/v20191126/model/DescribeMessageQueueResponse.cpp
  src/v20191126/model/DescribeDevicesRequest.cpp
  src/v20191126/model/CreateIotDataTypeResponse.cpp
  src/v20191126/model/ModifyDevicePropertyResponse.cpp
  src/v20191126/model/DeleteBindingResponse.cpp
  src/v20191126/model/CreateStorageResponse.cpp
  src/v20191126/model/DisableDeviceStreamResponse.cpp
  src/v20191126/model/DeleteDeviceResponse.cpp
  src/v20191126/model/CreateUploadPathResponse.cpp
  src/v20191126/model/VersionData.cpp
  )

set(iotvideo_include
    include/tencentcloud/iotvideo
  )

add_library(iotvideo ${LIB_TYPE}
  ${iotvideo_public_header}
  ${iotvideo_public_header_model}
  ${iotvideo_src})

set_target_properties(iotvideo
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iotvideo
  )

target_include_directories(iotvideo
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iotvideo
  core)

#install(FILES ${iotvideo_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotvideo/v20191126)
#install(FILES ${iotvideo_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iotvideo/v20191126/model)
install(DIRECTORY ${iotvideo_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iotvideo
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

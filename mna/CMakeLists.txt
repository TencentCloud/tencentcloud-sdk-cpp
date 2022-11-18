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

set(mna_public_header
  include/tencentcloud/mna/v20210119/MnaClient.h
  )

set(mna_public_header_model
  include/tencentcloud/mna/v20210119/model/GetDeviceResponse.h
  include/tencentcloud/mna/v20210119/model/GetFlowStatisticResponse.h
  include/tencentcloud/mna/v20210119/model/Capacity.h
  include/tencentcloud/mna/v20210119/model/GetFlowStatisticRequest.h
  include/tencentcloud/mna/v20210119/model/DestAddressInfo.h
  include/tencentcloud/mna/v20210119/model/DeleteQosRequest.h
  include/tencentcloud/mna/v20210119/model/DeviceNetInfo.h
  include/tencentcloud/mna/v20210119/model/NetDetails.h
  include/tencentcloud/mna/v20210119/model/SrcAddressInfo.h
  include/tencentcloud/mna/v20210119/model/UpdateNetInfo.h
  include/tencentcloud/mna/v20210119/model/CreateQosResponse.h
  include/tencentcloud/mna/v20210119/model/DescribeQosResponse.h
  include/tencentcloud/mna/v20210119/model/CreateEncryptedKeyRequest.h
  include/tencentcloud/mna/v20210119/model/DeleteDeviceRequest.h
  include/tencentcloud/mna/v20210119/model/CreateEncryptedKeyResponse.h
  include/tencentcloud/mna/v20210119/model/UpdateDeviceResponse.h
  include/tencentcloud/mna/v20210119/model/DeviceDetails.h
  include/tencentcloud/mna/v20210119/model/CreateQosRequest.h
  include/tencentcloud/mna/v20210119/model/GetStatisticDataRequest.h
  include/tencentcloud/mna/v20210119/model/UpdateDeviceRequest.h
  include/tencentcloud/mna/v20210119/model/GetPublicKeyResponse.h
  include/tencentcloud/mna/v20210119/model/DeviceBaseInfo.h
  include/tencentcloud/mna/v20210119/model/ExpectedThreshold.h
  include/tencentcloud/mna/v20210119/model/DeleteQosResponse.h
  include/tencentcloud/mna/v20210119/model/Context.h
  include/tencentcloud/mna/v20210119/model/AddDeviceResponse.h
  include/tencentcloud/mna/v20210119/model/GetDeviceRequest.h
  include/tencentcloud/mna/v20210119/model/GetDevicesResponse.h
  include/tencentcloud/mna/v20210119/model/DescribeQosRequest.h
  include/tencentcloud/mna/v20210119/model/NetworkData.h
  include/tencentcloud/mna/v20210119/model/DeleteDeviceResponse.h
  include/tencentcloud/mna/v20210119/model/GetStatisticDataResponse.h
  include/tencentcloud/mna/v20210119/model/DeviceInfo.h
  include/tencentcloud/mna/v20210119/model/GetDevicesRequest.h
  include/tencentcloud/mna/v20210119/model/AddDeviceRequest.h
  include/tencentcloud/mna/v20210119/model/GetPublicKeyRequest.h
  )

set(mna_src
  src/v20210119/MnaClient.cpp
  src/v20210119/model/GetDeviceResponse.cpp
  src/v20210119/model/GetFlowStatisticResponse.cpp
  src/v20210119/model/Capacity.cpp
  src/v20210119/model/GetFlowStatisticRequest.cpp
  src/v20210119/model/DestAddressInfo.cpp
  src/v20210119/model/DeleteQosRequest.cpp
  src/v20210119/model/DeviceNetInfo.cpp
  src/v20210119/model/NetDetails.cpp
  src/v20210119/model/SrcAddressInfo.cpp
  src/v20210119/model/UpdateNetInfo.cpp
  src/v20210119/model/CreateQosResponse.cpp
  src/v20210119/model/DescribeQosResponse.cpp
  src/v20210119/model/CreateEncryptedKeyRequest.cpp
  src/v20210119/model/DeleteDeviceRequest.cpp
  src/v20210119/model/CreateEncryptedKeyResponse.cpp
  src/v20210119/model/UpdateDeviceResponse.cpp
  src/v20210119/model/DeviceDetails.cpp
  src/v20210119/model/CreateQosRequest.cpp
  src/v20210119/model/GetStatisticDataRequest.cpp
  src/v20210119/model/UpdateDeviceRequest.cpp
  src/v20210119/model/GetPublicKeyResponse.cpp
  src/v20210119/model/DeviceBaseInfo.cpp
  src/v20210119/model/ExpectedThreshold.cpp
  src/v20210119/model/DeleteQosResponse.cpp
  src/v20210119/model/Context.cpp
  src/v20210119/model/AddDeviceResponse.cpp
  src/v20210119/model/GetDeviceRequest.cpp
  src/v20210119/model/GetDevicesResponse.cpp
  src/v20210119/model/DescribeQosRequest.cpp
  src/v20210119/model/NetworkData.cpp
  src/v20210119/model/DeleteDeviceResponse.cpp
  src/v20210119/model/GetStatisticDataResponse.cpp
  src/v20210119/model/DeviceInfo.cpp
  src/v20210119/model/GetDevicesRequest.cpp
  src/v20210119/model/AddDeviceRequest.cpp
  src/v20210119/model/GetPublicKeyRequest.cpp
  )

set(mna_include
    include/tencentcloud/mna
  )

add_library(mna ${LIB_TYPE}
  ${mna_public_header}
  ${mna_public_header_model}
  ${mna_src})

set_target_properties(mna
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mna
  )

target_include_directories(mna
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mna
  core)

#install(FILES ${mna_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mna/v20210119)
#install(FILES ${mna_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mna/v20210119/model)
install(DIRECTORY ${mna_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mna
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

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
  include/tencentcloud/mna/v20210119/model/DeleteL3ConnResponse.h
  include/tencentcloud/mna/v20210119/model/GetDeviceResponse.h
  include/tencentcloud/mna/v20210119/model/GetMultiFlowStatisticResponse.h
  include/tencentcloud/mna/v20210119/model/FlowDetails.h
  include/tencentcloud/mna/v20210119/model/UpdateL3ConnResponse.h
  include/tencentcloud/mna/v20210119/model/UpdateHardwareResponse.h
  include/tencentcloud/mna/v20210119/model/UpdateNetInfo.h
  include/tencentcloud/mna/v20210119/model/UpdateL3SwitchRequest.h
  include/tencentcloud/mna/v20210119/model/AddL3ConnRequest.h
  include/tencentcloud/mna/v20210119/model/OrderPerLicenseResponse.h
  include/tencentcloud/mna/v20210119/model/GetFlowPackagesRequest.h
  include/tencentcloud/mna/v20210119/model/SetNotifyUrlResponse.h
  include/tencentcloud/mna/v20210119/model/UpdateL3CidrResponse.h
  include/tencentcloud/mna/v20210119/model/ModifyPackageRenewFlagRequest.h
  include/tencentcloud/mna/v20210119/model/GetFlowPackagesResponse.h
  include/tencentcloud/mna/v20210119/model/DeleteL3ConnRequest.h
  include/tencentcloud/mna/v20210119/model/GetVendorHardwareResponse.h
  include/tencentcloud/mna/v20210119/model/GetActiveDeviceCountResponse.h
  include/tencentcloud/mna/v20210119/model/DeviceBaseInfo.h
  include/tencentcloud/mna/v20210119/model/AddGroupRequest.h
  include/tencentcloud/mna/v20210119/model/GetGroupListRequest.h
  include/tencentcloud/mna/v20210119/model/HardwareInfo.h
  include/tencentcloud/mna/v20210119/model/GetGroupDetailRequest.h
  include/tencentcloud/mna/v20210119/model/GroupDeleteDeviceResponse.h
  include/tencentcloud/mna/v20210119/model/GroupAddDeviceRequest.h
  include/tencentcloud/mna/v20210119/model/GetStatisticDataResponse.h
  include/tencentcloud/mna/v20210119/model/GetPublicKeyRequest.h
  include/tencentcloud/mna/v20210119/model/GetFlowStatisticByGroupResponse.h
  include/tencentcloud/mna/v20210119/model/GetNetMonitorResponse.h
  include/tencentcloud/mna/v20210119/model/GetFlowStatisticByRegionRequest.h
  include/tencentcloud/mna/v20210119/model/GetFlowAlarmInfoRequest.h
  include/tencentcloud/mna/v20210119/model/GetVendorHardwareRequest.h
  include/tencentcloud/mna/v20210119/model/CreateEncryptedKeyRequest.h
  include/tencentcloud/mna/v20210119/model/DeleteDeviceRequest.h
  include/tencentcloud/mna/v20210119/model/DeleteGroupRequest.h
  include/tencentcloud/mna/v20210119/model/CreateEncryptedKeyResponse.h
  include/tencentcloud/mna/v20210119/model/UpdateL3SwitchResponse.h
  include/tencentcloud/mna/v20210119/model/GetL3ConnListResponse.h
  include/tencentcloud/mna/v20210119/model/GroupInfo.h
  include/tencentcloud/mna/v20210119/model/ModifyPackageRenewFlagResponse.h
  include/tencentcloud/mna/v20210119/model/VendorHardware.h
  include/tencentcloud/mna/v20210119/model/GetDeviceRequest.h
  include/tencentcloud/mna/v20210119/model/ActivateHardwareResponse.h
  include/tencentcloud/mna/v20210119/model/GetFlowStatisticByGroupRequest.h
  include/tencentcloud/mna/v20210119/model/GetDevicesResponse.h
  include/tencentcloud/mna/v20210119/model/AddL3ConnResponse.h
  include/tencentcloud/mna/v20210119/model/GetDevicesRequest.h
  include/tencentcloud/mna/v20210119/model/SetNotifyUrlRequest.h
  include/tencentcloud/mna/v20210119/model/GetDevicePayModeRequest.h
  include/tencentcloud/mna/v20210119/model/SlotNetInfo.h
  include/tencentcloud/mna/v20210119/model/DeviceNetInfo.h
  include/tencentcloud/mna/v20210119/model/NetDetails.h
  include/tencentcloud/mna/v20210119/model/ActivateHardware.h
  include/tencentcloud/mna/v20210119/model/DownloadActiveDeviceCountResponse.h
  include/tencentcloud/mna/v20210119/model/GetHardwareListRequest.h
  include/tencentcloud/mna/v20210119/model/GroupDeleteDeviceRequest.h
  include/tencentcloud/mna/v20210119/model/DeviceDetails.h
  include/tencentcloud/mna/v20210119/model/GetFlowStatisticByRegionResponse.h
  include/tencentcloud/mna/v20210119/model/ActiveDeviceList.h
  include/tencentcloud/mna/v20210119/model/GetMultiFlowStatisticRequest.h
  include/tencentcloud/mna/v20210119/model/GetFlowAlarmInfoResponse.h
  include/tencentcloud/mna/v20210119/model/OrderFlowPackageRequest.h
  include/tencentcloud/mna/v20210119/model/GetGroupDetailResponse.h
  include/tencentcloud/mna/v20210119/model/UpdateGroupResponse.h
  include/tencentcloud/mna/v20210119/model/GetL3ConnListRequest.h
  include/tencentcloud/mna/v20210119/model/FlowPackageInfo.h
  include/tencentcloud/mna/v20210119/model/DownloadActiveDeviceCountRequest.h
  include/tencentcloud/mna/v20210119/model/GetHardwareListResponse.h
  include/tencentcloud/mna/v20210119/model/AddDeviceRequest.h
  include/tencentcloud/mna/v20210119/model/OrderPerLicenseRequest.h
  include/tencentcloud/mna/v20210119/model/UpdateGroupRequest.h
  include/tencentcloud/mna/v20210119/model/GetFlowStatisticResponse.h
  include/tencentcloud/mna/v20210119/model/UpdateHardwareRequest.h
  include/tencentcloud/mna/v20210119/model/GetNetMonitorRequest.h
  include/tencentcloud/mna/v20210119/model/GetGroupListResponse.h
  include/tencentcloud/mna/v20210119/model/OrderFlowPackageResponse.h
  include/tencentcloud/mna/v20210119/model/UpdateDeviceResponse.h
  include/tencentcloud/mna/v20210119/model/L3ConnInfo.h
  include/tencentcloud/mna/v20210119/model/ActivateHardwareRequest.h
  include/tencentcloud/mna/v20210119/model/GroupAddDeviceResponse.h
  include/tencentcloud/mna/v20210119/model/GetStatisticDataRequest.h
  include/tencentcloud/mna/v20210119/model/UpdateDeviceRequest.h
  include/tencentcloud/mna/v20210119/model/DeleteGroupResponse.h
  include/tencentcloud/mna/v20210119/model/GetPublicKeyResponse.h
  include/tencentcloud/mna/v20210119/model/AddHardwareResponse.h
  include/tencentcloud/mna/v20210119/model/GetFlowStatisticRequest.h
  include/tencentcloud/mna/v20210119/model/AddDeviceResponse.h
  include/tencentcloud/mna/v20210119/model/GetDevicePayModeResponse.h
  include/tencentcloud/mna/v20210119/model/GetActiveDeviceCountRequest.h
  include/tencentcloud/mna/v20210119/model/UpdateL3ConnRequest.h
  include/tencentcloud/mna/v20210119/model/DevicePayModeInfo.h
  include/tencentcloud/mna/v20210119/model/MonitorData.h
  include/tencentcloud/mna/v20210119/model/DeleteDeviceResponse.h
  include/tencentcloud/mna/v20210119/model/AddHardwareRequest.h
  include/tencentcloud/mna/v20210119/model/Hardware.h
  include/tencentcloud/mna/v20210119/model/UpdateL3CidrRequest.h
  include/tencentcloud/mna/v20210119/model/AddGroupResponse.h
  )

set(mna_src
  src/v20210119/MnaClient.cpp
  src/v20210119/model/DeleteL3ConnResponse.cpp
  src/v20210119/model/GetDeviceResponse.cpp
  src/v20210119/model/GetMultiFlowStatisticResponse.cpp
  src/v20210119/model/FlowDetails.cpp
  src/v20210119/model/UpdateL3ConnResponse.cpp
  src/v20210119/model/UpdateHardwareResponse.cpp
  src/v20210119/model/UpdateNetInfo.cpp
  src/v20210119/model/UpdateL3SwitchRequest.cpp
  src/v20210119/model/AddL3ConnRequest.cpp
  src/v20210119/model/OrderPerLicenseResponse.cpp
  src/v20210119/model/GetFlowPackagesRequest.cpp
  src/v20210119/model/SetNotifyUrlResponse.cpp
  src/v20210119/model/UpdateL3CidrResponse.cpp
  src/v20210119/model/ModifyPackageRenewFlagRequest.cpp
  src/v20210119/model/GetFlowPackagesResponse.cpp
  src/v20210119/model/DeleteL3ConnRequest.cpp
  src/v20210119/model/GetVendorHardwareResponse.cpp
  src/v20210119/model/GetActiveDeviceCountResponse.cpp
  src/v20210119/model/DeviceBaseInfo.cpp
  src/v20210119/model/AddGroupRequest.cpp
  src/v20210119/model/GetGroupListRequest.cpp
  src/v20210119/model/HardwareInfo.cpp
  src/v20210119/model/GetGroupDetailRequest.cpp
  src/v20210119/model/GroupDeleteDeviceResponse.cpp
  src/v20210119/model/GroupAddDeviceRequest.cpp
  src/v20210119/model/GetStatisticDataResponse.cpp
  src/v20210119/model/GetPublicKeyRequest.cpp
  src/v20210119/model/GetFlowStatisticByGroupResponse.cpp
  src/v20210119/model/GetNetMonitorResponse.cpp
  src/v20210119/model/GetFlowStatisticByRegionRequest.cpp
  src/v20210119/model/GetFlowAlarmInfoRequest.cpp
  src/v20210119/model/GetVendorHardwareRequest.cpp
  src/v20210119/model/CreateEncryptedKeyRequest.cpp
  src/v20210119/model/DeleteDeviceRequest.cpp
  src/v20210119/model/DeleteGroupRequest.cpp
  src/v20210119/model/CreateEncryptedKeyResponse.cpp
  src/v20210119/model/UpdateL3SwitchResponse.cpp
  src/v20210119/model/GetL3ConnListResponse.cpp
  src/v20210119/model/GroupInfo.cpp
  src/v20210119/model/ModifyPackageRenewFlagResponse.cpp
  src/v20210119/model/VendorHardware.cpp
  src/v20210119/model/GetDeviceRequest.cpp
  src/v20210119/model/ActivateHardwareResponse.cpp
  src/v20210119/model/GetFlowStatisticByGroupRequest.cpp
  src/v20210119/model/GetDevicesResponse.cpp
  src/v20210119/model/AddL3ConnResponse.cpp
  src/v20210119/model/GetDevicesRequest.cpp
  src/v20210119/model/SetNotifyUrlRequest.cpp
  src/v20210119/model/GetDevicePayModeRequest.cpp
  src/v20210119/model/SlotNetInfo.cpp
  src/v20210119/model/DeviceNetInfo.cpp
  src/v20210119/model/NetDetails.cpp
  src/v20210119/model/ActivateHardware.cpp
  src/v20210119/model/DownloadActiveDeviceCountResponse.cpp
  src/v20210119/model/GetHardwareListRequest.cpp
  src/v20210119/model/GroupDeleteDeviceRequest.cpp
  src/v20210119/model/DeviceDetails.cpp
  src/v20210119/model/GetFlowStatisticByRegionResponse.cpp
  src/v20210119/model/ActiveDeviceList.cpp
  src/v20210119/model/GetMultiFlowStatisticRequest.cpp
  src/v20210119/model/GetFlowAlarmInfoResponse.cpp
  src/v20210119/model/OrderFlowPackageRequest.cpp
  src/v20210119/model/GetGroupDetailResponse.cpp
  src/v20210119/model/UpdateGroupResponse.cpp
  src/v20210119/model/GetL3ConnListRequest.cpp
  src/v20210119/model/FlowPackageInfo.cpp
  src/v20210119/model/DownloadActiveDeviceCountRequest.cpp
  src/v20210119/model/GetHardwareListResponse.cpp
  src/v20210119/model/AddDeviceRequest.cpp
  src/v20210119/model/OrderPerLicenseRequest.cpp
  src/v20210119/model/UpdateGroupRequest.cpp
  src/v20210119/model/GetFlowStatisticResponse.cpp
  src/v20210119/model/UpdateHardwareRequest.cpp
  src/v20210119/model/GetNetMonitorRequest.cpp
  src/v20210119/model/GetGroupListResponse.cpp
  src/v20210119/model/OrderFlowPackageResponse.cpp
  src/v20210119/model/UpdateDeviceResponse.cpp
  src/v20210119/model/L3ConnInfo.cpp
  src/v20210119/model/ActivateHardwareRequest.cpp
  src/v20210119/model/GroupAddDeviceResponse.cpp
  src/v20210119/model/GetStatisticDataRequest.cpp
  src/v20210119/model/UpdateDeviceRequest.cpp
  src/v20210119/model/DeleteGroupResponse.cpp
  src/v20210119/model/GetPublicKeyResponse.cpp
  src/v20210119/model/AddHardwareResponse.cpp
  src/v20210119/model/GetFlowStatisticRequest.cpp
  src/v20210119/model/AddDeviceResponse.cpp
  src/v20210119/model/GetDevicePayModeResponse.cpp
  src/v20210119/model/GetActiveDeviceCountRequest.cpp
  src/v20210119/model/UpdateL3ConnRequest.cpp
  src/v20210119/model/DevicePayModeInfo.cpp
  src/v20210119/model/MonitorData.cpp
  src/v20210119/model/DeleteDeviceResponse.cpp
  src/v20210119/model/AddHardwareRequest.cpp
  src/v20210119/model/Hardware.cpp
  src/v20210119/model/UpdateL3CidrRequest.cpp
  src/v20210119/model/AddGroupResponse.cpp
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

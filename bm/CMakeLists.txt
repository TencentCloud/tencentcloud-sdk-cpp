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

set(bm_public_header
  include/tencentcloud/bm/v20180423/BmClient.h
  )

set(bm_public_header_model
  include/tencentcloud/bm/v20180423/model/DescribeUserCmdTasksResponse.h
  include/tencentcloud/bm/v20180423/model/RunUserCmdRequest.h
  include/tencentcloud/bm/v20180423/model/CreatePsaRegulationRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeDeviceInventoryResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeOsInfoResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeOsInfoRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeTaskOperationLogResponse.h
  include/tencentcloud/bm/v20180423/model/CreateCustomImageRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeCustomImagesRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeUserCmdTaskInfoResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeDevicesResponse.h
  include/tencentcloud/bm/v20180423/model/ModifyLanIpRequest.h
  include/tencentcloud/bm/v20180423/model/DeviceClass.h
  include/tencentcloud/bm/v20180423/model/DescribeRepairTaskConstantRequest.h
  include/tencentcloud/bm/v20180423/model/DeletePsaRegulationRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeCustomImageProcessRequest.h
  include/tencentcloud/bm/v20180423/model/CpuInfo.h
  include/tencentcloud/bm/v20180423/model/CustomImage.h
  include/tencentcloud/bm/v20180423/model/ModifyDeviceAutoRenewFlagRequest.h
  include/tencentcloud/bm/v20180423/model/StartDevicesResponse.h
  include/tencentcloud/bm/v20180423/model/BindPsaTagRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeRegionsResponse.h
  include/tencentcloud/bm/v20180423/model/DevicePartition.h
  include/tencentcloud/bm/v20180423/model/OfflineDevicesResponse.h
  include/tencentcloud/bm/v20180423/model/ModifyPsaRegulationRequest.h
  include/tencentcloud/bm/v20180423/model/RecoverDevicesRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeDeviceClassPartitionRequest.h
  include/tencentcloud/bm/v20180423/model/ZoneInfo.h
  include/tencentcloud/bm/v20180423/model/CreateSpotDeviceResponse.h
  include/tencentcloud/bm/v20180423/model/BuyDevicesRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeHardwareSpecificationRequest.h
  include/tencentcloud/bm/v20180423/model/Tag.h
  include/tencentcloud/bm/v20180423/model/CreateCustomImageResponse.h
  include/tencentcloud/bm/v20180423/model/HostedDeviceOutBandInfo.h
  include/tencentcloud/bm/v20180423/model/ReturnDevicesRequest.h
  include/tencentcloud/bm/v20180423/model/ModifyDeviceAliasesResponse.h
  include/tencentcloud/bm/v20180423/model/PsaRegulation.h
  include/tencentcloud/bm/v20180423/model/DescribeDevicePartitionResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeHostedDeviceOutBandInfoRequest.h
  include/tencentcloud/bm/v20180423/model/RebootDevicesResponse.h
  include/tencentcloud/bm/v20180423/model/ResetDevicePasswordRequest.h
  include/tencentcloud/bm/v20180423/model/SubtaskStatus.h
  include/tencentcloud/bm/v20180423/model/DescribeDeviceInventoryRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeCustomImagesResponse.h
  include/tencentcloud/bm/v20180423/model/DeviceAlias.h
  include/tencentcloud/bm/v20180423/model/DeleteCustomImagesRequest.h
  include/tencentcloud/bm/v20180423/model/PartitionInfo.h
  include/tencentcloud/bm/v20180423/model/DescribeDevicePositionRequest.h
  include/tencentcloud/bm/v20180423/model/UserCmdTaskInfo.h
  include/tencentcloud/bm/v20180423/model/ShutdownDevicesResponse.h
  include/tencentcloud/bm/v20180423/model/TaskType.h
  include/tencentcloud/bm/v20180423/model/DeleteUserCmdsRequest.h
  include/tencentcloud/bm/v20180423/model/DeviceDiskSizeInfo.h
  include/tencentcloud/bm/v20180423/model/AttachCamRoleRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeDeviceClassResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeDeviceHardwareInfoResponse.h
  include/tencentcloud/bm/v20180423/model/ModifyUserCmdRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeDevicePriceInfoResponse.h
  include/tencentcloud/bm/v20180423/model/ReloadDeviceOsResponse.h
  include/tencentcloud/bm/v20180423/model/RunUserCmdResponse.h
  include/tencentcloud/bm/v20180423/model/ReloadDeviceOsRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeUserCmdsRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeTaskInfoRequest.h
  include/tencentcloud/bm/v20180423/model/RepairTaskControlResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeRegionsRequest.h
  include/tencentcloud/bm/v20180423/model/DescribePsaRegulationsRequest.h
  include/tencentcloud/bm/v20180423/model/UnbindPsaTagResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeDevicePriceInfoRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeDevicePartitionRequest.h
  include/tencentcloud/bm/v20180423/model/TaskInfo.h
  include/tencentcloud/bm/v20180423/model/ModifyPsaRegulationResponse.h
  include/tencentcloud/bm/v20180423/model/UserCmdTask.h
  include/tencentcloud/bm/v20180423/model/TaskOperationLog.h
  include/tencentcloud/bm/v20180423/model/FailedTaskInfo.h
  include/tencentcloud/bm/v20180423/model/DescribeDevicePositionResponse.h
  include/tencentcloud/bm/v20180423/model/DeleteUserCmdsResponse.h
  include/tencentcloud/bm/v20180423/model/ModifyDeviceAliasesRequest.h
  include/tencentcloud/bm/v20180423/model/ModifyPayModePre2PostResponse.h
  include/tencentcloud/bm/v20180423/model/SuccessTaskInfo.h
  include/tencentcloud/bm/v20180423/model/SetOutBandVpnAuthPasswordRequest.h
  include/tencentcloud/bm/v20180423/model/OfflineDevicesRequest.h
  include/tencentcloud/bm/v20180423/model/DeviceHardwareInfo.h
  include/tencentcloud/bm/v20180423/model/DiskInfo.h
  include/tencentcloud/bm/v20180423/model/SetOutBandVpnAuthPasswordResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeTaskInfoResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeUserCmdTaskInfoRequest.h
  include/tencentcloud/bm/v20180423/model/CreateUserCmdResponse.h
  include/tencentcloud/bm/v20180423/model/ModifyUserCmdResponse.h
  include/tencentcloud/bm/v20180423/model/ModifyPayModePre2PostRequest.h
  include/tencentcloud/bm/v20180423/model/DeviceOperationLog.h
  include/tencentcloud/bm/v20180423/model/DescribeRepairTaskConstantResponse.h
  include/tencentcloud/bm/v20180423/model/BuyDevicesResponse.h
  include/tencentcloud/bm/v20180423/model/ModifyLanIpResponse.h
  include/tencentcloud/bm/v20180423/model/DescribePsaRegulationsResponse.h
  include/tencentcloud/bm/v20180423/model/StartDevicesRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeUserCmdsResponse.h
  include/tencentcloud/bm/v20180423/model/ModifyDeviceAutoRenewFlagResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeOperationResultResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeDeviceClassRequest.h
  include/tencentcloud/bm/v20180423/model/ModifyCustomImageAttributeRequest.h
  include/tencentcloud/bm/v20180423/model/DeletePsaRegulationResponse.h
  include/tencentcloud/bm/v20180423/model/DeviceClassPartitionInfo.h
  include/tencentcloud/bm/v20180423/model/DescribeTaskOperationLogRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeDeviceOperationLogRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeOperationResultRequest.h
  include/tencentcloud/bm/v20180423/model/AttachCamRoleResponse.h
  include/tencentcloud/bm/v20180423/model/RecoverDevicesResponse.h
  include/tencentcloud/bm/v20180423/model/DetachCamRoleResponse.h
  include/tencentcloud/bm/v20180423/model/ShutdownDevicesRequest.h
  include/tencentcloud/bm/v20180423/model/UnbindPsaTagRequest.h
  include/tencentcloud/bm/v20180423/model/ModifyCustomImageAttributeResponse.h
  include/tencentcloud/bm/v20180423/model/RegionInfo.h
  include/tencentcloud/bm/v20180423/model/UserCmd.h
  include/tencentcloud/bm/v20180423/model/CustomImageProcess.h
  include/tencentcloud/bm/v20180423/model/CreateSpotDeviceRequest.h
  include/tencentcloud/bm/v20180423/model/OsInfo.h
  include/tencentcloud/bm/v20180423/model/CreateUserCmdRequest.h
  include/tencentcloud/bm/v20180423/model/ReturnDevicesResponse.h
  include/tencentcloud/bm/v20180423/model/BindPsaTagResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeHostedDeviceOutBandInfoResponse.h
  include/tencentcloud/bm/v20180423/model/DevicePriceInfo.h
  include/tencentcloud/bm/v20180423/model/RebootDevicesRequest.h
  include/tencentcloud/bm/v20180423/model/DeleteCustomImagesResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeDevicesRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeHardwareSpecificationResponse.h
  include/tencentcloud/bm/v20180423/model/CreatePsaRegulationResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeCustomImageProcessResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeDeviceHardwareInfoRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeDeviceOperationLogResponse.h
  include/tencentcloud/bm/v20180423/model/RepairTaskControlRequest.h
  include/tencentcloud/bm/v20180423/model/DevicePositionInfo.h
  include/tencentcloud/bm/v20180423/model/DeviceInfo.h
  include/tencentcloud/bm/v20180423/model/ResetDevicePasswordResponse.h
  include/tencentcloud/bm/v20180423/model/DescribeUserCmdTasksRequest.h
  include/tencentcloud/bm/v20180423/model/DetachCamRoleRequest.h
  include/tencentcloud/bm/v20180423/model/DescribeDeviceClassPartitionResponse.h
  )

set(bm_src
  src/v20180423/BmClient.cpp
  src/v20180423/model/DescribeUserCmdTasksResponse.cpp
  src/v20180423/model/RunUserCmdRequest.cpp
  src/v20180423/model/CreatePsaRegulationRequest.cpp
  src/v20180423/model/DescribeDeviceInventoryResponse.cpp
  src/v20180423/model/DescribeOsInfoResponse.cpp
  src/v20180423/model/DescribeOsInfoRequest.cpp
  src/v20180423/model/DescribeTaskOperationLogResponse.cpp
  src/v20180423/model/CreateCustomImageRequest.cpp
  src/v20180423/model/DescribeCustomImagesRequest.cpp
  src/v20180423/model/DescribeUserCmdTaskInfoResponse.cpp
  src/v20180423/model/DescribeDevicesResponse.cpp
  src/v20180423/model/ModifyLanIpRequest.cpp
  src/v20180423/model/DeviceClass.cpp
  src/v20180423/model/DescribeRepairTaskConstantRequest.cpp
  src/v20180423/model/DeletePsaRegulationRequest.cpp
  src/v20180423/model/DescribeCustomImageProcessRequest.cpp
  src/v20180423/model/CpuInfo.cpp
  src/v20180423/model/CustomImage.cpp
  src/v20180423/model/ModifyDeviceAutoRenewFlagRequest.cpp
  src/v20180423/model/StartDevicesResponse.cpp
  src/v20180423/model/BindPsaTagRequest.cpp
  src/v20180423/model/DescribeRegionsResponse.cpp
  src/v20180423/model/DevicePartition.cpp
  src/v20180423/model/OfflineDevicesResponse.cpp
  src/v20180423/model/ModifyPsaRegulationRequest.cpp
  src/v20180423/model/RecoverDevicesRequest.cpp
  src/v20180423/model/DescribeDeviceClassPartitionRequest.cpp
  src/v20180423/model/ZoneInfo.cpp
  src/v20180423/model/CreateSpotDeviceResponse.cpp
  src/v20180423/model/BuyDevicesRequest.cpp
  src/v20180423/model/DescribeHardwareSpecificationRequest.cpp
  src/v20180423/model/Tag.cpp
  src/v20180423/model/CreateCustomImageResponse.cpp
  src/v20180423/model/HostedDeviceOutBandInfo.cpp
  src/v20180423/model/ReturnDevicesRequest.cpp
  src/v20180423/model/ModifyDeviceAliasesResponse.cpp
  src/v20180423/model/PsaRegulation.cpp
  src/v20180423/model/DescribeDevicePartitionResponse.cpp
  src/v20180423/model/DescribeHostedDeviceOutBandInfoRequest.cpp
  src/v20180423/model/RebootDevicesResponse.cpp
  src/v20180423/model/ResetDevicePasswordRequest.cpp
  src/v20180423/model/SubtaskStatus.cpp
  src/v20180423/model/DescribeDeviceInventoryRequest.cpp
  src/v20180423/model/DescribeCustomImagesResponse.cpp
  src/v20180423/model/DeviceAlias.cpp
  src/v20180423/model/DeleteCustomImagesRequest.cpp
  src/v20180423/model/PartitionInfo.cpp
  src/v20180423/model/DescribeDevicePositionRequest.cpp
  src/v20180423/model/UserCmdTaskInfo.cpp
  src/v20180423/model/ShutdownDevicesResponse.cpp
  src/v20180423/model/TaskType.cpp
  src/v20180423/model/DeleteUserCmdsRequest.cpp
  src/v20180423/model/DeviceDiskSizeInfo.cpp
  src/v20180423/model/AttachCamRoleRequest.cpp
  src/v20180423/model/DescribeDeviceClassResponse.cpp
  src/v20180423/model/DescribeDeviceHardwareInfoResponse.cpp
  src/v20180423/model/ModifyUserCmdRequest.cpp
  src/v20180423/model/DescribeDevicePriceInfoResponse.cpp
  src/v20180423/model/ReloadDeviceOsResponse.cpp
  src/v20180423/model/RunUserCmdResponse.cpp
  src/v20180423/model/ReloadDeviceOsRequest.cpp
  src/v20180423/model/DescribeUserCmdsRequest.cpp
  src/v20180423/model/DescribeTaskInfoRequest.cpp
  src/v20180423/model/RepairTaskControlResponse.cpp
  src/v20180423/model/DescribeRegionsRequest.cpp
  src/v20180423/model/DescribePsaRegulationsRequest.cpp
  src/v20180423/model/UnbindPsaTagResponse.cpp
  src/v20180423/model/DescribeDevicePriceInfoRequest.cpp
  src/v20180423/model/DescribeDevicePartitionRequest.cpp
  src/v20180423/model/TaskInfo.cpp
  src/v20180423/model/ModifyPsaRegulationResponse.cpp
  src/v20180423/model/UserCmdTask.cpp
  src/v20180423/model/TaskOperationLog.cpp
  src/v20180423/model/FailedTaskInfo.cpp
  src/v20180423/model/DescribeDevicePositionResponse.cpp
  src/v20180423/model/DeleteUserCmdsResponse.cpp
  src/v20180423/model/ModifyDeviceAliasesRequest.cpp
  src/v20180423/model/ModifyPayModePre2PostResponse.cpp
  src/v20180423/model/SuccessTaskInfo.cpp
  src/v20180423/model/SetOutBandVpnAuthPasswordRequest.cpp
  src/v20180423/model/OfflineDevicesRequest.cpp
  src/v20180423/model/DeviceHardwareInfo.cpp
  src/v20180423/model/DiskInfo.cpp
  src/v20180423/model/SetOutBandVpnAuthPasswordResponse.cpp
  src/v20180423/model/DescribeTaskInfoResponse.cpp
  src/v20180423/model/DescribeUserCmdTaskInfoRequest.cpp
  src/v20180423/model/CreateUserCmdResponse.cpp
  src/v20180423/model/ModifyUserCmdResponse.cpp
  src/v20180423/model/ModifyPayModePre2PostRequest.cpp
  src/v20180423/model/DeviceOperationLog.cpp
  src/v20180423/model/DescribeRepairTaskConstantResponse.cpp
  src/v20180423/model/BuyDevicesResponse.cpp
  src/v20180423/model/ModifyLanIpResponse.cpp
  src/v20180423/model/DescribePsaRegulationsResponse.cpp
  src/v20180423/model/StartDevicesRequest.cpp
  src/v20180423/model/DescribeUserCmdsResponse.cpp
  src/v20180423/model/ModifyDeviceAutoRenewFlagResponse.cpp
  src/v20180423/model/DescribeOperationResultResponse.cpp
  src/v20180423/model/DescribeDeviceClassRequest.cpp
  src/v20180423/model/ModifyCustomImageAttributeRequest.cpp
  src/v20180423/model/DeletePsaRegulationResponse.cpp
  src/v20180423/model/DeviceClassPartitionInfo.cpp
  src/v20180423/model/DescribeTaskOperationLogRequest.cpp
  src/v20180423/model/DescribeDeviceOperationLogRequest.cpp
  src/v20180423/model/DescribeOperationResultRequest.cpp
  src/v20180423/model/AttachCamRoleResponse.cpp
  src/v20180423/model/RecoverDevicesResponse.cpp
  src/v20180423/model/DetachCamRoleResponse.cpp
  src/v20180423/model/ShutdownDevicesRequest.cpp
  src/v20180423/model/UnbindPsaTagRequest.cpp
  src/v20180423/model/ModifyCustomImageAttributeResponse.cpp
  src/v20180423/model/RegionInfo.cpp
  src/v20180423/model/UserCmd.cpp
  src/v20180423/model/CustomImageProcess.cpp
  src/v20180423/model/CreateSpotDeviceRequest.cpp
  src/v20180423/model/OsInfo.cpp
  src/v20180423/model/CreateUserCmdRequest.cpp
  src/v20180423/model/ReturnDevicesResponse.cpp
  src/v20180423/model/BindPsaTagResponse.cpp
  src/v20180423/model/DescribeHostedDeviceOutBandInfoResponse.cpp
  src/v20180423/model/DevicePriceInfo.cpp
  src/v20180423/model/RebootDevicesRequest.cpp
  src/v20180423/model/DeleteCustomImagesResponse.cpp
  src/v20180423/model/DescribeDevicesRequest.cpp
  src/v20180423/model/DescribeHardwareSpecificationResponse.cpp
  src/v20180423/model/CreatePsaRegulationResponse.cpp
  src/v20180423/model/DescribeCustomImageProcessResponse.cpp
  src/v20180423/model/DescribeDeviceHardwareInfoRequest.cpp
  src/v20180423/model/DescribeDeviceOperationLogResponse.cpp
  src/v20180423/model/RepairTaskControlRequest.cpp
  src/v20180423/model/DevicePositionInfo.cpp
  src/v20180423/model/DeviceInfo.cpp
  src/v20180423/model/ResetDevicePasswordResponse.cpp
  src/v20180423/model/DescribeUserCmdTasksRequest.cpp
  src/v20180423/model/DetachCamRoleRequest.cpp
  src/v20180423/model/DescribeDeviceClassPartitionResponse.cpp
  )

set(bm_include
    include/tencentcloud/bm
  )

add_library(bm ${LIB_TYPE}
  ${bm_public_header}
  ${bm_public_header_model}
  ${bm_src})

set_target_properties(bm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bm
  )

target_include_directories(bm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bm
  core)

#install(FILES ${bm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bm/v20180423)
#install(FILES ${bm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bm/v20180423/model)
install(DIRECTORY ${bm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

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

set(emr_public_header
  include/tencentcloud/emr/v20190103/EmrClient.h
  )

set(emr_public_header_model
  include/tencentcloud/emr/v20190103/model/ClusterSetting.h
  include/tencentcloud/emr/v20190103/model/PodSaleSpec.h
  include/tencentcloud/emr/v20190103/model/ScaleOutInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/PodVolume.h
  include/tencentcloud/emr/v20190103/model/SyncPodStateResponse.h
  include/tencentcloud/emr/v20190103/model/CreateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/TerminateTasksRequest.h
  include/tencentcloud/emr/v20190103/model/HostVolumeContext.h
  include/tencentcloud/emr/v20190103/model/Step.h
  include/tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsRequest.h
  include/tencentcloud/emr/v20190103/model/UserManagerFilter.h
  include/tencentcloud/emr/v20190103/model/MetaDbInfo.h
  include/tencentcloud/emr/v20190103/model/DiskSpec.h
  include/tencentcloud/emr/v20190103/model/COSSettings.h
  include/tencentcloud/emr/v20190103/model/ClusterInstancesInfo.h
  include/tencentcloud/emr/v20190103/model/ScaleOutInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/QuotaEntity.h
  include/tencentcloud/emr/v20190103/model/TopologyInfo.h
  include/tencentcloud/emr/v20190103/model/Tag.h
  include/tencentcloud/emr/v20190103/model/EmrListInstance.h
  include/tencentcloud/emr/v20190103/model/ModifyResourceScheduleConfigResponse.h
  include/tencentcloud/emr/v20190103/model/EmrProductConfigOutter.h
  include/tencentcloud/emr/v20190103/model/VPCSettings.h
  include/tencentcloud/emr/v20190103/model/DescribeInstancesListResponse.h
  include/tencentcloud/emr/v20190103/model/DescribeInstanceRenewNodesRequest.h
  include/tencentcloud/emr/v20190103/model/JobResult.h
  include/tencentcloud/emr/v20190103/model/PodSpec.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/DescribeJobFlowRequest.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/TerminateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/JobFlowResourceSpec.h
  include/tencentcloud/emr/v20190103/model/Configuration.h
  include/tencentcloud/emr/v20190103/model/DescribeResourceScheduleRequest.h
  include/tencentcloud/emr/v20190103/model/Placement.h
  include/tencentcloud/emr/v20190103/model/PodParameter.h
  include/tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerRequest.h
  include/tencentcloud/emr/v20190103/model/RenewInstancesInfo.h
  include/tencentcloud/emr/v20190103/model/RunJobFlowResponse.h
  include/tencentcloud/emr/v20190103/model/MultiDisk.h
  include/tencentcloud/emr/v20190103/model/SearchItem.h
  include/tencentcloud/emr/v20190103/model/MultiZoneSetting.h
  include/tencentcloud/emr/v20190103/model/TerminateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/NewResourceSpec.h
  include/tencentcloud/emr/v20190103/model/PersistentVolumeContext.h
  include/tencentcloud/emr/v20190103/model/DescribeResourceScheduleResponse.h
  include/tencentcloud/emr/v20190103/model/ModifyResourceSchedulerRequest.h
  include/tencentcloud/emr/v20190103/model/LoginSettings.h
  include/tencentcloud/emr/v20190103/model/RunJobFlowRequest.h
  include/tencentcloud/emr/v20190103/model/PriceResource.h
  include/tencentcloud/emr/v20190103/model/CustomServiceDefine.h
  include/tencentcloud/emr/v20190103/model/SubnetInfo.h
  include/tencentcloud/emr/v20190103/model/DescribeCvmQuotaResponse.h
  include/tencentcloud/emr/v20190103/model/BootstrapAction.h
  include/tencentcloud/emr/v20190103/model/DescribeCvmQuotaRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeClusterNodesRequest.h
  include/tencentcloud/emr/v20190103/model/SyncPodStateRequest.h
  include/tencentcloud/emr/v20190103/model/CreateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/Execution.h
  include/tencentcloud/emr/v20190103/model/UpdateInstanceSettings.h
  include/tencentcloud/emr/v20190103/model/DescribeInstancesRequest.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeInstancesListRequest.h
  include/tencentcloud/emr/v20190103/model/OutterResource.h
  include/tencentcloud/emr/v20190103/model/ModifyResourcePoolsResponse.h
  include/tencentcloud/emr/v20190103/model/TerminateTasksResponse.h
  include/tencentcloud/emr/v20190103/model/DescribeInstancesResponse.h
  include/tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerResponse.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/CdbInfo.h
  include/tencentcloud/emr/v20190103/model/InquirePriceRenewEmrResponse.h
  include/tencentcloud/emr/v20190103/model/MultiDiskMC.h
  include/tencentcloud/emr/v20190103/model/AddUsersForUserManagerRequest.h
  include/tencentcloud/emr/v20190103/model/CustomMetaInfo.h
  include/tencentcloud/emr/v20190103/model/ApplicationStatics.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeClusterNodesResponse.h
  include/tencentcloud/emr/v20190103/model/ModifyResourceScheduleConfigRequest.h
  include/tencentcloud/emr/v20190103/model/UserInfoForUserManager.h
  include/tencentcloud/emr/v20190103/model/DynamicPodSpec.h
  include/tencentcloud/emr/v20190103/model/PodState.h
  include/tencentcloud/emr/v20190103/model/ExternalService.h
  include/tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h
  include/tencentcloud/emr/v20190103/model/ClusterExternalServiceInfo.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceRequest.h
  include/tencentcloud/emr/v20190103/model/Resource.h
  include/tencentcloud/emr/v20190103/model/Filters.h
  include/tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsResponse.h
  include/tencentcloud/emr/v20190103/model/InquirePriceRenewEmrRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeInstanceRenewNodesResponse.h
  include/tencentcloud/emr/v20190103/model/UserManagerUserBriefInfo.h
  include/tencentcloud/emr/v20190103/model/DiskGroup.h
  include/tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceResponse.h
  include/tencentcloud/emr/v20190103/model/ModifyResourceSchedulerResponse.h
  include/tencentcloud/emr/v20190103/model/ShortNodeInfo.h
  include/tencentcloud/emr/v20190103/model/AddUsersForUserManagerResponse.h
  include/tencentcloud/emr/v20190103/model/NodeHardwareInfo.h
  include/tencentcloud/emr/v20190103/model/JobFlowResource.h
  include/tencentcloud/emr/v20190103/model/ModifyResourcePoolsRequest.h
  include/tencentcloud/emr/v20190103/model/DescribeJobFlowResponse.h
  include/tencentcloud/emr/v20190103/model/InstanceChargePrepaid.h
  )

set(emr_src
  src/v20190103/EmrClient.cpp
  src/v20190103/model/ClusterSetting.cpp
  src/v20190103/model/PodSaleSpec.cpp
  src/v20190103/model/ScaleOutInstanceResponse.cpp
  src/v20190103/model/PodVolume.cpp
  src/v20190103/model/SyncPodStateResponse.cpp
  src/v20190103/model/CreateInstanceResponse.cpp
  src/v20190103/model/TerminateTasksRequest.cpp
  src/v20190103/model/HostVolumeContext.cpp
  src/v20190103/model/Step.cpp
  src/v20190103/model/DescribeEmrApplicationStaticsRequest.cpp
  src/v20190103/model/UserManagerFilter.cpp
  src/v20190103/model/MetaDbInfo.cpp
  src/v20190103/model/DiskSpec.cpp
  src/v20190103/model/COSSettings.cpp
  src/v20190103/model/ClusterInstancesInfo.cpp
  src/v20190103/model/ScaleOutInstanceRequest.cpp
  src/v20190103/model/QuotaEntity.cpp
  src/v20190103/model/TopologyInfo.cpp
  src/v20190103/model/Tag.cpp
  src/v20190103/model/EmrListInstance.cpp
  src/v20190103/model/ModifyResourceScheduleConfigResponse.cpp
  src/v20190103/model/EmrProductConfigOutter.cpp
  src/v20190103/model/VPCSettings.cpp
  src/v20190103/model/DescribeInstancesListResponse.cpp
  src/v20190103/model/DescribeInstanceRenewNodesRequest.cpp
  src/v20190103/model/JobResult.cpp
  src/v20190103/model/PodSpec.cpp
  src/v20190103/model/InquiryPriceRenewInstanceResponse.cpp
  src/v20190103/model/DescribeJobFlowRequest.cpp
  src/v20190103/model/InquiryPriceCreateInstanceResponse.cpp
  src/v20190103/model/TerminateInstanceRequest.cpp
  src/v20190103/model/JobFlowResourceSpec.cpp
  src/v20190103/model/Configuration.cpp
  src/v20190103/model/DescribeResourceScheduleRequest.cpp
  src/v20190103/model/Placement.cpp
  src/v20190103/model/PodParameter.cpp
  src/v20190103/model/DescribeUsersForUserManagerRequest.cpp
  src/v20190103/model/RenewInstancesInfo.cpp
  src/v20190103/model/RunJobFlowResponse.cpp
  src/v20190103/model/MultiDisk.cpp
  src/v20190103/model/SearchItem.cpp
  src/v20190103/model/MultiZoneSetting.cpp
  src/v20190103/model/TerminateInstanceResponse.cpp
  src/v20190103/model/InquiryPriceUpdateInstanceResponse.cpp
  src/v20190103/model/NewResourceSpec.cpp
  src/v20190103/model/PersistentVolumeContext.cpp
  src/v20190103/model/DescribeResourceScheduleResponse.cpp
  src/v20190103/model/ModifyResourceSchedulerRequest.cpp
  src/v20190103/model/LoginSettings.cpp
  src/v20190103/model/RunJobFlowRequest.cpp
  src/v20190103/model/PriceResource.cpp
  src/v20190103/model/CustomServiceDefine.cpp
  src/v20190103/model/SubnetInfo.cpp
  src/v20190103/model/DescribeCvmQuotaResponse.cpp
  src/v20190103/model/BootstrapAction.cpp
  src/v20190103/model/DescribeCvmQuotaRequest.cpp
  src/v20190103/model/DescribeClusterNodesRequest.cpp
  src/v20190103/model/SyncPodStateRequest.cpp
  src/v20190103/model/CreateInstanceRequest.cpp
  src/v20190103/model/Execution.cpp
  src/v20190103/model/UpdateInstanceSettings.cpp
  src/v20190103/model/DescribeInstancesRequest.cpp
  src/v20190103/model/InquiryPriceUpdateInstanceRequest.cpp
  src/v20190103/model/DescribeInstancesListRequest.cpp
  src/v20190103/model/OutterResource.cpp
  src/v20190103/model/ModifyResourcePoolsResponse.cpp
  src/v20190103/model/TerminateTasksResponse.cpp
  src/v20190103/model/DescribeInstancesResponse.cpp
  src/v20190103/model/DescribeUsersForUserManagerResponse.cpp
  src/v20190103/model/InquiryPriceRenewInstanceRequest.cpp
  src/v20190103/model/CdbInfo.cpp
  src/v20190103/model/InquirePriceRenewEmrResponse.cpp
  src/v20190103/model/MultiDiskMC.cpp
  src/v20190103/model/AddUsersForUserManagerRequest.cpp
  src/v20190103/model/CustomMetaInfo.cpp
  src/v20190103/model/ApplicationStatics.cpp
  src/v20190103/model/InquiryPriceCreateInstanceRequest.cpp
  src/v20190103/model/DescribeClusterNodesResponse.cpp
  src/v20190103/model/ModifyResourceScheduleConfigRequest.cpp
  src/v20190103/model/UserInfoForUserManager.cpp
  src/v20190103/model/DynamicPodSpec.cpp
  src/v20190103/model/PodState.cpp
  src/v20190103/model/ExternalService.cpp
  src/v20190103/model/PreExecuteFileSettings.cpp
  src/v20190103/model/ClusterExternalServiceInfo.cpp
  src/v20190103/model/InquiryPriceScaleOutInstanceRequest.cpp
  src/v20190103/model/Resource.cpp
  src/v20190103/model/Filters.cpp
  src/v20190103/model/DescribeEmrApplicationStaticsResponse.cpp
  src/v20190103/model/InquirePriceRenewEmrRequest.cpp
  src/v20190103/model/DescribeInstanceRenewNodesResponse.cpp
  src/v20190103/model/UserManagerUserBriefInfo.cpp
  src/v20190103/model/DiskGroup.cpp
  src/v20190103/model/InquiryPriceScaleOutInstanceResponse.cpp
  src/v20190103/model/ModifyResourceSchedulerResponse.cpp
  src/v20190103/model/ShortNodeInfo.cpp
  src/v20190103/model/AddUsersForUserManagerResponse.cpp
  src/v20190103/model/NodeHardwareInfo.cpp
  src/v20190103/model/JobFlowResource.cpp
  src/v20190103/model/ModifyResourcePoolsRequest.cpp
  src/v20190103/model/DescribeJobFlowResponse.cpp
  src/v20190103/model/InstanceChargePrepaid.cpp
  )

set(emr_include
    include/tencentcloud/emr
  )

add_library(emr ${LIB_TYPE}
  ${emr_public_header}
  ${emr_public_header_model}
  ${emr_src})

set_target_properties(emr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}emr
  )

target_include_directories(emr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(emr
  core)

#install(FILES ${emr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/emr/v20190103)
#install(FILES ${emr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/emr/v20190103/model)
install(DIRECTORY ${emr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS emr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

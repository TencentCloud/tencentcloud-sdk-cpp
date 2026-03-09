#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(cetcd_public_header
  include/tencentcloud/cetcd/v20220325/CetcdClient.h
  )

set(cetcd_public_header_model
  include/tencentcloud/cetcd/v20220325/model/DescribeRPCMethodListRequest.h
  include/tencentcloud/cetcd/v20220325/model/ResizeEtcdInstanceRequest.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdRegionsRequest.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdInstancesResponse.h
  include/tencentcloud/cetcd/v20220325/model/DisableEtcdInstanceDeletionProtectionResponse.h
  include/tencentcloud/cetcd/v20220325/model/ResizeEtcdInstanceResponse.h
  include/tencentcloud/cetcd/v20220325/model/RegionInstance.h
  include/tencentcloud/cetcd/v20220325/model/ModifyEtcdSnapshotPolicyRequest.h
  include/tencentcloud/cetcd/v20220325/model/TaskStepInfo.h
  include/tencentcloud/cetcd/v20220325/model/ModifyEtcdConfigurationResponse.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdSnapshotsRequest.h
  include/tencentcloud/cetcd/v20220325/model/CreateEtcdSnapshotPolicyResponse.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdSnapshotPoliciesResponse.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdAvailableVersionsRequest.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdInstancesRequest.h
  include/tencentcloud/cetcd/v20220325/model/PrometheusCreationParam.h
  include/tencentcloud/cetcd/v20220325/model/DescribeRPCMethodListResponse.h
  include/tencentcloud/cetcd/v20220325/model/CreateEtcdSnapshotResponse.h
  include/tencentcloud/cetcd/v20220325/model/EtcdSnapshot.h
  include/tencentcloud/cetcd/v20220325/model/ChargePrepaidConfig.h
  include/tencentcloud/cetcd/v20220325/model/Etcd.h
  include/tencentcloud/cetcd/v20220325/model/EnableEtcdInstanceDeletionProtectionRequest.h
  include/tencentcloud/cetcd/v20220325/model/EtcdAutoCompactionSettings.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdSnapshotPoliciesRequest.h
  include/tencentcloud/cetcd/v20220325/model/ModifyEtcdAttributeResponse.h
  include/tencentcloud/cetcd/v20220325/model/VersionInstance.h
  include/tencentcloud/cetcd/v20220325/model/EtcdSecuritySettings.h
  include/tencentcloud/cetcd/v20220325/model/EtcdMonitorSettings.h
  include/tencentcloud/cetcd/v20220325/model/EtcdAdvancedSettings.h
  include/tencentcloud/cetcd/v20220325/model/EtcdMember.h
  include/tencentcloud/cetcd/v20220325/model/ModifyEtcdConfigurationRequest.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdAvailableVersionsResponse.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdCreatingProgressRequest.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdTasksRequest.h
  include/tencentcloud/cetcd/v20220325/model/EnableEtcdInstanceDeletionProtectionResponse.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdTasksResponse.h
  include/tencentcloud/cetcd/v20220325/model/ModifyEtcdSnapshotPolicyResponse.h
  include/tencentcloud/cetcd/v20220325/model/RPCMethod.h
  include/tencentcloud/cetcd/v20220325/model/Filter.h
  include/tencentcloud/cetcd/v20220325/model/CreateEtcdInstanceResponse.h
  include/tencentcloud/cetcd/v20220325/model/UpgradeEtcdInstanceResponse.h
  include/tencentcloud/cetcd/v20220325/model/CreateEtcdSnapshotPolicyRequest.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdCredentialsRequest.h
  include/tencentcloud/cetcd/v20220325/model/DisableEtcdInstanceDeletionProtectionRequest.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdRegionsResponse.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdCreatingProgressResponse.h
  include/tencentcloud/cetcd/v20220325/model/InstanceConfig.h
  include/tencentcloud/cetcd/v20220325/model/EtcdCredential.h
  include/tencentcloud/cetcd/v20220325/model/UpgradeEtcdInstanceRequest.h
  include/tencentcloud/cetcd/v20220325/model/EtcdSnapshotPolicy.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdQuotaRequest.h
  include/tencentcloud/cetcd/v20220325/model/CreateEtcdInstanceRequest.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdSnapshotsResponse.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdCredentialsResponse.h
  include/tencentcloud/cetcd/v20220325/model/ModifyEtcdAttributeRequest.h
  include/tencentcloud/cetcd/v20220325/model/CreateEtcdSnapshotRequest.h
  include/tencentcloud/cetcd/v20220325/model/EtcdTaskInfo.h
  include/tencentcloud/cetcd/v20220325/model/DescribeEtcdQuotaResponse.h
  include/tencentcloud/cetcd/v20220325/model/EtcdBackupSettings.h
  )

set(cetcd_src
  src/v20220325/CetcdClient.cpp
  src/v20220325/model/DescribeRPCMethodListRequest.cpp
  src/v20220325/model/ResizeEtcdInstanceRequest.cpp
  src/v20220325/model/DescribeEtcdRegionsRequest.cpp
  src/v20220325/model/DescribeEtcdInstancesResponse.cpp
  src/v20220325/model/DisableEtcdInstanceDeletionProtectionResponse.cpp
  src/v20220325/model/ResizeEtcdInstanceResponse.cpp
  src/v20220325/model/RegionInstance.cpp
  src/v20220325/model/ModifyEtcdSnapshotPolicyRequest.cpp
  src/v20220325/model/TaskStepInfo.cpp
  src/v20220325/model/ModifyEtcdConfigurationResponse.cpp
  src/v20220325/model/DescribeEtcdSnapshotsRequest.cpp
  src/v20220325/model/CreateEtcdSnapshotPolicyResponse.cpp
  src/v20220325/model/DescribeEtcdSnapshotPoliciesResponse.cpp
  src/v20220325/model/DescribeEtcdAvailableVersionsRequest.cpp
  src/v20220325/model/DescribeEtcdInstancesRequest.cpp
  src/v20220325/model/PrometheusCreationParam.cpp
  src/v20220325/model/DescribeRPCMethodListResponse.cpp
  src/v20220325/model/CreateEtcdSnapshotResponse.cpp
  src/v20220325/model/EtcdSnapshot.cpp
  src/v20220325/model/ChargePrepaidConfig.cpp
  src/v20220325/model/Etcd.cpp
  src/v20220325/model/EnableEtcdInstanceDeletionProtectionRequest.cpp
  src/v20220325/model/EtcdAutoCompactionSettings.cpp
  src/v20220325/model/DescribeEtcdSnapshotPoliciesRequest.cpp
  src/v20220325/model/ModifyEtcdAttributeResponse.cpp
  src/v20220325/model/VersionInstance.cpp
  src/v20220325/model/EtcdSecuritySettings.cpp
  src/v20220325/model/EtcdMonitorSettings.cpp
  src/v20220325/model/EtcdAdvancedSettings.cpp
  src/v20220325/model/EtcdMember.cpp
  src/v20220325/model/ModifyEtcdConfigurationRequest.cpp
  src/v20220325/model/DescribeEtcdAvailableVersionsResponse.cpp
  src/v20220325/model/DescribeEtcdCreatingProgressRequest.cpp
  src/v20220325/model/DescribeEtcdTasksRequest.cpp
  src/v20220325/model/EnableEtcdInstanceDeletionProtectionResponse.cpp
  src/v20220325/model/DescribeEtcdTasksResponse.cpp
  src/v20220325/model/ModifyEtcdSnapshotPolicyResponse.cpp
  src/v20220325/model/RPCMethod.cpp
  src/v20220325/model/Filter.cpp
  src/v20220325/model/CreateEtcdInstanceResponse.cpp
  src/v20220325/model/UpgradeEtcdInstanceResponse.cpp
  src/v20220325/model/CreateEtcdSnapshotPolicyRequest.cpp
  src/v20220325/model/DescribeEtcdCredentialsRequest.cpp
  src/v20220325/model/DisableEtcdInstanceDeletionProtectionRequest.cpp
  src/v20220325/model/DescribeEtcdRegionsResponse.cpp
  src/v20220325/model/DescribeEtcdCreatingProgressResponse.cpp
  src/v20220325/model/InstanceConfig.cpp
  src/v20220325/model/EtcdCredential.cpp
  src/v20220325/model/UpgradeEtcdInstanceRequest.cpp
  src/v20220325/model/EtcdSnapshotPolicy.cpp
  src/v20220325/model/DescribeEtcdQuotaRequest.cpp
  src/v20220325/model/CreateEtcdInstanceRequest.cpp
  src/v20220325/model/DescribeEtcdSnapshotsResponse.cpp
  src/v20220325/model/DescribeEtcdCredentialsResponse.cpp
  src/v20220325/model/ModifyEtcdAttributeRequest.cpp
  src/v20220325/model/CreateEtcdSnapshotRequest.cpp
  src/v20220325/model/EtcdTaskInfo.cpp
  src/v20220325/model/DescribeEtcdQuotaResponse.cpp
  src/v20220325/model/EtcdBackupSettings.cpp
  )

set(cetcd_include
    include/tencentcloud/cetcd
  )

add_library(cetcd ${LIB_TYPE}
  ${cetcd_public_header}
  ${cetcd_public_header_model}
  ${cetcd_src})

set_target_properties(cetcd
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cetcd
  )

target_include_directories(cetcd
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cetcd
  core)

#install(FILES ${cetcd_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cetcd/v20220325)
#install(FILES ${cetcd_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cetcd/v20220325/model)
install(DIRECTORY ${cetcd_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cetcd
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

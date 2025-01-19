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

set(cfs_public_header
  include/tencentcloud/cfs/v20190719/CfsClient.h
  )

set(cfs_public_header_model
  include/tencentcloud/cfs/v20190719/model/CreateMigrationTaskRequest.h
  include/tencentcloud/cfs/v20190719/model/ScaleUpFileSystemResponse.h
  include/tencentcloud/cfs/v20190719/model/SnapshotStatistics.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsPGroupsResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeMountTargetsResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeSnapshotOperationLogsRequest.h
  include/tencentcloud/cfs/v20190719/model/MigrationTaskInfo.h
  include/tencentcloud/cfs/v20190719/model/FileSystemClient.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsResponse.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsFileSystemResponse.h
  include/tencentcloud/cfs/v20190719/model/FileSystemInfo.h
  include/tencentcloud/cfs/v20190719/model/BindAutoSnapshotPolicyRequest.h
  include/tencentcloud/cfs/v20190719/model/ModifyFileSystemAutoScaleUpRuleRequest.h
  include/tencentcloud/cfs/v20190719/model/ScaleUpFileSystemRequest.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsPGroupRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeMigrationTasksResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeAutoSnapshotPoliciesRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeAvailableZoneInfoRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeMountTargetsRequest.h
  include/tencentcloud/cfs/v20190719/model/BindAutoSnapshotPolicyResponse.h
  include/tencentcloud/cfs/v20190719/model/SignUpCfsServiceRequest.h
  include/tencentcloud/cfs/v20190719/model/SignUpCfsServiceResponse.h
  include/tencentcloud/cfs/v20190719/model/AutoSnapshotPolicyInfo.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsRulesRequest.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemNameRequest.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsPGroupRequest.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsPGroupResponse.h
  include/tencentcloud/cfs/v20190719/model/SnapshotOperateLog.h
  include/tencentcloud/cfs/v20190719/model/DeleteAutoSnapshotPolicyRequest.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsFileSystemResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsRuleRequest.h
  include/tencentcloud/cfs/v20190719/model/DeleteUserQuotaRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeAvailableZoneInfoResponse.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsSnapshotResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemClientsResponse.h
  include/tencentcloud/cfs/v20190719/model/DeleteMountTargetResponse.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsSnapshotRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeBucketListRequest.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsRuleRequest.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsRuleResponse.h
  include/tencentcloud/cfs/v20190719/model/DeleteMigrationTaskResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateFileSystemBandwidthLimitResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeSnapshotOperationLogsResponse.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsFileSystemRequest.h
  include/tencentcloud/cfs/v20190719/model/UpdateFileSystemBandwidthLimitRequest.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsPGroupResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsServiceStatusRequest.h
  include/tencentcloud/cfs/v20190719/model/DeleteUserQuotaResponse.h
  include/tencentcloud/cfs/v20190719/model/DeleteMigrationTaskRequest.h
  include/tencentcloud/cfs/v20190719/model/PGroup.h
  include/tencentcloud/cfs/v20190719/model/SetUserQuotaRequest.h
  include/tencentcloud/cfs/v20190719/model/CreateAutoSnapshotPolicyResponse.h
  include/tencentcloud/cfs/v20190719/model/ModifyFileSystemAutoScaleUpRuleResponse.h
  include/tencentcloud/cfs/v20190719/model/AvailableType.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsSnapshotResponse.h
  include/tencentcloud/cfs/v20190719/model/UserQuota.h
  include/tencentcloud/cfs/v20190719/model/DeleteMountTargetRequest.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsRuleRequest.h
  include/tencentcloud/cfs/v20190719/model/BucketInfo.h
  include/tencentcloud/cfs/v20190719/model/CreateAccessCertRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeUserQuotaRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeBucketListResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemNameResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsSnapshotOverviewResponse.h
  include/tencentcloud/cfs/v20190719/model/AutoScaleUpRule.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsSnapshotRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemClientsRequest.h
  include/tencentcloud/cfs/v20190719/model/AvailableProtoStatus.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsFileSystemsRequest.h
  include/tencentcloud/cfs/v20190719/model/AvailableRegion.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsFileSystemRequest.h
  include/tencentcloud/cfs/v20190719/model/AvailableZone.h
  include/tencentcloud/cfs/v20190719/model/DescribeMigrationTasksRequest.h
  include/tencentcloud/cfs/v20190719/model/Filter.h
  include/tencentcloud/cfs/v20190719/model/UnbindAutoSnapshotPolicyRequest.h
  include/tencentcloud/cfs/v20190719/model/UnbindAutoSnapshotPolicyResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsServiceStatusResponse.h
  include/tencentcloud/cfs/v20190719/model/PGroupRuleInfo.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsSnapshotsRequest.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemSizeLimitResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateAutoSnapshotPolicyRequest.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemSizeLimitRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsRulesResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemPGroupResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateAutoSnapshotPolicyResponse.h
  include/tencentcloud/cfs/v20190719/model/FileSystemByPolicy.h
  include/tencentcloud/cfs/v20190719/model/SnapshotInfo.h
  include/tencentcloud/cfs/v20190719/model/MountInfo.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsFileSystemPGroupRequest.h
  include/tencentcloud/cfs/v20190719/model/CreateMigrationTaskResponse.h
  include/tencentcloud/cfs/v20190719/model/DeleteAutoSnapshotPolicyResponse.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsRuleResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsSnapshotAttributeResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsPGroupRequest.h
  include/tencentcloud/cfs/v20190719/model/CreateAccessCertResponse.h
  include/tencentcloud/cfs/v20190719/model/SetUserQuotaResponse.h
  include/tencentcloud/cfs/v20190719/model/TagInfo.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsPGroupsRequest.h
  include/tencentcloud/cfs/v20190719/model/DeleteCfsPGroupResponse.h
  include/tencentcloud/cfs/v20190719/model/UpdateCfsSnapshotAttributeRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeUserQuotaResponse.h
  include/tencentcloud/cfs/v20190719/model/TieringDetailInfo.h
  include/tencentcloud/cfs/v20190719/model/PGroupInfo.h
  include/tencentcloud/cfs/v20190719/model/CreateCfsRuleResponse.h
  include/tencentcloud/cfs/v20190719/model/StopMigrationTaskResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsSnapshotsResponse.h
  include/tencentcloud/cfs/v20190719/model/StopMigrationTaskRequest.h
  include/tencentcloud/cfs/v20190719/model/DescribeAutoSnapshotPoliciesResponse.h
  include/tencentcloud/cfs/v20190719/model/DescribeCfsSnapshotOverviewRequest.h
  include/tencentcloud/cfs/v20190719/model/CreateAutoSnapshotPolicyRequest.h
  )

set(cfs_src
  src/v20190719/CfsClient.cpp
  src/v20190719/model/CreateMigrationTaskRequest.cpp
  src/v20190719/model/ScaleUpFileSystemResponse.cpp
  src/v20190719/model/SnapshotStatistics.cpp
  src/v20190719/model/DescribeCfsPGroupsResponse.cpp
  src/v20190719/model/DescribeMountTargetsResponse.cpp
  src/v20190719/model/DescribeSnapshotOperationLogsRequest.cpp
  src/v20190719/model/MigrationTaskInfo.cpp
  src/v20190719/model/FileSystemClient.cpp
  src/v20190719/model/DescribeCfsFileSystemsResponse.cpp
  src/v20190719/model/CreateCfsFileSystemResponse.cpp
  src/v20190719/model/FileSystemInfo.cpp
  src/v20190719/model/BindAutoSnapshotPolicyRequest.cpp
  src/v20190719/model/ModifyFileSystemAutoScaleUpRuleRequest.cpp
  src/v20190719/model/ScaleUpFileSystemRequest.cpp
  src/v20190719/model/CreateCfsPGroupRequest.cpp
  src/v20190719/model/DescribeMigrationTasksResponse.cpp
  src/v20190719/model/DescribeAutoSnapshotPoliciesRequest.cpp
  src/v20190719/model/DescribeAvailableZoneInfoRequest.cpp
  src/v20190719/model/DescribeMountTargetsRequest.cpp
  src/v20190719/model/BindAutoSnapshotPolicyResponse.cpp
  src/v20190719/model/SignUpCfsServiceRequest.cpp
  src/v20190719/model/SignUpCfsServiceResponse.cpp
  src/v20190719/model/AutoSnapshotPolicyInfo.cpp
  src/v20190719/model/DescribeCfsRulesRequest.cpp
  src/v20190719/model/UpdateCfsFileSystemNameRequest.cpp
  src/v20190719/model/DeleteCfsPGroupRequest.cpp
  src/v20190719/model/UpdateCfsPGroupResponse.cpp
  src/v20190719/model/SnapshotOperateLog.cpp
  src/v20190719/model/DeleteAutoSnapshotPolicyRequest.cpp
  src/v20190719/model/DeleteCfsFileSystemResponse.cpp
  src/v20190719/model/UpdateCfsRuleRequest.cpp
  src/v20190719/model/DeleteUserQuotaRequest.cpp
  src/v20190719/model/DescribeAvailableZoneInfoResponse.cpp
  src/v20190719/model/DeleteCfsSnapshotResponse.cpp
  src/v20190719/model/DescribeCfsFileSystemClientsResponse.cpp
  src/v20190719/model/DeleteMountTargetResponse.cpp
  src/v20190719/model/CreateCfsSnapshotRequest.cpp
  src/v20190719/model/DescribeBucketListRequest.cpp
  src/v20190719/model/DeleteCfsRuleRequest.cpp
  src/v20190719/model/UpdateCfsRuleResponse.cpp
  src/v20190719/model/DeleteMigrationTaskResponse.cpp
  src/v20190719/model/UpdateFileSystemBandwidthLimitResponse.cpp
  src/v20190719/model/DescribeSnapshotOperationLogsResponse.cpp
  src/v20190719/model/DeleteCfsFileSystemRequest.cpp
  src/v20190719/model/UpdateFileSystemBandwidthLimitRequest.cpp
  src/v20190719/model/CreateCfsPGroupResponse.cpp
  src/v20190719/model/DescribeCfsServiceStatusRequest.cpp
  src/v20190719/model/DeleteUserQuotaResponse.cpp
  src/v20190719/model/DeleteMigrationTaskRequest.cpp
  src/v20190719/model/PGroup.cpp
  src/v20190719/model/SetUserQuotaRequest.cpp
  src/v20190719/model/CreateAutoSnapshotPolicyResponse.cpp
  src/v20190719/model/ModifyFileSystemAutoScaleUpRuleResponse.cpp
  src/v20190719/model/AvailableType.cpp
  src/v20190719/model/CreateCfsSnapshotResponse.cpp
  src/v20190719/model/UserQuota.cpp
  src/v20190719/model/DeleteMountTargetRequest.cpp
  src/v20190719/model/CreateCfsRuleRequest.cpp
  src/v20190719/model/BucketInfo.cpp
  src/v20190719/model/CreateAccessCertRequest.cpp
  src/v20190719/model/DescribeUserQuotaRequest.cpp
  src/v20190719/model/DescribeBucketListResponse.cpp
  src/v20190719/model/UpdateCfsFileSystemNameResponse.cpp
  src/v20190719/model/DescribeCfsSnapshotOverviewResponse.cpp
  src/v20190719/model/AutoScaleUpRule.cpp
  src/v20190719/model/DeleteCfsSnapshotRequest.cpp
  src/v20190719/model/DescribeCfsFileSystemClientsRequest.cpp
  src/v20190719/model/AvailableProtoStatus.cpp
  src/v20190719/model/DescribeCfsFileSystemsRequest.cpp
  src/v20190719/model/AvailableRegion.cpp
  src/v20190719/model/CreateCfsFileSystemRequest.cpp
  src/v20190719/model/AvailableZone.cpp
  src/v20190719/model/DescribeMigrationTasksRequest.cpp
  src/v20190719/model/Filter.cpp
  src/v20190719/model/UnbindAutoSnapshotPolicyRequest.cpp
  src/v20190719/model/UnbindAutoSnapshotPolicyResponse.cpp
  src/v20190719/model/DescribeCfsServiceStatusResponse.cpp
  src/v20190719/model/PGroupRuleInfo.cpp
  src/v20190719/model/DescribeCfsSnapshotsRequest.cpp
  src/v20190719/model/UpdateCfsFileSystemSizeLimitResponse.cpp
  src/v20190719/model/UpdateAutoSnapshotPolicyRequest.cpp
  src/v20190719/model/UpdateCfsFileSystemSizeLimitRequest.cpp
  src/v20190719/model/DescribeCfsRulesResponse.cpp
  src/v20190719/model/UpdateCfsFileSystemPGroupResponse.cpp
  src/v20190719/model/UpdateAutoSnapshotPolicyResponse.cpp
  src/v20190719/model/FileSystemByPolicy.cpp
  src/v20190719/model/SnapshotInfo.cpp
  src/v20190719/model/MountInfo.cpp
  src/v20190719/model/UpdateCfsFileSystemPGroupRequest.cpp
  src/v20190719/model/CreateMigrationTaskResponse.cpp
  src/v20190719/model/DeleteAutoSnapshotPolicyResponse.cpp
  src/v20190719/model/DeleteCfsRuleResponse.cpp
  src/v20190719/model/UpdateCfsSnapshotAttributeResponse.cpp
  src/v20190719/model/UpdateCfsPGroupRequest.cpp
  src/v20190719/model/CreateAccessCertResponse.cpp
  src/v20190719/model/SetUserQuotaResponse.cpp
  src/v20190719/model/TagInfo.cpp
  src/v20190719/model/DescribeCfsPGroupsRequest.cpp
  src/v20190719/model/DeleteCfsPGroupResponse.cpp
  src/v20190719/model/UpdateCfsSnapshotAttributeRequest.cpp
  src/v20190719/model/DescribeUserQuotaResponse.cpp
  src/v20190719/model/TieringDetailInfo.cpp
  src/v20190719/model/PGroupInfo.cpp
  src/v20190719/model/CreateCfsRuleResponse.cpp
  src/v20190719/model/StopMigrationTaskResponse.cpp
  src/v20190719/model/DescribeCfsSnapshotsResponse.cpp
  src/v20190719/model/StopMigrationTaskRequest.cpp
  src/v20190719/model/DescribeAutoSnapshotPoliciesResponse.cpp
  src/v20190719/model/DescribeCfsSnapshotOverviewRequest.cpp
  src/v20190719/model/CreateAutoSnapshotPolicyRequest.cpp
  )

set(cfs_include
    include/tencentcloud/cfs
  )

add_library(cfs ${LIB_TYPE}
  ${cfs_public_header}
  ${cfs_public_header_model}
  ${cfs_src})

set_target_properties(cfs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cfs
  )

target_include_directories(cfs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cfs
  core)

#install(FILES ${cfs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cfs/v20190719)
#install(FILES ${cfs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cfs/v20190719/model)
install(DIRECTORY ${cfs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cfs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

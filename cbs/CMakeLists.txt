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

set(cbs_public_header
  include/tencentcloud/cbs/v20170312/CbsClient.h
  )

set(cbs_public_header_model
  include/tencentcloud/cbs/v20170312/model/ModifyDiskExtraPerformanceRequest.h
  include/tencentcloud/cbs/v20170312/model/ModifyDiskAttributesResponse.h
  include/tencentcloud/cbs/v20170312/model/DescribeDiskBackupsRequest.h
  include/tencentcloud/cbs/v20170312/model/CreateSnapshotGroupRequest.h
  include/tencentcloud/cbs/v20170312/model/AutoSnapshotPolicy.h
  include/tencentcloud/cbs/v20170312/model/DetailPrice.h
  include/tencentcloud/cbs/v20170312/model/ModifySnapshotsSharePermissionRequest.h
  include/tencentcloud/cbs/v20170312/model/CopySnapshotCrossRegionsResponse.h
  include/tencentcloud/cbs/v20170312/model/DescribeSnapshotGroupsRequest.h
  include/tencentcloud/cbs/v20170312/model/ModifyDiskBackupQuotaRequest.h
  include/tencentcloud/cbs/v20170312/model/InquiryPriceCreateDisksResponse.h
  include/tencentcloud/cbs/v20170312/model/BindAutoSnapshotPolicyRequest.h
  include/tencentcloud/cbs/v20170312/model/CreateSnapshotResponse.h
  include/tencentcloud/cbs/v20170312/model/DescribeAutoSnapshotPoliciesRequest.h
  include/tencentcloud/cbs/v20170312/model/ModifySnapshotsSharePermissionResponse.h
  include/tencentcloud/cbs/v20170312/model/DeleteDiskBackupsRequest.h
  include/tencentcloud/cbs/v20170312/model/InitializeDisksResponse.h
  include/tencentcloud/cbs/v20170312/model/DescribeDiskStoragePoolRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeDiskBackupsResponse.h
  include/tencentcloud/cbs/v20170312/model/SnapshotCopyResult.h
  include/tencentcloud/cbs/v20170312/model/RenewDiskRequest.h
  include/tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskExtraPerformanceResponse.h
  include/tencentcloud/cbs/v20170312/model/AdvancedRetentionPolicy.h
  include/tencentcloud/cbs/v20170312/model/CreateDisksRequest.h
  include/tencentcloud/cbs/v20170312/model/AttachDisksRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeDiskAssociatedAutoSnapshotPolicyRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeSnapshotsRequest.h
  include/tencentcloud/cbs/v20170312/model/ModifyAutoSnapshotPolicyAttributeRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeDiskConfigQuotaResponse.h
  include/tencentcloud/cbs/v20170312/model/ApplyDiskBackupResponse.h
  include/tencentcloud/cbs/v20170312/model/InquiryPriceResizeDiskResponse.h
  include/tencentcloud/cbs/v20170312/model/Tag.h
  include/tencentcloud/cbs/v20170312/model/ResizeDiskResponse.h
  include/tencentcloud/cbs/v20170312/model/Disk.h
  include/tencentcloud/cbs/v20170312/model/TerminateDisksResponse.h
  include/tencentcloud/cbs/v20170312/model/ApplySnapshotResponse.h
  include/tencentcloud/cbs/v20170312/model/DetachDisksRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeSnapshotGroupsResponse.h
  include/tencentcloud/cbs/v20170312/model/DescribeSnapshotOverviewResponse.h
  include/tencentcloud/cbs/v20170312/model/ModifyDisksChargeTypeResponse.h
  include/tencentcloud/cbs/v20170312/model/CreateSnapshotRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeInstancesDiskNumRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeSnapshotSharePermissionResponse.h
  include/tencentcloud/cbs/v20170312/model/ModifyDiskBackupQuotaResponse.h
  include/tencentcloud/cbs/v20170312/model/InquiryPriceRenewDisksRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeSnapshotSharePermissionRequest.h
  include/tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskBackupQuotaRequest.h
  include/tencentcloud/cbs/v20170312/model/DeleteDiskBackupsResponse.h
  include/tencentcloud/cbs/v20170312/model/DeleteSnapshotsRequest.h
  include/tencentcloud/cbs/v20170312/model/ModifyDisksRenewFlagResponse.h
  include/tencentcloud/cbs/v20170312/model/DeleteAutoSnapshotPoliciesResponse.h
  include/tencentcloud/cbs/v20170312/model/DescribeDisksResponse.h
  include/tencentcloud/cbs/v20170312/model/Placement.h
  include/tencentcloud/cbs/v20170312/model/DeleteSnapshotsResponse.h
  include/tencentcloud/cbs/v20170312/model/ModifyDisksRenewFlagRequest.h
  include/tencentcloud/cbs/v20170312/model/ModifySnapshotAttributeResponse.h
  include/tencentcloud/cbs/v20170312/model/ModifyDiskAttributesRequest.h
  include/tencentcloud/cbs/v20170312/model/GetSnapOverviewRequest.h
  include/tencentcloud/cbs/v20170312/model/Image.h
  include/tencentcloud/cbs/v20170312/model/ModifyAutoSnapshotPolicyAttributeResponse.h
  include/tencentcloud/cbs/v20170312/model/TerminateDisksRequest.h
  include/tencentcloud/cbs/v20170312/model/CdcSize.h
  include/tencentcloud/cbs/v20170312/model/DescribeInstancesDiskNumResponse.h
  include/tencentcloud/cbs/v20170312/model/ResizeDiskRequest.h
  include/tencentcloud/cbs/v20170312/model/ApplyDiskBackupRequest.h
  include/tencentcloud/cbs/v20170312/model/ModifyDisksChargeTypeRequest.h
  include/tencentcloud/cbs/v20170312/model/InitializeDisksRequest.h
  include/tencentcloud/cbs/v20170312/model/CreateAutoSnapshotPolicyResponse.h
  include/tencentcloud/cbs/v20170312/model/ModifySnapshotAttributeRequest.h
  include/tencentcloud/cbs/v20170312/model/UnbindAutoSnapshotPolicyRequest.h
  include/tencentcloud/cbs/v20170312/model/DiskConfig.h
  include/tencentcloud/cbs/v20170312/model/CreateDiskBackupResponse.h
  include/tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskBackupQuotaResponse.h
  include/tencentcloud/cbs/v20170312/model/DeleteAutoSnapshotPoliciesRequest.h
  include/tencentcloud/cbs/v20170312/model/DiskChargePrepaid.h
  include/tencentcloud/cbs/v20170312/model/DeleteSnapshotGroupResponse.h
  include/tencentcloud/cbs/v20170312/model/ApplySnapshotGroupResponse.h
  include/tencentcloud/cbs/v20170312/model/DescribeSnapshotOverviewRequest.h
  include/tencentcloud/cbs/v20170312/model/Filter.h
  include/tencentcloud/cbs/v20170312/model/InquiryPriceCreateDisksRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeSnapshotsResponse.h
  include/tencentcloud/cbs/v20170312/model/Snapshot.h
  include/tencentcloud/cbs/v20170312/model/CreateDisksResponse.h
  include/tencentcloud/cbs/v20170312/model/AttachDisksResponse.h
  include/tencentcloud/cbs/v20170312/model/CreateDiskBackupRequest.h
  include/tencentcloud/cbs/v20170312/model/DeleteSnapshotGroupRequest.h
  include/tencentcloud/cbs/v20170312/model/SnapshotGroup.h
  include/tencentcloud/cbs/v20170312/model/BindAutoSnapshotPolicyResponse.h
  include/tencentcloud/cbs/v20170312/model/DiskBackup.h
  include/tencentcloud/cbs/v20170312/model/DescribeDisksRequest.h
  include/tencentcloud/cbs/v20170312/model/DetachDisksResponse.h
  include/tencentcloud/cbs/v20170312/model/InquiryPriceRenewDisksResponse.h
  include/tencentcloud/cbs/v20170312/model/SharePermission.h
  include/tencentcloud/cbs/v20170312/model/DescribeDiskStoragePoolResponse.h
  include/tencentcloud/cbs/v20170312/model/Policy.h
  include/tencentcloud/cbs/v20170312/model/ModifyDiskExtraPerformanceResponse.h
  include/tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskExtraPerformanceRequest.h
  include/tencentcloud/cbs/v20170312/model/InquiryPriceResizeDiskRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeDiskConfigQuotaRequest.h
  include/tencentcloud/cbs/v20170312/model/DescribeDiskAssociatedAutoSnapshotPolicyResponse.h
  include/tencentcloud/cbs/v20170312/model/ApplySnapshotGroupRequest.h
  include/tencentcloud/cbs/v20170312/model/GetSnapOverviewResponse.h
  include/tencentcloud/cbs/v20170312/model/AutoMountConfiguration.h
  include/tencentcloud/cbs/v20170312/model/CopySnapshotCrossRegionsRequest.h
  include/tencentcloud/cbs/v20170312/model/PrepayPrice.h
  include/tencentcloud/cbs/v20170312/model/RenewDiskResponse.h
  include/tencentcloud/cbs/v20170312/model/DescribeAutoSnapshotPoliciesResponse.h
  include/tencentcloud/cbs/v20170312/model/Cdc.h
  include/tencentcloud/cbs/v20170312/model/ApplyDisk.h
  include/tencentcloud/cbs/v20170312/model/UnbindAutoSnapshotPolicyResponse.h
  include/tencentcloud/cbs/v20170312/model/AttachDetail.h
  include/tencentcloud/cbs/v20170312/model/CreateAutoSnapshotPolicyRequest.h
  include/tencentcloud/cbs/v20170312/model/CreateSnapshotGroupResponse.h
  include/tencentcloud/cbs/v20170312/model/Price.h
  include/tencentcloud/cbs/v20170312/model/ApplySnapshotRequest.h
  )

set(cbs_src
  src/v20170312/CbsClient.cpp
  src/v20170312/model/ModifyDiskExtraPerformanceRequest.cpp
  src/v20170312/model/ModifyDiskAttributesResponse.cpp
  src/v20170312/model/DescribeDiskBackupsRequest.cpp
  src/v20170312/model/CreateSnapshotGroupRequest.cpp
  src/v20170312/model/AutoSnapshotPolicy.cpp
  src/v20170312/model/DetailPrice.cpp
  src/v20170312/model/ModifySnapshotsSharePermissionRequest.cpp
  src/v20170312/model/CopySnapshotCrossRegionsResponse.cpp
  src/v20170312/model/DescribeSnapshotGroupsRequest.cpp
  src/v20170312/model/ModifyDiskBackupQuotaRequest.cpp
  src/v20170312/model/InquiryPriceCreateDisksResponse.cpp
  src/v20170312/model/BindAutoSnapshotPolicyRequest.cpp
  src/v20170312/model/CreateSnapshotResponse.cpp
  src/v20170312/model/DescribeAutoSnapshotPoliciesRequest.cpp
  src/v20170312/model/ModifySnapshotsSharePermissionResponse.cpp
  src/v20170312/model/DeleteDiskBackupsRequest.cpp
  src/v20170312/model/InitializeDisksResponse.cpp
  src/v20170312/model/DescribeDiskStoragePoolRequest.cpp
  src/v20170312/model/DescribeDiskBackupsResponse.cpp
  src/v20170312/model/SnapshotCopyResult.cpp
  src/v20170312/model/RenewDiskRequest.cpp
  src/v20170312/model/InquirePriceModifyDiskExtraPerformanceResponse.cpp
  src/v20170312/model/AdvancedRetentionPolicy.cpp
  src/v20170312/model/CreateDisksRequest.cpp
  src/v20170312/model/AttachDisksRequest.cpp
  src/v20170312/model/DescribeDiskAssociatedAutoSnapshotPolicyRequest.cpp
  src/v20170312/model/DescribeSnapshotsRequest.cpp
  src/v20170312/model/ModifyAutoSnapshotPolicyAttributeRequest.cpp
  src/v20170312/model/DescribeDiskConfigQuotaResponse.cpp
  src/v20170312/model/ApplyDiskBackupResponse.cpp
  src/v20170312/model/InquiryPriceResizeDiskResponse.cpp
  src/v20170312/model/Tag.cpp
  src/v20170312/model/ResizeDiskResponse.cpp
  src/v20170312/model/Disk.cpp
  src/v20170312/model/TerminateDisksResponse.cpp
  src/v20170312/model/ApplySnapshotResponse.cpp
  src/v20170312/model/DetachDisksRequest.cpp
  src/v20170312/model/DescribeSnapshotGroupsResponse.cpp
  src/v20170312/model/DescribeSnapshotOverviewResponse.cpp
  src/v20170312/model/ModifyDisksChargeTypeResponse.cpp
  src/v20170312/model/CreateSnapshotRequest.cpp
  src/v20170312/model/DescribeInstancesDiskNumRequest.cpp
  src/v20170312/model/DescribeSnapshotSharePermissionResponse.cpp
  src/v20170312/model/ModifyDiskBackupQuotaResponse.cpp
  src/v20170312/model/InquiryPriceRenewDisksRequest.cpp
  src/v20170312/model/DescribeSnapshotSharePermissionRequest.cpp
  src/v20170312/model/InquirePriceModifyDiskBackupQuotaRequest.cpp
  src/v20170312/model/DeleteDiskBackupsResponse.cpp
  src/v20170312/model/DeleteSnapshotsRequest.cpp
  src/v20170312/model/ModifyDisksRenewFlagResponse.cpp
  src/v20170312/model/DeleteAutoSnapshotPoliciesResponse.cpp
  src/v20170312/model/DescribeDisksResponse.cpp
  src/v20170312/model/Placement.cpp
  src/v20170312/model/DeleteSnapshotsResponse.cpp
  src/v20170312/model/ModifyDisksRenewFlagRequest.cpp
  src/v20170312/model/ModifySnapshotAttributeResponse.cpp
  src/v20170312/model/ModifyDiskAttributesRequest.cpp
  src/v20170312/model/GetSnapOverviewRequest.cpp
  src/v20170312/model/Image.cpp
  src/v20170312/model/ModifyAutoSnapshotPolicyAttributeResponse.cpp
  src/v20170312/model/TerminateDisksRequest.cpp
  src/v20170312/model/CdcSize.cpp
  src/v20170312/model/DescribeInstancesDiskNumResponse.cpp
  src/v20170312/model/ResizeDiskRequest.cpp
  src/v20170312/model/ApplyDiskBackupRequest.cpp
  src/v20170312/model/ModifyDisksChargeTypeRequest.cpp
  src/v20170312/model/InitializeDisksRequest.cpp
  src/v20170312/model/CreateAutoSnapshotPolicyResponse.cpp
  src/v20170312/model/ModifySnapshotAttributeRequest.cpp
  src/v20170312/model/UnbindAutoSnapshotPolicyRequest.cpp
  src/v20170312/model/DiskConfig.cpp
  src/v20170312/model/CreateDiskBackupResponse.cpp
  src/v20170312/model/InquirePriceModifyDiskBackupQuotaResponse.cpp
  src/v20170312/model/DeleteAutoSnapshotPoliciesRequest.cpp
  src/v20170312/model/DiskChargePrepaid.cpp
  src/v20170312/model/DeleteSnapshotGroupResponse.cpp
  src/v20170312/model/ApplySnapshotGroupResponse.cpp
  src/v20170312/model/DescribeSnapshotOverviewRequest.cpp
  src/v20170312/model/Filter.cpp
  src/v20170312/model/InquiryPriceCreateDisksRequest.cpp
  src/v20170312/model/DescribeSnapshotsResponse.cpp
  src/v20170312/model/Snapshot.cpp
  src/v20170312/model/CreateDisksResponse.cpp
  src/v20170312/model/AttachDisksResponse.cpp
  src/v20170312/model/CreateDiskBackupRequest.cpp
  src/v20170312/model/DeleteSnapshotGroupRequest.cpp
  src/v20170312/model/SnapshotGroup.cpp
  src/v20170312/model/BindAutoSnapshotPolicyResponse.cpp
  src/v20170312/model/DiskBackup.cpp
  src/v20170312/model/DescribeDisksRequest.cpp
  src/v20170312/model/DetachDisksResponse.cpp
  src/v20170312/model/InquiryPriceRenewDisksResponse.cpp
  src/v20170312/model/SharePermission.cpp
  src/v20170312/model/DescribeDiskStoragePoolResponse.cpp
  src/v20170312/model/Policy.cpp
  src/v20170312/model/ModifyDiskExtraPerformanceResponse.cpp
  src/v20170312/model/InquirePriceModifyDiskExtraPerformanceRequest.cpp
  src/v20170312/model/InquiryPriceResizeDiskRequest.cpp
  src/v20170312/model/DescribeDiskConfigQuotaRequest.cpp
  src/v20170312/model/DescribeDiskAssociatedAutoSnapshotPolicyResponse.cpp
  src/v20170312/model/ApplySnapshotGroupRequest.cpp
  src/v20170312/model/GetSnapOverviewResponse.cpp
  src/v20170312/model/AutoMountConfiguration.cpp
  src/v20170312/model/CopySnapshotCrossRegionsRequest.cpp
  src/v20170312/model/PrepayPrice.cpp
  src/v20170312/model/RenewDiskResponse.cpp
  src/v20170312/model/DescribeAutoSnapshotPoliciesResponse.cpp
  src/v20170312/model/Cdc.cpp
  src/v20170312/model/ApplyDisk.cpp
  src/v20170312/model/UnbindAutoSnapshotPolicyResponse.cpp
  src/v20170312/model/AttachDetail.cpp
  src/v20170312/model/CreateAutoSnapshotPolicyRequest.cpp
  src/v20170312/model/CreateSnapshotGroupResponse.cpp
  src/v20170312/model/Price.cpp
  src/v20170312/model/ApplySnapshotRequest.cpp
  )

set(cbs_include
    include/tencentcloud/cbs
  )

add_library(cbs ${LIB_TYPE}
  ${cbs_public_header}
  ${cbs_public_header_model}
  ${cbs_src})

set_target_properties(cbs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cbs
  )

target_include_directories(cbs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cbs
  core)

#install(FILES ${cbs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cbs/v20170312)
#install(FILES ${cbs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cbs/v20170312/model)
install(DIRECTORY ${cbs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cbs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

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

set(tcaplusdb_public_header
  include/tencentcloud/tcaplusdb/v20190823/TcaplusdbClient.h
  )

set(tcaplusdb_public_header_model
  include/tencentcloud/tcaplusdb/v20190823/model/ImportSnapshotsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CompareTablesInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterNameRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupNameResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterPasswordResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteClusterResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTableIndexResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableRollbackResultNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeBackupRecordsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ApplyStatus.h
  include/tencentcloud/tcaplusdb/v20190823/model/RegionInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifySnapshotsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/UpdateApplyResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteClusterRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/SelectedTableWithField.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTableIndexRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ProxyMachineInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTasksResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeRegionsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/SetTableDataFlowResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterPasswordRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeMachineResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTableDataFlowRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTableGroupRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeSnapshotsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/TagsInfoOfTableGroup.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeApplicationsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateTableGroupRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterMachineResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/TagsInfoOfTable.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteIdlFilesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/FieldInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/MergeTableResult.h
  include/tencentcloud/tcaplusdb/v20190823/model/ApplyResult.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTasksRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/SnapshotInfoNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/Application.h
  include/tencentcloud/tcaplusdb/v20190823/model/ClearTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/SnapshotResult.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyCensorshipRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ClusterInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DisableRestProxyRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesInRecycleResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteSnapshotsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateSnapshotsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/SetTableIndexRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableQuotasResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/RecoverRecycleTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterMachineRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteSnapshotsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupNameRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/BackupExpireRuleInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyCensorshipResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/MergeTablesDataRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateClusterRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/EnableRestProxyRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableQuotasRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CompareIdlFilesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeRegionsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeClustersResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/MergeTablesInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeClusterTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/TagsInfoOfCluster.h
  include/tencentcloud/tcaplusdb/v20190823/model/SetTableIndexResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ClearTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ServerMachineInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateSnapshotsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/SetBackupExpireRuleRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteBackupRecordsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DisableRestProxyResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/TagInfoUnit.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateClusterResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeClustersRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ServerDetailInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableInfoNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/TaskInfoNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/SyncTableInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteIdlFilesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateBackupResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/KeyFile.h
  include/tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateTableGroupResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeSnapshotsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/SetBackupExpireRuleResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteBackupRecordsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/EnableRestProxyResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterNameResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/SetTableDataFlowRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesInRecycleRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/KafkaInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTableDataFlowResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/UpdateApplyRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeUinInWhitelistResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/SnapshotInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/ParsedTableInfoNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/RollbackTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/MachineInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateBackupRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableResultNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeClusterTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/RecoverRecycleTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/MergeTablesDataResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeApplicationsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTableGroupResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeBackupRecordsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/PoolInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeMachineRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/RollbackTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeUinInWhitelistRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CompareIdlFilesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ProxyDetailInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/IdlFileInfoWithoutContent.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/BackupRecords.h
  include/tencentcloud/tcaplusdb/v20190823/model/Filter.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifySnapshotsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ImportSnapshotsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/SyncTableField.h
  include/tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableGroupInfo.h
  )

set(tcaplusdb_src
  src/v20190823/TcaplusdbClient.cpp
  src/v20190823/model/ImportSnapshotsResponse.cpp
  src/v20190823/model/CompareTablesInfo.cpp
  src/v20190823/model/ModifyClusterNameRequest.cpp
  src/v20190823/model/ModifyTableGroupNameResponse.cpp
  src/v20190823/model/DescribeTableTagsRequest.cpp
  src/v20190823/model/ModifyClusterPasswordResponse.cpp
  src/v20190823/model/DeleteClusterResponse.cpp
  src/v20190823/model/DeleteTableIndexResponse.cpp
  src/v20190823/model/TableRollbackResultNew.cpp
  src/v20190823/model/DescribeBackupRecordsResponse.cpp
  src/v20190823/model/ApplyStatus.cpp
  src/v20190823/model/RegionInfo.cpp
  src/v20190823/model/DescribeTablesResponse.cpp
  src/v20190823/model/ModifySnapshotsResponse.cpp
  src/v20190823/model/UpdateApplyResponse.cpp
  src/v20190823/model/DeleteClusterRequest.cpp
  src/v20190823/model/SelectedTableWithField.cpp
  src/v20190823/model/DeleteTableIndexRequest.cpp
  src/v20190823/model/ProxyMachineInfo.cpp
  src/v20190823/model/DescribeTasksResponse.cpp
  src/v20190823/model/DeleteTablesRequest.cpp
  src/v20190823/model/DescribeRegionsResponse.cpp
  src/v20190823/model/SetTableDataFlowResponse.cpp
  src/v20190823/model/SelectedTableInfoNew.cpp
  src/v20190823/model/ModifyClusterPasswordRequest.cpp
  src/v20190823/model/DescribeMachineResponse.cpp
  src/v20190823/model/DeleteTableDataFlowRequest.cpp
  src/v20190823/model/DeleteTableGroupRequest.cpp
  src/v20190823/model/DescribeSnapshotsRequest.cpp
  src/v20190823/model/TagsInfoOfTableGroup.cpp
  src/v20190823/model/DescribeApplicationsResponse.cpp
  src/v20190823/model/CreateTableGroupRequest.cpp
  src/v20190823/model/ModifyClusterMachineResponse.cpp
  src/v20190823/model/TagsInfoOfTable.cpp
  src/v20190823/model/DeleteIdlFilesResponse.cpp
  src/v20190823/model/FieldInfo.cpp
  src/v20190823/model/ModifyTableTagsRequest.cpp
  src/v20190823/model/MergeTableResult.cpp
  src/v20190823/model/ApplyResult.cpp
  src/v20190823/model/DescribeTasksRequest.cpp
  src/v20190823/model/SnapshotInfoNew.cpp
  src/v20190823/model/Application.cpp
  src/v20190823/model/ClearTablesResponse.cpp
  src/v20190823/model/DescribeIdlFileInfosRequest.cpp
  src/v20190823/model/ModifyTableTagsResponse.cpp
  src/v20190823/model/SnapshotResult.cpp
  src/v20190823/model/ModifyCensorshipRequest.cpp
  src/v20190823/model/ClusterInfo.cpp
  src/v20190823/model/DisableRestProxyRequest.cpp
  src/v20190823/model/DescribeTablesInRecycleResponse.cpp
  src/v20190823/model/ModifyTablesResponse.cpp
  src/v20190823/model/DeleteSnapshotsRequest.cpp
  src/v20190823/model/ModifyTableGroupTagsResponse.cpp
  src/v20190823/model/ModifyClusterTagsRequest.cpp
  src/v20190823/model/CreateSnapshotsRequest.cpp
  src/v20190823/model/DescribeTableGroupTagsResponse.cpp
  src/v20190823/model/SetTableIndexRequest.cpp
  src/v20190823/model/ModifyTableQuotasResponse.cpp
  src/v20190823/model/RecoverRecycleTablesRequest.cpp
  src/v20190823/model/ModifyClusterMachineRequest.cpp
  src/v20190823/model/DeleteSnapshotsResponse.cpp
  src/v20190823/model/DeleteTablesResponse.cpp
  src/v20190823/model/ModifyTableGroupNameRequest.cpp
  src/v20190823/model/BackupExpireRuleInfo.cpp
  src/v20190823/model/DescribeTableGroupsRequest.cpp
  src/v20190823/model/ModifyCensorshipResponse.cpp
  src/v20190823/model/MergeTablesDataRequest.cpp
  src/v20190823/model/CreateClusterRequest.cpp
  src/v20190823/model/ModifyTableGroupTagsRequest.cpp
  src/v20190823/model/EnableRestProxyRequest.cpp
  src/v20190823/model/ModifyTableQuotasRequest.cpp
  src/v20190823/model/CompareIdlFilesResponse.cpp
  src/v20190823/model/CreateTablesResponse.cpp
  src/v20190823/model/DescribeRegionsRequest.cpp
  src/v20190823/model/DescribeClustersResponse.cpp
  src/v20190823/model/MergeTablesInfo.cpp
  src/v20190823/model/ModifyClusterTagsResponse.cpp
  src/v20190823/model/DescribeClusterTagsResponse.cpp
  src/v20190823/model/TagsInfoOfCluster.cpp
  src/v20190823/model/SetTableIndexResponse.cpp
  src/v20190823/model/ClearTablesRequest.cpp
  src/v20190823/model/DescribeIdlFileInfosResponse.cpp
  src/v20190823/model/ServerMachineInfo.cpp
  src/v20190823/model/CreateSnapshotsResponse.cpp
  src/v20190823/model/SetBackupExpireRuleRequest.cpp
  src/v20190823/model/DeleteBackupRecordsResponse.cpp
  src/v20190823/model/IdlFileInfo.cpp
  src/v20190823/model/DisableRestProxyResponse.cpp
  src/v20190823/model/TagInfoUnit.cpp
  src/v20190823/model/CreateClusterResponse.cpp
  src/v20190823/model/DescribeClustersRequest.cpp
  src/v20190823/model/ServerDetailInfo.cpp
  src/v20190823/model/TableInfoNew.cpp
  src/v20190823/model/TaskInfoNew.cpp
  src/v20190823/model/SyncTableInfo.cpp
  src/v20190823/model/DeleteIdlFilesRequest.cpp
  src/v20190823/model/CreateBackupResponse.cpp
  src/v20190823/model/KeyFile.cpp
  src/v20190823/model/VerifyIdlFilesResponse.cpp
  src/v20190823/model/DescribeTableTagsResponse.cpp
  src/v20190823/model/CreateTableGroupResponse.cpp
  src/v20190823/model/DescribeSnapshotsResponse.cpp
  src/v20190823/model/SetBackupExpireRuleResponse.cpp
  src/v20190823/model/DeleteBackupRecordsRequest.cpp
  src/v20190823/model/VerifyIdlFilesRequest.cpp
  src/v20190823/model/EnableRestProxyResponse.cpp
  src/v20190823/model/ModifyClusterNameResponse.cpp
  src/v20190823/model/ModifyTablesRequest.cpp
  src/v20190823/model/SetTableDataFlowRequest.cpp
  src/v20190823/model/DescribeTableGroupTagsRequest.cpp
  src/v20190823/model/DescribeTablesInRecycleRequest.cpp
  src/v20190823/model/DescribeTablesRequest.cpp
  src/v20190823/model/KafkaInfo.cpp
  src/v20190823/model/DeleteTableDataFlowResponse.cpp
  src/v20190823/model/UpdateApplyRequest.cpp
  src/v20190823/model/ModifyTableMemosRequest.cpp
  src/v20190823/model/DescribeUinInWhitelistResponse.cpp
  src/v20190823/model/SnapshotInfo.cpp
  src/v20190823/model/ParsedTableInfoNew.cpp
  src/v20190823/model/RollbackTablesResponse.cpp
  src/v20190823/model/MachineInfo.cpp
  src/v20190823/model/CreateBackupRequest.cpp
  src/v20190823/model/TableResultNew.cpp
  src/v20190823/model/CreateTablesRequest.cpp
  src/v20190823/model/DescribeClusterTagsRequest.cpp
  src/v20190823/model/RecoverRecycleTablesResponse.cpp
  src/v20190823/model/MergeTablesDataResponse.cpp
  src/v20190823/model/DescribeApplicationsRequest.cpp
  src/v20190823/model/DescribeTableGroupsResponse.cpp
  src/v20190823/model/DeleteTableGroupResponse.cpp
  src/v20190823/model/DescribeBackupRecordsRequest.cpp
  src/v20190823/model/PoolInfo.cpp
  src/v20190823/model/DescribeMachineRequest.cpp
  src/v20190823/model/RollbackTablesRequest.cpp
  src/v20190823/model/DescribeUinInWhitelistRequest.cpp
  src/v20190823/model/CompareIdlFilesRequest.cpp
  src/v20190823/model/ProxyDetailInfo.cpp
  src/v20190823/model/IdlFileInfoWithoutContent.cpp
  src/v20190823/model/ModifyTableMemosResponse.cpp
  src/v20190823/model/BackupRecords.cpp
  src/v20190823/model/Filter.cpp
  src/v20190823/model/ModifySnapshotsRequest.cpp
  src/v20190823/model/ImportSnapshotsRequest.cpp
  src/v20190823/model/SyncTableField.cpp
  src/v20190823/model/ErrorInfo.cpp
  src/v20190823/model/TableGroupInfo.cpp
  )

set(tcaplusdb_include
    include/tencentcloud/tcaplusdb
  )

add_library(tcaplusdb ${LIB_TYPE}
  ${tcaplusdb_public_header}
  ${tcaplusdb_public_header_model}
  ${tcaplusdb_src})

set_target_properties(tcaplusdb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tcaplusdb
  )

target_include_directories(tcaplusdb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tcaplusdb
  core)

#install(FILES ${tcaplusdb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcaplusdb/v20190823)
#install(FILES ${tcaplusdb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcaplusdb/v20190823/model)
install(DIRECTORY ${tcaplusdb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tcaplusdb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

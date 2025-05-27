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

set(oceanus_public_header
  include/tencentcloud/oceanus/v20190422/OceanusClient.h
  )

set(oceanus_public_header_model
  include/tencentcloud/oceanus/v20190422/model/CopyJobResult.h
  include/tencentcloud/oceanus/v20190422/model/CreateResourceRequest.h
  include/tencentcloud/oceanus/v20190422/model/ModifyFolderRequest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobSubmissionLogResponse.h
  include/tencentcloud/oceanus/v20190422/model/DeleteJobsRequest.h
  include/tencentcloud/oceanus/v20190422/model/ModifyWorkSpaceRequest.h
  include/tencentcloud/oceanus/v20190422/model/ModifyJobResponse.h
  include/tencentcloud/oceanus/v20190422/model/CreateJobConfigResponse.h
  include/tencentcloud/oceanus/v20190422/model/CreateResourceConfigResponse.h
  include/tencentcloud/oceanus/v20190422/model/CreateJobConfigRequest.h
  include/tencentcloud/oceanus/v20190422/model/ClusterVersion.h
  include/tencentcloud/oceanus/v20190422/model/DescribeTreeJobsResponse.h
  include/tencentcloud/oceanus/v20190422/model/CopyJobsRequest.h
  include/tencentcloud/oceanus/v20190422/model/CopyJobsResponse.h
  include/tencentcloud/oceanus/v20190422/model/TriggerJobSavepointRequest.h
  include/tencentcloud/oceanus/v20190422/model/LogContent.h
  include/tencentcloud/oceanus/v20190422/model/DeleteJobConfigsRequest.h
  include/tencentcloud/oceanus/v20190422/model/JobEventInfo.h
  include/tencentcloud/oceanus/v20190422/model/ResourceLocParam.h
  include/tencentcloud/oceanus/v20190422/model/NodeConfig.h
  include/tencentcloud/oceanus/v20190422/model/WorkSpaceSetItem.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobSavepointRequest.h
  include/tencentcloud/oceanus/v20190422/model/ResultColumn.h
  include/tencentcloud/oceanus/v20190422/model/Setats.h
  include/tencentcloud/oceanus/v20190422/model/TreeJobSets.h
  include/tencentcloud/oceanus/v20190422/model/ResourceItem.h
  include/tencentcloud/oceanus/v20190422/model/RefJobStatusCountItem.h
  include/tencentcloud/oceanus/v20190422/model/RunSqlGatewayStatementRequest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeFolderResponse.h
  include/tencentcloud/oceanus/v20190422/model/SetatsDisk.h
  include/tencentcloud/oceanus/v20190422/model/ResourceLoc.h
  include/tencentcloud/oceanus/v20190422/model/CCN.h
  include/tencentcloud/oceanus/v20190422/model/DescribeWorkSpacesRequest.h
  include/tencentcloud/oceanus/v20190422/model/ResourceRefJobInfo.h
  include/tencentcloud/oceanus/v20190422/model/LogicalType.h
  include/tencentcloud/oceanus/v20190422/model/DescribeTreeResourcesRequest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeResourceConfigsResponse.h
  include/tencentcloud/oceanus/v20190422/model/DescribeClustersRequest.h
  include/tencentcloud/oceanus/v20190422/model/CreateWorkSpaceResponse.h
  include/tencentcloud/oceanus/v20190422/model/CreateJobResponse.h
  include/tencentcloud/oceanus/v20190422/model/SqlGatewayItem.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobRuntimeInfoResponse.h
  include/tencentcloud/oceanus/v20190422/model/StopJobDescription.h
  include/tencentcloud/oceanus/v20190422/model/CreateFolderRequest.h
  include/tencentcloud/oceanus/v20190422/model/DeleteJobConfigsResponse.h
  include/tencentcloud/oceanus/v20190422/model/DeleteTableConfigRequest.h
  include/tencentcloud/oceanus/v20190422/model/StatementResult.h
  include/tencentcloud/oceanus/v20190422/model/DescribeTreeJobsRsp.h
  include/tencentcloud/oceanus/v20190422/model/DeleteResourcesResponse.h
  include/tencentcloud/oceanus/v20190422/model/DeleteTableConfigResponse.h
  include/tencentcloud/oceanus/v20190422/model/SlotSharingGroupSpec.h
  include/tencentcloud/oceanus/v20190422/model/Tag.h
  include/tencentcloud/oceanus/v20190422/model/GetMetaTableResponse.h
  include/tencentcloud/oceanus/v20190422/model/FetchSqlGatewayStatementResultResponse.h
  include/tencentcloud/oceanus/v20190422/model/JobGraphNode.h
  include/tencentcloud/oceanus/v20190422/model/CreateWorkSpaceRequest.h
  include/tencentcloud/oceanus/v20190422/model/DeleteResourceConfigsRequest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobSavepointResponse.h
  include/tencentcloud/oceanus/v20190422/model/DeleteFoldersRequest.h
  include/tencentcloud/oceanus/v20190422/model/DeleteWorkSpaceRequest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobRuntimeInfoRequest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeWorkSpacesResponse.h
  include/tencentcloud/oceanus/v20190422/model/GatewayRefItem.h
  include/tencentcloud/oceanus/v20190422/model/CreateResourceResponse.h
  include/tencentcloud/oceanus/v20190422/model/ResourceRefLatest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeSystemResourcesRequest.h
  include/tencentcloud/oceanus/v20190422/model/CreateFolderResponse.h
  include/tencentcloud/oceanus/v20190422/model/DescribeResourcesResponse.h
  include/tencentcloud/oceanus/v20190422/model/RunJobDescription.h
  include/tencentcloud/oceanus/v20190422/model/DescribeResourceRelatedJobsResponse.h
  include/tencentcloud/oceanus/v20190422/model/JobEvent.h
  include/tencentcloud/oceanus/v20190422/model/ResourceRef.h
  include/tencentcloud/oceanus/v20190422/model/DescribeSystemResourcesResponse.h
  include/tencentcloud/oceanus/v20190422/model/ClazzLevel.h
  include/tencentcloud/oceanus/v20190422/model/SubEks.h
  include/tencentcloud/oceanus/v20190422/model/WorkSpaceClusterItem.h
  include/tencentcloud/oceanus/v20190422/model/CheckSavepointRequest.h
  include/tencentcloud/oceanus/v20190422/model/JobRuntimeInfo.h
  include/tencentcloud/oceanus/v20190422/model/StopJobsRequest.h
  include/tencentcloud/oceanus/v20190422/model/TraceModeConfiguration.h
  include/tencentcloud/oceanus/v20190422/model/RunJobsRequest.h
  include/tencentcloud/oceanus/v20190422/model/DeleteWorkSpaceResponse.h
  include/tencentcloud/oceanus/v20190422/model/TriggerJobSavepointResponse.h
  include/tencentcloud/oceanus/v20190422/model/DeleteJobsResponse.h
  include/tencentcloud/oceanus/v20190422/model/Property.h
  include/tencentcloud/oceanus/v20190422/model/JobGraphEdge.h
  include/tencentcloud/oceanus/v20190422/model/Savepoint.h
  include/tencentcloud/oceanus/v20190422/model/SystemResourceItem.h
  include/tencentcloud/oceanus/v20190422/model/DescribeResourceRelatedJobsRequest.h
  include/tencentcloud/oceanus/v20190422/model/ResourceConfigItem.h
  include/tencentcloud/oceanus/v20190422/model/RoleAuth.h
  include/tencentcloud/oceanus/v20190422/model/DescribeTreeResourcesRsp.h
  include/tencentcloud/oceanus/v20190422/model/ResourceRefDetail.h
  include/tencentcloud/oceanus/v20190422/model/TreeResourceItem.h
  include/tencentcloud/oceanus/v20190422/model/ExpertModeConfiguration.h
  include/tencentcloud/oceanus/v20190422/model/RunJobsResponse.h
  include/tencentcloud/oceanus/v20190422/model/Filter.h
  include/tencentcloud/oceanus/v20190422/model/DeleteResourcesRequest.h
  include/tencentcloud/oceanus/v20190422/model/ClusterGroupSetItem.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobConfigsRequest.h
  include/tencentcloud/oceanus/v20190422/model/ModifyJobRequest.h
  include/tencentcloud/oceanus/v20190422/model/GetMetaTableRequest.h
  include/tencentcloud/oceanus/v20190422/model/ResultData.h
  include/tencentcloud/oceanus/v20190422/model/DeleteResourceConfigsResponse.h
  include/tencentcloud/oceanus/v20190422/model/Cluster.h
  include/tencentcloud/oceanus/v20190422/model/JobGraph.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobSubmissionLogRequest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobsRequest.h
  include/tencentcloud/oceanus/v20190422/model/JobV1.h
  include/tencentcloud/oceanus/v20190422/model/JobConfig.h
  include/tencentcloud/oceanus/v20190422/model/DescribeResourceConfigsRequest.h
  include/tencentcloud/oceanus/v20190422/model/ModifyFolderResponse.h
  include/tencentcloud/oceanus/v20190422/model/SlotSharingGroup.h
  include/tencentcloud/oceanus/v20190422/model/ModifyWorkSpaceResponse.h
  include/tencentcloud/oceanus/v20190422/model/RunSqlGatewayStatementResponse.h
  include/tencentcloud/oceanus/v20190422/model/CreateJobRequest.h
  include/tencentcloud/oceanus/v20190422/model/JobInstanceForSubmissionLog.h
  include/tencentcloud/oceanus/v20190422/model/DescribeFolderRequest.h
  include/tencentcloud/oceanus/v20190422/model/Warehouse.h
  include/tencentcloud/oceanus/v20190422/model/DeleteFoldersResponse.h
  include/tencentcloud/oceanus/v20190422/model/SubFolderInfo.h
  include/tencentcloud/oceanus/v20190422/model/ClusterSession.h
  include/tencentcloud/oceanus/v20190422/model/CreateResourceConfigRequest.h
  include/tencentcloud/oceanus/v20190422/model/StopJobsResponse.h
  include/tencentcloud/oceanus/v20190422/model/DescribeClustersResponse.h
  include/tencentcloud/oceanus/v20190422/model/DescribeResourcesRequest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobEventsRequest.h
  include/tencentcloud/oceanus/v20190422/model/CheckSavepointResponse.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobsResponse.h
  include/tencentcloud/oceanus/v20190422/model/DescribeTreeResourcesResponse.h
  include/tencentcloud/oceanus/v20190422/model/Order.h
  include/tencentcloud/oceanus/v20190422/model/SetatsCvmInfo.h
  include/tencentcloud/oceanus/v20190422/model/CopyJobItem.h
  include/tencentcloud/oceanus/v20190422/model/DescribeTreeJobsRequest.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobConfigsResponse.h
  include/tencentcloud/oceanus/v20190422/model/FetchSqlGatewayStatementResultRequest.h
  include/tencentcloud/oceanus/v20190422/model/SessionClusterRefItem.h
  include/tencentcloud/oceanus/v20190422/model/DescribeJobEventsResponse.h
  )

set(oceanus_src
  src/v20190422/OceanusClient.cpp
  src/v20190422/model/CopyJobResult.cpp
  src/v20190422/model/CreateResourceRequest.cpp
  src/v20190422/model/ModifyFolderRequest.cpp
  src/v20190422/model/DescribeJobSubmissionLogResponse.cpp
  src/v20190422/model/DeleteJobsRequest.cpp
  src/v20190422/model/ModifyWorkSpaceRequest.cpp
  src/v20190422/model/ModifyJobResponse.cpp
  src/v20190422/model/CreateJobConfigResponse.cpp
  src/v20190422/model/CreateResourceConfigResponse.cpp
  src/v20190422/model/CreateJobConfigRequest.cpp
  src/v20190422/model/ClusterVersion.cpp
  src/v20190422/model/DescribeTreeJobsResponse.cpp
  src/v20190422/model/CopyJobsRequest.cpp
  src/v20190422/model/CopyJobsResponse.cpp
  src/v20190422/model/TriggerJobSavepointRequest.cpp
  src/v20190422/model/LogContent.cpp
  src/v20190422/model/DeleteJobConfigsRequest.cpp
  src/v20190422/model/JobEventInfo.cpp
  src/v20190422/model/ResourceLocParam.cpp
  src/v20190422/model/NodeConfig.cpp
  src/v20190422/model/WorkSpaceSetItem.cpp
  src/v20190422/model/DescribeJobSavepointRequest.cpp
  src/v20190422/model/ResultColumn.cpp
  src/v20190422/model/Setats.cpp
  src/v20190422/model/TreeJobSets.cpp
  src/v20190422/model/ResourceItem.cpp
  src/v20190422/model/RefJobStatusCountItem.cpp
  src/v20190422/model/RunSqlGatewayStatementRequest.cpp
  src/v20190422/model/DescribeFolderResponse.cpp
  src/v20190422/model/SetatsDisk.cpp
  src/v20190422/model/ResourceLoc.cpp
  src/v20190422/model/CCN.cpp
  src/v20190422/model/DescribeWorkSpacesRequest.cpp
  src/v20190422/model/ResourceRefJobInfo.cpp
  src/v20190422/model/LogicalType.cpp
  src/v20190422/model/DescribeTreeResourcesRequest.cpp
  src/v20190422/model/DescribeResourceConfigsResponse.cpp
  src/v20190422/model/DescribeClustersRequest.cpp
  src/v20190422/model/CreateWorkSpaceResponse.cpp
  src/v20190422/model/CreateJobResponse.cpp
  src/v20190422/model/SqlGatewayItem.cpp
  src/v20190422/model/DescribeJobRuntimeInfoResponse.cpp
  src/v20190422/model/StopJobDescription.cpp
  src/v20190422/model/CreateFolderRequest.cpp
  src/v20190422/model/DeleteJobConfigsResponse.cpp
  src/v20190422/model/DeleteTableConfigRequest.cpp
  src/v20190422/model/StatementResult.cpp
  src/v20190422/model/DescribeTreeJobsRsp.cpp
  src/v20190422/model/DeleteResourcesResponse.cpp
  src/v20190422/model/DeleteTableConfigResponse.cpp
  src/v20190422/model/SlotSharingGroupSpec.cpp
  src/v20190422/model/Tag.cpp
  src/v20190422/model/GetMetaTableResponse.cpp
  src/v20190422/model/FetchSqlGatewayStatementResultResponse.cpp
  src/v20190422/model/JobGraphNode.cpp
  src/v20190422/model/CreateWorkSpaceRequest.cpp
  src/v20190422/model/DeleteResourceConfigsRequest.cpp
  src/v20190422/model/DescribeJobSavepointResponse.cpp
  src/v20190422/model/DeleteFoldersRequest.cpp
  src/v20190422/model/DeleteWorkSpaceRequest.cpp
  src/v20190422/model/DescribeJobRuntimeInfoRequest.cpp
  src/v20190422/model/DescribeWorkSpacesResponse.cpp
  src/v20190422/model/GatewayRefItem.cpp
  src/v20190422/model/CreateResourceResponse.cpp
  src/v20190422/model/ResourceRefLatest.cpp
  src/v20190422/model/DescribeSystemResourcesRequest.cpp
  src/v20190422/model/CreateFolderResponse.cpp
  src/v20190422/model/DescribeResourcesResponse.cpp
  src/v20190422/model/RunJobDescription.cpp
  src/v20190422/model/DescribeResourceRelatedJobsResponse.cpp
  src/v20190422/model/JobEvent.cpp
  src/v20190422/model/ResourceRef.cpp
  src/v20190422/model/DescribeSystemResourcesResponse.cpp
  src/v20190422/model/ClazzLevel.cpp
  src/v20190422/model/SubEks.cpp
  src/v20190422/model/WorkSpaceClusterItem.cpp
  src/v20190422/model/CheckSavepointRequest.cpp
  src/v20190422/model/JobRuntimeInfo.cpp
  src/v20190422/model/StopJobsRequest.cpp
  src/v20190422/model/TraceModeConfiguration.cpp
  src/v20190422/model/RunJobsRequest.cpp
  src/v20190422/model/DeleteWorkSpaceResponse.cpp
  src/v20190422/model/TriggerJobSavepointResponse.cpp
  src/v20190422/model/DeleteJobsResponse.cpp
  src/v20190422/model/Property.cpp
  src/v20190422/model/JobGraphEdge.cpp
  src/v20190422/model/Savepoint.cpp
  src/v20190422/model/SystemResourceItem.cpp
  src/v20190422/model/DescribeResourceRelatedJobsRequest.cpp
  src/v20190422/model/ResourceConfigItem.cpp
  src/v20190422/model/RoleAuth.cpp
  src/v20190422/model/DescribeTreeResourcesRsp.cpp
  src/v20190422/model/ResourceRefDetail.cpp
  src/v20190422/model/TreeResourceItem.cpp
  src/v20190422/model/ExpertModeConfiguration.cpp
  src/v20190422/model/RunJobsResponse.cpp
  src/v20190422/model/Filter.cpp
  src/v20190422/model/DeleteResourcesRequest.cpp
  src/v20190422/model/ClusterGroupSetItem.cpp
  src/v20190422/model/DescribeJobConfigsRequest.cpp
  src/v20190422/model/ModifyJobRequest.cpp
  src/v20190422/model/GetMetaTableRequest.cpp
  src/v20190422/model/ResultData.cpp
  src/v20190422/model/DeleteResourceConfigsResponse.cpp
  src/v20190422/model/Cluster.cpp
  src/v20190422/model/JobGraph.cpp
  src/v20190422/model/DescribeJobSubmissionLogRequest.cpp
  src/v20190422/model/DescribeJobsRequest.cpp
  src/v20190422/model/JobV1.cpp
  src/v20190422/model/JobConfig.cpp
  src/v20190422/model/DescribeResourceConfigsRequest.cpp
  src/v20190422/model/ModifyFolderResponse.cpp
  src/v20190422/model/SlotSharingGroup.cpp
  src/v20190422/model/ModifyWorkSpaceResponse.cpp
  src/v20190422/model/RunSqlGatewayStatementResponse.cpp
  src/v20190422/model/CreateJobRequest.cpp
  src/v20190422/model/JobInstanceForSubmissionLog.cpp
  src/v20190422/model/DescribeFolderRequest.cpp
  src/v20190422/model/Warehouse.cpp
  src/v20190422/model/DeleteFoldersResponse.cpp
  src/v20190422/model/SubFolderInfo.cpp
  src/v20190422/model/ClusterSession.cpp
  src/v20190422/model/CreateResourceConfigRequest.cpp
  src/v20190422/model/StopJobsResponse.cpp
  src/v20190422/model/DescribeClustersResponse.cpp
  src/v20190422/model/DescribeResourcesRequest.cpp
  src/v20190422/model/DescribeJobEventsRequest.cpp
  src/v20190422/model/CheckSavepointResponse.cpp
  src/v20190422/model/DescribeJobsResponse.cpp
  src/v20190422/model/DescribeTreeResourcesResponse.cpp
  src/v20190422/model/Order.cpp
  src/v20190422/model/SetatsCvmInfo.cpp
  src/v20190422/model/CopyJobItem.cpp
  src/v20190422/model/DescribeTreeJobsRequest.cpp
  src/v20190422/model/DescribeJobConfigsResponse.cpp
  src/v20190422/model/FetchSqlGatewayStatementResultRequest.cpp
  src/v20190422/model/SessionClusterRefItem.cpp
  src/v20190422/model/DescribeJobEventsResponse.cpp
  )

set(oceanus_include
    include/tencentcloud/oceanus
  )

add_library(oceanus ${LIB_TYPE}
  ${oceanus_public_header}
  ${oceanus_public_header_model}
  ${oceanus_src})

set_target_properties(oceanus
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}oceanus
  )

target_include_directories(oceanus
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(oceanus
  core)

#install(FILES ${oceanus_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/oceanus/v20190422)
#install(FILES ${oceanus_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/oceanus/v20190422/model)
install(DIRECTORY ${oceanus_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS oceanus
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

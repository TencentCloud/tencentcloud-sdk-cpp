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
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeUinInWhitelistResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTasksRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/ClearTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeClustersRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableQuotasResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateBackupRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupNameResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterPasswordResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateClusterRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterNameRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ClearTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableResultNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateClusterResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeClusterTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/RecoverRecycleTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ParsedTableInfoNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/RegionInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableInfoNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/TagInfoUnit.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/RollbackTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesInRecycleResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/RollbackTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteIdlFilesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTableGroupResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateBackupResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableRollbackResultNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteClusterRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/TaskInfoNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/TagsInfoOfCluster.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterNameResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/RecoverRecycleTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTasksResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeUinInWhitelistRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateTableGroupResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupNameRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeRegionsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CompareIdlFilesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfoNew.h
  include/tencentcloud/tcaplusdb/v20190823/model/IdlFileInfoWithoutContent.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterPasswordRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ClusterInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableGroupTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/Filter.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableQuotasRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CompareIdlFilesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteTableGroupRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTableGroupTagsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateTablesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/TagsInfoOfTableGroup.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesInRecycleRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeTablesRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeRegionsRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/TableGroupInfo.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeClustersResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyClusterTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteIdlFilesResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/DescribeClusterTagsResponse.h
  include/tencentcloud/tcaplusdb/v20190823/model/CreateTableGroupRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosRequest.h
  include/tencentcloud/tcaplusdb/v20190823/model/TagsInfoOfTable.h
  include/tencentcloud/tcaplusdb/v20190823/model/DeleteClusterResponse.h
  )

set(tcaplusdb_src
  src/v20190823/TcaplusdbClient.cpp
  src/v20190823/model/DescribeUinInWhitelistResponse.cpp
  src/v20190823/model/DescribeTasksRequest.cpp
  src/v20190823/model/IdlFileInfo.cpp
  src/v20190823/model/ClearTablesRequest.cpp
  src/v20190823/model/DescribeClustersRequest.cpp
  src/v20190823/model/ModifyTableQuotasResponse.cpp
  src/v20190823/model/DescribeIdlFileInfosResponse.cpp
  src/v20190823/model/CreateBackupRequest.cpp
  src/v20190823/model/ModifyTableGroupNameResponse.cpp
  src/v20190823/model/DescribeTableTagsRequest.cpp
  src/v20190823/model/ModifyClusterPasswordResponse.cpp
  src/v20190823/model/CreateClusterRequest.cpp
  src/v20190823/model/VerifyIdlFilesRequest.cpp
  src/v20190823/model/ModifyClusterNameRequest.cpp
  src/v20190823/model/ClearTablesResponse.cpp
  src/v20190823/model/DescribeIdlFileInfosRequest.cpp
  src/v20190823/model/TableResultNew.cpp
  src/v20190823/model/CreateClusterResponse.cpp
  src/v20190823/model/ErrorInfo.cpp
  src/v20190823/model/CreateTablesRequest.cpp
  src/v20190823/model/DescribeClusterTagsRequest.cpp
  src/v20190823/model/RecoverRecycleTablesResponse.cpp
  src/v20190823/model/ParsedTableInfoNew.cpp
  src/v20190823/model/RegionInfo.cpp
  src/v20190823/model/TableInfoNew.cpp
  src/v20190823/model/TagInfoUnit.cpp
  src/v20190823/model/ModifyTableTagsResponse.cpp
  src/v20190823/model/RollbackTablesResponse.cpp
  src/v20190823/model/DescribeTablesInRecycleResponse.cpp
  src/v20190823/model/DescribeTableGroupsResponse.cpp
  src/v20190823/model/ModifyTablesResponse.cpp
  src/v20190823/model/ModifyTableMemosResponse.cpp
  src/v20190823/model/RollbackTablesRequest.cpp
  src/v20190823/model/DeleteIdlFilesRequest.cpp
  src/v20190823/model/DeleteTableGroupResponse.cpp
  src/v20190823/model/ModifyClusterTagsRequest.cpp
  src/v20190823/model/CreateBackupResponse.cpp
  src/v20190823/model/TableRollbackResultNew.cpp
  src/v20190823/model/DescribeTableGroupTagsResponse.cpp
  src/v20190823/model/DeleteClusterRequest.cpp
  src/v20190823/model/DescribeTablesResponse.cpp
  src/v20190823/model/TaskInfoNew.cpp
  src/v20190823/model/TagsInfoOfCluster.cpp
  src/v20190823/model/ModifyClusterNameResponse.cpp
  src/v20190823/model/RecoverRecycleTablesRequest.cpp
  src/v20190823/model/DescribeTableTagsResponse.cpp
  src/v20190823/model/DescribeTasksResponse.cpp
  src/v20190823/model/DeleteTablesRequest.cpp
  src/v20190823/model/DescribeUinInWhitelistRequest.cpp
  src/v20190823/model/CreateTableGroupResponse.cpp
  src/v20190823/model/ModifyTableGroupNameRequest.cpp
  src/v20190823/model/DescribeRegionsResponse.cpp
  src/v20190823/model/ModifyTableTagsRequest.cpp
  src/v20190823/model/DescribeTableGroupsRequest.cpp
  src/v20190823/model/ModifyTableGroupTagsResponse.cpp
  src/v20190823/model/CompareIdlFilesRequest.cpp
  src/v20190823/model/SelectedTableInfoNew.cpp
  src/v20190823/model/IdlFileInfoWithoutContent.cpp
  src/v20190823/model/ModifyClusterPasswordRequest.cpp
  src/v20190823/model/ClusterInfo.cpp
  src/v20190823/model/ModifyTableGroupTagsRequest.cpp
  src/v20190823/model/Filter.cpp
  src/v20190823/model/DeleteTablesResponse.cpp
  src/v20190823/model/ModifyTableQuotasRequest.cpp
  src/v20190823/model/CompareIdlFilesResponse.cpp
  src/v20190823/model/ModifyTablesRequest.cpp
  src/v20190823/model/DeleteTableGroupRequest.cpp
  src/v20190823/model/DescribeTableGroupTagsRequest.cpp
  src/v20190823/model/CreateTablesResponse.cpp
  src/v20190823/model/TagsInfoOfTableGroup.cpp
  src/v20190823/model/DescribeTablesInRecycleRequest.cpp
  src/v20190823/model/DescribeTablesRequest.cpp
  src/v20190823/model/DescribeRegionsRequest.cpp
  src/v20190823/model/TableGroupInfo.cpp
  src/v20190823/model/DescribeClustersResponse.cpp
  src/v20190823/model/VerifyIdlFilesResponse.cpp
  src/v20190823/model/ModifyClusterTagsResponse.cpp
  src/v20190823/model/DeleteIdlFilesResponse.cpp
  src/v20190823/model/DescribeClusterTagsResponse.cpp
  src/v20190823/model/CreateTableGroupRequest.cpp
  src/v20190823/model/ModifyTableMemosRequest.cpp
  src/v20190823/model/TagsInfoOfTable.cpp
  src/v20190823/model/DeleteClusterResponse.cpp
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

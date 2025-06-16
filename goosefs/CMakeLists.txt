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

set(goosefs_public_header
  include/tencentcloud/goosefs/v20220519/GoosefsClient.h
  )

set(goosefs_public_header_model
  include/tencentcloud/goosefs/v20220519/model/CreateFileSystemResponse.h
  include/tencentcloud/goosefs/v20220519/model/CreateFilesetRequest.h
  include/tencentcloud/goosefs/v20220519/model/DescribeFilesetsRequest.h
  include/tencentcloud/goosefs/v20220519/model/ClientNodeAttribute.h
  include/tencentcloud/goosefs/v20220519/model/GooseFSxAttribute.h
  include/tencentcloud/goosefs/v20220519/model/DescribeClusterRoleTokenRequest.h
  include/tencentcloud/goosefs/v20220519/model/DescribeFileSystemsResponse.h
  include/tencentcloud/goosefs/v20220519/model/DescribeFilesetGeneralConfigResponse.h
  include/tencentcloud/goosefs/v20220519/model/DetachFileSystemBucketResponse.h
  include/tencentcloud/goosefs/v20220519/model/DeleteFilesetRequest.h
  include/tencentcloud/goosefs/v20220519/model/FSAttribute.h
  include/tencentcloud/goosefs/v20220519/model/DescribeFilesetsResponse.h
  include/tencentcloud/goosefs/v20220519/model/DescribeClusterRoleTokenResponse.h
  include/tencentcloud/goosefs/v20220519/model/BatchDeleteClientNodesResponse.h
  include/tencentcloud/goosefs/v20220519/model/QueryCrossVpcSubnetSupportForClientNodeRequest.h
  include/tencentcloud/goosefs/v20220519/model/ChargeAttribute.h
  include/tencentcloud/goosefs/v20220519/model/DeleteCrossVpcSubnetSupportForClientNodeRequest.h
  include/tencentcloud/goosefs/v20220519/model/AttachFileSystemBucketRequest.h
  include/tencentcloud/goosefs/v20220519/model/SubnetInfo.h
  include/tencentcloud/goosefs/v20220519/model/DeleteFileSystemRequest.h
  include/tencentcloud/goosefs/v20220519/model/CreateFilesetResponse.h
  include/tencentcloud/goosefs/v20220519/model/BatchAddClientNodesResponse.h
  include/tencentcloud/goosefs/v20220519/model/GooseFSxBuildElement.h
  include/tencentcloud/goosefs/v20220519/model/AttachFileSystemBucketResponse.h
  include/tencentcloud/goosefs/v20220519/model/DescribeFilesetGeneralConfigRequest.h
  include/tencentcloud/goosefs/v20220519/model/CreateFileSystemRequest.h
  include/tencentcloud/goosefs/v20220519/model/DeleteCrossVpcSubnetSupportForClientNodeResponse.h
  include/tencentcloud/goosefs/v20220519/model/BuildClientNodeMountCommandRequest.h
  include/tencentcloud/goosefs/v20220519/model/DeleteFileSystemResponse.h
  include/tencentcloud/goosefs/v20220519/model/ExpandCapacityRequest.h
  include/tencentcloud/goosefs/v20220519/model/DetachFileSystemBucketRequest.h
  include/tencentcloud/goosefs/v20220519/model/ClientToken.h
  include/tencentcloud/goosefs/v20220519/model/UpdateFilesetRequest.h
  include/tencentcloud/goosefs/v20220519/model/ModifyDataRepositoryBandwidthResponse.h
  include/tencentcloud/goosefs/v20220519/model/QueryDataRepositoryBandwidthResponse.h
  include/tencentcloud/goosefs/v20220519/model/QueryDataRepositoryBandwidthRequest.h
  include/tencentcloud/goosefs/v20220519/model/ClientClusterManagerNodeInfo.h
  include/tencentcloud/goosefs/v20220519/model/FilesetInfo.h
  include/tencentcloud/goosefs/v20220519/model/ExpandCapacityResponse.h
  include/tencentcloud/goosefs/v20220519/model/LinuxNodeAttribute.h
  include/tencentcloud/goosefs/v20220519/model/BatchDeleteClientNodesRequest.h
  include/tencentcloud/goosefs/v20220519/model/DescribeFileSystemBucketsRequest.h
  include/tencentcloud/goosefs/v20220519/model/UpdateFilesetGeneralConfigResponse.h
  include/tencentcloud/goosefs/v20220519/model/QueryCrossVpcSubnetSupportForClientNodeResponse.h
  include/tencentcloud/goosefs/v20220519/model/UpdateFilesetResponse.h
  include/tencentcloud/goosefs/v20220519/model/DescribeFileSystemsRequest.h
  include/tencentcloud/goosefs/v20220519/model/UpdateFilesetGeneralConfigRequest.h
  include/tencentcloud/goosefs/v20220519/model/DescribeClusterClientTokenRequest.h
  include/tencentcloud/goosefs/v20220519/model/AddCrossVpcSubnetSupportForClientNodeResponse.h
  include/tencentcloud/goosefs/v20220519/model/CreateDataRepositoryTaskResponse.h
  include/tencentcloud/goosefs/v20220519/model/DescribeClusterRolesResponse.h
  include/tencentcloud/goosefs/v20220519/model/ClusterRole.h
  include/tencentcloud/goosefs/v20220519/model/DeleteFilesetResponse.h
  include/tencentcloud/goosefs/v20220519/model/DescribeDataRepositoryTaskStatusResponse.h
  include/tencentcloud/goosefs/v20220519/model/BatchAddClientNodesRequest.h
  include/tencentcloud/goosefs/v20220519/model/AddCrossVpcSubnetSupportForClientNodeRequest.h
  include/tencentcloud/goosefs/v20220519/model/DescribeDataRepositoryTaskStatusRequest.h
  include/tencentcloud/goosefs/v20220519/model/RoleToken.h
  include/tencentcloud/goosefs/v20220519/model/DescribeFileSystemBucketsResponse.h
  include/tencentcloud/goosefs/v20220519/model/DescribeClientNodesRequest.h
  include/tencentcloud/goosefs/v20220519/model/Tag.h
  include/tencentcloud/goosefs/v20220519/model/ModifyDataRepositoryBandwidthRequest.h
  include/tencentcloud/goosefs/v20220519/model/DescribeClusterRolesRequest.h
  include/tencentcloud/goosefs/v20220519/model/CreateDataRepositoryTaskRequest.h
  include/tencentcloud/goosefs/v20220519/model/DescribeClientNodesResponse.h
  include/tencentcloud/goosefs/v20220519/model/BuildClientNodeMountCommandResponse.h
  include/tencentcloud/goosefs/v20220519/model/DescribeClusterClientTokenResponse.h
  include/tencentcloud/goosefs/v20220519/model/MappedBucket.h
  )

set(goosefs_src
  src/v20220519/GoosefsClient.cpp
  src/v20220519/model/CreateFileSystemResponse.cpp
  src/v20220519/model/CreateFilesetRequest.cpp
  src/v20220519/model/DescribeFilesetsRequest.cpp
  src/v20220519/model/ClientNodeAttribute.cpp
  src/v20220519/model/GooseFSxAttribute.cpp
  src/v20220519/model/DescribeClusterRoleTokenRequest.cpp
  src/v20220519/model/DescribeFileSystemsResponse.cpp
  src/v20220519/model/DescribeFilesetGeneralConfigResponse.cpp
  src/v20220519/model/DetachFileSystemBucketResponse.cpp
  src/v20220519/model/DeleteFilesetRequest.cpp
  src/v20220519/model/FSAttribute.cpp
  src/v20220519/model/DescribeFilesetsResponse.cpp
  src/v20220519/model/DescribeClusterRoleTokenResponse.cpp
  src/v20220519/model/BatchDeleteClientNodesResponse.cpp
  src/v20220519/model/QueryCrossVpcSubnetSupportForClientNodeRequest.cpp
  src/v20220519/model/ChargeAttribute.cpp
  src/v20220519/model/DeleteCrossVpcSubnetSupportForClientNodeRequest.cpp
  src/v20220519/model/AttachFileSystemBucketRequest.cpp
  src/v20220519/model/SubnetInfo.cpp
  src/v20220519/model/DeleteFileSystemRequest.cpp
  src/v20220519/model/CreateFilesetResponse.cpp
  src/v20220519/model/BatchAddClientNodesResponse.cpp
  src/v20220519/model/GooseFSxBuildElement.cpp
  src/v20220519/model/AttachFileSystemBucketResponse.cpp
  src/v20220519/model/DescribeFilesetGeneralConfigRequest.cpp
  src/v20220519/model/CreateFileSystemRequest.cpp
  src/v20220519/model/DeleteCrossVpcSubnetSupportForClientNodeResponse.cpp
  src/v20220519/model/BuildClientNodeMountCommandRequest.cpp
  src/v20220519/model/DeleteFileSystemResponse.cpp
  src/v20220519/model/ExpandCapacityRequest.cpp
  src/v20220519/model/DetachFileSystemBucketRequest.cpp
  src/v20220519/model/ClientToken.cpp
  src/v20220519/model/UpdateFilesetRequest.cpp
  src/v20220519/model/ModifyDataRepositoryBandwidthResponse.cpp
  src/v20220519/model/QueryDataRepositoryBandwidthResponse.cpp
  src/v20220519/model/QueryDataRepositoryBandwidthRequest.cpp
  src/v20220519/model/ClientClusterManagerNodeInfo.cpp
  src/v20220519/model/FilesetInfo.cpp
  src/v20220519/model/ExpandCapacityResponse.cpp
  src/v20220519/model/LinuxNodeAttribute.cpp
  src/v20220519/model/BatchDeleteClientNodesRequest.cpp
  src/v20220519/model/DescribeFileSystemBucketsRequest.cpp
  src/v20220519/model/UpdateFilesetGeneralConfigResponse.cpp
  src/v20220519/model/QueryCrossVpcSubnetSupportForClientNodeResponse.cpp
  src/v20220519/model/UpdateFilesetResponse.cpp
  src/v20220519/model/DescribeFileSystemsRequest.cpp
  src/v20220519/model/UpdateFilesetGeneralConfigRequest.cpp
  src/v20220519/model/DescribeClusterClientTokenRequest.cpp
  src/v20220519/model/AddCrossVpcSubnetSupportForClientNodeResponse.cpp
  src/v20220519/model/CreateDataRepositoryTaskResponse.cpp
  src/v20220519/model/DescribeClusterRolesResponse.cpp
  src/v20220519/model/ClusterRole.cpp
  src/v20220519/model/DeleteFilesetResponse.cpp
  src/v20220519/model/DescribeDataRepositoryTaskStatusResponse.cpp
  src/v20220519/model/BatchAddClientNodesRequest.cpp
  src/v20220519/model/AddCrossVpcSubnetSupportForClientNodeRequest.cpp
  src/v20220519/model/DescribeDataRepositoryTaskStatusRequest.cpp
  src/v20220519/model/RoleToken.cpp
  src/v20220519/model/DescribeFileSystemBucketsResponse.cpp
  src/v20220519/model/DescribeClientNodesRequest.cpp
  src/v20220519/model/Tag.cpp
  src/v20220519/model/ModifyDataRepositoryBandwidthRequest.cpp
  src/v20220519/model/DescribeClusterRolesRequest.cpp
  src/v20220519/model/CreateDataRepositoryTaskRequest.cpp
  src/v20220519/model/DescribeClientNodesResponse.cpp
  src/v20220519/model/BuildClientNodeMountCommandResponse.cpp
  src/v20220519/model/DescribeClusterClientTokenResponse.cpp
  src/v20220519/model/MappedBucket.cpp
  )

set(goosefs_include
    include/tencentcloud/goosefs
  )

add_library(goosefs ${LIB_TYPE}
  ${goosefs_public_header}
  ${goosefs_public_header_model}
  ${goosefs_src})

set_target_properties(goosefs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}goosefs
  )

target_include_directories(goosefs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(goosefs
  core)

#install(FILES ${goosefs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/goosefs/v20220519)
#install(FILES ${goosefs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/goosefs/v20220519/model)
install(DIRECTORY ${goosefs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS goosefs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

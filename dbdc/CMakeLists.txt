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

set(dbdc_public_header
  include/tencentcloud/dbdc/v20201029/DbdcClient.h
  )

set(dbdc_public_header_model
  include/tencentcloud/dbdc/v20201029/model/IsolateDBCustomNodeRequest.h
  include/tencentcloud/dbdc/v20201029/model/SystemDisk.h
  include/tencentcloud/dbdc/v20201029/model/RemoveNodesFromDBCustomClusterRequest.h
  include/tencentcloud/dbdc/v20201029/model/HostDetail.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterDetailResponse.h
  include/tencentcloud/dbdc/v20201029/model/LoginSettings.h
  include/tencentcloud/dbdc/v20201029/model/DBCustomImage.h
  include/tencentcloud/dbdc/v20201029/model/DBCustomClusterNode.h
  include/tencentcloud/dbdc/v20201029/model/DestroyDBCustomClusterRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomNodesResponse.h
  include/tencentcloud/dbdc/v20201029/model/ModifyDBCustomClusterTagsResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterNodesRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstanceDetail.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomTaskStatusRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstanceListRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomClustersRequest.h
  include/tencentcloud/dbdc/v20201029/model/InstanceDeviceInfo.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterKubeconfigRequest.h
  include/tencentcloud/dbdc/v20201029/model/DestroyDBCustomNodeResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBInstancesRequest.h
  include/tencentcloud/dbdc/v20201029/model/AddNodesToDBCustomClusterRequest.h
  include/tencentcloud/dbdc/v20201029/model/ModifyInstanceNameRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeHostListResponse.h
  include/tencentcloud/dbdc/v20201029/model/ApiServerNetwork.h
  include/tencentcloud/dbdc/v20201029/model/ResourceTag.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomClustersResponse.h
  include/tencentcloud/dbdc/v20201029/model/IsolateDBCustomNodeResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBInstancesResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomTaskStatusResponse.h
  include/tencentcloud/dbdc/v20201029/model/CreateDBCustomNodesResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstancesResponse.h
  include/tencentcloud/dbdc/v20201029/model/ModifyDBCustomClusterTagsRequest.h
  include/tencentcloud/dbdc/v20201029/model/ModifyDBCustomNodeTagsRequest.h
  include/tencentcloud/dbdc/v20201029/model/CheckRoleAuthorizedResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstanceDetailResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterNodesResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstanceDetailRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstancesRequest.h
  include/tencentcloud/dbdc/v20201029/model/DBInstanceDetail.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterDetailRequest.h
  include/tencentcloud/dbdc/v20201029/model/ModifyInstanceNameResponse.h
  include/tencentcloud/dbdc/v20201029/model/DestroyDBCustomNodeRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterKubeconfigResponse.h
  include/tencentcloud/dbdc/v20201029/model/Filter.h
  include/tencentcloud/dbdc/v20201029/model/ContainerNetwork.h
  include/tencentcloud/dbdc/v20201029/model/RenewDBCustomNodeRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeHostListRequest.h
  include/tencentcloud/dbdc/v20201029/model/CheckRoleAuthorizedRequest.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomNodesRequest.h
  include/tencentcloud/dbdc/v20201029/model/CreateDBCustomNodesRequest.h
  include/tencentcloud/dbdc/v20201029/model/InstanceExpand.h
  include/tencentcloud/dbdc/v20201029/model/RenewDBCustomNodeResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeInstanceListResponse.h
  include/tencentcloud/dbdc/v20201029/model/DBCustomCluster.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomImagesResponse.h
  include/tencentcloud/dbdc/v20201029/model/CreateDBCustomClusterResponse.h
  include/tencentcloud/dbdc/v20201029/model/RemoveNodesFromDBCustomClusterResponse.h
  include/tencentcloud/dbdc/v20201029/model/DescribeDBCustomImagesRequest.h
  include/tencentcloud/dbdc/v20201029/model/DeviceInfo.h
  include/tencentcloud/dbdc/v20201029/model/InstanceDetail.h
  include/tencentcloud/dbdc/v20201029/model/AddNodesToDBCustomClusterResponse.h
  include/tencentcloud/dbdc/v20201029/model/Tag.h
  include/tencentcloud/dbdc/v20201029/model/DestroyDBCustomClusterResponse.h
  include/tencentcloud/dbdc/v20201029/model/ModifyDBCustomNodeTagsResponse.h
  include/tencentcloud/dbdc/v20201029/model/CreateDBCustomClusterRequest.h
  include/tencentcloud/dbdc/v20201029/model/DBCustomNode.h
  include/tencentcloud/dbdc/v20201029/model/DataDisk.h
  )

set(dbdc_src
  src/v20201029/DbdcClient.cpp
  src/v20201029/model/IsolateDBCustomNodeRequest.cpp
  src/v20201029/model/SystemDisk.cpp
  src/v20201029/model/RemoveNodesFromDBCustomClusterRequest.cpp
  src/v20201029/model/HostDetail.cpp
  src/v20201029/model/DescribeDBCustomClusterDetailResponse.cpp
  src/v20201029/model/LoginSettings.cpp
  src/v20201029/model/DBCustomImage.cpp
  src/v20201029/model/DBCustomClusterNode.cpp
  src/v20201029/model/DestroyDBCustomClusterRequest.cpp
  src/v20201029/model/DescribeDBCustomNodesResponse.cpp
  src/v20201029/model/ModifyDBCustomClusterTagsResponse.cpp
  src/v20201029/model/DescribeDBCustomClusterNodesRequest.cpp
  src/v20201029/model/DescribeInstanceDetail.cpp
  src/v20201029/model/DescribeDBCustomTaskStatusRequest.cpp
  src/v20201029/model/DescribeInstanceListRequest.cpp
  src/v20201029/model/DescribeDBCustomClustersRequest.cpp
  src/v20201029/model/InstanceDeviceInfo.cpp
  src/v20201029/model/DescribeDBCustomClusterKubeconfigRequest.cpp
  src/v20201029/model/DestroyDBCustomNodeResponse.cpp
  src/v20201029/model/DescribeDBInstancesRequest.cpp
  src/v20201029/model/AddNodesToDBCustomClusterRequest.cpp
  src/v20201029/model/ModifyInstanceNameRequest.cpp
  src/v20201029/model/DescribeHostListResponse.cpp
  src/v20201029/model/ApiServerNetwork.cpp
  src/v20201029/model/ResourceTag.cpp
  src/v20201029/model/DescribeDBCustomClustersResponse.cpp
  src/v20201029/model/IsolateDBCustomNodeResponse.cpp
  src/v20201029/model/DescribeDBInstancesResponse.cpp
  src/v20201029/model/DescribeDBCustomTaskStatusResponse.cpp
  src/v20201029/model/CreateDBCustomNodesResponse.cpp
  src/v20201029/model/DescribeInstancesResponse.cpp
  src/v20201029/model/ModifyDBCustomClusterTagsRequest.cpp
  src/v20201029/model/ModifyDBCustomNodeTagsRequest.cpp
  src/v20201029/model/CheckRoleAuthorizedResponse.cpp
  src/v20201029/model/DescribeInstanceDetailResponse.cpp
  src/v20201029/model/DescribeDBCustomClusterNodesResponse.cpp
  src/v20201029/model/DescribeInstanceDetailRequest.cpp
  src/v20201029/model/DescribeInstancesRequest.cpp
  src/v20201029/model/DBInstanceDetail.cpp
  src/v20201029/model/DescribeDBCustomClusterDetailRequest.cpp
  src/v20201029/model/ModifyInstanceNameResponse.cpp
  src/v20201029/model/DestroyDBCustomNodeRequest.cpp
  src/v20201029/model/DescribeDBCustomClusterKubeconfigResponse.cpp
  src/v20201029/model/Filter.cpp
  src/v20201029/model/ContainerNetwork.cpp
  src/v20201029/model/RenewDBCustomNodeRequest.cpp
  src/v20201029/model/DescribeHostListRequest.cpp
  src/v20201029/model/CheckRoleAuthorizedRequest.cpp
  src/v20201029/model/DescribeDBCustomNodesRequest.cpp
  src/v20201029/model/CreateDBCustomNodesRequest.cpp
  src/v20201029/model/InstanceExpand.cpp
  src/v20201029/model/RenewDBCustomNodeResponse.cpp
  src/v20201029/model/DescribeInstanceListResponse.cpp
  src/v20201029/model/DBCustomCluster.cpp
  src/v20201029/model/DescribeDBCustomImagesResponse.cpp
  src/v20201029/model/CreateDBCustomClusterResponse.cpp
  src/v20201029/model/RemoveNodesFromDBCustomClusterResponse.cpp
  src/v20201029/model/DescribeDBCustomImagesRequest.cpp
  src/v20201029/model/DeviceInfo.cpp
  src/v20201029/model/InstanceDetail.cpp
  src/v20201029/model/AddNodesToDBCustomClusterResponse.cpp
  src/v20201029/model/Tag.cpp
  src/v20201029/model/DestroyDBCustomClusterResponse.cpp
  src/v20201029/model/ModifyDBCustomNodeTagsResponse.cpp
  src/v20201029/model/CreateDBCustomClusterRequest.cpp
  src/v20201029/model/DBCustomNode.cpp
  src/v20201029/model/DataDisk.cpp
  )

set(dbdc_include
    include/tencentcloud/dbdc
  )

add_library(dbdc ${LIB_TYPE}
  ${dbdc_public_header}
  ${dbdc_public_header_model}
  ${dbdc_src})

set_target_properties(dbdc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dbdc
  )

target_include_directories(dbdc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dbdc
  core)

#install(FILES ${dbdc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dbdc/v20201029)
#install(FILES ${dbdc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dbdc/v20201029/model)
install(DIRECTORY ${dbdc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dbdc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

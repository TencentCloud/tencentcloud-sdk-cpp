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

set(tke_public_header
  include/tencentcloud/tke/v20180525/TkeClient.h
  )

set(tke_public_header_model
  include/tencentcloud/tke/v20180525/model/DescribeClusterEndpointVipStatusRequest.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterSecurityResponse.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterSecurityRequest.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterInstancesResponse.h
  include/tencentcloud/tke/v20180525/model/CreateClusterRouteRequest.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterEndpointVipStatusResponse.h
  include/tencentcloud/tke/v20180525/model/ModifyClusterEndpointSPRequest.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterInstancesResponse.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterResponse.h
  include/tencentcloud/tke/v20180525/model/CreateClusterRouteTableResponse.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterEndpointResponse.h
  include/tencentcloud/tke/v20180525/model/RouteInfo.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterRequest.h
  include/tencentcloud/tke/v20180525/model/RunInstancesForNode.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterAsGroupsRequest.h
  include/tencentcloud/tke/v20180525/model/DescribeExistedInstancesRequest.h
  include/tencentcloud/tke/v20180525/model/DescribeRegionsResponse.h
  include/tencentcloud/tke/v20180525/model/CreateClusterRouteResponse.h
  include/tencentcloud/tke/v20180525/model/RouteTableInfo.h
  include/tencentcloud/tke/v20180525/model/ClusterAsGroup.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterEndpointStatusRequest.h
  include/tencentcloud/tke/v20180525/model/Tag.h
  include/tencentcloud/tke/v20180525/model/ClusterNetworkSettings.h
  include/tencentcloud/tke/v20180525/model/DescribeImagesResponse.h
  include/tencentcloud/tke/v20180525/model/AutoScalingGroupRange.h
  include/tencentcloud/tke/v20180525/model/ModifyClusterAttributeRequest.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterRouteResponse.h
  include/tencentcloud/tke/v20180525/model/CreateClusterEndpointVipResponse.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterRoutesResponse.h
  include/tencentcloud/tke/v20180525/model/DescribeClustersRequest.h
  include/tencentcloud/tke/v20180525/model/ExtensionAddon.h
  include/tencentcloud/tke/v20180525/model/RegionInstance.h
  include/tencentcloud/tke/v20180525/model/Label.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterEndpointVipResponse.h
  include/tencentcloud/tke/v20180525/model/ClusterBasicSettings.h
  include/tencentcloud/tke/v20180525/model/RouteTableConflict.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterInstancesRequest.h
  include/tencentcloud/tke/v20180525/model/ModifyClusterAsGroupAttributeResponse.h
  include/tencentcloud/tke/v20180525/model/CreateClusterInstancesRequest.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterRouteTablesResponse.h
  include/tencentcloud/tke/v20180525/model/ClusterCIDRSettings.h
  include/tencentcloud/tke/v20180525/model/CreateClusterEndpointVipRequest.h
  include/tencentcloud/tke/v20180525/model/ExistedInstance.h
  include/tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsResponse.h
  include/tencentcloud/tke/v20180525/model/TagSpecification.h
  include/tencentcloud/tke/v20180525/model/DescribeRegionsRequest.h
  include/tencentcloud/tke/v20180525/model/DescribeClustersResponse.h
  include/tencentcloud/tke/v20180525/model/ClusterExtraArgs.h
  include/tencentcloud/tke/v20180525/model/DataDisk.h
  include/tencentcloud/tke/v20180525/model/DescribeExistedInstancesResponse.h
  include/tencentcloud/tke/v20180525/model/ResourceDeleteOption.h
  include/tencentcloud/tke/v20180525/model/LoginSettings.h
  include/tencentcloud/tke/v20180525/model/Instance.h
  include/tencentcloud/tke/v20180525/model/EnhancedService.h
  include/tencentcloud/tke/v20180525/model/CreateClusterAsGroupRequest.h
  include/tencentcloud/tke/v20180525/model/CreateClusterResponse.h
  include/tencentcloud/tke/v20180525/model/RunSecurityServiceEnabled.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterRouteTableRequest.h
  include/tencentcloud/tke/v20180525/model/CreateClusterRequest.h
  include/tencentcloud/tke/v20180525/model/InstanceExtraArgs.h
  include/tencentcloud/tke/v20180525/model/CreateClusterAsGroupResponse.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterAsGroupsResponse.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterInstancesRequest.h
  include/tencentcloud/tke/v20180525/model/Filter.h
  include/tencentcloud/tke/v20180525/model/ImageInstance.h
  include/tencentcloud/tke/v20180525/model/CreateClusterEndpointResponse.h
  include/tencentcloud/tke/v20180525/model/ClusterAdvancedSettings.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterEndpointVipRequest.h
  include/tencentcloud/tke/v20180525/model/Cluster.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterEndpointStatusResponse.h
  include/tencentcloud/tke/v20180525/model/AddExistedInstancesResponse.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterRouteTableResponse.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterAsGroupOptionRequest.h
  include/tencentcloud/tke/v20180525/model/ModifyClusterAttributeResponse.h
  include/tencentcloud/tke/v20180525/model/CreateClusterEndpointRequest.h
  include/tencentcloud/tke/v20180525/model/AddExistedInstancesRequest.h
  include/tencentcloud/tke/v20180525/model/ClusterAsGroupOption.h
  include/tencentcloud/tke/v20180525/model/CreateClusterInstancesResponse.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterRouteTablesRequest.h
  include/tencentcloud/tke/v20180525/model/ExistedInstancesForNode.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterRoutesRequest.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterRouteRequest.h
  include/tencentcloud/tke/v20180525/model/DeleteClusterEndpointRequest.h
  include/tencentcloud/tke/v20180525/model/CreateClusterRouteTableRequest.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterAsGroupsRequest.h
  include/tencentcloud/tke/v20180525/model/DescribeImagesRequest.h
  include/tencentcloud/tke/v20180525/model/ModifyClusterEndpointSPResponse.h
  include/tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsRequest.h
  include/tencentcloud/tke/v20180525/model/ExistedInstancesPara.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterAsGroupOptionResponse.h
  include/tencentcloud/tke/v20180525/model/ClusterAsGroupAttribute.h
  include/tencentcloud/tke/v20180525/model/RunMonitorServiceEnabled.h
  include/tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h
  include/tencentcloud/tke/v20180525/model/ModifyClusterAsGroupAttributeRequest.h
  include/tencentcloud/tke/v20180525/model/InstanceDataDiskMountSetting.h
  include/tencentcloud/tke/v20180525/model/DescribeClusterAsGroupsResponse.h
  )

set(tke_src
  src/v20180525/TkeClient.cpp
  src/v20180525/model/DescribeClusterEndpointVipStatusRequest.cpp
  src/v20180525/model/DescribeClusterSecurityResponse.cpp
  src/v20180525/model/DescribeClusterSecurityRequest.cpp
  src/v20180525/model/DeleteClusterInstancesResponse.cpp
  src/v20180525/model/CreateClusterRouteRequest.cpp
  src/v20180525/model/DescribeClusterEndpointVipStatusResponse.cpp
  src/v20180525/model/ModifyClusterEndpointSPRequest.cpp
  src/v20180525/model/DescribeClusterInstancesResponse.cpp
  src/v20180525/model/DeleteClusterResponse.cpp
  src/v20180525/model/CreateClusterRouteTableResponse.cpp
  src/v20180525/model/DeleteClusterEndpointResponse.cpp
  src/v20180525/model/RouteInfo.cpp
  src/v20180525/model/DeleteClusterRequest.cpp
  src/v20180525/model/RunInstancesForNode.cpp
  src/v20180525/model/DeleteClusterAsGroupsRequest.cpp
  src/v20180525/model/DescribeExistedInstancesRequest.cpp
  src/v20180525/model/DescribeRegionsResponse.cpp
  src/v20180525/model/CreateClusterRouteResponse.cpp
  src/v20180525/model/RouteTableInfo.cpp
  src/v20180525/model/ClusterAsGroup.cpp
  src/v20180525/model/DescribeClusterEndpointStatusRequest.cpp
  src/v20180525/model/Tag.cpp
  src/v20180525/model/ClusterNetworkSettings.cpp
  src/v20180525/model/DescribeImagesResponse.cpp
  src/v20180525/model/AutoScalingGroupRange.cpp
  src/v20180525/model/ModifyClusterAttributeRequest.cpp
  src/v20180525/model/DeleteClusterRouteResponse.cpp
  src/v20180525/model/CreateClusterEndpointVipResponse.cpp
  src/v20180525/model/DescribeClusterRoutesResponse.cpp
  src/v20180525/model/DescribeClustersRequest.cpp
  src/v20180525/model/ExtensionAddon.cpp
  src/v20180525/model/RegionInstance.cpp
  src/v20180525/model/Label.cpp
  src/v20180525/model/DeleteClusterEndpointVipResponse.cpp
  src/v20180525/model/ClusterBasicSettings.cpp
  src/v20180525/model/RouteTableConflict.cpp
  src/v20180525/model/DeleteClusterInstancesRequest.cpp
  src/v20180525/model/ModifyClusterAsGroupAttributeResponse.cpp
  src/v20180525/model/CreateClusterInstancesRequest.cpp
  src/v20180525/model/DescribeClusterRouteTablesResponse.cpp
  src/v20180525/model/ClusterCIDRSettings.cpp
  src/v20180525/model/CreateClusterEndpointVipRequest.cpp
  src/v20180525/model/ExistedInstance.cpp
  src/v20180525/model/DescribeRouteTableConflictsResponse.cpp
  src/v20180525/model/TagSpecification.cpp
  src/v20180525/model/DescribeRegionsRequest.cpp
  src/v20180525/model/DescribeClustersResponse.cpp
  src/v20180525/model/ClusterExtraArgs.cpp
  src/v20180525/model/DataDisk.cpp
  src/v20180525/model/DescribeExistedInstancesResponse.cpp
  src/v20180525/model/ResourceDeleteOption.cpp
  src/v20180525/model/LoginSettings.cpp
  src/v20180525/model/Instance.cpp
  src/v20180525/model/EnhancedService.cpp
  src/v20180525/model/CreateClusterAsGroupRequest.cpp
  src/v20180525/model/CreateClusterResponse.cpp
  src/v20180525/model/RunSecurityServiceEnabled.cpp
  src/v20180525/model/DeleteClusterRouteTableRequest.cpp
  src/v20180525/model/CreateClusterRequest.cpp
  src/v20180525/model/InstanceExtraArgs.cpp
  src/v20180525/model/CreateClusterAsGroupResponse.cpp
  src/v20180525/model/DeleteClusterAsGroupsResponse.cpp
  src/v20180525/model/DescribeClusterInstancesRequest.cpp
  src/v20180525/model/Filter.cpp
  src/v20180525/model/ImageInstance.cpp
  src/v20180525/model/CreateClusterEndpointResponse.cpp
  src/v20180525/model/ClusterAdvancedSettings.cpp
  src/v20180525/model/DeleteClusterEndpointVipRequest.cpp
  src/v20180525/model/Cluster.cpp
  src/v20180525/model/DescribeClusterEndpointStatusResponse.cpp
  src/v20180525/model/AddExistedInstancesResponse.cpp
  src/v20180525/model/DeleteClusterRouteTableResponse.cpp
  src/v20180525/model/DescribeClusterAsGroupOptionRequest.cpp
  src/v20180525/model/ModifyClusterAttributeResponse.cpp
  src/v20180525/model/CreateClusterEndpointRequest.cpp
  src/v20180525/model/AddExistedInstancesRequest.cpp
  src/v20180525/model/ClusterAsGroupOption.cpp
  src/v20180525/model/CreateClusterInstancesResponse.cpp
  src/v20180525/model/DescribeClusterRouteTablesRequest.cpp
  src/v20180525/model/ExistedInstancesForNode.cpp
  src/v20180525/model/DescribeClusterRoutesRequest.cpp
  src/v20180525/model/DeleteClusterRouteRequest.cpp
  src/v20180525/model/DeleteClusterEndpointRequest.cpp
  src/v20180525/model/CreateClusterRouteTableRequest.cpp
  src/v20180525/model/DescribeClusterAsGroupsRequest.cpp
  src/v20180525/model/DescribeImagesRequest.cpp
  src/v20180525/model/ModifyClusterEndpointSPResponse.cpp
  src/v20180525/model/DescribeRouteTableConflictsRequest.cpp
  src/v20180525/model/ExistedInstancesPara.cpp
  src/v20180525/model/DescribeClusterAsGroupOptionResponse.cpp
  src/v20180525/model/ClusterAsGroupAttribute.cpp
  src/v20180525/model/RunMonitorServiceEnabled.cpp
  src/v20180525/model/InstanceAdvancedSettings.cpp
  src/v20180525/model/ModifyClusterAsGroupAttributeRequest.cpp
  src/v20180525/model/InstanceDataDiskMountSetting.cpp
  src/v20180525/model/DescribeClusterAsGroupsResponse.cpp
  )

set(tke_include
    include/tencentcloud/tke
  )

add_library(tke ${LIB_TYPE}
  ${tke_public_header}
  ${tke_public_header_model}
  ${tke_src})

set_target_properties(tke
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tke
  )

target_include_directories(tke
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tke
  core)

#install(FILES ${tke_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tke/v20180525)
#install(FILES ${tke_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tke/v20180525/model)
install(DIRECTORY ${tke_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tke
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

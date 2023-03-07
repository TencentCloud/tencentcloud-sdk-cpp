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

set(tse_public_header
  include/tencentcloud/tse/v20201207/TseClient.h
  )

set(tse_public_header_model
  include/tencentcloud/tse/v20201207/model/NacosReplica.h
  include/tencentcloud/tse/v20201207/model/DescribeNacosReplicasRequest.h
  include/tencentcloud/tse/v20201207/model/UpdateEngineInternetAccessRequest.h
  include/tencentcloud/tse/v20201207/model/ApolloEnvParam.h
  include/tencentcloud/tse/v20201207/model/UpdateEngineInternetAccessResponse.h
  include/tencentcloud/tse/v20201207/model/KVPair.h
  include/tencentcloud/tse/v20201207/model/DeleteEngineResponse.h
  include/tencentcloud/tse/v20201207/model/CreateEngineResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeZookeeperReplicasRequest.h
  include/tencentcloud/tse/v20201207/model/DeleteEngineRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesResult.h
  include/tencentcloud/tse/v20201207/model/ZookeeperReplica.h
  include/tencentcloud/tse/v20201207/model/EngineRegionInfo.h
  include/tencentcloud/tse/v20201207/model/DescribeNacosServerInterfacesRequest.h
  include/tencentcloud/tse/v20201207/model/SREInstance.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstancesResponse.h
  include/tencentcloud/tse/v20201207/model/ZookeeperServerInterface.h
  include/tencentcloud/tse/v20201207/model/ServiceGovernanceInfo.h
  include/tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNode.h
  include/tencentcloud/tse/v20201207/model/DescribeNacosReplicasResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeZookeeperServerInterfacesResponse.h
  include/tencentcloud/tse/v20201207/model/BoundK8SInfo.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstancesRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeZookeeperReplicasResponse.h
  include/tencentcloud/tse/v20201207/model/VpcInfo.h
  include/tencentcloud/tse/v20201207/model/EngineAdmin.h
  include/tencentcloud/tse/v20201207/model/PolarisLimiterAddress.h
  include/tencentcloud/tse/v20201207/model/CreateEngineRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeInstanceRegionInfo.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeNacosServerInterfacesResponse.h
  include/tencentcloud/tse/v20201207/model/Filter.h
  include/tencentcloud/tse/v20201207/model/NacosServerInterface.h
  include/tencentcloud/tse/v20201207/model/DescribeZookeeperServerInterfacesRequest.h
  include/tencentcloud/tse/v20201207/model/EnvInfo.h
  include/tencentcloud/tse/v20201207/model/EnvAddressInfo.h
  include/tencentcloud/tse/v20201207/model/InstanceTagInfo.h
  )

set(tse_src
  src/v20201207/TseClient.cpp
  src/v20201207/model/NacosReplica.cpp
  src/v20201207/model/DescribeNacosReplicasRequest.cpp
  src/v20201207/model/UpdateEngineInternetAccessRequest.cpp
  src/v20201207/model/ApolloEnvParam.cpp
  src/v20201207/model/UpdateEngineInternetAccessResponse.cpp
  src/v20201207/model/KVPair.cpp
  src/v20201207/model/DeleteEngineResponse.cpp
  src/v20201207/model/CreateEngineResponse.cpp
  src/v20201207/model/DescribeZookeeperReplicasRequest.cpp
  src/v20201207/model/DeleteEngineRequest.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayNodesRequest.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayNodesResult.cpp
  src/v20201207/model/ZookeeperReplica.cpp
  src/v20201207/model/EngineRegionInfo.cpp
  src/v20201207/model/DescribeNacosServerInterfacesRequest.cpp
  src/v20201207/model/SREInstance.cpp
  src/v20201207/model/DescribeSREInstanceAccessAddressResponse.cpp
  src/v20201207/model/DescribeSREInstancesResponse.cpp
  src/v20201207/model/ZookeeperServerInterface.cpp
  src/v20201207/model/ServiceGovernanceInfo.cpp
  src/v20201207/model/CloudNativeAPIGatewayNode.cpp
  src/v20201207/model/DescribeNacosReplicasResponse.cpp
  src/v20201207/model/DescribeZookeeperServerInterfacesResponse.cpp
  src/v20201207/model/BoundK8SInfo.cpp
  src/v20201207/model/DescribeSREInstancesRequest.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayNodesResponse.cpp
  src/v20201207/model/DescribeZookeeperReplicasResponse.cpp
  src/v20201207/model/VpcInfo.cpp
  src/v20201207/model/EngineAdmin.cpp
  src/v20201207/model/PolarisLimiterAddress.cpp
  src/v20201207/model/CreateEngineRequest.cpp
  src/v20201207/model/DescribeInstanceRegionInfo.cpp
  src/v20201207/model/DescribeSREInstanceAccessAddressRequest.cpp
  src/v20201207/model/DescribeNacosServerInterfacesResponse.cpp
  src/v20201207/model/Filter.cpp
  src/v20201207/model/NacosServerInterface.cpp
  src/v20201207/model/DescribeZookeeperServerInterfacesRequest.cpp
  src/v20201207/model/EnvInfo.cpp
  src/v20201207/model/EnvAddressInfo.cpp
  src/v20201207/model/InstanceTagInfo.cpp
  )

set(tse_include
    include/tencentcloud/tse
  )

add_library(tse ${LIB_TYPE}
  ${tse_public_header}
  ${tse_public_header_model}
  ${tse_src})

set_target_properties(tse
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tse
  )

target_include_directories(tse
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tse
  core)

#install(FILES ${tse_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tse/v20201207)
#install(FILES ${tse_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tse/v20201207/model)
install(DIRECTORY ${tse_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tse
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

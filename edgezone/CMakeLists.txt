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

set(edgezone_public_header
  include/tencentcloud/edgezone/v20260401/EdgezoneClient.h
  )

set(edgezone_public_header_model
  include/tencentcloud/edgezone/v20260401/model/TerminateInstancesRequest.h
  include/tencentcloud/edgezone/v20260401/model/DescribeInstanceTypesResponse.h
  include/tencentcloud/edgezone/v20260401/model/DescribePrivateNetworkInstancesRequest.h
  include/tencentcloud/edgezone/v20260401/model/DescribePublicNetworkInstancesResponse.h
  include/tencentcloud/edgezone/v20260401/model/DeletePublicNetworkInstanceRequest.h
  include/tencentcloud/edgezone/v20260401/model/CreateEdgeNodeServiceResponse.h
  include/tencentcloud/edgezone/v20260401/model/CreateInstancesRequest.h
  include/tencentcloud/edgezone/v20260401/model/DescribeInstanceTypesRequest.h
  include/tencentcloud/edgezone/v20260401/model/PrivateNetworkInstanceInfo.h
  include/tencentcloud/edgezone/v20260401/model/IpInfo.h
  include/tencentcloud/edgezone/v20260401/model/DeletePublicNetworkInstanceResponse.h
  include/tencentcloud/edgezone/v20260401/model/ModifyPublicNetworkInstanceResponse.h
  include/tencentcloud/edgezone/v20260401/model/CreatePrivateNetworkInstanceRequest.h
  include/tencentcloud/edgezone/v20260401/model/ModifyPrivateNetworkInstanceRequest.h
  include/tencentcloud/edgezone/v20260401/model/DescribeZonesRequest.h
  include/tencentcloud/edgezone/v20260401/model/DescribePublicNetworkInstancesRequest.h
  include/tencentcloud/edgezone/v20260401/model/InstanceTypeQuota.h
  include/tencentcloud/edgezone/v20260401/model/ModifyPublicNetworkInstanceRequest.h
  include/tencentcloud/edgezone/v20260401/model/ReleasePublicIpRequest.h
  include/tencentcloud/edgezone/v20260401/model/DescribeInstancesResponse.h
  include/tencentcloud/edgezone/v20260401/model/CreateEdgeNodeServiceRequest.h
  include/tencentcloud/edgezone/v20260401/model/DescribeInstancesRequest.h
  include/tencentcloud/edgezone/v20260401/model/PublicNetworkSegment.h
  include/tencentcloud/edgezone/v20260401/model/ReleasePublicIpResponse.h
  include/tencentcloud/edgezone/v20260401/model/DescribeZoneDataResponse.h
  include/tencentcloud/edgezone/v20260401/model/DeletePrivateNetworkInstanceRequest.h
  include/tencentcloud/edgezone/v20260401/model/DescribePrivateNetworkInstancesResponse.h
  include/tencentcloud/edgezone/v20260401/model/CreatePrivateNetworkInstanceResponse.h
  include/tencentcloud/edgezone/v20260401/model/TerminateInstancesResponse.h
  include/tencentcloud/edgezone/v20260401/model/ModifyInstanceAttributeRequest.h
  include/tencentcloud/edgezone/v20260401/model/ApplyPublicIpsRequest.h
  include/tencentcloud/edgezone/v20260401/model/DescribePublicIpsResponse.h
  include/tencentcloud/edgezone/v20260401/model/DeletePrivateNetworkInstanceResponse.h
  include/tencentcloud/edgezone/v20260401/model/ModifyPrivateNetworkInstanceResponse.h
  include/tencentcloud/edgezone/v20260401/model/ApplyPublicIpsResponse.h
  include/tencentcloud/edgezone/v20260401/model/SwitchData.h
  include/tencentcloud/edgezone/v20260401/model/CreateInstancesResponse.h
  include/tencentcloud/edgezone/v20260401/model/Instance.h
  include/tencentcloud/edgezone/v20260401/model/ZoneInfo.h
  include/tencentcloud/edgezone/v20260401/model/ModifyInstanceAttributeResponse.h
  include/tencentcloud/edgezone/v20260401/model/DescribeZonesResponse.h
  include/tencentcloud/edgezone/v20260401/model/PublicNetworkInstanceInfo.h
  include/tencentcloud/edgezone/v20260401/model/CreatePublicNetworkInstanceRequest.h
  include/tencentcloud/edgezone/v20260401/model/FailedInstance.h
  include/tencentcloud/edgezone/v20260401/model/CreatePublicNetworkInstanceResponse.h
  include/tencentcloud/edgezone/v20260401/model/DescribeZoneDataRequest.h
  include/tencentcloud/edgezone/v20260401/model/DescribePublicIpsRequest.h
  )

set(edgezone_src
  src/v20260401/EdgezoneClient.cpp
  src/v20260401/model/TerminateInstancesRequest.cpp
  src/v20260401/model/DescribeInstanceTypesResponse.cpp
  src/v20260401/model/DescribePrivateNetworkInstancesRequest.cpp
  src/v20260401/model/DescribePublicNetworkInstancesResponse.cpp
  src/v20260401/model/DeletePublicNetworkInstanceRequest.cpp
  src/v20260401/model/CreateEdgeNodeServiceResponse.cpp
  src/v20260401/model/CreateInstancesRequest.cpp
  src/v20260401/model/DescribeInstanceTypesRequest.cpp
  src/v20260401/model/PrivateNetworkInstanceInfo.cpp
  src/v20260401/model/IpInfo.cpp
  src/v20260401/model/DeletePublicNetworkInstanceResponse.cpp
  src/v20260401/model/ModifyPublicNetworkInstanceResponse.cpp
  src/v20260401/model/CreatePrivateNetworkInstanceRequest.cpp
  src/v20260401/model/ModifyPrivateNetworkInstanceRequest.cpp
  src/v20260401/model/DescribeZonesRequest.cpp
  src/v20260401/model/DescribePublicNetworkInstancesRequest.cpp
  src/v20260401/model/InstanceTypeQuota.cpp
  src/v20260401/model/ModifyPublicNetworkInstanceRequest.cpp
  src/v20260401/model/ReleasePublicIpRequest.cpp
  src/v20260401/model/DescribeInstancesResponse.cpp
  src/v20260401/model/CreateEdgeNodeServiceRequest.cpp
  src/v20260401/model/DescribeInstancesRequest.cpp
  src/v20260401/model/PublicNetworkSegment.cpp
  src/v20260401/model/ReleasePublicIpResponse.cpp
  src/v20260401/model/DescribeZoneDataResponse.cpp
  src/v20260401/model/DeletePrivateNetworkInstanceRequest.cpp
  src/v20260401/model/DescribePrivateNetworkInstancesResponse.cpp
  src/v20260401/model/CreatePrivateNetworkInstanceResponse.cpp
  src/v20260401/model/TerminateInstancesResponse.cpp
  src/v20260401/model/ModifyInstanceAttributeRequest.cpp
  src/v20260401/model/ApplyPublicIpsRequest.cpp
  src/v20260401/model/DescribePublicIpsResponse.cpp
  src/v20260401/model/DeletePrivateNetworkInstanceResponse.cpp
  src/v20260401/model/ModifyPrivateNetworkInstanceResponse.cpp
  src/v20260401/model/ApplyPublicIpsResponse.cpp
  src/v20260401/model/SwitchData.cpp
  src/v20260401/model/CreateInstancesResponse.cpp
  src/v20260401/model/Instance.cpp
  src/v20260401/model/ZoneInfo.cpp
  src/v20260401/model/ModifyInstanceAttributeResponse.cpp
  src/v20260401/model/DescribeZonesResponse.cpp
  src/v20260401/model/PublicNetworkInstanceInfo.cpp
  src/v20260401/model/CreatePublicNetworkInstanceRequest.cpp
  src/v20260401/model/FailedInstance.cpp
  src/v20260401/model/CreatePublicNetworkInstanceResponse.cpp
  src/v20260401/model/DescribeZoneDataRequest.cpp
  src/v20260401/model/DescribePublicIpsRequest.cpp
  )

set(edgezone_include
    include/tencentcloud/edgezone
  )

add_library(edgezone ${LIB_TYPE}
  ${edgezone_public_header}
  ${edgezone_public_header_model}
  ${edgezone_src})

set_target_properties(edgezone
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}edgezone
  )

target_include_directories(edgezone
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(edgezone
  core)

#install(FILES ${edgezone_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/edgezone/v20260401)
#install(FILES ${edgezone_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/edgezone/v20260401/model)
install(DIRECTORY ${edgezone_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS edgezone
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

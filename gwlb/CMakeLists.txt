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

set(gwlb_public_header
  include/tencentcloud/gwlb/v20240906/GwlbClient.h
  )

set(gwlb_public_header_model
  include/tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstanceStatusRequest.h
  include/tencentcloud/gwlb/v20240906/model/DescribeTargetGroupListResponse.h
  include/tencentcloud/gwlb/v20240906/model/DisassociateTargetGroupsResponse.h
  include/tencentcloud/gwlb/v20240906/model/DescribeTargetGroupListRequest.h
  include/tencentcloud/gwlb/v20240906/model/ModifyGatewayLoadBalancerAttributeRequest.h
  include/tencentcloud/gwlb/v20240906/model/ModifyTargetGroupInstancesWeightResponse.h
  include/tencentcloud/gwlb/v20240906/model/DescribeTargetGroupsRequest.h
  include/tencentcloud/gwlb/v20240906/model/DescribeTaskStatusResponse.h
  include/tencentcloud/gwlb/v20240906/model/InquirePriceCreateGatewayLoadBalancerResponse.h
  include/tencentcloud/gwlb/v20240906/model/CreateTargetGroupResponse.h
  include/tencentcloud/gwlb/v20240906/model/TargetGroupBackend.h
  include/tencentcloud/gwlb/v20240906/model/TargetGroupHealthCheck.h
  include/tencentcloud/gwlb/v20240906/model/ModifyTargetGroupInstancesWeightRequest.h
  include/tencentcloud/gwlb/v20240906/model/DeleteTargetGroupsResponse.h
  include/tencentcloud/gwlb/v20240906/model/Price.h
  include/tencentcloud/gwlb/v20240906/model/ModifyGatewayLoadBalancerAttributeResponse.h
  include/tencentcloud/gwlb/v20240906/model/DeleteGatewayLoadBalancerRequest.h
  include/tencentcloud/gwlb/v20240906/model/TagInfo.h
  include/tencentcloud/gwlb/v20240906/model/AssociateTargetGroupsRequest.h
  include/tencentcloud/gwlb/v20240906/model/DeregisterTargetGroupInstancesRequest.h
  include/tencentcloud/gwlb/v20240906/model/GatewayLoadBalancer.h
  include/tencentcloud/gwlb/v20240906/model/DescribeGatewayLoadBalancersRequest.h
  include/tencentcloud/gwlb/v20240906/model/DeregisterTargetGroupInstancesResponse.h
  include/tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstancesResponse.h
  include/tencentcloud/gwlb/v20240906/model/CreateTargetGroupRequest.h
  include/tencentcloud/gwlb/v20240906/model/CreateGatewayLoadBalancerRequest.h
  include/tencentcloud/gwlb/v20240906/model/AssociateTargetGroupsResponse.h
  include/tencentcloud/gwlb/v20240906/model/InquirePriceCreateGatewayLoadBalancerRequest.h
  include/tencentcloud/gwlb/v20240906/model/DisassociateTargetGroupsRequest.h
  include/tencentcloud/gwlb/v20240906/model/Filter.h
  include/tencentcloud/gwlb/v20240906/model/TargetGroupInstanceStatus.h
  include/tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstanceStatusResponse.h
  include/tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstancesRequest.h
  include/tencentcloud/gwlb/v20240906/model/DescribeTaskStatusRequest.h
  include/tencentcloud/gwlb/v20240906/model/RegisterTargetGroupInstancesResponse.h
  include/tencentcloud/gwlb/v20240906/model/CreateGatewayLoadBalancerResponse.h
  include/tencentcloud/gwlb/v20240906/model/DescribeTargetGroupsResponse.h
  include/tencentcloud/gwlb/v20240906/model/RegisterTargetGroupInstancesRequest.h
  include/tencentcloud/gwlb/v20240906/model/DeleteTargetGroupsRequest.h
  include/tencentcloud/gwlb/v20240906/model/ItemPrice.h
  include/tencentcloud/gwlb/v20240906/model/TargetGroupAssociation.h
  include/tencentcloud/gwlb/v20240906/model/TargetGroupInstance.h
  include/tencentcloud/gwlb/v20240906/model/ModifyTargetGroupAttributeResponse.h
  include/tencentcloud/gwlb/v20240906/model/AssociationItem.h
  include/tencentcloud/gwlb/v20240906/model/ModifyTargetGroupAttributeRequest.h
  include/tencentcloud/gwlb/v20240906/model/TargetGroupInfo.h
  include/tencentcloud/gwlb/v20240906/model/DescribeGatewayLoadBalancersResponse.h
  include/tencentcloud/gwlb/v20240906/model/DeleteGatewayLoadBalancerResponse.h
  )

set(gwlb_src
  src/v20240906/GwlbClient.cpp
  src/v20240906/model/DescribeTargetGroupInstanceStatusRequest.cpp
  src/v20240906/model/DescribeTargetGroupListResponse.cpp
  src/v20240906/model/DisassociateTargetGroupsResponse.cpp
  src/v20240906/model/DescribeTargetGroupListRequest.cpp
  src/v20240906/model/ModifyGatewayLoadBalancerAttributeRequest.cpp
  src/v20240906/model/ModifyTargetGroupInstancesWeightResponse.cpp
  src/v20240906/model/DescribeTargetGroupsRequest.cpp
  src/v20240906/model/DescribeTaskStatusResponse.cpp
  src/v20240906/model/InquirePriceCreateGatewayLoadBalancerResponse.cpp
  src/v20240906/model/CreateTargetGroupResponse.cpp
  src/v20240906/model/TargetGroupBackend.cpp
  src/v20240906/model/TargetGroupHealthCheck.cpp
  src/v20240906/model/ModifyTargetGroupInstancesWeightRequest.cpp
  src/v20240906/model/DeleteTargetGroupsResponse.cpp
  src/v20240906/model/Price.cpp
  src/v20240906/model/ModifyGatewayLoadBalancerAttributeResponse.cpp
  src/v20240906/model/DeleteGatewayLoadBalancerRequest.cpp
  src/v20240906/model/TagInfo.cpp
  src/v20240906/model/AssociateTargetGroupsRequest.cpp
  src/v20240906/model/DeregisterTargetGroupInstancesRequest.cpp
  src/v20240906/model/GatewayLoadBalancer.cpp
  src/v20240906/model/DescribeGatewayLoadBalancersRequest.cpp
  src/v20240906/model/DeregisterTargetGroupInstancesResponse.cpp
  src/v20240906/model/DescribeTargetGroupInstancesResponse.cpp
  src/v20240906/model/CreateTargetGroupRequest.cpp
  src/v20240906/model/CreateGatewayLoadBalancerRequest.cpp
  src/v20240906/model/AssociateTargetGroupsResponse.cpp
  src/v20240906/model/InquirePriceCreateGatewayLoadBalancerRequest.cpp
  src/v20240906/model/DisassociateTargetGroupsRequest.cpp
  src/v20240906/model/Filter.cpp
  src/v20240906/model/TargetGroupInstanceStatus.cpp
  src/v20240906/model/DescribeTargetGroupInstanceStatusResponse.cpp
  src/v20240906/model/DescribeTargetGroupInstancesRequest.cpp
  src/v20240906/model/DescribeTaskStatusRequest.cpp
  src/v20240906/model/RegisterTargetGroupInstancesResponse.cpp
  src/v20240906/model/CreateGatewayLoadBalancerResponse.cpp
  src/v20240906/model/DescribeTargetGroupsResponse.cpp
  src/v20240906/model/RegisterTargetGroupInstancesRequest.cpp
  src/v20240906/model/DeleteTargetGroupsRequest.cpp
  src/v20240906/model/ItemPrice.cpp
  src/v20240906/model/TargetGroupAssociation.cpp
  src/v20240906/model/TargetGroupInstance.cpp
  src/v20240906/model/ModifyTargetGroupAttributeResponse.cpp
  src/v20240906/model/AssociationItem.cpp
  src/v20240906/model/ModifyTargetGroupAttributeRequest.cpp
  src/v20240906/model/TargetGroupInfo.cpp
  src/v20240906/model/DescribeGatewayLoadBalancersResponse.cpp
  src/v20240906/model/DeleteGatewayLoadBalancerResponse.cpp
  )

set(gwlb_include
    include/tencentcloud/gwlb
  )

add_library(gwlb ${LIB_TYPE}
  ${gwlb_public_header}
  ${gwlb_public_header_model}
  ${gwlb_src})

set_target_properties(gwlb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gwlb
  )

target_include_directories(gwlb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(gwlb
  core)

#install(FILES ${gwlb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gwlb/v20240906)
#install(FILES ${gwlb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/gwlb/v20240906/model)
install(DIRECTORY ${gwlb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS gwlb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

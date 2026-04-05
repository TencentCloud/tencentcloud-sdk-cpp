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

set(ga2_public_header
  include/tencentcloud/ga2/v20250115/Ga2Client.h
  )

set(ga2_public_header_model
  include/tencentcloud/ga2/v20250115/model/CreateAccelerateAreasResponse.h
  include/tencentcloud/ga2/v20250115/model/DescribeListenersResponse.h
  include/tencentcloud/ga2/v20250115/model/ModifyListenerResponse.h
  include/tencentcloud/ga2/v20250115/model/DescribeForwardingRuleRequest.h
  include/tencentcloud/ga2/v20250115/model/DescribeEndpointGroupsResponse.h
  include/tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorRequest.h
  include/tencentcloud/ga2/v20250115/model/CreateForwardingRuleRequest.h
  include/tencentcloud/ga2/v20250115/model/AcceleratorRegionSet.h
  include/tencentcloud/ga2/v20250115/model/ModifyEndpointGroupResponse.h
  include/tencentcloud/ga2/v20250115/model/CreateListenerResponse.h
  include/tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorRequest.h
  include/tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementRequest.h
  include/tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorsRequest.h
  include/tencentcloud/ga2/v20250115/model/DescribeAccelerateAreasRequest.h
  include/tencentcloud/ga2/v20250115/model/ModifyAccelerateAreasRequest.h
  include/tencentcloud/ga2/v20250115/model/DescribeCrossBorderSettlementResponse.h
  include/tencentcloud/ga2/v20250115/model/DescribeForwardingRuleResponse.h
  include/tencentcloud/ga2/v20250115/model/DeleteAccelerateAreasRequest.h
  include/tencentcloud/ga2/v20250115/model/EndpointGroupConfigurationSet.h
  include/tencentcloud/ga2/v20250115/model/DeleteAccelerateAreasResponse.h
  include/tencentcloud/ga2/v20250115/model/ModifyAccelerateAreasResponse.h
  include/tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorRequest.h
  include/tencentcloud/ga2/v20250115/model/EndpointConfigurations.h
  include/tencentcloud/ga2/v20250115/model/PortRanges.h
  include/tencentcloud/ga2/v20250115/model/OriginHeader.h
  include/tencentcloud/ga2/v20250115/model/DeleteEndpointGroupsResponse.h
  include/tencentcloud/ga2/v20250115/model/ForwardingRuleSet.h
  include/tencentcloud/ga2/v20250115/model/ModifyForwardingRuleRequest.h
  include/tencentcloud/ga2/v20250115/model/ModifyListenerRequest.h
  include/tencentcloud/ga2/v20250115/model/Tag.h
  include/tencentcloud/ga2/v20250115/model/DescribeEndpointGroupsRequest.h
  include/tencentcloud/ga2/v20250115/model/CreateAccelerateAreasRequest.h
  include/tencentcloud/ga2/v20250115/model/CreateListenerRequest.h
  include/tencentcloud/ga2/v20250115/model/IpAddressInfoSet.h
  include/tencentcloud/ga2/v20250115/model/ModifyForwardingRuleResponse.h
  include/tencentcloud/ga2/v20250115/model/DeleteForwardingRuleRequest.h
  include/tencentcloud/ga2/v20250115/model/ListenerSet.h
  include/tencentcloud/ga2/v20250115/model/DescribeAccelerateAreasResponse.h
  include/tencentcloud/ga2/v20250115/model/DeleteListenerRequest.h
  include/tencentcloud/ga2/v20250115/model/ModifyGlobalAcceleratorResponse.h
  include/tencentcloud/ga2/v20250115/model/DescribeListenersRequest.h
  include/tencentcloud/ga2/v20250115/model/RuleAction.h
  include/tencentcloud/ga2/v20250115/model/RuleCondition.h
  include/tencentcloud/ga2/v20250115/model/DescribeAccelerateRegionsRequest.h
  include/tencentcloud/ga2/v20250115/model/DeleteForwardingRuleResponse.h
  include/tencentcloud/ga2/v20250115/model/Filter.h
  include/tencentcloud/ga2/v20250115/model/DeleteEndpointGroupsRequest.h
  include/tencentcloud/ga2/v20250115/model/EndpointGroupConfiguration.h
  include/tencentcloud/ga2/v20250115/model/GlobalAcceleratorSet.h
  include/tencentcloud/ga2/v20250115/model/DeleteListenerResponse.h
  include/tencentcloud/ga2/v20250115/model/ModifyEndpointGroupRequest.h
  include/tencentcloud/ga2/v20250115/model/AcceleratorAreas.h
  include/tencentcloud/ga2/v20250115/model/CreateEndpointGroupRequest.h
  include/tencentcloud/ga2/v20250115/model/CreateEndpointGroupResponse.h
  include/tencentcloud/ga2/v20250115/model/DeleteGlobalAcceleratorResponse.h
  include/tencentcloud/ga2/v20250115/model/DescribeAccelerateRegionsResponse.h
  include/tencentcloud/ga2/v20250115/model/CreateGlobalAcceleratorResponse.h
  include/tencentcloud/ga2/v20250115/model/DescribeGlobalAcceleratorsResponse.h
  include/tencentcloud/ga2/v20250115/model/CreateForwardingRuleResponse.h
  include/tencentcloud/ga2/v20250115/model/PortOverride.h
  )

set(ga2_src
  src/v20250115/Ga2Client.cpp
  src/v20250115/model/CreateAccelerateAreasResponse.cpp
  src/v20250115/model/DescribeListenersResponse.cpp
  src/v20250115/model/ModifyListenerResponse.cpp
  src/v20250115/model/DescribeForwardingRuleRequest.cpp
  src/v20250115/model/DescribeEndpointGroupsResponse.cpp
  src/v20250115/model/ModifyGlobalAcceleratorRequest.cpp
  src/v20250115/model/CreateForwardingRuleRequest.cpp
  src/v20250115/model/AcceleratorRegionSet.cpp
  src/v20250115/model/ModifyEndpointGroupResponse.cpp
  src/v20250115/model/CreateListenerResponse.cpp
  src/v20250115/model/CreateGlobalAcceleratorRequest.cpp
  src/v20250115/model/DescribeCrossBorderSettlementRequest.cpp
  src/v20250115/model/DescribeGlobalAcceleratorsRequest.cpp
  src/v20250115/model/DescribeAccelerateAreasRequest.cpp
  src/v20250115/model/ModifyAccelerateAreasRequest.cpp
  src/v20250115/model/DescribeCrossBorderSettlementResponse.cpp
  src/v20250115/model/DescribeForwardingRuleResponse.cpp
  src/v20250115/model/DeleteAccelerateAreasRequest.cpp
  src/v20250115/model/EndpointGroupConfigurationSet.cpp
  src/v20250115/model/DeleteAccelerateAreasResponse.cpp
  src/v20250115/model/ModifyAccelerateAreasResponse.cpp
  src/v20250115/model/DeleteGlobalAcceleratorRequest.cpp
  src/v20250115/model/EndpointConfigurations.cpp
  src/v20250115/model/PortRanges.cpp
  src/v20250115/model/OriginHeader.cpp
  src/v20250115/model/DeleteEndpointGroupsResponse.cpp
  src/v20250115/model/ForwardingRuleSet.cpp
  src/v20250115/model/ModifyForwardingRuleRequest.cpp
  src/v20250115/model/ModifyListenerRequest.cpp
  src/v20250115/model/Tag.cpp
  src/v20250115/model/DescribeEndpointGroupsRequest.cpp
  src/v20250115/model/CreateAccelerateAreasRequest.cpp
  src/v20250115/model/CreateListenerRequest.cpp
  src/v20250115/model/IpAddressInfoSet.cpp
  src/v20250115/model/ModifyForwardingRuleResponse.cpp
  src/v20250115/model/DeleteForwardingRuleRequest.cpp
  src/v20250115/model/ListenerSet.cpp
  src/v20250115/model/DescribeAccelerateAreasResponse.cpp
  src/v20250115/model/DeleteListenerRequest.cpp
  src/v20250115/model/ModifyGlobalAcceleratorResponse.cpp
  src/v20250115/model/DescribeListenersRequest.cpp
  src/v20250115/model/RuleAction.cpp
  src/v20250115/model/RuleCondition.cpp
  src/v20250115/model/DescribeAccelerateRegionsRequest.cpp
  src/v20250115/model/DeleteForwardingRuleResponse.cpp
  src/v20250115/model/Filter.cpp
  src/v20250115/model/DeleteEndpointGroupsRequest.cpp
  src/v20250115/model/EndpointGroupConfiguration.cpp
  src/v20250115/model/GlobalAcceleratorSet.cpp
  src/v20250115/model/DeleteListenerResponse.cpp
  src/v20250115/model/ModifyEndpointGroupRequest.cpp
  src/v20250115/model/AcceleratorAreas.cpp
  src/v20250115/model/CreateEndpointGroupRequest.cpp
  src/v20250115/model/CreateEndpointGroupResponse.cpp
  src/v20250115/model/DeleteGlobalAcceleratorResponse.cpp
  src/v20250115/model/DescribeAccelerateRegionsResponse.cpp
  src/v20250115/model/CreateGlobalAcceleratorResponse.cpp
  src/v20250115/model/DescribeGlobalAcceleratorsResponse.cpp
  src/v20250115/model/CreateForwardingRuleResponse.cpp
  src/v20250115/model/PortOverride.cpp
  )

set(ga2_include
    include/tencentcloud/ga2
  )

add_library(ga2 ${LIB_TYPE}
  ${ga2_public_header}
  ${ga2_public_header_model}
  ${ga2_src})

set_target_properties(ga2
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ga2
  )

target_include_directories(ga2
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ga2
  core)

#install(FILES ${ga2_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ga2/v20250115)
#install(FILES ${ga2_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ga2/v20250115/model)
install(DIRECTORY ${ga2_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ga2
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

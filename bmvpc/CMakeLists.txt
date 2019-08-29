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

set(bmvpc_public_header
  include/tencentcloud/bmvpc/v20180625/BmvpcClient.h
  )

set(bmvpc_public_header_model
  include/tencentcloud/bmvpc/v20180625/model/ModifySubnetDHCPRelayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeNatSubnetsResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpcPeerConnectionsResponse.h
  include/tencentcloud/bmvpc/v20180625/model/UnbindIpsFromNatGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/IKEOptionsSpecification.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyRouteTableRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateRoutePoliciesRequest.h
  include/tencentcloud/bmvpc/v20180625/model/Filter.h
  include/tencentcloud/bmvpc/v20180625/model/CreateVirtualSubnetWithVlanRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteVirtualIpResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeSubnetsRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateSubnetRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DownloadCustomerGatewayConfigurationRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateHostedInterfaceResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeSubnetByDeviceResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteSubnetResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DeregisterIpsResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeSubnetsResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyVpcPeerConnectionResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeCustomerGatewaysResponse.h
  include/tencentcloud/bmvpc/v20180625/model/UnbindSubnetsFromNatGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/SubnetInfo.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteRoutePolicyResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpnGatewaysResponse.h
  include/tencentcloud/bmvpc/v20180625/model/VpcInfo.h
  include/tencentcloud/bmvpc/v20180625/model/CreateInterfacesResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeNatSubnetsRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DownloadCustomerGatewayConfigurationResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteSubnetRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteRoutePolicyRequest.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyRoutePolicyRequest.h
  include/tencentcloud/bmvpc/v20180625/model/RouteTable.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpcQuotaRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateDockerSubnetWithVlanResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeSubnetAvailableIpsRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteVpcRequest.h
  include/tencentcloud/bmvpc/v20180625/model/UnbindEipsFromNatGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeRoutePoliciesResponse.h
  include/tencentcloud/bmvpc/v20180625/model/CreateSubnetResponse.h
  include/tencentcloud/bmvpc/v20180625/model/AcceptVpcPeerConnectionRequest.h
  include/tencentcloud/bmvpc/v20180625/model/BindSubnetsToNatGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/VpcSubnetViewInfo.h
  include/tencentcloud/bmvpc/v20180625/model/CreateVpcResponse.h
  include/tencentcloud/bmvpc/v20180625/model/CreateCustomerGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeTaskStatusResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteVpnGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/NatSubnetInfo.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeSubnetByHostedDeviceRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateVpcPeerConnectionResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifySubnetAttributeRequest.h
  include/tencentcloud/bmvpc/v20180625/model/ResetVpnConnectionRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteNatGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteVpnConnectionResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyCustomerGatewayAttributeResponse.h
  include/tencentcloud/bmvpc/v20180625/model/VpnConnection.h
  include/tencentcloud/bmvpc/v20180625/model/CreateDockerSubnetWithVlanRequest.h
  include/tencentcloud/bmvpc/v20180625/model/RoutePolicy.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteHostedInterfaceResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteVpcPeerConnectionResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteHostedInterfacesResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifySubnetDHCPRelayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteVpcPeerConnectionRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteHostedInterfaceRequest.h
  include/tencentcloud/bmvpc/v20180625/model/BindEipsToNatGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteInterfacesRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpcsRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpcResourceResponse.h
  include/tencentcloud/bmvpc/v20180625/model/RejectVpcPeerConnectionResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyCustomerGatewayAttributeRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeRouteTablesResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyRouteTableResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeNatGatewaysResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyVpcAttributeResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyVpnConnectionAttributeResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeSubnetAvailableIpsResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeNatGatewaysRequest.h
  include/tencentcloud/bmvpc/v20180625/model/VpcPeerConnection.h
  include/tencentcloud/bmvpc/v20180625/model/VpcSubnetCreateInfo.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpnConnectionsRequest.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyVpcPeerConnectionRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteCustomerGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyVpcAttributeRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateRoutePoliciesResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeRouteTablesRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteVirtualIpRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpnGatewaysRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateHostedInterfaceRequest.h
  include/tencentcloud/bmvpc/v20180625/model/NatGatewayInfo.h
  include/tencentcloud/bmvpc/v20180625/model/BindSubnetsToNatGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/ResetVpnConnectionResponse.h
  include/tencentcloud/bmvpc/v20180625/model/RejectVpcPeerConnectionRequest.h
  include/tencentcloud/bmvpc/v20180625/model/VpcViewInfo.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeCustomerGatewaysRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateCustomerGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteHostedInterfacesRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeTaskStatusRequest.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyVpnConnectionAttributeRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpcResourceRequest.h
  include/tencentcloud/bmvpc/v20180625/model/BindEipsToNatGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpcViewResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpcViewRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeSubnetByDeviceRequest.h
  include/tencentcloud/bmvpc/v20180625/model/AcceptVpcPeerConnectionResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeRoutePoliciesRequest.h
  include/tencentcloud/bmvpc/v20180625/model/VpnGateway.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyVpnGatewayAttributeRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateNatGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/IPSECOptionsSpecification.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteVpnConnectionRequest.h
  include/tencentcloud/bmvpc/v20180625/model/UnbindSubnetsFromNatGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpnConnectionsResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteCustomerGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/IpInfo.h
  include/tencentcloud/bmvpc/v20180625/model/UpgradeNatGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteVpnGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteInterfacesResponse.h
  include/tencentcloud/bmvpc/v20180625/model/UnbindIpsFromNatGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateVirtualSubnetWithVlanResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyVpnGatewayAttributeResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpcQuotaResponse.h
  include/tencentcloud/bmvpc/v20180625/model/UnbindEipsFromNatGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/ModifySubnetAttributeResponse.h
  include/tencentcloud/bmvpc/v20180625/model/CreateInterfacesRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpcPeerConnectionsRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CreateVpcRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeSubnetByHostedDeviceResponse.h
  include/tencentcloud/bmvpc/v20180625/model/CreateVpcPeerConnectionRequest.h
  include/tencentcloud/bmvpc/v20180625/model/CustomerGateway.h
  include/tencentcloud/bmvpc/v20180625/model/ModifyRoutePolicyResponse.h
  include/tencentcloud/bmvpc/v20180625/model/AsyncRegisterIpsResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteVpcResponse.h
  include/tencentcloud/bmvpc/v20180625/model/BindIpsToNatGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/VpcQuota.h
  include/tencentcloud/bmvpc/v20180625/model/CreateNatGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/AsyncRegisterIpsRequest.h
  include/tencentcloud/bmvpc/v20180625/model/BindIpsToNatGatewayRequest.h
  include/tencentcloud/bmvpc/v20180625/model/DescribeVpcsResponse.h
  include/tencentcloud/bmvpc/v20180625/model/SubnetCreateInputInfo.h
  include/tencentcloud/bmvpc/v20180625/model/DeregisterIpsRequest.h
  include/tencentcloud/bmvpc/v20180625/model/SecurityPolicyDatabase.h
  include/tencentcloud/bmvpc/v20180625/model/VpcResource.h
  include/tencentcloud/bmvpc/v20180625/model/UpgradeNatGatewayResponse.h
  include/tencentcloud/bmvpc/v20180625/model/DeleteNatGatewayResponse.h
  )

set(bmvpc_src
  src/v20180625/BmvpcClient.cpp
  src/v20180625/model/ModifySubnetDHCPRelayResponse.cpp
  src/v20180625/model/DescribeNatSubnetsResponse.cpp
  src/v20180625/model/DescribeVpcPeerConnectionsResponse.cpp
  src/v20180625/model/UnbindIpsFromNatGatewayResponse.cpp
  src/v20180625/model/IKEOptionsSpecification.cpp
  src/v20180625/model/ModifyRouteTableRequest.cpp
  src/v20180625/model/CreateRoutePoliciesRequest.cpp
  src/v20180625/model/Filter.cpp
  src/v20180625/model/CreateVirtualSubnetWithVlanRequest.cpp
  src/v20180625/model/DeleteVirtualIpResponse.cpp
  src/v20180625/model/DescribeSubnetsRequest.cpp
  src/v20180625/model/CreateSubnetRequest.cpp
  src/v20180625/model/DownloadCustomerGatewayConfigurationRequest.cpp
  src/v20180625/model/CreateHostedInterfaceResponse.cpp
  src/v20180625/model/DescribeSubnetByDeviceResponse.cpp
  src/v20180625/model/DeleteSubnetResponse.cpp
  src/v20180625/model/DeregisterIpsResponse.cpp
  src/v20180625/model/DescribeSubnetsResponse.cpp
  src/v20180625/model/ModifyVpcPeerConnectionResponse.cpp
  src/v20180625/model/DescribeCustomerGatewaysResponse.cpp
  src/v20180625/model/UnbindSubnetsFromNatGatewayRequest.cpp
  src/v20180625/model/SubnetInfo.cpp
  src/v20180625/model/DeleteRoutePolicyResponse.cpp
  src/v20180625/model/DescribeVpnGatewaysResponse.cpp
  src/v20180625/model/VpcInfo.cpp
  src/v20180625/model/CreateInterfacesResponse.cpp
  src/v20180625/model/DescribeNatSubnetsRequest.cpp
  src/v20180625/model/DownloadCustomerGatewayConfigurationResponse.cpp
  src/v20180625/model/DeleteSubnetRequest.cpp
  src/v20180625/model/DeleteRoutePolicyRequest.cpp
  src/v20180625/model/ModifyRoutePolicyRequest.cpp
  src/v20180625/model/RouteTable.cpp
  src/v20180625/model/DescribeVpcQuotaRequest.cpp
  src/v20180625/model/CreateDockerSubnetWithVlanResponse.cpp
  src/v20180625/model/DescribeSubnetAvailableIpsRequest.cpp
  src/v20180625/model/DeleteVpcRequest.cpp
  src/v20180625/model/UnbindEipsFromNatGatewayRequest.cpp
  src/v20180625/model/DescribeRoutePoliciesResponse.cpp
  src/v20180625/model/CreateSubnetResponse.cpp
  src/v20180625/model/AcceptVpcPeerConnectionRequest.cpp
  src/v20180625/model/BindSubnetsToNatGatewayResponse.cpp
  src/v20180625/model/VpcSubnetViewInfo.cpp
  src/v20180625/model/CreateVpcResponse.cpp
  src/v20180625/model/CreateCustomerGatewayResponse.cpp
  src/v20180625/model/DescribeTaskStatusResponse.cpp
  src/v20180625/model/DeleteVpnGatewayRequest.cpp
  src/v20180625/model/NatSubnetInfo.cpp
  src/v20180625/model/DescribeSubnetByHostedDeviceRequest.cpp
  src/v20180625/model/CreateVpcPeerConnectionResponse.cpp
  src/v20180625/model/ModifySubnetAttributeRequest.cpp
  src/v20180625/model/ResetVpnConnectionRequest.cpp
  src/v20180625/model/DeleteNatGatewayRequest.cpp
  src/v20180625/model/DeleteVpnConnectionResponse.cpp
  src/v20180625/model/ModifyCustomerGatewayAttributeResponse.cpp
  src/v20180625/model/VpnConnection.cpp
  src/v20180625/model/CreateDockerSubnetWithVlanRequest.cpp
  src/v20180625/model/RoutePolicy.cpp
  src/v20180625/model/DeleteHostedInterfaceResponse.cpp
  src/v20180625/model/DeleteVpcPeerConnectionResponse.cpp
  src/v20180625/model/DeleteHostedInterfacesResponse.cpp
  src/v20180625/model/ModifySubnetDHCPRelayRequest.cpp
  src/v20180625/model/DeleteVpcPeerConnectionRequest.cpp
  src/v20180625/model/DeleteHostedInterfaceRequest.cpp
  src/v20180625/model/BindEipsToNatGatewayRequest.cpp
  src/v20180625/model/DeleteInterfacesRequest.cpp
  src/v20180625/model/DescribeVpcsRequest.cpp
  src/v20180625/model/DescribeVpcResourceResponse.cpp
  src/v20180625/model/RejectVpcPeerConnectionResponse.cpp
  src/v20180625/model/ModifyCustomerGatewayAttributeRequest.cpp
  src/v20180625/model/DescribeRouteTablesResponse.cpp
  src/v20180625/model/ModifyRouteTableResponse.cpp
  src/v20180625/model/DescribeNatGatewaysResponse.cpp
  src/v20180625/model/ModifyVpcAttributeResponse.cpp
  src/v20180625/model/ModifyVpnConnectionAttributeResponse.cpp
  src/v20180625/model/DescribeSubnetAvailableIpsResponse.cpp
  src/v20180625/model/DescribeNatGatewaysRequest.cpp
  src/v20180625/model/VpcPeerConnection.cpp
  src/v20180625/model/VpcSubnetCreateInfo.cpp
  src/v20180625/model/DescribeVpnConnectionsRequest.cpp
  src/v20180625/model/ModifyVpcPeerConnectionRequest.cpp
  src/v20180625/model/DeleteCustomerGatewayResponse.cpp
  src/v20180625/model/ModifyVpcAttributeRequest.cpp
  src/v20180625/model/CreateRoutePoliciesResponse.cpp
  src/v20180625/model/DescribeRouteTablesRequest.cpp
  src/v20180625/model/DeleteVirtualIpRequest.cpp
  src/v20180625/model/DescribeVpnGatewaysRequest.cpp
  src/v20180625/model/CreateHostedInterfaceRequest.cpp
  src/v20180625/model/NatGatewayInfo.cpp
  src/v20180625/model/BindSubnetsToNatGatewayRequest.cpp
  src/v20180625/model/ResetVpnConnectionResponse.cpp
  src/v20180625/model/RejectVpcPeerConnectionRequest.cpp
  src/v20180625/model/VpcViewInfo.cpp
  src/v20180625/model/DescribeCustomerGatewaysRequest.cpp
  src/v20180625/model/CreateCustomerGatewayRequest.cpp
  src/v20180625/model/DeleteHostedInterfacesRequest.cpp
  src/v20180625/model/DescribeTaskStatusRequest.cpp
  src/v20180625/model/ModifyVpnConnectionAttributeRequest.cpp
  src/v20180625/model/DescribeVpcResourceRequest.cpp
  src/v20180625/model/BindEipsToNatGatewayResponse.cpp
  src/v20180625/model/DescribeVpcViewResponse.cpp
  src/v20180625/model/DescribeVpcViewRequest.cpp
  src/v20180625/model/DescribeSubnetByDeviceRequest.cpp
  src/v20180625/model/AcceptVpcPeerConnectionResponse.cpp
  src/v20180625/model/DescribeRoutePoliciesRequest.cpp
  src/v20180625/model/VpnGateway.cpp
  src/v20180625/model/ModifyVpnGatewayAttributeRequest.cpp
  src/v20180625/model/CreateNatGatewayRequest.cpp
  src/v20180625/model/IPSECOptionsSpecification.cpp
  src/v20180625/model/DeleteVpnConnectionRequest.cpp
  src/v20180625/model/UnbindSubnetsFromNatGatewayResponse.cpp
  src/v20180625/model/DescribeVpnConnectionsResponse.cpp
  src/v20180625/model/DeleteCustomerGatewayRequest.cpp
  src/v20180625/model/IpInfo.cpp
  src/v20180625/model/UpgradeNatGatewayRequest.cpp
  src/v20180625/model/DeleteVpnGatewayResponse.cpp
  src/v20180625/model/DeleteInterfacesResponse.cpp
  src/v20180625/model/UnbindIpsFromNatGatewayRequest.cpp
  src/v20180625/model/CreateVirtualSubnetWithVlanResponse.cpp
  src/v20180625/model/ModifyVpnGatewayAttributeResponse.cpp
  src/v20180625/model/DescribeVpcQuotaResponse.cpp
  src/v20180625/model/UnbindEipsFromNatGatewayResponse.cpp
  src/v20180625/model/ModifySubnetAttributeResponse.cpp
  src/v20180625/model/CreateInterfacesRequest.cpp
  src/v20180625/model/DescribeVpcPeerConnectionsRequest.cpp
  src/v20180625/model/CreateVpcRequest.cpp
  src/v20180625/model/DescribeSubnetByHostedDeviceResponse.cpp
  src/v20180625/model/CreateVpcPeerConnectionRequest.cpp
  src/v20180625/model/CustomerGateway.cpp
  src/v20180625/model/ModifyRoutePolicyResponse.cpp
  src/v20180625/model/AsyncRegisterIpsResponse.cpp
  src/v20180625/model/DeleteVpcResponse.cpp
  src/v20180625/model/BindIpsToNatGatewayResponse.cpp
  src/v20180625/model/VpcQuota.cpp
  src/v20180625/model/CreateNatGatewayResponse.cpp
  src/v20180625/model/AsyncRegisterIpsRequest.cpp
  src/v20180625/model/BindIpsToNatGatewayRequest.cpp
  src/v20180625/model/DescribeVpcsResponse.cpp
  src/v20180625/model/SubnetCreateInputInfo.cpp
  src/v20180625/model/DeregisterIpsRequest.cpp
  src/v20180625/model/SecurityPolicyDatabase.cpp
  src/v20180625/model/VpcResource.cpp
  src/v20180625/model/UpgradeNatGatewayResponse.cpp
  src/v20180625/model/DeleteNatGatewayResponse.cpp
  )

set(bmvpc_include
    include/tencentcloud/bmvpc
  )

add_library(bmvpc ${LIB_TYPE}
  ${bmvpc_public_header}
  ${bmvpc_public_header_model}
  ${bmvpc_src})

set_target_properties(bmvpc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bmvpc
  )

target_include_directories(bmvpc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bmvpc
  core)

#install(FILES ${bmvpc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bmvpc/v20180625)
#install(FILES ${bmvpc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bmvpc/v20180625/model)
install(DIRECTORY ${bmvpc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bmvpc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VPC_V20170312_VPCCLIENT_H_
#define TENCENTCLOUD_VPC_V20170312_VPCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vpc/v20170312/model/AcceptAttachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AcceptAttachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AcceptVpcPeeringConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/AcceptVpcPeeringConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/AddBandwidthPackageResourcesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AddBandwidthPackageResourcesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AddIp6RulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AddIp6RulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AddTemplateMemberRequest.h>
#include <tencentcloud/vpc/v20170312/model/AddTemplateMemberResponse.h>
#include <tencentcloud/vpc/v20170312/model/AdjustPublicAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/AdjustPublicAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/AllocateAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AllocateAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AllocateIPv6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AllocateIPv6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AllocateIp6AddressesBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/AllocateIp6AddressesBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6CidrBlockRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6CidrBlockResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6SubnetCidrBlockRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6SubnetCidrBlockResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssignPrivateIpAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssignPrivateIpAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateDhcpIpWithAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateDhcpIpWithAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateDirectConnectGatewayNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateDirectConnectGatewayNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateHaVipInstanceRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateHaVipInstanceResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateIPv6AddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateIPv6AddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateInstancesToCcnRouteTableRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateInstancesToCcnRouteTableResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNatGatewayAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNatGatewayAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNetworkAclSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNetworkAclSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNetworkInterfaceSecurityGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNetworkInterfaceSecurityGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/AttachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AttachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AttachClassicLinkVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/AttachClassicLinkVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/AttachNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/AttachNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/AttachSnapshotInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AttachSnapshotInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AuditCrossBorderComplianceRequest.h>
#include <tencentcloud/vpc/v20170312/model/AuditCrossBorderComplianceResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckDefaultSubnetRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckDefaultSubnetResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckGatewayFlowMonitorRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckGatewayFlowMonitorResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckNetDetectStateRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckNetDetectStateResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckTrafficMirrorRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckTrafficMirrorResponse.h>
#include <tencentcloud/vpc/v20170312/model/ClearRouteTableSelectionPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ClearRouteTableSelectionPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CloneSecurityGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/CloneSecurityGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateAddressTemplateRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateAddressTemplateResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateAddressTemplateGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateAddressTemplateGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateAndAttachNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateAndAttachNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateBandwidthPackageRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateBandwidthPackageResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateCcnRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateCcnResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateCcnPolicyBasedRoutingNextHopRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateCcnPolicyBasedRoutingNextHopResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateCcnPolicyBasedRoutingRulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateCcnPolicyBasedRoutingRulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateCcnRouteTablesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateCcnRouteTablesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateCdcLDCXListRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateCdcLDCXListResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateCdcNetPlanesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateCdcNetPlanesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateCustomerGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateCustomerGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateDefaultSecurityGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateDefaultSecurityGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateDefaultVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateDefaultVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateDhcpIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateDhcpIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateFlowLogRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateFlowLogResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateGlobalRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateGlobalRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateHaVipRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateHaVipResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateHighPriorityRouteTableRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateHighPriorityRouteTableResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateHighPriorityRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateHighPriorityRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateIp6TranslatorsRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateIp6TranslatorsResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateLocalGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateLocalGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewaySourceIpTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewaySourceIpTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetDetectRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetDetectResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclQuintupleEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclQuintupleEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreatePrivateNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreatePrivateNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreatePrivateNatGatewayTranslationAclRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreatePrivateNatGatewayTranslationAclRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreatePrivateNatGatewayTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreatePrivateNatGatewayTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateReserveIpAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateReserveIpAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateRoutePolicyRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateRoutePolicyResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateRoutePolicyAssociationsRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateRoutePolicyAssociationsResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateRoutePolicyEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateRoutePolicyEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateRouteTableRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateRouteTableResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupWithPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupWithPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateServiceTemplateRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateServiceTemplateResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateServiceTemplateGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateServiceTemplateGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateTrafficMirrorRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateTrafficMirrorResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateTrafficPackagesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateTrafficPackagesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcPeeringConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcPeeringConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewaySslClientRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewaySslClientResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewaySslServerRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewaySslServerResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAddressTemplateRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAddressTemplateResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAddressTemplateGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAddressTemplateGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteBandwidthPackageRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteBandwidthPackageResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCcnRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCcnResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCcnPolicyBasedRoutingNextHopRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCcnPolicyBasedRoutingNextHopResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCcnPolicyBasedRoutingRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCcnPolicyBasedRoutingRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCcnRouteTablesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCcnRouteTablesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCdcLDCXListRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCdcLDCXListResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCdcNetPlanesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCdcNetPlanesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCustomerGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCustomerGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteDhcpIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteDhcpIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteDirectConnectGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteDirectConnectGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteDirectConnectGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteFlowLogRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteFlowLogResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteGlobalRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteGlobalRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteHaVipRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteHaVipResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteHighPriorityRouteTablesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteHighPriorityRouteTablesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteHighPriorityRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteHighPriorityRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteIp6TranslatorsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteIp6TranslatorsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteLocalGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteLocalGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewaySourceIpTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewaySourceIpTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetDetectRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetDetectResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclQuintupleEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclQuintupleEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeletePrivateNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeletePrivateNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeletePrivateNatGatewayTranslationAclRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeletePrivateNatGatewayTranslationAclRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeletePrivateNatGatewayTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeletePrivateNatGatewayTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteReserveIpAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteReserveIpAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRoutePolicyRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRoutePolicyResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRoutePolicyAssociationsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRoutePolicyAssociationsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRoutePolicyEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRoutePolicyEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRouteTableRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRouteTableResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSecurityGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSecurityGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteServiceTemplateRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteServiceTemplateResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteServiceTemplateGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteServiceTemplateGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSubnetRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSubnetResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteTemplateMemberRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteTemplateMemberResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteTrafficMirrorRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteTrafficMirrorResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteTrafficPackagesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteTrafficPackagesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcPeeringConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcPeeringConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewaySslClientRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewaySslClientResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewaySslServerRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewaySslServerResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAccountAttributesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAccountAttributesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressBandwidthRangeRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressBandwidthRangeResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressQuotaRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressQuotaResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateGroupInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateGroupInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplatesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplatesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageBandwidthRangeRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageBandwidthRangeResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageBillUsageRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageBillUsageResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageQuotaRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageQuotaResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageResourcesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageResourcesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackagesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackagesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnAttachedInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnAttachedInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnPolicyBasedRoutingNextHopRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnPolicyBasedRoutingNextHopResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnPolicyBasedRoutingRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnPolicyBasedRoutingRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRegionBandwidthLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRouteTableBroadcastPolicysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRouteTableBroadcastPolicysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRouteTableInputPolicysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRouteTableInputPolicysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRouteTablesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRouteTablesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCdcLDCXListRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCdcLDCXListResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCdcNetPlanesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCdcNetPlanesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCdcUsedIdcVlanRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCdcUsedIdcVlanResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeClassicLinkInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeClassicLinkInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderCcnRegionBandwidthLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderComplianceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderComplianceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderFlowMonitorRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderFlowMonitorResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewayVendorsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewayVendorsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDesignatedZonesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDesignatedZonesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDhcpIpsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDhcpIpsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDirectConnectGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDirectConnectGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDirectConnectGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeFlowLogRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeFlowLogResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeFlowLogsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeFlowLogsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeGatewayFlowMonitorDetailRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeGatewayFlowMonitorDetailResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeGatewayFlowQosRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeGatewayFlowQosResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeGlobalRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeGlobalRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeHaVipsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeHaVipsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeHighPriorityRouteTablesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeHighPriorityRouteTablesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeHighPriorityRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeHighPriorityRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIPv6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIPv6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeInstanceJumboRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeInstanceJumboResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIp6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIp6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIp6TranslatorQuotaRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIp6TranslatorQuotaResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIp6TranslatorsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIp6TranslatorsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIpGeolocationDatabaseUrlRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIpGeolocationDatabaseUrlResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIpGeolocationInfosRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIpGeolocationInfosResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeLocalGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeLocalGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDirectConnectGatewayRouteRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDirectConnectGatewayRouteResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayFlowMonitorDetailRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayFlowMonitorDetailResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaySourceIpTranslationNatRulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaySourceIpTranslationNatRulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayZonesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayZonesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectStatesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectStatesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAccountTypeRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAccountTypeResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAclQuintupleEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAclQuintupleEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAclsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAclsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfaceLimitRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfaceLimitResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfacesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfacesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayRegionsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayRegionsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayTranslationAclRulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayTranslationAclRulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayTranslationNatRulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayTranslationNatRulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeProductQuotaRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeProductQuotaResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeReserveIpAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeReserveIpAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteConflictsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteConflictsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRoutePoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRoutePoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRoutePolicyEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRoutePolicyEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteTableAssociatedInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteTableAssociatedInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteTableSelectionPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteTableSelectionPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteTablesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteTablesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupAssociationStatisticsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupAssociationStatisticsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupExpandedPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupExpandedPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupReferencesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupReferencesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateGroupInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateGroupInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplatesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplatesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSgSnapshotFileContentRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSgSnapshotFileContentResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotAttachedInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotAttachedInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotFilesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotFilesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSpecificTrafficPackageUsedDetailsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSpecificTrafficPackageUsedDetailsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetResourceDashboardRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetResourceDashboardResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTaskResultRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTaskResultResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTemplateLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTemplateLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTenantCcnsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTenantCcnsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTrafficMirrorsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTrafficMirrorsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTrafficPackagesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTrafficPackagesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTrafficQosPolicyRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTrafficQosPolicyResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeUsedIpAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeUsedIpAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointServiceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointServiceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcIpv6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcIpv6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcPeeringConnectionsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcPeeringConnectionsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcPrivateIpAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcPrivateIpAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcResourceDashboardRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcResourceDashboardResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcTaskResultRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcTaskResultResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnConnectionsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnConnectionsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewayRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaySslClientsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaySslClientsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaySslServersRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaySslServersResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachClassicLinkVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachClassicLinkVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachSnapshotInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachSnapshotInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableFlowLogsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableFlowLogsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableGatewayFlowMonitorRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableGatewayFlowMonitorResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableSnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableSnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableVpnGatewaySslClientCertRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableVpnGatewaySslClientCertResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateDhcpIpWithAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateDhcpIpWithAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateDirectConnectGatewayNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateDirectConnectGatewayNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateHaVipInstanceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateHaVipInstanceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateIPv6AddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateIPv6AddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNatGatewayAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNatGatewayAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkAclSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkAclSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkInterfaceSecurityGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkInterfaceSecurityGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateVpcEndPointSecurityGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateVpcEndPointSecurityGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DownloadCustomerGatewayConfigurationRequest.h>
#include <tencentcloud/vpc/v20170312/model/DownloadCustomerGatewayConfigurationResponse.h>
#include <tencentcloud/vpc/v20170312/model/DownloadVpnGatewaySslClientCertRequest.h>
#include <tencentcloud/vpc/v20170312/model/DownloadVpnGatewaySslClientCertResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableFlowLogsRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableFlowLogsResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableGatewayFlowMonitorRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableGatewayFlowMonitorResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableSnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableSnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableVpcEndPointConnectRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableVpcEndPointConnectResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableVpnGatewaySslClientCertRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableVpnGatewaySslClientCertResponse.h>
#include <tencentcloud/vpc/v20170312/model/GenerateVpnConnectionDefaultHealthCheckIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/GenerateVpnConnectionDefaultHealthCheckIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/GetCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/GetCcnRegionBandwidthLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociateAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociateAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/HaVipDisassociateAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/HaVipDisassociateAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquirePriceCreateDirectConnectGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquirePriceCreateDirectConnectGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceAllocateAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceAllocateAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceCreateVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceCreateVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceModifyAddressesBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceModifyAddressesBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceRenewAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceRenewAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceRenewVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceRenewVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/LockCcnBandwidthsRequest.h>
#include <tencentcloud/vpc/v20170312/model/LockCcnBandwidthsResponse.h>
#include <tencentcloud/vpc/v20170312/model/LockCcnsRequest.h>
#include <tencentcloud/vpc/v20170312/model/LockCcnsResponse.h>
#include <tencentcloud/vpc/v20170312/model/MigrateBandwidthPackageResourcesRequest.h>
#include <tencentcloud/vpc/v20170312/model/MigrateBandwidthPackageResourcesResponse.h>
#include <tencentcloud/vpc/v20170312/model/MigrateNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/MigrateNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/MigratePrivateIpAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/MigratePrivateIpAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressInternetChargeTypeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressInternetChargeTypeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressTemplateAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressTemplateAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressTemplateGroupAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressTemplateGroupAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressesBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressesBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressesRenewFlagRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressesRenewFlagResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttachedInstancesAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttachedInstancesAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnPolicyBasedRoutingNextHopAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnPolicyBasedRoutingNextHopAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnPolicyBasedRoutingRuleAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnPolicyBasedRoutingRuleAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnRegionBandwidthLimitsTypeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnRegionBandwidthLimitsTypeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnRouteTablesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnRouteTablesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCdcLDCXAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCdcLDCXAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCdcNetPlaneAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCdcNetPlaneAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCustomerGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCustomerGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyDhcpIpAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyDhcpIpAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyDirectConnectGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyDirectConnectGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyFlowLogAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyFlowLogAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyGatewayFlowQosRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyGatewayFlowQosResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyGlobalRouteECMPAlgorithmRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyGlobalRouteECMPAlgorithmResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyGlobalRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyGlobalRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHaVipAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHaVipAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHighPriorityRouteAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHighPriorityRouteAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHighPriorityRouteECMPAlgorithmRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHighPriorityRouteECMPAlgorithmResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHighPriorityRouteTableAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHighPriorityRouteTableAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIPv6AddressesAttributesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIPv6AddressesAttributesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIPv6AddressesBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIPv6AddressesBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIp6AddressesBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIp6AddressesBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIp6RuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIp6RuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIp6TranslatorRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIp6TranslatorResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIpv6AddressesAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIpv6AddressesAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyLocalGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyLocalGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewaySourceIpTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewaySourceIpTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetDetectRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetDetectResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclQuintupleEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclQuintupleEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceQosRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceQosResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateIpAddressesAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateIpAddressesAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateNatGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateNatGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateNatGatewayTranslationAclRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateNatGatewayTranslationAclRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateNatGatewayTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateNatGatewayTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyReserveIpAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyReserveIpAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRoutePolicyAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRoutePolicyAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableSelectionPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableSelectionPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateGroupAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateGroupAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySubnetAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySubnetAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyTemplateMemberRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyTemplateMemberResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyTrafficMirrorAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyTrafficMirrorAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcPeeringConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcPeeringConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnConnectionAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnConnectionAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewaySslClientCertRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewaySslClientCertResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewaySslServerRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewaySslServerResponse.h>
#include <tencentcloud/vpc/v20170312/model/NotifyRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/NotifyRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/RefreshDirectConnectGatewayRouteToNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/RefreshDirectConnectGatewayRouteToNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/RejectAttachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/RejectAttachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/RejectVpcPeeringConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/RejectVpcPeeringConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReleaseAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReleaseAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReleaseIPv6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReleaseIPv6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReleaseIp6AddressesBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReleaseIp6AddressesBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/RemoveBandwidthPackageResourcesRequest.h>
#include <tencentcloud/vpc/v20170312/model/RemoveBandwidthPackageResourcesResponse.h>
#include <tencentcloud/vpc/v20170312/model/RemoveIp6RulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/RemoveIp6RulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/RenewAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/RenewAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/RenewVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/RenewVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceCcnRouteTableBroadcastPolicysRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceCcnRouteTableBroadcastPolicysResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceCcnRouteTableInputPolicysRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceCcnRouteTableInputPolicysResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceDirectConnectGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceHighPriorityRouteTableAssociationRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceHighPriorityRouteTableAssociationResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceHighPriorityRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceHighPriorityRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutePolicyAssociationsRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutePolicyAssociationsResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutePolicyEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutePolicyEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRouteTableAssociationRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRouteTableAssociationResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutesWithRoutePolicyRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutesWithRoutePolicyResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceSecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceSecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceSecurityGroupPolicyRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceSecurityGroupPolicyResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetAttachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetAttachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetHighPriorityRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetHighPriorityRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetNatGatewayConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetNatGatewayConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetRoutePolicyAssociationsRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetRoutePolicyAssociationsResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetRoutePolicyEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetRoutePolicyEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetTrafficMirrorFilterRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetTrafficMirrorFilterResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetTrafficMirrorSrcsRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetTrafficMirrorSrcsResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetTrafficMirrorTargetRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetTrafficMirrorTargetResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnGatewayInternetMaxBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnGatewayInternetMaxBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResumeSnapshotInstanceRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResumeSnapshotInstanceResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReturnNormalAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReturnNormalAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/SetCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/SetCcnRegionBandwidthLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/SetVpnGatewaysRenewFlagRequest.h>
#include <tencentcloud/vpc/v20170312/model/SetVpnGatewaysRenewFlagResponse.h>
#include <tencentcloud/vpc/v20170312/model/StartTrafficMirrorRequest.h>
#include <tencentcloud/vpc/v20170312/model/StartTrafficMirrorResponse.h>
#include <tencentcloud/vpc/v20170312/model/StopTrafficMirrorRequest.h>
#include <tencentcloud/vpc/v20170312/model/StopTrafficMirrorResponse.h>
#include <tencentcloud/vpc/v20170312/model/TransformAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/TransformAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6CidrBlockRequest.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6CidrBlockResponse.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6SubnetCidrBlockRequest.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6SubnetCidrBlockResponse.h>
#include <tencentcloud/vpc/v20170312/model/UnassignPrivateIpAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/UnassignPrivateIpAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/UnlockCcnBandwidthsRequest.h>
#include <tencentcloud/vpc/v20170312/model/UnlockCcnBandwidthsResponse.h>
#include <tencentcloud/vpc/v20170312/model/UnlockCcnsRequest.h>
#include <tencentcloud/vpc/v20170312/model/UnlockCcnsResponse.h>
#include <tencentcloud/vpc/v20170312/model/UpdateTrafficMirrorAllFilterRequest.h>
#include <tencentcloud/vpc/v20170312/model/UpdateTrafficMirrorAllFilterResponse.h>
#include <tencentcloud/vpc/v20170312/model/UpdateTrafficMirrorDirectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/UpdateTrafficMirrorDirectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/UpgradeNatGatewayProductVersionRequest.h>
#include <tencentcloud/vpc/v20170312/model/UpgradeNatGatewayProductVersionResponse.h>
#include <tencentcloud/vpc/v20170312/model/WithdrawNotifyRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/WithdrawNotifyRoutesResponse.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            class VpcClient : public AbstractClient
            {
            public:
                VpcClient(const Credential &credential, const std::string &region);
                VpcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcceptAttachCcnInstancesResponse> AcceptAttachCcnInstancesOutcome;
                typedef std::future<AcceptAttachCcnInstancesOutcome> AcceptAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AcceptAttachCcnInstancesRequest&, AcceptAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptAttachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AcceptVpcPeeringConnectionResponse> AcceptVpcPeeringConnectionOutcome;
                typedef std::future<AcceptVpcPeeringConnectionOutcome> AcceptVpcPeeringConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AcceptVpcPeeringConnectionRequest&, AcceptVpcPeeringConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptVpcPeeringConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::AddBandwidthPackageResourcesResponse> AddBandwidthPackageResourcesOutcome;
                typedef std::future<AddBandwidthPackageResourcesOutcome> AddBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AddBandwidthPackageResourcesRequest&, AddBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddIp6RulesResponse> AddIp6RulesOutcome;
                typedef std::future<AddIp6RulesOutcome> AddIp6RulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AddIp6RulesRequest&, AddIp6RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddIp6RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddTemplateMemberResponse> AddTemplateMemberOutcome;
                typedef std::future<AddTemplateMemberOutcome> AddTemplateMemberOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AddTemplateMemberRequest&, AddTemplateMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTemplateMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::AdjustPublicAddressResponse> AdjustPublicAddressOutcome;
                typedef std::future<AdjustPublicAddressOutcome> AdjustPublicAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AdjustPublicAddressRequest&, AdjustPublicAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AdjustPublicAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AllocateAddressesResponse> AllocateAddressesOutcome;
                typedef std::future<AllocateAddressesOutcome> AllocateAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AllocateAddressesRequest&, AllocateAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::AllocateIPv6AddressesResponse> AllocateIPv6AddressesOutcome;
                typedef std::future<AllocateIPv6AddressesOutcome> AllocateIPv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AllocateIPv6AddressesRequest&, AllocateIPv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateIPv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::AllocateIp6AddressesBandwidthResponse> AllocateIp6AddressesBandwidthOutcome;
                typedef std::future<AllocateIp6AddressesBandwidthOutcome> AllocateIp6AddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AllocateIp6AddressesBandwidthRequest&, AllocateIp6AddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateIp6AddressesBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignIpv6AddressesResponse> AssignIpv6AddressesOutcome;
                typedef std::future<AssignIpv6AddressesOutcome> AssignIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6AddressesRequest&, AssignIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignIpv6CidrBlockResponse> AssignIpv6CidrBlockOutcome;
                typedef std::future<AssignIpv6CidrBlockOutcome> AssignIpv6CidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6CidrBlockRequest&, AssignIpv6CidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6CidrBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignIpv6SubnetCidrBlockResponse> AssignIpv6SubnetCidrBlockOutcome;
                typedef std::future<AssignIpv6SubnetCidrBlockOutcome> AssignIpv6SubnetCidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6SubnetCidrBlockRequest&, AssignIpv6SubnetCidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6SubnetCidrBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignPrivateIpAddressesResponse> AssignPrivateIpAddressesOutcome;
                typedef std::future<AssignPrivateIpAddressesOutcome> AssignPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignPrivateIpAddressesRequest&, AssignPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignPrivateIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateAddressResponse> AssociateAddressOutcome;
                typedef std::future<AssociateAddressOutcome> AssociateAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateAddressRequest&, AssociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateDhcpIpWithAddressIpResponse> AssociateDhcpIpWithAddressIpOutcome;
                typedef std::future<AssociateDhcpIpWithAddressIpOutcome> AssociateDhcpIpWithAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateDhcpIpWithAddressIpRequest&, AssociateDhcpIpWithAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDhcpIpWithAddressIpAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateDirectConnectGatewayNatGatewayResponse> AssociateDirectConnectGatewayNatGatewayOutcome;
                typedef std::future<AssociateDirectConnectGatewayNatGatewayOutcome> AssociateDirectConnectGatewayNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateDirectConnectGatewayNatGatewayRequest&, AssociateDirectConnectGatewayNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDirectConnectGatewayNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateHaVipInstanceResponse> AssociateHaVipInstanceOutcome;
                typedef std::future<AssociateHaVipInstanceOutcome> AssociateHaVipInstanceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateHaVipInstanceRequest&, AssociateHaVipInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateHaVipInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateIPv6AddressResponse> AssociateIPv6AddressOutcome;
                typedef std::future<AssociateIPv6AddressOutcome> AssociateIPv6AddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateIPv6AddressRequest&, AssociateIPv6AddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateIPv6AddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateInstancesToCcnRouteTableResponse> AssociateInstancesToCcnRouteTableOutcome;
                typedef std::future<AssociateInstancesToCcnRouteTableOutcome> AssociateInstancesToCcnRouteTableOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateInstancesToCcnRouteTableRequest&, AssociateInstancesToCcnRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateInstancesToCcnRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateNatGatewayAddressResponse> AssociateNatGatewayAddressOutcome;
                typedef std::future<AssociateNatGatewayAddressOutcome> AssociateNatGatewayAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNatGatewayAddressRequest&, AssociateNatGatewayAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNatGatewayAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateNetworkAclSubnetsResponse> AssociateNetworkAclSubnetsOutcome;
                typedef std::future<AssociateNetworkAclSubnetsOutcome> AssociateNetworkAclSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNetworkAclSubnetsRequest&, AssociateNetworkAclSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNetworkAclSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateNetworkInterfaceSecurityGroupsResponse> AssociateNetworkInterfaceSecurityGroupsOutcome;
                typedef std::future<AssociateNetworkInterfaceSecurityGroupsOutcome> AssociateNetworkInterfaceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNetworkInterfaceSecurityGroupsRequest&, AssociateNetworkInterfaceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNetworkInterfaceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachCcnInstancesResponse> AttachCcnInstancesOutcome;
                typedef std::future<AttachCcnInstancesOutcome> AttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachCcnInstancesRequest&, AttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachClassicLinkVpcResponse> AttachClassicLinkVpcOutcome;
                typedef std::future<AttachClassicLinkVpcOutcome> AttachClassicLinkVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachClassicLinkVpcRequest&, AttachClassicLinkVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachClassicLinkVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachNetworkInterfaceResponse> AttachNetworkInterfaceOutcome;
                typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachNetworkInterfaceRequest&, AttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachSnapshotInstancesResponse> AttachSnapshotInstancesOutcome;
                typedef std::future<AttachSnapshotInstancesOutcome> AttachSnapshotInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachSnapshotInstancesRequest&, AttachSnapshotInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachSnapshotInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AuditCrossBorderComplianceResponse> AuditCrossBorderComplianceOutcome;
                typedef std::future<AuditCrossBorderComplianceOutcome> AuditCrossBorderComplianceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AuditCrossBorderComplianceRequest&, AuditCrossBorderComplianceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AuditCrossBorderComplianceAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAssistantCidrResponse> CheckAssistantCidrOutcome;
                typedef std::future<CheckAssistantCidrOutcome> CheckAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckAssistantCidrRequest&, CheckAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAssistantCidrAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDefaultSubnetResponse> CheckDefaultSubnetOutcome;
                typedef std::future<CheckDefaultSubnetOutcome> CheckDefaultSubnetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckDefaultSubnetRequest&, CheckDefaultSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDefaultSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckGatewayFlowMonitorResponse> CheckGatewayFlowMonitorOutcome;
                typedef std::future<CheckGatewayFlowMonitorOutcome> CheckGatewayFlowMonitorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckGatewayFlowMonitorRequest&, CheckGatewayFlowMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckGatewayFlowMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckNetDetectStateResponse> CheckNetDetectStateOutcome;
                typedef std::future<CheckNetDetectStateOutcome> CheckNetDetectStateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckNetDetectStateRequest&, CheckNetDetectStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckNetDetectStateAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckTrafficMirrorResponse> CheckTrafficMirrorOutcome;
                typedef std::future<CheckTrafficMirrorOutcome> CheckTrafficMirrorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckTrafficMirrorRequest&, CheckTrafficMirrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckTrafficMirrorAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearRouteTableSelectionPoliciesResponse> ClearRouteTableSelectionPoliciesOutcome;
                typedef std::future<ClearRouteTableSelectionPoliciesOutcome> ClearRouteTableSelectionPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ClearRouteTableSelectionPoliciesRequest&, ClearRouteTableSelectionPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearRouteTableSelectionPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneSecurityGroupResponse> CloneSecurityGroupOutcome;
                typedef std::future<CloneSecurityGroupOutcome> CloneSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CloneSecurityGroupRequest&, CloneSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAddressTemplateResponse> CreateAddressTemplateOutcome;
                typedef std::future<CreateAddressTemplateOutcome> CreateAddressTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAddressTemplateRequest&, CreateAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAddressTemplateGroupResponse> CreateAddressTemplateGroupOutcome;
                typedef std::future<CreateAddressTemplateGroupOutcome> CreateAddressTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAddressTemplateGroupRequest&, CreateAddressTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressTemplateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndAttachNetworkInterfaceResponse> CreateAndAttachNetworkInterfaceOutcome;
                typedef std::future<CreateAndAttachNetworkInterfaceOutcome> CreateAndAttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAndAttachNetworkInterfaceRequest&, CreateAndAttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndAttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssistantCidrResponse> CreateAssistantCidrOutcome;
                typedef std::future<CreateAssistantCidrOutcome> CreateAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAssistantCidrRequest&, CreateAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssistantCidrAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBandwidthPackageResponse> CreateBandwidthPackageOutcome;
                typedef std::future<CreateBandwidthPackageOutcome> CreateBandwidthPackageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateBandwidthPackageRequest&, CreateBandwidthPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBandwidthPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCcnResponse> CreateCcnOutcome;
                typedef std::future<CreateCcnOutcome> CreateCcnOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCcnRequest&, CreateCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcnAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCcnPolicyBasedRoutingNextHopResponse> CreateCcnPolicyBasedRoutingNextHopOutcome;
                typedef std::future<CreateCcnPolicyBasedRoutingNextHopOutcome> CreateCcnPolicyBasedRoutingNextHopOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCcnPolicyBasedRoutingNextHopRequest&, CreateCcnPolicyBasedRoutingNextHopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcnPolicyBasedRoutingNextHopAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCcnPolicyBasedRoutingRulesResponse> CreateCcnPolicyBasedRoutingRulesOutcome;
                typedef std::future<CreateCcnPolicyBasedRoutingRulesOutcome> CreateCcnPolicyBasedRoutingRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCcnPolicyBasedRoutingRulesRequest&, CreateCcnPolicyBasedRoutingRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcnPolicyBasedRoutingRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCcnRouteTablesResponse> CreateCcnRouteTablesOutcome;
                typedef std::future<CreateCcnRouteTablesOutcome> CreateCcnRouteTablesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCcnRouteTablesRequest&, CreateCcnRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcnRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCdcLDCXListResponse> CreateCdcLDCXListOutcome;
                typedef std::future<CreateCdcLDCXListOutcome> CreateCdcLDCXListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCdcLDCXListRequest&, CreateCdcLDCXListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdcLDCXListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCdcNetPlanesResponse> CreateCdcNetPlanesOutcome;
                typedef std::future<CreateCdcNetPlanesOutcome> CreateCdcNetPlanesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCdcNetPlanesRequest&, CreateCdcNetPlanesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdcNetPlanesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomerGatewayResponse> CreateCustomerGatewayOutcome;
                typedef std::future<CreateCustomerGatewayOutcome> CreateCustomerGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCustomerGatewayRequest&, CreateCustomerGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomerGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDefaultSecurityGroupResponse> CreateDefaultSecurityGroupOutcome;
                typedef std::future<CreateDefaultSecurityGroupOutcome> CreateDefaultSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDefaultSecurityGroupRequest&, CreateDefaultSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDefaultVpcResponse> CreateDefaultVpcOutcome;
                typedef std::future<CreateDefaultVpcOutcome> CreateDefaultVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDefaultVpcRequest&, CreateDefaultVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDhcpIpResponse> CreateDhcpIpOutcome;
                typedef std::future<CreateDhcpIpOutcome> CreateDhcpIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDhcpIpRequest&, CreateDhcpIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDhcpIpAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDirectConnectGatewayResponse> CreateDirectConnectGatewayOutcome;
                typedef std::future<CreateDirectConnectGatewayOutcome> CreateDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDirectConnectGatewayRequest&, CreateDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDirectConnectGatewayCcnRoutesResponse> CreateDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<CreateDirectConnectGatewayCcnRoutesOutcome> CreateDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDirectConnectGatewayCcnRoutesRequest&, CreateDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowLogResponse> CreateFlowLogOutcome;
                typedef std::future<CreateFlowLogOutcome> CreateFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateFlowLogRequest&, CreateFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalRoutesResponse> CreateGlobalRoutesOutcome;
                typedef std::future<CreateGlobalRoutesOutcome> CreateGlobalRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateGlobalRoutesRequest&, CreateGlobalRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHaVipResponse> CreateHaVipOutcome;
                typedef std::future<CreateHaVipOutcome> CreateHaVipOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateHaVipRequest&, CreateHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHaVipAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHighPriorityRouteTableResponse> CreateHighPriorityRouteTableOutcome;
                typedef std::future<CreateHighPriorityRouteTableOutcome> CreateHighPriorityRouteTableOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateHighPriorityRouteTableRequest&, CreateHighPriorityRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHighPriorityRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHighPriorityRoutesResponse> CreateHighPriorityRoutesOutcome;
                typedef std::future<CreateHighPriorityRoutesOutcome> CreateHighPriorityRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateHighPriorityRoutesRequest&, CreateHighPriorityRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHighPriorityRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIp6TranslatorsResponse> CreateIp6TranslatorsOutcome;
                typedef std::future<CreateIp6TranslatorsOutcome> CreateIp6TranslatorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateIp6TranslatorsRequest&, CreateIp6TranslatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIp6TranslatorsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLocalGatewayResponse> CreateLocalGatewayOutcome;
                typedef std::future<CreateLocalGatewayOutcome> CreateLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateLocalGatewayRequest&, CreateLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLocalGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatGatewayResponse> CreateNatGatewayOutcome;
                typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewayRequest&, CreateNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatGatewayDestinationIpPortTranslationNatRuleResponse> CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome> CreateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest&, CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatGatewaySourceIpTranslationNatRuleResponse> CreateNatGatewaySourceIpTranslationNatRuleOutcome;
                typedef std::future<CreateNatGatewaySourceIpTranslationNatRuleOutcome> CreateNatGatewaySourceIpTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewaySourceIpTranslationNatRuleRequest&, CreateNatGatewaySourceIpTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewaySourceIpTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetDetectResponse> CreateNetDetectOutcome;
                typedef std::future<CreateNetDetectOutcome> CreateNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetDetectRequest&, CreateNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkAclResponse> CreateNetworkAclOutcome;
                typedef std::future<CreateNetworkAclOutcome> CreateNetworkAclOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkAclRequest&, CreateNetworkAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAclAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkAclEntriesResponse> CreateNetworkAclEntriesOutcome;
                typedef std::future<CreateNetworkAclEntriesOutcome> CreateNetworkAclEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkAclEntriesRequest&, CreateNetworkAclEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAclEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkAclQuintupleEntriesResponse> CreateNetworkAclQuintupleEntriesOutcome;
                typedef std::future<CreateNetworkAclQuintupleEntriesOutcome> CreateNetworkAclQuintupleEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkAclQuintupleEntriesRequest&, CreateNetworkAclQuintupleEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAclQuintupleEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkInterfaceResponse> CreateNetworkInterfaceOutcome;
                typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkInterfaceRequest&, CreateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivateNatGatewayResponse> CreatePrivateNatGatewayOutcome;
                typedef std::future<CreatePrivateNatGatewayOutcome> CreatePrivateNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreatePrivateNatGatewayRequest&, CreatePrivateNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleResponse> CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome> CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest&, CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivateNatGatewayTranslationAclRuleResponse> CreatePrivateNatGatewayTranslationAclRuleOutcome;
                typedef std::future<CreatePrivateNatGatewayTranslationAclRuleOutcome> CreatePrivateNatGatewayTranslationAclRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreatePrivateNatGatewayTranslationAclRuleRequest&, CreatePrivateNatGatewayTranslationAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateNatGatewayTranslationAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivateNatGatewayTranslationNatRuleResponse> CreatePrivateNatGatewayTranslationNatRuleOutcome;
                typedef std::future<CreatePrivateNatGatewayTranslationNatRuleOutcome> CreatePrivateNatGatewayTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreatePrivateNatGatewayTranslationNatRuleRequest&, CreatePrivateNatGatewayTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateNatGatewayTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReserveIpAddressesResponse> CreateReserveIpAddressesOutcome;
                typedef std::future<CreateReserveIpAddressesOutcome> CreateReserveIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateReserveIpAddressesRequest&, CreateReserveIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReserveIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoutePolicyResponse> CreateRoutePolicyOutcome;
                typedef std::future<CreateRoutePolicyOutcome> CreateRoutePolicyOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRoutePolicyRequest&, CreateRoutePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoutePolicyAssociationsResponse> CreateRoutePolicyAssociationsOutcome;
                typedef std::future<CreateRoutePolicyAssociationsOutcome> CreateRoutePolicyAssociationsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRoutePolicyAssociationsRequest&, CreateRoutePolicyAssociationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutePolicyAssociationsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoutePolicyEntriesResponse> CreateRoutePolicyEntriesOutcome;
                typedef std::future<CreateRoutePolicyEntriesOutcome> CreateRoutePolicyEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRoutePolicyEntriesRequest&, CreateRoutePolicyEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutePolicyEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRouteTableResponse> CreateRouteTableOutcome;
                typedef std::future<CreateRouteTableOutcome> CreateRouteTableOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRouteTableRequest&, CreateRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoutesResponse> CreateRoutesOutcome;
                typedef std::future<CreateRoutesOutcome> CreateRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRoutesRequest&, CreateRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupResponse> CreateSecurityGroupOutcome;
                typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupRequest&, CreateSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupPoliciesResponse> CreateSecurityGroupPoliciesOutcome;
                typedef std::future<CreateSecurityGroupPoliciesOutcome> CreateSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupPoliciesRequest&, CreateSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupWithPoliciesResponse> CreateSecurityGroupWithPoliciesOutcome;
                typedef std::future<CreateSecurityGroupWithPoliciesOutcome> CreateSecurityGroupWithPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupWithPoliciesRequest&, CreateSecurityGroupWithPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupWithPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceTemplateResponse> CreateServiceTemplateOutcome;
                typedef std::future<CreateServiceTemplateOutcome> CreateServiceTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateServiceTemplateRequest&, CreateServiceTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceTemplateGroupResponse> CreateServiceTemplateGroupOutcome;
                typedef std::future<CreateServiceTemplateGroupOutcome> CreateServiceTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateServiceTemplateGroupRequest&, CreateServiceTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceTemplateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotPoliciesResponse> CreateSnapshotPoliciesOutcome;
                typedef std::future<CreateSnapshotPoliciesOutcome> CreateSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSnapshotPoliciesRequest&, CreateSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubnetResponse> CreateSubnetOutcome;
                typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSubnetRequest&, CreateSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubnetsResponse> CreateSubnetsOutcome;
                typedef std::future<CreateSubnetsOutcome> CreateSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSubnetsRequest&, CreateSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTrafficMirrorResponse> CreateTrafficMirrorOutcome;
                typedef std::future<CreateTrafficMirrorOutcome> CreateTrafficMirrorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateTrafficMirrorRequest&, CreateTrafficMirrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrafficMirrorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTrafficPackagesResponse> CreateTrafficPackagesOutcome;
                typedef std::future<CreateTrafficPackagesOutcome> CreateTrafficPackagesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateTrafficPackagesRequest&, CreateTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrafficPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcResponse> CreateVpcOutcome;
                typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcRequest&, CreateVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcEndPointResponse> CreateVpcEndPointOutcome;
                typedef std::future<CreateVpcEndPointOutcome> CreateVpcEndPointOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcEndPointRequest&, CreateVpcEndPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndPointAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcEndPointServiceResponse> CreateVpcEndPointServiceOutcome;
                typedef std::future<CreateVpcEndPointServiceOutcome> CreateVpcEndPointServiceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcEndPointServiceRequest&, CreateVpcEndPointServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndPointServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcEndPointServiceWhiteListResponse> CreateVpcEndPointServiceWhiteListOutcome;
                typedef std::future<CreateVpcEndPointServiceWhiteListOutcome> CreateVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcEndPointServiceWhiteListRequest&, CreateVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcPeeringConnectionResponse> CreateVpcPeeringConnectionOutcome;
                typedef std::future<CreateVpcPeeringConnectionOutcome> CreateVpcPeeringConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcPeeringConnectionRequest&, CreateVpcPeeringConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcPeeringConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpnConnectionResponse> CreateVpnConnectionOutcome;
                typedef std::future<CreateVpnConnectionOutcome> CreateVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnConnectionRequest&, CreateVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpnGatewayResponse> CreateVpnGatewayOutcome;
                typedef std::future<CreateVpnGatewayOutcome> CreateVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnGatewayRequest&, CreateVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpnGatewayRoutesResponse> CreateVpnGatewayRoutesOutcome;
                typedef std::future<CreateVpnGatewayRoutesOutcome> CreateVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnGatewayRoutesRequest&, CreateVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpnGatewaySslClientResponse> CreateVpnGatewaySslClientOutcome;
                typedef std::future<CreateVpnGatewaySslClientOutcome> CreateVpnGatewaySslClientOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnGatewaySslClientRequest&, CreateVpnGatewaySslClientOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnGatewaySslClientAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpnGatewaySslServerResponse> CreateVpnGatewaySslServerOutcome;
                typedef std::future<CreateVpnGatewaySslServerOutcome> CreateVpnGatewaySslServerOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnGatewaySslServerRequest&, CreateVpnGatewaySslServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnGatewaySslServerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAddressTemplateResponse> DeleteAddressTemplateOutcome;
                typedef std::future<DeleteAddressTemplateOutcome> DeleteAddressTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAddressTemplateRequest&, DeleteAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAddressTemplateGroupResponse> DeleteAddressTemplateGroupOutcome;
                typedef std::future<DeleteAddressTemplateGroupOutcome> DeleteAddressTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAddressTemplateGroupRequest&, DeleteAddressTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressTemplateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAssistantCidrResponse> DeleteAssistantCidrOutcome;
                typedef std::future<DeleteAssistantCidrOutcome> DeleteAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAssistantCidrRequest&, DeleteAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssistantCidrAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBandwidthPackageResponse> DeleteBandwidthPackageOutcome;
                typedef std::future<DeleteBandwidthPackageOutcome> DeleteBandwidthPackageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteBandwidthPackageRequest&, DeleteBandwidthPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBandwidthPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCcnResponse> DeleteCcnOutcome;
                typedef std::future<DeleteCcnOutcome> DeleteCcnOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCcnRequest&, DeleteCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcnAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCcnPolicyBasedRoutingNextHopResponse> DeleteCcnPolicyBasedRoutingNextHopOutcome;
                typedef std::future<DeleteCcnPolicyBasedRoutingNextHopOutcome> DeleteCcnPolicyBasedRoutingNextHopOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCcnPolicyBasedRoutingNextHopRequest&, DeleteCcnPolicyBasedRoutingNextHopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcnPolicyBasedRoutingNextHopAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCcnPolicyBasedRoutingRuleResponse> DeleteCcnPolicyBasedRoutingRuleOutcome;
                typedef std::future<DeleteCcnPolicyBasedRoutingRuleOutcome> DeleteCcnPolicyBasedRoutingRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCcnPolicyBasedRoutingRuleRequest&, DeleteCcnPolicyBasedRoutingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcnPolicyBasedRoutingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCcnRouteTablesResponse> DeleteCcnRouteTablesOutcome;
                typedef std::future<DeleteCcnRouteTablesOutcome> DeleteCcnRouteTablesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCcnRouteTablesRequest&, DeleteCcnRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcnRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCdcLDCXListResponse> DeleteCdcLDCXListOutcome;
                typedef std::future<DeleteCdcLDCXListOutcome> DeleteCdcLDCXListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCdcLDCXListRequest&, DeleteCdcLDCXListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdcLDCXListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCdcNetPlanesResponse> DeleteCdcNetPlanesOutcome;
                typedef std::future<DeleteCdcNetPlanesOutcome> DeleteCdcNetPlanesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCdcNetPlanesRequest&, DeleteCdcNetPlanesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdcNetPlanesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomerGatewayResponse> DeleteCustomerGatewayOutcome;
                typedef std::future<DeleteCustomerGatewayOutcome> DeleteCustomerGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCustomerGatewayRequest&, DeleteCustomerGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomerGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDhcpIpResponse> DeleteDhcpIpOutcome;
                typedef std::future<DeleteDhcpIpOutcome> DeleteDhcpIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteDhcpIpRequest&, DeleteDhcpIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDhcpIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDirectConnectGatewayResponse> DeleteDirectConnectGatewayOutcome;
                typedef std::future<DeleteDirectConnectGatewayOutcome> DeleteDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteDirectConnectGatewayRequest&, DeleteDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDirectConnectGatewayCcnRoutesResponse> DeleteDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<DeleteDirectConnectGatewayCcnRoutesOutcome> DeleteDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteDirectConnectGatewayCcnRoutesRequest&, DeleteDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFlowLogResponse> DeleteFlowLogOutcome;
                typedef std::future<DeleteFlowLogOutcome> DeleteFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteFlowLogRequest&, DeleteFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalRoutesResponse> DeleteGlobalRoutesOutcome;
                typedef std::future<DeleteGlobalRoutesOutcome> DeleteGlobalRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteGlobalRoutesRequest&, DeleteGlobalRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHaVipResponse> DeleteHaVipOutcome;
                typedef std::future<DeleteHaVipOutcome> DeleteHaVipOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteHaVipRequest&, DeleteHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHaVipAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHighPriorityRouteTablesResponse> DeleteHighPriorityRouteTablesOutcome;
                typedef std::future<DeleteHighPriorityRouteTablesOutcome> DeleteHighPriorityRouteTablesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteHighPriorityRouteTablesRequest&, DeleteHighPriorityRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHighPriorityRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHighPriorityRoutesResponse> DeleteHighPriorityRoutesOutcome;
                typedef std::future<DeleteHighPriorityRoutesOutcome> DeleteHighPriorityRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteHighPriorityRoutesRequest&, DeleteHighPriorityRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHighPriorityRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIp6TranslatorsResponse> DeleteIp6TranslatorsOutcome;
                typedef std::future<DeleteIp6TranslatorsOutcome> DeleteIp6TranslatorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteIp6TranslatorsRequest&, DeleteIp6TranslatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIp6TranslatorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLocalGatewayResponse> DeleteLocalGatewayOutcome;
                typedef std::future<DeleteLocalGatewayOutcome> DeleteLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteLocalGatewayRequest&, DeleteLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLocalGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNatGatewayResponse> DeleteNatGatewayOutcome;
                typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewayRequest&, DeleteNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse> DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome> DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest&, DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNatGatewaySourceIpTranslationNatRuleResponse> DeleteNatGatewaySourceIpTranslationNatRuleOutcome;
                typedef std::future<DeleteNatGatewaySourceIpTranslationNatRuleOutcome> DeleteNatGatewaySourceIpTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewaySourceIpTranslationNatRuleRequest&, DeleteNatGatewaySourceIpTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewaySourceIpTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetDetectResponse> DeleteNetDetectOutcome;
                typedef std::future<DeleteNetDetectOutcome> DeleteNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetDetectRequest&, DeleteNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetworkAclResponse> DeleteNetworkAclOutcome;
                typedef std::future<DeleteNetworkAclOutcome> DeleteNetworkAclOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkAclRequest&, DeleteNetworkAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAclAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetworkAclEntriesResponse> DeleteNetworkAclEntriesOutcome;
                typedef std::future<DeleteNetworkAclEntriesOutcome> DeleteNetworkAclEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkAclEntriesRequest&, DeleteNetworkAclEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAclEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetworkAclQuintupleEntriesResponse> DeleteNetworkAclQuintupleEntriesOutcome;
                typedef std::future<DeleteNetworkAclQuintupleEntriesOutcome> DeleteNetworkAclQuintupleEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkAclQuintupleEntriesRequest&, DeleteNetworkAclQuintupleEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAclQuintupleEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetworkInterfaceResponse> DeleteNetworkInterfaceOutcome;
                typedef std::future<DeleteNetworkInterfaceOutcome> DeleteNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkInterfaceRequest&, DeleteNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateNatGatewayResponse> DeletePrivateNatGatewayOutcome;
                typedef std::future<DeletePrivateNatGatewayOutcome> DeletePrivateNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeletePrivateNatGatewayRequest&, DeletePrivateNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleResponse> DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome> DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest&, DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateNatGatewayTranslationAclRuleResponse> DeletePrivateNatGatewayTranslationAclRuleOutcome;
                typedef std::future<DeletePrivateNatGatewayTranslationAclRuleOutcome> DeletePrivateNatGatewayTranslationAclRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeletePrivateNatGatewayTranslationAclRuleRequest&, DeletePrivateNatGatewayTranslationAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateNatGatewayTranslationAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateNatGatewayTranslationNatRuleResponse> DeletePrivateNatGatewayTranslationNatRuleOutcome;
                typedef std::future<DeletePrivateNatGatewayTranslationNatRuleOutcome> DeletePrivateNatGatewayTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeletePrivateNatGatewayTranslationNatRuleRequest&, DeletePrivateNatGatewayTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateNatGatewayTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReserveIpAddressesResponse> DeleteReserveIpAddressesOutcome;
                typedef std::future<DeleteReserveIpAddressesOutcome> DeleteReserveIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteReserveIpAddressesRequest&, DeleteReserveIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReserveIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoutePolicyResponse> DeleteRoutePolicyOutcome;
                typedef std::future<DeleteRoutePolicyOutcome> DeleteRoutePolicyOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRoutePolicyRequest&, DeleteRoutePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoutePolicyAssociationsResponse> DeleteRoutePolicyAssociationsOutcome;
                typedef std::future<DeleteRoutePolicyAssociationsOutcome> DeleteRoutePolicyAssociationsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRoutePolicyAssociationsRequest&, DeleteRoutePolicyAssociationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutePolicyAssociationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoutePolicyEntriesResponse> DeleteRoutePolicyEntriesOutcome;
                typedef std::future<DeleteRoutePolicyEntriesOutcome> DeleteRoutePolicyEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRoutePolicyEntriesRequest&, DeleteRoutePolicyEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutePolicyEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRouteTableResponse> DeleteRouteTableOutcome;
                typedef std::future<DeleteRouteTableOutcome> DeleteRouteTableOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRouteTableRequest&, DeleteRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoutesResponse> DeleteRoutesOutcome;
                typedef std::future<DeleteRoutesOutcome> DeleteRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRoutesRequest&, DeleteRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityGroupResponse> DeleteSecurityGroupOutcome;
                typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSecurityGroupRequest&, DeleteSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityGroupPoliciesResponse> DeleteSecurityGroupPoliciesOutcome;
                typedef std::future<DeleteSecurityGroupPoliciesOutcome> DeleteSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSecurityGroupPoliciesRequest&, DeleteSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceTemplateResponse> DeleteServiceTemplateOutcome;
                typedef std::future<DeleteServiceTemplateOutcome> DeleteServiceTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteServiceTemplateRequest&, DeleteServiceTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceTemplateGroupResponse> DeleteServiceTemplateGroupOutcome;
                typedef std::future<DeleteServiceTemplateGroupOutcome> DeleteServiceTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteServiceTemplateGroupRequest&, DeleteServiceTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceTemplateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotPoliciesResponse> DeleteSnapshotPoliciesOutcome;
                typedef std::future<DeleteSnapshotPoliciesOutcome> DeleteSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSnapshotPoliciesRequest&, DeleteSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSubnetResponse> DeleteSubnetOutcome;
                typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSubnetRequest&, DeleteSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTemplateMemberResponse> DeleteTemplateMemberOutcome;
                typedef std::future<DeleteTemplateMemberOutcome> DeleteTemplateMemberOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteTemplateMemberRequest&, DeleteTemplateMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrafficMirrorResponse> DeleteTrafficMirrorOutcome;
                typedef std::future<DeleteTrafficMirrorOutcome> DeleteTrafficMirrorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteTrafficMirrorRequest&, DeleteTrafficMirrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrafficMirrorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrafficPackagesResponse> DeleteTrafficPackagesOutcome;
                typedef std::future<DeleteTrafficPackagesOutcome> DeleteTrafficPackagesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteTrafficPackagesRequest&, DeleteTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrafficPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcResponse> DeleteVpcOutcome;
                typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcRequest&, DeleteVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcEndPointResponse> DeleteVpcEndPointOutcome;
                typedef std::future<DeleteVpcEndPointOutcome> DeleteVpcEndPointOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcEndPointRequest&, DeleteVpcEndPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndPointAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcEndPointServiceResponse> DeleteVpcEndPointServiceOutcome;
                typedef std::future<DeleteVpcEndPointServiceOutcome> DeleteVpcEndPointServiceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcEndPointServiceRequest&, DeleteVpcEndPointServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndPointServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcEndPointServiceWhiteListResponse> DeleteVpcEndPointServiceWhiteListOutcome;
                typedef std::future<DeleteVpcEndPointServiceWhiteListOutcome> DeleteVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcEndPointServiceWhiteListRequest&, DeleteVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcPeeringConnectionResponse> DeleteVpcPeeringConnectionOutcome;
                typedef std::future<DeleteVpcPeeringConnectionOutcome> DeleteVpcPeeringConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcPeeringConnectionRequest&, DeleteVpcPeeringConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcPeeringConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpnConnectionResponse> DeleteVpnConnectionOutcome;
                typedef std::future<DeleteVpnConnectionOutcome> DeleteVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnConnectionRequest&, DeleteVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpnGatewayResponse> DeleteVpnGatewayOutcome;
                typedef std::future<DeleteVpnGatewayOutcome> DeleteVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewayRequest&, DeleteVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpnGatewayRoutesResponse> DeleteVpnGatewayRoutesOutcome;
                typedef std::future<DeleteVpnGatewayRoutesOutcome> DeleteVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewayRoutesRequest&, DeleteVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpnGatewaySslClientResponse> DeleteVpnGatewaySslClientOutcome;
                typedef std::future<DeleteVpnGatewaySslClientOutcome> DeleteVpnGatewaySslClientOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewaySslClientRequest&, DeleteVpnGatewaySslClientOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewaySslClientAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpnGatewaySslServerResponse> DeleteVpnGatewaySslServerOutcome;
                typedef std::future<DeleteVpnGatewaySslServerOutcome> DeleteVpnGatewaySslServerOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewaySslServerRequest&, DeleteVpnGatewaySslServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewaySslServerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountAttributesResponse> DescribeAccountAttributesOutcome;
                typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAccountAttributesRequest&, DescribeAccountAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressBandwidthRangeResponse> DescribeAddressBandwidthRangeOutcome;
                typedef std::future<DescribeAddressBandwidthRangeOutcome> DescribeAddressBandwidthRangeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressBandwidthRangeRequest&, DescribeAddressBandwidthRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressBandwidthRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressQuotaResponse> DescribeAddressQuotaOutcome;
                typedef std::future<DescribeAddressQuotaOutcome> DescribeAddressQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressQuotaRequest&, DescribeAddressQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressTemplateGroupInstancesResponse> DescribeAddressTemplateGroupInstancesOutcome;
                typedef std::future<DescribeAddressTemplateGroupInstancesOutcome> DescribeAddressTemplateGroupInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressTemplateGroupInstancesRequest&, DescribeAddressTemplateGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplateGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressTemplateGroupsResponse> DescribeAddressTemplateGroupsOutcome;
                typedef std::future<DescribeAddressTemplateGroupsOutcome> DescribeAddressTemplateGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressTemplateGroupsRequest&, DescribeAddressTemplateGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplateGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressTemplateInstancesResponse> DescribeAddressTemplateInstancesOutcome;
                typedef std::future<DescribeAddressTemplateInstancesOutcome> DescribeAddressTemplateInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressTemplateInstancesRequest&, DescribeAddressTemplateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressTemplatesResponse> DescribeAddressTemplatesOutcome;
                typedef std::future<DescribeAddressTemplatesOutcome> DescribeAddressTemplatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressTemplatesRequest&, DescribeAddressTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressesResponse> DescribeAddressesOutcome;
                typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressesRequest&, DescribeAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssistantCidrResponse> DescribeAssistantCidrOutcome;
                typedef std::future<DescribeAssistantCidrOutcome> DescribeAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAssistantCidrRequest&, DescribeAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssistantCidrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBandwidthPackageBandwidthRangeResponse> DescribeBandwidthPackageBandwidthRangeOutcome;
                typedef std::future<DescribeBandwidthPackageBandwidthRangeOutcome> DescribeBandwidthPackageBandwidthRangeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageBandwidthRangeRequest&, DescribeBandwidthPackageBandwidthRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageBandwidthRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBandwidthPackageBillUsageResponse> DescribeBandwidthPackageBillUsageOutcome;
                typedef std::future<DescribeBandwidthPackageBillUsageOutcome> DescribeBandwidthPackageBillUsageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageBillUsageRequest&, DescribeBandwidthPackageBillUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageBillUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBandwidthPackageQuotaResponse> DescribeBandwidthPackageQuotaOutcome;
                typedef std::future<DescribeBandwidthPackageQuotaOutcome> DescribeBandwidthPackageQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageQuotaRequest&, DescribeBandwidthPackageQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBandwidthPackageResourcesResponse> DescribeBandwidthPackageResourcesOutcome;
                typedef std::future<DescribeBandwidthPackageResourcesOutcome> DescribeBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageResourcesRequest&, DescribeBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBandwidthPackagesResponse> DescribeBandwidthPackagesOutcome;
                typedef std::future<DescribeBandwidthPackagesOutcome> DescribeBandwidthPackagesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackagesRequest&, DescribeBandwidthPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnAttachedInstancesResponse> DescribeCcnAttachedInstancesOutcome;
                typedef std::future<DescribeCcnAttachedInstancesOutcome> DescribeCcnAttachedInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnAttachedInstancesRequest&, DescribeCcnAttachedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnAttachedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnPolicyBasedRoutingNextHopResponse> DescribeCcnPolicyBasedRoutingNextHopOutcome;
                typedef std::future<DescribeCcnPolicyBasedRoutingNextHopOutcome> DescribeCcnPolicyBasedRoutingNextHopOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnPolicyBasedRoutingNextHopRequest&, DescribeCcnPolicyBasedRoutingNextHopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnPolicyBasedRoutingNextHopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnPolicyBasedRoutingRuleResponse> DescribeCcnPolicyBasedRoutingRuleOutcome;
                typedef std::future<DescribeCcnPolicyBasedRoutingRuleOutcome> DescribeCcnPolicyBasedRoutingRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnPolicyBasedRoutingRuleRequest&, DescribeCcnPolicyBasedRoutingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnPolicyBasedRoutingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnRegionBandwidthLimitsResponse> DescribeCcnRegionBandwidthLimitsOutcome;
                typedef std::future<DescribeCcnRegionBandwidthLimitsOutcome> DescribeCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnRegionBandwidthLimitsRequest&, DescribeCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnRouteTableBroadcastPolicysResponse> DescribeCcnRouteTableBroadcastPolicysOutcome;
                typedef std::future<DescribeCcnRouteTableBroadcastPolicysOutcome> DescribeCcnRouteTableBroadcastPolicysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnRouteTableBroadcastPolicysRequest&, DescribeCcnRouteTableBroadcastPolicysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnRouteTableBroadcastPolicysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnRouteTableInputPolicysResponse> DescribeCcnRouteTableInputPolicysOutcome;
                typedef std::future<DescribeCcnRouteTableInputPolicysOutcome> DescribeCcnRouteTableInputPolicysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnRouteTableInputPolicysRequest&, DescribeCcnRouteTableInputPolicysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnRouteTableInputPolicysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnRouteTablesResponse> DescribeCcnRouteTablesOutcome;
                typedef std::future<DescribeCcnRouteTablesOutcome> DescribeCcnRouteTablesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnRouteTablesRequest&, DescribeCcnRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnRoutesResponse> DescribeCcnRoutesOutcome;
                typedef std::future<DescribeCcnRoutesOutcome> DescribeCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnRoutesRequest&, DescribeCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnsResponse> DescribeCcnsOutcome;
                typedef std::future<DescribeCcnsOutcome> DescribeCcnsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnsRequest&, DescribeCcnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdcLDCXListResponse> DescribeCdcLDCXListOutcome;
                typedef std::future<DescribeCdcLDCXListOutcome> DescribeCdcLDCXListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCdcLDCXListRequest&, DescribeCdcLDCXListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdcLDCXListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdcNetPlanesResponse> DescribeCdcNetPlanesOutcome;
                typedef std::future<DescribeCdcNetPlanesOutcome> DescribeCdcNetPlanesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCdcNetPlanesRequest&, DescribeCdcNetPlanesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdcNetPlanesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdcUsedIdcVlanResponse> DescribeCdcUsedIdcVlanOutcome;
                typedef std::future<DescribeCdcUsedIdcVlanOutcome> DescribeCdcUsedIdcVlanOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCdcUsedIdcVlanRequest&, DescribeCdcUsedIdcVlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdcUsedIdcVlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicLinkInstancesResponse> DescribeClassicLinkInstancesOutcome;
                typedef std::future<DescribeClassicLinkInstancesOutcome> DescribeClassicLinkInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeClassicLinkInstancesRequest&, DescribeClassicLinkInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicLinkInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossBorderCcnRegionBandwidthLimitsResponse> DescribeCrossBorderCcnRegionBandwidthLimitsOutcome;
                typedef std::future<DescribeCrossBorderCcnRegionBandwidthLimitsOutcome> DescribeCrossBorderCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCrossBorderCcnRegionBandwidthLimitsRequest&, DescribeCrossBorderCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBorderCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossBorderComplianceResponse> DescribeCrossBorderComplianceOutcome;
                typedef std::future<DescribeCrossBorderComplianceOutcome> DescribeCrossBorderComplianceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCrossBorderComplianceRequest&, DescribeCrossBorderComplianceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBorderComplianceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossBorderFlowMonitorResponse> DescribeCrossBorderFlowMonitorOutcome;
                typedef std::future<DescribeCrossBorderFlowMonitorOutcome> DescribeCrossBorderFlowMonitorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCrossBorderFlowMonitorRequest&, DescribeCrossBorderFlowMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBorderFlowMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerGatewayVendorsResponse> DescribeCustomerGatewayVendorsOutcome;
                typedef std::future<DescribeCustomerGatewayVendorsOutcome> DescribeCustomerGatewayVendorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewayVendorsRequest&, DescribeCustomerGatewayVendorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewayVendorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerGatewaysResponse> DescribeCustomerGatewaysOutcome;
                typedef std::future<DescribeCustomerGatewaysOutcome> DescribeCustomerGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewaysRequest&, DescribeCustomerGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDesignatedZonesResponse> DescribeDesignatedZonesOutcome;
                typedef std::future<DescribeDesignatedZonesOutcome> DescribeDesignatedZonesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDesignatedZonesRequest&, DescribeDesignatedZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDesignatedZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDhcpIpsResponse> DescribeDhcpIpsOutcome;
                typedef std::future<DescribeDhcpIpsOutcome> DescribeDhcpIpsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDhcpIpsRequest&, DescribeDhcpIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDhcpIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectGatewayCcnRoutesResponse> DescribeDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<DescribeDirectConnectGatewayCcnRoutesOutcome> DescribeDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDirectConnectGatewayCcnRoutesRequest&, DescribeDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectGatewaysResponse> DescribeDirectConnectGatewaysOutcome;
                typedef std::future<DescribeDirectConnectGatewaysOutcome> DescribeDirectConnectGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDirectConnectGatewaysRequest&, DescribeDirectConnectGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowLogResponse> DescribeFlowLogOutcome;
                typedef std::future<DescribeFlowLogOutcome> DescribeFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeFlowLogRequest&, DescribeFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowLogsResponse> DescribeFlowLogsOutcome;
                typedef std::future<DescribeFlowLogsOutcome> DescribeFlowLogsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeFlowLogsRequest&, DescribeFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayFlowMonitorDetailResponse> DescribeGatewayFlowMonitorDetailOutcome;
                typedef std::future<DescribeGatewayFlowMonitorDetailOutcome> DescribeGatewayFlowMonitorDetailOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeGatewayFlowMonitorDetailRequest&, DescribeGatewayFlowMonitorDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayFlowMonitorDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayFlowQosResponse> DescribeGatewayFlowQosOutcome;
                typedef std::future<DescribeGatewayFlowQosOutcome> DescribeGatewayFlowQosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeGatewayFlowQosRequest&, DescribeGatewayFlowQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayFlowQosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalRoutesResponse> DescribeGlobalRoutesOutcome;
                typedef std::future<DescribeGlobalRoutesOutcome> DescribeGlobalRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeGlobalRoutesRequest&, DescribeGlobalRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHaVipsResponse> DescribeHaVipsOutcome;
                typedef std::future<DescribeHaVipsOutcome> DescribeHaVipsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeHaVipsRequest&, DescribeHaVipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHaVipsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHighPriorityRouteTablesResponse> DescribeHighPriorityRouteTablesOutcome;
                typedef std::future<DescribeHighPriorityRouteTablesOutcome> DescribeHighPriorityRouteTablesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeHighPriorityRouteTablesRequest&, DescribeHighPriorityRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHighPriorityRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHighPriorityRoutesResponse> DescribeHighPriorityRoutesOutcome;
                typedef std::future<DescribeHighPriorityRoutesOutcome> DescribeHighPriorityRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeHighPriorityRoutesRequest&, DescribeHighPriorityRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHighPriorityRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPv6AddressesResponse> DescribeIPv6AddressesOutcome;
                typedef std::future<DescribeIPv6AddressesOutcome> DescribeIPv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIPv6AddressesRequest&, DescribeIPv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceJumboResponse> DescribeInstanceJumboOutcome;
                typedef std::future<DescribeInstanceJumboOutcome> DescribeInstanceJumboOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeInstanceJumboRequest&, DescribeInstanceJumboOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceJumboAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIp6AddressesResponse> DescribeIp6AddressesOutcome;
                typedef std::future<DescribeIp6AddressesOutcome> DescribeIp6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIp6AddressesRequest&, DescribeIp6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIp6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIp6TranslatorQuotaResponse> DescribeIp6TranslatorQuotaOutcome;
                typedef std::future<DescribeIp6TranslatorQuotaOutcome> DescribeIp6TranslatorQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIp6TranslatorQuotaRequest&, DescribeIp6TranslatorQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIp6TranslatorQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIp6TranslatorsResponse> DescribeIp6TranslatorsOutcome;
                typedef std::future<DescribeIp6TranslatorsOutcome> DescribeIp6TranslatorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIp6TranslatorsRequest&, DescribeIp6TranslatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIp6TranslatorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpGeolocationDatabaseUrlResponse> DescribeIpGeolocationDatabaseUrlOutcome;
                typedef std::future<DescribeIpGeolocationDatabaseUrlOutcome> DescribeIpGeolocationDatabaseUrlOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIpGeolocationDatabaseUrlRequest&, DescribeIpGeolocationDatabaseUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpGeolocationDatabaseUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpGeolocationInfosResponse> DescribeIpGeolocationInfosOutcome;
                typedef std::future<DescribeIpGeolocationInfosOutcome> DescribeIpGeolocationInfosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIpGeolocationInfosRequest&, DescribeIpGeolocationInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpGeolocationInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLocalGatewayResponse> DescribeLocalGatewayOutcome;
                typedef std::future<DescribeLocalGatewayOutcome> DescribeLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeLocalGatewayRequest&, DescribeLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocalGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse> DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome;
                typedef std::future<DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome> DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest&, DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewayDirectConnectGatewayRouteResponse> DescribeNatGatewayDirectConnectGatewayRouteOutcome;
                typedef std::future<DescribeNatGatewayDirectConnectGatewayRouteOutcome> DescribeNatGatewayDirectConnectGatewayRouteOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewayDirectConnectGatewayRouteRequest&, DescribeNatGatewayDirectConnectGatewayRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewayDirectConnectGatewayRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewayFlowMonitorDetailResponse> DescribeNatGatewayFlowMonitorDetailOutcome;
                typedef std::future<DescribeNatGatewayFlowMonitorDetailOutcome> DescribeNatGatewayFlowMonitorDetailOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewayFlowMonitorDetailRequest&, DescribeNatGatewayFlowMonitorDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewayFlowMonitorDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewaySourceIpTranslationNatRulesResponse> DescribeNatGatewaySourceIpTranslationNatRulesOutcome;
                typedef std::future<DescribeNatGatewaySourceIpTranslationNatRulesOutcome> DescribeNatGatewaySourceIpTranslationNatRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest&, DescribeNatGatewaySourceIpTranslationNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaySourceIpTranslationNatRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewayZonesResponse> DescribeNatGatewayZonesOutcome;
                typedef std::future<DescribeNatGatewayZonesOutcome> DescribeNatGatewayZonesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewayZonesRequest&, DescribeNatGatewayZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewayZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewaysResponse> DescribeNatGatewaysOutcome;
                typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewaysRequest&, DescribeNatGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetDetectStatesResponse> DescribeNetDetectStatesOutcome;
                typedef std::future<DescribeNetDetectStatesOutcome> DescribeNetDetectStatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetDetectStatesRequest&, DescribeNetDetectStatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetDetectStatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetDetectsResponse> DescribeNetDetectsOutcome;
                typedef std::future<DescribeNetDetectsOutcome> DescribeNetDetectsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetDetectsRequest&, DescribeNetDetectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetDetectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkAccountTypeResponse> DescribeNetworkAccountTypeOutcome;
                typedef std::future<DescribeNetworkAccountTypeOutcome> DescribeNetworkAccountTypeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkAccountTypeRequest&, DescribeNetworkAccountTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAccountTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkAclQuintupleEntriesResponse> DescribeNetworkAclQuintupleEntriesOutcome;
                typedef std::future<DescribeNetworkAclQuintupleEntriesOutcome> DescribeNetworkAclQuintupleEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkAclQuintupleEntriesRequest&, DescribeNetworkAclQuintupleEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAclQuintupleEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkAclsResponse> DescribeNetworkAclsOutcome;
                typedef std::future<DescribeNetworkAclsOutcome> DescribeNetworkAclsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkAclsRequest&, DescribeNetworkAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkInterfaceLimitResponse> DescribeNetworkInterfaceLimitOutcome;
                typedef std::future<DescribeNetworkInterfaceLimitOutcome> DescribeNetworkInterfaceLimitOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkInterfaceLimitRequest&, DescribeNetworkInterfaceLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfaceLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkInterfacesResponse> DescribeNetworkInterfacesOutcome;
                typedef std::future<DescribeNetworkInterfacesOutcome> DescribeNetworkInterfacesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkInterfacesRequest&, DescribeNetworkInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesResponse> DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesOutcome;
                typedef std::future<DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesOutcome> DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesRequest&, DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateNatGatewayLimitsResponse> DescribePrivateNatGatewayLimitsOutcome;
                typedef std::future<DescribePrivateNatGatewayLimitsOutcome> DescribePrivateNatGatewayLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribePrivateNatGatewayLimitsRequest&, DescribePrivateNatGatewayLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateNatGatewayLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateNatGatewayRegionsResponse> DescribePrivateNatGatewayRegionsOutcome;
                typedef std::future<DescribePrivateNatGatewayRegionsOutcome> DescribePrivateNatGatewayRegionsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribePrivateNatGatewayRegionsRequest&, DescribePrivateNatGatewayRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateNatGatewayRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateNatGatewayTranslationAclRulesResponse> DescribePrivateNatGatewayTranslationAclRulesOutcome;
                typedef std::future<DescribePrivateNatGatewayTranslationAclRulesOutcome> DescribePrivateNatGatewayTranslationAclRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribePrivateNatGatewayTranslationAclRulesRequest&, DescribePrivateNatGatewayTranslationAclRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateNatGatewayTranslationAclRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateNatGatewayTranslationNatRulesResponse> DescribePrivateNatGatewayTranslationNatRulesOutcome;
                typedef std::future<DescribePrivateNatGatewayTranslationNatRulesOutcome> DescribePrivateNatGatewayTranslationNatRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribePrivateNatGatewayTranslationNatRulesRequest&, DescribePrivateNatGatewayTranslationNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateNatGatewayTranslationNatRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateNatGatewaysResponse> DescribePrivateNatGatewaysOutcome;
                typedef std::future<DescribePrivateNatGatewaysOutcome> DescribePrivateNatGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribePrivateNatGatewaysRequest&, DescribePrivateNatGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateNatGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductQuotaResponse> DescribeProductQuotaOutcome;
                typedef std::future<DescribeProductQuotaOutcome> DescribeProductQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeProductQuotaRequest&, DescribeProductQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReserveIpAddressesResponse> DescribeReserveIpAddressesOutcome;
                typedef std::future<DescribeReserveIpAddressesOutcome> DescribeReserveIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeReserveIpAddressesRequest&, DescribeReserveIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReserveIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteConflictsResponse> DescribeRouteConflictsOutcome;
                typedef std::future<DescribeRouteConflictsOutcome> DescribeRouteConflictsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRouteConflictsRequest&, DescribeRouteConflictsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteConflictsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteListResponse> DescribeRouteListOutcome;
                typedef std::future<DescribeRouteListOutcome> DescribeRouteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRouteListRequest&, DescribeRouteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoutePoliciesResponse> DescribeRoutePoliciesOutcome;
                typedef std::future<DescribeRoutePoliciesOutcome> DescribeRoutePoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRoutePoliciesRequest&, DescribeRoutePoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoutePoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoutePolicyEntriesResponse> DescribeRoutePolicyEntriesOutcome;
                typedef std::future<DescribeRoutePolicyEntriesOutcome> DescribeRoutePolicyEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRoutePolicyEntriesRequest&, DescribeRoutePolicyEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoutePolicyEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteTableAssociatedInstancesResponse> DescribeRouteTableAssociatedInstancesOutcome;
                typedef std::future<DescribeRouteTableAssociatedInstancesOutcome> DescribeRouteTableAssociatedInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRouteTableAssociatedInstancesRequest&, DescribeRouteTableAssociatedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTableAssociatedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteTableSelectionPoliciesResponse> DescribeRouteTableSelectionPoliciesOutcome;
                typedef std::future<DescribeRouteTableSelectionPoliciesOutcome> DescribeRouteTableSelectionPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRouteTableSelectionPoliciesRequest&, DescribeRouteTableSelectionPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTableSelectionPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteTablesResponse> DescribeRouteTablesOutcome;
                typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRouteTablesRequest&, DescribeRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoutesResponse> DescribeRoutesOutcome;
                typedef std::future<DescribeRoutesOutcome> DescribeRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRoutesRequest&, DescribeRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupAssociationStatisticsResponse> DescribeSecurityGroupAssociationStatisticsOutcome;
                typedef std::future<DescribeSecurityGroupAssociationStatisticsOutcome> DescribeSecurityGroupAssociationStatisticsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupAssociationStatisticsRequest&, DescribeSecurityGroupAssociationStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAssociationStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupExpandedPoliciesResponse> DescribeSecurityGroupExpandedPoliciesOutcome;
                typedef std::future<DescribeSecurityGroupExpandedPoliciesOutcome> DescribeSecurityGroupExpandedPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupExpandedPoliciesRequest&, DescribeSecurityGroupExpandedPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupExpandedPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupLimitsResponse> DescribeSecurityGroupLimitsOutcome;
                typedef std::future<DescribeSecurityGroupLimitsOutcome> DescribeSecurityGroupLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupLimitsRequest&, DescribeSecurityGroupLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupPoliciesResponse> DescribeSecurityGroupPoliciesOutcome;
                typedef std::future<DescribeSecurityGroupPoliciesOutcome> DescribeSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupPoliciesRequest&, DescribeSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupReferencesResponse> DescribeSecurityGroupReferencesOutcome;
                typedef std::future<DescribeSecurityGroupReferencesOutcome> DescribeSecurityGroupReferencesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupReferencesRequest&, DescribeSecurityGroupReferencesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupReferencesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupsResponse> DescribeSecurityGroupsOutcome;
                typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupsRequest&, DescribeSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceTemplateGroupInstancesResponse> DescribeServiceTemplateGroupInstancesOutcome;
                typedef std::future<DescribeServiceTemplateGroupInstancesOutcome> DescribeServiceTemplateGroupInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeServiceTemplateGroupInstancesRequest&, DescribeServiceTemplateGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceTemplateGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceTemplateGroupsResponse> DescribeServiceTemplateGroupsOutcome;
                typedef std::future<DescribeServiceTemplateGroupsOutcome> DescribeServiceTemplateGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeServiceTemplateGroupsRequest&, DescribeServiceTemplateGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceTemplateGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceTemplateInstancesResponse> DescribeServiceTemplateInstancesOutcome;
                typedef std::future<DescribeServiceTemplateInstancesOutcome> DescribeServiceTemplateInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeServiceTemplateInstancesRequest&, DescribeServiceTemplateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceTemplateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceTemplatesResponse> DescribeServiceTemplatesOutcome;
                typedef std::future<DescribeServiceTemplatesOutcome> DescribeServiceTemplatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeServiceTemplatesRequest&, DescribeServiceTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSgSnapshotFileContentResponse> DescribeSgSnapshotFileContentOutcome;
                typedef std::future<DescribeSgSnapshotFileContentOutcome> DescribeSgSnapshotFileContentOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSgSnapshotFileContentRequest&, DescribeSgSnapshotFileContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSgSnapshotFileContentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotAttachedInstancesResponse> DescribeSnapshotAttachedInstancesOutcome;
                typedef std::future<DescribeSnapshotAttachedInstancesOutcome> DescribeSnapshotAttachedInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSnapshotAttachedInstancesRequest&, DescribeSnapshotAttachedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotAttachedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotFilesResponse> DescribeSnapshotFilesOutcome;
                typedef std::future<DescribeSnapshotFilesOutcome> DescribeSnapshotFilesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSnapshotFilesRequest&, DescribeSnapshotFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotPoliciesResponse> DescribeSnapshotPoliciesOutcome;
                typedef std::future<DescribeSnapshotPoliciesOutcome> DescribeSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSnapshotPoliciesRequest&, DescribeSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecificTrafficPackageUsedDetailsResponse> DescribeSpecificTrafficPackageUsedDetailsOutcome;
                typedef std::future<DescribeSpecificTrafficPackageUsedDetailsOutcome> DescribeSpecificTrafficPackageUsedDetailsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSpecificTrafficPackageUsedDetailsRequest&, DescribeSpecificTrafficPackageUsedDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecificTrafficPackageUsedDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetResourceDashboardResponse> DescribeSubnetResourceDashboardOutcome;
                typedef std::future<DescribeSubnetResourceDashboardOutcome> DescribeSubnetResourceDashboardOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSubnetResourceDashboardRequest&, DescribeSubnetResourceDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetResourceDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetsResponse> DescribeSubnetsOutcome;
                typedef std::future<DescribeSubnetsOutcome> DescribeSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSubnetsRequest&, DescribeSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateLimitsResponse> DescribeTemplateLimitsOutcome;
                typedef std::future<DescribeTemplateLimitsOutcome> DescribeTemplateLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTemplateLimitsRequest&, DescribeTemplateLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTenantCcnsResponse> DescribeTenantCcnsOutcome;
                typedef std::future<DescribeTenantCcnsOutcome> DescribeTenantCcnsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTenantCcnsRequest&, DescribeTenantCcnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantCcnsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrafficMirrorsResponse> DescribeTrafficMirrorsOutcome;
                typedef std::future<DescribeTrafficMirrorsOutcome> DescribeTrafficMirrorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTrafficMirrorsRequest&, DescribeTrafficMirrorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficMirrorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrafficPackagesResponse> DescribeTrafficPackagesOutcome;
                typedef std::future<DescribeTrafficPackagesOutcome> DescribeTrafficPackagesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTrafficPackagesRequest&, DescribeTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrafficQosPolicyResponse> DescribeTrafficQosPolicyOutcome;
                typedef std::future<DescribeTrafficQosPolicyOutcome> DescribeTrafficQosPolicyOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTrafficQosPolicyRequest&, DescribeTrafficQosPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficQosPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsedIpAddressResponse> DescribeUsedIpAddressOutcome;
                typedef std::future<DescribeUsedIpAddressOutcome> DescribeUsedIpAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeUsedIpAddressRequest&, DescribeUsedIpAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsedIpAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcEndPointResponse> DescribeVpcEndPointOutcome;
                typedef std::future<DescribeVpcEndPointOutcome> DescribeVpcEndPointOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcEndPointRequest&, DescribeVpcEndPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcEndPointAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcEndPointServiceResponse> DescribeVpcEndPointServiceOutcome;
                typedef std::future<DescribeVpcEndPointServiceOutcome> DescribeVpcEndPointServiceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcEndPointServiceRequest&, DescribeVpcEndPointServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcEndPointServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcEndPointServiceWhiteListResponse> DescribeVpcEndPointServiceWhiteListOutcome;
                typedef std::future<DescribeVpcEndPointServiceWhiteListOutcome> DescribeVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcEndPointServiceWhiteListRequest&, DescribeVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcInstancesResponse> DescribeVpcInstancesOutcome;
                typedef std::future<DescribeVpcInstancesOutcome> DescribeVpcInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcInstancesRequest&, DescribeVpcInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcIpv6AddressesResponse> DescribeVpcIpv6AddressesOutcome;
                typedef std::future<DescribeVpcIpv6AddressesOutcome> DescribeVpcIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcIpv6AddressesRequest&, DescribeVpcIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcIpv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcLimitsResponse> DescribeVpcLimitsOutcome;
                typedef std::future<DescribeVpcLimitsOutcome> DescribeVpcLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcLimitsRequest&, DescribeVpcLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcPeeringConnectionsResponse> DescribeVpcPeeringConnectionsOutcome;
                typedef std::future<DescribeVpcPeeringConnectionsOutcome> DescribeVpcPeeringConnectionsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcPeeringConnectionsRequest&, DescribeVpcPeeringConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcPeeringConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcPrivateIpAddressesResponse> DescribeVpcPrivateIpAddressesOutcome;
                typedef std::future<DescribeVpcPrivateIpAddressesOutcome> DescribeVpcPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcPrivateIpAddressesRequest&, DescribeVpcPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcPrivateIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcResourceDashboardResponse> DescribeVpcResourceDashboardOutcome;
                typedef std::future<DescribeVpcResourceDashboardOutcome> DescribeVpcResourceDashboardOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcResourceDashboardRequest&, DescribeVpcResourceDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcResourceDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcTaskResultResponse> DescribeVpcTaskResultOutcome;
                typedef std::future<DescribeVpcTaskResultOutcome> DescribeVpcTaskResultOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcTaskResultRequest&, DescribeVpcTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcsResponse> DescribeVpcsOutcome;
                typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcsRequest&, DescribeVpcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnConnectionsResponse> DescribeVpnConnectionsOutcome;
                typedef std::future<DescribeVpnConnectionsOutcome> DescribeVpnConnectionsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnConnectionsRequest&, DescribeVpnConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnGatewayCcnRoutesResponse> DescribeVpnGatewayCcnRoutesOutcome;
                typedef std::future<DescribeVpnGatewayCcnRoutesOutcome> DescribeVpnGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewayCcnRoutesRequest&, DescribeVpnGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnGatewayRoutesResponse> DescribeVpnGatewayRoutesOutcome;
                typedef std::future<DescribeVpnGatewayRoutesOutcome> DescribeVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewayRoutesRequest&, DescribeVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnGatewaySslClientsResponse> DescribeVpnGatewaySslClientsOutcome;
                typedef std::future<DescribeVpnGatewaySslClientsOutcome> DescribeVpnGatewaySslClientsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewaySslClientsRequest&, DescribeVpnGatewaySslClientsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewaySslClientsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnGatewaySslServersResponse> DescribeVpnGatewaySslServersOutcome;
                typedef std::future<DescribeVpnGatewaySslServersOutcome> DescribeVpnGatewaySslServersOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewaySslServersRequest&, DescribeVpnGatewaySslServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewaySslServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnGatewaysResponse> DescribeVpnGatewaysOutcome;
                typedef std::future<DescribeVpnGatewaysOutcome> DescribeVpnGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewaysRequest&, DescribeVpnGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachCcnInstancesResponse> DetachCcnInstancesOutcome;
                typedef std::future<DetachCcnInstancesOutcome> DetachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachCcnInstancesRequest&, DetachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachClassicLinkVpcResponse> DetachClassicLinkVpcOutcome;
                typedef std::future<DetachClassicLinkVpcOutcome> DetachClassicLinkVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachClassicLinkVpcRequest&, DetachClassicLinkVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachClassicLinkVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachNetworkInterfaceResponse> DetachNetworkInterfaceOutcome;
                typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachNetworkInterfaceRequest&, DetachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachSnapshotInstancesResponse> DetachSnapshotInstancesOutcome;
                typedef std::future<DetachSnapshotInstancesOutcome> DetachSnapshotInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachSnapshotInstancesRequest&, DetachSnapshotInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachSnapshotInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableCcnRoutesResponse> DisableCcnRoutesOutcome;
                typedef std::future<DisableCcnRoutesOutcome> DisableCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableCcnRoutesRequest&, DisableCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableFlowLogsResponse> DisableFlowLogsOutcome;
                typedef std::future<DisableFlowLogsOutcome> DisableFlowLogsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableFlowLogsRequest&, DisableFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableFlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableGatewayFlowMonitorResponse> DisableGatewayFlowMonitorOutcome;
                typedef std::future<DisableGatewayFlowMonitorOutcome> DisableGatewayFlowMonitorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableGatewayFlowMonitorRequest&, DisableGatewayFlowMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableGatewayFlowMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableRoutesResponse> DisableRoutesOutcome;
                typedef std::future<DisableRoutesOutcome> DisableRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableRoutesRequest&, DisableRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableSnapshotPoliciesResponse> DisableSnapshotPoliciesOutcome;
                typedef std::future<DisableSnapshotPoliciesOutcome> DisableSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableSnapshotPoliciesRequest&, DisableSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableVpnGatewaySslClientCertResponse> DisableVpnGatewaySslClientCertOutcome;
                typedef std::future<DisableVpnGatewaySslClientCertOutcome> DisableVpnGatewaySslClientCertOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableVpnGatewaySslClientCertRequest&, DisableVpnGatewaySslClientCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableVpnGatewaySslClientCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateAddressResponse> DisassociateAddressOutcome;
                typedef std::future<DisassociateAddressOutcome> DisassociateAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateAddressRequest&, DisassociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateDhcpIpWithAddressIpResponse> DisassociateDhcpIpWithAddressIpOutcome;
                typedef std::future<DisassociateDhcpIpWithAddressIpOutcome> DisassociateDhcpIpWithAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateDhcpIpWithAddressIpRequest&, DisassociateDhcpIpWithAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateDhcpIpWithAddressIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateDirectConnectGatewayNatGatewayResponse> DisassociateDirectConnectGatewayNatGatewayOutcome;
                typedef std::future<DisassociateDirectConnectGatewayNatGatewayOutcome> DisassociateDirectConnectGatewayNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateDirectConnectGatewayNatGatewayRequest&, DisassociateDirectConnectGatewayNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateDirectConnectGatewayNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateHaVipInstanceResponse> DisassociateHaVipInstanceOutcome;
                typedef std::future<DisassociateHaVipInstanceOutcome> DisassociateHaVipInstanceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateHaVipInstanceRequest&, DisassociateHaVipInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateHaVipInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateIPv6AddressResponse> DisassociateIPv6AddressOutcome;
                typedef std::future<DisassociateIPv6AddressOutcome> DisassociateIPv6AddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateIPv6AddressRequest&, DisassociateIPv6AddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateIPv6AddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateNatGatewayAddressResponse> DisassociateNatGatewayAddressOutcome;
                typedef std::future<DisassociateNatGatewayAddressOutcome> DisassociateNatGatewayAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNatGatewayAddressRequest&, DisassociateNatGatewayAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNatGatewayAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateNetworkAclSubnetsResponse> DisassociateNetworkAclSubnetsOutcome;
                typedef std::future<DisassociateNetworkAclSubnetsOutcome> DisassociateNetworkAclSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNetworkAclSubnetsRequest&, DisassociateNetworkAclSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNetworkAclSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateNetworkInterfaceSecurityGroupsResponse> DisassociateNetworkInterfaceSecurityGroupsOutcome;
                typedef std::future<DisassociateNetworkInterfaceSecurityGroupsOutcome> DisassociateNetworkInterfaceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNetworkInterfaceSecurityGroupsRequest&, DisassociateNetworkInterfaceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNetworkInterfaceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateVpcEndPointSecurityGroupsResponse> DisassociateVpcEndPointSecurityGroupsOutcome;
                typedef std::future<DisassociateVpcEndPointSecurityGroupsOutcome> DisassociateVpcEndPointSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateVpcEndPointSecurityGroupsRequest&, DisassociateVpcEndPointSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateVpcEndPointSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadCustomerGatewayConfigurationResponse> DownloadCustomerGatewayConfigurationOutcome;
                typedef std::future<DownloadCustomerGatewayConfigurationOutcome> DownloadCustomerGatewayConfigurationOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DownloadCustomerGatewayConfigurationRequest&, DownloadCustomerGatewayConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCustomerGatewayConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadVpnGatewaySslClientCertResponse> DownloadVpnGatewaySslClientCertOutcome;
                typedef std::future<DownloadVpnGatewaySslClientCertOutcome> DownloadVpnGatewaySslClientCertOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DownloadVpnGatewaySslClientCertRequest&, DownloadVpnGatewaySslClientCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadVpnGatewaySslClientCertAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableCcnRoutesResponse> EnableCcnRoutesOutcome;
                typedef std::future<EnableCcnRoutesOutcome> EnableCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableCcnRoutesRequest&, EnableCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableFlowLogsResponse> EnableFlowLogsOutcome;
                typedef std::future<EnableFlowLogsOutcome> EnableFlowLogsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableFlowLogsRequest&, EnableFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableFlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableGatewayFlowMonitorResponse> EnableGatewayFlowMonitorOutcome;
                typedef std::future<EnableGatewayFlowMonitorOutcome> EnableGatewayFlowMonitorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableGatewayFlowMonitorRequest&, EnableGatewayFlowMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableGatewayFlowMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableRoutesResponse> EnableRoutesOutcome;
                typedef std::future<EnableRoutesOutcome> EnableRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableRoutesRequest&, EnableRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableSnapshotPoliciesResponse> EnableSnapshotPoliciesOutcome;
                typedef std::future<EnableSnapshotPoliciesOutcome> EnableSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableSnapshotPoliciesRequest&, EnableSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableVpcEndPointConnectResponse> EnableVpcEndPointConnectOutcome;
                typedef std::future<EnableVpcEndPointConnectOutcome> EnableVpcEndPointConnectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableVpcEndPointConnectRequest&, EnableVpcEndPointConnectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcEndPointConnectAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableVpnGatewaySslClientCertResponse> EnableVpnGatewaySslClientCertOutcome;
                typedef std::future<EnableVpnGatewaySslClientCertOutcome> EnableVpnGatewaySslClientCertOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableVpnGatewaySslClientCertRequest&, EnableVpnGatewaySslClientCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpnGatewaySslClientCertAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateVpnConnectionDefaultHealthCheckIpResponse> GenerateVpnConnectionDefaultHealthCheckIpOutcome;
                typedef std::future<GenerateVpnConnectionDefaultHealthCheckIpOutcome> GenerateVpnConnectionDefaultHealthCheckIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::GenerateVpnConnectionDefaultHealthCheckIpRequest&, GenerateVpnConnectionDefaultHealthCheckIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateVpnConnectionDefaultHealthCheckIpAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCcnRegionBandwidthLimitsResponse> GetCcnRegionBandwidthLimitsOutcome;
                typedef std::future<GetCcnRegionBandwidthLimitsOutcome> GetCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::GetCcnRegionBandwidthLimitsRequest&, GetCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::HaVipAssociateAddressIpResponse> HaVipAssociateAddressIpOutcome;
                typedef std::future<HaVipAssociateAddressIpOutcome> HaVipAssociateAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::HaVipAssociateAddressIpRequest&, HaVipAssociateAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HaVipAssociateAddressIpAsyncHandler;
                typedef Outcome<Core::Error, Model::HaVipDisassociateAddressIpResponse> HaVipDisassociateAddressIpOutcome;
                typedef std::future<HaVipDisassociateAddressIpOutcome> HaVipDisassociateAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::HaVipDisassociateAddressIpRequest&, HaVipDisassociateAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HaVipDisassociateAddressIpAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateDirectConnectGatewayResponse> InquirePriceCreateDirectConnectGatewayOutcome;
                typedef std::future<InquirePriceCreateDirectConnectGatewayOutcome> InquirePriceCreateDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquirePriceCreateDirectConnectGatewayRequest&, InquirePriceCreateDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateDirectConnectGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceAllocateAddressesResponse> InquiryPriceAllocateAddressesOutcome;
                typedef std::future<InquiryPriceAllocateAddressesOutcome> InquiryPriceAllocateAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceAllocateAddressesRequest&, InquiryPriceAllocateAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceAllocateAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateVpnGatewayResponse> InquiryPriceCreateVpnGatewayOutcome;
                typedef std::future<InquiryPriceCreateVpnGatewayOutcome> InquiryPriceCreateVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceCreateVpnGatewayRequest&, InquiryPriceCreateVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateVpnGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceModifyAddressesBandwidthResponse> InquiryPriceModifyAddressesBandwidthOutcome;
                typedef std::future<InquiryPriceModifyAddressesBandwidthOutcome> InquiryPriceModifyAddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceModifyAddressesBandwidthRequest&, InquiryPriceModifyAddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceModifyAddressesBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewAddressesResponse> InquiryPriceRenewAddressesOutcome;
                typedef std::future<InquiryPriceRenewAddressesOutcome> InquiryPriceRenewAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceRenewAddressesRequest&, InquiryPriceRenewAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewVpnGatewayResponse> InquiryPriceRenewVpnGatewayOutcome;
                typedef std::future<InquiryPriceRenewVpnGatewayOutcome> InquiryPriceRenewVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceRenewVpnGatewayRequest&, InquiryPriceRenewVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewVpnGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse> InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome;
                typedef std::future<InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome> InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest&, InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResetVpnGatewayInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::LockCcnBandwidthsResponse> LockCcnBandwidthsOutcome;
                typedef std::future<LockCcnBandwidthsOutcome> LockCcnBandwidthsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::LockCcnBandwidthsRequest&, LockCcnBandwidthsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LockCcnBandwidthsAsyncHandler;
                typedef Outcome<Core::Error, Model::LockCcnsResponse> LockCcnsOutcome;
                typedef std::future<LockCcnsOutcome> LockCcnsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::LockCcnsRequest&, LockCcnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LockCcnsAsyncHandler;
                typedef Outcome<Core::Error, Model::MigrateBandwidthPackageResourcesResponse> MigrateBandwidthPackageResourcesOutcome;
                typedef std::future<MigrateBandwidthPackageResourcesOutcome> MigrateBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::MigrateBandwidthPackageResourcesRequest&, MigrateBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::MigrateNetworkInterfaceResponse> MigrateNetworkInterfaceOutcome;
                typedef std::future<MigrateNetworkInterfaceOutcome> MigrateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::MigrateNetworkInterfaceRequest&, MigrateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::MigratePrivateIpAddressResponse> MigratePrivateIpAddressOutcome;
                typedef std::future<MigratePrivateIpAddressOutcome> MigratePrivateIpAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::MigratePrivateIpAddressRequest&, MigratePrivateIpAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigratePrivateIpAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressAttributeResponse> ModifyAddressAttributeOutcome;
                typedef std::future<ModifyAddressAttributeOutcome> ModifyAddressAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressAttributeRequest&, ModifyAddressAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressInternetChargeTypeResponse> ModifyAddressInternetChargeTypeOutcome;
                typedef std::future<ModifyAddressInternetChargeTypeOutcome> ModifyAddressInternetChargeTypeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressInternetChargeTypeRequest&, ModifyAddressInternetChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressInternetChargeTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressTemplateAttributeResponse> ModifyAddressTemplateAttributeOutcome;
                typedef std::future<ModifyAddressTemplateAttributeOutcome> ModifyAddressTemplateAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressTemplateAttributeRequest&, ModifyAddressTemplateAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressTemplateAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressTemplateGroupAttributeResponse> ModifyAddressTemplateGroupAttributeOutcome;
                typedef std::future<ModifyAddressTemplateGroupAttributeOutcome> ModifyAddressTemplateGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressTemplateGroupAttributeRequest&, ModifyAddressTemplateGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressTemplateGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressesBandwidthResponse> ModifyAddressesBandwidthOutcome;
                typedef std::future<ModifyAddressesBandwidthOutcome> ModifyAddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressesBandwidthRequest&, ModifyAddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressesBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressesRenewFlagResponse> ModifyAddressesRenewFlagOutcome;
                typedef std::future<ModifyAddressesRenewFlagOutcome> ModifyAddressesRenewFlagOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressesRenewFlagRequest&, ModifyAddressesRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressesRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssistantCidrResponse> ModifyAssistantCidrOutcome;
                typedef std::future<ModifyAssistantCidrOutcome> ModifyAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAssistantCidrRequest&, ModifyAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssistantCidrAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBandwidthPackageAttributeResponse> ModifyBandwidthPackageAttributeOutcome;
                typedef std::future<ModifyBandwidthPackageAttributeOutcome> ModifyBandwidthPackageAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyBandwidthPackageAttributeRequest&, ModifyBandwidthPackageAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBandwidthPackageAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBandwidthPackageBandwidthResponse> ModifyBandwidthPackageBandwidthOutcome;
                typedef std::future<ModifyBandwidthPackageBandwidthOutcome> ModifyBandwidthPackageBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyBandwidthPackageBandwidthRequest&, ModifyBandwidthPackageBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBandwidthPackageBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcnAttachedInstancesAttributeResponse> ModifyCcnAttachedInstancesAttributeOutcome;
                typedef std::future<ModifyCcnAttachedInstancesAttributeOutcome> ModifyCcnAttachedInstancesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnAttachedInstancesAttributeRequest&, ModifyCcnAttachedInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnAttachedInstancesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcnAttributeResponse> ModifyCcnAttributeOutcome;
                typedef std::future<ModifyCcnAttributeOutcome> ModifyCcnAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnAttributeRequest&, ModifyCcnAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcnPolicyBasedRoutingNextHopAttributeResponse> ModifyCcnPolicyBasedRoutingNextHopAttributeOutcome;
                typedef std::future<ModifyCcnPolicyBasedRoutingNextHopAttributeOutcome> ModifyCcnPolicyBasedRoutingNextHopAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnPolicyBasedRoutingNextHopAttributeRequest&, ModifyCcnPolicyBasedRoutingNextHopAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnPolicyBasedRoutingNextHopAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcnPolicyBasedRoutingRuleAttributeResponse> ModifyCcnPolicyBasedRoutingRuleAttributeOutcome;
                typedef std::future<ModifyCcnPolicyBasedRoutingRuleAttributeOutcome> ModifyCcnPolicyBasedRoutingRuleAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnPolicyBasedRoutingRuleAttributeRequest&, ModifyCcnPolicyBasedRoutingRuleAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnPolicyBasedRoutingRuleAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcnRegionBandwidthLimitsTypeResponse> ModifyCcnRegionBandwidthLimitsTypeOutcome;
                typedef std::future<ModifyCcnRegionBandwidthLimitsTypeOutcome> ModifyCcnRegionBandwidthLimitsTypeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnRegionBandwidthLimitsTypeRequest&, ModifyCcnRegionBandwidthLimitsTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnRegionBandwidthLimitsTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcnRouteTablesResponse> ModifyCcnRouteTablesOutcome;
                typedef std::future<ModifyCcnRouteTablesOutcome> ModifyCcnRouteTablesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnRouteTablesRequest&, ModifyCcnRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCdcLDCXAttributeResponse> ModifyCdcLDCXAttributeOutcome;
                typedef std::future<ModifyCdcLDCXAttributeOutcome> ModifyCdcLDCXAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCdcLDCXAttributeRequest&, ModifyCdcLDCXAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdcLDCXAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCdcNetPlaneAttributeResponse> ModifyCdcNetPlaneAttributeOutcome;
                typedef std::future<ModifyCdcNetPlaneAttributeOutcome> ModifyCdcNetPlaneAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCdcNetPlaneAttributeRequest&, ModifyCdcNetPlaneAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdcNetPlaneAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomerGatewayAttributeResponse> ModifyCustomerGatewayAttributeOutcome;
                typedef std::future<ModifyCustomerGatewayAttributeOutcome> ModifyCustomerGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCustomerGatewayAttributeRequest&, ModifyCustomerGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomerGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDhcpIpAttributeResponse> ModifyDhcpIpAttributeOutcome;
                typedef std::future<ModifyDhcpIpAttributeOutcome> ModifyDhcpIpAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyDhcpIpAttributeRequest&, ModifyDhcpIpAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDhcpIpAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDirectConnectGatewayAttributeResponse> ModifyDirectConnectGatewayAttributeOutcome;
                typedef std::future<ModifyDirectConnectGatewayAttributeOutcome> ModifyDirectConnectGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyDirectConnectGatewayAttributeRequest&, ModifyDirectConnectGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDirectConnectGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFlowLogAttributeResponse> ModifyFlowLogAttributeOutcome;
                typedef std::future<ModifyFlowLogAttributeOutcome> ModifyFlowLogAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyFlowLogAttributeRequest&, ModifyFlowLogAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowLogAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGatewayFlowQosResponse> ModifyGatewayFlowQosOutcome;
                typedef std::future<ModifyGatewayFlowQosOutcome> ModifyGatewayFlowQosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyGatewayFlowQosRequest&, ModifyGatewayFlowQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayFlowQosAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalRouteECMPAlgorithmResponse> ModifyGlobalRouteECMPAlgorithmOutcome;
                typedef std::future<ModifyGlobalRouteECMPAlgorithmOutcome> ModifyGlobalRouteECMPAlgorithmOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyGlobalRouteECMPAlgorithmRequest&, ModifyGlobalRouteECMPAlgorithmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalRouteECMPAlgorithmAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalRoutesResponse> ModifyGlobalRoutesOutcome;
                typedef std::future<ModifyGlobalRoutesOutcome> ModifyGlobalRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyGlobalRoutesRequest&, ModifyGlobalRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHaVipAttributeResponse> ModifyHaVipAttributeOutcome;
                typedef std::future<ModifyHaVipAttributeOutcome> ModifyHaVipAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyHaVipAttributeRequest&, ModifyHaVipAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHaVipAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHighPriorityRouteAttributeResponse> ModifyHighPriorityRouteAttributeOutcome;
                typedef std::future<ModifyHighPriorityRouteAttributeOutcome> ModifyHighPriorityRouteAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyHighPriorityRouteAttributeRequest&, ModifyHighPriorityRouteAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHighPriorityRouteAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHighPriorityRouteECMPAlgorithmResponse> ModifyHighPriorityRouteECMPAlgorithmOutcome;
                typedef std::future<ModifyHighPriorityRouteECMPAlgorithmOutcome> ModifyHighPriorityRouteECMPAlgorithmOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyHighPriorityRouteECMPAlgorithmRequest&, ModifyHighPriorityRouteECMPAlgorithmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHighPriorityRouteECMPAlgorithmAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHighPriorityRouteTableAttributeResponse> ModifyHighPriorityRouteTableAttributeOutcome;
                typedef std::future<ModifyHighPriorityRouteTableAttributeOutcome> ModifyHighPriorityRouteTableAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyHighPriorityRouteTableAttributeRequest&, ModifyHighPriorityRouteTableAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHighPriorityRouteTableAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIPv6AddressesAttributesResponse> ModifyIPv6AddressesAttributesOutcome;
                typedef std::future<ModifyIPv6AddressesAttributesOutcome> ModifyIPv6AddressesAttributesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIPv6AddressesAttributesRequest&, ModifyIPv6AddressesAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIPv6AddressesAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIPv6AddressesBandwidthResponse> ModifyIPv6AddressesBandwidthOutcome;
                typedef std::future<ModifyIPv6AddressesBandwidthOutcome> ModifyIPv6AddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIPv6AddressesBandwidthRequest&, ModifyIPv6AddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIPv6AddressesBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIp6AddressesBandwidthResponse> ModifyIp6AddressesBandwidthOutcome;
                typedef std::future<ModifyIp6AddressesBandwidthOutcome> ModifyIp6AddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIp6AddressesBandwidthRequest&, ModifyIp6AddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIp6AddressesBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIp6RuleResponse> ModifyIp6RuleOutcome;
                typedef std::future<ModifyIp6RuleOutcome> ModifyIp6RuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIp6RuleRequest&, ModifyIp6RuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIp6RuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIp6TranslatorResponse> ModifyIp6TranslatorOutcome;
                typedef std::future<ModifyIp6TranslatorOutcome> ModifyIp6TranslatorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIp6TranslatorRequest&, ModifyIp6TranslatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIp6TranslatorAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIpv6AddressesAttributeResponse> ModifyIpv6AddressesAttributeOutcome;
                typedef std::future<ModifyIpv6AddressesAttributeOutcome> ModifyIpv6AddressesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIpv6AddressesAttributeRequest&, ModifyIpv6AddressesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpv6AddressesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLocalGatewayResponse> ModifyLocalGatewayOutcome;
                typedef std::future<ModifyLocalGatewayOutcome> ModifyLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyLocalGatewayRequest&, ModifyLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLocalGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatGatewayAttributeResponse> ModifyNatGatewayAttributeOutcome;
                typedef std::future<ModifyNatGatewayAttributeOutcome> ModifyNatGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewayAttributeRequest&, ModifyNatGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse> ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome> ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest&, ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatGatewaySourceIpTranslationNatRuleResponse> ModifyNatGatewaySourceIpTranslationNatRuleOutcome;
                typedef std::future<ModifyNatGatewaySourceIpTranslationNatRuleOutcome> ModifyNatGatewaySourceIpTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewaySourceIpTranslationNatRuleRequest&, ModifyNatGatewaySourceIpTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewaySourceIpTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetDetectResponse> ModifyNetDetectOutcome;
                typedef std::future<ModifyNetDetectOutcome> ModifyNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetDetectRequest&, ModifyNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkAclAttributeResponse> ModifyNetworkAclAttributeOutcome;
                typedef std::future<ModifyNetworkAclAttributeOutcome> ModifyNetworkAclAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclAttributeRequest&, ModifyNetworkAclAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkAclEntriesResponse> ModifyNetworkAclEntriesOutcome;
                typedef std::future<ModifyNetworkAclEntriesOutcome> ModifyNetworkAclEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclEntriesRequest&, ModifyNetworkAclEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkAclQuintupleEntriesResponse> ModifyNetworkAclQuintupleEntriesOutcome;
                typedef std::future<ModifyNetworkAclQuintupleEntriesOutcome> ModifyNetworkAclQuintupleEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclQuintupleEntriesRequest&, ModifyNetworkAclQuintupleEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclQuintupleEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkInterfaceAttributeResponse> ModifyNetworkInterfaceAttributeOutcome;
                typedef std::future<ModifyNetworkInterfaceAttributeOutcome> ModifyNetworkInterfaceAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkInterfaceAttributeRequest&, ModifyNetworkInterfaceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkInterfaceAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkInterfaceQosResponse> ModifyNetworkInterfaceQosOutcome;
                typedef std::future<ModifyNetworkInterfaceQosOutcome> ModifyNetworkInterfaceQosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkInterfaceQosRequest&, ModifyNetworkInterfaceQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkInterfaceQosAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateIpAddressesAttributeResponse> ModifyPrivateIpAddressesAttributeOutcome;
                typedef std::future<ModifyPrivateIpAddressesAttributeOutcome> ModifyPrivateIpAddressesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyPrivateIpAddressesAttributeRequest&, ModifyPrivateIpAddressesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateIpAddressesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateNatGatewayAttributeResponse> ModifyPrivateNatGatewayAttributeOutcome;
                typedef std::future<ModifyPrivateNatGatewayAttributeOutcome> ModifyPrivateNatGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyPrivateNatGatewayAttributeRequest&, ModifyPrivateNatGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateNatGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleResponse> ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome> ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleRequest&, ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateNatGatewayTranslationAclRuleResponse> ModifyPrivateNatGatewayTranslationAclRuleOutcome;
                typedef std::future<ModifyPrivateNatGatewayTranslationAclRuleOutcome> ModifyPrivateNatGatewayTranslationAclRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyPrivateNatGatewayTranslationAclRuleRequest&, ModifyPrivateNatGatewayTranslationAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateNatGatewayTranslationAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateNatGatewayTranslationNatRuleResponse> ModifyPrivateNatGatewayTranslationNatRuleOutcome;
                typedef std::future<ModifyPrivateNatGatewayTranslationNatRuleOutcome> ModifyPrivateNatGatewayTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyPrivateNatGatewayTranslationNatRuleRequest&, ModifyPrivateNatGatewayTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateNatGatewayTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReserveIpAddressResponse> ModifyReserveIpAddressOutcome;
                typedef std::future<ModifyReserveIpAddressOutcome> ModifyReserveIpAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyReserveIpAddressRequest&, ModifyReserveIpAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReserveIpAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoutePolicyAttributeResponse> ModifyRoutePolicyAttributeOutcome;
                typedef std::future<ModifyRoutePolicyAttributeOutcome> ModifyRoutePolicyAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyRoutePolicyAttributeRequest&, ModifyRoutePolicyAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoutePolicyAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRouteTableAttributeResponse> ModifyRouteTableAttributeOutcome;
                typedef std::future<ModifyRouteTableAttributeOutcome> ModifyRouteTableAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyRouteTableAttributeRequest&, ModifyRouteTableAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteTableAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRouteTableSelectionPoliciesResponse> ModifyRouteTableSelectionPoliciesOutcome;
                typedef std::future<ModifyRouteTableSelectionPoliciesOutcome> ModifyRouteTableSelectionPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyRouteTableSelectionPoliciesRequest&, ModifyRouteTableSelectionPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteTableSelectionPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupAttributeResponse> ModifySecurityGroupAttributeOutcome;
                typedef std::future<ModifySecurityGroupAttributeOutcome> ModifySecurityGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySecurityGroupAttributeRequest&, ModifySecurityGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupPoliciesResponse> ModifySecurityGroupPoliciesOutcome;
                typedef std::future<ModifySecurityGroupPoliciesOutcome> ModifySecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySecurityGroupPoliciesRequest&, ModifySecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceTemplateAttributeResponse> ModifyServiceTemplateAttributeOutcome;
                typedef std::future<ModifyServiceTemplateAttributeOutcome> ModifyServiceTemplateAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyServiceTemplateAttributeRequest&, ModifyServiceTemplateAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceTemplateAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceTemplateGroupAttributeResponse> ModifyServiceTemplateGroupAttributeOutcome;
                typedef std::future<ModifyServiceTemplateGroupAttributeOutcome> ModifyServiceTemplateGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyServiceTemplateGroupAttributeRequest&, ModifyServiceTemplateGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceTemplateGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotPoliciesResponse> ModifySnapshotPoliciesOutcome;
                typedef std::future<ModifySnapshotPoliciesOutcome> ModifySnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySnapshotPoliciesRequest&, ModifySnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubnetAttributeResponse> ModifySubnetAttributeOutcome;
                typedef std::future<ModifySubnetAttributeOutcome> ModifySubnetAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySubnetAttributeRequest&, ModifySubnetAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubnetAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTemplateMemberResponse> ModifyTemplateMemberOutcome;
                typedef std::future<ModifyTemplateMemberOutcome> ModifyTemplateMemberOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyTemplateMemberRequest&, ModifyTemplateMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTemplateMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTrafficMirrorAttributeResponse> ModifyTrafficMirrorAttributeOutcome;
                typedef std::future<ModifyTrafficMirrorAttributeOutcome> ModifyTrafficMirrorAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyTrafficMirrorAttributeRequest&, ModifyTrafficMirrorAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTrafficMirrorAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcAttributeResponse> ModifyVpcAttributeOutcome;
                typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcAttributeRequest&, ModifyVpcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcEndPointAttributeResponse> ModifyVpcEndPointAttributeOutcome;
                typedef std::future<ModifyVpcEndPointAttributeOutcome> ModifyVpcEndPointAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcEndPointAttributeRequest&, ModifyVpcEndPointAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcEndPointAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcEndPointServiceAttributeResponse> ModifyVpcEndPointServiceAttributeOutcome;
                typedef std::future<ModifyVpcEndPointServiceAttributeOutcome> ModifyVpcEndPointServiceAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcEndPointServiceAttributeRequest&, ModifyVpcEndPointServiceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcEndPointServiceAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcEndPointServiceWhiteListResponse> ModifyVpcEndPointServiceWhiteListOutcome;
                typedef std::future<ModifyVpcEndPointServiceWhiteListOutcome> ModifyVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcEndPointServiceWhiteListRequest&, ModifyVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcPeeringConnectionResponse> ModifyVpcPeeringConnectionOutcome;
                typedef std::future<ModifyVpcPeeringConnectionOutcome> ModifyVpcPeeringConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcPeeringConnectionRequest&, ModifyVpcPeeringConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcPeeringConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnConnectionAttributeResponse> ModifyVpnConnectionAttributeOutcome;
                typedef std::future<ModifyVpnConnectionAttributeOutcome> ModifyVpnConnectionAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnConnectionAttributeRequest&, ModifyVpnConnectionAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnConnectionAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnGatewayAttributeResponse> ModifyVpnGatewayAttributeOutcome;
                typedef std::future<ModifyVpnGatewayAttributeOutcome> ModifyVpnGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayAttributeRequest&, ModifyVpnGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnGatewayCcnRoutesResponse> ModifyVpnGatewayCcnRoutesOutcome;
                typedef std::future<ModifyVpnGatewayCcnRoutesOutcome> ModifyVpnGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayCcnRoutesRequest&, ModifyVpnGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnGatewayRoutesResponse> ModifyVpnGatewayRoutesOutcome;
                typedef std::future<ModifyVpnGatewayRoutesOutcome> ModifyVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayRoutesRequest&, ModifyVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnGatewaySslClientCertResponse> ModifyVpnGatewaySslClientCertOutcome;
                typedef std::future<ModifyVpnGatewaySslClientCertOutcome> ModifyVpnGatewaySslClientCertOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewaySslClientCertRequest&, ModifyVpnGatewaySslClientCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewaySslClientCertAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnGatewaySslServerResponse> ModifyVpnGatewaySslServerOutcome;
                typedef std::future<ModifyVpnGatewaySslServerOutcome> ModifyVpnGatewaySslServerOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewaySslServerRequest&, ModifyVpnGatewaySslServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewaySslServerAsyncHandler;
                typedef Outcome<Core::Error, Model::NotifyRoutesResponse> NotifyRoutesOutcome;
                typedef std::future<NotifyRoutesOutcome> NotifyRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::NotifyRoutesRequest&, NotifyRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> NotifyRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::RefreshDirectConnectGatewayRouteToNatGatewayResponse> RefreshDirectConnectGatewayRouteToNatGatewayOutcome;
                typedef std::future<RefreshDirectConnectGatewayRouteToNatGatewayOutcome> RefreshDirectConnectGatewayRouteToNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RefreshDirectConnectGatewayRouteToNatGatewayRequest&, RefreshDirectConnectGatewayRouteToNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDirectConnectGatewayRouteToNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::RejectAttachCcnInstancesResponse> RejectAttachCcnInstancesOutcome;
                typedef std::future<RejectAttachCcnInstancesOutcome> RejectAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RejectAttachCcnInstancesRequest&, RejectAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectAttachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RejectVpcPeeringConnectionResponse> RejectVpcPeeringConnectionOutcome;
                typedef std::future<RejectVpcPeeringConnectionOutcome> RejectVpcPeeringConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RejectVpcPeeringConnectionRequest&, RejectVpcPeeringConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectVpcPeeringConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseAddressesResponse> ReleaseAddressesOutcome;
                typedef std::future<ReleaseAddressesOutcome> ReleaseAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReleaseAddressesRequest&, ReleaseAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseIPv6AddressesResponse> ReleaseIPv6AddressesOutcome;
                typedef std::future<ReleaseIPv6AddressesOutcome> ReleaseIPv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReleaseIPv6AddressesRequest&, ReleaseIPv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseIPv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseIp6AddressesBandwidthResponse> ReleaseIp6AddressesBandwidthOutcome;
                typedef std::future<ReleaseIp6AddressesBandwidthOutcome> ReleaseIp6AddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReleaseIp6AddressesBandwidthRequest&, ReleaseIp6AddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseIp6AddressesBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveBandwidthPackageResourcesResponse> RemoveBandwidthPackageResourcesOutcome;
                typedef std::future<RemoveBandwidthPackageResourcesOutcome> RemoveBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RemoveBandwidthPackageResourcesRequest&, RemoveBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveIp6RulesResponse> RemoveIp6RulesOutcome;
                typedef std::future<RemoveIp6RulesOutcome> RemoveIp6RulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RemoveIp6RulesRequest&, RemoveIp6RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveIp6RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewAddressesResponse> RenewAddressesOutcome;
                typedef std::future<RenewAddressesOutcome> RenewAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RenewAddressesRequest&, RenewAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewVpnGatewayResponse> RenewVpnGatewayOutcome;
                typedef std::future<RenewVpnGatewayOutcome> RenewVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RenewVpnGatewayRequest&, RenewVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewVpnGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceCcnRouteTableBroadcastPolicysResponse> ReplaceCcnRouteTableBroadcastPolicysOutcome;
                typedef std::future<ReplaceCcnRouteTableBroadcastPolicysOutcome> ReplaceCcnRouteTableBroadcastPolicysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceCcnRouteTableBroadcastPolicysRequest&, ReplaceCcnRouteTableBroadcastPolicysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceCcnRouteTableBroadcastPolicysAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceCcnRouteTableInputPolicysResponse> ReplaceCcnRouteTableInputPolicysOutcome;
                typedef std::future<ReplaceCcnRouteTableInputPolicysOutcome> ReplaceCcnRouteTableInputPolicysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceCcnRouteTableInputPolicysRequest&, ReplaceCcnRouteTableInputPolicysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceCcnRouteTableInputPolicysAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceDirectConnectGatewayCcnRoutesResponse> ReplaceDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<ReplaceDirectConnectGatewayCcnRoutesOutcome> ReplaceDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceDirectConnectGatewayCcnRoutesRequest&, ReplaceDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceHighPriorityRouteTableAssociationResponse> ReplaceHighPriorityRouteTableAssociationOutcome;
                typedef std::future<ReplaceHighPriorityRouteTableAssociationOutcome> ReplaceHighPriorityRouteTableAssociationOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceHighPriorityRouteTableAssociationRequest&, ReplaceHighPriorityRouteTableAssociationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceHighPriorityRouteTableAssociationAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceHighPriorityRoutesResponse> ReplaceHighPriorityRoutesOutcome;
                typedef std::future<ReplaceHighPriorityRoutesOutcome> ReplaceHighPriorityRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceHighPriorityRoutesRequest&, ReplaceHighPriorityRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceHighPriorityRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceRoutePolicyAssociationsResponse> ReplaceRoutePolicyAssociationsOutcome;
                typedef std::future<ReplaceRoutePolicyAssociationsOutcome> ReplaceRoutePolicyAssociationsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRoutePolicyAssociationsRequest&, ReplaceRoutePolicyAssociationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRoutePolicyAssociationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceRoutePolicyEntriesResponse> ReplaceRoutePolicyEntriesOutcome;
                typedef std::future<ReplaceRoutePolicyEntriesOutcome> ReplaceRoutePolicyEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRoutePolicyEntriesRequest&, ReplaceRoutePolicyEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRoutePolicyEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceRouteTableAssociationResponse> ReplaceRouteTableAssociationOutcome;
                typedef std::future<ReplaceRouteTableAssociationOutcome> ReplaceRouteTableAssociationOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRouteTableAssociationRequest&, ReplaceRouteTableAssociationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRouteTableAssociationAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceRoutesResponse> ReplaceRoutesOutcome;
                typedef std::future<ReplaceRoutesOutcome> ReplaceRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRoutesRequest&, ReplaceRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceRoutesWithRoutePolicyResponse> ReplaceRoutesWithRoutePolicyOutcome;
                typedef std::future<ReplaceRoutesWithRoutePolicyOutcome> ReplaceRoutesWithRoutePolicyOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRoutesWithRoutePolicyRequest&, ReplaceRoutesWithRoutePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRoutesWithRoutePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceSecurityGroupPoliciesResponse> ReplaceSecurityGroupPoliciesOutcome;
                typedef std::future<ReplaceSecurityGroupPoliciesOutcome> ReplaceSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceSecurityGroupPoliciesRequest&, ReplaceSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceSecurityGroupPolicyResponse> ReplaceSecurityGroupPolicyOutcome;
                typedef std::future<ReplaceSecurityGroupPolicyOutcome> ReplaceSecurityGroupPolicyOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceSecurityGroupPolicyRequest&, ReplaceSecurityGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceSecurityGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAttachCcnInstancesResponse> ResetAttachCcnInstancesOutcome;
                typedef std::future<ResetAttachCcnInstancesOutcome> ResetAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetAttachCcnInstancesRequest&, ResetAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAttachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetHighPriorityRoutesResponse> ResetHighPriorityRoutesOutcome;
                typedef std::future<ResetHighPriorityRoutesOutcome> ResetHighPriorityRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetHighPriorityRoutesRequest&, ResetHighPriorityRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetHighPriorityRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetNatGatewayConnectionResponse> ResetNatGatewayConnectionOutcome;
                typedef std::future<ResetNatGatewayConnectionOutcome> ResetNatGatewayConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetNatGatewayConnectionRequest&, ResetNatGatewayConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetNatGatewayConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetRoutePolicyAssociationsResponse> ResetRoutePolicyAssociationsOutcome;
                typedef std::future<ResetRoutePolicyAssociationsOutcome> ResetRoutePolicyAssociationsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetRoutePolicyAssociationsRequest&, ResetRoutePolicyAssociationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetRoutePolicyAssociationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetRoutePolicyEntriesResponse> ResetRoutePolicyEntriesOutcome;
                typedef std::future<ResetRoutePolicyEntriesOutcome> ResetRoutePolicyEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetRoutePolicyEntriesRequest&, ResetRoutePolicyEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetRoutePolicyEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetRoutesResponse> ResetRoutesOutcome;
                typedef std::future<ResetRoutesOutcome> ResetRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetRoutesRequest&, ResetRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetTrafficMirrorFilterResponse> ResetTrafficMirrorFilterOutcome;
                typedef std::future<ResetTrafficMirrorFilterOutcome> ResetTrafficMirrorFilterOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetTrafficMirrorFilterRequest&, ResetTrafficMirrorFilterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetTrafficMirrorFilterAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetTrafficMirrorSrcsResponse> ResetTrafficMirrorSrcsOutcome;
                typedef std::future<ResetTrafficMirrorSrcsOutcome> ResetTrafficMirrorSrcsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetTrafficMirrorSrcsRequest&, ResetTrafficMirrorSrcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetTrafficMirrorSrcsAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetTrafficMirrorTargetResponse> ResetTrafficMirrorTargetOutcome;
                typedef std::future<ResetTrafficMirrorTargetOutcome> ResetTrafficMirrorTargetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetTrafficMirrorTargetRequest&, ResetTrafficMirrorTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetTrafficMirrorTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetVpnConnectionResponse> ResetVpnConnectionOutcome;
                typedef std::future<ResetVpnConnectionOutcome> ResetVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetVpnConnectionRequest&, ResetVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetVpnConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetVpnGatewayInternetMaxBandwidthResponse> ResetVpnGatewayInternetMaxBandwidthOutcome;
                typedef std::future<ResetVpnGatewayInternetMaxBandwidthOutcome> ResetVpnGatewayInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetVpnGatewayInternetMaxBandwidthRequest&, ResetVpnGatewayInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetVpnGatewayInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeSnapshotInstanceResponse> ResumeSnapshotInstanceOutcome;
                typedef std::future<ResumeSnapshotInstanceOutcome> ResumeSnapshotInstanceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResumeSnapshotInstanceRequest&, ResumeSnapshotInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeSnapshotInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ReturnNormalAddressesResponse> ReturnNormalAddressesOutcome;
                typedef std::future<ReturnNormalAddressesOutcome> ReturnNormalAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReturnNormalAddressesRequest&, ReturnNormalAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReturnNormalAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCcnRegionBandwidthLimitsResponse> SetCcnRegionBandwidthLimitsOutcome;
                typedef std::future<SetCcnRegionBandwidthLimitsOutcome> SetCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::SetCcnRegionBandwidthLimitsRequest&, SetCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVpnGatewaysRenewFlagResponse> SetVpnGatewaysRenewFlagOutcome;
                typedef std::future<SetVpnGatewaysRenewFlagOutcome> SetVpnGatewaysRenewFlagOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::SetVpnGatewaysRenewFlagRequest&, SetVpnGatewaysRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVpnGatewaysRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::StartTrafficMirrorResponse> StartTrafficMirrorOutcome;
                typedef std::future<StartTrafficMirrorOutcome> StartTrafficMirrorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::StartTrafficMirrorRequest&, StartTrafficMirrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartTrafficMirrorAsyncHandler;
                typedef Outcome<Core::Error, Model::StopTrafficMirrorResponse> StopTrafficMirrorOutcome;
                typedef std::future<StopTrafficMirrorOutcome> StopTrafficMirrorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::StopTrafficMirrorRequest&, StopTrafficMirrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopTrafficMirrorAsyncHandler;
                typedef Outcome<Core::Error, Model::TransformAddressResponse> TransformAddressOutcome;
                typedef std::future<TransformAddressOutcome> TransformAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::TransformAddressRequest&, TransformAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransformAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::UnassignIpv6AddressesResponse> UnassignIpv6AddressesOutcome;
                typedef std::future<UnassignIpv6AddressesOutcome> UnassignIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6AddressesRequest&, UnassignIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnassignIpv6CidrBlockResponse> UnassignIpv6CidrBlockOutcome;
                typedef std::future<UnassignIpv6CidrBlockOutcome> UnassignIpv6CidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6CidrBlockRequest&, UnassignIpv6CidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6CidrBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::UnassignIpv6SubnetCidrBlockResponse> UnassignIpv6SubnetCidrBlockOutcome;
                typedef std::future<UnassignIpv6SubnetCidrBlockOutcome> UnassignIpv6SubnetCidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6SubnetCidrBlockRequest&, UnassignIpv6SubnetCidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6SubnetCidrBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::UnassignPrivateIpAddressesResponse> UnassignPrivateIpAddressesOutcome;
                typedef std::future<UnassignPrivateIpAddressesOutcome> UnassignPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignPrivateIpAddressesRequest&, UnassignPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignPrivateIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnlockCcnBandwidthsResponse> UnlockCcnBandwidthsOutcome;
                typedef std::future<UnlockCcnBandwidthsOutcome> UnlockCcnBandwidthsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnlockCcnBandwidthsRequest&, UnlockCcnBandwidthsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlockCcnBandwidthsAsyncHandler;
                typedef Outcome<Core::Error, Model::UnlockCcnsResponse> UnlockCcnsOutcome;
                typedef std::future<UnlockCcnsOutcome> UnlockCcnsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnlockCcnsRequest&, UnlockCcnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnlockCcnsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTrafficMirrorAllFilterResponse> UpdateTrafficMirrorAllFilterOutcome;
                typedef std::future<UpdateTrafficMirrorAllFilterOutcome> UpdateTrafficMirrorAllFilterOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UpdateTrafficMirrorAllFilterRequest&, UpdateTrafficMirrorAllFilterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTrafficMirrorAllFilterAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTrafficMirrorDirectionResponse> UpdateTrafficMirrorDirectionOutcome;
                typedef std::future<UpdateTrafficMirrorDirectionOutcome> UpdateTrafficMirrorDirectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UpdateTrafficMirrorDirectionRequest&, UpdateTrafficMirrorDirectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTrafficMirrorDirectionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeNatGatewayProductVersionResponse> UpgradeNatGatewayProductVersionOutcome;
                typedef std::future<UpgradeNatGatewayProductVersionOutcome> UpgradeNatGatewayProductVersionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UpgradeNatGatewayProductVersionRequest&, UpgradeNatGatewayProductVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeNatGatewayProductVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::WithdrawNotifyRoutesResponse> WithdrawNotifyRoutesOutcome;
                typedef std::future<WithdrawNotifyRoutesOutcome> WithdrawNotifyRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::WithdrawNotifyRoutesRequest&, WithdrawNotifyRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawNotifyRoutesAsyncHandler;



                /**
                 *本接口（AcceptAttachCcnInstances）用于跨账号关联实例时，云联网所有者接受并同意关联操作。
                 * @param req AcceptAttachCcnInstancesRequest
                 * @return AcceptAttachCcnInstancesOutcome
                 */
                AcceptAttachCcnInstancesOutcome AcceptAttachCcnInstances(const Model::AcceptAttachCcnInstancesRequest &request);
                void AcceptAttachCcnInstancesAsync(const Model::AcceptAttachCcnInstancesRequest& request, const AcceptAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcceptAttachCcnInstancesOutcomeCallable AcceptAttachCcnInstancesCallable(const Model::AcceptAttachCcnInstancesRequest& request);

                /**
                 *本接口（AcceptVpcPeeringConnection）用于接受对等连接请求。
                 * @param req AcceptVpcPeeringConnectionRequest
                 * @return AcceptVpcPeeringConnectionOutcome
                 */
                AcceptVpcPeeringConnectionOutcome AcceptVpcPeeringConnection(const Model::AcceptVpcPeeringConnectionRequest &request);
                void AcceptVpcPeeringConnectionAsync(const Model::AcceptVpcPeeringConnectionRequest& request, const AcceptVpcPeeringConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcceptVpcPeeringConnectionOutcomeCallable AcceptVpcPeeringConnectionCallable(const Model::AcceptVpcPeeringConnectionRequest& request);

                /**
                 *接口用于添加带宽包资源，包括[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)和[负载均衡](https://cloud.tencent.com/document/product/214/517)等
                 * @param req AddBandwidthPackageResourcesRequest
                 * @return AddBandwidthPackageResourcesOutcome
                 */
                AddBandwidthPackageResourcesOutcome AddBandwidthPackageResources(const Model::AddBandwidthPackageResourcesRequest &request);
                void AddBandwidthPackageResourcesAsync(const Model::AddBandwidthPackageResourcesRequest& request, const AddBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddBandwidthPackageResourcesOutcomeCallable AddBandwidthPackageResourcesCallable(const Model::AddBandwidthPackageResourcesRequest& request);

                /**
                 *1. 该接口用于在转换实例下添加IPV6转换规则。
2. 支持在同一个转换实例下批量添加转换规则，一个账户在一个地域最多50个。
3. 一个完整的转换规则包括vip6:vport6:protocol:vip:vport，其中vip6:vport6:protocol必须是唯一。
                 * @param req AddIp6RulesRequest
                 * @return AddIp6RulesOutcome
                 */
                AddIp6RulesOutcome AddIp6Rules(const Model::AddIp6RulesRequest &request);
                void AddIp6RulesAsync(const Model::AddIp6RulesRequest& request, const AddIp6RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddIp6RulesOutcomeCallable AddIp6RulesCallable(const Model::AddIp6RulesRequest& request);

                /**
                 *增加模板对象中的IP地址、协议端口、IP地址组、协议端口组。
                 * @param req AddTemplateMemberRequest
                 * @return AddTemplateMemberOutcome
                 */
                AddTemplateMemberOutcome AddTemplateMember(const Model::AddTemplateMemberRequest &request);
                void AddTemplateMemberAsync(const Model::AddTemplateMemberRequest& request, const AddTemplateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTemplateMemberOutcomeCallable AddTemplateMemberCallable(const Model::AddTemplateMemberRequest& request);

                /**
                 *本接口 (AdjustPublicAddress) 用于更换IP地址，支持更换CVM实例的普通公网IP和包月带宽的EIP。
                 * @param req AdjustPublicAddressRequest
                 * @return AdjustPublicAddressOutcome
                 */
                AdjustPublicAddressOutcome AdjustPublicAddress(const Model::AdjustPublicAddressRequest &request);
                void AdjustPublicAddressAsync(const Model::AdjustPublicAddressRequest& request, const AdjustPublicAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AdjustPublicAddressOutcomeCallable AdjustPublicAddressCallable(const Model::AdjustPublicAddressRequest& request);

                /**
                 *本接口 (AllocateAddresses) 用于申请一个或多个[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）。
* EIP 是专为动态云计算设计的静态 IP 地址。借助 EIP，您可以快速将 EIP 重新映射到您的另一个实例上，从而屏蔽实例故障。
* 您的 EIP 与腾讯云账户相关联，而不是与某个实例相关联。在您选择显式释放该地址，或欠费超过24小时之前，它会一直与您的腾讯云账户保持关联。
* 一个腾讯云账户在每个地域能申请的 EIP 最大配额有所限制，可参见 [EIP 产品简介](https://cloud.tencent.com/document/product/213/5733)，上述配额可通过 [DescribeAddressQuota](https://cloud.tencent.com/document/product/215/16701) 接口获取。
                 * @param req AllocateAddressesRequest
                 * @return AllocateAddressesOutcome
                 */
                AllocateAddressesOutcome AllocateAddresses(const Model::AllocateAddressesRequest &request);
                void AllocateAddressesAsync(const Model::AllocateAddressesRequest& request, const AllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateAddressesOutcomeCallable AllocateAddressesCallable(const Model::AllocateAddressesRequest& request);

                /**
                 *本接口（AllocateIPv6Addresses）用于申请一个或多个弹性公网IPv6（简称EIPv6）实例。

- EIPv6 是您在腾讯云某个地域可以独立申请和持有的，固定不变的公网 IPv6 地址，提供与弹性公网 IPv4 一致的产品体验。
- 通过弹性公网 IPv6，您可以快速将 EIPv6 实例绑定到云资源的内网 IPv6 地址上，实现为云资源快速开通 IPv6 公网带宽。
- 您还可以按需将 EIPv6 实例绑定到其他云资源上，从而屏蔽实例故障。
                 * @param req AllocateIPv6AddressesRequest
                 * @return AllocateIPv6AddressesOutcome
                 */
                AllocateIPv6AddressesOutcome AllocateIPv6Addresses(const Model::AllocateIPv6AddressesRequest &request);
                void AllocateIPv6AddressesAsync(const Model::AllocateIPv6AddressesRequest& request, const AllocateIPv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateIPv6AddressesOutcomeCallable AllocateIPv6AddressesCallable(const Model::AllocateIPv6AddressesRequest& request);

                /**
                 *本接口（AllocateIp6AddressesBandwidth）用于为传统弹性公网 IPv6 地址开通 IPv6 公网带宽。

- 传统弹性公网 IPv6 地址默认仅具备内网通信能力，需通过控制台或 API 接口为其分配公网带宽后，才能具备 IPv6 公网通信能力、并于传统弹性公网 IPv6 列表页可见。
- 支持为一个或多个传统弹性公网 IPv6 实例开通公网带宽。
                 * @param req AllocateIp6AddressesBandwidthRequest
                 * @return AllocateIp6AddressesBandwidthOutcome
                 */
                AllocateIp6AddressesBandwidthOutcome AllocateIp6AddressesBandwidth(const Model::AllocateIp6AddressesBandwidthRequest &request);
                void AllocateIp6AddressesBandwidthAsync(const Model::AllocateIp6AddressesBandwidthRequest& request, const AllocateIp6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateIp6AddressesBandwidthOutcomeCallable AllocateIp6AddressesBandwidthCallable(const Model::AllocateIp6AddressesBandwidthRequest& request);

                /**
                 *本接口（AssignIpv6Addresses）用于弹性网卡申请`IPv6`地址。<br />
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询[DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037)接口。
* 一个弹性网卡支持绑定的IP地址是有限制的，更多资源限制信息详见<a href="/document/product/576/18527">弹性网卡使用限制</a>。
* 可以指定`IPv6`地址申请，地址类型不能为主`IP`，`IPv6`地址暂时只支持作为辅助`IP`。
* 地址必须要在弹性网卡所在子网内，而且不能被占用。
* 在弹性网卡上申请一个到多个辅助`IPv6`地址，接口会在弹性网卡所在子网段内返回指定数量的辅助`IPv6`地址。
                 * @param req AssignIpv6AddressesRequest
                 * @return AssignIpv6AddressesOutcome
                 */
                AssignIpv6AddressesOutcome AssignIpv6Addresses(const Model::AssignIpv6AddressesRequest &request);
                void AssignIpv6AddressesAsync(const Model::AssignIpv6AddressesRequest& request, const AssignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignIpv6AddressesOutcomeCallable AssignIpv6AddressesCallable(const Model::AssignIpv6AddressesRequest& request);

                /**
                 *本接口（AssignIpv6CidrBlock）用于分配IPv6网段。
* 使用本接口前，您需要已有VPC实例，如果没有可通过接口<a href="https://cloud.tencent.com/document/api/215/15774" title="CreateVpc" target="_blank">CreateVpc</a>创建。
* 每个VPC只能申请一个IPv6网段。
                 * @param req AssignIpv6CidrBlockRequest
                 * @return AssignIpv6CidrBlockOutcome
                 */
                AssignIpv6CidrBlockOutcome AssignIpv6CidrBlock(const Model::AssignIpv6CidrBlockRequest &request);
                void AssignIpv6CidrBlockAsync(const Model::AssignIpv6CidrBlockRequest& request, const AssignIpv6CidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignIpv6CidrBlockOutcomeCallable AssignIpv6CidrBlockCallable(const Model::AssignIpv6CidrBlockRequest& request);

                /**
                 *本接口（AssignIpv6SubnetCidrBlock）用于分配IPv6子网段。
* 给子网分配 `IPv6` 网段，要求子网所属 `VPC` 已获得 `IPv6` 网段。如果尚未分配，请先通过接口 `AssignIpv6CidrBlock` 给子网所属 `VPC` 分配一个 `IPv6` 网段。否则无法分配 `IPv6` 子网段。
* 每个子网只能分配一个IPv6网段。
                 * @param req AssignIpv6SubnetCidrBlockRequest
                 * @return AssignIpv6SubnetCidrBlockOutcome
                 */
                AssignIpv6SubnetCidrBlockOutcome AssignIpv6SubnetCidrBlock(const Model::AssignIpv6SubnetCidrBlockRequest &request);
                void AssignIpv6SubnetCidrBlockAsync(const Model::AssignIpv6SubnetCidrBlockRequest& request, const AssignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignIpv6SubnetCidrBlockOutcomeCallable AssignIpv6SubnetCidrBlockCallable(const Model::AssignIpv6SubnetCidrBlockRequest& request);

                /**
                 *本接口（AssignPrivateIpAddresses）用于弹性网卡申请内网 IP。
* 一个弹性网卡支持绑定的IP地址是有限制的，更多资源限制信息详见<a href="/document/product/576/18527">弹性网卡使用限制</a>。
* 可以指定内网IP地址申请，内网IP地址类型不能为主IP，主IP已存在，不能修改，内网IP必须要在弹性网卡所在子网内，而且不能被占用。
* 在弹性网卡上申请一个到多个辅助内网IP，接口会在弹性网卡所在子网网段内返回指定数量的辅助内网IP。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req AssignPrivateIpAddressesRequest
                 * @return AssignPrivateIpAddressesOutcome
                 */
                AssignPrivateIpAddressesOutcome AssignPrivateIpAddresses(const Model::AssignPrivateIpAddressesRequest &request);
                void AssignPrivateIpAddressesAsync(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignPrivateIpAddressesOutcomeCallable AssignPrivateIpAddressesCallable(const Model::AssignPrivateIpAddressesRequest& request);

                /**
                 *本接口 (AssociateAddress) 用于将[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）绑定到实例或弹性网卡的指定内网 IP 上。
* 将 EIP 绑定到实例（CVM）上，其本质是将 EIP 绑定到实例上主网卡的主内网 IP 上。
* 将 EIP 绑定到主网卡的主内网IP时，如主内网IP已绑定普通公网IP，必须先退还才能绑定EIP。
* 将 EIP 绑定到指定网卡的内网 IP上（非主网卡的主内网IP），则必须先解绑该 EIP，才能再绑定新的。
* 将 EIP 绑定到NAT网关，请使用接口[AssociateNatGatewayAddress](https://cloud.tencent.com/document/product/215/36722)。
* EIP 如果欠费或被封堵，则不能被绑定。
* 只有状态为 UNBIND 的 EIP 才能够被绑定。
                 * @param req AssociateAddressRequest
                 * @return AssociateAddressOutcome
                 */
                AssociateAddressOutcome AssociateAddress(const Model::AssociateAddressRequest &request);
                void AssociateAddressAsync(const Model::AssociateAddressRequest& request, const AssociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateAddressOutcomeCallable AssociateAddressCallable(const Model::AssociateAddressRequest& request);

                /**
                 *本接口（AssociateDhcpIpWithAddressIp）用于DhcpIp绑定弹性公网IP（EIP）。<br />
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req AssociateDhcpIpWithAddressIpRequest
                 * @return AssociateDhcpIpWithAddressIpOutcome
                 */
                AssociateDhcpIpWithAddressIpOutcome AssociateDhcpIpWithAddressIp(const Model::AssociateDhcpIpWithAddressIpRequest &request);
                void AssociateDhcpIpWithAddressIpAsync(const Model::AssociateDhcpIpWithAddressIpRequest& request, const AssociateDhcpIpWithAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateDhcpIpWithAddressIpOutcomeCallable AssociateDhcpIpWithAddressIpCallable(const Model::AssociateDhcpIpWithAddressIpRequest& request);

                /**
                 *将专线网关与NAT网关绑定，专线网关默认路由指向NAT网关
                 * @param req AssociateDirectConnectGatewayNatGatewayRequest
                 * @return AssociateDirectConnectGatewayNatGatewayOutcome
                 */
                AssociateDirectConnectGatewayNatGatewayOutcome AssociateDirectConnectGatewayNatGateway(const Model::AssociateDirectConnectGatewayNatGatewayRequest &request);
                void AssociateDirectConnectGatewayNatGatewayAsync(const Model::AssociateDirectConnectGatewayNatGatewayRequest& request, const AssociateDirectConnectGatewayNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateDirectConnectGatewayNatGatewayOutcomeCallable AssociateDirectConnectGatewayNatGatewayCallable(const Model::AssociateDirectConnectGatewayNatGatewayRequest& request);

                /**
                 *本接口（AssociateHaVipInstance）用于HAVIP绑定子机或网卡（限制HaVip的漂移范围）。
                 * @param req AssociateHaVipInstanceRequest
                 * @return AssociateHaVipInstanceOutcome
                 */
                AssociateHaVipInstanceOutcome AssociateHaVipInstance(const Model::AssociateHaVipInstanceRequest &request);
                void AssociateHaVipInstanceAsync(const Model::AssociateHaVipInstanceRequest& request, const AssociateHaVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateHaVipInstanceOutcomeCallable AssociateHaVipInstanceCallable(const Model::AssociateHaVipInstanceRequest& request);

                /**
                 *本接口（AssociateIPv6Address）用于将弹性公网IPv6（简称EIPv6）实例绑定到 CVM 或弹性网卡配置的内网 IPv6 地址上。

- 将 EIPv6 绑定到 CVM 上，其本质是将 EIPv6 绑定到 CVM 弹性网卡所配置的内网 IPv6 地址上。
- 将 EIPv6 绑定到指定网卡的内网 IPv6 时，需确保该内网 IPv6 地址为未绑定状态，才能执行绑定操作。
                 * @param req AssociateIPv6AddressRequest
                 * @return AssociateIPv6AddressOutcome
                 */
                AssociateIPv6AddressOutcome AssociateIPv6Address(const Model::AssociateIPv6AddressRequest &request);
                void AssociateIPv6AddressAsync(const Model::AssociateIPv6AddressRequest& request, const AssociateIPv6AddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateIPv6AddressOutcomeCallable AssociateIPv6AddressCallable(const Model::AssociateIPv6AddressRequest& request);

                /**
                 *本接口（AssociateInstancesToCcnRouteTable）用于将指定的云联网实例关联到指定的云联网路由表。
                 * @param req AssociateInstancesToCcnRouteTableRequest
                 * @return AssociateInstancesToCcnRouteTableOutcome
                 */
                AssociateInstancesToCcnRouteTableOutcome AssociateInstancesToCcnRouteTable(const Model::AssociateInstancesToCcnRouteTableRequest &request);
                void AssociateInstancesToCcnRouteTableAsync(const Model::AssociateInstancesToCcnRouteTableRequest& request, const AssociateInstancesToCcnRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateInstancesToCcnRouteTableOutcomeCallable AssociateInstancesToCcnRouteTableCallable(const Model::AssociateInstancesToCcnRouteTableRequest& request);

                /**
                 *本接口(AssociateNatGatewayAddress)用于NAT网关绑定弹性IP（EIP）。
                 * @param req AssociateNatGatewayAddressRequest
                 * @return AssociateNatGatewayAddressOutcome
                 */
                AssociateNatGatewayAddressOutcome AssociateNatGatewayAddress(const Model::AssociateNatGatewayAddressRequest &request);
                void AssociateNatGatewayAddressAsync(const Model::AssociateNatGatewayAddressRequest& request, const AssociateNatGatewayAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateNatGatewayAddressOutcomeCallable AssociateNatGatewayAddressCallable(const Model::AssociateNatGatewayAddressRequest& request);

                /**
                 *本接口（AssociateNetworkAclSubnets）用于网络ACL关联VPC下的子网。
                 * @param req AssociateNetworkAclSubnetsRequest
                 * @return AssociateNetworkAclSubnetsOutcome
                 */
                AssociateNetworkAclSubnetsOutcome AssociateNetworkAclSubnets(const Model::AssociateNetworkAclSubnetsRequest &request);
                void AssociateNetworkAclSubnetsAsync(const Model::AssociateNetworkAclSubnetsRequest& request, const AssociateNetworkAclSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateNetworkAclSubnetsOutcomeCallable AssociateNetworkAclSubnetsCallable(const Model::AssociateNetworkAclSubnetsRequest& request);

                /**
                 *本接口（AssociateNetworkInterfaceSecurityGroups）用于弹性网卡绑定安全组（SecurityGroup）。
                 * @param req AssociateNetworkInterfaceSecurityGroupsRequest
                 * @return AssociateNetworkInterfaceSecurityGroupsOutcome
                 */
                AssociateNetworkInterfaceSecurityGroupsOutcome AssociateNetworkInterfaceSecurityGroups(const Model::AssociateNetworkInterfaceSecurityGroupsRequest &request);
                void AssociateNetworkInterfaceSecurityGroupsAsync(const Model::AssociateNetworkInterfaceSecurityGroupsRequest& request, const AssociateNetworkInterfaceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateNetworkInterfaceSecurityGroupsOutcomeCallable AssociateNetworkInterfaceSecurityGroupsCallable(const Model::AssociateNetworkInterfaceSecurityGroupsRequest& request);

                /**
                 *本接口（AttachCcnInstances）用于将网络实例加载到云联网实例中，网络实例包括VPC和专线网关。<br />
每个云联网能够关联的网络实例个数是有限的，详情请参考产品文档。如果需要扩充请联系在线客服。
                 * @param req AttachCcnInstancesRequest
                 * @return AttachCcnInstancesOutcome
                 */
                AttachCcnInstancesOutcome AttachCcnInstances(const Model::AttachCcnInstancesRequest &request);
                void AttachCcnInstancesAsync(const Model::AttachCcnInstancesRequest& request, const AttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachCcnInstancesOutcomeCallable AttachCcnInstancesCallable(const Model::AttachCcnInstancesRequest& request);

                /**
                 *本接口(AttachClassicLinkVpc)用于创建私有网络和基础网络设备互通。
* 私有网络和基础网络设备必须在同一个地域。
* 私有网络和基础网络的区别详见vpc产品文档-<a href="https://cloud.tencent.com/document/product/215/30720">私有网络与基础网络</a>。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req AttachClassicLinkVpcRequest
                 * @return AttachClassicLinkVpcOutcome
                 */
                AttachClassicLinkVpcOutcome AttachClassicLinkVpc(const Model::AttachClassicLinkVpcRequest &request);
                void AttachClassicLinkVpcAsync(const Model::AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachClassicLinkVpcOutcomeCallable AttachClassicLinkVpcCallable(const Model::AttachClassicLinkVpcRequest& request);

                /**
                 *本接口（AttachNetworkInterface）用于弹性网卡绑定云服务器。
* 一个弹性网卡请至少绑定一个安全组，如需绑定请参见<a href="https://cloud.tencent.com/document/product/215/43132">弹性网卡绑定安全组</a>。
* 一个云服务器可以绑定多个弹性网卡，但只能绑定一个主网卡。更多限制信息详见<a href="https://cloud.tencent.com/document/product/576/18527">弹性网卡使用限制</a>。
* 一个弹性网卡只能同时绑定一个云服务器。
* 只有运行中或者已关机状态的云服务器才能绑定弹性网卡，查看云服务器状态详见<a href="https://cloud.tencent.com/document/api/213/9452#InstanceStatus">腾讯云服务器信息</a>。
* 弹性网卡绑定的云服务器必须是私有网络的，而且云服务器所在可用区必须和弹性网卡子网的可用区相同。

本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询[DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037)
接口。
                 * @param req AttachNetworkInterfaceRequest
                 * @return AttachNetworkInterfaceOutcome
                 */
                AttachNetworkInterfaceOutcome AttachNetworkInterface(const Model::AttachNetworkInterfaceRequest &request);
                void AttachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachNetworkInterfaceOutcomeCallable AttachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request);

                /**
                 *本接口（AttachSnapshotInstances）用于快照策略关联实例。
                 * @param req AttachSnapshotInstancesRequest
                 * @return AttachSnapshotInstancesOutcome
                 */
                AttachSnapshotInstancesOutcome AttachSnapshotInstances(const Model::AttachSnapshotInstancesRequest &request);
                void AttachSnapshotInstancesAsync(const Model::AttachSnapshotInstancesRequest& request, const AttachSnapshotInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachSnapshotInstancesOutcomeCallable AttachSnapshotInstancesCallable(const Model::AttachSnapshotInstancesRequest& request);

                /**
                 *本接口（AuditCrossBorderCompliance）用于服务商操作合规化资质审批。
* 服务商只能操作提交到本服务商的审批单，后台会校验身份。即只授权给服务商的`APPID` 调用本接口。
* `APPROVED` 状态的审批单，可以再次操作为 `DENY`；`DENY` 状态的审批单，也可以再次操作为 `APPROVED`。
                 * @param req AuditCrossBorderComplianceRequest
                 * @return AuditCrossBorderComplianceOutcome
                 */
                AuditCrossBorderComplianceOutcome AuditCrossBorderCompliance(const Model::AuditCrossBorderComplianceRequest &request);
                void AuditCrossBorderComplianceAsync(const Model::AuditCrossBorderComplianceRequest& request, const AuditCrossBorderComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AuditCrossBorderComplianceOutcomeCallable AuditCrossBorderComplianceCallable(const Model::AuditCrossBorderComplianceRequest& request);

                /**
                 *本接口（CheckAssistantCidr）用于检查辅助CIDR是否与存量路由、对等连接（对端VPC的CIDR）等资源存在冲突。如果存在重叠，则返回重叠的资源。
* 检测辅助CIDR是否与当前VPC的主CIDR和辅助CIDR存在重叠。
* 检测辅助CIDR是否与当前VPC的路由的目的端存在重叠。
* 检测辅助CIDR是否与当前VPC的对等连接，对端VPC下的主CIDR或辅助CIDR存在重叠。
                 * @param req CheckAssistantCidrRequest
                 * @return CheckAssistantCidrOutcome
                 */
                CheckAssistantCidrOutcome CheckAssistantCidr(const Model::CheckAssistantCidrRequest &request);
                void CheckAssistantCidrAsync(const Model::CheckAssistantCidrRequest& request, const CheckAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAssistantCidrOutcomeCallable CheckAssistantCidrCallable(const Model::CheckAssistantCidrRequest& request);

                /**
                 *本接口（CheckDefaultSubnet）用于预判是否可建默认子网。
                 * @param req CheckDefaultSubnetRequest
                 * @return CheckDefaultSubnetOutcome
                 */
                CheckDefaultSubnetOutcome CheckDefaultSubnet(const Model::CheckDefaultSubnetRequest &request);
                void CheckDefaultSubnetAsync(const Model::CheckDefaultSubnetRequest& request, const CheckDefaultSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDefaultSubnetOutcomeCallable CheckDefaultSubnetCallable(const Model::CheckDefaultSubnetRequest& request);

                /**
                 *本接口（CheckGatewayFlowMonitor）用于查询网关是否启用流量监控。
                 * @param req CheckGatewayFlowMonitorRequest
                 * @return CheckGatewayFlowMonitorOutcome
                 */
                CheckGatewayFlowMonitorOutcome CheckGatewayFlowMonitor(const Model::CheckGatewayFlowMonitorRequest &request);
                void CheckGatewayFlowMonitorAsync(const Model::CheckGatewayFlowMonitorRequest& request, const CheckGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckGatewayFlowMonitorOutcomeCallable CheckGatewayFlowMonitorCallable(const Model::CheckGatewayFlowMonitorRequest& request);

                /**
                 *本接口（CheckNetDetectState）用于验证网络探测。
                 * @param req CheckNetDetectStateRequest
                 * @return CheckNetDetectStateOutcome
                 */
                CheckNetDetectStateOutcome CheckNetDetectState(const Model::CheckNetDetectStateRequest &request);
                void CheckNetDetectStateAsync(const Model::CheckNetDetectStateRequest& request, const CheckNetDetectStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckNetDetectStateOutcomeCallable CheckNetDetectStateCallable(const Model::CheckNetDetectStateRequest& request);

                /**
                 *检查流量镜像的采集端接收端（公网IP类型）
                 * @param req CheckTrafficMirrorRequest
                 * @return CheckTrafficMirrorOutcome
                 */
                CheckTrafficMirrorOutcome CheckTrafficMirror(const Model::CheckTrafficMirrorRequest &request);
                void CheckTrafficMirrorAsync(const Model::CheckTrafficMirrorRequest& request, const CheckTrafficMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckTrafficMirrorOutcomeCallable CheckTrafficMirrorCallable(const Model::CheckTrafficMirrorRequest& request);

                /**
                 *本接口（ClearRouteTableSelectionPolicies）用于清空指定云联网的路由表选择策略。
                 * @param req ClearRouteTableSelectionPoliciesRequest
                 * @return ClearRouteTableSelectionPoliciesOutcome
                 */
                ClearRouteTableSelectionPoliciesOutcome ClearRouteTableSelectionPolicies(const Model::ClearRouteTableSelectionPoliciesRequest &request);
                void ClearRouteTableSelectionPoliciesAsync(const Model::ClearRouteTableSelectionPoliciesRequest& request, const ClearRouteTableSelectionPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearRouteTableSelectionPoliciesOutcomeCallable ClearRouteTableSelectionPoliciesCallable(const Model::ClearRouteTableSelectionPoliciesRequest& request);

                /**
                 *本接口（CloneSecurityGroup）用于根据存量的安全组，克隆创建出同样规则配置的安全组。默认仅克隆安全组及其规则信息，可通过入参开启克隆安全组标签信息。
                 * @param req CloneSecurityGroupRequest
                 * @return CloneSecurityGroupOutcome
                 */
                CloneSecurityGroupOutcome CloneSecurityGroup(const Model::CloneSecurityGroupRequest &request);
                void CloneSecurityGroupAsync(const Model::CloneSecurityGroupRequest& request, const CloneSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneSecurityGroupOutcomeCallable CloneSecurityGroupCallable(const Model::CloneSecurityGroupRequest& request);

                /**
                 *本接口（CreateAddressTemplate）用于创建IP地址模板。
                 * @param req CreateAddressTemplateRequest
                 * @return CreateAddressTemplateOutcome
                 */
                CreateAddressTemplateOutcome CreateAddressTemplate(const Model::CreateAddressTemplateRequest &request);
                void CreateAddressTemplateAsync(const Model::CreateAddressTemplateRequest& request, const CreateAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAddressTemplateOutcomeCallable CreateAddressTemplateCallable(const Model::CreateAddressTemplateRequest& request);

                /**
                 *本接口（CreateAddressTemplateGroup）用于创建IP地址模板集合。
                 * @param req CreateAddressTemplateGroupRequest
                 * @return CreateAddressTemplateGroupOutcome
                 */
                CreateAddressTemplateGroupOutcome CreateAddressTemplateGroup(const Model::CreateAddressTemplateGroupRequest &request);
                void CreateAddressTemplateGroupAsync(const Model::CreateAddressTemplateGroupRequest& request, const CreateAddressTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAddressTemplateGroupOutcomeCallable CreateAddressTemplateGroupCallable(const Model::CreateAddressTemplateGroupRequest& request);

                /**
                 *本接口（CreateAndAttachNetworkInterface）用于创建弹性网卡并绑定云服务器。
* 创建弹性网卡时可以指定内网IP，并且可以指定一个主IP，指定的内网IP必须在弹性网卡所在子网内，而且不能被占用。
* 创建弹性网卡时可以指定需要申请的内网IP数量，系统会随机生成内网IP地址。
* 一个弹性网卡支持绑定的IP地址是有限制的，更多资源限制信息详见<a href="/document/product/576/18527">弹性网卡使用限制</a>。
* 创建弹性网卡同时可以绑定已有安全组。
* 创建弹性网卡同时可以绑定标签, 应答里的标签列表代表添加成功的标签。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req CreateAndAttachNetworkInterfaceRequest
                 * @return CreateAndAttachNetworkInterfaceOutcome
                 */
                CreateAndAttachNetworkInterfaceOutcome CreateAndAttachNetworkInterface(const Model::CreateAndAttachNetworkInterfaceRequest &request);
                void CreateAndAttachNetworkInterfaceAsync(const Model::CreateAndAttachNetworkInterfaceRequest& request, const CreateAndAttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndAttachNetworkInterfaceOutcomeCallable CreateAndAttachNetworkInterfaceCallable(const Model::CreateAndAttachNetworkInterfaceRequest& request);

                /**
                 *本接口（CreateAssistantCidr）用于批量创建辅助CIDR。
                 * @param req CreateAssistantCidrRequest
                 * @return CreateAssistantCidrOutcome
                 */
                CreateAssistantCidrOutcome CreateAssistantCidr(const Model::CreateAssistantCidrRequest &request);
                void CreateAssistantCidrAsync(const Model::CreateAssistantCidrRequest& request, const CreateAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssistantCidrOutcomeCallable CreateAssistantCidrCallable(const Model::CreateAssistantCidrRequest& request);

                /**
                 *本接口 (CreateBandwidthPackage) 支持创建[设备带宽包](https://cloud.tencent.com/document/product/684/15245#bwptype)和[IP带宽包](https://cloud.tencent.com/document/product/684/15245#bwptype)。
                 * @param req CreateBandwidthPackageRequest
                 * @return CreateBandwidthPackageOutcome
                 */
                CreateBandwidthPackageOutcome CreateBandwidthPackage(const Model::CreateBandwidthPackageRequest &request);
                void CreateBandwidthPackageAsync(const Model::CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBandwidthPackageOutcomeCallable CreateBandwidthPackageCallable(const Model::CreateBandwidthPackageRequest& request);

                /**
                 *本接口（CreateCcn）用于创建云联网（CCN）。<br />
* 创建云联网同时可以绑定标签, 应答里的标签列表代表添加成功的标签。
* 每个账号能创建的云联网实例个数是有限的，详请参考产品文档。如果需要扩充请联系在线客服。
                 * @param req CreateCcnRequest
                 * @return CreateCcnOutcome
                 */
                CreateCcnOutcome CreateCcn(const Model::CreateCcnRequest &request);
                void CreateCcnAsync(const Model::CreateCcnRequest& request, const CreateCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCcnOutcomeCallable CreateCcnCallable(const Model::CreateCcnRequest& request);

                /**
                 *创建云联网策略路由下一跳
                 * @param req CreateCcnPolicyBasedRoutingNextHopRequest
                 * @return CreateCcnPolicyBasedRoutingNextHopOutcome
                 */
                CreateCcnPolicyBasedRoutingNextHopOutcome CreateCcnPolicyBasedRoutingNextHop(const Model::CreateCcnPolicyBasedRoutingNextHopRequest &request);
                void CreateCcnPolicyBasedRoutingNextHopAsync(const Model::CreateCcnPolicyBasedRoutingNextHopRequest& request, const CreateCcnPolicyBasedRoutingNextHopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCcnPolicyBasedRoutingNextHopOutcomeCallable CreateCcnPolicyBasedRoutingNextHopCallable(const Model::CreateCcnPolicyBasedRoutingNextHopRequest& request);

                /**
                 *创建云联网策略路由匹配规则
                 * @param req CreateCcnPolicyBasedRoutingRulesRequest
                 * @return CreateCcnPolicyBasedRoutingRulesOutcome
                 */
                CreateCcnPolicyBasedRoutingRulesOutcome CreateCcnPolicyBasedRoutingRules(const Model::CreateCcnPolicyBasedRoutingRulesRequest &request);
                void CreateCcnPolicyBasedRoutingRulesAsync(const Model::CreateCcnPolicyBasedRoutingRulesRequest& request, const CreateCcnPolicyBasedRoutingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCcnPolicyBasedRoutingRulesOutcomeCallable CreateCcnPolicyBasedRoutingRulesCallable(const Model::CreateCcnPolicyBasedRoutingRulesRequest& request);

                /**
                 *本接口（CreateCcnRouteTables）用于给指定的云联网实例新建路由表。
                 * @param req CreateCcnRouteTablesRequest
                 * @return CreateCcnRouteTablesOutcome
                 */
                CreateCcnRouteTablesOutcome CreateCcnRouteTables(const Model::CreateCcnRouteTablesRequest &request);
                void CreateCcnRouteTablesAsync(const Model::CreateCcnRouteTablesRequest& request, const CreateCcnRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCcnRouteTablesOutcomeCallable CreateCcnRouteTablesCallable(const Model::CreateCcnRouteTablesRequest& request);

                /**
                 *创建 IDC 通道
                 * @param req CreateCdcLDCXListRequest
                 * @return CreateCdcLDCXListOutcome
                 */
                CreateCdcLDCXListOutcome CreateCdcLDCXList(const Model::CreateCdcLDCXListRequest &request);
                void CreateCdcLDCXListAsync(const Model::CreateCdcLDCXListRequest& request, const CreateCdcLDCXListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCdcLDCXListOutcomeCallable CreateCdcLDCXListCallable(const Model::CreateCdcLDCXListRequest& request);

                /**
                 *创建虚拟连接，用于支持 CDC 多租户模式
                 * @param req CreateCdcNetPlanesRequest
                 * @return CreateCdcNetPlanesOutcome
                 */
                CreateCdcNetPlanesOutcome CreateCdcNetPlanes(const Model::CreateCdcNetPlanesRequest &request);
                void CreateCdcNetPlanesAsync(const Model::CreateCdcNetPlanesRequest& request, const CreateCdcNetPlanesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCdcNetPlanesOutcomeCallable CreateCdcNetPlanesCallable(const Model::CreateCdcNetPlanesRequest& request);

                /**
                 *本接口（CreateCustomerGateway）用于创建对端网关。
                 * @param req CreateCustomerGatewayRequest
                 * @return CreateCustomerGatewayOutcome
                 */
                CreateCustomerGatewayOutcome CreateCustomerGateway(const Model::CreateCustomerGatewayRequest &request);
                void CreateCustomerGatewayAsync(const Model::CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomerGatewayOutcomeCallable CreateCustomerGatewayCallable(const Model::CreateCustomerGatewayRequest& request);

                /**
                 *本接口（CreateDefaultSecurityGroup）用于创建（如果项目下未存在默认安全组，则创建；已存在则获取。）默认安全组（SecurityGroup）。
* 每个账户下每个地域的每个项目的<a href="https://cloud.tencent.com/document/product/213/12453">安全组数量限制</a>。
* 默认安全组会放通所有IPv4规则，在创建后通常您需要再调用CreateSecurityGroupPolicies将安全组的规则设置为需要的规则。
* 创建安全组同时可以绑定标签, 应答里的标签列表代表添加成功的标签。
                 * @param req CreateDefaultSecurityGroupRequest
                 * @return CreateDefaultSecurityGroupOutcome
                 */
                CreateDefaultSecurityGroupOutcome CreateDefaultSecurityGroup(const Model::CreateDefaultSecurityGroupRequest &request);
                void CreateDefaultSecurityGroupAsync(const Model::CreateDefaultSecurityGroupRequest& request, const CreateDefaultSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDefaultSecurityGroupOutcomeCallable CreateDefaultSecurityGroupCallable(const Model::CreateDefaultSecurityGroupRequest& request);

                /**
                 *本接口（CreateDefaultVpc）用于创建默认私有网络(VPC）。

默认VPC适用于快速入门和启动公共实例，您可以像使用任何其他VPC一样使用默认VPC。如果您想创建标准VPC，即指定VPC名称、VPC网段、子网网段、子网可用区，请使用常规创建VPC接口（CreateVpc）

正常情况，本接口并不一定生产默认VPC，而是根据用户账号的网络属性（DescribeAccountAttributes）来决定的
* 支持基础网络、VPC，返回VpcId为0
* 只支持VPC，返回默认VPC信息

您也可以通过 Force 参数，强制返回默认VPC。
                 * @param req CreateDefaultVpcRequest
                 * @return CreateDefaultVpcOutcome
                 */
                CreateDefaultVpcOutcome CreateDefaultVpc(const Model::CreateDefaultVpcRequest &request);
                void CreateDefaultVpcAsync(const Model::CreateDefaultVpcRequest& request, const CreateDefaultVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDefaultVpcOutcomeCallable CreateDefaultVpcCallable(const Model::CreateDefaultVpcRequest& request);

                /**
                 *本接口（CreateDhcpIp）用于创建DhcpIp。
                 * @param req CreateDhcpIpRequest
                 * @return CreateDhcpIpOutcome
                 */
                CreateDhcpIpOutcome CreateDhcpIp(const Model::CreateDhcpIpRequest &request);
                void CreateDhcpIpAsync(const Model::CreateDhcpIpRequest& request, const CreateDhcpIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDhcpIpOutcomeCallable CreateDhcpIpCallable(const Model::CreateDhcpIpRequest& request);

                /**
                 *本接口（CreateDirectConnectGateway）用于创建专线网关。
                 * @param req CreateDirectConnectGatewayRequest
                 * @return CreateDirectConnectGatewayOutcome
                 */
                CreateDirectConnectGatewayOutcome CreateDirectConnectGateway(const Model::CreateDirectConnectGatewayRequest &request);
                void CreateDirectConnectGatewayAsync(const Model::CreateDirectConnectGatewayRequest& request, const CreateDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDirectConnectGatewayOutcomeCallable CreateDirectConnectGatewayCallable(const Model::CreateDirectConnectGatewayRequest& request);

                /**
                 *本接口（CreateDirectConnectGatewayCcnRoutes）用于创建专线网关的云联网路由（IDC网段）
                 * @param req CreateDirectConnectGatewayCcnRoutesRequest
                 * @return CreateDirectConnectGatewayCcnRoutesOutcome
                 */
                CreateDirectConnectGatewayCcnRoutesOutcome CreateDirectConnectGatewayCcnRoutes(const Model::CreateDirectConnectGatewayCcnRoutesRequest &request);
                void CreateDirectConnectGatewayCcnRoutesAsync(const Model::CreateDirectConnectGatewayCcnRoutesRequest& request, const CreateDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDirectConnectGatewayCcnRoutesOutcomeCallable CreateDirectConnectGatewayCcnRoutesCallable(const Model::CreateDirectConnectGatewayCcnRoutesRequest& request);

                /**
                 *本接口（CreateFlowLog）用于创建网络流日志。
                 * @param req CreateFlowLogRequest
                 * @return CreateFlowLogOutcome
                 */
                CreateFlowLogOutcome CreateFlowLog(const Model::CreateFlowLogRequest &request);
                void CreateFlowLogAsync(const Model::CreateFlowLogRequest& request, const CreateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowLogOutcomeCallable CreateFlowLogCallable(const Model::CreateFlowLogRequest& request);

                /**
                 *本接口（CreateGlobalRoutes）用于创建全局路由。
                 * @param req CreateGlobalRoutesRequest
                 * @return CreateGlobalRoutesOutcome
                 */
                CreateGlobalRoutesOutcome CreateGlobalRoutes(const Model::CreateGlobalRoutesRequest &request);
                void CreateGlobalRoutesAsync(const Model::CreateGlobalRoutesRequest& request, const CreateGlobalRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalRoutesOutcomeCallable CreateGlobalRoutesCallable(const Model::CreateGlobalRoutesRequest& request);

                /**
                 *本接口（CreateHaVip）用于创建高可用虚拟IP（HAVIP）。
                 * @param req CreateHaVipRequest
                 * @return CreateHaVipOutcome
                 */
                CreateHaVipOutcome CreateHaVip(const Model::CreateHaVipRequest &request);
                void CreateHaVipAsync(const Model::CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHaVipOutcomeCallable CreateHaVipCallable(const Model::CreateHaVipRequest& request);

                /**
                 *高优路由表创建
                 * @param req CreateHighPriorityRouteTableRequest
                 * @return CreateHighPriorityRouteTableOutcome
                 */
                CreateHighPriorityRouteTableOutcome CreateHighPriorityRouteTable(const Model::CreateHighPriorityRouteTableRequest &request);
                void CreateHighPriorityRouteTableAsync(const Model::CreateHighPriorityRouteTableRequest& request, const CreateHighPriorityRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHighPriorityRouteTableOutcomeCallable CreateHighPriorityRouteTableCallable(const Model::CreateHighPriorityRouteTableRequest& request);

                /**
                 *创建高优路由表条目。
                 * @param req CreateHighPriorityRoutesRequest
                 * @return CreateHighPriorityRoutesOutcome
                 */
                CreateHighPriorityRoutesOutcome CreateHighPriorityRoutes(const Model::CreateHighPriorityRoutesRequest &request);
                void CreateHighPriorityRoutesAsync(const Model::CreateHighPriorityRoutesRequest& request, const CreateHighPriorityRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHighPriorityRoutesOutcomeCallable CreateHighPriorityRoutesCallable(const Model::CreateHighPriorityRoutesRequest& request);

                /**
                 *1. 该接口用于创建IPV6转换IPV4实例，支持批量
2. 同一个账户在一个地域最多允许创建10个转换实例
                 * @param req CreateIp6TranslatorsRequest
                 * @return CreateIp6TranslatorsOutcome
                 */
                CreateIp6TranslatorsOutcome CreateIp6Translators(const Model::CreateIp6TranslatorsRequest &request);
                void CreateIp6TranslatorsAsync(const Model::CreateIp6TranslatorsRequest& request, const CreateIp6TranslatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIp6TranslatorsOutcomeCallable CreateIp6TranslatorsCallable(const Model::CreateIp6TranslatorsRequest& request);

                /**
                 *本接口（CreateLocalGateway）用于创建用于CDC的本地网关。
                 * @param req CreateLocalGatewayRequest
                 * @return CreateLocalGatewayOutcome
                 */
                CreateLocalGatewayOutcome CreateLocalGateway(const Model::CreateLocalGatewayRequest &request);
                void CreateLocalGatewayAsync(const Model::CreateLocalGatewayRequest& request, const CreateLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLocalGatewayOutcomeCallable CreateLocalGatewayCallable(const Model::CreateLocalGatewayRequest& request);

                /**
                 *本接口(CreateNatGateway)用于创建NAT网关。
在对新建的NAT网关做其他操作前，需先确认此网关已被创建完成（DescribeNatGateway接口返回的实例State字段为AVAILABLE）。
                 * @param req CreateNatGatewayRequest
                 * @return CreateNatGatewayOutcome
                 */
                CreateNatGatewayOutcome CreateNatGateway(const Model::CreateNatGatewayRequest &request);
                void CreateNatGatewayAsync(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatGatewayOutcomeCallable CreateNatGatewayCallable(const Model::CreateNatGatewayRequest& request);

                /**
                 *本接口(CreateNatGatewayDestinationIpPortTranslationNatRule)用于创建NAT网关端口转发规则。
                 * @param req CreateNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome CreateNatGatewayDestinationIpPortTranslationNatRule(const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void CreateNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const CreateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable CreateNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *本接口(CreateNatGatewaySourceIpTranslationNatRule)用于创建NAT网关SNAT规则
                 * @param req CreateNatGatewaySourceIpTranslationNatRuleRequest
                 * @return CreateNatGatewaySourceIpTranslationNatRuleOutcome
                 */
                CreateNatGatewaySourceIpTranslationNatRuleOutcome CreateNatGatewaySourceIpTranslationNatRule(const Model::CreateNatGatewaySourceIpTranslationNatRuleRequest &request);
                void CreateNatGatewaySourceIpTranslationNatRuleAsync(const Model::CreateNatGatewaySourceIpTranslationNatRuleRequest& request, const CreateNatGatewaySourceIpTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatGatewaySourceIpTranslationNatRuleOutcomeCallable CreateNatGatewaySourceIpTranslationNatRuleCallable(const Model::CreateNatGatewaySourceIpTranslationNatRuleRequest& request);

                /**
                 *本接口（CreateNetDetect）用于创建网络探测。
                 * @param req CreateNetDetectRequest
                 * @return CreateNetDetectOutcome
                 */
                CreateNetDetectOutcome CreateNetDetect(const Model::CreateNetDetectRequest &request);
                void CreateNetDetectAsync(const Model::CreateNetDetectRequest& request, const CreateNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetDetectOutcomeCallable CreateNetDetectCallable(const Model::CreateNetDetectRequest& request);

                /**
                 *本接口（CreateNetworkAcl）用于创建新的<a href="https://cloud.tencent.com/document/product/215/20088">网络ACL</a>。
* 新建的网络ACL的入站和出站规则默认都是全部拒绝，在创建后通常您需要再调用ModifyNetworkAclEntries将网络ACL的规则设置为需要的规则。
                 * @param req CreateNetworkAclRequest
                 * @return CreateNetworkAclOutcome
                 */
                CreateNetworkAclOutcome CreateNetworkAcl(const Model::CreateNetworkAclRequest &request);
                void CreateNetworkAclAsync(const Model::CreateNetworkAclRequest& request, const CreateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkAclOutcomeCallable CreateNetworkAclCallable(const Model::CreateNetworkAclRequest& request);

                /**
                 *本接口（CreateNetworkAclEntries）用于增量添加网络ACL三元组的入站规则和出站规则。
                 * @param req CreateNetworkAclEntriesRequest
                 * @return CreateNetworkAclEntriesOutcome
                 */
                CreateNetworkAclEntriesOutcome CreateNetworkAclEntries(const Model::CreateNetworkAclEntriesRequest &request);
                void CreateNetworkAclEntriesAsync(const Model::CreateNetworkAclEntriesRequest& request, const CreateNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkAclEntriesOutcomeCallable CreateNetworkAclEntriesCallable(const Model::CreateNetworkAclEntriesRequest& request);

                /**
                 *本接口（CreateNetworkAclQuintupleEntries）用于增量网络ACL五元组的入站规则和出站规则。
                 * @param req CreateNetworkAclQuintupleEntriesRequest
                 * @return CreateNetworkAclQuintupleEntriesOutcome
                 */
                CreateNetworkAclQuintupleEntriesOutcome CreateNetworkAclQuintupleEntries(const Model::CreateNetworkAclQuintupleEntriesRequest &request);
                void CreateNetworkAclQuintupleEntriesAsync(const Model::CreateNetworkAclQuintupleEntriesRequest& request, const CreateNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkAclQuintupleEntriesOutcomeCallable CreateNetworkAclQuintupleEntriesCallable(const Model::CreateNetworkAclQuintupleEntriesRequest& request);

                /**
                 *本接口（CreateNetworkInterface）用于创建弹性网卡。
* 创建弹性网卡时可以指定内网IP，并且可以指定一个主IP，指定的内网IP必须在弹性网卡所在子网内，而且不能被占用。
* 创建弹性网卡时可以指定需要申请的内网IP数量，系统会随机生成内网IP地址。
* 一个弹性网卡支持绑定的IP地址是有限制的，更多资源限制信息详见<a href="https://cloud.tencent.com/document/product/576/18527">弹性网卡使用限制</a>。
* 创建弹性网卡同时可以绑定已有安全组。
* 创建弹性网卡同时可以绑定标签, 响应里的标签列表代表添加成功的标签。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req CreateNetworkInterfaceRequest
                 * @return CreateNetworkInterfaceOutcome
                 */
                CreateNetworkInterfaceOutcome CreateNetworkInterface(const Model::CreateNetworkInterfaceRequest &request);
                void CreateNetworkInterfaceAsync(const Model::CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkInterfaceOutcomeCallable CreateNetworkInterfaceCallable(const Model::CreateNetworkInterfaceRequest& request);

                /**
                 *本接口（CreatePrivateNatGateway）用于创建私网NAT网关。
                 * @param req CreatePrivateNatGatewayRequest
                 * @return CreatePrivateNatGatewayOutcome
                 */
                CreatePrivateNatGatewayOutcome CreatePrivateNatGateway(const Model::CreatePrivateNatGatewayRequest &request);
                void CreatePrivateNatGatewayAsync(const Model::CreatePrivateNatGatewayRequest& request, const CreatePrivateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateNatGatewayOutcomeCallable CreatePrivateNatGatewayCallable(const Model::CreatePrivateNatGatewayRequest& request);

                /**
                 *本接口（CreatePrivateNatGatewayDestinationIpPortTranslationNatRule）用于创建私网NAT网关目的端口转换规则
                 * @param req CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome CreatePrivateNatGatewayDestinationIpPortTranslationNatRule(const Model::CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *本接口（ CreatePrivateNatGatewayTranslationAclRule）用于创建私网NAT网关源端转换访问控制规则
                 * @param req CreatePrivateNatGatewayTranslationAclRuleRequest
                 * @return CreatePrivateNatGatewayTranslationAclRuleOutcome
                 */
                CreatePrivateNatGatewayTranslationAclRuleOutcome CreatePrivateNatGatewayTranslationAclRule(const Model::CreatePrivateNatGatewayTranslationAclRuleRequest &request);
                void CreatePrivateNatGatewayTranslationAclRuleAsync(const Model::CreatePrivateNatGatewayTranslationAclRuleRequest& request, const CreatePrivateNatGatewayTranslationAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateNatGatewayTranslationAclRuleOutcomeCallable CreatePrivateNatGatewayTranslationAclRuleCallable(const Model::CreatePrivateNatGatewayTranslationAclRuleRequest& request);

                /**
                 *本接口（CreatePrivateNatGatewayTranslationNatRule）用于创建私网NAT网关源端转换规则。
                 * @param req CreatePrivateNatGatewayTranslationNatRuleRequest
                 * @return CreatePrivateNatGatewayTranslationNatRuleOutcome
                 */
                CreatePrivateNatGatewayTranslationNatRuleOutcome CreatePrivateNatGatewayTranslationNatRule(const Model::CreatePrivateNatGatewayTranslationNatRuleRequest &request);
                void CreatePrivateNatGatewayTranslationNatRuleAsync(const Model::CreatePrivateNatGatewayTranslationNatRuleRequest& request, const CreatePrivateNatGatewayTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateNatGatewayTranslationNatRuleOutcomeCallable CreatePrivateNatGatewayTranslationNatRuleCallable(const Model::CreatePrivateNatGatewayTranslationNatRuleRequest& request);

                /**
                 *创建内网保留IP
                 * @param req CreateReserveIpAddressesRequest
                 * @return CreateReserveIpAddressesOutcome
                 */
                CreateReserveIpAddressesOutcome CreateReserveIpAddresses(const Model::CreateReserveIpAddressesRequest &request);
                void CreateReserveIpAddressesAsync(const Model::CreateReserveIpAddressesRequest& request, const CreateReserveIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReserveIpAddressesOutcomeCallable CreateReserveIpAddressesCallable(const Model::CreateReserveIpAddressesRequest& request);

                /**
                 *创建VPC路由接收策略，包括名字，描述和策略条目。
                 * @param req CreateRoutePolicyRequest
                 * @return CreateRoutePolicyOutcome
                 */
                CreateRoutePolicyOutcome CreateRoutePolicy(const Model::CreateRoutePolicyRequest &request);
                void CreateRoutePolicyAsync(const Model::CreateRoutePolicyRequest& request, const CreateRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoutePolicyOutcomeCallable CreateRoutePolicyCallable(const Model::CreateRoutePolicyRequest& request);

                /**
                 *本接口（CreateRoutePolicyAssociations）用于创建路由接收策略绑定(路由策略实例和路由表实例的绑定关系以及绑定优先级)。
                 * @param req CreateRoutePolicyAssociationsRequest
                 * @return CreateRoutePolicyAssociationsOutcome
                 */
                CreateRoutePolicyAssociationsOutcome CreateRoutePolicyAssociations(const Model::CreateRoutePolicyAssociationsRequest &request);
                void CreateRoutePolicyAssociationsAsync(const Model::CreateRoutePolicyAssociationsRequest& request, const CreateRoutePolicyAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoutePolicyAssociationsOutcomeCallable CreateRoutePolicyAssociationsCallable(const Model::CreateRoutePolicyAssociationsRequest& request);

                /**
                 *本接口（CreateRoutePolicyEntries）用于创建路由接收策略条目。
                 * @param req CreateRoutePolicyEntriesRequest
                 * @return CreateRoutePolicyEntriesOutcome
                 */
                CreateRoutePolicyEntriesOutcome CreateRoutePolicyEntries(const Model::CreateRoutePolicyEntriesRequest &request);
                void CreateRoutePolicyEntriesAsync(const Model::CreateRoutePolicyEntriesRequest& request, const CreateRoutePolicyEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoutePolicyEntriesOutcomeCallable CreateRoutePolicyEntriesCallable(const Model::CreateRoutePolicyEntriesRequest& request);

                /**
                 *本接口(CreateRouteTable)用于创建路由表。
* 创建了VPC后，系统会创建一个默认路由表，所有新建的子网都会关联到默认路由表。默认情况下您可以直接使用默认路由表来管理您的路由策略。当您的路由策略较多时，您可以调用创建路由表接口创建更多路由表管理您的路由策略。
* 创建路由表同时可以绑定标签, 应答里的标签列表代表添加成功的标签。
                 * @param req CreateRouteTableRequest
                 * @return CreateRouteTableOutcome
                 */
                CreateRouteTableOutcome CreateRouteTable(const Model::CreateRouteTableRequest &request);
                void CreateRouteTableAsync(const Model::CreateRouteTableRequest& request, const CreateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRouteTableOutcomeCallable CreateRouteTableCallable(const Model::CreateRouteTableRequest& request);

                /**
                 *本接口（CreateRoutes）用于创建路由策略。
* 向指定路由表批量新增路由策略。
                 * @param req CreateRoutesRequest
                 * @return CreateRoutesOutcome
                 */
                CreateRoutesOutcome CreateRoutes(const Model::CreateRoutesRequest &request);
                void CreateRoutesAsync(const Model::CreateRoutesRequest& request, const CreateRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoutesOutcomeCallable CreateRoutesCallable(const Model::CreateRoutesRequest& request);

                /**
                 *本接口（CreateSecurityGroup）用于创建新的安全组（SecurityGroup）。
* 每个账户下每个地域的每个项目的<a href="https://cloud.tencent.com/document/product/213/12453">安全组数量限制</a>。
* 新建的安全组的入站和出站规则默认都是全部拒绝，在创建后通常您需要再调用CreateSecurityGroupPolicies将安全组的规则设置为需要的规则。
* 创建安全组同时可以绑定标签, 应答里的标签列表代表添加成功的标签。
                 * @param req CreateSecurityGroupRequest
                 * @return CreateSecurityGroupOutcome
                 */
                CreateSecurityGroupOutcome CreateSecurityGroup(const Model::CreateSecurityGroupRequest &request);
                void CreateSecurityGroupAsync(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupOutcomeCallable CreateSecurityGroupCallable(const Model::CreateSecurityGroupRequest& request);

                /**
                 *本接口（CreateSecurityGroupPolicies）用于创建安全组规则（SecurityGroupPolicy）。

在 SecurityGroupPolicySet 参数中：
<ul>
<li>Version 安全组规则版本号，用户每次更新安全规则版本会自动加1，防止您更新的路由规则已过期，不填不考虑冲突。</li>
<li>在创建出站和入站规则（Egress 和 Ingress）时：<ul>
<li>Protocol 字段支持输入TCP, UDP, ICMP, ICMPV6, GRE, ALL。</li>
<li>CidrBlock 字段允许输入符合cidr格式标准的任意字符串。在基础网络中，如果 CidrBlock 包含您的账户内的云服务器之外的设备在腾讯云的内网 IP，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。</li>
<li>Ipv6CidrBlock 字段允许输入符合IPv6 cidr格式标准的任意字符串。在基础网络中，如果Ipv6CidrBlock 包含您的账户内的云服务器之外的设备在腾讯云的内网 IPv6，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。</li>
<li>SecurityGroupId 字段允许输入与待修改的安全组位于相同项目中的安全组 ID，包括这个安全组 ID 本身，代表安全组下所有云服务器的内网 IP。使用这个字段时，这条规则用来匹配网络报文的过程中会随着被使用的这个 ID 所关联的云服务器变化而变化，不需要重新修改。</li>
<li>Port 字段允许输入一个单独端口号，或者用减号分隔的两个端口号代表端口范围，例如80或8000-8010。只有当 Protocol 字段是 TCP 或 UDP 时，Port 字段才被接受，即 Protocol 字段不是 TCP 或 UDP 时，Protocol 和 Port 是排他关系，不允许同时输入，否则会接口报错。</li>
<li>Action 字段只允许输入 ACCEPT 或 DROP。</li>
<li>CidrBlock, Ipv6CidrBlock, SecurityGroupId, AddressTemplate 四者是排他关系，不允许同时输入，Protocol + Port 和 ServiceTemplate 二者是排他关系，不允许同时输入。IPv6CidrBlock和ICMP是排他关系，如需使用，请输入ICMPV6。</li>
<li>一次请求中只能创建单个方向的规则, 如果需要指定索引（PolicyIndex）参数, 多条规则的索引必须一致。如想在规则最前面插入一条，则填0即可，如果想在最后追加，该字段可不填。</li>
</ul></li></ul>
                 * @param req CreateSecurityGroupPoliciesRequest
                 * @return CreateSecurityGroupPoliciesOutcome
                 */
                CreateSecurityGroupPoliciesOutcome CreateSecurityGroupPolicies(const Model::CreateSecurityGroupPoliciesRequest &request);
                void CreateSecurityGroupPoliciesAsync(const Model::CreateSecurityGroupPoliciesRequest& request, const CreateSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupPoliciesOutcomeCallable CreateSecurityGroupPoliciesCallable(const Model::CreateSecurityGroupPoliciesRequest& request);

                /**
                 *本接口（CreateSecurityGroupWithPolicies）用于创建新的安全组（SecurityGroup），并且可以同时添加安全组规则（SecurityGroupPolicy）。
* 每个账户下每个地域的每个项目的<a href="https://cloud.tencent.com/document/product/213/12453">安全组数量限制</a>。
* 新建的安全组的入站和出站规则默认都是全部拒绝，在创建后通常您需要再调用<a href="https://cloud.tencent.com/document/product/215/15807">CreateSecurityGroupPolicies</a>
将安全组的规则设置为需要的规则。

安全组规则说明：
* Version安全组规则版本号，用户每次更新安全规则版本会自动加1，防止您更新的路由规则已过期，不填不考虑冲突。
* Protocol字段支持输入TCP, UDP, ICMP, ICMPV6, GRE, ALL。
* CidrBlock字段允许输入符合cidr格式标准的任意字符串。(展开)在基础网络中，如果CidrBlock包含您的账户内的云服务器之外的设备在腾讯云的内网IP，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。
* Ipv6CidrBlock字段允许输入符合IPv6 cidr格式标准的任意字符串。(展开)在基础网络中，如果Ipv6CidrBlock包含您的账户内的云服务器之外的设备在腾讯云的内网IPv6，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。
* SecurityGroupId字段允许输入与待修改的安全组位于相同项目中的安全组ID，包括这个安全组ID本身，代表安全组下所有云服务器的内网IP。使用这个字段时，这条规则用来匹配网络报文的过程中会随着被使用的这个ID所关联的云服务器变化而变化，不需要重新修改。
* Port字段允许输入一个单独端口号，或者用减号分隔的两个端口号代表端口范围，例如80或8000-8010。只有当Protocol字段是TCP或UDP时，Port字段才被接受，即Protocol字段不是TCP或UDP时，Protocol和Port是排他关系，不允许同时输入，否则会接口报错。
* Action字段只允许输入ACCEPT或DROP。
* CidrBlock, Ipv6CidrBlock, SecurityGroupId, AddressTemplate四者是排他关系，不允许同时输入，Protocol + Port和ServiceTemplate二者是排他关系，不允许同时输入。
* 请求中可以同时指定入站和出站两个方向的规则, 如果需要指定索引（PolicyIndex）参数, 多条规则的索引必须一致。
                 * @param req CreateSecurityGroupWithPoliciesRequest
                 * @return CreateSecurityGroupWithPoliciesOutcome
                 */
                CreateSecurityGroupWithPoliciesOutcome CreateSecurityGroupWithPolicies(const Model::CreateSecurityGroupWithPoliciesRequest &request);
                void CreateSecurityGroupWithPoliciesAsync(const Model::CreateSecurityGroupWithPoliciesRequest& request, const CreateSecurityGroupWithPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupWithPoliciesOutcomeCallable CreateSecurityGroupWithPoliciesCallable(const Model::CreateSecurityGroupWithPoliciesRequest& request);

                /**
                 *本接口（CreateServiceTemplate）用于创建协议端口模板。
                 * @param req CreateServiceTemplateRequest
                 * @return CreateServiceTemplateOutcome
                 */
                CreateServiceTemplateOutcome CreateServiceTemplate(const Model::CreateServiceTemplateRequest &request);
                void CreateServiceTemplateAsync(const Model::CreateServiceTemplateRequest& request, const CreateServiceTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceTemplateOutcomeCallable CreateServiceTemplateCallable(const Model::CreateServiceTemplateRequest& request);

                /**
                 *本接口（CreateServiceTemplateGroup）用于创建协议端口模板集合。
                 * @param req CreateServiceTemplateGroupRequest
                 * @return CreateServiceTemplateGroupOutcome
                 */
                CreateServiceTemplateGroupOutcome CreateServiceTemplateGroup(const Model::CreateServiceTemplateGroupRequest &request);
                void CreateServiceTemplateGroupAsync(const Model::CreateServiceTemplateGroupRequest& request, const CreateServiceTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceTemplateGroupOutcomeCallable CreateServiceTemplateGroupCallable(const Model::CreateServiceTemplateGroupRequest& request);

                /**
                 *本接口（CreateSnapshotPolicies）用于创建快照策略。
                 * @param req CreateSnapshotPoliciesRequest
                 * @return CreateSnapshotPoliciesOutcome
                 */
                CreateSnapshotPoliciesOutcome CreateSnapshotPolicies(const Model::CreateSnapshotPoliciesRequest &request);
                void CreateSnapshotPoliciesAsync(const Model::CreateSnapshotPoliciesRequest& request, const CreateSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotPoliciesOutcomeCallable CreateSnapshotPoliciesCallable(const Model::CreateSnapshotPoliciesRequest& request);

                /**
                 *本接口（CreateSubnet）用于创建子网。
* 创建子网前必须创建好 VPC。
* 子网创建成功后，子网网段不能修改。子网网段必须在VPC网段内，可以和VPC网段相同（VPC有且只有一个子网时），建议子网网段在VPC网段内，预留网段给其他子网使用。
* 您可以创建的最小网段子网掩码为28（有16个IP地址），最大网段子网掩码为16（65,536个IP地址）。
* 同一个VPC内，多个子网的网段不能重叠。
* 子网创建后会自动关联到默认路由表。
* 创建子网同时可以绑定标签, 应答里的标签列表代表添加成功的标签。
                 * @param req CreateSubnetRequest
                 * @return CreateSubnetOutcome
                 */
                CreateSubnetOutcome CreateSubnet(const Model::CreateSubnetRequest &request);
                void CreateSubnetAsync(const Model::CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubnetOutcomeCallable CreateSubnetCallable(const Model::CreateSubnetRequest& request);

                /**
                 *本接口（CreateSubnets）用于批量创建子网。
* 创建子网前必须创建好 VPC。
* 子网创建成功后，子网网段不能修改。子网网段必须在VPC网段内，可以和VPC网段相同（VPC有且只有一个子网时），建议子网网段在VPC网段内，预留网段给其他子网使用。
* 您可以创建的最小网段子网掩码为28（有16个IP地址），最大网段子网掩码为16（65,536个IP地址）。
* 同一个VPC内，多个子网的网段不能重叠。
* 子网创建后会自动关联到默认路由表。
* 创建子网同时可以绑定标签, 应答里的标签列表代表添加成功的标签。
                 * @param req CreateSubnetsRequest
                 * @return CreateSubnetsOutcome
                 */
                CreateSubnetsOutcome CreateSubnets(const Model::CreateSubnetsRequest &request);
                void CreateSubnetsAsync(const Model::CreateSubnetsRequest& request, const CreateSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubnetsOutcomeCallable CreateSubnetsCallable(const Model::CreateSubnetsRequest& request);

                /**
                 *本接口（CreateTrafficMirror）用于创建流量镜像实例。
                 * @param req CreateTrafficMirrorRequest
                 * @return CreateTrafficMirrorOutcome
                 */
                CreateTrafficMirrorOutcome CreateTrafficMirror(const Model::CreateTrafficMirrorRequest &request);
                void CreateTrafficMirrorAsync(const Model::CreateTrafficMirrorRequest& request, const CreateTrafficMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTrafficMirrorOutcomeCallable CreateTrafficMirrorCallable(const Model::CreateTrafficMirrorRequest& request);

                /**
                 *本接口 (CreateTrafficPackages) 用于创建共享流量包。
                 * @param req CreateTrafficPackagesRequest
                 * @return CreateTrafficPackagesOutcome
                 */
                CreateTrafficPackagesOutcome CreateTrafficPackages(const Model::CreateTrafficPackagesRequest &request);
                void CreateTrafficPackagesAsync(const Model::CreateTrafficPackagesRequest& request, const CreateTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTrafficPackagesOutcomeCallable CreateTrafficPackagesCallable(const Model::CreateTrafficPackagesRequest& request);

                /**
                 *本接口（CreateVpc）用于创建私有网络（VPC）。
* 用户可以创建的最小网段子网掩码为28（有16个IP地址），10.0.0.0/12，172.16.0.0/12最大网段子网掩码为12（1,048,576个IP地址），192.168.0.0/16最大网段子网掩码为16（65,536个IP地址）如果需要规划VPC网段请参见[网络规划](https://cloud.tencent.com/document/product/215/30313)。
* 同一个地域能创建的VPC资源个数也是有限制的，详见 <a href="https://cloud.tencent.com/doc/product/215/537" title="VPC使用限制">VPC使用限制</a>，如果需要申请更多资源，请提交[工单申请](https://console.cloud.tencent.com/workorder/category)。
* 创建VPC同时可以绑定标签, 应答里的标签列表代表添加成功的标签。
                 * @param req CreateVpcRequest
                 * @return CreateVpcOutcome
                 */
                CreateVpcOutcome CreateVpc(const Model::CreateVpcRequest &request);
                void CreateVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcOutcomeCallable CreateVpcCallable(const Model::CreateVpcRequest& request);

                /**
                 *本接口（CreateVpcEndPoint）用于创建终端节点。
                 * @param req CreateVpcEndPointRequest
                 * @return CreateVpcEndPointOutcome
                 */
                CreateVpcEndPointOutcome CreateVpcEndPoint(const Model::CreateVpcEndPointRequest &request);
                void CreateVpcEndPointAsync(const Model::CreateVpcEndPointRequest& request, const CreateVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcEndPointOutcomeCallable CreateVpcEndPointCallable(const Model::CreateVpcEndPointRequest& request);

                /**
                 *本接口（CreateVpcEndPointService）用于创建终端节点服务。
                 * @param req CreateVpcEndPointServiceRequest
                 * @return CreateVpcEndPointServiceOutcome
                 */
                CreateVpcEndPointServiceOutcome CreateVpcEndPointService(const Model::CreateVpcEndPointServiceRequest &request);
                void CreateVpcEndPointServiceAsync(const Model::CreateVpcEndPointServiceRequest& request, const CreateVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcEndPointServiceOutcomeCallable CreateVpcEndPointServiceCallable(const Model::CreateVpcEndPointServiceRequest& request);

                /**
                 *本接口（CreateVpcEndPointServiceWhiteList）创建终端服务白名单。
                 * @param req CreateVpcEndPointServiceWhiteListRequest
                 * @return CreateVpcEndPointServiceWhiteListOutcome
                 */
                CreateVpcEndPointServiceWhiteListOutcome CreateVpcEndPointServiceWhiteList(const Model::CreateVpcEndPointServiceWhiteListRequest &request);
                void CreateVpcEndPointServiceWhiteListAsync(const Model::CreateVpcEndPointServiceWhiteListRequest& request, const CreateVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcEndPointServiceWhiteListOutcomeCallable CreateVpcEndPointServiceWhiteListCallable(const Model::CreateVpcEndPointServiceWhiteListRequest& request);

                /**
                 *本接口（CreateVpcPeeringConnection）用于创建私有网络对等连接。
                 * @param req CreateVpcPeeringConnectionRequest
                 * @return CreateVpcPeeringConnectionOutcome
                 */
                CreateVpcPeeringConnectionOutcome CreateVpcPeeringConnection(const Model::CreateVpcPeeringConnectionRequest &request);
                void CreateVpcPeeringConnectionAsync(const Model::CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcPeeringConnectionOutcomeCallable CreateVpcPeeringConnectionCallable(const Model::CreateVpcPeeringConnectionRequest& request);

                /**
                 *本接口（CreateVpnConnection）用于创建VPN通道。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req CreateVpnConnectionRequest
                 * @return CreateVpnConnectionOutcome
                 */
                CreateVpnConnectionOutcome CreateVpnConnection(const Model::CreateVpnConnectionRequest &request);
                void CreateVpnConnectionAsync(const Model::CreateVpnConnectionRequest& request, const CreateVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpnConnectionOutcomeCallable CreateVpnConnectionCallable(const Model::CreateVpnConnectionRequest& request);

                /**
                 *本接口（CreateVpnGateway）用于创建VPN网关。
                 * @param req CreateVpnGatewayRequest
                 * @return CreateVpnGatewayOutcome
                 */
                CreateVpnGatewayOutcome CreateVpnGateway(const Model::CreateVpnGatewayRequest &request);
                void CreateVpnGatewayAsync(const Model::CreateVpnGatewayRequest& request, const CreateVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpnGatewayOutcomeCallable CreateVpnGatewayCallable(const Model::CreateVpnGatewayRequest& request);

                /**
                 *创建路由型VPN网关的目的路由
                 * @param req CreateVpnGatewayRoutesRequest
                 * @return CreateVpnGatewayRoutesOutcome
                 */
                CreateVpnGatewayRoutesOutcome CreateVpnGatewayRoutes(const Model::CreateVpnGatewayRoutesRequest &request);
                void CreateVpnGatewayRoutesAsync(const Model::CreateVpnGatewayRoutesRequest& request, const CreateVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpnGatewayRoutesOutcomeCallable CreateVpnGatewayRoutesCallable(const Model::CreateVpnGatewayRoutesRequest& request);

                /**
                 *创建SSL-VPN-CLIENT
                 * @param req CreateVpnGatewaySslClientRequest
                 * @return CreateVpnGatewaySslClientOutcome
                 */
                CreateVpnGatewaySslClientOutcome CreateVpnGatewaySslClient(const Model::CreateVpnGatewaySslClientRequest &request);
                void CreateVpnGatewaySslClientAsync(const Model::CreateVpnGatewaySslClientRequest& request, const CreateVpnGatewaySslClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpnGatewaySslClientOutcomeCallable CreateVpnGatewaySslClientCallable(const Model::CreateVpnGatewaySslClientRequest& request);

                /**
                 *本接口（CreateVpnGatewaySslServer）用于创建SSL-VPN Server端。
                 * @param req CreateVpnGatewaySslServerRequest
                 * @return CreateVpnGatewaySslServerOutcome
                 */
                CreateVpnGatewaySslServerOutcome CreateVpnGatewaySslServer(const Model::CreateVpnGatewaySslServerRequest &request);
                void CreateVpnGatewaySslServerAsync(const Model::CreateVpnGatewaySslServerRequest& request, const CreateVpnGatewaySslServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpnGatewaySslServerOutcomeCallable CreateVpnGatewaySslServerCallable(const Model::CreateVpnGatewaySslServerRequest& request);

                /**
                 *本接口（DeleteAddressTemplate）用于删除IP地址模板。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req DeleteAddressTemplateRequest
                 * @return DeleteAddressTemplateOutcome
                 */
                DeleteAddressTemplateOutcome DeleteAddressTemplate(const Model::DeleteAddressTemplateRequest &request);
                void DeleteAddressTemplateAsync(const Model::DeleteAddressTemplateRequest& request, const DeleteAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddressTemplateOutcomeCallable DeleteAddressTemplateCallable(const Model::DeleteAddressTemplateRequest& request);

                /**
                 *本接口（DeleteAddressTemplateGroup）用于删除IP地址模板集合。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req DeleteAddressTemplateGroupRequest
                 * @return DeleteAddressTemplateGroupOutcome
                 */
                DeleteAddressTemplateGroupOutcome DeleteAddressTemplateGroup(const Model::DeleteAddressTemplateGroupRequest &request);
                void DeleteAddressTemplateGroupAsync(const Model::DeleteAddressTemplateGroupRequest& request, const DeleteAddressTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddressTemplateGroupOutcomeCallable DeleteAddressTemplateGroupCallable(const Model::DeleteAddressTemplateGroupRequest& request);

                /**
                 *本接口（DeleteAssistantCidr）用于删除辅助CIDR。
                 * @param req DeleteAssistantCidrRequest
                 * @return DeleteAssistantCidrOutcome
                 */
                DeleteAssistantCidrOutcome DeleteAssistantCidr(const Model::DeleteAssistantCidrRequest &request);
                void DeleteAssistantCidrAsync(const Model::DeleteAssistantCidrRequest& request, const DeleteAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssistantCidrOutcomeCallable DeleteAssistantCidrCallable(const Model::DeleteAssistantCidrRequest& request);

                /**
                 *接口支持删除共享带宽包，包括[设备带宽包](https://cloud.tencent.com/document/product/684/15245#bwptype)和[IP带宽包](https://cloud.tencent.com/document/product/684/15245#bwptype)
                 * @param req DeleteBandwidthPackageRequest
                 * @return DeleteBandwidthPackageOutcome
                 */
                DeleteBandwidthPackageOutcome DeleteBandwidthPackage(const Model::DeleteBandwidthPackageRequest &request);
                void DeleteBandwidthPackageAsync(const Model::DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBandwidthPackageOutcomeCallable DeleteBandwidthPackageCallable(const Model::DeleteBandwidthPackageRequest& request);

                /**
                 *本接口（DeleteCcn）用于删除云联网。
* 删除后，云联网关联的所有实例间路由将被删除，网络将会中断，请务必确认
* 删除云联网是不可逆的操作，请谨慎处理。
                 * @param req DeleteCcnRequest
                 * @return DeleteCcnOutcome
                 */
                DeleteCcnOutcome DeleteCcn(const Model::DeleteCcnRequest &request);
                void DeleteCcnAsync(const Model::DeleteCcnRequest& request, const DeleteCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCcnOutcomeCallable DeleteCcnCallable(const Model::DeleteCcnRequest& request);

                /**
                 *删除云联网策略路由下一跳
                 * @param req DeleteCcnPolicyBasedRoutingNextHopRequest
                 * @return DeleteCcnPolicyBasedRoutingNextHopOutcome
                 */
                DeleteCcnPolicyBasedRoutingNextHopOutcome DeleteCcnPolicyBasedRoutingNextHop(const Model::DeleteCcnPolicyBasedRoutingNextHopRequest &request);
                void DeleteCcnPolicyBasedRoutingNextHopAsync(const Model::DeleteCcnPolicyBasedRoutingNextHopRequest& request, const DeleteCcnPolicyBasedRoutingNextHopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCcnPolicyBasedRoutingNextHopOutcomeCallable DeleteCcnPolicyBasedRoutingNextHopCallable(const Model::DeleteCcnPolicyBasedRoutingNextHopRequest& request);

                /**
                 *删除云联网策略路由匹配规则
                 * @param req DeleteCcnPolicyBasedRoutingRuleRequest
                 * @return DeleteCcnPolicyBasedRoutingRuleOutcome
                 */
                DeleteCcnPolicyBasedRoutingRuleOutcome DeleteCcnPolicyBasedRoutingRule(const Model::DeleteCcnPolicyBasedRoutingRuleRequest &request);
                void DeleteCcnPolicyBasedRoutingRuleAsync(const Model::DeleteCcnPolicyBasedRoutingRuleRequest& request, const DeleteCcnPolicyBasedRoutingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCcnPolicyBasedRoutingRuleOutcomeCallable DeleteCcnPolicyBasedRoutingRuleCallable(const Model::DeleteCcnPolicyBasedRoutingRuleRequest& request);

                /**
                 *本接口（DeleteCcnRouteTables）用于删除云联网路由表。
                 * @param req DeleteCcnRouteTablesRequest
                 * @return DeleteCcnRouteTablesOutcome
                 */
                DeleteCcnRouteTablesOutcome DeleteCcnRouteTables(const Model::DeleteCcnRouteTablesRequest &request);
                void DeleteCcnRouteTablesAsync(const Model::DeleteCcnRouteTablesRequest& request, const DeleteCcnRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCcnRouteTablesOutcomeCallable DeleteCcnRouteTablesCallable(const Model::DeleteCcnRouteTablesRequest& request);

                /**
                 *删除 IDC通道
                 * @param req DeleteCdcLDCXListRequest
                 * @return DeleteCdcLDCXListOutcome
                 */
                DeleteCdcLDCXListOutcome DeleteCdcLDCXList(const Model::DeleteCdcLDCXListRequest &request);
                void DeleteCdcLDCXListAsync(const Model::DeleteCdcLDCXListRequest& request, const DeleteCdcLDCXListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCdcLDCXListOutcomeCallable DeleteCdcLDCXListCallable(const Model::DeleteCdcLDCXListRequest& request);

                /**
                 *删除虚拟连接
                 * @param req DeleteCdcNetPlanesRequest
                 * @return DeleteCdcNetPlanesOutcome
                 */
                DeleteCdcNetPlanesOutcome DeleteCdcNetPlanes(const Model::DeleteCdcNetPlanesRequest &request);
                void DeleteCdcNetPlanesAsync(const Model::DeleteCdcNetPlanesRequest& request, const DeleteCdcNetPlanesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCdcNetPlanesOutcomeCallable DeleteCdcNetPlanesCallable(const Model::DeleteCdcNetPlanesRequest& request);

                /**
                 *本接口（DeleteCustomerGateway）用于删除对端网关。
                 * @param req DeleteCustomerGatewayRequest
                 * @return DeleteCustomerGatewayOutcome
                 */
                DeleteCustomerGatewayOutcome DeleteCustomerGateway(const Model::DeleteCustomerGatewayRequest &request);
                void DeleteCustomerGatewayAsync(const Model::DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomerGatewayOutcomeCallable DeleteCustomerGatewayCallable(const Model::DeleteCustomerGatewayRequest& request);

                /**
                 *本接口（DeleteDhcpIp）用于删除DhcpIp。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req DeleteDhcpIpRequest
                 * @return DeleteDhcpIpOutcome
                 */
                DeleteDhcpIpOutcome DeleteDhcpIp(const Model::DeleteDhcpIpRequest &request);
                void DeleteDhcpIpAsync(const Model::DeleteDhcpIpRequest& request, const DeleteDhcpIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDhcpIpOutcomeCallable DeleteDhcpIpCallable(const Model::DeleteDhcpIpRequest& request);

                /**
                 *本接口（DeleteDirectConnectGateway）用于删除专线网关。
<li>如果是 NAT 网关，删除专线网关后，NAT 规则以及 ACL 策略都被清理了。</li>
<li>删除专线网关后，系统会删除路由表中跟该专线网关相关的路由策略。</li>
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`QueryTask`接口
                 * @param req DeleteDirectConnectGatewayRequest
                 * @return DeleteDirectConnectGatewayOutcome
                 */
                DeleteDirectConnectGatewayOutcome DeleteDirectConnectGateway(const Model::DeleteDirectConnectGatewayRequest &request);
                void DeleteDirectConnectGatewayAsync(const Model::DeleteDirectConnectGatewayRequest& request, const DeleteDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDirectConnectGatewayOutcomeCallable DeleteDirectConnectGatewayCallable(const Model::DeleteDirectConnectGatewayRequest& request);

                /**
                 *本接口（DeleteDirectConnectGatewayCcnRoutes）用于删除专线网关的云联网路由（IDC网段）
                 * @param req DeleteDirectConnectGatewayCcnRoutesRequest
                 * @return DeleteDirectConnectGatewayCcnRoutesOutcome
                 */
                DeleteDirectConnectGatewayCcnRoutesOutcome DeleteDirectConnectGatewayCcnRoutes(const Model::DeleteDirectConnectGatewayCcnRoutesRequest &request);
                void DeleteDirectConnectGatewayCcnRoutesAsync(const Model::DeleteDirectConnectGatewayCcnRoutesRequest& request, const DeleteDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDirectConnectGatewayCcnRoutesOutcomeCallable DeleteDirectConnectGatewayCcnRoutesCallable(const Model::DeleteDirectConnectGatewayCcnRoutesRequest& request);

                /**
                 *本接口（DeleteFlowLog）用于删除流日志。
                 * @param req DeleteFlowLogRequest
                 * @return DeleteFlowLogOutcome
                 */
                DeleteFlowLogOutcome DeleteFlowLog(const Model::DeleteFlowLogRequest &request);
                void DeleteFlowLogAsync(const Model::DeleteFlowLogRequest& request, const DeleteFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFlowLogOutcomeCallable DeleteFlowLogCallable(const Model::DeleteFlowLogRequest& request);

                /**
                 *删除全局路由。
                 * @param req DeleteGlobalRoutesRequest
                 * @return DeleteGlobalRoutesOutcome
                 */
                DeleteGlobalRoutesOutcome DeleteGlobalRoutes(const Model::DeleteGlobalRoutesRequest &request);
                void DeleteGlobalRoutesAsync(const Model::DeleteGlobalRoutesRequest& request, const DeleteGlobalRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalRoutesOutcomeCallable DeleteGlobalRoutesCallable(const Model::DeleteGlobalRoutesRequest& request);

                /**
                 *本接口（DeleteHaVip）用于删除高可用虚拟IP（HAVIP）。<br />
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
                 * @param req DeleteHaVipRequest
                 * @return DeleteHaVipOutcome
                 */
                DeleteHaVipOutcome DeleteHaVip(const Model::DeleteHaVipRequest &request);
                void DeleteHaVipAsync(const Model::DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHaVipOutcomeCallable DeleteHaVipCallable(const Model::DeleteHaVipRequest& request);

                /**
                 *删除高优路由表
                 * @param req DeleteHighPriorityRouteTablesRequest
                 * @return DeleteHighPriorityRouteTablesOutcome
                 */
                DeleteHighPriorityRouteTablesOutcome DeleteHighPriorityRouteTables(const Model::DeleteHighPriorityRouteTablesRequest &request);
                void DeleteHighPriorityRouteTablesAsync(const Model::DeleteHighPriorityRouteTablesRequest& request, const DeleteHighPriorityRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHighPriorityRouteTablesOutcomeCallable DeleteHighPriorityRouteTablesCallable(const Model::DeleteHighPriorityRouteTablesRequest& request);

                /**
                 *删除高优路由表的路由条目。
                 * @param req DeleteHighPriorityRoutesRequest
                 * @return DeleteHighPriorityRoutesOutcome
                 */
                DeleteHighPriorityRoutesOutcome DeleteHighPriorityRoutes(const Model::DeleteHighPriorityRoutesRequest &request);
                void DeleteHighPriorityRoutesAsync(const Model::DeleteHighPriorityRoutesRequest& request, const DeleteHighPriorityRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHighPriorityRoutesOutcomeCallable DeleteHighPriorityRoutesCallable(const Model::DeleteHighPriorityRoutesRequest& request);

                /**
                 *1. 该接口用于释放IPV6转换实例，支持批量。
2.  如果IPV6转换实例建立有转换规则，会一并删除。
                 * @param req DeleteIp6TranslatorsRequest
                 * @return DeleteIp6TranslatorsOutcome
                 */
                DeleteIp6TranslatorsOutcome DeleteIp6Translators(const Model::DeleteIp6TranslatorsRequest &request);
                void DeleteIp6TranslatorsAsync(const Model::DeleteIp6TranslatorsRequest& request, const DeleteIp6TranslatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIp6TranslatorsOutcomeCallable DeleteIp6TranslatorsCallable(const Model::DeleteIp6TranslatorsRequest& request);

                /**
                 *本接口（DeleteLocalGateway）用于删除CDC的本地网关。
                 * @param req DeleteLocalGatewayRequest
                 * @return DeleteLocalGatewayOutcome
                 */
                DeleteLocalGatewayOutcome DeleteLocalGateway(const Model::DeleteLocalGatewayRequest &request);
                void DeleteLocalGatewayAsync(const Model::DeleteLocalGatewayRequest& request, const DeleteLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLocalGatewayOutcomeCallable DeleteLocalGatewayCallable(const Model::DeleteLocalGatewayRequest& request);

                /**
                 *本接口（DeleteNatGateway）用于删除NAT网关。
删除 NAT 网关后，系统会自动删除路由表中包含此 NAT 网关的路由项，同时也会解绑弹性公网IP（EIP）。
                 * @param req DeleteNatGatewayRequest
                 * @return DeleteNatGatewayOutcome
                 */
                DeleteNatGatewayOutcome DeleteNatGateway(const Model::DeleteNatGatewayRequest &request);
                void DeleteNatGatewayAsync(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatGatewayOutcomeCallable DeleteNatGatewayCallable(const Model::DeleteNatGatewayRequest& request);

                /**
                 *本接口（DeleteNatGatewayDestinationIpPortTranslationNatRule）用于删除NAT网关端口转发规则。
                 * @param req DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome DeleteNatGatewayDestinationIpPortTranslationNatRule(const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void DeleteNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const DeleteNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable DeleteNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *本接口（DeleteNatGatewaySourceIpTranslationNatRule）用于删除NAT网关端口SNAT转发规则。
                 * @param req DeleteNatGatewaySourceIpTranslationNatRuleRequest
                 * @return DeleteNatGatewaySourceIpTranslationNatRuleOutcome
                 */
                DeleteNatGatewaySourceIpTranslationNatRuleOutcome DeleteNatGatewaySourceIpTranslationNatRule(const Model::DeleteNatGatewaySourceIpTranslationNatRuleRequest &request);
                void DeleteNatGatewaySourceIpTranslationNatRuleAsync(const Model::DeleteNatGatewaySourceIpTranslationNatRuleRequest& request, const DeleteNatGatewaySourceIpTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatGatewaySourceIpTranslationNatRuleOutcomeCallable DeleteNatGatewaySourceIpTranslationNatRuleCallable(const Model::DeleteNatGatewaySourceIpTranslationNatRuleRequest& request);

                /**
                 *本接口（DeleteNetDetect）用于删除网络探测实例。
                 * @param req DeleteNetDetectRequest
                 * @return DeleteNetDetectOutcome
                 */
                DeleteNetDetectOutcome DeleteNetDetect(const Model::DeleteNetDetectRequest &request);
                void DeleteNetDetectAsync(const Model::DeleteNetDetectRequest& request, const DeleteNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetDetectOutcomeCallable DeleteNetDetectCallable(const Model::DeleteNetDetectRequest& request);

                /**
                 *本接口（DeleteNetworkAcl）用于删除网络ACL。
                 * @param req DeleteNetworkAclRequest
                 * @return DeleteNetworkAclOutcome
                 */
                DeleteNetworkAclOutcome DeleteNetworkAcl(const Model::DeleteNetworkAclRequest &request);
                void DeleteNetworkAclAsync(const Model::DeleteNetworkAclRequest& request, const DeleteNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkAclOutcomeCallable DeleteNetworkAclCallable(const Model::DeleteNetworkAclRequest& request);

                /**
                 *本接口（DeleteNetworkAclEntries）用于删除三元组网络ACL的入站规则和出站规则。在NetworkAclEntrySet参数中：
* 删除IPv4规则，需要传入NetworkAclIpv4EntryId。
* 删除IPv6规则，需要传入NetworkAclIpv6EntryId。
                 * @param req DeleteNetworkAclEntriesRequest
                 * @return DeleteNetworkAclEntriesOutcome
                 */
                DeleteNetworkAclEntriesOutcome DeleteNetworkAclEntries(const Model::DeleteNetworkAclEntriesRequest &request);
                void DeleteNetworkAclEntriesAsync(const Model::DeleteNetworkAclEntriesRequest& request, const DeleteNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkAclEntriesOutcomeCallable DeleteNetworkAclEntriesCallable(const Model::DeleteNetworkAclEntriesRequest& request);

                /**
                 *本接口（DeleteNetworkAclQuintupleEntries）用于删除网络ACL五元组指定的入站规则和出站规则（但不是全量删除该ACL下的所有条目）。在NetworkAclQuintupleEntrySet参数中：NetworkAclQuintupleEntry需要提供NetworkAclQuintupleEntryId。
                 * @param req DeleteNetworkAclQuintupleEntriesRequest
                 * @return DeleteNetworkAclQuintupleEntriesOutcome
                 */
                DeleteNetworkAclQuintupleEntriesOutcome DeleteNetworkAclQuintupleEntries(const Model::DeleteNetworkAclQuintupleEntriesRequest &request);
                void DeleteNetworkAclQuintupleEntriesAsync(const Model::DeleteNetworkAclQuintupleEntriesRequest& request, const DeleteNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkAclQuintupleEntriesOutcomeCallable DeleteNetworkAclQuintupleEntriesCallable(const Model::DeleteNetworkAclQuintupleEntriesRequest& request);

                /**
                 *本接口（DeleteNetworkInterface）用于删除弹性网卡。
* 弹性网卡上绑定了云服务器时，不能被删除。
* 删除指定弹性网卡，弹性网卡必须先和子机解绑才能删除。删除之后弹性网卡上所有内网IP都将被退还。

本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询[DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 
接口。
                 * @param req DeleteNetworkInterfaceRequest
                 * @return DeleteNetworkInterfaceOutcome
                 */
                DeleteNetworkInterfaceOutcome DeleteNetworkInterface(const Model::DeleteNetworkInterfaceRequest &request);
                void DeleteNetworkInterfaceAsync(const Model::DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkInterfaceOutcomeCallable DeleteNetworkInterfaceCallable(const Model::DeleteNetworkInterfaceRequest& request);

                /**
                 *本接口（DeletePrivateNatGateway）用于删除私网NAT网关。
                 * @param req DeletePrivateNatGatewayRequest
                 * @return DeletePrivateNatGatewayOutcome
                 */
                DeletePrivateNatGatewayOutcome DeletePrivateNatGateway(const Model::DeletePrivateNatGatewayRequest &request);
                void DeletePrivateNatGatewayAsync(const Model::DeletePrivateNatGatewayRequest& request, const DeletePrivateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateNatGatewayOutcomeCallable DeletePrivateNatGatewayCallable(const Model::DeletePrivateNatGatewayRequest& request);

                /**
                 *本接口（DeletePrivateNatGatewayDestinationIpPortTranslationNatRule）用于删除私网NAT网关目的端口转换规则
                 * @param req DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome DeletePrivateNatGatewayDestinationIpPortTranslationNatRule(const Model::DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::DeletePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *本接口（DeletePrivateNatGatewayTranslationAclRule）用于删除私网NAT网关源端转换访问控制规则
                 * @param req DeletePrivateNatGatewayTranslationAclRuleRequest
                 * @return DeletePrivateNatGatewayTranslationAclRuleOutcome
                 */
                DeletePrivateNatGatewayTranslationAclRuleOutcome DeletePrivateNatGatewayTranslationAclRule(const Model::DeletePrivateNatGatewayTranslationAclRuleRequest &request);
                void DeletePrivateNatGatewayTranslationAclRuleAsync(const Model::DeletePrivateNatGatewayTranslationAclRuleRequest& request, const DeletePrivateNatGatewayTranslationAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateNatGatewayTranslationAclRuleOutcomeCallable DeletePrivateNatGatewayTranslationAclRuleCallable(const Model::DeletePrivateNatGatewayTranslationAclRuleRequest& request);

                /**
                 *本接口（DeletePrivateNatGatewayTranslationNatRule）用于删除私网NAT网关源端转换规则
                 * @param req DeletePrivateNatGatewayTranslationNatRuleRequest
                 * @return DeletePrivateNatGatewayTranslationNatRuleOutcome
                 */
                DeletePrivateNatGatewayTranslationNatRuleOutcome DeletePrivateNatGatewayTranslationNatRule(const Model::DeletePrivateNatGatewayTranslationNatRuleRequest &request);
                void DeletePrivateNatGatewayTranslationNatRuleAsync(const Model::DeletePrivateNatGatewayTranslationNatRuleRequest& request, const DeletePrivateNatGatewayTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateNatGatewayTranslationNatRuleOutcomeCallable DeletePrivateNatGatewayTranslationNatRuleCallable(const Model::DeletePrivateNatGatewayTranslationNatRuleRequest& request);

                /**
                 *删除内网保留IP
                 * @param req DeleteReserveIpAddressesRequest
                 * @return DeleteReserveIpAddressesOutcome
                 */
                DeleteReserveIpAddressesOutcome DeleteReserveIpAddresses(const Model::DeleteReserveIpAddressesRequest &request);
                void DeleteReserveIpAddressesAsync(const Model::DeleteReserveIpAddressesRequest& request, const DeleteReserveIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReserveIpAddressesOutcomeCallable DeleteReserveIpAddressesCallable(const Model::DeleteReserveIpAddressesRequest& request);

                /**
                 *本接口（DeleteRoutePolicy）用于删除路由接收策略和条目。
                 * @param req DeleteRoutePolicyRequest
                 * @return DeleteRoutePolicyOutcome
                 */
                DeleteRoutePolicyOutcome DeleteRoutePolicy(const Model::DeleteRoutePolicyRequest &request);
                void DeleteRoutePolicyAsync(const Model::DeleteRoutePolicyRequest& request, const DeleteRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoutePolicyOutcomeCallable DeleteRoutePolicyCallable(const Model::DeleteRoutePolicyRequest& request);

                /**
                 *本接口(DeleteRoutePolicyAssociations)用于删除路由接收策略绑定（路由接收策略对象和路由表的绑定关系）。
                 * @param req DeleteRoutePolicyAssociationsRequest
                 * @return DeleteRoutePolicyAssociationsOutcome
                 */
                DeleteRoutePolicyAssociationsOutcome DeleteRoutePolicyAssociations(const Model::DeleteRoutePolicyAssociationsRequest &request);
                void DeleteRoutePolicyAssociationsAsync(const Model::DeleteRoutePolicyAssociationsRequest& request, const DeleteRoutePolicyAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoutePolicyAssociationsOutcomeCallable DeleteRoutePolicyAssociationsCallable(const Model::DeleteRoutePolicyAssociationsRequest& request);

                /**
                 *本接口(DeleteRoutePolicyEntries)用于删除路由接收策略条目。
                 * @param req DeleteRoutePolicyEntriesRequest
                 * @return DeleteRoutePolicyEntriesOutcome
                 */
                DeleteRoutePolicyEntriesOutcome DeleteRoutePolicyEntries(const Model::DeleteRoutePolicyEntriesRequest &request);
                void DeleteRoutePolicyEntriesAsync(const Model::DeleteRoutePolicyEntriesRequest& request, const DeleteRoutePolicyEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoutePolicyEntriesOutcomeCallable DeleteRoutePolicyEntriesCallable(const Model::DeleteRoutePolicyEntriesRequest& request);

                /**
                 *本接口（DeleteRouteTable）用于删除路由表。
                 * @param req DeleteRouteTableRequest
                 * @return DeleteRouteTableOutcome
                 */
                DeleteRouteTableOutcome DeleteRouteTable(const Model::DeleteRouteTableRequest &request);
                void DeleteRouteTableAsync(const Model::DeleteRouteTableRequest& request, const DeleteRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRouteTableOutcomeCallable DeleteRouteTableCallable(const Model::DeleteRouteTableRequest& request);

                /**
                 *本接口(DeleteRoutes)用于对某个路由表批量删除路由策略（Route）。
                 * @param req DeleteRoutesRequest
                 * @return DeleteRoutesOutcome
                 */
                DeleteRoutesOutcome DeleteRoutes(const Model::DeleteRoutesRequest &request);
                void DeleteRoutesAsync(const Model::DeleteRoutesRequest& request, const DeleteRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoutesOutcomeCallable DeleteRoutesCallable(const Model::DeleteRoutesRequest& request);

                /**
                 *本接口（DeleteSecurityGroup）用于删除安全组（SecurityGroup）。
* 只有当前账号下的安全组允许被删除。
* 安全组实例ID如果在其他安全组的规则中被引用，则无法直接删除。这种情况下，需要先进行规则修改，再删除安全组。
* 删除的安全组无法再找回，请谨慎调用。
                 * @param req DeleteSecurityGroupRequest
                 * @return DeleteSecurityGroupOutcome
                 */
                DeleteSecurityGroupOutcome DeleteSecurityGroup(const Model::DeleteSecurityGroupRequest &request);
                void DeleteSecurityGroupAsync(const Model::DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupOutcomeCallable DeleteSecurityGroupCallable(const Model::DeleteSecurityGroupRequest& request);

                /**
                 *本接口（DeleteSecurityGroupPolicies）用于删除安全组规则（SecurityGroupPolicy）。
* SecurityGroupPolicySet.Version 用于指定要操作的安全组的版本。传入 Version 版本号若不等于当前安全组的最新版本，将返回失败；若不传 Version 则直接删除指定PolicyIndex的规则。
                 * @param req DeleteSecurityGroupPoliciesRequest
                 * @return DeleteSecurityGroupPoliciesOutcome
                 */
                DeleteSecurityGroupPoliciesOutcome DeleteSecurityGroupPolicies(const Model::DeleteSecurityGroupPoliciesRequest &request);
                void DeleteSecurityGroupPoliciesAsync(const Model::DeleteSecurityGroupPoliciesRequest& request, const DeleteSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupPoliciesOutcomeCallable DeleteSecurityGroupPoliciesCallable(const Model::DeleteSecurityGroupPoliciesRequest& request);

                /**
                 *本接口（DeleteServiceTemplate）用于删除协议端口模板。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req DeleteServiceTemplateRequest
                 * @return DeleteServiceTemplateOutcome
                 */
                DeleteServiceTemplateOutcome DeleteServiceTemplate(const Model::DeleteServiceTemplateRequest &request);
                void DeleteServiceTemplateAsync(const Model::DeleteServiceTemplateRequest& request, const DeleteServiceTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceTemplateOutcomeCallable DeleteServiceTemplateCallable(const Model::DeleteServiceTemplateRequest& request);

                /**
                 *本接口（DeleteServiceTemplateGroup）用于删除协议端口模板集合。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req DeleteServiceTemplateGroupRequest
                 * @return DeleteServiceTemplateGroupOutcome
                 */
                DeleteServiceTemplateGroupOutcome DeleteServiceTemplateGroup(const Model::DeleteServiceTemplateGroupRequest &request);
                void DeleteServiceTemplateGroupAsync(const Model::DeleteServiceTemplateGroupRequest& request, const DeleteServiceTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceTemplateGroupOutcomeCallable DeleteServiceTemplateGroupCallable(const Model::DeleteServiceTemplateGroupRequest& request);

                /**
                 *本接口（DeleteSnapshotPolicies）用于删除快照策略。
                 * @param req DeleteSnapshotPoliciesRequest
                 * @return DeleteSnapshotPoliciesOutcome
                 */
                DeleteSnapshotPoliciesOutcome DeleteSnapshotPolicies(const Model::DeleteSnapshotPoliciesRequest &request);
                void DeleteSnapshotPoliciesAsync(const Model::DeleteSnapshotPoliciesRequest& request, const DeleteSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotPoliciesOutcomeCallable DeleteSnapshotPoliciesCallable(const Model::DeleteSnapshotPoliciesRequest& request);

                /**
                 *本接口（DeleteSubnet）用于删除子网（Subnet）。
* 删除子网前，请清理该子网下所有资源，包括云服务器、负载均衡、云数据、NoSQL、弹性网卡等资源。
                 * @param req DeleteSubnetRequest
                 * @return DeleteSubnetOutcome
                 */
                DeleteSubnetOutcome DeleteSubnet(const Model::DeleteSubnetRequest &request);
                void DeleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubnetOutcomeCallable DeleteSubnetCallable(const Model::DeleteSubnetRequest& request);

                /**
                 *删除模板对象中的IP地址、协议端口、IP地址组、协议端口组。
                 * @param req DeleteTemplateMemberRequest
                 * @return DeleteTemplateMemberOutcome
                 */
                DeleteTemplateMemberOutcome DeleteTemplateMember(const Model::DeleteTemplateMemberRequest &request);
                void DeleteTemplateMemberAsync(const Model::DeleteTemplateMemberRequest& request, const DeleteTemplateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTemplateMemberOutcomeCallable DeleteTemplateMemberCallable(const Model::DeleteTemplateMemberRequest& request);

                /**
                 *本接口（DeleteTrafficMirror）用于删除流量镜像实例。
                 * @param req DeleteTrafficMirrorRequest
                 * @return DeleteTrafficMirrorOutcome
                 */
                DeleteTrafficMirrorOutcome DeleteTrafficMirror(const Model::DeleteTrafficMirrorRequest &request);
                void DeleteTrafficMirrorAsync(const Model::DeleteTrafficMirrorRequest& request, const DeleteTrafficMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTrafficMirrorOutcomeCallable DeleteTrafficMirrorCallable(const Model::DeleteTrafficMirrorRequest& request);

                /**
                 *删除共享带宽包（仅非活动状态的流量包可删除）。
                 * @param req DeleteTrafficPackagesRequest
                 * @return DeleteTrafficPackagesOutcome
                 */
                DeleteTrafficPackagesOutcome DeleteTrafficPackages(const Model::DeleteTrafficPackagesRequest &request);
                void DeleteTrafficPackagesAsync(const Model::DeleteTrafficPackagesRequest& request, const DeleteTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTrafficPackagesOutcomeCallable DeleteTrafficPackagesCallable(const Model::DeleteTrafficPackagesRequest& request);

                /**
                 *本接口（DeleteVpc）用于删除私有网络。
* 删除前请确保 VPC 内已经没有相关资源，例如云服务器、云数据库、NoSQL、VPN网关、专线网关、负载均衡、对等连接、与之互通的基础网络设备等。
* 删除私有网络是不可逆的操作，请谨慎处理。
                 * @param req DeleteVpcRequest
                 * @return DeleteVpcOutcome
                 */
                DeleteVpcOutcome DeleteVpc(const Model::DeleteVpcRequest &request);
                void DeleteVpcAsync(const Model::DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcOutcomeCallable DeleteVpcCallable(const Model::DeleteVpcRequest& request);

                /**
                 *本接口（DeleteVpcEndPoint）用于删除终端节点。
                 * @param req DeleteVpcEndPointRequest
                 * @return DeleteVpcEndPointOutcome
                 */
                DeleteVpcEndPointOutcome DeleteVpcEndPoint(const Model::DeleteVpcEndPointRequest &request);
                void DeleteVpcEndPointAsync(const Model::DeleteVpcEndPointRequest& request, const DeleteVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcEndPointOutcomeCallable DeleteVpcEndPointCallable(const Model::DeleteVpcEndPointRequest& request);

                /**
                 *本接口（DeleteVpcEndPointService）用于删除终端节点服务。限制：当有终端节点关联到终端节点服务时，无法删除终端节点服务。
                 * @param req DeleteVpcEndPointServiceRequest
                 * @return DeleteVpcEndPointServiceOutcome
                 */
                DeleteVpcEndPointServiceOutcome DeleteVpcEndPointService(const Model::DeleteVpcEndPointServiceRequest &request);
                void DeleteVpcEndPointServiceAsync(const Model::DeleteVpcEndPointServiceRequest& request, const DeleteVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcEndPointServiceOutcomeCallable DeleteVpcEndPointServiceCallable(const Model::DeleteVpcEndPointServiceRequest& request);

                /**
                 *本接口（DeleteVpcEndPointServiceWhiteList）用于删除终端节点服务白名单。
                 * @param req DeleteVpcEndPointServiceWhiteListRequest
                 * @return DeleteVpcEndPointServiceWhiteListOutcome
                 */
                DeleteVpcEndPointServiceWhiteListOutcome DeleteVpcEndPointServiceWhiteList(const Model::DeleteVpcEndPointServiceWhiteListRequest &request);
                void DeleteVpcEndPointServiceWhiteListAsync(const Model::DeleteVpcEndPointServiceWhiteListRequest& request, const DeleteVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcEndPointServiceWhiteListOutcomeCallable DeleteVpcEndPointServiceWhiteListCallable(const Model::DeleteVpcEndPointServiceWhiteListRequest& request);

                /**
                 *本接口（DeleteVpcPeeringConnection）用于删除私有网络对等连接。
                 * @param req DeleteVpcPeeringConnectionRequest
                 * @return DeleteVpcPeeringConnectionOutcome
                 */
                DeleteVpcPeeringConnectionOutcome DeleteVpcPeeringConnection(const Model::DeleteVpcPeeringConnectionRequest &request);
                void DeleteVpcPeeringConnectionAsync(const Model::DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcPeeringConnectionOutcomeCallable DeleteVpcPeeringConnectionCallable(const Model::DeleteVpcPeeringConnectionRequest& request);

                /**
                 *本接口（DeleteVpnConnection）用于删除VPN通道。
>?本接口为异步接口
>
                 * @param req DeleteVpnConnectionRequest
                 * @return DeleteVpnConnectionOutcome
                 */
                DeleteVpnConnectionOutcome DeleteVpnConnection(const Model::DeleteVpnConnectionRequest &request);
                void DeleteVpnConnectionAsync(const Model::DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnConnectionOutcomeCallable DeleteVpnConnectionCallable(const Model::DeleteVpnConnectionRequest& request);

                /**
                 *本接口（DeleteVpnGateway）用于删除VPN网关。
                 * @param req DeleteVpnGatewayRequest
                 * @return DeleteVpnGatewayOutcome
                 */
                DeleteVpnGatewayOutcome DeleteVpnGateway(const Model::DeleteVpnGatewayRequest &request);
                void DeleteVpnGatewayAsync(const Model::DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnGatewayOutcomeCallable DeleteVpnGatewayCallable(const Model::DeleteVpnGatewayRequest& request);

                /**
                 *本接口（DeleteVpnGatewayRoutes）用于删除VPN网关路由
                 * @param req DeleteVpnGatewayRoutesRequest
                 * @return DeleteVpnGatewayRoutesOutcome
                 */
                DeleteVpnGatewayRoutesOutcome DeleteVpnGatewayRoutes(const Model::DeleteVpnGatewayRoutesRequest &request);
                void DeleteVpnGatewayRoutesAsync(const Model::DeleteVpnGatewayRoutesRequest& request, const DeleteVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnGatewayRoutesOutcomeCallable DeleteVpnGatewayRoutesCallable(const Model::DeleteVpnGatewayRoutesRequest& request);

                /**
                 *本接口（DeleteVpnGatewaySslClient）用于删除SSL-VPN-CLIENT。
                 * @param req DeleteVpnGatewaySslClientRequest
                 * @return DeleteVpnGatewaySslClientOutcome
                 */
                DeleteVpnGatewaySslClientOutcome DeleteVpnGatewaySslClient(const Model::DeleteVpnGatewaySslClientRequest &request);
                void DeleteVpnGatewaySslClientAsync(const Model::DeleteVpnGatewaySslClientRequest& request, const DeleteVpnGatewaySslClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnGatewaySslClientOutcomeCallable DeleteVpnGatewaySslClientCallable(const Model::DeleteVpnGatewaySslClientRequest& request);

                /**
                 *删除SSL-VPN-SERVER 实例
                 * @param req DeleteVpnGatewaySslServerRequest
                 * @return DeleteVpnGatewaySslServerOutcome
                 */
                DeleteVpnGatewaySslServerOutcome DeleteVpnGatewaySslServer(const Model::DeleteVpnGatewaySslServerRequest &request);
                void DeleteVpnGatewaySslServerAsync(const Model::DeleteVpnGatewaySslServerRequest& request, const DeleteVpnGatewaySslServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnGatewaySslServerOutcomeCallable DeleteVpnGatewaySslServerCallable(const Model::DeleteVpnGatewaySslServerRequest& request);

                /**
                 *本接口（DescribeAccountAttributes）用于查询用户账号私有属性。
                 * @param req DescribeAccountAttributesRequest
                 * @return DescribeAccountAttributesOutcome
                 */
                DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest &request);
                void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request);

                /**
                 *本接口（DescribeAddressBandwidthRange）用于查询指定EIP的带宽上下限范围。
                 * @param req DescribeAddressBandwidthRangeRequest
                 * @return DescribeAddressBandwidthRangeOutcome
                 */
                DescribeAddressBandwidthRangeOutcome DescribeAddressBandwidthRange(const Model::DescribeAddressBandwidthRangeRequest &request);
                void DescribeAddressBandwidthRangeAsync(const Model::DescribeAddressBandwidthRangeRequest& request, const DescribeAddressBandwidthRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressBandwidthRangeOutcomeCallable DescribeAddressBandwidthRangeCallable(const Model::DescribeAddressBandwidthRangeRequest& request);

                /**
                 *本接口 (DescribeAddressQuota) 用于查询您账户的[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）在当前地域的配额信息。配额详情可参见 [EIP 产品简介](https://cloud.tencent.com/document/product/213/5733)。
                 * @param req DescribeAddressQuotaRequest
                 * @return DescribeAddressQuotaOutcome
                 */
                DescribeAddressQuotaOutcome DescribeAddressQuota(const Model::DescribeAddressQuotaRequest &request);
                void DescribeAddressQuotaAsync(const Model::DescribeAddressQuotaRequest& request, const DescribeAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressQuotaOutcomeCallable DescribeAddressQuotaCallable(const Model::DescribeAddressQuotaRequest& request);

                /**
                 *本接口（DescribeAddressTemplateGroupInstances）用于查询参数模板IP地址组口关联的实例列表。本接口不会返回查询的结果，需要根据返回的RequestId调用DescribeVpcTaskResult接口获取结果。
                 * @param req DescribeAddressTemplateGroupInstancesRequest
                 * @return DescribeAddressTemplateGroupInstancesOutcome
                 */
                DescribeAddressTemplateGroupInstancesOutcome DescribeAddressTemplateGroupInstances(const Model::DescribeAddressTemplateGroupInstancesRequest &request);
                void DescribeAddressTemplateGroupInstancesAsync(const Model::DescribeAddressTemplateGroupInstancesRequest& request, const DescribeAddressTemplateGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressTemplateGroupInstancesOutcomeCallable DescribeAddressTemplateGroupInstancesCallable(const Model::DescribeAddressTemplateGroupInstancesRequest& request);

                /**
                 *本接口（DescribeAddressTemplateGroups）用于查询IP地址模板集合。
                 * @param req DescribeAddressTemplateGroupsRequest
                 * @return DescribeAddressTemplateGroupsOutcome
                 */
                DescribeAddressTemplateGroupsOutcome DescribeAddressTemplateGroups(const Model::DescribeAddressTemplateGroupsRequest &request);
                void DescribeAddressTemplateGroupsAsync(const Model::DescribeAddressTemplateGroupsRequest& request, const DescribeAddressTemplateGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressTemplateGroupsOutcomeCallable DescribeAddressTemplateGroupsCallable(const Model::DescribeAddressTemplateGroupsRequest& request);

                /**
                 *本接口（DescribeAddressTemplateInstances）用于查询参数模板IP地址关联的实例列表。本接口不会返回查询的结果，需要根据返回的RequestId调用DescribeVpcTaskResult接口获取结果。
                 * @param req DescribeAddressTemplateInstancesRequest
                 * @return DescribeAddressTemplateInstancesOutcome
                 */
                DescribeAddressTemplateInstancesOutcome DescribeAddressTemplateInstances(const Model::DescribeAddressTemplateInstancesRequest &request);
                void DescribeAddressTemplateInstancesAsync(const Model::DescribeAddressTemplateInstancesRequest& request, const DescribeAddressTemplateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressTemplateInstancesOutcomeCallable DescribeAddressTemplateInstancesCallable(const Model::DescribeAddressTemplateInstancesRequest& request);

                /**
                 *本接口（DescribeAddressTemplates）用于查询IP地址模板。
                 * @param req DescribeAddressTemplatesRequest
                 * @return DescribeAddressTemplatesOutcome
                 */
                DescribeAddressTemplatesOutcome DescribeAddressTemplates(const Model::DescribeAddressTemplatesRequest &request);
                void DescribeAddressTemplatesAsync(const Model::DescribeAddressTemplatesRequest& request, const DescribeAddressTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressTemplatesOutcomeCallable DescribeAddressTemplatesCallable(const Model::DescribeAddressTemplatesRequest& request);

                /**
                 *本接口 (DescribeAddresses) 用于查询一个或多个[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）的详细信息。
* 如果参数为空，返回当前用户一定数量（Limit所指定的数量，默认为20）的 EIP。
                 * @param req DescribeAddressesRequest
                 * @return DescribeAddressesOutcome
                 */
                DescribeAddressesOutcome DescribeAddresses(const Model::DescribeAddressesRequest &request);
                void DescribeAddressesAsync(const Model::DescribeAddressesRequest& request, const DescribeAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressesOutcomeCallable DescribeAddressesCallable(const Model::DescribeAddressesRequest& request);

                /**
                 *本接口（DescribeAssistantCidr）用于查询辅助CIDR列表。
                 * @param req DescribeAssistantCidrRequest
                 * @return DescribeAssistantCidrOutcome
                 */
                DescribeAssistantCidrOutcome DescribeAssistantCidr(const Model::DescribeAssistantCidrRequest &request);
                void DescribeAssistantCidrAsync(const Model::DescribeAssistantCidrRequest& request, const DescribeAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssistantCidrOutcomeCallable DescribeAssistantCidrCallable(const Model::DescribeAssistantCidrRequest& request);

                /**
                 *查询指定带宽包的带宽上下限范围
                 * @param req DescribeBandwidthPackageBandwidthRangeRequest
                 * @return DescribeBandwidthPackageBandwidthRangeOutcome
                 */
                DescribeBandwidthPackageBandwidthRangeOutcome DescribeBandwidthPackageBandwidthRange(const Model::DescribeBandwidthPackageBandwidthRangeRequest &request);
                void DescribeBandwidthPackageBandwidthRangeAsync(const Model::DescribeBandwidthPackageBandwidthRangeRequest& request, const DescribeBandwidthPackageBandwidthRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthPackageBandwidthRangeOutcomeCallable DescribeBandwidthPackageBandwidthRangeCallable(const Model::DescribeBandwidthPackageBandwidthRangeRequest& request);

                /**
                 *本接口 (DescribeBandwidthPackageBillUsage) 用于查询后付费共享带宽包当前的计费用量.
                 * @param req DescribeBandwidthPackageBillUsageRequest
                 * @return DescribeBandwidthPackageBillUsageOutcome
                 */
                DescribeBandwidthPackageBillUsageOutcome DescribeBandwidthPackageBillUsage(const Model::DescribeBandwidthPackageBillUsageRequest &request);
                void DescribeBandwidthPackageBillUsageAsync(const Model::DescribeBandwidthPackageBillUsageRequest& request, const DescribeBandwidthPackageBillUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthPackageBillUsageOutcomeCallable DescribeBandwidthPackageBillUsageCallable(const Model::DescribeBandwidthPackageBillUsageRequest& request);

                /**
                 *接口用于查询账户在当前地域的带宽包上限数量以及使用数量
                 * @param req DescribeBandwidthPackageQuotaRequest
                 * @return DescribeBandwidthPackageQuotaOutcome
                 */
                DescribeBandwidthPackageQuotaOutcome DescribeBandwidthPackageQuota(const Model::DescribeBandwidthPackageQuotaRequest &request);
                void DescribeBandwidthPackageQuotaAsync(const Model::DescribeBandwidthPackageQuotaRequest& request, const DescribeBandwidthPackageQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthPackageQuotaOutcomeCallable DescribeBandwidthPackageQuotaCallable(const Model::DescribeBandwidthPackageQuotaRequest& request);

                /**
                 *本接口 (DescribeBandwidthPackageResources) 用于根据共享带宽包唯一ID查询共享带宽包内的资源列表，支持按条件过滤查询结果和分页查询。
                 * @param req DescribeBandwidthPackageResourcesRequest
                 * @return DescribeBandwidthPackageResourcesOutcome
                 */
                DescribeBandwidthPackageResourcesOutcome DescribeBandwidthPackageResources(const Model::DescribeBandwidthPackageResourcesRequest &request);
                void DescribeBandwidthPackageResourcesAsync(const Model::DescribeBandwidthPackageResourcesRequest& request, const DescribeBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthPackageResourcesOutcomeCallable DescribeBandwidthPackageResourcesCallable(const Model::DescribeBandwidthPackageResourcesRequest& request);

                /**
                 *接口用于查询带宽包详细信息，包括带宽包唯一标识ID，类型，计费模式，名称，资源信息等
                 * @param req DescribeBandwidthPackagesRequest
                 * @return DescribeBandwidthPackagesOutcome
                 */
                DescribeBandwidthPackagesOutcome DescribeBandwidthPackages(const Model::DescribeBandwidthPackagesRequest &request);
                void DescribeBandwidthPackagesAsync(const Model::DescribeBandwidthPackagesRequest& request, const DescribeBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthPackagesOutcomeCallable DescribeBandwidthPackagesCallable(const Model::DescribeBandwidthPackagesRequest& request);

                /**
                 *本接口（DescribeCcnAttachedInstances）用于查询云联网实例下已关联的网络实例。
                 * @param req DescribeCcnAttachedInstancesRequest
                 * @return DescribeCcnAttachedInstancesOutcome
                 */
                DescribeCcnAttachedInstancesOutcome DescribeCcnAttachedInstances(const Model::DescribeCcnAttachedInstancesRequest &request);
                void DescribeCcnAttachedInstancesAsync(const Model::DescribeCcnAttachedInstancesRequest& request, const DescribeCcnAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnAttachedInstancesOutcomeCallable DescribeCcnAttachedInstancesCallable(const Model::DescribeCcnAttachedInstancesRequest& request);

                /**
                 *查询云联网策略路由下一跳
                 * @param req DescribeCcnPolicyBasedRoutingNextHopRequest
                 * @return DescribeCcnPolicyBasedRoutingNextHopOutcome
                 */
                DescribeCcnPolicyBasedRoutingNextHopOutcome DescribeCcnPolicyBasedRoutingNextHop(const Model::DescribeCcnPolicyBasedRoutingNextHopRequest &request);
                void DescribeCcnPolicyBasedRoutingNextHopAsync(const Model::DescribeCcnPolicyBasedRoutingNextHopRequest& request, const DescribeCcnPolicyBasedRoutingNextHopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnPolicyBasedRoutingNextHopOutcomeCallable DescribeCcnPolicyBasedRoutingNextHopCallable(const Model::DescribeCcnPolicyBasedRoutingNextHopRequest& request);

                /**
                 *查询云联网策略路由匹配规则
                 * @param req DescribeCcnPolicyBasedRoutingRuleRequest
                 * @return DescribeCcnPolicyBasedRoutingRuleOutcome
                 */
                DescribeCcnPolicyBasedRoutingRuleOutcome DescribeCcnPolicyBasedRoutingRule(const Model::DescribeCcnPolicyBasedRoutingRuleRequest &request);
                void DescribeCcnPolicyBasedRoutingRuleAsync(const Model::DescribeCcnPolicyBasedRoutingRuleRequest& request, const DescribeCcnPolicyBasedRoutingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnPolicyBasedRoutingRuleOutcomeCallable DescribeCcnPolicyBasedRoutingRuleCallable(const Model::DescribeCcnPolicyBasedRoutingRuleRequest& request);

                /**
                 *本接口（DescribeCcnRegionBandwidthLimits）用于查询云联网各地域出带宽上限，该接口只返回已关联网络实例包含的地域。
                 * @param req DescribeCcnRegionBandwidthLimitsRequest
                 * @return DescribeCcnRegionBandwidthLimitsOutcome
                 */
                DescribeCcnRegionBandwidthLimitsOutcome DescribeCcnRegionBandwidthLimits(const Model::DescribeCcnRegionBandwidthLimitsRequest &request);
                void DescribeCcnRegionBandwidthLimitsAsync(const Model::DescribeCcnRegionBandwidthLimitsRequest& request, const DescribeCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnRegionBandwidthLimitsOutcomeCallable DescribeCcnRegionBandwidthLimitsCallable(const Model::DescribeCcnRegionBandwidthLimitsRequest& request);

                /**
                 *本接口(DescribeCcnRouteTableBroadcastPolicys)用于查询指定云联网路由表的路由传播策略。
                 * @param req DescribeCcnRouteTableBroadcastPolicysRequest
                 * @return DescribeCcnRouteTableBroadcastPolicysOutcome
                 */
                DescribeCcnRouteTableBroadcastPolicysOutcome DescribeCcnRouteTableBroadcastPolicys(const Model::DescribeCcnRouteTableBroadcastPolicysRequest &request);
                void DescribeCcnRouteTableBroadcastPolicysAsync(const Model::DescribeCcnRouteTableBroadcastPolicysRequest& request, const DescribeCcnRouteTableBroadcastPolicysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnRouteTableBroadcastPolicysOutcomeCallable DescribeCcnRouteTableBroadcastPolicysCallable(const Model::DescribeCcnRouteTableBroadcastPolicysRequest& request);

                /**
                 *本接口(DescribeCcnRouteTableInputPolicys)用于查询指定云联网路由表的路由接收策略。
                 * @param req DescribeCcnRouteTableInputPolicysRequest
                 * @return DescribeCcnRouteTableInputPolicysOutcome
                 */
                DescribeCcnRouteTableInputPolicysOutcome DescribeCcnRouteTableInputPolicys(const Model::DescribeCcnRouteTableInputPolicysRequest &request);
                void DescribeCcnRouteTableInputPolicysAsync(const Model::DescribeCcnRouteTableInputPolicysRequest& request, const DescribeCcnRouteTableInputPolicysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnRouteTableInputPolicysOutcomeCallable DescribeCcnRouteTableInputPolicysCallable(const Model::DescribeCcnRouteTableInputPolicysRequest& request);

                /**
                 *该接口用于查询指定的云联网实例的路由表信息。
                 * @param req DescribeCcnRouteTablesRequest
                 * @return DescribeCcnRouteTablesOutcome
                 */
                DescribeCcnRouteTablesOutcome DescribeCcnRouteTables(const Model::DescribeCcnRouteTablesRequest &request);
                void DescribeCcnRouteTablesAsync(const Model::DescribeCcnRouteTablesRequest& request, const DescribeCcnRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnRouteTablesOutcomeCallable DescribeCcnRouteTablesCallable(const Model::DescribeCcnRouteTablesRequest& request);

                /**
                 *本接口（DescribeCcnRoutes）用于查询已加入云联网（CCN）的路由。
                 * @param req DescribeCcnRoutesRequest
                 * @return DescribeCcnRoutesOutcome
                 */
                DescribeCcnRoutesOutcome DescribeCcnRoutes(const Model::DescribeCcnRoutesRequest &request);
                void DescribeCcnRoutesAsync(const Model::DescribeCcnRoutesRequest& request, const DescribeCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnRoutesOutcomeCallable DescribeCcnRoutesCallable(const Model::DescribeCcnRoutesRequest& request);

                /**
                 *本接口（DescribeCcns）用于查询云联网（CCN）列表。
                 * @param req DescribeCcnsRequest
                 * @return DescribeCcnsOutcome
                 */
                DescribeCcnsOutcome DescribeCcns(const Model::DescribeCcnsRequest &request);
                void DescribeCcnsAsync(const Model::DescribeCcnsRequest& request, const DescribeCcnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnsOutcomeCallable DescribeCcnsCallable(const Model::DescribeCcnsRequest& request);

                /**
                 *查询 IDC通道信息
                 * @param req DescribeCdcLDCXListRequest
                 * @return DescribeCdcLDCXListOutcome
                 */
                DescribeCdcLDCXListOutcome DescribeCdcLDCXList(const Model::DescribeCdcLDCXListRequest &request);
                void DescribeCdcLDCXListAsync(const Model::DescribeCdcLDCXListRequest& request, const DescribeCdcLDCXListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdcLDCXListOutcomeCallable DescribeCdcLDCXListCallable(const Model::DescribeCdcLDCXListRequest& request);

                /**
                 *查询虚拟连接
                 * @param req DescribeCdcNetPlanesRequest
                 * @return DescribeCdcNetPlanesOutcome
                 */
                DescribeCdcNetPlanesOutcome DescribeCdcNetPlanes(const Model::DescribeCdcNetPlanesRequest &request);
                void DescribeCdcNetPlanesAsync(const Model::DescribeCdcNetPlanesRequest& request, const DescribeCdcNetPlanesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdcNetPlanesOutcomeCallable DescribeCdcNetPlanesCallable(const Model::DescribeCdcNetPlanesRequest& request);

                /**
                 *查询IDC使用的 VLAN
                 * @param req DescribeCdcUsedIdcVlanRequest
                 * @return DescribeCdcUsedIdcVlanOutcome
                 */
                DescribeCdcUsedIdcVlanOutcome DescribeCdcUsedIdcVlan(const Model::DescribeCdcUsedIdcVlanRequest &request);
                void DescribeCdcUsedIdcVlanAsync(const Model::DescribeCdcUsedIdcVlanRequest& request, const DescribeCdcUsedIdcVlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdcUsedIdcVlanOutcomeCallable DescribeCdcUsedIdcVlanCallable(const Model::DescribeCdcUsedIdcVlanRequest& request);

                /**
                 *本接口（DescribeClassicLinkInstances）用于查询私有网络和基础网络设备互通列表。
                 * @param req DescribeClassicLinkInstancesRequest
                 * @return DescribeClassicLinkInstancesOutcome
                 */
                DescribeClassicLinkInstancesOutcome DescribeClassicLinkInstances(const Model::DescribeClassicLinkInstancesRequest &request);
                void DescribeClassicLinkInstancesAsync(const Model::DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicLinkInstancesOutcomeCallable DescribeClassicLinkInstancesCallable(const Model::DescribeClassicLinkInstancesRequest& request);

                /**
                 *本接口（DescribeCrossBorderCcnRegionBandwidthLimits）用于获取要锁定的限速实例列表。
该接口一般用来封禁地域间限速的云联网实例下的限速实例, 目前联通内部运营系统通过云API调用, 如果是出口限速, 一般使用更粗的云联网实例粒度封禁（DescribeTenantCcns）
如有需要, 可以封禁任意限速实例, 可接入到内部运营系统
                 * @param req DescribeCrossBorderCcnRegionBandwidthLimitsRequest
                 * @return DescribeCrossBorderCcnRegionBandwidthLimitsOutcome
                 */
                DescribeCrossBorderCcnRegionBandwidthLimitsOutcome DescribeCrossBorderCcnRegionBandwidthLimits(const Model::DescribeCrossBorderCcnRegionBandwidthLimitsRequest &request);
                void DescribeCrossBorderCcnRegionBandwidthLimitsAsync(const Model::DescribeCrossBorderCcnRegionBandwidthLimitsRequest& request, const DescribeCrossBorderCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossBorderCcnRegionBandwidthLimitsOutcomeCallable DescribeCrossBorderCcnRegionBandwidthLimitsCallable(const Model::DescribeCrossBorderCcnRegionBandwidthLimitsRequest& request);

                /**
                 *本接口（DescribeCrossBorderCompliance）用于查询用户创建的合规化资质审批单。
服务商可以查询服务名下的任意 `APPID` 创建的审批单；非服务商，只能查询自己审批单。
                 * @param req DescribeCrossBorderComplianceRequest
                 * @return DescribeCrossBorderComplianceOutcome
                 */
                DescribeCrossBorderComplianceOutcome DescribeCrossBorderCompliance(const Model::DescribeCrossBorderComplianceRequest &request);
                void DescribeCrossBorderComplianceAsync(const Model::DescribeCrossBorderComplianceRequest& request, const DescribeCrossBorderComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossBorderComplianceOutcomeCallable DescribeCrossBorderComplianceCallable(const Model::DescribeCrossBorderComplianceRequest& request);

                /**
                 *本接口（DescribeCrossBorderFlowMonitor）用于查询跨境带宽监控数据，该接口目前只提供给服务商联通使用。
                 * @param req DescribeCrossBorderFlowMonitorRequest
                 * @return DescribeCrossBorderFlowMonitorOutcome
                 */
                DescribeCrossBorderFlowMonitorOutcome DescribeCrossBorderFlowMonitor(const Model::DescribeCrossBorderFlowMonitorRequest &request);
                void DescribeCrossBorderFlowMonitorAsync(const Model::DescribeCrossBorderFlowMonitorRequest& request, const DescribeCrossBorderFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossBorderFlowMonitorOutcomeCallable DescribeCrossBorderFlowMonitorCallable(const Model::DescribeCrossBorderFlowMonitorRequest& request);

                /**
                 *本接口（DescribeCustomerGatewayVendors）用于查询可支持的对端网关厂商信息。
                 * @param req DescribeCustomerGatewayVendorsRequest
                 * @return DescribeCustomerGatewayVendorsOutcome
                 */
                DescribeCustomerGatewayVendorsOutcome DescribeCustomerGatewayVendors(const Model::DescribeCustomerGatewayVendorsRequest &request);
                void DescribeCustomerGatewayVendorsAsync(const Model::DescribeCustomerGatewayVendorsRequest& request, const DescribeCustomerGatewayVendorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerGatewayVendorsOutcomeCallable DescribeCustomerGatewayVendorsCallable(const Model::DescribeCustomerGatewayVendorsRequest& request);

                /**
                 *本接口（DescribeCustomerGateways）用于查询对端网关列表。
                 * @param req DescribeCustomerGatewaysRequest
                 * @return DescribeCustomerGatewaysOutcome
                 */
                DescribeCustomerGatewaysOutcome DescribeCustomerGateways(const Model::DescribeCustomerGatewaysRequest &request);
                void DescribeCustomerGatewaysAsync(const Model::DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerGatewaysOutcomeCallable DescribeCustomerGatewaysCallable(const Model::DescribeCustomerGatewaysRequest& request);

                /**
                 *用于查询用户创建带宽包时可指定的可用区信息
                 * @param req DescribeDesignatedZonesRequest
                 * @return DescribeDesignatedZonesOutcome
                 */
                DescribeDesignatedZonesOutcome DescribeDesignatedZones(const Model::DescribeDesignatedZonesRequest &request);
                void DescribeDesignatedZonesAsync(const Model::DescribeDesignatedZonesRequest& request, const DescribeDesignatedZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDesignatedZonesOutcomeCallable DescribeDesignatedZonesCallable(const Model::DescribeDesignatedZonesRequest& request);

                /**
                 *本接口（DescribeDhcpIps）用于查询DhcpIp列表
                 * @param req DescribeDhcpIpsRequest
                 * @return DescribeDhcpIpsOutcome
                 */
                DescribeDhcpIpsOutcome DescribeDhcpIps(const Model::DescribeDhcpIpsRequest &request);
                void DescribeDhcpIpsAsync(const Model::DescribeDhcpIpsRequest& request, const DescribeDhcpIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDhcpIpsOutcomeCallable DescribeDhcpIpsCallable(const Model::DescribeDhcpIpsRequest& request);

                /**
                 *本接口（DescribeDirectConnectGatewayCcnRoutes）用于查询专线网关的云联网路由（IDC网段）
                 * @param req DescribeDirectConnectGatewayCcnRoutesRequest
                 * @return DescribeDirectConnectGatewayCcnRoutesOutcome
                 */
                DescribeDirectConnectGatewayCcnRoutesOutcome DescribeDirectConnectGatewayCcnRoutes(const Model::DescribeDirectConnectGatewayCcnRoutesRequest &request);
                void DescribeDirectConnectGatewayCcnRoutesAsync(const Model::DescribeDirectConnectGatewayCcnRoutesRequest& request, const DescribeDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectGatewayCcnRoutesOutcomeCallable DescribeDirectConnectGatewayCcnRoutesCallable(const Model::DescribeDirectConnectGatewayCcnRoutesRequest& request);

                /**
                 *本接口（DescribeDirectConnectGateways）用于查询专线网关。
                 * @param req DescribeDirectConnectGatewaysRequest
                 * @return DescribeDirectConnectGatewaysOutcome
                 */
                DescribeDirectConnectGatewaysOutcome DescribeDirectConnectGateways(const Model::DescribeDirectConnectGatewaysRequest &request);
                void DescribeDirectConnectGatewaysAsync(const Model::DescribeDirectConnectGatewaysRequest& request, const DescribeDirectConnectGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectGatewaysOutcomeCallable DescribeDirectConnectGatewaysCallable(const Model::DescribeDirectConnectGatewaysRequest& request);

                /**
                 *本接口（DescribeFlowLog）用于查询VPC流日志实例信息。
该接口只支持VPC流日志（即将下线）。云联网以及VPC流日志，通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取。
                 * @param req DescribeFlowLogRequest
                 * @return DescribeFlowLogOutcome
                 */
                DescribeFlowLogOutcome DescribeFlowLog(const Model::DescribeFlowLogRequest &request);
                void DescribeFlowLogAsync(const Model::DescribeFlowLogRequest& request, const DescribeFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowLogOutcomeCallable DescribeFlowLogCallable(const Model::DescribeFlowLogRequest& request);

                /**
                 *本接口（DescribeFlowLogs）用于查询获取流日志集合。
                 * @param req DescribeFlowLogsRequest
                 * @return DescribeFlowLogsOutcome
                 */
                DescribeFlowLogsOutcome DescribeFlowLogs(const Model::DescribeFlowLogsRequest &request);
                void DescribeFlowLogsAsync(const Model::DescribeFlowLogsRequest& request, const DescribeFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowLogsOutcomeCallable DescribeFlowLogsCallable(const Model::DescribeFlowLogsRequest& request);

                /**
                 *本接口（DescribeGatewayFlowMonitorDetail）用于查询网关流量监控明细。
* 只支持单个网关实例查询。即入参 `VpnId`、 `DirectConnectGatewayId`、 `PeeringConnectionId`、 `NatId` 最多只支持传一个，且必须传一个。
* 如果网关有流量，但调用本接口没有返回数据，请在控制台对应网关详情页确认是否开启网关流量监控。
                 * @param req DescribeGatewayFlowMonitorDetailRequest
                 * @return DescribeGatewayFlowMonitorDetailOutcome
                 */
                DescribeGatewayFlowMonitorDetailOutcome DescribeGatewayFlowMonitorDetail(const Model::DescribeGatewayFlowMonitorDetailRequest &request);
                void DescribeGatewayFlowMonitorDetailAsync(const Model::DescribeGatewayFlowMonitorDetailRequest& request, const DescribeGatewayFlowMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayFlowMonitorDetailOutcomeCallable DescribeGatewayFlowMonitorDetailCallable(const Model::DescribeGatewayFlowMonitorDetailRequest& request);

                /**
                 *本接口（DescribeGatewayFlowQos）用于查询网关来访IP流控带宽。
                 * @param req DescribeGatewayFlowQosRequest
                 * @return DescribeGatewayFlowQosOutcome
                 */
                DescribeGatewayFlowQosOutcome DescribeGatewayFlowQos(const Model::DescribeGatewayFlowQosRequest &request);
                void DescribeGatewayFlowQosAsync(const Model::DescribeGatewayFlowQosRequest& request, const DescribeGatewayFlowQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayFlowQosOutcomeCallable DescribeGatewayFlowQosCallable(const Model::DescribeGatewayFlowQosRequest& request);

                /**
                 *查询全局路由列表。
                 * @param req DescribeGlobalRoutesRequest
                 * @return DescribeGlobalRoutesOutcome
                 */
                DescribeGlobalRoutesOutcome DescribeGlobalRoutes(const Model::DescribeGlobalRoutesRequest &request);
                void DescribeGlobalRoutesAsync(const Model::DescribeGlobalRoutesRequest& request, const DescribeGlobalRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalRoutesOutcomeCallable DescribeGlobalRoutesCallable(const Model::DescribeGlobalRoutesRequest& request);

                /**
                 *本接口（DescribeHaVips）用于查询高可用虚拟IP（HAVIP）列表。
                 * @param req DescribeHaVipsRequest
                 * @return DescribeHaVipsOutcome
                 */
                DescribeHaVipsOutcome DescribeHaVips(const Model::DescribeHaVipsRequest &request);
                void DescribeHaVipsAsync(const Model::DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHaVipsOutcomeCallable DescribeHaVipsCallable(const Model::DescribeHaVipsRequest& request);

                /**
                 *查询高优路由表。
                 * @param req DescribeHighPriorityRouteTablesRequest
                 * @return DescribeHighPriorityRouteTablesOutcome
                 */
                DescribeHighPriorityRouteTablesOutcome DescribeHighPriorityRouteTables(const Model::DescribeHighPriorityRouteTablesRequest &request);
                void DescribeHighPriorityRouteTablesAsync(const Model::DescribeHighPriorityRouteTablesRequest& request, const DescribeHighPriorityRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHighPriorityRouteTablesOutcomeCallable DescribeHighPriorityRouteTablesCallable(const Model::DescribeHighPriorityRouteTablesRequest& request);

                /**
                 *查询高优路由表条目信息。
                 * @param req DescribeHighPriorityRoutesRequest
                 * @return DescribeHighPriorityRoutesOutcome
                 */
                DescribeHighPriorityRoutesOutcome DescribeHighPriorityRoutes(const Model::DescribeHighPriorityRoutesRequest &request);
                void DescribeHighPriorityRoutesAsync(const Model::DescribeHighPriorityRoutesRequest& request, const DescribeHighPriorityRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHighPriorityRoutesOutcomeCallable DescribeHighPriorityRoutesCallable(const Model::DescribeHighPriorityRoutesRequest& request);

                /**
                 *本接口（DescribeIPv6Addresses）用于查询一个或多个弹性公网 IPv6（简称 EIPv6）实例的详细信息。

- 支持查询您在指定地域的弹性公网 IPv6 和传统弹性公网 IPv6 实例信息
- 如果参数为空，返回当前用户一定数量（Limit所指定的数量，默认为20）的 EIPv6。
                 * @param req DescribeIPv6AddressesRequest
                 * @return DescribeIPv6AddressesOutcome
                 */
                DescribeIPv6AddressesOutcome DescribeIPv6Addresses(const Model::DescribeIPv6AddressesRequest &request);
                void DescribeIPv6AddressesAsync(const Model::DescribeIPv6AddressesRequest& request, const DescribeIPv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPv6AddressesOutcomeCallable DescribeIPv6AddressesCallable(const Model::DescribeIPv6AddressesRequest& request);

                /**
                 *本接口用于检查云服务器是否支持巨帧。
使用限制：
1. 需要CAM策略授权该接口的操作权限，并且授权对应实例的读取权限(该接口会访问CVM实例，所以会校验是否有实例的CAM权限)。例如：CAM action放通vpc:DescribeInstanceJumbo；resource放通qcs::cvm:ap-guangzhou:uin/2126195383:instance/*。
2. 实例迁移前后，可能会出现该接口返回的巨帧状态前后不一致（需要检查迁移前后实例所在的宿主机是否都支持巨帧，一种可能的原因为实例迁移到了不支持巨帧的宿主机）。
                 * @param req DescribeInstanceJumboRequest
                 * @return DescribeInstanceJumboOutcome
                 */
                DescribeInstanceJumboOutcome DescribeInstanceJumbo(const Model::DescribeInstanceJumboRequest &request);
                void DescribeInstanceJumboAsync(const Model::DescribeInstanceJumboRequest& request, const DescribeInstanceJumboAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceJumboOutcomeCallable DescribeInstanceJumboCallable(const Model::DescribeInstanceJumboRequest& request);

                /**
                 *本接口（DescribeIp6Addresses）用于查询一个或多个传统弹性公网 IPv6 实例的详细信息。
                 * @param req DescribeIp6AddressesRequest
                 * @return DescribeIp6AddressesOutcome
                 */
                DescribeIp6AddressesOutcome DescribeIp6Addresses(const Model::DescribeIp6AddressesRequest &request);
                void DescribeIp6AddressesAsync(const Model::DescribeIp6AddressesRequest& request, const DescribeIp6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIp6AddressesOutcomeCallable DescribeIp6AddressesCallable(const Model::DescribeIp6AddressesRequest& request);

                /**
                 *查询账户在指定地域IPV6转换实例和规则的配额
                 * @param req DescribeIp6TranslatorQuotaRequest
                 * @return DescribeIp6TranslatorQuotaOutcome
                 */
                DescribeIp6TranslatorQuotaOutcome DescribeIp6TranslatorQuota(const Model::DescribeIp6TranslatorQuotaRequest &request);
                void DescribeIp6TranslatorQuotaAsync(const Model::DescribeIp6TranslatorQuotaRequest& request, const DescribeIp6TranslatorQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIp6TranslatorQuotaOutcomeCallable DescribeIp6TranslatorQuotaCallable(const Model::DescribeIp6TranslatorQuotaRequest& request);

                /**
                 *1. 该接口用于查询账户下的IPV6转换实例及其绑定的转换规则信息
2. 支持过滤查询
                 * @param req DescribeIp6TranslatorsRequest
                 * @return DescribeIp6TranslatorsOutcome
                 */
                DescribeIp6TranslatorsOutcome DescribeIp6Translators(const Model::DescribeIp6TranslatorsRequest &request);
                void DescribeIp6TranslatorsAsync(const Model::DescribeIp6TranslatorsRequest& request, const DescribeIp6TranslatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIp6TranslatorsOutcomeCallable DescribeIp6TranslatorsCallable(const Model::DescribeIp6TranslatorsRequest& request);

                /**
                 *本接口（DescribeIpGeolocationDatabaseUrl）用于获取IP地理位置库下载链接。
<font color="#FF0000">本接口即将下线，仅供存量用户使用，暂停新增用户。</font>
                 * @param req DescribeIpGeolocationDatabaseUrlRequest
                 * @return DescribeIpGeolocationDatabaseUrlOutcome
                 */
                DescribeIpGeolocationDatabaseUrlOutcome DescribeIpGeolocationDatabaseUrl(const Model::DescribeIpGeolocationDatabaseUrlRequest &request);
                void DescribeIpGeolocationDatabaseUrlAsync(const Model::DescribeIpGeolocationDatabaseUrlRequest& request, const DescribeIpGeolocationDatabaseUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpGeolocationDatabaseUrlOutcomeCallable DescribeIpGeolocationDatabaseUrlCallable(const Model::DescribeIpGeolocationDatabaseUrlRequest& request);

                /**
                 *本接口（DescribeIpGeolocationInfos）用于查询IP地址信息，包括地理位置信息和网络信息。
<font color="#FF0000">本接口即将下线，仅供存量客户使用，暂停新增用户。</font>
                 * @param req DescribeIpGeolocationInfosRequest
                 * @return DescribeIpGeolocationInfosOutcome
                 */
                DescribeIpGeolocationInfosOutcome DescribeIpGeolocationInfos(const Model::DescribeIpGeolocationInfosRequest &request);
                void DescribeIpGeolocationInfosAsync(const Model::DescribeIpGeolocationInfosRequest& request, const DescribeIpGeolocationInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpGeolocationInfosOutcomeCallable DescribeIpGeolocationInfosCallable(const Model::DescribeIpGeolocationInfosRequest& request);

                /**
                 *本接口（DescribeLocalGateway）用于查询CDC的本地网关。
                 * @param req DescribeLocalGatewayRequest
                 * @return DescribeLocalGatewayOutcome
                 */
                DescribeLocalGatewayOutcome DescribeLocalGateway(const Model::DescribeLocalGatewayRequest &request);
                void DescribeLocalGatewayAsync(const Model::DescribeLocalGatewayRequest& request, const DescribeLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLocalGatewayOutcomeCallable DescribeLocalGatewayCallable(const Model::DescribeLocalGatewayRequest& request);

                /**
                 *本接口（DescribeNatGatewayDestinationIpPortTranslationNatRules）用于查询NAT网关端口转发规则对象数组。
                 * @param req DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest
                 * @return DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome
                 */
                DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome DescribeNatGatewayDestinationIpPortTranslationNatRules(const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest &request);
                void DescribeNatGatewayDestinationIpPortTranslationNatRulesAsync(const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest& request, const DescribeNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable DescribeNatGatewayDestinationIpPortTranslationNatRulesCallable(const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest& request);

                /**
                 *查询专线绑定NAT的路由
                 * @param req DescribeNatGatewayDirectConnectGatewayRouteRequest
                 * @return DescribeNatGatewayDirectConnectGatewayRouteOutcome
                 */
                DescribeNatGatewayDirectConnectGatewayRouteOutcome DescribeNatGatewayDirectConnectGatewayRoute(const Model::DescribeNatGatewayDirectConnectGatewayRouteRequest &request);
                void DescribeNatGatewayDirectConnectGatewayRouteAsync(const Model::DescribeNatGatewayDirectConnectGatewayRouteRequest& request, const DescribeNatGatewayDirectConnectGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewayDirectConnectGatewayRouteOutcomeCallable DescribeNatGatewayDirectConnectGatewayRouteCallable(const Model::DescribeNatGatewayDirectConnectGatewayRouteRequest& request);

                /**
                 *本接口（DescribeNatGatewayFlowMonitorDetail）用于查询NAT网关流量监控明细。

- 只支持单个网关实例查询。即入参 `NatGatewayId` 最多只支持传一个，且必须传一个。
- 如果网关有流量，但调用本接口没有返回数据，请在控制台对应网关详情页确认是否开启网关流量监控。
                 * @param req DescribeNatGatewayFlowMonitorDetailRequest
                 * @return DescribeNatGatewayFlowMonitorDetailOutcome
                 */
                DescribeNatGatewayFlowMonitorDetailOutcome DescribeNatGatewayFlowMonitorDetail(const Model::DescribeNatGatewayFlowMonitorDetailRequest &request);
                void DescribeNatGatewayFlowMonitorDetailAsync(const Model::DescribeNatGatewayFlowMonitorDetailRequest& request, const DescribeNatGatewayFlowMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewayFlowMonitorDetailOutcomeCallable DescribeNatGatewayFlowMonitorDetailCallable(const Model::DescribeNatGatewayFlowMonitorDetailRequest& request);

                /**
                 *本接口（DescribeNatGatewaySourceIpTranslationNatRules）用于查询NAT网关SNAT转发规则对象数组。
                 * @param req DescribeNatGatewaySourceIpTranslationNatRulesRequest
                 * @return DescribeNatGatewaySourceIpTranslationNatRulesOutcome
                 */
                DescribeNatGatewaySourceIpTranslationNatRulesOutcome DescribeNatGatewaySourceIpTranslationNatRules(const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest &request);
                void DescribeNatGatewaySourceIpTranslationNatRulesAsync(const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest& request, const DescribeNatGatewaySourceIpTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewaySourceIpTranslationNatRulesOutcomeCallable DescribeNatGatewaySourceIpTranslationNatRulesCallable(const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest& request);

                /**
                 *本接口(DescribeNatGatewayZones)用于查询NAT网关可售卖的可用区信息
                 * @param req DescribeNatGatewayZonesRequest
                 * @return DescribeNatGatewayZonesOutcome
                 */
                DescribeNatGatewayZonesOutcome DescribeNatGatewayZones(const Model::DescribeNatGatewayZonesRequest &request);
                void DescribeNatGatewayZonesAsync(const Model::DescribeNatGatewayZonesRequest& request, const DescribeNatGatewayZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewayZonesOutcomeCallable DescribeNatGatewayZonesCallable(const Model::DescribeNatGatewayZonesRequest& request);

                /**
                 *本接口（DescribeNatGateways）用于查询 NAT 网关。
                 * @param req DescribeNatGatewaysRequest
                 * @return DescribeNatGatewaysOutcome
                 */
                DescribeNatGatewaysOutcome DescribeNatGateways(const Model::DescribeNatGatewaysRequest &request);
                void DescribeNatGatewaysAsync(const Model::DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewaysOutcomeCallable DescribeNatGatewaysCallable(const Model::DescribeNatGatewaysRequest& request);

                /**
                 *本接口(DescribeNetDetectStates)用于查询网络探测验证结果列表。
                 * @param req DescribeNetDetectStatesRequest
                 * @return DescribeNetDetectStatesOutcome
                 */
                DescribeNetDetectStatesOutcome DescribeNetDetectStates(const Model::DescribeNetDetectStatesRequest &request);
                void DescribeNetDetectStatesAsync(const Model::DescribeNetDetectStatesRequest& request, const DescribeNetDetectStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetDetectStatesOutcomeCallable DescribeNetDetectStatesCallable(const Model::DescribeNetDetectStatesRequest& request);

                /**
                 *本接口（DescribeNetDetects）用于查询网络探测列表。
                 * @param req DescribeNetDetectsRequest
                 * @return DescribeNetDetectsOutcome
                 */
                DescribeNetDetectsOutcome DescribeNetDetects(const Model::DescribeNetDetectsRequest &request);
                void DescribeNetDetectsAsync(const Model::DescribeNetDetectsRequest& request, const DescribeNetDetectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetDetectsOutcomeCallable DescribeNetDetectsCallable(const Model::DescribeNetDetectsRequest& request);

                /**
                 *判断用户在网络侧的用户类型，如标准（带宽上移），传统（非上移）。
                 * @param req DescribeNetworkAccountTypeRequest
                 * @return DescribeNetworkAccountTypeOutcome
                 */
                DescribeNetworkAccountTypeOutcome DescribeNetworkAccountType(const Model::DescribeNetworkAccountTypeRequest &request);
                void DescribeNetworkAccountTypeAsync(const Model::DescribeNetworkAccountTypeRequest& request, const DescribeNetworkAccountTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkAccountTypeOutcomeCallable DescribeNetworkAccountTypeCallable(const Model::DescribeNetworkAccountTypeRequest& request);

                /**
                 *本接口（DescribeNetworkAclQuintupleEntries）查询入方向或出方向网络ACL五元组条目列表。
                 * @param req DescribeNetworkAclQuintupleEntriesRequest
                 * @return DescribeNetworkAclQuintupleEntriesOutcome
                 */
                DescribeNetworkAclQuintupleEntriesOutcome DescribeNetworkAclQuintupleEntries(const Model::DescribeNetworkAclQuintupleEntriesRequest &request);
                void DescribeNetworkAclQuintupleEntriesAsync(const Model::DescribeNetworkAclQuintupleEntriesRequest& request, const DescribeNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkAclQuintupleEntriesOutcomeCallable DescribeNetworkAclQuintupleEntriesCallable(const Model::DescribeNetworkAclQuintupleEntriesRequest& request);

                /**
                 *本接口（DescribeNetworkAcls）用于查询网络ACL列表。
                 * @param req DescribeNetworkAclsRequest
                 * @return DescribeNetworkAclsOutcome
                 */
                DescribeNetworkAclsOutcome DescribeNetworkAcls(const Model::DescribeNetworkAclsRequest &request);
                void DescribeNetworkAclsAsync(const Model::DescribeNetworkAclsRequest& request, const DescribeNetworkAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkAclsOutcomeCallable DescribeNetworkAclsCallable(const Model::DescribeNetworkAclsRequest& request);

                /**
                 *本接口（DescribeNetworkInterfaceLimit）根据CVM实例ID或弹性网卡ID查询弹性网卡配额，返回该CVM实例或弹性网卡能绑定的弹性网卡配额，以及弹性网卡可以分配的IP配额。
                 * @param req DescribeNetworkInterfaceLimitRequest
                 * @return DescribeNetworkInterfaceLimitOutcome
                 */
                DescribeNetworkInterfaceLimitOutcome DescribeNetworkInterfaceLimit(const Model::DescribeNetworkInterfaceLimitRequest &request);
                void DescribeNetworkInterfaceLimitAsync(const Model::DescribeNetworkInterfaceLimitRequest& request, const DescribeNetworkInterfaceLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkInterfaceLimitOutcomeCallable DescribeNetworkInterfaceLimitCallable(const Model::DescribeNetworkInterfaceLimitRequest& request);

                /**
                 *本接口（DescribeNetworkInterfaces）用于查询弹性网卡列表。
                 * @param req DescribeNetworkInterfacesRequest
                 * @return DescribeNetworkInterfacesOutcome
                 */
                DescribeNetworkInterfacesOutcome DescribeNetworkInterfaces(const Model::DescribeNetworkInterfacesRequest &request);
                void DescribeNetworkInterfacesAsync(const Model::DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkInterfacesOutcomeCallable DescribeNetworkInterfacesCallable(const Model::DescribeNetworkInterfacesRequest& request);

                /**
                 *本接口（DescribePrivateNatGatewayDestinationIpPortTranslationNatRules）用于查询私网NAT网关目的端口转换规则
                 * @param req DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesRequest
                 * @return DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesOutcome
                 */
                DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesOutcome DescribePrivateNatGatewayDestinationIpPortTranslationNatRules(const Model::DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesRequest &request);
                void DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesAsync(const Model::DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesRequest& request, const DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesCallable(const Model::DescribePrivateNatGatewayDestinationIpPortTranslationNatRulesRequest& request);

                /**
                 *本接口（DescribePrivateNatGatewayLimits）用于查询可创建的私网NAT网关配额数量
                 * @param req DescribePrivateNatGatewayLimitsRequest
                 * @return DescribePrivateNatGatewayLimitsOutcome
                 */
                DescribePrivateNatGatewayLimitsOutcome DescribePrivateNatGatewayLimits(const Model::DescribePrivateNatGatewayLimitsRequest &request);
                void DescribePrivateNatGatewayLimitsAsync(const Model::DescribePrivateNatGatewayLimitsRequest& request, const DescribePrivateNatGatewayLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateNatGatewayLimitsOutcomeCallable DescribePrivateNatGatewayLimitsCallable(const Model::DescribePrivateNatGatewayLimitsRequest& request);

                /**
                 *本接口（DescribePrivateNatGatewayRegions）用于查询查询私网NAT网关可支持地域
                 * @param req DescribePrivateNatGatewayRegionsRequest
                 * @return DescribePrivateNatGatewayRegionsOutcome
                 */
                DescribePrivateNatGatewayRegionsOutcome DescribePrivateNatGatewayRegions(const Model::DescribePrivateNatGatewayRegionsRequest &request);
                void DescribePrivateNatGatewayRegionsAsync(const Model::DescribePrivateNatGatewayRegionsRequest& request, const DescribePrivateNatGatewayRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateNatGatewayRegionsOutcomeCallable DescribePrivateNatGatewayRegionsCallable(const Model::DescribePrivateNatGatewayRegionsRequest& request);

                /**
                 *本接口（DescribePrivateNatGatewayTranslationAclRules）用于查询私网NAT网关源端转换访问控制规则
                 * @param req DescribePrivateNatGatewayTranslationAclRulesRequest
                 * @return DescribePrivateNatGatewayTranslationAclRulesOutcome
                 */
                DescribePrivateNatGatewayTranslationAclRulesOutcome DescribePrivateNatGatewayTranslationAclRules(const Model::DescribePrivateNatGatewayTranslationAclRulesRequest &request);
                void DescribePrivateNatGatewayTranslationAclRulesAsync(const Model::DescribePrivateNatGatewayTranslationAclRulesRequest& request, const DescribePrivateNatGatewayTranslationAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateNatGatewayTranslationAclRulesOutcomeCallable DescribePrivateNatGatewayTranslationAclRulesCallable(const Model::DescribePrivateNatGatewayTranslationAclRulesRequest& request);

                /**
                 *本接口（DescribePrivateNatGatewayTranslationNatRules）用于查询私网NAT网关源端转换规则
                 * @param req DescribePrivateNatGatewayTranslationNatRulesRequest
                 * @return DescribePrivateNatGatewayTranslationNatRulesOutcome
                 */
                DescribePrivateNatGatewayTranslationNatRulesOutcome DescribePrivateNatGatewayTranslationNatRules(const Model::DescribePrivateNatGatewayTranslationNatRulesRequest &request);
                void DescribePrivateNatGatewayTranslationNatRulesAsync(const Model::DescribePrivateNatGatewayTranslationNatRulesRequest& request, const DescribePrivateNatGatewayTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateNatGatewayTranslationNatRulesOutcomeCallable DescribePrivateNatGatewayTranslationNatRulesCallable(const Model::DescribePrivateNatGatewayTranslationNatRulesRequest& request);

                /**
                 *本接口（DescribePrivateNatGateways）用于查询私网NAT网关
                 * @param req DescribePrivateNatGatewaysRequest
                 * @return DescribePrivateNatGatewaysOutcome
                 */
                DescribePrivateNatGatewaysOutcome DescribePrivateNatGateways(const Model::DescribePrivateNatGatewaysRequest &request);
                void DescribePrivateNatGatewaysAsync(const Model::DescribePrivateNatGatewaysRequest& request, const DescribePrivateNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateNatGatewaysOutcomeCallable DescribePrivateNatGatewaysCallable(const Model::DescribePrivateNatGatewaysRequest& request);

                /**
                 *本接口（DescribeProductQuota）用于查询网络产品的配额信息。
                 * @param req DescribeProductQuotaRequest
                 * @return DescribeProductQuotaOutcome
                 */
                DescribeProductQuotaOutcome DescribeProductQuota(const Model::DescribeProductQuotaRequest &request);
                void DescribeProductQuotaAsync(const Model::DescribeProductQuotaRequest& request, const DescribeProductQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductQuotaOutcomeCallable DescribeProductQuotaCallable(const Model::DescribeProductQuotaRequest& request);

                /**
                 *查询内网保留 IP
                 * @param req DescribeReserveIpAddressesRequest
                 * @return DescribeReserveIpAddressesOutcome
                 */
                DescribeReserveIpAddressesOutcome DescribeReserveIpAddresses(const Model::DescribeReserveIpAddressesRequest &request);
                void DescribeReserveIpAddressesAsync(const Model::DescribeReserveIpAddressesRequest& request, const DescribeReserveIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReserveIpAddressesOutcomeCallable DescribeReserveIpAddressesCallable(const Model::DescribeReserveIpAddressesRequest& request);

                /**
                 *本接口（DescribeRouteConflicts）用于查询自定义路由策略与云联网路由策略冲突列表。
                 * @param req DescribeRouteConflictsRequest
                 * @return DescribeRouteConflictsOutcome
                 */
                DescribeRouteConflictsOutcome DescribeRouteConflicts(const Model::DescribeRouteConflictsRequest &request);
                void DescribeRouteConflictsAsync(const Model::DescribeRouteConflictsRequest& request, const DescribeRouteConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteConflictsOutcomeCallable DescribeRouteConflictsCallable(const Model::DescribeRouteConflictsRequest& request);

                /**
                 *本接口（DescribeRouteList）用于查询路由条目列表。
                 * @param req DescribeRouteListRequest
                 * @return DescribeRouteListOutcome
                 */
                DescribeRouteListOutcome DescribeRouteList(const Model::DescribeRouteListRequest &request);
                void DescribeRouteListAsync(const Model::DescribeRouteListRequest& request, const DescribeRouteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteListOutcomeCallable DescribeRouteListCallable(const Model::DescribeRouteListRequest& request);

                /**
                 *本接口（DescribeRoutePolicies）用于查询路由策略列表。
                 * @param req DescribeRoutePoliciesRequest
                 * @return DescribeRoutePoliciesOutcome
                 */
                DescribeRoutePoliciesOutcome DescribeRoutePolicies(const Model::DescribeRoutePoliciesRequest &request);
                void DescribeRoutePoliciesAsync(const Model::DescribeRoutePoliciesRequest& request, const DescribeRoutePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoutePoliciesOutcomeCallable DescribeRoutePoliciesCallable(const Model::DescribeRoutePoliciesRequest& request);

                /**
                 *本接口（DescribeRoutePolicyEntries）用于查询路由接收策略条目列表。
                 * @param req DescribeRoutePolicyEntriesRequest
                 * @return DescribeRoutePolicyEntriesOutcome
                 */
                DescribeRoutePolicyEntriesOutcome DescribeRoutePolicyEntries(const Model::DescribeRoutePolicyEntriesRequest &request);
                void DescribeRoutePolicyEntriesAsync(const Model::DescribeRoutePolicyEntriesRequest& request, const DescribeRoutePolicyEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoutePolicyEntriesOutcomeCallable DescribeRoutePolicyEntriesCallable(const Model::DescribeRoutePolicyEntriesRequest& request);

                /**
                 *本接口（DescribeRouteTableAssociatedInstances）用于查询指定的云联网关联的实例所绑定的路由表信息。
                 * @param req DescribeRouteTableAssociatedInstancesRequest
                 * @return DescribeRouteTableAssociatedInstancesOutcome
                 */
                DescribeRouteTableAssociatedInstancesOutcome DescribeRouteTableAssociatedInstances(const Model::DescribeRouteTableAssociatedInstancesRequest &request);
                void DescribeRouteTableAssociatedInstancesAsync(const Model::DescribeRouteTableAssociatedInstancesRequest& request, const DescribeRouteTableAssociatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTableAssociatedInstancesOutcomeCallable DescribeRouteTableAssociatedInstancesCallable(const Model::DescribeRouteTableAssociatedInstancesRequest& request);

                /**
                 *本接口（DescribeRouteTableSelectionPolicies）用于查询云联网路由表选择策略。
                 * @param req DescribeRouteTableSelectionPoliciesRequest
                 * @return DescribeRouteTableSelectionPoliciesOutcome
                 */
                DescribeRouteTableSelectionPoliciesOutcome DescribeRouteTableSelectionPolicies(const Model::DescribeRouteTableSelectionPoliciesRequest &request);
                void DescribeRouteTableSelectionPoliciesAsync(const Model::DescribeRouteTableSelectionPoliciesRequest& request, const DescribeRouteTableSelectionPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTableSelectionPoliciesOutcomeCallable DescribeRouteTableSelectionPoliciesCallable(const Model::DescribeRouteTableSelectionPoliciesRequest& request);

                /**
                 *本接口（DescribeRouteTables）用于查询路由表。
                 * @param req DescribeRouteTablesRequest
                 * @return DescribeRouteTablesOutcome
                 */
                DescribeRouteTablesOutcome DescribeRouteTables(const Model::DescribeRouteTablesRequest &request);
                void DescribeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTablesOutcomeCallable DescribeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request);

                /**
                 *本接口（DescribeRoutes）用于查询路由列表。
                 * @param req DescribeRoutesRequest
                 * @return DescribeRoutesOutcome
                 */
                DescribeRoutesOutcome DescribeRoutes(const Model::DescribeRoutesRequest &request);
                void DescribeRoutesAsync(const Model::DescribeRoutesRequest& request, const DescribeRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoutesOutcomeCallable DescribeRoutesCallable(const Model::DescribeRoutesRequest& request);

                /**
                 *本接口（DescribeSecurityGroupAssociationStatistics）用于查询安全组关联的实例统计。
                 * @param req DescribeSecurityGroupAssociationStatisticsRequest
                 * @return DescribeSecurityGroupAssociationStatisticsOutcome
                 */
                DescribeSecurityGroupAssociationStatisticsOutcome DescribeSecurityGroupAssociationStatistics(const Model::DescribeSecurityGroupAssociationStatisticsRequest &request);
                void DescribeSecurityGroupAssociationStatisticsAsync(const Model::DescribeSecurityGroupAssociationStatisticsRequest& request, const DescribeSecurityGroupAssociationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupAssociationStatisticsOutcomeCallable DescribeSecurityGroupAssociationStatisticsCallable(const Model::DescribeSecurityGroupAssociationStatisticsRequest& request);

                /**
                 *本接口（DescribeSecurityGroupExpandedPolicies）用于查看参数模板展开后的安全组规则。本接口会通过缓存降低请求后端服务的调用次数，因此拉取结果会存在延迟（缓存超时时间为1分钟）。
                 * @param req DescribeSecurityGroupExpandedPoliciesRequest
                 * @return DescribeSecurityGroupExpandedPoliciesOutcome
                 */
                DescribeSecurityGroupExpandedPoliciesOutcome DescribeSecurityGroupExpandedPolicies(const Model::DescribeSecurityGroupExpandedPoliciesRequest &request);
                void DescribeSecurityGroupExpandedPoliciesAsync(const Model::DescribeSecurityGroupExpandedPoliciesRequest& request, const DescribeSecurityGroupExpandedPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupExpandedPoliciesOutcomeCallable DescribeSecurityGroupExpandedPoliciesCallable(const Model::DescribeSecurityGroupExpandedPoliciesRequest& request);

                /**
                 *本接口(DescribeSecurityGroupLimits)用于查询用户安全组配额。
                 * @param req DescribeSecurityGroupLimitsRequest
                 * @return DescribeSecurityGroupLimitsOutcome
                 */
                DescribeSecurityGroupLimitsOutcome DescribeSecurityGroupLimits(const Model::DescribeSecurityGroupLimitsRequest &request);
                void DescribeSecurityGroupLimitsAsync(const Model::DescribeSecurityGroupLimitsRequest& request, const DescribeSecurityGroupLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupLimitsOutcomeCallable DescribeSecurityGroupLimitsCallable(const Model::DescribeSecurityGroupLimitsRequest& request);

                /**
                 *本接口（DescribeSecurityGroupPolicies）用于查询安全组规则。
                 * @param req DescribeSecurityGroupPoliciesRequest
                 * @return DescribeSecurityGroupPoliciesOutcome
                 */
                DescribeSecurityGroupPoliciesOutcome DescribeSecurityGroupPolicies(const Model::DescribeSecurityGroupPoliciesRequest &request);
                void DescribeSecurityGroupPoliciesAsync(const Model::DescribeSecurityGroupPoliciesRequest& request, const DescribeSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupPoliciesOutcomeCallable DescribeSecurityGroupPoliciesCallable(const Model::DescribeSecurityGroupPoliciesRequest& request);

                /**
                 *本接口（DescribeSecurityGroupReferences）用于查询安全组被引用信息。
                 * @param req DescribeSecurityGroupReferencesRequest
                 * @return DescribeSecurityGroupReferencesOutcome
                 */
                DescribeSecurityGroupReferencesOutcome DescribeSecurityGroupReferences(const Model::DescribeSecurityGroupReferencesRequest &request);
                void DescribeSecurityGroupReferencesAsync(const Model::DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupReferencesOutcomeCallable DescribeSecurityGroupReferencesCallable(const Model::DescribeSecurityGroupReferencesRequest& request);

                /**
                 *本接口（DescribeSecurityGroups）用于查询安全组。
                 * @param req DescribeSecurityGroupsRequest
                 * @return DescribeSecurityGroupsOutcome
                 */
                DescribeSecurityGroupsOutcome DescribeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request);
                void DescribeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupsOutcomeCallable DescribeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeServiceTemplateGroupInstances）用于查询参数模板协议端口组关联的实例列表。本接口不会返回查询的结果，需要根据返回的RequestId调用DescribeVpcTaskResult接口获取结果。
                 * @param req DescribeServiceTemplateGroupInstancesRequest
                 * @return DescribeServiceTemplateGroupInstancesOutcome
                 */
                DescribeServiceTemplateGroupInstancesOutcome DescribeServiceTemplateGroupInstances(const Model::DescribeServiceTemplateGroupInstancesRequest &request);
                void DescribeServiceTemplateGroupInstancesAsync(const Model::DescribeServiceTemplateGroupInstancesRequest& request, const DescribeServiceTemplateGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceTemplateGroupInstancesOutcomeCallable DescribeServiceTemplateGroupInstancesCallable(const Model::DescribeServiceTemplateGroupInstancesRequest& request);

                /**
                 *本接口（DescribeServiceTemplateGroups）用于查询协议端口模板集合。
                 * @param req DescribeServiceTemplateGroupsRequest
                 * @return DescribeServiceTemplateGroupsOutcome
                 */
                DescribeServiceTemplateGroupsOutcome DescribeServiceTemplateGroups(const Model::DescribeServiceTemplateGroupsRequest &request);
                void DescribeServiceTemplateGroupsAsync(const Model::DescribeServiceTemplateGroupsRequest& request, const DescribeServiceTemplateGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceTemplateGroupsOutcomeCallable DescribeServiceTemplateGroupsCallable(const Model::DescribeServiceTemplateGroupsRequest& request);

                /**
                 *本接口（DescribeServiceTemplateInstances）用于查询参数模板协议端口关联的实例列表。本接口不会返回查询的结果，需要根据返回的RequestId调用DescribeVpcTaskResult接口获取结果。
                 * @param req DescribeServiceTemplateInstancesRequest
                 * @return DescribeServiceTemplateInstancesOutcome
                 */
                DescribeServiceTemplateInstancesOutcome DescribeServiceTemplateInstances(const Model::DescribeServiceTemplateInstancesRequest &request);
                void DescribeServiceTemplateInstancesAsync(const Model::DescribeServiceTemplateInstancesRequest& request, const DescribeServiceTemplateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceTemplateInstancesOutcomeCallable DescribeServiceTemplateInstancesCallable(const Model::DescribeServiceTemplateInstancesRequest& request);

                /**
                 *本接口（DescribeServiceTemplates）用于查询协议端口模板。
                 * @param req DescribeServiceTemplatesRequest
                 * @return DescribeServiceTemplatesOutcome
                 */
                DescribeServiceTemplatesOutcome DescribeServiceTemplates(const Model::DescribeServiceTemplatesRequest &request);
                void DescribeServiceTemplatesAsync(const Model::DescribeServiceTemplatesRequest& request, const DescribeServiceTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceTemplatesOutcomeCallable DescribeServiceTemplatesCallable(const Model::DescribeServiceTemplatesRequest& request);

                /**
                 *本接口（DescribeSgSnapshotFileContent）用于查询安全组快照文件内容。
                 * @param req DescribeSgSnapshotFileContentRequest
                 * @return DescribeSgSnapshotFileContentOutcome
                 */
                DescribeSgSnapshotFileContentOutcome DescribeSgSnapshotFileContent(const Model::DescribeSgSnapshotFileContentRequest &request);
                void DescribeSgSnapshotFileContentAsync(const Model::DescribeSgSnapshotFileContentRequest& request, const DescribeSgSnapshotFileContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSgSnapshotFileContentOutcomeCallable DescribeSgSnapshotFileContentCallable(const Model::DescribeSgSnapshotFileContentRequest& request);

                /**
                 *本接口（DescribeSnapshotAttachedInstances）用于查询快照策略关联实例列表。
                 * @param req DescribeSnapshotAttachedInstancesRequest
                 * @return DescribeSnapshotAttachedInstancesOutcome
                 */
                DescribeSnapshotAttachedInstancesOutcome DescribeSnapshotAttachedInstances(const Model::DescribeSnapshotAttachedInstancesRequest &request);
                void DescribeSnapshotAttachedInstancesAsync(const Model::DescribeSnapshotAttachedInstancesRequest& request, const DescribeSnapshotAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotAttachedInstancesOutcomeCallable DescribeSnapshotAttachedInstancesCallable(const Model::DescribeSnapshotAttachedInstancesRequest& request);

                /**
                 *本接口（DescribeSnapshotFiles）用于查询快照文件。
                 * @param req DescribeSnapshotFilesRequest
                 * @return DescribeSnapshotFilesOutcome
                 */
                DescribeSnapshotFilesOutcome DescribeSnapshotFiles(const Model::DescribeSnapshotFilesRequest &request);
                void DescribeSnapshotFilesAsync(const Model::DescribeSnapshotFilesRequest& request, const DescribeSnapshotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotFilesOutcomeCallable DescribeSnapshotFilesCallable(const Model::DescribeSnapshotFilesRequest& request);

                /**
                 *本接口（DescribeSnapshotPolicies）用于查询快照策略。
                 * @param req DescribeSnapshotPoliciesRequest
                 * @return DescribeSnapshotPoliciesOutcome
                 */
                DescribeSnapshotPoliciesOutcome DescribeSnapshotPolicies(const Model::DescribeSnapshotPoliciesRequest &request);
                void DescribeSnapshotPoliciesAsync(const Model::DescribeSnapshotPoliciesRequest& request, const DescribeSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotPoliciesOutcomeCallable DescribeSnapshotPoliciesCallable(const Model::DescribeSnapshotPoliciesRequest& request);

                /**
                 *本接口 (DescribeSpecificTrafficPackageUsedDetails) 用于查询指定 共享流量包 的用量明细。
                 * @param req DescribeSpecificTrafficPackageUsedDetailsRequest
                 * @return DescribeSpecificTrafficPackageUsedDetailsOutcome
                 */
                DescribeSpecificTrafficPackageUsedDetailsOutcome DescribeSpecificTrafficPackageUsedDetails(const Model::DescribeSpecificTrafficPackageUsedDetailsRequest &request);
                void DescribeSpecificTrafficPackageUsedDetailsAsync(const Model::DescribeSpecificTrafficPackageUsedDetailsRequest& request, const DescribeSpecificTrafficPackageUsedDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecificTrafficPackageUsedDetailsOutcomeCallable DescribeSpecificTrafficPackageUsedDetailsCallable(const Model::DescribeSpecificTrafficPackageUsedDetailsRequest& request);

                /**
                 *本接口(DescribeSubnetResourceDashboard)用于查看Subnet资源信息。
                 * @param req DescribeSubnetResourceDashboardRequest
                 * @return DescribeSubnetResourceDashboardOutcome
                 */
                DescribeSubnetResourceDashboardOutcome DescribeSubnetResourceDashboard(const Model::DescribeSubnetResourceDashboardRequest &request);
                void DescribeSubnetResourceDashboardAsync(const Model::DescribeSubnetResourceDashboardRequest& request, const DescribeSubnetResourceDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetResourceDashboardOutcomeCallable DescribeSubnetResourceDashboardCallable(const Model::DescribeSubnetResourceDashboardRequest& request);

                /**
                 *本接口（DescribeSubnets）用于查询子网列表。
                 * @param req DescribeSubnetsRequest
                 * @return DescribeSubnetsOutcome
                 */
                DescribeSubnetsOutcome DescribeSubnets(const Model::DescribeSubnetsRequest &request);
                void DescribeSubnetsAsync(const Model::DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetsOutcomeCallable DescribeSubnetsCallable(const Model::DescribeSubnetsRequest& request);

                /**
                 *本接口（DescribeTaskResult）用于查询EIP异步任务执行结果。
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

                /**
                 *本接口（DescribeTemplateLimits）用于查询参数模板配额列表。
                 * @param req DescribeTemplateLimitsRequest
                 * @return DescribeTemplateLimitsOutcome
                 */
                DescribeTemplateLimitsOutcome DescribeTemplateLimits(const Model::DescribeTemplateLimitsRequest &request);
                void DescribeTemplateLimitsAsync(const Model::DescribeTemplateLimitsRequest& request, const DescribeTemplateLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplateLimitsOutcomeCallable DescribeTemplateLimitsCallable(const Model::DescribeTemplateLimitsRequest& request);

                /**
                 *本接口（DescribeTenantCcns）用于获取要锁定的云联网实例列表。
该接口一般用来封禁出口限速的云联网实例, 目前联通内部运营系统通过云API调用, 因为出口限速无法按地域间封禁, 只能按更粗的云联网实例粒度封禁, 如果是地域间限速, 一般可以通过更细的限速实例粒度封禁（DescribeCrossBorderCcnRegionBandwidthLimits）
如有需要, 可以封禁任意云联网实例, 可接入到内部运营系统
                 * @param req DescribeTenantCcnsRequest
                 * @return DescribeTenantCcnsOutcome
                 */
                DescribeTenantCcnsOutcome DescribeTenantCcns(const Model::DescribeTenantCcnsRequest &request);
                void DescribeTenantCcnsAsync(const Model::DescribeTenantCcnsRequest& request, const DescribeTenantCcnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTenantCcnsOutcomeCallable DescribeTenantCcnsCallable(const Model::DescribeTenantCcnsRequest& request);

                /**
                 *本接口（DescribeTrafficMirrors）用于查询流量镜像实例信息。
                 * @param req DescribeTrafficMirrorsRequest
                 * @return DescribeTrafficMirrorsOutcome
                 */
                DescribeTrafficMirrorsOutcome DescribeTrafficMirrors(const Model::DescribeTrafficMirrorsRequest &request);
                void DescribeTrafficMirrorsAsync(const Model::DescribeTrafficMirrorsRequest& request, const DescribeTrafficMirrorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficMirrorsOutcomeCallable DescribeTrafficMirrorsCallable(const Model::DescribeTrafficMirrorsRequest& request);

                /**
                 *本接口 (DescribeTrafficPackages)  用于查询共享流量包详细信息，包括共享流量包唯一标识ID，名称，流量使用信息等
                 * @param req DescribeTrafficPackagesRequest
                 * @return DescribeTrafficPackagesOutcome
                 */
                DescribeTrafficPackagesOutcome DescribeTrafficPackages(const Model::DescribeTrafficPackagesRequest &request);
                void DescribeTrafficPackagesAsync(const Model::DescribeTrafficPackagesRequest& request, const DescribeTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficPackagesOutcomeCallable DescribeTrafficPackagesCallable(const Model::DescribeTrafficPackagesRequest& request);

                /**
                 *查询流量调度规则
                 * @param req DescribeTrafficQosPolicyRequest
                 * @return DescribeTrafficQosPolicyOutcome
                 */
                DescribeTrafficQosPolicyOutcome DescribeTrafficQosPolicy(const Model::DescribeTrafficQosPolicyRequest &request);
                void DescribeTrafficQosPolicyAsync(const Model::DescribeTrafficQosPolicyRequest& request, const DescribeTrafficQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficQosPolicyOutcomeCallable DescribeTrafficQosPolicyCallable(const Model::DescribeTrafficQosPolicyRequest& request);

                /**
                 *本接口(DescribeUsedIpAddress)用于查询Subnet或者Vpc内的ip的使用情况，
如ip被占用，返回占用ip的资源类别与id；如未被占用，返回空值
                 * @param req DescribeUsedIpAddressRequest
                 * @return DescribeUsedIpAddressOutcome
                 */
                DescribeUsedIpAddressOutcome DescribeUsedIpAddress(const Model::DescribeUsedIpAddressRequest &request);
                void DescribeUsedIpAddressAsync(const Model::DescribeUsedIpAddressRequest& request, const DescribeUsedIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsedIpAddressOutcomeCallable DescribeUsedIpAddressCallable(const Model::DescribeUsedIpAddressRequest& request);

                /**
                 *本接口（DescribeVpcEndPoint）用于查询终端节点列表。
                 * @param req DescribeVpcEndPointRequest
                 * @return DescribeVpcEndPointOutcome
                 */
                DescribeVpcEndPointOutcome DescribeVpcEndPoint(const Model::DescribeVpcEndPointRequest &request);
                void DescribeVpcEndPointAsync(const Model::DescribeVpcEndPointRequest& request, const DescribeVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcEndPointOutcomeCallable DescribeVpcEndPointCallable(const Model::DescribeVpcEndPointRequest& request);

                /**
                 *本接口（DescribeVpcEndPointService）用于查询终端节点服务列表。
                 * @param req DescribeVpcEndPointServiceRequest
                 * @return DescribeVpcEndPointServiceOutcome
                 */
                DescribeVpcEndPointServiceOutcome DescribeVpcEndPointService(const Model::DescribeVpcEndPointServiceRequest &request);
                void DescribeVpcEndPointServiceAsync(const Model::DescribeVpcEndPointServiceRequest& request, const DescribeVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcEndPointServiceOutcomeCallable DescribeVpcEndPointServiceCallable(const Model::DescribeVpcEndPointServiceRequest& request);

                /**
                 *本接口（DescribeVpcEndPointServiceWhiteList）用于查询终端节点服务的服务白名单列表。
                 * @param req DescribeVpcEndPointServiceWhiteListRequest
                 * @return DescribeVpcEndPointServiceWhiteListOutcome
                 */
                DescribeVpcEndPointServiceWhiteListOutcome DescribeVpcEndPointServiceWhiteList(const Model::DescribeVpcEndPointServiceWhiteListRequest &request);
                void DescribeVpcEndPointServiceWhiteListAsync(const Model::DescribeVpcEndPointServiceWhiteListRequest& request, const DescribeVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcEndPointServiceWhiteListOutcomeCallable DescribeVpcEndPointServiceWhiteListCallable(const Model::DescribeVpcEndPointServiceWhiteListRequest& request);

                /**
                 *本接口（DescribeVpcInstances）用于查询VPC下的云主机实例列表。
                 * @param req DescribeVpcInstancesRequest
                 * @return DescribeVpcInstancesOutcome
                 */
                DescribeVpcInstancesOutcome DescribeVpcInstances(const Model::DescribeVpcInstancesRequest &request);
                void DescribeVpcInstancesAsync(const Model::DescribeVpcInstancesRequest& request, const DescribeVpcInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcInstancesOutcomeCallable DescribeVpcInstancesCallable(const Model::DescribeVpcInstancesRequest& request);

                /**
                 *本接口（DescribeVpcIpv6Addresses）用于查询 `VPC` `IPv6` 信息。
只能查询已使用的`IPv6`信息，当查询未使用的IP时，本接口不会报错，但不会出现在返回结果里。
                 * @param req DescribeVpcIpv6AddressesRequest
                 * @return DescribeVpcIpv6AddressesOutcome
                 */
                DescribeVpcIpv6AddressesOutcome DescribeVpcIpv6Addresses(const Model::DescribeVpcIpv6AddressesRequest &request);
                void DescribeVpcIpv6AddressesAsync(const Model::DescribeVpcIpv6AddressesRequest& request, const DescribeVpcIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcIpv6AddressesOutcomeCallable DescribeVpcIpv6AddressesCallable(const Model::DescribeVpcIpv6AddressesRequest& request);

                /**
                 *本接口（DescribeVpcLimits）用于获取私有网络配额，部分私有网络的配额有地域属性。
LimitTypes取值范围：
* appid-max-vpcs （每个开发商每个地域可创建的VPC数）。
* vpc-max-subnets（每个VPC可创建的子网数）。
* vpc-max-route-tables（每个VPC可创建的路由表数）。
* route-table-max-policies（每个路由表可添加的策略数）。
* vpc-max-vpn-gateways（每个VPC可创建的VPN网关数）。
* appid-max-custom-gateways（每个开发商可创建的对端网关数）。
* appid-max-vpn-connections（每个开发商可创建的VPN通道数）。
* custom-gateway-max-vpn-connections（每个对端网关可创建的VPN通道数）。
* vpn-gateway-max-custom-gateways（每个VPNGW可以创建的通道数）。
* vpc-max-network-acls（每个VPC可创建的网络ACL数）。
* network-acl-max-inbound-policies（每个网络ACL可添加的入站规则数）。
* network-acl-max-outbound-policies（每个网络ACL可添加的出站规则数）。
* vpc-max-vpcpeers（每个VPC可创建的对等连接数）。
* vpc-max-available-vpcpeers（每个VPC可创建的有效对等连接数）。
* vpc-max-basic-network-interconnections（每个VPC可创建的基础网络云主机与VPC互通数）。
* direct-connection-max-snats（每个专线网关可创建的SNAT数）。
* direct-connection-max-dnats（每个专线网关可创建的DNAT数）。
* direct-connection-max-snapts（每个专线网关可创建的SNAPT数）。
* direct-connection-max-dnapts（每个专线网关可创建的DNAPT数）。
* vpc-max-nat-gateways（每个VPC可创建的NAT网关数）。
* nat-gateway-max-eips（每个NAT可以购买的外网IP数量）。
* vpc-max-enis（每个VPC可创建弹性网卡数）。
* vpc-max-havips（每个VPC可创建HAVIP数）。
* eni-max-private-ips（每个ENI可以绑定的内网IP数（ENI未绑定子机））。
* nat-gateway-max-dnapts（每个NAT网关可创建的DNAPT数）。
* vpc-max-ipv6s（每个VPC可分配的IPv6地址数）。
* eni-max-ipv6s（每个ENI可分配的IPv6地址数）。
* vpc-max-assistant_cidrs（每个VPC可分配的辅助CIDR数）。
* appid-max-end-point-services （每个开发商每个地域可创建的终端节点服务个数）。
* appid-max-end-point-service-white-lists （每个开发商每个地域可创建的终端节点服务白名单个数）。
* vpc-max-cmcc-ipv6-cidrs （每个VPC可创建的移动IPv6 CIDR个数）。
* vpc-max-ctcc-ipv6-cidrs （每个VPC可创建的电信IPv6 CIDR个数）。
* vpc-max-cucc-ipv6-cidrs （每个VPC可创建的联调IPv6 CIDR个数）。
* vpc-max-bgp-ipv6-cidrs （每个VPC可创建的默认IPv6 CIDR个数）。
* vpc-max-custom-ipv6-cidrs （每个VPC可创建的自定义IPv6 CIDR个数）。
* vpc-max-ula-ipv6-cidrs （每个VPC可创建的ULA IPv6 CIDR个数）。
                 * @param req DescribeVpcLimitsRequest
                 * @return DescribeVpcLimitsOutcome
                 */
                DescribeVpcLimitsOutcome DescribeVpcLimits(const Model::DescribeVpcLimitsRequest &request);
                void DescribeVpcLimitsAsync(const Model::DescribeVpcLimitsRequest& request, const DescribeVpcLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcLimitsOutcomeCallable DescribeVpcLimitsCallable(const Model::DescribeVpcLimitsRequest& request);

                /**
                 *查询私有网络对等连接。
                 * @param req DescribeVpcPeeringConnectionsRequest
                 * @return DescribeVpcPeeringConnectionsOutcome
                 */
                DescribeVpcPeeringConnectionsOutcome DescribeVpcPeeringConnections(const Model::DescribeVpcPeeringConnectionsRequest &request);
                void DescribeVpcPeeringConnectionsAsync(const Model::DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcPeeringConnectionsOutcomeCallable DescribeVpcPeeringConnectionsCallable(const Model::DescribeVpcPeeringConnectionsRequest& request);

                /**
                 *本接口（DescribeVpcPrivateIpAddresses）用于查询VPC内网IP信息。<br />
只能查询已使用的IP信息，当查询未使用的IP时，本接口不会报错，但不会出现在返回结果里。
                 * @param req DescribeVpcPrivateIpAddressesRequest
                 * @return DescribeVpcPrivateIpAddressesOutcome
                 */
                DescribeVpcPrivateIpAddressesOutcome DescribeVpcPrivateIpAddresses(const Model::DescribeVpcPrivateIpAddressesRequest &request);
                void DescribeVpcPrivateIpAddressesAsync(const Model::DescribeVpcPrivateIpAddressesRequest& request, const DescribeVpcPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcPrivateIpAddressesOutcomeCallable DescribeVpcPrivateIpAddressesCallable(const Model::DescribeVpcPrivateIpAddressesRequest& request);

                /**
                 *本接口(DescribeVpcResourceDashboard)用于查看VPC资源信息。
                 * @param req DescribeVpcResourceDashboardRequest
                 * @return DescribeVpcResourceDashboardOutcome
                 */
                DescribeVpcResourceDashboardOutcome DescribeVpcResourceDashboard(const Model::DescribeVpcResourceDashboardRequest &request);
                void DescribeVpcResourceDashboardAsync(const Model::DescribeVpcResourceDashboardRequest& request, const DescribeVpcResourceDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcResourceDashboardOutcomeCallable DescribeVpcResourceDashboardCallable(const Model::DescribeVpcResourceDashboardRequest& request);

                /**
                 *本接口（DescribeVpcTaskResult）用于查询VPC任务执行结果。
                 * @param req DescribeVpcTaskResultRequest
                 * @return DescribeVpcTaskResultOutcome
                 */
                DescribeVpcTaskResultOutcome DescribeVpcTaskResult(const Model::DescribeVpcTaskResultRequest &request);
                void DescribeVpcTaskResultAsync(const Model::DescribeVpcTaskResultRequest& request, const DescribeVpcTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcTaskResultOutcomeCallable DescribeVpcTaskResultCallable(const Model::DescribeVpcTaskResultRequest& request);

                /**
                 *本接口（DescribeVpcs）用于查询私有网络列表。
                 * @param req DescribeVpcsRequest
                 * @return DescribeVpcsOutcome
                 */
                DescribeVpcsOutcome DescribeVpcs(const Model::DescribeVpcsRequest &request);
                void DescribeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcsOutcomeCallable DescribeVpcsCallable(const Model::DescribeVpcsRequest& request);

                /**
                 *本接口（DescribeVpnConnections）用于查询VPN通道列表。
                 * @param req DescribeVpnConnectionsRequest
                 * @return DescribeVpnConnectionsOutcome
                 */
                DescribeVpnConnectionsOutcome DescribeVpnConnections(const Model::DescribeVpnConnectionsRequest &request);
                void DescribeVpnConnectionsAsync(const Model::DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnConnectionsOutcomeCallable DescribeVpnConnectionsCallable(const Model::DescribeVpnConnectionsRequest& request);

                /**
                 *本接口（DescribeVpnGatewayCcnRoutes）用于查询VPN网关云联网路由。
                 * @param req DescribeVpnGatewayCcnRoutesRequest
                 * @return DescribeVpnGatewayCcnRoutesOutcome
                 */
                DescribeVpnGatewayCcnRoutesOutcome DescribeVpnGatewayCcnRoutes(const Model::DescribeVpnGatewayCcnRoutesRequest &request);
                void DescribeVpnGatewayCcnRoutesAsync(const Model::DescribeVpnGatewayCcnRoutesRequest& request, const DescribeVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewayCcnRoutesOutcomeCallable DescribeVpnGatewayCcnRoutesCallable(const Model::DescribeVpnGatewayCcnRoutesRequest& request);

                /**
                 *本接口（DescribeVpnGatewayRoutes）用于查询VPN网关路由。
                 * @param req DescribeVpnGatewayRoutesRequest
                 * @return DescribeVpnGatewayRoutesOutcome
                 */
                DescribeVpnGatewayRoutesOutcome DescribeVpnGatewayRoutes(const Model::DescribeVpnGatewayRoutesRequest &request);
                void DescribeVpnGatewayRoutesAsync(const Model::DescribeVpnGatewayRoutesRequest& request, const DescribeVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewayRoutesOutcomeCallable DescribeVpnGatewayRoutesCallable(const Model::DescribeVpnGatewayRoutesRequest& request);

                /**
                 *本接口（DescribeVpnGatewaySslClients）用于查询SSL-VPN-CLIENT 列表。
                 * @param req DescribeVpnGatewaySslClientsRequest
                 * @return DescribeVpnGatewaySslClientsOutcome
                 */
                DescribeVpnGatewaySslClientsOutcome DescribeVpnGatewaySslClients(const Model::DescribeVpnGatewaySslClientsRequest &request);
                void DescribeVpnGatewaySslClientsAsync(const Model::DescribeVpnGatewaySslClientsRequest& request, const DescribeVpnGatewaySslClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewaySslClientsOutcomeCallable DescribeVpnGatewaySslClientsCallable(const Model::DescribeVpnGatewaySslClientsRequest& request);

                /**
                 *本接口（DescribeVpnGatewaySslServers）用于查询SSL-VPN SERVER 列表信息。
                 * @param req DescribeVpnGatewaySslServersRequest
                 * @return DescribeVpnGatewaySslServersOutcome
                 */
                DescribeVpnGatewaySslServersOutcome DescribeVpnGatewaySslServers(const Model::DescribeVpnGatewaySslServersRequest &request);
                void DescribeVpnGatewaySslServersAsync(const Model::DescribeVpnGatewaySslServersRequest& request, const DescribeVpnGatewaySslServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewaySslServersOutcomeCallable DescribeVpnGatewaySslServersCallable(const Model::DescribeVpnGatewaySslServersRequest& request);

                /**
                 *本接口（DescribeVpnGateways）用于查询VPN网关列表。
                 * @param req DescribeVpnGatewaysRequest
                 * @return DescribeVpnGatewaysOutcome
                 */
                DescribeVpnGatewaysOutcome DescribeVpnGateways(const Model::DescribeVpnGatewaysRequest &request);
                void DescribeVpnGatewaysAsync(const Model::DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewaysOutcomeCallable DescribeVpnGatewaysCallable(const Model::DescribeVpnGatewaysRequest& request);

                /**
                 *本接口（DetachCcnInstances）用于从云联网实例中解关联指定的网络实例。<br />
解关联网络实例后，相应的路由策略会一并删除。
                 * @param req DetachCcnInstancesRequest
                 * @return DetachCcnInstancesOutcome
                 */
                DetachCcnInstancesOutcome DetachCcnInstances(const Model::DetachCcnInstancesRequest &request);
                void DetachCcnInstancesAsync(const Model::DetachCcnInstancesRequest& request, const DetachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachCcnInstancesOutcomeCallable DetachCcnInstancesCallable(const Model::DetachCcnInstancesRequest& request);

                /**
                 *本接口(DetachClassicLinkVpc)用于删除私有网络和基础网络设备互通。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req DetachClassicLinkVpcRequest
                 * @return DetachClassicLinkVpcOutcome
                 */
                DetachClassicLinkVpcOutcome DetachClassicLinkVpc(const Model::DetachClassicLinkVpcRequest &request);
                void DetachClassicLinkVpcAsync(const Model::DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachClassicLinkVpcOutcomeCallable DetachClassicLinkVpcCallable(const Model::DetachClassicLinkVpcRequest& request);

                /**
                 *本接口（DetachNetworkInterface）用于弹性网卡解绑云服务器。
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询[DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037)
接口。
                 * @param req DetachNetworkInterfaceRequest
                 * @return DetachNetworkInterfaceOutcome
                 */
                DetachNetworkInterfaceOutcome DetachNetworkInterface(const Model::DetachNetworkInterfaceRequest &request);
                void DetachNetworkInterfaceAsync(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachNetworkInterfaceOutcomeCallable DetachNetworkInterfaceCallable(const Model::DetachNetworkInterfaceRequest& request);

                /**
                 *本接口（DetachSnapshotInstances）用于快照策略解关联实例。
                 * @param req DetachSnapshotInstancesRequest
                 * @return DetachSnapshotInstancesOutcome
                 */
                DetachSnapshotInstancesOutcome DetachSnapshotInstances(const Model::DetachSnapshotInstancesRequest &request);
                void DetachSnapshotInstancesAsync(const Model::DetachSnapshotInstancesRequest& request, const DetachSnapshotInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachSnapshotInstancesOutcomeCallable DetachSnapshotInstancesCallable(const Model::DetachSnapshotInstancesRequest& request);

                /**
                 *本接口（DisableCcnRoutes）用于禁用已经启用的云联网（CCN）路由。
                 * @param req DisableCcnRoutesRequest
                 * @return DisableCcnRoutesOutcome
                 */
                DisableCcnRoutesOutcome DisableCcnRoutes(const Model::DisableCcnRoutesRequest &request);
                void DisableCcnRoutesAsync(const Model::DisableCcnRoutesRequest& request, const DisableCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableCcnRoutesOutcomeCallable DisableCcnRoutesCallable(const Model::DisableCcnRoutesRequest& request);

                /**
                 *本接口（DisableFlowLogs）用于停止流日志。
                 * @param req DisableFlowLogsRequest
                 * @return DisableFlowLogsOutcome
                 */
                DisableFlowLogsOutcome DisableFlowLogs(const Model::DisableFlowLogsRequest &request);
                void DisableFlowLogsAsync(const Model::DisableFlowLogsRequest& request, const DisableFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableFlowLogsOutcomeCallable DisableFlowLogsCallable(const Model::DisableFlowLogsRequest& request);

                /**
                 *本接口（DisableGatewayFlowMonitor）用于关闭网关流量监控。
                 * @param req DisableGatewayFlowMonitorRequest
                 * @return DisableGatewayFlowMonitorOutcome
                 */
                DisableGatewayFlowMonitorOutcome DisableGatewayFlowMonitor(const Model::DisableGatewayFlowMonitorRequest &request);
                void DisableGatewayFlowMonitorAsync(const Model::DisableGatewayFlowMonitorRequest& request, const DisableGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableGatewayFlowMonitorOutcomeCallable DisableGatewayFlowMonitorCallable(const Model::DisableGatewayFlowMonitorRequest& request);

                /**
                 *本接口（DisableRoutes）用于禁用已启用的子网路由
                 * @param req DisableRoutesRequest
                 * @return DisableRoutesOutcome
                 */
                DisableRoutesOutcome DisableRoutes(const Model::DisableRoutesRequest &request);
                void DisableRoutesAsync(const Model::DisableRoutesRequest& request, const DisableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableRoutesOutcomeCallable DisableRoutesCallable(const Model::DisableRoutesRequest& request);

                /**
                 *本接口（DisableSnapshotPolicies）用于停用快照策略。
                 * @param req DisableSnapshotPoliciesRequest
                 * @return DisableSnapshotPoliciesOutcome
                 */
                DisableSnapshotPoliciesOutcome DisableSnapshotPolicies(const Model::DisableSnapshotPoliciesRequest &request);
                void DisableSnapshotPoliciesAsync(const Model::DisableSnapshotPoliciesRequest& request, const DisableSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableSnapshotPoliciesOutcomeCallable DisableSnapshotPoliciesCallable(const Model::DisableSnapshotPoliciesRequest& request);

                /**
                 *禁用SSL-VPN-CLIENT 证书
                 * @param req DisableVpnGatewaySslClientCertRequest
                 * @return DisableVpnGatewaySslClientCertOutcome
                 */
                DisableVpnGatewaySslClientCertOutcome DisableVpnGatewaySslClientCert(const Model::DisableVpnGatewaySslClientCertRequest &request);
                void DisableVpnGatewaySslClientCertAsync(const Model::DisableVpnGatewaySslClientCertRequest& request, const DisableVpnGatewaySslClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableVpnGatewaySslClientCertOutcomeCallable DisableVpnGatewaySslClientCertCallable(const Model::DisableVpnGatewaySslClientCertRequest& request);

                /**
                 *本接口 (DisassociateAddress) 用于解绑[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）。
* 支持CVM实例，弹性网卡上的EIP解绑。
* 不支持NAT上的EIP解绑。NAT上的EIP解绑请参考[DisassociateNatGatewayAddress](https://cloud.tencent.com/document/api/215/36716)。
* 只有状态为 BIND 和 BIND_ENI 的 EIP 才能进行解绑定操作。
                 * @param req DisassociateAddressRequest
                 * @return DisassociateAddressOutcome
                 */
                DisassociateAddressOutcome DisassociateAddress(const Model::DisassociateAddressRequest &request);
                void DisassociateAddressAsync(const Model::DisassociateAddressRequest& request, const DisassociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateAddressOutcomeCallable DisassociateAddressCallable(const Model::DisassociateAddressRequest& request);

                /**
                 *本接口（DisassociateDhcpIpWithAddressIp）用于将DhcpIp已绑定的弹性公网IP（EIP）解除绑定。<br />
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req DisassociateDhcpIpWithAddressIpRequest
                 * @return DisassociateDhcpIpWithAddressIpOutcome
                 */
                DisassociateDhcpIpWithAddressIpOutcome DisassociateDhcpIpWithAddressIp(const Model::DisassociateDhcpIpWithAddressIpRequest &request);
                void DisassociateDhcpIpWithAddressIpAsync(const Model::DisassociateDhcpIpWithAddressIpRequest& request, const DisassociateDhcpIpWithAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateDhcpIpWithAddressIpOutcomeCallable DisassociateDhcpIpWithAddressIpCallable(const Model::DisassociateDhcpIpWithAddressIpRequest& request);

                /**
                 *将专线网关与NAT网关解绑，解绑之后，专线网关将不能通过NAT网关访问公网
                 * @param req DisassociateDirectConnectGatewayNatGatewayRequest
                 * @return DisassociateDirectConnectGatewayNatGatewayOutcome
                 */
                DisassociateDirectConnectGatewayNatGatewayOutcome DisassociateDirectConnectGatewayNatGateway(const Model::DisassociateDirectConnectGatewayNatGatewayRequest &request);
                void DisassociateDirectConnectGatewayNatGatewayAsync(const Model::DisassociateDirectConnectGatewayNatGatewayRequest& request, const DisassociateDirectConnectGatewayNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateDirectConnectGatewayNatGatewayOutcomeCallable DisassociateDirectConnectGatewayNatGatewayCallable(const Model::DisassociateDirectConnectGatewayNatGatewayRequest& request);

                /**
                 *本接口（DisassociateHaVipInstance）用于HAVIP解绑子机或网卡（去掉HaVip飘移范围）。
                 * @param req DisassociateHaVipInstanceRequest
                 * @return DisassociateHaVipInstanceOutcome
                 */
                DisassociateHaVipInstanceOutcome DisassociateHaVipInstance(const Model::DisassociateHaVipInstanceRequest &request);
                void DisassociateHaVipInstanceAsync(const Model::DisassociateHaVipInstanceRequest& request, const DisassociateHaVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateHaVipInstanceOutcomeCallable DisassociateHaVipInstanceCallable(const Model::DisassociateHaVipInstanceRequest& request);

                /**
                 *本接口（DisassociateIPv6Address）用于解绑弹性公网 IPv6（简称EIPv6）实例。

- 支持对 CVM、弹性网卡绑定的 EIPv6 实例进行解绑操作。
- 只有状态为 BIND 和 BIND_ENI 的 EIPv6 实例才能进行解绑操作。
                 * @param req DisassociateIPv6AddressRequest
                 * @return DisassociateIPv6AddressOutcome
                 */
                DisassociateIPv6AddressOutcome DisassociateIPv6Address(const Model::DisassociateIPv6AddressRequest &request);
                void DisassociateIPv6AddressAsync(const Model::DisassociateIPv6AddressRequest& request, const DisassociateIPv6AddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateIPv6AddressOutcomeCallable DisassociateIPv6AddressCallable(const Model::DisassociateIPv6AddressRequest& request);

                /**
                 *本接口（DisassociateNatGatewayAddress）用于NAT网关解绑弹性IP。
                 * @param req DisassociateNatGatewayAddressRequest
                 * @return DisassociateNatGatewayAddressOutcome
                 */
                DisassociateNatGatewayAddressOutcome DisassociateNatGatewayAddress(const Model::DisassociateNatGatewayAddressRequest &request);
                void DisassociateNatGatewayAddressAsync(const Model::DisassociateNatGatewayAddressRequest& request, const DisassociateNatGatewayAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateNatGatewayAddressOutcomeCallable DisassociateNatGatewayAddressCallable(const Model::DisassociateNatGatewayAddressRequest& request);

                /**
                 *本接口（DisassociateNetworkAclSubnets）用于网络ACL解关联VPC下的子网。
                 * @param req DisassociateNetworkAclSubnetsRequest
                 * @return DisassociateNetworkAclSubnetsOutcome
                 */
                DisassociateNetworkAclSubnetsOutcome DisassociateNetworkAclSubnets(const Model::DisassociateNetworkAclSubnetsRequest &request);
                void DisassociateNetworkAclSubnetsAsync(const Model::DisassociateNetworkAclSubnetsRequest& request, const DisassociateNetworkAclSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateNetworkAclSubnetsOutcomeCallable DisassociateNetworkAclSubnetsCallable(const Model::DisassociateNetworkAclSubnetsRequest& request);

                /**
                 *本接口（DisassociateNetworkInterfaceSecurityGroups）用于弹性网卡解绑安全组。支持弹性网卡完全解绑安全组。
                 * @param req DisassociateNetworkInterfaceSecurityGroupsRequest
                 * @return DisassociateNetworkInterfaceSecurityGroupsOutcome
                 */
                DisassociateNetworkInterfaceSecurityGroupsOutcome DisassociateNetworkInterfaceSecurityGroups(const Model::DisassociateNetworkInterfaceSecurityGroupsRequest &request);
                void DisassociateNetworkInterfaceSecurityGroupsAsync(const Model::DisassociateNetworkInterfaceSecurityGroupsRequest& request, const DisassociateNetworkInterfaceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateNetworkInterfaceSecurityGroupsOutcomeCallable DisassociateNetworkInterfaceSecurityGroupsCallable(const Model::DisassociateNetworkInterfaceSecurityGroupsRequest& request);

                /**
                 *本接口（DisassociateVpcEndPointSecurityGroups）用于终端节点解绑安全组。
                 * @param req DisassociateVpcEndPointSecurityGroupsRequest
                 * @return DisassociateVpcEndPointSecurityGroupsOutcome
                 */
                DisassociateVpcEndPointSecurityGroupsOutcome DisassociateVpcEndPointSecurityGroups(const Model::DisassociateVpcEndPointSecurityGroupsRequest &request);
                void DisassociateVpcEndPointSecurityGroupsAsync(const Model::DisassociateVpcEndPointSecurityGroupsRequest& request, const DisassociateVpcEndPointSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateVpcEndPointSecurityGroupsOutcomeCallable DisassociateVpcEndPointSecurityGroupsCallable(const Model::DisassociateVpcEndPointSecurityGroupsRequest& request);

                /**
                 *本接口（DownloadCustomerGatewayConfiguration）用于下载VPN通道配置。
                 * @param req DownloadCustomerGatewayConfigurationRequest
                 * @return DownloadCustomerGatewayConfigurationOutcome
                 */
                DownloadCustomerGatewayConfigurationOutcome DownloadCustomerGatewayConfiguration(const Model::DownloadCustomerGatewayConfigurationRequest &request);
                void DownloadCustomerGatewayConfigurationAsync(const Model::DownloadCustomerGatewayConfigurationRequest& request, const DownloadCustomerGatewayConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadCustomerGatewayConfigurationOutcomeCallable DownloadCustomerGatewayConfigurationCallable(const Model::DownloadCustomerGatewayConfigurationRequest& request);

                /**
                 *本接口（DownloadVpnGatewaySslClientCert）用于下载SSL-VPN-CLIENT 客户端证书。
                 * @param req DownloadVpnGatewaySslClientCertRequest
                 * @return DownloadVpnGatewaySslClientCertOutcome
                 */
                DownloadVpnGatewaySslClientCertOutcome DownloadVpnGatewaySslClientCert(const Model::DownloadVpnGatewaySslClientCertRequest &request);
                void DownloadVpnGatewaySslClientCertAsync(const Model::DownloadVpnGatewaySslClientCertRequest& request, const DownloadVpnGatewaySslClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadVpnGatewaySslClientCertOutcomeCallable DownloadVpnGatewaySslClientCertCallable(const Model::DownloadVpnGatewaySslClientCertRequest& request);

                /**
                 *本接口（EnableCcnRoutes）用于启用已经加入云联网（CCN）的路由。<br />
本接口会校验启用后，是否与已有路由冲突，如果冲突，则无法启用，失败处理。路由冲突时，需要先禁用与之冲突的路由，才能启用该路由。
                 * @param req EnableCcnRoutesRequest
                 * @return EnableCcnRoutesOutcome
                 */
                EnableCcnRoutesOutcome EnableCcnRoutes(const Model::EnableCcnRoutesRequest &request);
                void EnableCcnRoutesAsync(const Model::EnableCcnRoutesRequest& request, const EnableCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableCcnRoutesOutcomeCallable EnableCcnRoutesCallable(const Model::EnableCcnRoutesRequest& request);

                /**
                 *本接口（EnableFlowLogs）用于启动流日志。
                 * @param req EnableFlowLogsRequest
                 * @return EnableFlowLogsOutcome
                 */
                EnableFlowLogsOutcome EnableFlowLogs(const Model::EnableFlowLogsRequest &request);
                void EnableFlowLogsAsync(const Model::EnableFlowLogsRequest& request, const EnableFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableFlowLogsOutcomeCallable EnableFlowLogsCallable(const Model::EnableFlowLogsRequest& request);

                /**
                 *本接口（EnableGatewayFlowMonitor）用于开启网关流量监控。
                 * @param req EnableGatewayFlowMonitorRequest
                 * @return EnableGatewayFlowMonitorOutcome
                 */
                EnableGatewayFlowMonitorOutcome EnableGatewayFlowMonitor(const Model::EnableGatewayFlowMonitorRequest &request);
                void EnableGatewayFlowMonitorAsync(const Model::EnableGatewayFlowMonitorRequest& request, const EnableGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableGatewayFlowMonitorOutcomeCallable EnableGatewayFlowMonitorCallable(const Model::EnableGatewayFlowMonitorRequest& request);

                /**
                 *本接口（EnableRoutes）用于启用已禁用的子网路由。<br />
本接口会校验启用后，是否与已有路由冲突，如果冲突，则无法启用，失败处理。路由冲突时，需要先禁用与之冲突的路由，才能启用该路由。
                 * @param req EnableRoutesRequest
                 * @return EnableRoutesOutcome
                 */
                EnableRoutesOutcome EnableRoutes(const Model::EnableRoutesRequest &request);
                void EnableRoutesAsync(const Model::EnableRoutesRequest& request, const EnableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableRoutesOutcomeCallable EnableRoutesCallable(const Model::EnableRoutesRequest& request);

                /**
                 *本接口（EnableSnapshotPolicies）用于启用快照策略。
                 * @param req EnableSnapshotPoliciesRequest
                 * @return EnableSnapshotPoliciesOutcome
                 */
                EnableSnapshotPoliciesOutcome EnableSnapshotPolicies(const Model::EnableSnapshotPoliciesRequest &request);
                void EnableSnapshotPoliciesAsync(const Model::EnableSnapshotPoliciesRequest& request, const EnableSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableSnapshotPoliciesOutcomeCallable EnableSnapshotPoliciesCallable(const Model::EnableSnapshotPoliciesRequest& request);

                /**
                 *本接口（EnableVpcEndPointConnect）用于是否接受终端节点连接请求。
                 * @param req EnableVpcEndPointConnectRequest
                 * @return EnableVpcEndPointConnectOutcome
                 */
                EnableVpcEndPointConnectOutcome EnableVpcEndPointConnect(const Model::EnableVpcEndPointConnectRequest &request);
                void EnableVpcEndPointConnectAsync(const Model::EnableVpcEndPointConnectRequest& request, const EnableVpcEndPointConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableVpcEndPointConnectOutcomeCallable EnableVpcEndPointConnectCallable(const Model::EnableVpcEndPointConnectRequest& request);

                /**
                 *本接口（EnableVpnGatewaySslClientCert）用于启用SSL-VPN-CLIENT 证书。
                 * @param req EnableVpnGatewaySslClientCertRequest
                 * @return EnableVpnGatewaySslClientCertOutcome
                 */
                EnableVpnGatewaySslClientCertOutcome EnableVpnGatewaySslClientCert(const Model::EnableVpnGatewaySslClientCertRequest &request);
                void EnableVpnGatewaySslClientCertAsync(const Model::EnableVpnGatewaySslClientCertRequest& request, const EnableVpnGatewaySslClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableVpnGatewaySslClientCertOutcomeCallable EnableVpnGatewaySslClientCertCallable(const Model::EnableVpnGatewaySslClientCertRequest& request);

                /**
                 *本接口（GenerateVpnConnectionDefaultHealthCheckIp）用于获取一对VPN通道健康检查地址。
                 * @param req GenerateVpnConnectionDefaultHealthCheckIpRequest
                 * @return GenerateVpnConnectionDefaultHealthCheckIpOutcome
                 */
                GenerateVpnConnectionDefaultHealthCheckIpOutcome GenerateVpnConnectionDefaultHealthCheckIp(const Model::GenerateVpnConnectionDefaultHealthCheckIpRequest &request);
                void GenerateVpnConnectionDefaultHealthCheckIpAsync(const Model::GenerateVpnConnectionDefaultHealthCheckIpRequest& request, const GenerateVpnConnectionDefaultHealthCheckIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateVpnConnectionDefaultHealthCheckIpOutcomeCallable GenerateVpnConnectionDefaultHealthCheckIpCallable(const Model::GenerateVpnConnectionDefaultHealthCheckIpRequest& request);

                /**
                 *本接口（GetCcnRegionBandwidthLimits）用于查询云联网相关地域带宽信息，其中预付费模式的云联网仅支持地域间限速，后付费模式的云联网支持地域间限速和地域出口限速。
                 * @param req GetCcnRegionBandwidthLimitsRequest
                 * @return GetCcnRegionBandwidthLimitsOutcome
                 */
                GetCcnRegionBandwidthLimitsOutcome GetCcnRegionBandwidthLimits(const Model::GetCcnRegionBandwidthLimitsRequest &request);
                void GetCcnRegionBandwidthLimitsAsync(const Model::GetCcnRegionBandwidthLimitsRequest& request, const GetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCcnRegionBandwidthLimitsOutcomeCallable GetCcnRegionBandwidthLimitsCallable(const Model::GetCcnRegionBandwidthLimitsRequest& request);

                /**
                 *本接口（HaVipAssociateAddressIp）用于高可用虚拟IP（HAVIP）绑定弹性公网IP（EIP）。<br />
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
                 * @param req HaVipAssociateAddressIpRequest
                 * @return HaVipAssociateAddressIpOutcome
                 */
                HaVipAssociateAddressIpOutcome HaVipAssociateAddressIp(const Model::HaVipAssociateAddressIpRequest &request);
                void HaVipAssociateAddressIpAsync(const Model::HaVipAssociateAddressIpRequest& request, const HaVipAssociateAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HaVipAssociateAddressIpOutcomeCallable HaVipAssociateAddressIpCallable(const Model::HaVipAssociateAddressIpRequest& request);

                /**
                 *本接口（HaVipDisassociateAddressIp）用于将高可用虚拟IP（HAVIP）已绑定的弹性公网IP（EIP）解除绑定。<br />
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
                 * @param req HaVipDisassociateAddressIpRequest
                 * @return HaVipDisassociateAddressIpOutcome
                 */
                HaVipDisassociateAddressIpOutcome HaVipDisassociateAddressIp(const Model::HaVipDisassociateAddressIpRequest &request);
                void HaVipDisassociateAddressIpAsync(const Model::HaVipDisassociateAddressIpRequest& request, const HaVipDisassociateAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HaVipDisassociateAddressIpOutcomeCallable HaVipDisassociateAddressIpCallable(const Model::HaVipDisassociateAddressIpRequest& request);

                /**
                 *本接口（DescribePriceCreateDirectConnectGateway）用于创建专线网关询价。
                 * @param req InquirePriceCreateDirectConnectGatewayRequest
                 * @return InquirePriceCreateDirectConnectGatewayOutcome
                 */
                InquirePriceCreateDirectConnectGatewayOutcome InquirePriceCreateDirectConnectGateway(const Model::InquirePriceCreateDirectConnectGatewayRequest &request);
                void InquirePriceCreateDirectConnectGatewayAsync(const Model::InquirePriceCreateDirectConnectGatewayRequest& request, const InquirePriceCreateDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateDirectConnectGatewayOutcomeCallable InquirePriceCreateDirectConnectGatewayCallable(const Model::InquirePriceCreateDirectConnectGatewayRequest& request);

                /**
                 *本接口（InquiryPriceAllocateAddresses）用于新购弹性公网IP询价。
                 * @param req InquiryPriceAllocateAddressesRequest
                 * @return InquiryPriceAllocateAddressesOutcome
                 */
                InquiryPriceAllocateAddressesOutcome InquiryPriceAllocateAddresses(const Model::InquiryPriceAllocateAddressesRequest &request);
                void InquiryPriceAllocateAddressesAsync(const Model::InquiryPriceAllocateAddressesRequest& request, const InquiryPriceAllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceAllocateAddressesOutcomeCallable InquiryPriceAllocateAddressesCallable(const Model::InquiryPriceAllocateAddressesRequest& request);

                /**
                 *本接口（InquiryPriceCreateVpnGateway）用于创建VPN网关询价。
                 * @param req InquiryPriceCreateVpnGatewayRequest
                 * @return InquiryPriceCreateVpnGatewayOutcome
                 */
                InquiryPriceCreateVpnGatewayOutcome InquiryPriceCreateVpnGateway(const Model::InquiryPriceCreateVpnGatewayRequest &request);
                void InquiryPriceCreateVpnGatewayAsync(const Model::InquiryPriceCreateVpnGatewayRequest& request, const InquiryPriceCreateVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateVpnGatewayOutcomeCallable InquiryPriceCreateVpnGatewayCallable(const Model::InquiryPriceCreateVpnGatewayRequest& request);

                /**
                 *本接口（InquiryPriceModifyAddressesBandwidth）用于EIP修改带宽询价。
                 * @param req InquiryPriceModifyAddressesBandwidthRequest
                 * @return InquiryPriceModifyAddressesBandwidthOutcome
                 */
                InquiryPriceModifyAddressesBandwidthOutcome InquiryPriceModifyAddressesBandwidth(const Model::InquiryPriceModifyAddressesBandwidthRequest &request);
                void InquiryPriceModifyAddressesBandwidthAsync(const Model::InquiryPriceModifyAddressesBandwidthRequest& request, const InquiryPriceModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceModifyAddressesBandwidthOutcomeCallable InquiryPriceModifyAddressesBandwidthCallable(const Model::InquiryPriceModifyAddressesBandwidthRequest& request);

                /**
                 *本接口（InquiryPriceRenewAddresses）用于续费预付费弹性公网IP询价，只支持包月按带宽预付费的计费模式。
                 * @param req InquiryPriceRenewAddressesRequest
                 * @return InquiryPriceRenewAddressesOutcome
                 */
                InquiryPriceRenewAddressesOutcome InquiryPriceRenewAddresses(const Model::InquiryPriceRenewAddressesRequest &request);
                void InquiryPriceRenewAddressesAsync(const Model::InquiryPriceRenewAddressesRequest& request, const InquiryPriceRenewAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewAddressesOutcomeCallable InquiryPriceRenewAddressesCallable(const Model::InquiryPriceRenewAddressesRequest& request);

                /**
                 *本接口（InquiryPriceRenewVpnGateway）用于续费VPN网关询价。目前仅支持IPSEC类型网关的询价。
                 * @param req InquiryPriceRenewVpnGatewayRequest
                 * @return InquiryPriceRenewVpnGatewayOutcome
                 */
                InquiryPriceRenewVpnGatewayOutcome InquiryPriceRenewVpnGateway(const Model::InquiryPriceRenewVpnGatewayRequest &request);
                void InquiryPriceRenewVpnGatewayAsync(const Model::InquiryPriceRenewVpnGatewayRequest& request, const InquiryPriceRenewVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewVpnGatewayOutcomeCallable InquiryPriceRenewVpnGatewayCallable(const Model::InquiryPriceRenewVpnGatewayRequest& request);

                /**
                 *本接口（InquiryPriceResetVpnGatewayInternetMaxBandwidth）用于调整VPN网关带宽上限询价。
                 * @param req InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest
                 * @return InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome
                 */
                InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome InquiryPriceResetVpnGatewayInternetMaxBandwidth(const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest &request);
                void InquiryPriceResetVpnGatewayInternetMaxBandwidthAsync(const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest& request, const InquiryPriceResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcomeCallable InquiryPriceResetVpnGatewayInternetMaxBandwidthCallable(const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest& request);

                /**
                 *本接口（LockCcnBandwidths）用户锁定云联网限速实例。
该接口一般用来封禁地域间限速的云联网实例下的限速实例, 目前联通内部运营系统通过云API调用, 如果是出口限速, 一般使用更粗的云联网实例粒度封禁（LockCcns）。
如有需要, 可以封禁任意限速实例, 可接入到内部运营系统。
                 * @param req LockCcnBandwidthsRequest
                 * @return LockCcnBandwidthsOutcome
                 */
                LockCcnBandwidthsOutcome LockCcnBandwidths(const Model::LockCcnBandwidthsRequest &request);
                void LockCcnBandwidthsAsync(const Model::LockCcnBandwidthsRequest& request, const LockCcnBandwidthsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LockCcnBandwidthsOutcomeCallable LockCcnBandwidthsCallable(const Model::LockCcnBandwidthsRequest& request);

                /**
                 *本接口（LockCcns）用于锁定云联网实例

该接口一般用来封禁出口限速的云联网实例, 目前联通内部运营系统通过云API调用, 因为出口限速无法按地域间封禁, 只能按更粗的云联网实例粒度封禁, 如果是地域间限速, 一般可以通过更细的限速实例粒度封禁（LockCcnBandwidths）

如有需要, 可以封禁任意限速实例, 可接入到内部运营系统
                 * @param req LockCcnsRequest
                 * @return LockCcnsOutcome
                 */
                LockCcnsOutcome LockCcns(const Model::LockCcnsRequest &request);
                void LockCcnsAsync(const Model::LockCcnsRequest& request, const LockCcnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LockCcnsOutcomeCallable LockCcnsCallable(const Model::LockCcnsRequest& request);

                /**
                 *本接口 (MigrateBandwidthPackageResources) 用于共享带宽包之间迁移资源
                 * @param req MigrateBandwidthPackageResourcesRequest
                 * @return MigrateBandwidthPackageResourcesOutcome
                 */
                MigrateBandwidthPackageResourcesOutcome MigrateBandwidthPackageResources(const Model::MigrateBandwidthPackageResourcesRequest &request);
                void MigrateBandwidthPackageResourcesAsync(const Model::MigrateBandwidthPackageResourcesRequest& request, const MigrateBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateBandwidthPackageResourcesOutcomeCallable MigrateBandwidthPackageResourcesCallable(const Model::MigrateBandwidthPackageResourcesRequest& request);

                /**
                 *本接口（MigrateNetworkInterface）用于弹性网卡迁移。
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询[DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) `接口。
                 * @param req MigrateNetworkInterfaceRequest
                 * @return MigrateNetworkInterfaceOutcome
                 */
                MigrateNetworkInterfaceOutcome MigrateNetworkInterface(const Model::MigrateNetworkInterfaceRequest &request);
                void MigrateNetworkInterfaceAsync(const Model::MigrateNetworkInterfaceRequest& request, const MigrateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateNetworkInterfaceOutcomeCallable MigrateNetworkInterfaceCallable(const Model::MigrateNetworkInterfaceRequest& request);

                /**
                 *本接口（MigratePrivateIpAddress）用于弹性网卡内网IP迁移。
* 该接口用于将一个内网IP从一个弹性网卡上迁移到另外一个弹性网卡，主IP地址不支持迁移。
* 迁移前后的弹性网卡必须在同一个子网内。  

本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询[DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口。
                 * @param req MigratePrivateIpAddressRequest
                 * @return MigratePrivateIpAddressOutcome
                 */
                MigratePrivateIpAddressOutcome MigratePrivateIpAddress(const Model::MigratePrivateIpAddressRequest &request);
                void MigratePrivateIpAddressAsync(const Model::MigratePrivateIpAddressRequest& request, const MigratePrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigratePrivateIpAddressOutcomeCallable MigratePrivateIpAddressCallable(const Model::MigratePrivateIpAddressRequest& request);

                /**
                 *本接口 (ModifyAddressAttribute) 用于修改[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）的名称。
                 * @param req ModifyAddressAttributeRequest
                 * @return ModifyAddressAttributeOutcome
                 */
                ModifyAddressAttributeOutcome ModifyAddressAttribute(const Model::ModifyAddressAttributeRequest &request);
                void ModifyAddressAttributeAsync(const Model::ModifyAddressAttributeRequest& request, const ModifyAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressAttributeOutcomeCallable ModifyAddressAttributeCallable(const Model::ModifyAddressAttributeRequest& request);

                /**
                 *该接口用于调整具有带宽属性弹性公网IP的网络计费模式
* 支持BANDWIDTH_PREPAID_BY_MONTH（包月按带宽预付费）和TRAFFIC_POSTPAID_BY_HOUR（流量按小时后付费）两种网络计费模式之间的切换。
* 每个弹性公网IP支持调整两次，次数超出则无法调整。
                 * @param req ModifyAddressInternetChargeTypeRequest
                 * @return ModifyAddressInternetChargeTypeOutcome
                 */
                ModifyAddressInternetChargeTypeOutcome ModifyAddressInternetChargeType(const Model::ModifyAddressInternetChargeTypeRequest &request);
                void ModifyAddressInternetChargeTypeAsync(const Model::ModifyAddressInternetChargeTypeRequest& request, const ModifyAddressInternetChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressInternetChargeTypeOutcomeCallable ModifyAddressInternetChargeTypeCallable(const Model::ModifyAddressInternetChargeTypeRequest& request);

                /**
                 *本接口（ModifyAddressTemplateAttribute）用于修改IP地址模板。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req ModifyAddressTemplateAttributeRequest
                 * @return ModifyAddressTemplateAttributeOutcome
                 */
                ModifyAddressTemplateAttributeOutcome ModifyAddressTemplateAttribute(const Model::ModifyAddressTemplateAttributeRequest &request);
                void ModifyAddressTemplateAttributeAsync(const Model::ModifyAddressTemplateAttributeRequest& request, const ModifyAddressTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressTemplateAttributeOutcomeCallable ModifyAddressTemplateAttributeCallable(const Model::ModifyAddressTemplateAttributeRequest& request);

                /**
                 *本接口（ModifyAddressTemplateGroupAttribute）用于修改IP地址模板集合。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req ModifyAddressTemplateGroupAttributeRequest
                 * @return ModifyAddressTemplateGroupAttributeOutcome
                 */
                ModifyAddressTemplateGroupAttributeOutcome ModifyAddressTemplateGroupAttribute(const Model::ModifyAddressTemplateGroupAttributeRequest &request);
                void ModifyAddressTemplateGroupAttributeAsync(const Model::ModifyAddressTemplateGroupAttributeRequest& request, const ModifyAddressTemplateGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressTemplateGroupAttributeOutcomeCallable ModifyAddressTemplateGroupAttributeCallable(const Model::ModifyAddressTemplateGroupAttributeRequest& request);

                /**
                 *本接口（ModifyAddressesBandwidth）用于调整[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)(简称EIP)带宽，支持后付费EIP, 预付费EIP和带宽包EIP
                 * @param req ModifyAddressesBandwidthRequest
                 * @return ModifyAddressesBandwidthOutcome
                 */
                ModifyAddressesBandwidthOutcome ModifyAddressesBandwidth(const Model::ModifyAddressesBandwidthRequest &request);
                void ModifyAddressesBandwidthAsync(const Model::ModifyAddressesBandwidthRequest& request, const ModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressesBandwidthOutcomeCallable ModifyAddressesBandwidthCallable(const Model::ModifyAddressesBandwidthRequest& request);

                /**
                 *本接口（ModifyAddressesRenewFlag）用于调整EIP续费标识。
                 * @param req ModifyAddressesRenewFlagRequest
                 * @return ModifyAddressesRenewFlagOutcome
                 */
                ModifyAddressesRenewFlagOutcome ModifyAddressesRenewFlag(const Model::ModifyAddressesRenewFlagRequest &request);
                void ModifyAddressesRenewFlagAsync(const Model::ModifyAddressesRenewFlagRequest& request, const ModifyAddressesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressesRenewFlagOutcomeCallable ModifyAddressesRenewFlagCallable(const Model::ModifyAddressesRenewFlagRequest& request);

                /**
                 *本接口（ModifyAssistantCidr）用于批量修改辅助CIDR，支持新增和删除。
                 * @param req ModifyAssistantCidrRequest
                 * @return ModifyAssistantCidrOutcome
                 */
                ModifyAssistantCidrOutcome ModifyAssistantCidr(const Model::ModifyAssistantCidrRequest &request);
                void ModifyAssistantCidrAsync(const Model::ModifyAssistantCidrRequest& request, const ModifyAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssistantCidrOutcomeCallable ModifyAssistantCidrCallable(const Model::ModifyAssistantCidrRequest& request);

                /**
                 *接口用于修改带宽包属性，包括带宽包名称和计费模式
                 * @param req ModifyBandwidthPackageAttributeRequest
                 * @return ModifyBandwidthPackageAttributeOutcome
                 */
                ModifyBandwidthPackageAttributeOutcome ModifyBandwidthPackageAttribute(const Model::ModifyBandwidthPackageAttributeRequest &request);
                void ModifyBandwidthPackageAttributeAsync(const Model::ModifyBandwidthPackageAttributeRequest& request, const ModifyBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBandwidthPackageAttributeOutcomeCallable ModifyBandwidthPackageAttributeCallable(const Model::ModifyBandwidthPackageAttributeRequest& request);

                /**
                 *接口用于调整[共享带宽包](https://cloud.tencent.com/document/product/684/15245)(BWP)带宽
                 * @param req ModifyBandwidthPackageBandwidthRequest
                 * @return ModifyBandwidthPackageBandwidthOutcome
                 */
                ModifyBandwidthPackageBandwidthOutcome ModifyBandwidthPackageBandwidth(const Model::ModifyBandwidthPackageBandwidthRequest &request);
                void ModifyBandwidthPackageBandwidthAsync(const Model::ModifyBandwidthPackageBandwidthRequest& request, const ModifyBandwidthPackageBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBandwidthPackageBandwidthOutcomeCallable ModifyBandwidthPackageBandwidthCallable(const Model::ModifyBandwidthPackageBandwidthRequest& request);

                /**
                 *修改CCN关联实例属性，目前仅修改备注description
                 * @param req ModifyCcnAttachedInstancesAttributeRequest
                 * @return ModifyCcnAttachedInstancesAttributeOutcome
                 */
                ModifyCcnAttachedInstancesAttributeOutcome ModifyCcnAttachedInstancesAttribute(const Model::ModifyCcnAttachedInstancesAttributeRequest &request);
                void ModifyCcnAttachedInstancesAttributeAsync(const Model::ModifyCcnAttachedInstancesAttributeRequest& request, const ModifyCcnAttachedInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcnAttachedInstancesAttributeOutcomeCallable ModifyCcnAttachedInstancesAttributeCallable(const Model::ModifyCcnAttachedInstancesAttributeRequest& request);

                /**
                 *本接口（ModifyCcnAttribute）用于修改云联网（CCN）的相关属性。
                 * @param req ModifyCcnAttributeRequest
                 * @return ModifyCcnAttributeOutcome
                 */
                ModifyCcnAttributeOutcome ModifyCcnAttribute(const Model::ModifyCcnAttributeRequest &request);
                void ModifyCcnAttributeAsync(const Model::ModifyCcnAttributeRequest& request, const ModifyCcnAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcnAttributeOutcomeCallable ModifyCcnAttributeCallable(const Model::ModifyCcnAttributeRequest& request);

                /**
                 *更新云联网策略路由下一跳参数
                 * @param req ModifyCcnPolicyBasedRoutingNextHopAttributeRequest
                 * @return ModifyCcnPolicyBasedRoutingNextHopAttributeOutcome
                 */
                ModifyCcnPolicyBasedRoutingNextHopAttributeOutcome ModifyCcnPolicyBasedRoutingNextHopAttribute(const Model::ModifyCcnPolicyBasedRoutingNextHopAttributeRequest &request);
                void ModifyCcnPolicyBasedRoutingNextHopAttributeAsync(const Model::ModifyCcnPolicyBasedRoutingNextHopAttributeRequest& request, const ModifyCcnPolicyBasedRoutingNextHopAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcnPolicyBasedRoutingNextHopAttributeOutcomeCallable ModifyCcnPolicyBasedRoutingNextHopAttributeCallable(const Model::ModifyCcnPolicyBasedRoutingNextHopAttributeRequest& request);

                /**
                 *更新云联网策略路由匹配规则参数
                 * @param req ModifyCcnPolicyBasedRoutingRuleAttributeRequest
                 * @return ModifyCcnPolicyBasedRoutingRuleAttributeOutcome
                 */
                ModifyCcnPolicyBasedRoutingRuleAttributeOutcome ModifyCcnPolicyBasedRoutingRuleAttribute(const Model::ModifyCcnPolicyBasedRoutingRuleAttributeRequest &request);
                void ModifyCcnPolicyBasedRoutingRuleAttributeAsync(const Model::ModifyCcnPolicyBasedRoutingRuleAttributeRequest& request, const ModifyCcnPolicyBasedRoutingRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcnPolicyBasedRoutingRuleAttributeOutcomeCallable ModifyCcnPolicyBasedRoutingRuleAttributeCallable(const Model::ModifyCcnPolicyBasedRoutingRuleAttributeRequest& request);

                /**
                 *本接口（ModifyCcnRegionBandwidthLimitsType）用于修改后付费云联网实例修改带宽限速策略。
                 * @param req ModifyCcnRegionBandwidthLimitsTypeRequest
                 * @return ModifyCcnRegionBandwidthLimitsTypeOutcome
                 */
                ModifyCcnRegionBandwidthLimitsTypeOutcome ModifyCcnRegionBandwidthLimitsType(const Model::ModifyCcnRegionBandwidthLimitsTypeRequest &request);
                void ModifyCcnRegionBandwidthLimitsTypeAsync(const Model::ModifyCcnRegionBandwidthLimitsTypeRequest& request, const ModifyCcnRegionBandwidthLimitsTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcnRegionBandwidthLimitsTypeOutcomeCallable ModifyCcnRegionBandwidthLimitsTypeCallable(const Model::ModifyCcnRegionBandwidthLimitsTypeRequest& request);

                /**
                 *该接口用于修改云联网路由表名称和备注。
                 * @param req ModifyCcnRouteTablesRequest
                 * @return ModifyCcnRouteTablesOutcome
                 */
                ModifyCcnRouteTablesOutcome ModifyCcnRouteTables(const Model::ModifyCcnRouteTablesRequest &request);
                void ModifyCcnRouteTablesAsync(const Model::ModifyCcnRouteTablesRequest& request, const ModifyCcnRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcnRouteTablesOutcomeCallable ModifyCcnRouteTablesCallable(const Model::ModifyCcnRouteTablesRequest& request);

                /**
                 *修改 IDC通道信息
                 * @param req ModifyCdcLDCXAttributeRequest
                 * @return ModifyCdcLDCXAttributeOutcome
                 */
                ModifyCdcLDCXAttributeOutcome ModifyCdcLDCXAttribute(const Model::ModifyCdcLDCXAttributeRequest &request);
                void ModifyCdcLDCXAttributeAsync(const Model::ModifyCdcLDCXAttributeRequest& request, const ModifyCdcLDCXAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCdcLDCXAttributeOutcomeCallable ModifyCdcLDCXAttributeCallable(const Model::ModifyCdcLDCXAttributeRequest& request);

                /**
                 *修改虚拟连接
                 * @param req ModifyCdcNetPlaneAttributeRequest
                 * @return ModifyCdcNetPlaneAttributeOutcome
                 */
                ModifyCdcNetPlaneAttributeOutcome ModifyCdcNetPlaneAttribute(const Model::ModifyCdcNetPlaneAttributeRequest &request);
                void ModifyCdcNetPlaneAttributeAsync(const Model::ModifyCdcNetPlaneAttributeRequest& request, const ModifyCdcNetPlaneAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCdcNetPlaneAttributeOutcomeCallable ModifyCdcNetPlaneAttributeCallable(const Model::ModifyCdcNetPlaneAttributeRequest& request);

                /**
                 *本接口（ModifyCustomerGatewayAttribute）用于修改对端网关信息。
                 * @param req ModifyCustomerGatewayAttributeRequest
                 * @return ModifyCustomerGatewayAttributeOutcome
                 */
                ModifyCustomerGatewayAttributeOutcome ModifyCustomerGatewayAttribute(const Model::ModifyCustomerGatewayAttributeRequest &request);
                void ModifyCustomerGatewayAttributeAsync(const Model::ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomerGatewayAttributeOutcomeCallable ModifyCustomerGatewayAttributeCallable(const Model::ModifyCustomerGatewayAttributeRequest& request);

                /**
                 *本接口（ModifyDhcpIpAttribute）用于修改DhcpIp属性
                 * @param req ModifyDhcpIpAttributeRequest
                 * @return ModifyDhcpIpAttributeOutcome
                 */
                ModifyDhcpIpAttributeOutcome ModifyDhcpIpAttribute(const Model::ModifyDhcpIpAttributeRequest &request);
                void ModifyDhcpIpAttributeAsync(const Model::ModifyDhcpIpAttributeRequest& request, const ModifyDhcpIpAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDhcpIpAttributeOutcomeCallable ModifyDhcpIpAttributeCallable(const Model::ModifyDhcpIpAttributeRequest& request);

                /**
                 *本接口（ModifyDirectConnectGatewayAttribute）用于修改专线网关属性
                 * @param req ModifyDirectConnectGatewayAttributeRequest
                 * @return ModifyDirectConnectGatewayAttributeOutcome
                 */
                ModifyDirectConnectGatewayAttributeOutcome ModifyDirectConnectGatewayAttribute(const Model::ModifyDirectConnectGatewayAttributeRequest &request);
                void ModifyDirectConnectGatewayAttributeAsync(const Model::ModifyDirectConnectGatewayAttributeRequest& request, const ModifyDirectConnectGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDirectConnectGatewayAttributeOutcomeCallable ModifyDirectConnectGatewayAttributeCallable(const Model::ModifyDirectConnectGatewayAttributeRequest& request);

                /**
                 *本接口（ModifyFlowLogAttribute）用于修改流日志属性。
                 * @param req ModifyFlowLogAttributeRequest
                 * @return ModifyFlowLogAttributeOutcome
                 */
                ModifyFlowLogAttributeOutcome ModifyFlowLogAttribute(const Model::ModifyFlowLogAttributeRequest &request);
                void ModifyFlowLogAttributeAsync(const Model::ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFlowLogAttributeOutcomeCallable ModifyFlowLogAttributeCallable(const Model::ModifyFlowLogAttributeRequest& request);

                /**
                 *本接口（ModifyGatewayFlowQos）用于调整网关流控带宽。
                 * @param req ModifyGatewayFlowQosRequest
                 * @return ModifyGatewayFlowQosOutcome
                 */
                ModifyGatewayFlowQosOutcome ModifyGatewayFlowQos(const Model::ModifyGatewayFlowQosRequest &request);
                void ModifyGatewayFlowQosAsync(const Model::ModifyGatewayFlowQosRequest& request, const ModifyGatewayFlowQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGatewayFlowQosOutcomeCallable ModifyGatewayFlowQosCallable(const Model::ModifyGatewayFlowQosRequest& request);

                /**
                 *修改全局路由表ECMP算法 HASH 策略。
                 * @param req ModifyGlobalRouteECMPAlgorithmRequest
                 * @return ModifyGlobalRouteECMPAlgorithmOutcome
                 */
                ModifyGlobalRouteECMPAlgorithmOutcome ModifyGlobalRouteECMPAlgorithm(const Model::ModifyGlobalRouteECMPAlgorithmRequest &request);
                void ModifyGlobalRouteECMPAlgorithmAsync(const Model::ModifyGlobalRouteECMPAlgorithmRequest& request, const ModifyGlobalRouteECMPAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalRouteECMPAlgorithmOutcomeCallable ModifyGlobalRouteECMPAlgorithmCallable(const Model::ModifyGlobalRouteECMPAlgorithmRequest& request);

                /**
                 *修改全局路由。
                 * @param req ModifyGlobalRoutesRequest
                 * @return ModifyGlobalRoutesOutcome
                 */
                ModifyGlobalRoutesOutcome ModifyGlobalRoutes(const Model::ModifyGlobalRoutesRequest &request);
                void ModifyGlobalRoutesAsync(const Model::ModifyGlobalRoutesRequest& request, const ModifyGlobalRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalRoutesOutcomeCallable ModifyGlobalRoutesCallable(const Model::ModifyGlobalRoutesRequest& request);

                /**
                 *本接口（ModifyHaVipAttribute）用于修改高可用虚拟IP（HAVIP）属性。
                 * @param req ModifyHaVipAttributeRequest
                 * @return ModifyHaVipAttributeOutcome
                 */
                ModifyHaVipAttributeOutcome ModifyHaVipAttribute(const Model::ModifyHaVipAttributeRequest &request);
                void ModifyHaVipAttributeAsync(const Model::ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHaVipAttributeOutcomeCallable ModifyHaVipAttributeCallable(const Model::ModifyHaVipAttributeRequest& request);

                /**
                 *修改高优路由表条目属性。
                 * @param req ModifyHighPriorityRouteAttributeRequest
                 * @return ModifyHighPriorityRouteAttributeOutcome
                 */
                ModifyHighPriorityRouteAttributeOutcome ModifyHighPriorityRouteAttribute(const Model::ModifyHighPriorityRouteAttributeRequest &request);
                void ModifyHighPriorityRouteAttributeAsync(const Model::ModifyHighPriorityRouteAttributeRequest& request, const ModifyHighPriorityRouteAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHighPriorityRouteAttributeOutcomeCallable ModifyHighPriorityRouteAttributeCallable(const Model::ModifyHighPriorityRouteAttributeRequest& request);

                /**
                 *修改高优路由表 HASH 策略。
                 * @param req ModifyHighPriorityRouteECMPAlgorithmRequest
                 * @return ModifyHighPriorityRouteECMPAlgorithmOutcome
                 */
                ModifyHighPriorityRouteECMPAlgorithmOutcome ModifyHighPriorityRouteECMPAlgorithm(const Model::ModifyHighPriorityRouteECMPAlgorithmRequest &request);
                void ModifyHighPriorityRouteECMPAlgorithmAsync(const Model::ModifyHighPriorityRouteECMPAlgorithmRequest& request, const ModifyHighPriorityRouteECMPAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHighPriorityRouteECMPAlgorithmOutcomeCallable ModifyHighPriorityRouteECMPAlgorithmCallable(const Model::ModifyHighPriorityRouteECMPAlgorithmRequest& request);

                /**
                 *修改高优路由表属性
                 * @param req ModifyHighPriorityRouteTableAttributeRequest
                 * @return ModifyHighPriorityRouteTableAttributeOutcome
                 */
                ModifyHighPriorityRouteTableAttributeOutcome ModifyHighPriorityRouteTableAttribute(const Model::ModifyHighPriorityRouteTableAttributeRequest &request);
                void ModifyHighPriorityRouteTableAttributeAsync(const Model::ModifyHighPriorityRouteTableAttributeRequest& request, const ModifyHighPriorityRouteTableAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHighPriorityRouteTableAttributeOutcomeCallable ModifyHighPriorityRouteTableAttributeCallable(const Model::ModifyHighPriorityRouteTableAttributeRequest& request);

                /**
                 *本接口（ModifyIPv6AddressesAttributes）用于修改弹性公网 IPv6（简称EIPv6）实例名称。

- 支持对弹性公网 IPv6 和传统弹性公网 IPv6 实例名称进行修改。
                 * @param req ModifyIPv6AddressesAttributesRequest
                 * @return ModifyIPv6AddressesAttributesOutcome
                 */
                ModifyIPv6AddressesAttributesOutcome ModifyIPv6AddressesAttributes(const Model::ModifyIPv6AddressesAttributesRequest &request);
                void ModifyIPv6AddressesAttributesAsync(const Model::ModifyIPv6AddressesAttributesRequest& request, const ModifyIPv6AddressesAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIPv6AddressesAttributesOutcomeCallable ModifyIPv6AddressesAttributesCallable(const Model::ModifyIPv6AddressesAttributesRequest& request);

                /**
                 *本接口（ModifyIPv6AddressesBandwidth）用于调整弹性公网 IPv6（简称EIPv6）实例的带宽上限。
                 * @param req ModifyIPv6AddressesBandwidthRequest
                 * @return ModifyIPv6AddressesBandwidthOutcome
                 */
                ModifyIPv6AddressesBandwidthOutcome ModifyIPv6AddressesBandwidth(const Model::ModifyIPv6AddressesBandwidthRequest &request);
                void ModifyIPv6AddressesBandwidthAsync(const Model::ModifyIPv6AddressesBandwidthRequest& request, const ModifyIPv6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIPv6AddressesBandwidthOutcomeCallable ModifyIPv6AddressesBandwidthCallable(const Model::ModifyIPv6AddressesBandwidthRequest& request);

                /**
                 *本接口（ModifyIp6AddressesBandwidth）用于调整传统弹性公网 IPv6 实例的带宽上限。

- 仅支持对传统弹性公网 IPv6 实例的带宽上限进行调整。
- 如需调整弹性公网 IPv6 实例的带宽上限，请使用 [ModifyIPv6AddressesBandwidth](https://cloud.tencent.com/document/product/215/113674) 接口。
                 * @param req ModifyIp6AddressesBandwidthRequest
                 * @return ModifyIp6AddressesBandwidthOutcome
                 */
                ModifyIp6AddressesBandwidthOutcome ModifyIp6AddressesBandwidth(const Model::ModifyIp6AddressesBandwidthRequest &request);
                void ModifyIp6AddressesBandwidthAsync(const Model::ModifyIp6AddressesBandwidthRequest& request, const ModifyIp6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIp6AddressesBandwidthOutcomeCallable ModifyIp6AddressesBandwidthCallable(const Model::ModifyIp6AddressesBandwidthRequest& request);

                /**
                 *该接口用于修改IPV6转换规则，当前仅支持修改转换规则名称，IPV4地址和IPV4端口号
                 * @param req ModifyIp6RuleRequest
                 * @return ModifyIp6RuleOutcome
                 */
                ModifyIp6RuleOutcome ModifyIp6Rule(const Model::ModifyIp6RuleRequest &request);
                void ModifyIp6RuleAsync(const Model::ModifyIp6RuleRequest& request, const ModifyIp6RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIp6RuleOutcomeCallable ModifyIp6RuleCallable(const Model::ModifyIp6RuleRequest& request);

                /**
                 *该接口用于修改IP6转换实例属性，当前仅支持修改实例名称。
                 * @param req ModifyIp6TranslatorRequest
                 * @return ModifyIp6TranslatorOutcome
                 */
                ModifyIp6TranslatorOutcome ModifyIp6Translator(const Model::ModifyIp6TranslatorRequest &request);
                void ModifyIp6TranslatorAsync(const Model::ModifyIp6TranslatorRequest& request, const ModifyIp6TranslatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIp6TranslatorOutcomeCallable ModifyIp6TranslatorCallable(const Model::ModifyIp6TranslatorRequest& request);

                /**
                 *本接口（ModifyIpv6AddressesAttribute）用于修改弹性网卡内网IPv6地址属性。
                 * @param req ModifyIpv6AddressesAttributeRequest
                 * @return ModifyIpv6AddressesAttributeOutcome
                 */
                ModifyIpv6AddressesAttributeOutcome ModifyIpv6AddressesAttribute(const Model::ModifyIpv6AddressesAttributeRequest &request);
                void ModifyIpv6AddressesAttributeAsync(const Model::ModifyIpv6AddressesAttributeRequest& request, const ModifyIpv6AddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIpv6AddressesAttributeOutcomeCallable ModifyIpv6AddressesAttributeCallable(const Model::ModifyIpv6AddressesAttributeRequest& request);

                /**
                 *本接口（ModifyLocalGateway）用于修改CDC的本地网关。
                 * @param req ModifyLocalGatewayRequest
                 * @return ModifyLocalGatewayOutcome
                 */
                ModifyLocalGatewayOutcome ModifyLocalGateway(const Model::ModifyLocalGatewayRequest &request);
                void ModifyLocalGatewayAsync(const Model::ModifyLocalGatewayRequest& request, const ModifyLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLocalGatewayOutcomeCallable ModifyLocalGatewayCallable(const Model::ModifyLocalGatewayRequest& request);

                /**
                 *本接口（ModifyNatGatewayAttribute）用于修改NAT网关的属性。
                 * @param req ModifyNatGatewayAttributeRequest
                 * @return ModifyNatGatewayAttributeOutcome
                 */
                ModifyNatGatewayAttributeOutcome ModifyNatGatewayAttribute(const Model::ModifyNatGatewayAttributeRequest &request);
                void ModifyNatGatewayAttributeAsync(const Model::ModifyNatGatewayAttributeRequest& request, const ModifyNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatGatewayAttributeOutcomeCallable ModifyNatGatewayAttributeCallable(const Model::ModifyNatGatewayAttributeRequest& request);

                /**
                 *本接口（ModifyNatGatewayDestinationIpPortTranslationNatRule）用于修改NAT网关端口转发规则。
                 * @param req ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome ModifyNatGatewayDestinationIpPortTranslationNatRule(const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void ModifyNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const ModifyNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable ModifyNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *本接口（ModifyNatGatewaySourceIpTranslationNatRule）用于修改NAT网关SNAT转发规则。
                 * @param req ModifyNatGatewaySourceIpTranslationNatRuleRequest
                 * @return ModifyNatGatewaySourceIpTranslationNatRuleOutcome
                 */
                ModifyNatGatewaySourceIpTranslationNatRuleOutcome ModifyNatGatewaySourceIpTranslationNatRule(const Model::ModifyNatGatewaySourceIpTranslationNatRuleRequest &request);
                void ModifyNatGatewaySourceIpTranslationNatRuleAsync(const Model::ModifyNatGatewaySourceIpTranslationNatRuleRequest& request, const ModifyNatGatewaySourceIpTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatGatewaySourceIpTranslationNatRuleOutcomeCallable ModifyNatGatewaySourceIpTranslationNatRuleCallable(const Model::ModifyNatGatewaySourceIpTranslationNatRuleRequest& request);

                /**
                 *本接口(ModifyNetDetect)用于修改网络探测参数。
                 * @param req ModifyNetDetectRequest
                 * @return ModifyNetDetectOutcome
                 */
                ModifyNetDetectOutcome ModifyNetDetect(const Model::ModifyNetDetectRequest &request);
                void ModifyNetDetectAsync(const Model::ModifyNetDetectRequest& request, const ModifyNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetDetectOutcomeCallable ModifyNetDetectCallable(const Model::ModifyNetDetectRequest& request);

                /**
                 *本接口（ModifyNetworkAclAttribute）用于修改网络ACL属性。
                 * @param req ModifyNetworkAclAttributeRequest
                 * @return ModifyNetworkAclAttributeOutcome
                 */
                ModifyNetworkAclAttributeOutcome ModifyNetworkAclAttribute(const Model::ModifyNetworkAclAttributeRequest &request);
                void ModifyNetworkAclAttributeAsync(const Model::ModifyNetworkAclAttributeRequest& request, const ModifyNetworkAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkAclAttributeOutcomeCallable ModifyNetworkAclAttributeCallable(const Model::ModifyNetworkAclAttributeRequest& request);

                /**
                 *本接口（ModifyNetworkAclEntries）用于修改（包括添加和删除）网络ACL的入站规则和出站规则。在NetworkAclEntrySet参数中：
* 若同时传入入站规则和出站规则，则重置原有的入站规则和出站规则，并分别导入传入的规则。
* 若仅传入入站规则，则仅重置原有的入站规则，并导入传入的规则，不影响原有的出站规则（若仅传入出站规则，处理方式类似入站方向）。
                 * @param req ModifyNetworkAclEntriesRequest
                 * @return ModifyNetworkAclEntriesOutcome
                 */
                ModifyNetworkAclEntriesOutcome ModifyNetworkAclEntries(const Model::ModifyNetworkAclEntriesRequest &request);
                void ModifyNetworkAclEntriesAsync(const Model::ModifyNetworkAclEntriesRequest& request, const ModifyNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkAclEntriesOutcomeCallable ModifyNetworkAclEntriesCallable(const Model::ModifyNetworkAclEntriesRequest& request);

                /**
                 *本接口（ModifyNetworkAclQuintupleEntries）用于修改网络ACL五元组的入站规则和出站规则。在NetworkAclQuintupleEntrySet参数中：NetworkAclQuintupleEntry需要提供NetworkAclQuintupleEntryId。
                 * @param req ModifyNetworkAclQuintupleEntriesRequest
                 * @return ModifyNetworkAclQuintupleEntriesOutcome
                 */
                ModifyNetworkAclQuintupleEntriesOutcome ModifyNetworkAclQuintupleEntries(const Model::ModifyNetworkAclQuintupleEntriesRequest &request);
                void ModifyNetworkAclQuintupleEntriesAsync(const Model::ModifyNetworkAclQuintupleEntriesRequest& request, const ModifyNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkAclQuintupleEntriesOutcomeCallable ModifyNetworkAclQuintupleEntriesCallable(const Model::ModifyNetworkAclQuintupleEntriesRequest& request);

                /**
                 *本接口（ModifyNetworkInterfaceAttribute）用于修改弹性网卡属性。
                 * @param req ModifyNetworkInterfaceAttributeRequest
                 * @return ModifyNetworkInterfaceAttributeOutcome
                 */
                ModifyNetworkInterfaceAttributeOutcome ModifyNetworkInterfaceAttribute(const Model::ModifyNetworkInterfaceAttributeRequest &request);
                void ModifyNetworkInterfaceAttributeAsync(const Model::ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkInterfaceAttributeOutcomeCallable ModifyNetworkInterfaceAttributeCallable(const Model::ModifyNetworkInterfaceAttributeRequest& request);

                /**
                 *本接口（ModifyNetworkInterfaceQos）用于修改弹性网卡服务质量。
                 * @param req ModifyNetworkInterfaceQosRequest
                 * @return ModifyNetworkInterfaceQosOutcome
                 */
                ModifyNetworkInterfaceQosOutcome ModifyNetworkInterfaceQos(const Model::ModifyNetworkInterfaceQosRequest &request);
                void ModifyNetworkInterfaceQosAsync(const Model::ModifyNetworkInterfaceQosRequest& request, const ModifyNetworkInterfaceQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkInterfaceQosOutcomeCallable ModifyNetworkInterfaceQosCallable(const Model::ModifyNetworkInterfaceQosRequest& request);

                /**
                 *本接口（ModifyPrivateIpAddressesAttribute）用于修改弹性网卡内网IP属性。
                 * @param req ModifyPrivateIpAddressesAttributeRequest
                 * @return ModifyPrivateIpAddressesAttributeOutcome
                 */
                ModifyPrivateIpAddressesAttributeOutcome ModifyPrivateIpAddressesAttribute(const Model::ModifyPrivateIpAddressesAttributeRequest &request);
                void ModifyPrivateIpAddressesAttributeAsync(const Model::ModifyPrivateIpAddressesAttributeRequest& request, const ModifyPrivateIpAddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateIpAddressesAttributeOutcomeCallable ModifyPrivateIpAddressesAttributeCallable(const Model::ModifyPrivateIpAddressesAttributeRequest& request);

                /**
                 *本接口（ModifyPrivateNatGatewayAttribute）用于修改私网NAT网关属性
                 * @param req ModifyPrivateNatGatewayAttributeRequest
                 * @return ModifyPrivateNatGatewayAttributeOutcome
                 */
                ModifyPrivateNatGatewayAttributeOutcome ModifyPrivateNatGatewayAttribute(const Model::ModifyPrivateNatGatewayAttributeRequest &request);
                void ModifyPrivateNatGatewayAttributeAsync(const Model::ModifyPrivateNatGatewayAttributeRequest& request, const ModifyPrivateNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateNatGatewayAttributeOutcomeCallable ModifyPrivateNatGatewayAttributeCallable(const Model::ModifyPrivateNatGatewayAttributeRequest& request);

                /**
                 *本接口（ModifyPrivateNatGatewayDestinationIpPortTranslationNatRule）用于修改私网NAT网关目的端口转换规则
                 * @param req ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleOutcome ModifyPrivateNatGatewayDestinationIpPortTranslationNatRule(const Model::ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::ModifyPrivateNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *本接口（ModifyPrivateNatGatewayTranslationAclRule）用于修改私网NAT网关源端转换访问控制规则
                 * @param req ModifyPrivateNatGatewayTranslationAclRuleRequest
                 * @return ModifyPrivateNatGatewayTranslationAclRuleOutcome
                 */
                ModifyPrivateNatGatewayTranslationAclRuleOutcome ModifyPrivateNatGatewayTranslationAclRule(const Model::ModifyPrivateNatGatewayTranslationAclRuleRequest &request);
                void ModifyPrivateNatGatewayTranslationAclRuleAsync(const Model::ModifyPrivateNatGatewayTranslationAclRuleRequest& request, const ModifyPrivateNatGatewayTranslationAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateNatGatewayTranslationAclRuleOutcomeCallable ModifyPrivateNatGatewayTranslationAclRuleCallable(const Model::ModifyPrivateNatGatewayTranslationAclRuleRequest& request);

                /**
                 *本接口（ModifyPrivateNatGatewayTranslationNatRule）用于修改私网NAT网关源端转换规则
                 * @param req ModifyPrivateNatGatewayTranslationNatRuleRequest
                 * @return ModifyPrivateNatGatewayTranslationNatRuleOutcome
                 */
                ModifyPrivateNatGatewayTranslationNatRuleOutcome ModifyPrivateNatGatewayTranslationNatRule(const Model::ModifyPrivateNatGatewayTranslationNatRuleRequest &request);
                void ModifyPrivateNatGatewayTranslationNatRuleAsync(const Model::ModifyPrivateNatGatewayTranslationNatRuleRequest& request, const ModifyPrivateNatGatewayTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateNatGatewayTranslationNatRuleOutcomeCallable ModifyPrivateNatGatewayTranslationNatRuleCallable(const Model::ModifyPrivateNatGatewayTranslationNatRuleRequest& request);

                /**
                 *修改内网保留 IP
                 * @param req ModifyReserveIpAddressRequest
                 * @return ModifyReserveIpAddressOutcome
                 */
                ModifyReserveIpAddressOutcome ModifyReserveIpAddress(const Model::ModifyReserveIpAddressRequest &request);
                void ModifyReserveIpAddressAsync(const Model::ModifyReserveIpAddressRequest& request, const ModifyReserveIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReserveIpAddressOutcomeCallable ModifyReserveIpAddressCallable(const Model::ModifyReserveIpAddressRequest& request);

                /**
                 *本接口（ModifyRoutePolicyAttribute）用于修改路由接收策略属性属性。
                 * @param req ModifyRoutePolicyAttributeRequest
                 * @return ModifyRoutePolicyAttributeOutcome
                 */
                ModifyRoutePolicyAttributeOutcome ModifyRoutePolicyAttribute(const Model::ModifyRoutePolicyAttributeRequest &request);
                void ModifyRoutePolicyAttributeAsync(const Model::ModifyRoutePolicyAttributeRequest& request, const ModifyRoutePolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoutePolicyAttributeOutcomeCallable ModifyRoutePolicyAttributeCallable(const Model::ModifyRoutePolicyAttributeRequest& request);

                /**
                 *本接口（ModifyRouteTableAttribute）用于修改路由表（RouteTable）属性。
                 * @param req ModifyRouteTableAttributeRequest
                 * @return ModifyRouteTableAttributeOutcome
                 */
                ModifyRouteTableAttributeOutcome ModifyRouteTableAttribute(const Model::ModifyRouteTableAttributeRequest &request);
                void ModifyRouteTableAttributeAsync(const Model::ModifyRouteTableAttributeRequest& request, const ModifyRouteTableAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRouteTableAttributeOutcomeCallable ModifyRouteTableAttributeCallable(const Model::ModifyRouteTableAttributeRequest& request);

                /**
                 *该接口用于编辑云联网路由表选择策略
                 * @param req ModifyRouteTableSelectionPoliciesRequest
                 * @return ModifyRouteTableSelectionPoliciesOutcome
                 */
                ModifyRouteTableSelectionPoliciesOutcome ModifyRouteTableSelectionPolicies(const Model::ModifyRouteTableSelectionPoliciesRequest &request);
                void ModifyRouteTableSelectionPoliciesAsync(const Model::ModifyRouteTableSelectionPoliciesRequest& request, const ModifyRouteTableSelectionPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRouteTableSelectionPoliciesOutcomeCallable ModifyRouteTableSelectionPoliciesCallable(const Model::ModifyRouteTableSelectionPoliciesRequest& request);

                /**
                 *本接口（ModifySecurityGroupAttribute）用于修改安全组（SecurityGroupPolicy）属性。
                 * @param req ModifySecurityGroupAttributeRequest
                 * @return ModifySecurityGroupAttributeOutcome
                 */
                ModifySecurityGroupAttributeOutcome ModifySecurityGroupAttribute(const Model::ModifySecurityGroupAttributeRequest &request);
                void ModifySecurityGroupAttributeAsync(const Model::ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupAttributeOutcomeCallable ModifySecurityGroupAttributeCallable(const Model::ModifySecurityGroupAttributeRequest& request);

                /**
                 *本接口（ModifySecurityGroupPolicies）用于重置安全组出站和入站规则（SecurityGroupPolicy）。

<ul>
<li>该接口不支持自定义索引 PolicyIndex。</li>
<li>在 SecurityGroupPolicySet 参数中：<ul>
	<li> 如果指定 SecurityGroupPolicySet.Version 为0, 表示清空所有规则，并忽略 Egress 和 Ingress。</li>
	<li> 如果指定 SecurityGroupPolicySet.Version 不为0, 在添加出站和入站规则（Egress 和 Ingress）时：<ul>
		<li>Protocol 字段支持输入 TCP, UDP, ICMP, ICMPV6, GRE, ALL。</li>
		<li>CidrBlock 字段允许输入符合 cidr 格式标准的任意字符串。在基础网络中，如果 CidrBlock 包含您的账户内的云服务器之外的设备在腾讯云的内网 IP，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。</li>
		<li>Ipv6CidrBlock 字段允许输入符合 IPv6 cidr 格式标准的任意字符串。在基础网络中，如果Ipv6CidrBlock 包含您的账户内的云服务器之外的设备在腾讯云的内网 IPv6，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。</li>
		<li>SecurityGroupId 字段允许输入与待修改的安全组位于相同项目中的安全组 ID，包括这个安全组 ID 本身，代表安全组下所有云服务器的内网 IP。使用这个字段时，这条规则用来匹配网络报文的过程中会随着被使用的这个ID所关联的云服务器变化而变化，不需要重新修改。</li>
		<li>Port 字段允许输入一个单独端口号，或者用减号分隔的两个端口号代表端口范围，例如80或8000-8010。只有当 Protocol 字段是 TCP 或 UDP 时，Port 字段才被接受。</li>
		<li>Action 字段只允许输入 ACCEPT 或 DROP。</li>
		<li>CidrBlock, Ipv6CidrBlock, SecurityGroupId, AddressTemplate 四者是排他关系，不允许同时输入，Protocol + Port 和 ServiceTemplate 二者是排他关系，不允许同时输入。</li>
</ul></li></ul></li>
</ul>
                 * @param req ModifySecurityGroupPoliciesRequest
                 * @return ModifySecurityGroupPoliciesOutcome
                 */
                ModifySecurityGroupPoliciesOutcome ModifySecurityGroupPolicies(const Model::ModifySecurityGroupPoliciesRequest &request);
                void ModifySecurityGroupPoliciesAsync(const Model::ModifySecurityGroupPoliciesRequest& request, const ModifySecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupPoliciesOutcomeCallable ModifySecurityGroupPoliciesCallable(const Model::ModifySecurityGroupPoliciesRequest& request);

                /**
                 *本接口（ModifyServiceTemplateAttribute）用于修改协议端口模板。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req ModifyServiceTemplateAttributeRequest
                 * @return ModifyServiceTemplateAttributeOutcome
                 */
                ModifyServiceTemplateAttributeOutcome ModifyServiceTemplateAttribute(const Model::ModifyServiceTemplateAttributeRequest &request);
                void ModifyServiceTemplateAttributeAsync(const Model::ModifyServiceTemplateAttributeRequest& request, const ModifyServiceTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceTemplateAttributeOutcomeCallable ModifyServiceTemplateAttributeCallable(const Model::ModifyServiceTemplateAttributeRequest& request);

                /**
                 *本接口（ModifyServiceTemplateGroupAttribute）用于修改协议端口模板集合。
>?本接口为异步接口，可调用 [DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037) 接口查询任务执行结果，待任务执行成功后再进行其他操作。
>
                 * @param req ModifyServiceTemplateGroupAttributeRequest
                 * @return ModifyServiceTemplateGroupAttributeOutcome
                 */
                ModifyServiceTemplateGroupAttributeOutcome ModifyServiceTemplateGroupAttribute(const Model::ModifyServiceTemplateGroupAttributeRequest &request);
                void ModifyServiceTemplateGroupAttributeAsync(const Model::ModifyServiceTemplateGroupAttributeRequest& request, const ModifyServiceTemplateGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceTemplateGroupAttributeOutcomeCallable ModifyServiceTemplateGroupAttributeCallable(const Model::ModifyServiceTemplateGroupAttributeRequest& request);

                /**
                 *本接口（ModifySnapshotPolicies）用于修改快照策略。
                 * @param req ModifySnapshotPoliciesRequest
                 * @return ModifySnapshotPoliciesOutcome
                 */
                ModifySnapshotPoliciesOutcome ModifySnapshotPolicies(const Model::ModifySnapshotPoliciesRequest &request);
                void ModifySnapshotPoliciesAsync(const Model::ModifySnapshotPoliciesRequest& request, const ModifySnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotPoliciesOutcomeCallable ModifySnapshotPoliciesCallable(const Model::ModifySnapshotPoliciesRequest& request);

                /**
                 *本接口（ModifySubnetAttribute）用于修改子网属性。
                 * @param req ModifySubnetAttributeRequest
                 * @return ModifySubnetAttributeOutcome
                 */
                ModifySubnetAttributeOutcome ModifySubnetAttribute(const Model::ModifySubnetAttributeRequest &request);
                void ModifySubnetAttributeAsync(const Model::ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubnetAttributeOutcomeCallable ModifySubnetAttributeCallable(const Model::ModifySubnetAttributeRequest& request);

                /**
                 *修改模板对象中的IP地址、协议端口、IP地址组、协议端口组。
                 * @param req ModifyTemplateMemberRequest
                 * @return ModifyTemplateMemberOutcome
                 */
                ModifyTemplateMemberOutcome ModifyTemplateMember(const Model::ModifyTemplateMemberRequest &request);
                void ModifyTemplateMemberAsync(const Model::ModifyTemplateMemberRequest& request, const ModifyTemplateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTemplateMemberOutcomeCallable ModifyTemplateMemberCallable(const Model::ModifyTemplateMemberRequest& request);

                /**
                 *本接口（ModifyTrafficMirrorAttribute）用于修改流量镜像实例属性。
注意：只支持修改名字和描述信息
                 * @param req ModifyTrafficMirrorAttributeRequest
                 * @return ModifyTrafficMirrorAttributeOutcome
                 */
                ModifyTrafficMirrorAttributeOutcome ModifyTrafficMirrorAttribute(const Model::ModifyTrafficMirrorAttributeRequest &request);
                void ModifyTrafficMirrorAttributeAsync(const Model::ModifyTrafficMirrorAttributeRequest& request, const ModifyTrafficMirrorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTrafficMirrorAttributeOutcomeCallable ModifyTrafficMirrorAttributeCallable(const Model::ModifyTrafficMirrorAttributeRequest& request);

                /**
                 *本接口（ModifyVpcAttribute）用于修改私有网络（VPC）的相关属性。
                 * @param req ModifyVpcAttributeRequest
                 * @return ModifyVpcAttributeOutcome
                 */
                ModifyVpcAttributeOutcome ModifyVpcAttribute(const Model::ModifyVpcAttributeRequest &request);
                void ModifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcAttributeOutcomeCallable ModifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request);

                /**
                 *本接口（ModifyVpcEndPointAttribute）用于修改终端节点属性。
                 * @param req ModifyVpcEndPointAttributeRequest
                 * @return ModifyVpcEndPointAttributeOutcome
                 */
                ModifyVpcEndPointAttributeOutcome ModifyVpcEndPointAttribute(const Model::ModifyVpcEndPointAttributeRequest &request);
                void ModifyVpcEndPointAttributeAsync(const Model::ModifyVpcEndPointAttributeRequest& request, const ModifyVpcEndPointAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcEndPointAttributeOutcomeCallable ModifyVpcEndPointAttributeCallable(const Model::ModifyVpcEndPointAttributeRequest& request);

                /**
                 *本接口（ModifyVpcEndPointServiceAttribute）用于修改终端节点服务属性。
                 * @param req ModifyVpcEndPointServiceAttributeRequest
                 * @return ModifyVpcEndPointServiceAttributeOutcome
                 */
                ModifyVpcEndPointServiceAttributeOutcome ModifyVpcEndPointServiceAttribute(const Model::ModifyVpcEndPointServiceAttributeRequest &request);
                void ModifyVpcEndPointServiceAttributeAsync(const Model::ModifyVpcEndPointServiceAttributeRequest& request, const ModifyVpcEndPointServiceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcEndPointServiceAttributeOutcomeCallable ModifyVpcEndPointServiceAttributeCallable(const Model::ModifyVpcEndPointServiceAttributeRequest& request);

                /**
                 *本接口（ModifyVpcEndPointServiceWhiteList）用于修改终端节点服务白名单属性。
                 * @param req ModifyVpcEndPointServiceWhiteListRequest
                 * @return ModifyVpcEndPointServiceWhiteListOutcome
                 */
                ModifyVpcEndPointServiceWhiteListOutcome ModifyVpcEndPointServiceWhiteList(const Model::ModifyVpcEndPointServiceWhiteListRequest &request);
                void ModifyVpcEndPointServiceWhiteListAsync(const Model::ModifyVpcEndPointServiceWhiteListRequest& request, const ModifyVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcEndPointServiceWhiteListOutcomeCallable ModifyVpcEndPointServiceWhiteListCallable(const Model::ModifyVpcEndPointServiceWhiteListRequest& request);

                /**
                 *本接口（ModifyVpcPeeringConnection）用于修改私有网络对等连接属性。
                 * @param req ModifyVpcPeeringConnectionRequest
                 * @return ModifyVpcPeeringConnectionOutcome
                 */
                ModifyVpcPeeringConnectionOutcome ModifyVpcPeeringConnection(const Model::ModifyVpcPeeringConnectionRequest &request);
                void ModifyVpcPeeringConnectionAsync(const Model::ModifyVpcPeeringConnectionRequest& request, const ModifyVpcPeeringConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcPeeringConnectionOutcomeCallable ModifyVpcPeeringConnectionCallable(const Model::ModifyVpcPeeringConnectionRequest& request);

                /**
                 *本接口（ModifyVpnConnectionAttribute）用于修改VPN通道。
                 * @param req ModifyVpnConnectionAttributeRequest
                 * @return ModifyVpnConnectionAttributeOutcome
                 */
                ModifyVpnConnectionAttributeOutcome ModifyVpnConnectionAttribute(const Model::ModifyVpnConnectionAttributeRequest &request);
                void ModifyVpnConnectionAttributeAsync(const Model::ModifyVpnConnectionAttributeRequest& request, const ModifyVpnConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnConnectionAttributeOutcomeCallable ModifyVpnConnectionAttributeCallable(const Model::ModifyVpnConnectionAttributeRequest& request);

                /**
                 *本接口（ModifyVpnGatewayAttribute）用于修改VPN网关属性。
                 * @param req ModifyVpnGatewayAttributeRequest
                 * @return ModifyVpnGatewayAttributeOutcome
                 */
                ModifyVpnGatewayAttributeOutcome ModifyVpnGatewayAttribute(const Model::ModifyVpnGatewayAttributeRequest &request);
                void ModifyVpnGatewayAttributeAsync(const Model::ModifyVpnGatewayAttributeRequest& request, const ModifyVpnGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewayAttributeOutcomeCallable ModifyVpnGatewayAttributeCallable(const Model::ModifyVpnGatewayAttributeRequest& request);

                /**
                 *本接口（ModifyVpnGatewayCcnRoutes）用于修改VPN网关云联网路由。
                 * @param req ModifyVpnGatewayCcnRoutesRequest
                 * @return ModifyVpnGatewayCcnRoutesOutcome
                 */
                ModifyVpnGatewayCcnRoutesOutcome ModifyVpnGatewayCcnRoutes(const Model::ModifyVpnGatewayCcnRoutesRequest &request);
                void ModifyVpnGatewayCcnRoutesAsync(const Model::ModifyVpnGatewayCcnRoutesRequest& request, const ModifyVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewayCcnRoutesOutcomeCallable ModifyVpnGatewayCcnRoutesCallable(const Model::ModifyVpnGatewayCcnRoutesRequest& request);

                /**
                 *本接口（ModifyVpnGatewayRoutes）用于修改VPN路由是否启用。
                 * @param req ModifyVpnGatewayRoutesRequest
                 * @return ModifyVpnGatewayRoutesOutcome
                 */
                ModifyVpnGatewayRoutesOutcome ModifyVpnGatewayRoutes(const Model::ModifyVpnGatewayRoutesRequest &request);
                void ModifyVpnGatewayRoutesAsync(const Model::ModifyVpnGatewayRoutesRequest& request, const ModifyVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewayRoutesOutcomeCallable ModifyVpnGatewayRoutesCallable(const Model::ModifyVpnGatewayRoutesRequest& request);

                /**
                 *更新SslVpnClient证书
                 * @param req ModifyVpnGatewaySslClientCertRequest
                 * @return ModifyVpnGatewaySslClientCertOutcome
                 */
                ModifyVpnGatewaySslClientCertOutcome ModifyVpnGatewaySslClientCert(const Model::ModifyVpnGatewaySslClientCertRequest &request);
                void ModifyVpnGatewaySslClientCertAsync(const Model::ModifyVpnGatewaySslClientCertRequest& request, const ModifyVpnGatewaySslClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewaySslClientCertOutcomeCallable ModifyVpnGatewaySslClientCertCallable(const Model::ModifyVpnGatewaySslClientCertRequest& request);

                /**
                 *本接口用于修改 SSL-VPN 服务端属性
                 * @param req ModifyVpnGatewaySslServerRequest
                 * @return ModifyVpnGatewaySslServerOutcome
                 */
                ModifyVpnGatewaySslServerOutcome ModifyVpnGatewaySslServer(const Model::ModifyVpnGatewaySslServerRequest &request);
                void ModifyVpnGatewaySslServerAsync(const Model::ModifyVpnGatewaySslServerRequest& request, const ModifyVpnGatewaySslServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewaySslServerOutcomeCallable ModifyVpnGatewaySslServerCallable(const Model::ModifyVpnGatewaySslServerRequest& request);

                /**
                 *本接口（NotifyRoutes）用于路由表列表页操作增加“发布到云联网”，发布路由到云联网。
                 * @param req NotifyRoutesRequest
                 * @return NotifyRoutesOutcome
                 */
                NotifyRoutesOutcome NotifyRoutes(const Model::NotifyRoutesRequest &request);
                void NotifyRoutesAsync(const Model::NotifyRoutesRequest& request, const NotifyRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                NotifyRoutesOutcomeCallable NotifyRoutesCallable(const Model::NotifyRoutesRequest& request);

                /**
                 *刷新专线直连nat路由，更新nat到专线的路由表
                 * @param req RefreshDirectConnectGatewayRouteToNatGatewayRequest
                 * @return RefreshDirectConnectGatewayRouteToNatGatewayOutcome
                 */
                RefreshDirectConnectGatewayRouteToNatGatewayOutcome RefreshDirectConnectGatewayRouteToNatGateway(const Model::RefreshDirectConnectGatewayRouteToNatGatewayRequest &request);
                void RefreshDirectConnectGatewayRouteToNatGatewayAsync(const Model::RefreshDirectConnectGatewayRouteToNatGatewayRequest& request, const RefreshDirectConnectGatewayRouteToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefreshDirectConnectGatewayRouteToNatGatewayOutcomeCallable RefreshDirectConnectGatewayRouteToNatGatewayCallable(const Model::RefreshDirectConnectGatewayRouteToNatGatewayRequest& request);

                /**
                 *本接口（RejectAttachCcnInstances）用于跨账号关联实例时，云联网所有者拒绝关联操作。

                 * @param req RejectAttachCcnInstancesRequest
                 * @return RejectAttachCcnInstancesOutcome
                 */
                RejectAttachCcnInstancesOutcome RejectAttachCcnInstances(const Model::RejectAttachCcnInstancesRequest &request);
                void RejectAttachCcnInstancesAsync(const Model::RejectAttachCcnInstancesRequest& request, const RejectAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectAttachCcnInstancesOutcomeCallable RejectAttachCcnInstancesCallable(const Model::RejectAttachCcnInstancesRequest& request);

                /**
                 *本接口（RejectVpcPeeringConnection）用于驳回对等连接请求。
                 * @param req RejectVpcPeeringConnectionRequest
                 * @return RejectVpcPeeringConnectionOutcome
                 */
                RejectVpcPeeringConnectionOutcome RejectVpcPeeringConnection(const Model::RejectVpcPeeringConnectionRequest &request);
                void RejectVpcPeeringConnectionAsync(const Model::RejectVpcPeeringConnectionRequest& request, const RejectVpcPeeringConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectVpcPeeringConnectionOutcomeCallable RejectVpcPeeringConnectionCallable(const Model::RejectVpcPeeringConnectionRequest& request);

                /**
                 *本接口 (ReleaseAddresses) 用于释放一个或多个[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）。
* 该操作不可逆，释放后 EIP 关联的 IP 地址将不再属于您的名下。
* 只有状态为 UNBIND 的 EIP 才能进行释放操作。
                 * @param req ReleaseAddressesRequest
                 * @return ReleaseAddressesOutcome
                 */
                ReleaseAddressesOutcome ReleaseAddresses(const Model::ReleaseAddressesRequest &request);
                void ReleaseAddressesAsync(const Model::ReleaseAddressesRequest& request, const ReleaseAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseAddressesOutcomeCallable ReleaseAddressesCallable(const Model::ReleaseAddressesRequest& request);

                /**
                 *本接口（ReleaseIPv6Addresses）用于释放一个或多个弹性公网IPv6（简称EIPv6）实例。

- 支持对已申请到的弹性公网 IPv6 实例进行释放操作，如需再次使用，请重新申请。
- 只有状态为 UNBIND 的 EIPv6 实例才能进行释放操作。
                 * @param req ReleaseIPv6AddressesRequest
                 * @return ReleaseIPv6AddressesOutcome
                 */
                ReleaseIPv6AddressesOutcome ReleaseIPv6Addresses(const Model::ReleaseIPv6AddressesRequest &request);
                void ReleaseIPv6AddressesAsync(const Model::ReleaseIPv6AddressesRequest& request, const ReleaseIPv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseIPv6AddressesOutcomeCallable ReleaseIPv6AddressesCallable(const Model::ReleaseIPv6AddressesRequest& request);

                /**
                 *本接口（ReleaseIp6AddressesBandwidth）用于为传统弹性公网 IPv6 实例关闭 IPv6 公网带宽。

- 传统弹性公网 IPv6 实例关闭公网带宽后，仍具备 IPv6 内网通信能力。
- 如需再次开通 IPv6 公网带宽，请使用 [AllocateIp6AddressesBandwidth](https://cloud.tencent.com/document/product/215/40090) 接口进行开通。
                 * @param req ReleaseIp6AddressesBandwidthRequest
                 * @return ReleaseIp6AddressesBandwidthOutcome
                 */
                ReleaseIp6AddressesBandwidthOutcome ReleaseIp6AddressesBandwidth(const Model::ReleaseIp6AddressesBandwidthRequest &request);
                void ReleaseIp6AddressesBandwidthAsync(const Model::ReleaseIp6AddressesBandwidthRequest& request, const ReleaseIp6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseIp6AddressesBandwidthOutcomeCallable ReleaseIp6AddressesBandwidthCallable(const Model::ReleaseIp6AddressesBandwidthRequest& request);

                /**
                 *接口用于删除带宽包资源，包括[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)和[负载均衡](https://cloud.tencent.com/document/product/214/517)等
                 * @param req RemoveBandwidthPackageResourcesRequest
                 * @return RemoveBandwidthPackageResourcesOutcome
                 */
                RemoveBandwidthPackageResourcesOutcome RemoveBandwidthPackageResources(const Model::RemoveBandwidthPackageResourcesRequest &request);
                void RemoveBandwidthPackageResourcesAsync(const Model::RemoveBandwidthPackageResourcesRequest& request, const RemoveBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveBandwidthPackageResourcesOutcomeCallable RemoveBandwidthPackageResourcesCallable(const Model::RemoveBandwidthPackageResourcesRequest& request);

                /**
                 *1. 该接口用于删除IPV6转换规则
2. 支持批量删除同一个转换实例下的多个转换规则
                 * @param req RemoveIp6RulesRequest
                 * @return RemoveIp6RulesOutcome
                 */
                RemoveIp6RulesOutcome RemoveIp6Rules(const Model::RemoveIp6RulesRequest &request);
                void RemoveIp6RulesAsync(const Model::RemoveIp6RulesRequest& request, const RemoveIp6RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveIp6RulesOutcomeCallable RemoveIp6RulesCallable(const Model::RemoveIp6RulesRequest& request);

                /**
                 *本接口（RenewAddresses）用于续费包月带宽计费模式的弹性公网IP。
                 * @param req RenewAddressesRequest
                 * @return RenewAddressesOutcome
                 */
                RenewAddressesOutcome RenewAddresses(const Model::RenewAddressesRequest &request);
                void RenewAddressesAsync(const Model::RenewAddressesRequest& request, const RenewAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewAddressesOutcomeCallable RenewAddressesCallable(const Model::RenewAddressesRequest& request);

                /**
                 *本接口（RenewVpnGateway）用于预付费（包年包月）VPN网关续费。目前只支持IPSEC网关。
                 * @param req RenewVpnGatewayRequest
                 * @return RenewVpnGatewayOutcome
                 */
                RenewVpnGatewayOutcome RenewVpnGateway(const Model::RenewVpnGatewayRequest &request);
                void RenewVpnGatewayAsync(const Model::RenewVpnGatewayRequest& request, const RenewVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewVpnGatewayOutcomeCallable RenewVpnGatewayCallable(const Model::RenewVpnGatewayRequest& request);

                /**
                 *本接口(ReplaceCcnRouteTableBroadcastPolicys)用于替换云联网路由表路由传播策略。
> 特别注意：是全量覆盖，非增量添加

**路由条件支持以下四种：**

- 实例类型: `instance-type`，可选值：私有网络 `VPC`、专线网关 `DIRECTCONNECT`、VPN网关 `VPNGW`
- 实例ID: `instance-id`，例如：`dcg-8zljkrft`、`vpc-jdevjrup`，暂不支持 `Edge` 实例
- 实例地域: `instance-region`，例如：`ap-guangzhou`<br />产品支持的所有地域列表可通过接口 [DescribeRegions](https://cloud.tencent.com/document/product/1596/77930) 查询，其中参数 `Product` 设置为 `ccn`
- 路由前缀: `cidr-block`，例如：`10.1.0.0/16`


**传播条件支持以下三种：**

- 实例类型: `instance-type`，格式同路由条件
- 实例ID: `instance-id`，格式同路由条件
- 实例地域: `instance-region`，格式同路由条件


**使用限制：**
- 一条策略内的单个条件类型，最大支持设置 `25` 个条件值
- 一张路由表，最大支持 `100` 条路由传播策略
- 路由条件类型中，只有 `cidr-block` 类型支持模糊匹配和精确匹配两种，其它类型只支持精确匹配一种模式
                 * @param req ReplaceCcnRouteTableBroadcastPolicysRequest
                 * @return ReplaceCcnRouteTableBroadcastPolicysOutcome
                 */
                ReplaceCcnRouteTableBroadcastPolicysOutcome ReplaceCcnRouteTableBroadcastPolicys(const Model::ReplaceCcnRouteTableBroadcastPolicysRequest &request);
                void ReplaceCcnRouteTableBroadcastPolicysAsync(const Model::ReplaceCcnRouteTableBroadcastPolicysRequest& request, const ReplaceCcnRouteTableBroadcastPolicysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceCcnRouteTableBroadcastPolicysOutcomeCallable ReplaceCcnRouteTableBroadcastPolicysCallable(const Model::ReplaceCcnRouteTableBroadcastPolicysRequest& request);

                /**
                 *本接口(ReplaceRouteTableInputPolicys)用于替换云联网路由表路由接收策略。
> 特别注意：是全量覆盖，非增量添加

**路由条件支持以下四种：**

- 实例类型: `instance-type`，可选值：私有网络 `VPC`、专线网关 `DIRECTCONNECT`、VPN网关 `VPNGW`
- 实例ID: `instance-id`，例如：`dcg-8zljkrft`、`vpc-jdevjrup`，暂不支持 `Edge` 实例
- 实例地域: `instance-region`，例如：`ap-guangzhou`<br />产品支持的所有地域列表可通过接口 [DescribeRegions](https://cloud.tencent.com/document/product/1596/77930) 查询，其中参数 `Product` 设置为 `ccn`
- 路由前缀: `cidr-block`，例如：`10.1.0.0/16`


**使用限制：**
- 一条策略内的单个条件类型，最大支持设置 `25` 个条件值
- 一张路由表，最大支持 `100` 条路由接收策略
- 路由条件类型中，只有 `cidr-block` 类型支持模糊匹配和精确匹配两种，其它类型只支持精确匹配一种模式
                 * @param req ReplaceCcnRouteTableInputPolicysRequest
                 * @return ReplaceCcnRouteTableInputPolicysOutcome
                 */
                ReplaceCcnRouteTableInputPolicysOutcome ReplaceCcnRouteTableInputPolicys(const Model::ReplaceCcnRouteTableInputPolicysRequest &request);
                void ReplaceCcnRouteTableInputPolicysAsync(const Model::ReplaceCcnRouteTableInputPolicysRequest& request, const ReplaceCcnRouteTableInputPolicysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceCcnRouteTableInputPolicysOutcomeCallable ReplaceCcnRouteTableInputPolicysCallable(const Model::ReplaceCcnRouteTableInputPolicysRequest& request);

                /**
                 *本接口（ReplaceDirectConnectGatewayCcnRoutes）根据路由ID（RouteId）修改指定的路由（Route），支持批量修改。
                 * @param req ReplaceDirectConnectGatewayCcnRoutesRequest
                 * @return ReplaceDirectConnectGatewayCcnRoutesOutcome
                 */
                ReplaceDirectConnectGatewayCcnRoutesOutcome ReplaceDirectConnectGatewayCcnRoutes(const Model::ReplaceDirectConnectGatewayCcnRoutesRequest &request);
                void ReplaceDirectConnectGatewayCcnRoutesAsync(const Model::ReplaceDirectConnectGatewayCcnRoutesRequest& request, const ReplaceDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceDirectConnectGatewayCcnRoutesOutcomeCallable ReplaceDirectConnectGatewayCcnRoutesCallable(const Model::ReplaceDirectConnectGatewayCcnRoutesRequest& request);

                /**
                 *替换高优路由表和子网绑定关系。
                 * @param req ReplaceHighPriorityRouteTableAssociationRequest
                 * @return ReplaceHighPriorityRouteTableAssociationOutcome
                 */
                ReplaceHighPriorityRouteTableAssociationOutcome ReplaceHighPriorityRouteTableAssociation(const Model::ReplaceHighPriorityRouteTableAssociationRequest &request);
                void ReplaceHighPriorityRouteTableAssociationAsync(const Model::ReplaceHighPriorityRouteTableAssociationRequest& request, const ReplaceHighPriorityRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceHighPriorityRouteTableAssociationOutcomeCallable ReplaceHighPriorityRouteTableAssociationCallable(const Model::ReplaceHighPriorityRouteTableAssociationRequest& request);

                /**
                 *替换高优路由表条目信息。
                 * @param req ReplaceHighPriorityRoutesRequest
                 * @return ReplaceHighPriorityRoutesOutcome
                 */
                ReplaceHighPriorityRoutesOutcome ReplaceHighPriorityRoutes(const Model::ReplaceHighPriorityRoutesRequest &request);
                void ReplaceHighPriorityRoutesAsync(const Model::ReplaceHighPriorityRoutesRequest& request, const ReplaceHighPriorityRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceHighPriorityRoutesOutcomeCallable ReplaceHighPriorityRoutesCallable(const Model::ReplaceHighPriorityRoutesRequest& request);

                /**
                 *本接口（ReplaceRoutePolicyAssociations）根据路由接收策略实例ID（RoutePolicyId）和路由表实例ID（RouteTableId）修改绑定优先级（Priority），支持批量修改。
                 * @param req ReplaceRoutePolicyAssociationsRequest
                 * @return ReplaceRoutePolicyAssociationsOutcome
                 */
                ReplaceRoutePolicyAssociationsOutcome ReplaceRoutePolicyAssociations(const Model::ReplaceRoutePolicyAssociationsRequest &request);
                void ReplaceRoutePolicyAssociationsAsync(const Model::ReplaceRoutePolicyAssociationsRequest& request, const ReplaceRoutePolicyAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRoutePolicyAssociationsOutcomeCallable ReplaceRoutePolicyAssociationsCallable(const Model::ReplaceRoutePolicyAssociationsRequest& request);

                /**
                 *本接口（ReplaceRoutePolicyEntries）根据路由接收策略规则ID（RoutePolicyEntryId）修改指定的路由策略条目（RoutePolicyEntry），支持批量修改。
                 * @param req ReplaceRoutePolicyEntriesRequest
                 * @return ReplaceRoutePolicyEntriesOutcome
                 */
                ReplaceRoutePolicyEntriesOutcome ReplaceRoutePolicyEntries(const Model::ReplaceRoutePolicyEntriesRequest &request);
                void ReplaceRoutePolicyEntriesAsync(const Model::ReplaceRoutePolicyEntriesRequest& request, const ReplaceRoutePolicyEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRoutePolicyEntriesOutcomeCallable ReplaceRoutePolicyEntriesCallable(const Model::ReplaceRoutePolicyEntriesRequest& request);

                /**
                 *本接口（ReplaceRouteTableAssociation）用于修改子网（Subnet）关联的路由表（RouteTable）。
* 一个子网只能关联一个路由表。
                 * @param req ReplaceRouteTableAssociationRequest
                 * @return ReplaceRouteTableAssociationOutcome
                 */
                ReplaceRouteTableAssociationOutcome ReplaceRouteTableAssociation(const Model::ReplaceRouteTableAssociationRequest &request);
                void ReplaceRouteTableAssociationAsync(const Model::ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRouteTableAssociationOutcomeCallable ReplaceRouteTableAssociationCallable(const Model::ReplaceRouteTableAssociationRequest& request);

                /**
                 *本接口（ReplaceRoutes）根据路由策略ID（RouteId）修改指定的路由策略（Route），支持批量修改。
                 * @param req ReplaceRoutesRequest
                 * @return ReplaceRoutesOutcome
                 */
                ReplaceRoutesOutcome ReplaceRoutes(const Model::ReplaceRoutesRequest &request);
                void ReplaceRoutesAsync(const Model::ReplaceRoutesRequest& request, const ReplaceRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRoutesOutcomeCallable ReplaceRoutesCallable(const Model::ReplaceRoutesRequest& request);

                /**
                 *本接口（ReplaceRoutes）根据路由策略ID（RouteId）修改指定的路由策略（Route），支持批量修改。
                 * @param req ReplaceRoutesWithRoutePolicyRequest
                 * @return ReplaceRoutesWithRoutePolicyOutcome
                 */
                ReplaceRoutesWithRoutePolicyOutcome ReplaceRoutesWithRoutePolicy(const Model::ReplaceRoutesWithRoutePolicyRequest &request);
                void ReplaceRoutesWithRoutePolicyAsync(const Model::ReplaceRoutesWithRoutePolicyRequest& request, const ReplaceRoutesWithRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRoutesWithRoutePolicyOutcomeCallable ReplaceRoutesWithRoutePolicyCallable(const Model::ReplaceRoutesWithRoutePolicyRequest& request);

                /**
                 *本接口（ReplaceSecurityGroupPolicies）用于批量修改安全组规则（SecurityGroupPolicy）。
单个请求中只能替换单个方向的一条或多条规则, 必须要指定索引（PolicyIndex）。
                 * @param req ReplaceSecurityGroupPoliciesRequest
                 * @return ReplaceSecurityGroupPoliciesOutcome
                 */
                ReplaceSecurityGroupPoliciesOutcome ReplaceSecurityGroupPolicies(const Model::ReplaceSecurityGroupPoliciesRequest &request);
                void ReplaceSecurityGroupPoliciesAsync(const Model::ReplaceSecurityGroupPoliciesRequest& request, const ReplaceSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceSecurityGroupPoliciesOutcomeCallable ReplaceSecurityGroupPoliciesCallable(const Model::ReplaceSecurityGroupPoliciesRequest& request);

                /**
                 *本接口（ReplaceSecurityGroupPolicy）用于替换单条安全组规则（SecurityGroupPolicy）。
单个请求中只能替换单个方向的一条规则, 必须要指定索引（PolicyIndex）。
                 * @param req ReplaceSecurityGroupPolicyRequest
                 * @return ReplaceSecurityGroupPolicyOutcome
                 */
                ReplaceSecurityGroupPolicyOutcome ReplaceSecurityGroupPolicy(const Model::ReplaceSecurityGroupPolicyRequest &request);
                void ReplaceSecurityGroupPolicyAsync(const Model::ReplaceSecurityGroupPolicyRequest& request, const ReplaceSecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceSecurityGroupPolicyOutcomeCallable ReplaceSecurityGroupPolicyCallable(const Model::ReplaceSecurityGroupPolicyRequest& request);

                /**
                 *本接口（ResetAttachCcnInstances）用于跨账号关联实例申请过期时，重新申请关联操作。
                 * @param req ResetAttachCcnInstancesRequest
                 * @return ResetAttachCcnInstancesOutcome
                 */
                ResetAttachCcnInstancesOutcome ResetAttachCcnInstances(const Model::ResetAttachCcnInstancesRequest &request);
                void ResetAttachCcnInstancesAsync(const Model::ResetAttachCcnInstancesRequest& request, const ResetAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAttachCcnInstancesOutcomeCallable ResetAttachCcnInstancesCallable(const Model::ResetAttachCcnInstancesRequest& request);

                /**
                 *重置高优路由表。
                 * @param req ResetHighPriorityRoutesRequest
                 * @return ResetHighPriorityRoutesOutcome
                 */
                ResetHighPriorityRoutesOutcome ResetHighPriorityRoutes(const Model::ResetHighPriorityRoutesRequest &request);
                void ResetHighPriorityRoutesAsync(const Model::ResetHighPriorityRoutesRequest& request, const ResetHighPriorityRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetHighPriorityRoutesOutcomeCallable ResetHighPriorityRoutesCallable(const Model::ResetHighPriorityRoutesRequest& request);

                /**
                 *本接口（ResetNatGatewayConnection）用于调整传统型NAT网关并发连接数上限。
                 * @param req ResetNatGatewayConnectionRequest
                 * @return ResetNatGatewayConnectionOutcome
                 */
                ResetNatGatewayConnectionOutcome ResetNatGatewayConnection(const Model::ResetNatGatewayConnectionRequest &request);
                void ResetNatGatewayConnectionAsync(const Model::ResetNatGatewayConnectionRequest& request, const ResetNatGatewayConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetNatGatewayConnectionOutcomeCallable ResetNatGatewayConnectionCallable(const Model::ResetNatGatewayConnectionRequest& request);

                /**
                 *本接口（ResetRoutePolicyAssociations）用于对某个路由表实例已经绑定的路由策略实例解除绑定关系，并重新设置新的绑定路由策略及优先级。<br />
                 * @param req ResetRoutePolicyAssociationsRequest
                 * @return ResetRoutePolicyAssociationsOutcome
                 */
                ResetRoutePolicyAssociationsOutcome ResetRoutePolicyAssociations(const Model::ResetRoutePolicyAssociationsRequest &request);
                void ResetRoutePolicyAssociationsAsync(const Model::ResetRoutePolicyAssociationsRequest& request, const ResetRoutePolicyAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetRoutePolicyAssociationsOutcomeCallable ResetRoutePolicyAssociationsCallable(const Model::ResetRoutePolicyAssociationsRequest& request);

                /**
                 *本接口（ResetRoutePolicyEntries）根据路由接收策略规则ID（RoutePolicyId）重置指定的路由接收策略条目（RoutePolicyEntry），支持批量修改。
                 * @param req ResetRoutePolicyEntriesRequest
                 * @return ResetRoutePolicyEntriesOutcome
                 */
                ResetRoutePolicyEntriesOutcome ResetRoutePolicyEntries(const Model::ResetRoutePolicyEntriesRequest &request);
                void ResetRoutePolicyEntriesAsync(const Model::ResetRoutePolicyEntriesRequest& request, const ResetRoutePolicyEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetRoutePolicyEntriesOutcomeCallable ResetRoutePolicyEntriesCallable(const Model::ResetRoutePolicyEntriesRequest& request);

                /**
                 *本接口（ResetRoutes）用于对某个路由表名称和所有路由策略（Route）进行重新设置。<br /> 注意: 调用本接口时先删除当前路由表中所有路由策略, 再保存新提交的路由策略内容, 会引起网络中断。
                 * @param req ResetRoutesRequest
                 * @return ResetRoutesOutcome
                 */
                ResetRoutesOutcome ResetRoutes(const Model::ResetRoutesRequest &request);
                void ResetRoutesAsync(const Model::ResetRoutesRequest& request, const ResetRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetRoutesOutcomeCallable ResetRoutesCallable(const Model::ResetRoutesRequest& request);

                /**
                 *本接口（ResetTrafficMirrorFilter）用于更新流量镜像实例过滤规则。
注意：每一个流量镜像实例，不能同时支持按nat网关和五元组两种规则过滤
                 * @param req ResetTrafficMirrorFilterRequest
                 * @return ResetTrafficMirrorFilterOutcome
                 */
                ResetTrafficMirrorFilterOutcome ResetTrafficMirrorFilter(const Model::ResetTrafficMirrorFilterRequest &request);
                void ResetTrafficMirrorFilterAsync(const Model::ResetTrafficMirrorFilterRequest& request, const ResetTrafficMirrorFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetTrafficMirrorFilterOutcomeCallable ResetTrafficMirrorFilterCallable(const Model::ResetTrafficMirrorFilterRequest& request);

                /**
                 *本接口（ResetTrafficMirrorSrcs）用于重置流量镜像实例采集对象。
                 * @param req ResetTrafficMirrorSrcsRequest
                 * @return ResetTrafficMirrorSrcsOutcome
                 */
                ResetTrafficMirrorSrcsOutcome ResetTrafficMirrorSrcs(const Model::ResetTrafficMirrorSrcsRequest &request);
                void ResetTrafficMirrorSrcsAsync(const Model::ResetTrafficMirrorSrcsRequest& request, const ResetTrafficMirrorSrcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetTrafficMirrorSrcsOutcomeCallable ResetTrafficMirrorSrcsCallable(const Model::ResetTrafficMirrorSrcsRequest& request);

                /**
                 *本接口（ResetTrafficMirrorTarget）用于更新流量镜像实例的接收目的信息。
                 * @param req ResetTrafficMirrorTargetRequest
                 * @return ResetTrafficMirrorTargetOutcome
                 */
                ResetTrafficMirrorTargetOutcome ResetTrafficMirrorTarget(const Model::ResetTrafficMirrorTargetRequest &request);
                void ResetTrafficMirrorTargetAsync(const Model::ResetTrafficMirrorTargetRequest& request, const ResetTrafficMirrorTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetTrafficMirrorTargetOutcomeCallable ResetTrafficMirrorTargetCallable(const Model::ResetTrafficMirrorTargetRequest& request);

                /**
                 *本接口（ResetVpnConnection）用于重置VPN通道。
                 * @param req ResetVpnConnectionRequest
                 * @return ResetVpnConnectionOutcome
                 */
                ResetVpnConnectionOutcome ResetVpnConnection(const Model::ResetVpnConnectionRequest &request);
                void ResetVpnConnectionAsync(const Model::ResetVpnConnectionRequest& request, const ResetVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetVpnConnectionOutcomeCallable ResetVpnConnectionCallable(const Model::ResetVpnConnectionRequest& request);

                /**
                 *本接口（ResetVpnGatewayInternetMaxBandwidth）用于调整VPN网关带宽上限。VPN网关带宽目前仅支持部分带宽范围内升降配，如【5,100】Mbps和【200,1000】Mbps，在各自带宽范围内可提升配额，跨范围提升配额和降配暂不支持，如果是包年包月VPN网关需要在有效期内。
                 * @param req ResetVpnGatewayInternetMaxBandwidthRequest
                 * @return ResetVpnGatewayInternetMaxBandwidthOutcome
                 */
                ResetVpnGatewayInternetMaxBandwidthOutcome ResetVpnGatewayInternetMaxBandwidth(const Model::ResetVpnGatewayInternetMaxBandwidthRequest &request);
                void ResetVpnGatewayInternetMaxBandwidthAsync(const Model::ResetVpnGatewayInternetMaxBandwidthRequest& request, const ResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetVpnGatewayInternetMaxBandwidthOutcomeCallable ResetVpnGatewayInternetMaxBandwidthCallable(const Model::ResetVpnGatewayInternetMaxBandwidthRequest& request);

                /**
                 *本接口（ResumeSnapshotInstance）用于根据备份内容恢复安全组策略。
                 * @param req ResumeSnapshotInstanceRequest
                 * @return ResumeSnapshotInstanceOutcome
                 */
                ResumeSnapshotInstanceOutcome ResumeSnapshotInstance(const Model::ResumeSnapshotInstanceRequest &request);
                void ResumeSnapshotInstanceAsync(const Model::ResumeSnapshotInstanceRequest& request, const ResumeSnapshotInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeSnapshotInstanceOutcomeCallable ResumeSnapshotInstanceCallable(const Model::ResumeSnapshotInstanceRequest& request);

                /**
                 *本接口（ReturnNormalAddresses）用于解绑并释放普通公网IP。
为完善公网IP的访问管理功能，此接口于2022年12月15日升级优化鉴权功能，升级后子用户调用此接口需向主账号申请CAM策略授权，否则可能调用失败。您可以提前为子账号配置操作授权，详情见[授权指南](https://cloud.tencent.com/document/product/598/34545)。
                 * @param req ReturnNormalAddressesRequest
                 * @return ReturnNormalAddressesOutcome
                 */
                ReturnNormalAddressesOutcome ReturnNormalAddresses(const Model::ReturnNormalAddressesRequest &request);
                void ReturnNormalAddressesAsync(const Model::ReturnNormalAddressesRequest& request, const ReturnNormalAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReturnNormalAddressesOutcomeCallable ReturnNormalAddressesCallable(const Model::ReturnNormalAddressesRequest& request);

                /**
                 *本接口（SetCcnRegionBandwidthLimits）用于设置云联网（CCN）各地域出带宽上限，或者地域间带宽上限。
                 * @param req SetCcnRegionBandwidthLimitsRequest
                 * @return SetCcnRegionBandwidthLimitsOutcome
                 */
                SetCcnRegionBandwidthLimitsOutcome SetCcnRegionBandwidthLimits(const Model::SetCcnRegionBandwidthLimitsRequest &request);
                void SetCcnRegionBandwidthLimitsAsync(const Model::SetCcnRegionBandwidthLimitsRequest& request, const SetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCcnRegionBandwidthLimitsOutcomeCallable SetCcnRegionBandwidthLimitsCallable(const Model::SetCcnRegionBandwidthLimitsRequest& request);

                /**
                 *本接口（SetVpnGatewaysRenewFlag）用于设置VPNGW续费标记。
                 * @param req SetVpnGatewaysRenewFlagRequest
                 * @return SetVpnGatewaysRenewFlagOutcome
                 */
                SetVpnGatewaysRenewFlagOutcome SetVpnGatewaysRenewFlag(const Model::SetVpnGatewaysRenewFlagRequest &request);
                void SetVpnGatewaysRenewFlagAsync(const Model::SetVpnGatewaysRenewFlagRequest& request, const SetVpnGatewaysRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVpnGatewaysRenewFlagOutcomeCallable SetVpnGatewaysRenewFlagCallable(const Model::SetVpnGatewaysRenewFlagRequest& request);

                /**
                 *本接口（StartTrafficMirror）用于开启流量镜像实例。
                 * @param req StartTrafficMirrorRequest
                 * @return StartTrafficMirrorOutcome
                 */
                StartTrafficMirrorOutcome StartTrafficMirror(const Model::StartTrafficMirrorRequest &request);
                void StartTrafficMirrorAsync(const Model::StartTrafficMirrorRequest& request, const StartTrafficMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartTrafficMirrorOutcomeCallable StartTrafficMirrorCallable(const Model::StartTrafficMirrorRequest& request);

                /**
                 *本接口（StopTrafficMirror）用于关闭流量镜像实例。
                 * @param req StopTrafficMirrorRequest
                 * @return StopTrafficMirrorOutcome
                 */
                StopTrafficMirrorOutcome StopTrafficMirror(const Model::StopTrafficMirrorRequest &request);
                void StopTrafficMirrorAsync(const Model::StopTrafficMirrorRequest& request, const StopTrafficMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopTrafficMirrorOutcomeCallable StopTrafficMirrorCallable(const Model::StopTrafficMirrorRequest& request);

                /**
                 *本接口 (TransformAddress) 用于将实例的普通公网 IP 转换为[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）。
* 平台对用户单地域每日解绑 EIP 重新分配普通公网 IP 次数有所限制（可参见 [EIP 产品简介](/document/product/213/1941)）。上述配额可通过 [DescribeAddressQuota](https://cloud.tencent.com/document/product/215/16701) 接口获取。
                 * @param req TransformAddressRequest
                 * @return TransformAddressOutcome
                 */
                TransformAddressOutcome TransformAddress(const Model::TransformAddressRequest &request);
                void TransformAddressAsync(const Model::TransformAddressRequest& request, const TransformAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransformAddressOutcomeCallable TransformAddressCallable(const Model::TransformAddressRequest& request);

                /**
                 *本接口（UnassignIpv6Addresses）用于释放弹性网卡`IPv6`地址。<br />
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询[DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037)接口。
                 * @param req UnassignIpv6AddressesRequest
                 * @return UnassignIpv6AddressesOutcome
                 */
                UnassignIpv6AddressesOutcome UnassignIpv6Addresses(const Model::UnassignIpv6AddressesRequest &request);
                void UnassignIpv6AddressesAsync(const Model::UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassignIpv6AddressesOutcomeCallable UnassignIpv6AddressesCallable(const Model::UnassignIpv6AddressesRequest& request);

                /**
                 *本接口（UnassignIpv6CidrBlock）用于释放IPv6网段。<br />
网段如果还有IP占用且未回收，则网段无法释放。
                 * @param req UnassignIpv6CidrBlockRequest
                 * @return UnassignIpv6CidrBlockOutcome
                 */
                UnassignIpv6CidrBlockOutcome UnassignIpv6CidrBlock(const Model::UnassignIpv6CidrBlockRequest &request);
                void UnassignIpv6CidrBlockAsync(const Model::UnassignIpv6CidrBlockRequest& request, const UnassignIpv6CidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassignIpv6CidrBlockOutcomeCallable UnassignIpv6CidrBlockCallable(const Model::UnassignIpv6CidrBlockRequest& request);

                /**
                 *本接口（UnassignIpv6SubnetCidrBlock）用于释放IPv6子网段。<br />
子网段如果还有IP占用且未回收，则子网段无法释放。
                 * @param req UnassignIpv6SubnetCidrBlockRequest
                 * @return UnassignIpv6SubnetCidrBlockOutcome
                 */
                UnassignIpv6SubnetCidrBlockOutcome UnassignIpv6SubnetCidrBlock(const Model::UnassignIpv6SubnetCidrBlockRequest &request);
                void UnassignIpv6SubnetCidrBlockAsync(const Model::UnassignIpv6SubnetCidrBlockRequest& request, const UnassignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassignIpv6SubnetCidrBlockOutcomeCallable UnassignIpv6SubnetCidrBlockCallable(const Model::UnassignIpv6SubnetCidrBlockRequest& request);

                /**
                 *本接口（UnassignPrivateIpAddresses）用于弹性网卡退还内网 IP。
* 退还弹性网卡上的辅助内网IP，接口自动解除关联弹性公网 IP。不能退还弹性网卡的主内网IP。

本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询[DescribeVpcTaskResult](https://cloud.tencent.com/document/api/215/59037)
接口。
                 * @param req UnassignPrivateIpAddressesRequest
                 * @return UnassignPrivateIpAddressesOutcome
                 */
                UnassignPrivateIpAddressesOutcome UnassignPrivateIpAddresses(const Model::UnassignPrivateIpAddressesRequest &request);
                void UnassignPrivateIpAddressesAsync(const Model::UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassignPrivateIpAddressesOutcomeCallable UnassignPrivateIpAddressesCallable(const Model::UnassignPrivateIpAddressesRequest& request);

                /**
                 *本接口（UnlockCcnBandwidths）用户解锁云联网限速实例。
该接口一般用来封禁地域间限速的云联网实例下的限速实例, 目前联通内部运营系统通过云API调用, 如果是出口限速, 一般使用更粗的云联网实例粒度封禁（SecurityUnlockCcns）。
如有需要, 可以封禁任意限速实例, 可接入到内部运营系统。
                 * @param req UnlockCcnBandwidthsRequest
                 * @return UnlockCcnBandwidthsOutcome
                 */
                UnlockCcnBandwidthsOutcome UnlockCcnBandwidths(const Model::UnlockCcnBandwidthsRequest &request);
                void UnlockCcnBandwidthsAsync(const Model::UnlockCcnBandwidthsRequest& request, const UnlockCcnBandwidthsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnlockCcnBandwidthsOutcomeCallable UnlockCcnBandwidthsCallable(const Model::UnlockCcnBandwidthsRequest& request);

                /**
                 *本接口（UnlockCcns）用于解锁云联网实例

该接口一般用来解封禁出口限速的云联网实例, 目前联通内部运营系统通过云API调用, 因为出口限速无法按地域间解封禁, 只能按更粗的云联网实例粒度解封禁, 如果是地域间限速, 一般可以通过更细的限速实例粒度解封禁（UnlockCcnBandwidths）

如有需要, 可以封禁任意限速实例, 可接入到内部运营系统
                 * @param req UnlockCcnsRequest
                 * @return UnlockCcnsOutcome
                 */
                UnlockCcnsOutcome UnlockCcns(const Model::UnlockCcnsRequest &request);
                void UnlockCcnsAsync(const Model::UnlockCcnsRequest& request, const UnlockCcnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnlockCcnsOutcomeCallable UnlockCcnsCallable(const Model::UnlockCcnsRequest& request);

                /**
                 *本接口（UpdateTrafficMirrorAllFilter）用于更新流量镜像实例的过滤规则或者采集对象。
                 * @param req UpdateTrafficMirrorAllFilterRequest
                 * @return UpdateTrafficMirrorAllFilterOutcome
                 */
                UpdateTrafficMirrorAllFilterOutcome UpdateTrafficMirrorAllFilter(const Model::UpdateTrafficMirrorAllFilterRequest &request);
                void UpdateTrafficMirrorAllFilterAsync(const Model::UpdateTrafficMirrorAllFilterRequest& request, const UpdateTrafficMirrorAllFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTrafficMirrorAllFilterOutcomeCallable UpdateTrafficMirrorAllFilterCallable(const Model::UpdateTrafficMirrorAllFilterRequest& request);

                /**
                 *本接口（UpdateTrafficMirrorDirection）用于更新流量镜像实例的采集方向。
                 * @param req UpdateTrafficMirrorDirectionRequest
                 * @return UpdateTrafficMirrorDirectionOutcome
                 */
                UpdateTrafficMirrorDirectionOutcome UpdateTrafficMirrorDirection(const Model::UpdateTrafficMirrorDirectionRequest &request);
                void UpdateTrafficMirrorDirectionAsync(const Model::UpdateTrafficMirrorDirectionRequest& request, const UpdateTrafficMirrorDirectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTrafficMirrorDirectionOutcomeCallable UpdateTrafficMirrorDirectionCallable(const Model::UpdateTrafficMirrorDirectionRequest& request);

                /**
                 *本接口（UpgradeNatGatewayProductVersion）用于升级NAT实例产品版本，将传统型NAT实例升级到标准型NAT。
                 * @param req UpgradeNatGatewayProductVersionRequest
                 * @return UpgradeNatGatewayProductVersionOutcome
                 */
                UpgradeNatGatewayProductVersionOutcome UpgradeNatGatewayProductVersion(const Model::UpgradeNatGatewayProductVersionRequest &request);
                void UpgradeNatGatewayProductVersionAsync(const Model::UpgradeNatGatewayProductVersionRequest& request, const UpgradeNatGatewayProductVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeNatGatewayProductVersionOutcomeCallable UpgradeNatGatewayProductVersionCallable(const Model::UpgradeNatGatewayProductVersionRequest& request);

                /**
                 *本接口（WithdrawNotifyRoutes）用于撤销已发布到云联网的路由。路由表列表页操作增加“从云联网撤销”。
                 * @param req WithdrawNotifyRoutesRequest
                 * @return WithdrawNotifyRoutesOutcome
                 */
                WithdrawNotifyRoutesOutcome WithdrawNotifyRoutes(const Model::WithdrawNotifyRoutesRequest &request);
                void WithdrawNotifyRoutesAsync(const Model::WithdrawNotifyRoutesRequest& request, const WithdrawNotifyRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WithdrawNotifyRoutesOutcomeCallable WithdrawNotifyRoutesCallable(const Model::WithdrawNotifyRoutesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_VPCCLIENT_H_

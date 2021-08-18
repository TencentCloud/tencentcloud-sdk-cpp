/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
#include <tencentcloud/vpc/v20170312/model/AddBandwidthPackageResourcesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AddBandwidthPackageResourcesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AddIp6RulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AddIp6RulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AllocateAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AllocateAddressesResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/AuditCrossBorderComplianceRequest.h>
#include <tencentcloud/vpc/v20170312/model/AuditCrossBorderComplianceResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckDefaultSubnetRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckDefaultSubnetResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckNetDetectStateRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckNetDetectStateResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/CreateHaVipRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateHaVipResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/CreateNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkInterfaceResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/CreateSubnetRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRoutesResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DeleteHaVipRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteHaVipResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkInterfaceResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DeleteSubnetRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSubnetResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAccountAttributesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAccountAttributesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressQuotaRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressQuotaResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplatesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplatesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAssistantCidrResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRegionBandwidthLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeClassicLinkInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeClassicLinkInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderComplianceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderComplianceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewayVendorsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewayVendorsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewaysResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DescribeHaVipsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeHaVipsResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaySourceIpTranslationNatRulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaySourceIpTranslationNatRulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectStatesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectStatesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAclsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAclsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfaceLimitRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfaceLimitResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfacesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfacesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeProductQuotaRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeProductQuotaResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteConflictsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteConflictsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteTablesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteTablesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupAssociationStatisticsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupAssociationStatisticsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupReferencesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupReferencesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplatesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplatesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTaskResultRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTaskResultResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTemplateLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTemplateLimitsResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachClassicLinkVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachClassicLinkVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableGatewayFlowMonitorRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableGatewayFlowMonitorResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateDhcpIpWithAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateDhcpIpWithAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateDirectConnectGatewayNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateDirectConnectGatewayNatGatewayResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/EnableCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableGatewayFlowMonitorRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableGatewayFlowMonitorResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableVpcEndPointConnectRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableVpcEndPointConnectResponse.h>
#include <tencentcloud/vpc/v20170312/model/GetCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/GetCcnRegionBandwidthLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociateAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociateAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/HaVipDisassociateAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/HaVipDisassociateAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquirePriceCreateDirectConnectGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquirePriceCreateDirectConnectGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceCreateVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceCreateVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceRenewVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceRenewVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/ModifyAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttachedInstancesAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttachedInstancesAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnRegionBandwidthLimitsTypeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnRegionBandwidthLimitsTypeResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/ModifyHaVipAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHaVipAttributeResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceQosRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceQosResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateIpAddressesAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateIpAddressesAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateGroupAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateGroupAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySubnetAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySubnetAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnConnectionAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnConnectionAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/NotifyRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/NotifyRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/RejectAttachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/RejectAttachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReleaseAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReleaseAddressesResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/ReplaceDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceDirectConnectGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRouteTableAssociationRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRouteTableAssociationResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceSecurityGroupPolicyRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceSecurityGroupPolicyResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetAttachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetAttachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetNatGatewayConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetNatGatewayConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnGatewayInternetMaxBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnGatewayInternetMaxBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/SetCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/SetCcnRegionBandwidthLimitsResponse.h>
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

                typedef Outcome<Error, Model::AcceptAttachCcnInstancesResponse> AcceptAttachCcnInstancesOutcome;
                typedef std::future<AcceptAttachCcnInstancesOutcome> AcceptAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AcceptAttachCcnInstancesRequest&, AcceptAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptAttachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::AddBandwidthPackageResourcesResponse> AddBandwidthPackageResourcesOutcome;
                typedef std::future<AddBandwidthPackageResourcesOutcome> AddBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AddBandwidthPackageResourcesRequest&, AddBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Error, Model::AddIp6RulesResponse> AddIp6RulesOutcome;
                typedef std::future<AddIp6RulesOutcome> AddIp6RulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AddIp6RulesRequest&, AddIp6RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddIp6RulesAsyncHandler;
                typedef Outcome<Error, Model::AllocateAddressesResponse> AllocateAddressesOutcome;
                typedef std::future<AllocateAddressesOutcome> AllocateAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AllocateAddressesRequest&, AllocateAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateAddressesAsyncHandler;
                typedef Outcome<Error, Model::AllocateIp6AddressesBandwidthResponse> AllocateIp6AddressesBandwidthOutcome;
                typedef std::future<AllocateIp6AddressesBandwidthOutcome> AllocateIp6AddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AllocateIp6AddressesBandwidthRequest&, AllocateIp6AddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateIp6AddressesBandwidthAsyncHandler;
                typedef Outcome<Error, Model::AssignIpv6AddressesResponse> AssignIpv6AddressesOutcome;
                typedef std::future<AssignIpv6AddressesOutcome> AssignIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6AddressesRequest&, AssignIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6AddressesAsyncHandler;
                typedef Outcome<Error, Model::AssignIpv6CidrBlockResponse> AssignIpv6CidrBlockOutcome;
                typedef std::future<AssignIpv6CidrBlockOutcome> AssignIpv6CidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6CidrBlockRequest&, AssignIpv6CidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6CidrBlockAsyncHandler;
                typedef Outcome<Error, Model::AssignIpv6SubnetCidrBlockResponse> AssignIpv6SubnetCidrBlockOutcome;
                typedef std::future<AssignIpv6SubnetCidrBlockOutcome> AssignIpv6SubnetCidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6SubnetCidrBlockRequest&, AssignIpv6SubnetCidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6SubnetCidrBlockAsyncHandler;
                typedef Outcome<Error, Model::AssignPrivateIpAddressesResponse> AssignPrivateIpAddressesOutcome;
                typedef std::future<AssignPrivateIpAddressesOutcome> AssignPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignPrivateIpAddressesRequest&, AssignPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignPrivateIpAddressesAsyncHandler;
                typedef Outcome<Error, Model::AssociateAddressResponse> AssociateAddressOutcome;
                typedef std::future<AssociateAddressOutcome> AssociateAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateAddressRequest&, AssociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAddressAsyncHandler;
                typedef Outcome<Error, Model::AssociateDhcpIpWithAddressIpResponse> AssociateDhcpIpWithAddressIpOutcome;
                typedef std::future<AssociateDhcpIpWithAddressIpOutcome> AssociateDhcpIpWithAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateDhcpIpWithAddressIpRequest&, AssociateDhcpIpWithAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDhcpIpWithAddressIpAsyncHandler;
                typedef Outcome<Error, Model::AssociateDirectConnectGatewayNatGatewayResponse> AssociateDirectConnectGatewayNatGatewayOutcome;
                typedef std::future<AssociateDirectConnectGatewayNatGatewayOutcome> AssociateDirectConnectGatewayNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateDirectConnectGatewayNatGatewayRequest&, AssociateDirectConnectGatewayNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDirectConnectGatewayNatGatewayAsyncHandler;
                typedef Outcome<Error, Model::AssociateNatGatewayAddressResponse> AssociateNatGatewayAddressOutcome;
                typedef std::future<AssociateNatGatewayAddressOutcome> AssociateNatGatewayAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNatGatewayAddressRequest&, AssociateNatGatewayAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNatGatewayAddressAsyncHandler;
                typedef Outcome<Error, Model::AssociateNetworkAclSubnetsResponse> AssociateNetworkAclSubnetsOutcome;
                typedef std::future<AssociateNetworkAclSubnetsOutcome> AssociateNetworkAclSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNetworkAclSubnetsRequest&, AssociateNetworkAclSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNetworkAclSubnetsAsyncHandler;
                typedef Outcome<Error, Model::AssociateNetworkInterfaceSecurityGroupsResponse> AssociateNetworkInterfaceSecurityGroupsOutcome;
                typedef std::future<AssociateNetworkInterfaceSecurityGroupsOutcome> AssociateNetworkInterfaceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNetworkInterfaceSecurityGroupsRequest&, AssociateNetworkInterfaceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNetworkInterfaceSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::AttachCcnInstancesResponse> AttachCcnInstancesOutcome;
                typedef std::future<AttachCcnInstancesOutcome> AttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachCcnInstancesRequest&, AttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::AttachClassicLinkVpcResponse> AttachClassicLinkVpcOutcome;
                typedef std::future<AttachClassicLinkVpcOutcome> AttachClassicLinkVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachClassicLinkVpcRequest&, AttachClassicLinkVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachClassicLinkVpcAsyncHandler;
                typedef Outcome<Error, Model::AttachNetworkInterfaceResponse> AttachNetworkInterfaceOutcome;
                typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachNetworkInterfaceRequest&, AttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::AuditCrossBorderComplianceResponse> AuditCrossBorderComplianceOutcome;
                typedef std::future<AuditCrossBorderComplianceOutcome> AuditCrossBorderComplianceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AuditCrossBorderComplianceRequest&, AuditCrossBorderComplianceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AuditCrossBorderComplianceAsyncHandler;
                typedef Outcome<Error, Model::CheckAssistantCidrResponse> CheckAssistantCidrOutcome;
                typedef std::future<CheckAssistantCidrOutcome> CheckAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckAssistantCidrRequest&, CheckAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAssistantCidrAsyncHandler;
                typedef Outcome<Error, Model::CheckDefaultSubnetResponse> CheckDefaultSubnetOutcome;
                typedef std::future<CheckDefaultSubnetOutcome> CheckDefaultSubnetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckDefaultSubnetRequest&, CheckDefaultSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDefaultSubnetAsyncHandler;
                typedef Outcome<Error, Model::CheckNetDetectStateResponse> CheckNetDetectStateOutcome;
                typedef std::future<CheckNetDetectStateOutcome> CheckNetDetectStateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckNetDetectStateRequest&, CheckNetDetectStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckNetDetectStateAsyncHandler;
                typedef Outcome<Error, Model::CloneSecurityGroupResponse> CloneSecurityGroupOutcome;
                typedef std::future<CloneSecurityGroupOutcome> CloneSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CloneSecurityGroupRequest&, CloneSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateAddressTemplateResponse> CreateAddressTemplateOutcome;
                typedef std::future<CreateAddressTemplateOutcome> CreateAddressTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAddressTemplateRequest&, CreateAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateAddressTemplateGroupResponse> CreateAddressTemplateGroupOutcome;
                typedef std::future<CreateAddressTemplateGroupOutcome> CreateAddressTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAddressTemplateGroupRequest&, CreateAddressTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressTemplateGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateAndAttachNetworkInterfaceResponse> CreateAndAttachNetworkInterfaceOutcome;
                typedef std::future<CreateAndAttachNetworkInterfaceOutcome> CreateAndAttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAndAttachNetworkInterfaceRequest&, CreateAndAttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndAttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::CreateAssistantCidrResponse> CreateAssistantCidrOutcome;
                typedef std::future<CreateAssistantCidrOutcome> CreateAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAssistantCidrRequest&, CreateAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssistantCidrAsyncHandler;
                typedef Outcome<Error, Model::CreateBandwidthPackageResponse> CreateBandwidthPackageOutcome;
                typedef std::future<CreateBandwidthPackageOutcome> CreateBandwidthPackageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateBandwidthPackageRequest&, CreateBandwidthPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBandwidthPackageAsyncHandler;
                typedef Outcome<Error, Model::CreateCcnResponse> CreateCcnOutcome;
                typedef std::future<CreateCcnOutcome> CreateCcnOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCcnRequest&, CreateCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcnAsyncHandler;
                typedef Outcome<Error, Model::CreateCustomerGatewayResponse> CreateCustomerGatewayOutcome;
                typedef std::future<CreateCustomerGatewayOutcome> CreateCustomerGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCustomerGatewayRequest&, CreateCustomerGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomerGatewayAsyncHandler;
                typedef Outcome<Error, Model::CreateDefaultSecurityGroupResponse> CreateDefaultSecurityGroupOutcome;
                typedef std::future<CreateDefaultSecurityGroupOutcome> CreateDefaultSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDefaultSecurityGroupRequest&, CreateDefaultSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateDefaultVpcResponse> CreateDefaultVpcOutcome;
                typedef std::future<CreateDefaultVpcOutcome> CreateDefaultVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDefaultVpcRequest&, CreateDefaultVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultVpcAsyncHandler;
                typedef Outcome<Error, Model::CreateDhcpIpResponse> CreateDhcpIpOutcome;
                typedef std::future<CreateDhcpIpOutcome> CreateDhcpIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDhcpIpRequest&, CreateDhcpIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDhcpIpAsyncHandler;
                typedef Outcome<Error, Model::CreateDirectConnectGatewayResponse> CreateDirectConnectGatewayOutcome;
                typedef std::future<CreateDirectConnectGatewayOutcome> CreateDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDirectConnectGatewayRequest&, CreateDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectGatewayAsyncHandler;
                typedef Outcome<Error, Model::CreateDirectConnectGatewayCcnRoutesResponse> CreateDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<CreateDirectConnectGatewayCcnRoutesOutcome> CreateDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDirectConnectGatewayCcnRoutesRequest&, CreateDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::CreateFlowLogResponse> CreateFlowLogOutcome;
                typedef std::future<CreateFlowLogOutcome> CreateFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateFlowLogRequest&, CreateFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowLogAsyncHandler;
                typedef Outcome<Error, Model::CreateHaVipResponse> CreateHaVipOutcome;
                typedef std::future<CreateHaVipOutcome> CreateHaVipOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateHaVipRequest&, CreateHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHaVipAsyncHandler;
                typedef Outcome<Error, Model::CreateIp6TranslatorsResponse> CreateIp6TranslatorsOutcome;
                typedef std::future<CreateIp6TranslatorsOutcome> CreateIp6TranslatorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateIp6TranslatorsRequest&, CreateIp6TranslatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIp6TranslatorsAsyncHandler;
                typedef Outcome<Error, Model::CreateLocalGatewayResponse> CreateLocalGatewayOutcome;
                typedef std::future<CreateLocalGatewayOutcome> CreateLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateLocalGatewayRequest&, CreateLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLocalGatewayAsyncHandler;
                typedef Outcome<Error, Model::CreateNatGatewayResponse> CreateNatGatewayOutcome;
                typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewayRequest&, CreateNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayAsyncHandler;
                typedef Outcome<Error, Model::CreateNatGatewayDestinationIpPortTranslationNatRuleResponse> CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome> CreateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest&, CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateNatGatewaySourceIpTranslationNatRuleResponse> CreateNatGatewaySourceIpTranslationNatRuleOutcome;
                typedef std::future<CreateNatGatewaySourceIpTranslationNatRuleOutcome> CreateNatGatewaySourceIpTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewaySourceIpTranslationNatRuleRequest&, CreateNatGatewaySourceIpTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewaySourceIpTranslationNatRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateNetDetectResponse> CreateNetDetectOutcome;
                typedef std::future<CreateNetDetectOutcome> CreateNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetDetectRequest&, CreateNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetDetectAsyncHandler;
                typedef Outcome<Error, Model::CreateNetworkAclResponse> CreateNetworkAclOutcome;
                typedef std::future<CreateNetworkAclOutcome> CreateNetworkAclOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkAclRequest&, CreateNetworkAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAclAsyncHandler;
                typedef Outcome<Error, Model::CreateNetworkInterfaceResponse> CreateNetworkInterfaceOutcome;
                typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkInterfaceRequest&, CreateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::CreateRouteTableResponse> CreateRouteTableOutcome;
                typedef std::future<CreateRouteTableOutcome> CreateRouteTableOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRouteTableRequest&, CreateRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteTableAsyncHandler;
                typedef Outcome<Error, Model::CreateRoutesResponse> CreateRoutesOutcome;
                typedef std::future<CreateRoutesOutcome> CreateRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRoutesRequest&, CreateRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutesAsyncHandler;
                typedef Outcome<Error, Model::CreateSecurityGroupResponse> CreateSecurityGroupOutcome;
                typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupRequest&, CreateSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateSecurityGroupPoliciesResponse> CreateSecurityGroupPoliciesOutcome;
                typedef std::future<CreateSecurityGroupPoliciesOutcome> CreateSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupPoliciesRequest&, CreateSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::CreateSecurityGroupWithPoliciesResponse> CreateSecurityGroupWithPoliciesOutcome;
                typedef std::future<CreateSecurityGroupWithPoliciesOutcome> CreateSecurityGroupWithPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupWithPoliciesRequest&, CreateSecurityGroupWithPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupWithPoliciesAsyncHandler;
                typedef Outcome<Error, Model::CreateServiceTemplateResponse> CreateServiceTemplateOutcome;
                typedef std::future<CreateServiceTemplateOutcome> CreateServiceTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateServiceTemplateRequest&, CreateServiceTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateServiceTemplateGroupResponse> CreateServiceTemplateGroupOutcome;
                typedef std::future<CreateServiceTemplateGroupOutcome> CreateServiceTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateServiceTemplateGroupRequest&, CreateServiceTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceTemplateGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateSubnetResponse> CreateSubnetOutcome;
                typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSubnetRequest&, CreateSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetAsyncHandler;
                typedef Outcome<Error, Model::CreateSubnetsResponse> CreateSubnetsOutcome;
                typedef std::future<CreateSubnetsOutcome> CreateSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSubnetsRequest&, CreateSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetsAsyncHandler;
                typedef Outcome<Error, Model::CreateVpcResponse> CreateVpcOutcome;
                typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcRequest&, CreateVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
                typedef Outcome<Error, Model::CreateVpcEndPointResponse> CreateVpcEndPointOutcome;
                typedef std::future<CreateVpcEndPointOutcome> CreateVpcEndPointOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcEndPointRequest&, CreateVpcEndPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndPointAsyncHandler;
                typedef Outcome<Error, Model::CreateVpcEndPointServiceResponse> CreateVpcEndPointServiceOutcome;
                typedef std::future<CreateVpcEndPointServiceOutcome> CreateVpcEndPointServiceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcEndPointServiceRequest&, CreateVpcEndPointServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndPointServiceAsyncHandler;
                typedef Outcome<Error, Model::CreateVpcEndPointServiceWhiteListResponse> CreateVpcEndPointServiceWhiteListOutcome;
                typedef std::future<CreateVpcEndPointServiceWhiteListOutcome> CreateVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcEndPointServiceWhiteListRequest&, CreateVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Error, Model::CreateVpnConnectionResponse> CreateVpnConnectionOutcome;
                typedef std::future<CreateVpnConnectionOutcome> CreateVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnConnectionRequest&, CreateVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnConnectionAsyncHandler;
                typedef Outcome<Error, Model::CreateVpnGatewayResponse> CreateVpnGatewayOutcome;
                typedef std::future<CreateVpnGatewayOutcome> CreateVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnGatewayRequest&, CreateVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnGatewayAsyncHandler;
                typedef Outcome<Error, Model::CreateVpnGatewayRoutesResponse> CreateVpnGatewayRoutesOutcome;
                typedef std::future<CreateVpnGatewayRoutesOutcome> CreateVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnGatewayRoutesRequest&, CreateVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Error, Model::DeleteAddressTemplateResponse> DeleteAddressTemplateOutcome;
                typedef std::future<DeleteAddressTemplateOutcome> DeleteAddressTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAddressTemplateRequest&, DeleteAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteAddressTemplateGroupResponse> DeleteAddressTemplateGroupOutcome;
                typedef std::future<DeleteAddressTemplateGroupOutcome> DeleteAddressTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAddressTemplateGroupRequest&, DeleteAddressTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressTemplateGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteAssistantCidrResponse> DeleteAssistantCidrOutcome;
                typedef std::future<DeleteAssistantCidrOutcome> DeleteAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAssistantCidrRequest&, DeleteAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssistantCidrAsyncHandler;
                typedef Outcome<Error, Model::DeleteBandwidthPackageResponse> DeleteBandwidthPackageOutcome;
                typedef std::future<DeleteBandwidthPackageOutcome> DeleteBandwidthPackageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteBandwidthPackageRequest&, DeleteBandwidthPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBandwidthPackageAsyncHandler;
                typedef Outcome<Error, Model::DeleteCcnResponse> DeleteCcnOutcome;
                typedef std::future<DeleteCcnOutcome> DeleteCcnOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCcnRequest&, DeleteCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcnAsyncHandler;
                typedef Outcome<Error, Model::DeleteCustomerGatewayResponse> DeleteCustomerGatewayOutcome;
                typedef std::future<DeleteCustomerGatewayOutcome> DeleteCustomerGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCustomerGatewayRequest&, DeleteCustomerGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomerGatewayAsyncHandler;
                typedef Outcome<Error, Model::DeleteDhcpIpResponse> DeleteDhcpIpOutcome;
                typedef std::future<DeleteDhcpIpOutcome> DeleteDhcpIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteDhcpIpRequest&, DeleteDhcpIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDhcpIpAsyncHandler;
                typedef Outcome<Error, Model::DeleteDirectConnectGatewayResponse> DeleteDirectConnectGatewayOutcome;
                typedef std::future<DeleteDirectConnectGatewayOutcome> DeleteDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteDirectConnectGatewayRequest&, DeleteDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectGatewayAsyncHandler;
                typedef Outcome<Error, Model::DeleteDirectConnectGatewayCcnRoutesResponse> DeleteDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<DeleteDirectConnectGatewayCcnRoutesOutcome> DeleteDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteDirectConnectGatewayCcnRoutesRequest&, DeleteDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::DeleteFlowLogResponse> DeleteFlowLogOutcome;
                typedef std::future<DeleteFlowLogOutcome> DeleteFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteFlowLogRequest&, DeleteFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowLogAsyncHandler;
                typedef Outcome<Error, Model::DeleteHaVipResponse> DeleteHaVipOutcome;
                typedef std::future<DeleteHaVipOutcome> DeleteHaVipOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteHaVipRequest&, DeleteHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHaVipAsyncHandler;
                typedef Outcome<Error, Model::DeleteIp6TranslatorsResponse> DeleteIp6TranslatorsOutcome;
                typedef std::future<DeleteIp6TranslatorsOutcome> DeleteIp6TranslatorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteIp6TranslatorsRequest&, DeleteIp6TranslatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIp6TranslatorsAsyncHandler;
                typedef Outcome<Error, Model::DeleteLocalGatewayResponse> DeleteLocalGatewayOutcome;
                typedef std::future<DeleteLocalGatewayOutcome> DeleteLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteLocalGatewayRequest&, DeleteLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLocalGatewayAsyncHandler;
                typedef Outcome<Error, Model::DeleteNatGatewayResponse> DeleteNatGatewayOutcome;
                typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewayRequest&, DeleteNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayAsyncHandler;
                typedef Outcome<Error, Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse> DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome> DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest&, DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteNatGatewaySourceIpTranslationNatRuleResponse> DeleteNatGatewaySourceIpTranslationNatRuleOutcome;
                typedef std::future<DeleteNatGatewaySourceIpTranslationNatRuleOutcome> DeleteNatGatewaySourceIpTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewaySourceIpTranslationNatRuleRequest&, DeleteNatGatewaySourceIpTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewaySourceIpTranslationNatRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteNetDetectResponse> DeleteNetDetectOutcome;
                typedef std::future<DeleteNetDetectOutcome> DeleteNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetDetectRequest&, DeleteNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetDetectAsyncHandler;
                typedef Outcome<Error, Model::DeleteNetworkAclResponse> DeleteNetworkAclOutcome;
                typedef std::future<DeleteNetworkAclOutcome> DeleteNetworkAclOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkAclRequest&, DeleteNetworkAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAclAsyncHandler;
                typedef Outcome<Error, Model::DeleteNetworkInterfaceResponse> DeleteNetworkInterfaceOutcome;
                typedef std::future<DeleteNetworkInterfaceOutcome> DeleteNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkInterfaceRequest&, DeleteNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::DeleteRouteTableResponse> DeleteRouteTableOutcome;
                typedef std::future<DeleteRouteTableOutcome> DeleteRouteTableOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRouteTableRequest&, DeleteRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteTableAsyncHandler;
                typedef Outcome<Error, Model::DeleteRoutesResponse> DeleteRoutesOutcome;
                typedef std::future<DeleteRoutesOutcome> DeleteRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRoutesRequest&, DeleteRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutesAsyncHandler;
                typedef Outcome<Error, Model::DeleteSecurityGroupResponse> DeleteSecurityGroupOutcome;
                typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSecurityGroupRequest&, DeleteSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteSecurityGroupPoliciesResponse> DeleteSecurityGroupPoliciesOutcome;
                typedef std::future<DeleteSecurityGroupPoliciesOutcome> DeleteSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSecurityGroupPoliciesRequest&, DeleteSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DeleteServiceTemplateResponse> DeleteServiceTemplateOutcome;
                typedef std::future<DeleteServiceTemplateOutcome> DeleteServiceTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteServiceTemplateRequest&, DeleteServiceTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteServiceTemplateGroupResponse> DeleteServiceTemplateGroupOutcome;
                typedef std::future<DeleteServiceTemplateGroupOutcome> DeleteServiceTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteServiceTemplateGroupRequest&, DeleteServiceTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceTemplateGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteSubnetResponse> DeleteSubnetOutcome;
                typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSubnetRequest&, DeleteSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubnetAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpcResponse> DeleteVpcOutcome;
                typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcRequest&, DeleteVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpcEndPointResponse> DeleteVpcEndPointOutcome;
                typedef std::future<DeleteVpcEndPointOutcome> DeleteVpcEndPointOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcEndPointRequest&, DeleteVpcEndPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndPointAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpcEndPointServiceResponse> DeleteVpcEndPointServiceOutcome;
                typedef std::future<DeleteVpcEndPointServiceOutcome> DeleteVpcEndPointServiceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcEndPointServiceRequest&, DeleteVpcEndPointServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndPointServiceAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpcEndPointServiceWhiteListResponse> DeleteVpcEndPointServiceWhiteListOutcome;
                typedef std::future<DeleteVpcEndPointServiceWhiteListOutcome> DeleteVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcEndPointServiceWhiteListRequest&, DeleteVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpnConnectionResponse> DeleteVpnConnectionOutcome;
                typedef std::future<DeleteVpnConnectionOutcome> DeleteVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnConnectionRequest&, DeleteVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnConnectionAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpnGatewayResponse> DeleteVpnGatewayOutcome;
                typedef std::future<DeleteVpnGatewayOutcome> DeleteVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewayRequest&, DeleteVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewayAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpnGatewayRoutesResponse> DeleteVpnGatewayRoutesOutcome;
                typedef std::future<DeleteVpnGatewayRoutesOutcome> DeleteVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewayRoutesRequest&, DeleteVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountAttributesResponse> DescribeAccountAttributesOutcome;
                typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAccountAttributesRequest&, DescribeAccountAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountAttributesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAddressQuotaResponse> DescribeAddressQuotaOutcome;
                typedef std::future<DescribeAddressQuotaOutcome> DescribeAddressQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressQuotaRequest&, DescribeAddressQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribeAddressTemplateGroupsResponse> DescribeAddressTemplateGroupsOutcome;
                typedef std::future<DescribeAddressTemplateGroupsOutcome> DescribeAddressTemplateGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressTemplateGroupsRequest&, DescribeAddressTemplateGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplateGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAddressTemplatesResponse> DescribeAddressTemplatesOutcome;
                typedef std::future<DescribeAddressTemplatesOutcome> DescribeAddressTemplatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressTemplatesRequest&, DescribeAddressTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAddressesResponse> DescribeAddressesOutcome;
                typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressesRequest&, DescribeAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAssistantCidrResponse> DescribeAssistantCidrOutcome;
                typedef std::future<DescribeAssistantCidrOutcome> DescribeAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAssistantCidrRequest&, DescribeAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssistantCidrAsyncHandler;
                typedef Outcome<Error, Model::DescribeBandwidthPackageBillUsageResponse> DescribeBandwidthPackageBillUsageOutcome;
                typedef std::future<DescribeBandwidthPackageBillUsageOutcome> DescribeBandwidthPackageBillUsageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageBillUsageRequest&, DescribeBandwidthPackageBillUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageBillUsageAsyncHandler;
                typedef Outcome<Error, Model::DescribeBandwidthPackageQuotaResponse> DescribeBandwidthPackageQuotaOutcome;
                typedef std::future<DescribeBandwidthPackageQuotaOutcome> DescribeBandwidthPackageQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageQuotaRequest&, DescribeBandwidthPackageQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribeBandwidthPackageResourcesResponse> DescribeBandwidthPackageResourcesOutcome;
                typedef std::future<DescribeBandwidthPackageResourcesOutcome> DescribeBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageResourcesRequest&, DescribeBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Error, Model::DescribeBandwidthPackagesResponse> DescribeBandwidthPackagesOutcome;
                typedef std::future<DescribeBandwidthPackagesOutcome> DescribeBandwidthPackagesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackagesRequest&, DescribeBandwidthPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackagesAsyncHandler;
                typedef Outcome<Error, Model::DescribeCcnAttachedInstancesResponse> DescribeCcnAttachedInstancesOutcome;
                typedef std::future<DescribeCcnAttachedInstancesOutcome> DescribeCcnAttachedInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnAttachedInstancesRequest&, DescribeCcnAttachedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnAttachedInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeCcnRegionBandwidthLimitsResponse> DescribeCcnRegionBandwidthLimitsOutcome;
                typedef std::future<DescribeCcnRegionBandwidthLimitsOutcome> DescribeCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnRegionBandwidthLimitsRequest&, DescribeCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCcnRoutesResponse> DescribeCcnRoutesOutcome;
                typedef std::future<DescribeCcnRoutesOutcome> DescribeCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnRoutesRequest&, DescribeCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::DescribeCcnsResponse> DescribeCcnsOutcome;
                typedef std::future<DescribeCcnsOutcome> DescribeCcnsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnsRequest&, DescribeCcnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnsAsyncHandler;
                typedef Outcome<Error, Model::DescribeClassicLinkInstancesResponse> DescribeClassicLinkInstancesOutcome;
                typedef std::future<DescribeClassicLinkInstancesOutcome> DescribeClassicLinkInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeClassicLinkInstancesRequest&, DescribeClassicLinkInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicLinkInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeCrossBorderComplianceResponse> DescribeCrossBorderComplianceOutcome;
                typedef std::future<DescribeCrossBorderComplianceOutcome> DescribeCrossBorderComplianceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCrossBorderComplianceRequest&, DescribeCrossBorderComplianceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBorderComplianceAsyncHandler;
                typedef Outcome<Error, Model::DescribeCustomerGatewayVendorsResponse> DescribeCustomerGatewayVendorsOutcome;
                typedef std::future<DescribeCustomerGatewayVendorsOutcome> DescribeCustomerGatewayVendorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewayVendorsRequest&, DescribeCustomerGatewayVendorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewayVendorsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCustomerGatewaysResponse> DescribeCustomerGatewaysOutcome;
                typedef std::future<DescribeCustomerGatewaysOutcome> DescribeCustomerGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewaysRequest&, DescribeCustomerGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewaysAsyncHandler;
                typedef Outcome<Error, Model::DescribeDhcpIpsResponse> DescribeDhcpIpsOutcome;
                typedef std::future<DescribeDhcpIpsOutcome> DescribeDhcpIpsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDhcpIpsRequest&, DescribeDhcpIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDhcpIpsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDirectConnectGatewayCcnRoutesResponse> DescribeDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<DescribeDirectConnectGatewayCcnRoutesOutcome> DescribeDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDirectConnectGatewayCcnRoutesRequest&, DescribeDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDirectConnectGatewaysResponse> DescribeDirectConnectGatewaysOutcome;
                typedef std::future<DescribeDirectConnectGatewaysOutcome> DescribeDirectConnectGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDirectConnectGatewaysRequest&, DescribeDirectConnectGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectGatewaysAsyncHandler;
                typedef Outcome<Error, Model::DescribeFlowLogResponse> DescribeFlowLogOutcome;
                typedef std::future<DescribeFlowLogOutcome> DescribeFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeFlowLogRequest&, DescribeFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogAsyncHandler;
                typedef Outcome<Error, Model::DescribeFlowLogsResponse> DescribeFlowLogsOutcome;
                typedef std::future<DescribeFlowLogsOutcome> DescribeFlowLogsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeFlowLogsRequest&, DescribeFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeGatewayFlowMonitorDetailResponse> DescribeGatewayFlowMonitorDetailOutcome;
                typedef std::future<DescribeGatewayFlowMonitorDetailOutcome> DescribeGatewayFlowMonitorDetailOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeGatewayFlowMonitorDetailRequest&, DescribeGatewayFlowMonitorDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayFlowMonitorDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeGatewayFlowQosResponse> DescribeGatewayFlowQosOutcome;
                typedef std::future<DescribeGatewayFlowQosOutcome> DescribeGatewayFlowQosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeGatewayFlowQosRequest&, DescribeGatewayFlowQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayFlowQosAsyncHandler;
                typedef Outcome<Error, Model::DescribeHaVipsResponse> DescribeHaVipsOutcome;
                typedef std::future<DescribeHaVipsOutcome> DescribeHaVipsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeHaVipsRequest&, DescribeHaVipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHaVipsAsyncHandler;
                typedef Outcome<Error, Model::DescribeIp6AddressesResponse> DescribeIp6AddressesOutcome;
                typedef std::future<DescribeIp6AddressesOutcome> DescribeIp6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIp6AddressesRequest&, DescribeIp6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIp6AddressesAsyncHandler;
                typedef Outcome<Error, Model::DescribeIp6TranslatorQuotaResponse> DescribeIp6TranslatorQuotaOutcome;
                typedef std::future<DescribeIp6TranslatorQuotaOutcome> DescribeIp6TranslatorQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIp6TranslatorQuotaRequest&, DescribeIp6TranslatorQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIp6TranslatorQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribeIp6TranslatorsResponse> DescribeIp6TranslatorsOutcome;
                typedef std::future<DescribeIp6TranslatorsOutcome> DescribeIp6TranslatorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIp6TranslatorsRequest&, DescribeIp6TranslatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIp6TranslatorsAsyncHandler;
                typedef Outcome<Error, Model::DescribeIpGeolocationDatabaseUrlResponse> DescribeIpGeolocationDatabaseUrlOutcome;
                typedef std::future<DescribeIpGeolocationDatabaseUrlOutcome> DescribeIpGeolocationDatabaseUrlOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIpGeolocationDatabaseUrlRequest&, DescribeIpGeolocationDatabaseUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpGeolocationDatabaseUrlAsyncHandler;
                typedef Outcome<Error, Model::DescribeIpGeolocationInfosResponse> DescribeIpGeolocationInfosOutcome;
                typedef std::future<DescribeIpGeolocationInfosOutcome> DescribeIpGeolocationInfosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIpGeolocationInfosRequest&, DescribeIpGeolocationInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpGeolocationInfosAsyncHandler;
                typedef Outcome<Error, Model::DescribeLocalGatewayResponse> DescribeLocalGatewayOutcome;
                typedef std::future<DescribeLocalGatewayOutcome> DescribeLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeLocalGatewayRequest&, DescribeLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocalGatewayAsyncHandler;
                typedef Outcome<Error, Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse> DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome;
                typedef std::future<DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome> DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest&, DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeNatGatewaySourceIpTranslationNatRulesResponse> DescribeNatGatewaySourceIpTranslationNatRulesOutcome;
                typedef std::future<DescribeNatGatewaySourceIpTranslationNatRulesOutcome> DescribeNatGatewaySourceIpTranslationNatRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest&, DescribeNatGatewaySourceIpTranslationNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaySourceIpTranslationNatRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeNatGatewaysResponse> DescribeNatGatewaysOutcome;
                typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewaysRequest&, DescribeNatGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaysAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetDetectStatesResponse> DescribeNetDetectStatesOutcome;
                typedef std::future<DescribeNetDetectStatesOutcome> DescribeNetDetectStatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetDetectStatesRequest&, DescribeNetDetectStatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetDetectStatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetDetectsResponse> DescribeNetDetectsOutcome;
                typedef std::future<DescribeNetDetectsOutcome> DescribeNetDetectsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetDetectsRequest&, DescribeNetDetectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetDetectsAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetworkAclsResponse> DescribeNetworkAclsOutcome;
                typedef std::future<DescribeNetworkAclsOutcome> DescribeNetworkAclsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkAclsRequest&, DescribeNetworkAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAclsAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetworkInterfaceLimitResponse> DescribeNetworkInterfaceLimitOutcome;
                typedef std::future<DescribeNetworkInterfaceLimitOutcome> DescribeNetworkInterfaceLimitOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkInterfaceLimitRequest&, DescribeNetworkInterfaceLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfaceLimitAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetworkInterfacesResponse> DescribeNetworkInterfacesOutcome;
                typedef std::future<DescribeNetworkInterfacesOutcome> DescribeNetworkInterfacesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkInterfacesRequest&, DescribeNetworkInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductQuotaResponse> DescribeProductQuotaOutcome;
                typedef std::future<DescribeProductQuotaOutcome> DescribeProductQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeProductQuotaRequest&, DescribeProductQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribeRouteConflictsResponse> DescribeRouteConflictsOutcome;
                typedef std::future<DescribeRouteConflictsOutcome> DescribeRouteConflictsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRouteConflictsRequest&, DescribeRouteConflictsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteConflictsAsyncHandler;
                typedef Outcome<Error, Model::DescribeRouteTablesResponse> DescribeRouteTablesOutcome;
                typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRouteTablesRequest&, DescribeRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupAssociationStatisticsResponse> DescribeSecurityGroupAssociationStatisticsOutcome;
                typedef std::future<DescribeSecurityGroupAssociationStatisticsOutcome> DescribeSecurityGroupAssociationStatisticsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupAssociationStatisticsRequest&, DescribeSecurityGroupAssociationStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAssociationStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupLimitsResponse> DescribeSecurityGroupLimitsOutcome;
                typedef std::future<DescribeSecurityGroupLimitsOutcome> DescribeSecurityGroupLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupLimitsRequest&, DescribeSecurityGroupLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupLimitsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupPoliciesResponse> DescribeSecurityGroupPoliciesOutcome;
                typedef std::future<DescribeSecurityGroupPoliciesOutcome> DescribeSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupPoliciesRequest&, DescribeSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupReferencesResponse> DescribeSecurityGroupReferencesOutcome;
                typedef std::future<DescribeSecurityGroupReferencesOutcome> DescribeSecurityGroupReferencesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupReferencesRequest&, DescribeSecurityGroupReferencesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupReferencesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupsResponse> DescribeSecurityGroupsOutcome;
                typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupsRequest&, DescribeSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceTemplateGroupsResponse> DescribeServiceTemplateGroupsOutcome;
                typedef std::future<DescribeServiceTemplateGroupsOutcome> DescribeServiceTemplateGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeServiceTemplateGroupsRequest&, DescribeServiceTemplateGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceTemplateGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceTemplatesResponse> DescribeServiceTemplatesOutcome;
                typedef std::future<DescribeServiceTemplatesOutcome> DescribeServiceTemplatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeServiceTemplatesRequest&, DescribeServiceTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSubnetsResponse> DescribeSubnetsOutcome;
                typedef std::future<DescribeSubnetsOutcome> DescribeSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSubnetsRequest&, DescribeSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeTemplateLimitsResponse> DescribeTemplateLimitsOutcome;
                typedef std::future<DescribeTemplateLimitsOutcome> DescribeTemplateLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTemplateLimitsRequest&, DescribeTemplateLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateLimitsAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcEndPointResponse> DescribeVpcEndPointOutcome;
                typedef std::future<DescribeVpcEndPointOutcome> DescribeVpcEndPointOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcEndPointRequest&, DescribeVpcEndPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcEndPointAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcEndPointServiceResponse> DescribeVpcEndPointServiceOutcome;
                typedef std::future<DescribeVpcEndPointServiceOutcome> DescribeVpcEndPointServiceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcEndPointServiceRequest&, DescribeVpcEndPointServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcEndPointServiceAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcEndPointServiceWhiteListResponse> DescribeVpcEndPointServiceWhiteListOutcome;
                typedef std::future<DescribeVpcEndPointServiceWhiteListOutcome> DescribeVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcEndPointServiceWhiteListRequest&, DescribeVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcInstancesResponse> DescribeVpcInstancesOutcome;
                typedef std::future<DescribeVpcInstancesOutcome> DescribeVpcInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcInstancesRequest&, DescribeVpcInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcIpv6AddressesResponse> DescribeVpcIpv6AddressesOutcome;
                typedef std::future<DescribeVpcIpv6AddressesOutcome> DescribeVpcIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcIpv6AddressesRequest&, DescribeVpcIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcIpv6AddressesAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcLimitsResponse> DescribeVpcLimitsOutcome;
                typedef std::future<DescribeVpcLimitsOutcome> DescribeVpcLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcLimitsRequest&, DescribeVpcLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcLimitsAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcPrivateIpAddressesResponse> DescribeVpcPrivateIpAddressesOutcome;
                typedef std::future<DescribeVpcPrivateIpAddressesOutcome> DescribeVpcPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcPrivateIpAddressesRequest&, DescribeVpcPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcPrivateIpAddressesAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcResourceDashboardResponse> DescribeVpcResourceDashboardOutcome;
                typedef std::future<DescribeVpcResourceDashboardOutcome> DescribeVpcResourceDashboardOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcResourceDashboardRequest&, DescribeVpcResourceDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcResourceDashboardAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcTaskResultResponse> DescribeVpcTaskResultOutcome;
                typedef std::future<DescribeVpcTaskResultOutcome> DescribeVpcTaskResultOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcTaskResultRequest&, DescribeVpcTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcTaskResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcsResponse> DescribeVpcsOutcome;
                typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcsRequest&, DescribeVpcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpnConnectionsResponse> DescribeVpnConnectionsOutcome;
                typedef std::future<DescribeVpnConnectionsOutcome> DescribeVpnConnectionsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnConnectionsRequest&, DescribeVpnConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnConnectionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpnGatewayCcnRoutesResponse> DescribeVpnGatewayCcnRoutesOutcome;
                typedef std::future<DescribeVpnGatewayCcnRoutesOutcome> DescribeVpnGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewayCcnRoutesRequest&, DescribeVpnGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpnGatewayRoutesResponse> DescribeVpnGatewayRoutesOutcome;
                typedef std::future<DescribeVpnGatewayRoutesOutcome> DescribeVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewayRoutesRequest&, DescribeVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpnGatewaysResponse> DescribeVpnGatewaysOutcome;
                typedef std::future<DescribeVpnGatewaysOutcome> DescribeVpnGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewaysRequest&, DescribeVpnGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewaysAsyncHandler;
                typedef Outcome<Error, Model::DetachCcnInstancesResponse> DetachCcnInstancesOutcome;
                typedef std::future<DetachCcnInstancesOutcome> DetachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachCcnInstancesRequest&, DetachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::DetachClassicLinkVpcResponse> DetachClassicLinkVpcOutcome;
                typedef std::future<DetachClassicLinkVpcOutcome> DetachClassicLinkVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachClassicLinkVpcRequest&, DetachClassicLinkVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachClassicLinkVpcAsyncHandler;
                typedef Outcome<Error, Model::DetachNetworkInterfaceResponse> DetachNetworkInterfaceOutcome;
                typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachNetworkInterfaceRequest&, DetachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::DisableCcnRoutesResponse> DisableCcnRoutesOutcome;
                typedef std::future<DisableCcnRoutesOutcome> DisableCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableCcnRoutesRequest&, DisableCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::DisableGatewayFlowMonitorResponse> DisableGatewayFlowMonitorOutcome;
                typedef std::future<DisableGatewayFlowMonitorOutcome> DisableGatewayFlowMonitorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableGatewayFlowMonitorRequest&, DisableGatewayFlowMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableGatewayFlowMonitorAsyncHandler;
                typedef Outcome<Error, Model::DisableRoutesResponse> DisableRoutesOutcome;
                typedef std::future<DisableRoutesOutcome> DisableRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableRoutesRequest&, DisableRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableRoutesAsyncHandler;
                typedef Outcome<Error, Model::DisassociateAddressResponse> DisassociateAddressOutcome;
                typedef std::future<DisassociateAddressOutcome> DisassociateAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateAddressRequest&, DisassociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateAddressAsyncHandler;
                typedef Outcome<Error, Model::DisassociateDhcpIpWithAddressIpResponse> DisassociateDhcpIpWithAddressIpOutcome;
                typedef std::future<DisassociateDhcpIpWithAddressIpOutcome> DisassociateDhcpIpWithAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateDhcpIpWithAddressIpRequest&, DisassociateDhcpIpWithAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateDhcpIpWithAddressIpAsyncHandler;
                typedef Outcome<Error, Model::DisassociateDirectConnectGatewayNatGatewayResponse> DisassociateDirectConnectGatewayNatGatewayOutcome;
                typedef std::future<DisassociateDirectConnectGatewayNatGatewayOutcome> DisassociateDirectConnectGatewayNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateDirectConnectGatewayNatGatewayRequest&, DisassociateDirectConnectGatewayNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateDirectConnectGatewayNatGatewayAsyncHandler;
                typedef Outcome<Error, Model::DisassociateNatGatewayAddressResponse> DisassociateNatGatewayAddressOutcome;
                typedef std::future<DisassociateNatGatewayAddressOutcome> DisassociateNatGatewayAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNatGatewayAddressRequest&, DisassociateNatGatewayAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNatGatewayAddressAsyncHandler;
                typedef Outcome<Error, Model::DisassociateNetworkAclSubnetsResponse> DisassociateNetworkAclSubnetsOutcome;
                typedef std::future<DisassociateNetworkAclSubnetsOutcome> DisassociateNetworkAclSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNetworkAclSubnetsRequest&, DisassociateNetworkAclSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNetworkAclSubnetsAsyncHandler;
                typedef Outcome<Error, Model::DisassociateNetworkInterfaceSecurityGroupsResponse> DisassociateNetworkInterfaceSecurityGroupsOutcome;
                typedef std::future<DisassociateNetworkInterfaceSecurityGroupsOutcome> DisassociateNetworkInterfaceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNetworkInterfaceSecurityGroupsRequest&, DisassociateNetworkInterfaceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNetworkInterfaceSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DisassociateVpcEndPointSecurityGroupsResponse> DisassociateVpcEndPointSecurityGroupsOutcome;
                typedef std::future<DisassociateVpcEndPointSecurityGroupsOutcome> DisassociateVpcEndPointSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateVpcEndPointSecurityGroupsRequest&, DisassociateVpcEndPointSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateVpcEndPointSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DownloadCustomerGatewayConfigurationResponse> DownloadCustomerGatewayConfigurationOutcome;
                typedef std::future<DownloadCustomerGatewayConfigurationOutcome> DownloadCustomerGatewayConfigurationOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DownloadCustomerGatewayConfigurationRequest&, DownloadCustomerGatewayConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCustomerGatewayConfigurationAsyncHandler;
                typedef Outcome<Error, Model::EnableCcnRoutesResponse> EnableCcnRoutesOutcome;
                typedef std::future<EnableCcnRoutesOutcome> EnableCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableCcnRoutesRequest&, EnableCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::EnableGatewayFlowMonitorResponse> EnableGatewayFlowMonitorOutcome;
                typedef std::future<EnableGatewayFlowMonitorOutcome> EnableGatewayFlowMonitorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableGatewayFlowMonitorRequest&, EnableGatewayFlowMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableGatewayFlowMonitorAsyncHandler;
                typedef Outcome<Error, Model::EnableRoutesResponse> EnableRoutesOutcome;
                typedef std::future<EnableRoutesOutcome> EnableRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableRoutesRequest&, EnableRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableRoutesAsyncHandler;
                typedef Outcome<Error, Model::EnableVpcEndPointConnectResponse> EnableVpcEndPointConnectOutcome;
                typedef std::future<EnableVpcEndPointConnectOutcome> EnableVpcEndPointConnectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableVpcEndPointConnectRequest&, EnableVpcEndPointConnectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcEndPointConnectAsyncHandler;
                typedef Outcome<Error, Model::GetCcnRegionBandwidthLimitsResponse> GetCcnRegionBandwidthLimitsOutcome;
                typedef std::future<GetCcnRegionBandwidthLimitsOutcome> GetCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::GetCcnRegionBandwidthLimitsRequest&, GetCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Error, Model::HaVipAssociateAddressIpResponse> HaVipAssociateAddressIpOutcome;
                typedef std::future<HaVipAssociateAddressIpOutcome> HaVipAssociateAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::HaVipAssociateAddressIpRequest&, HaVipAssociateAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HaVipAssociateAddressIpAsyncHandler;
                typedef Outcome<Error, Model::HaVipDisassociateAddressIpResponse> HaVipDisassociateAddressIpOutcome;
                typedef std::future<HaVipDisassociateAddressIpOutcome> HaVipDisassociateAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::HaVipDisassociateAddressIpRequest&, HaVipDisassociateAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HaVipDisassociateAddressIpAsyncHandler;
                typedef Outcome<Error, Model::InquirePriceCreateDirectConnectGatewayResponse> InquirePriceCreateDirectConnectGatewayOutcome;
                typedef std::future<InquirePriceCreateDirectConnectGatewayOutcome> InquirePriceCreateDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquirePriceCreateDirectConnectGatewayRequest&, InquirePriceCreateDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateDirectConnectGatewayAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceCreateVpnGatewayResponse> InquiryPriceCreateVpnGatewayOutcome;
                typedef std::future<InquiryPriceCreateVpnGatewayOutcome> InquiryPriceCreateVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceCreateVpnGatewayRequest&, InquiryPriceCreateVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateVpnGatewayAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceRenewVpnGatewayResponse> InquiryPriceRenewVpnGatewayOutcome;
                typedef std::future<InquiryPriceRenewVpnGatewayOutcome> InquiryPriceRenewVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceRenewVpnGatewayRequest&, InquiryPriceRenewVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewVpnGatewayAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse> InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome;
                typedef std::future<InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome> InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest&, InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResetVpnGatewayInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Error, Model::MigrateNetworkInterfaceResponse> MigrateNetworkInterfaceOutcome;
                typedef std::future<MigrateNetworkInterfaceOutcome> MigrateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::MigrateNetworkInterfaceRequest&, MigrateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::MigratePrivateIpAddressResponse> MigratePrivateIpAddressOutcome;
                typedef std::future<MigratePrivateIpAddressOutcome> MigratePrivateIpAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::MigratePrivateIpAddressRequest&, MigratePrivateIpAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigratePrivateIpAddressAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressAttributeResponse> ModifyAddressAttributeOutcome;
                typedef std::future<ModifyAddressAttributeOutcome> ModifyAddressAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressAttributeRequest&, ModifyAddressAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressInternetChargeTypeResponse> ModifyAddressInternetChargeTypeOutcome;
                typedef std::future<ModifyAddressInternetChargeTypeOutcome> ModifyAddressInternetChargeTypeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressInternetChargeTypeRequest&, ModifyAddressInternetChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressInternetChargeTypeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressTemplateAttributeResponse> ModifyAddressTemplateAttributeOutcome;
                typedef std::future<ModifyAddressTemplateAttributeOutcome> ModifyAddressTemplateAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressTemplateAttributeRequest&, ModifyAddressTemplateAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressTemplateAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressTemplateGroupAttributeResponse> ModifyAddressTemplateGroupAttributeOutcome;
                typedef std::future<ModifyAddressTemplateGroupAttributeOutcome> ModifyAddressTemplateGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressTemplateGroupAttributeRequest&, ModifyAddressTemplateGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressTemplateGroupAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressesBandwidthResponse> ModifyAddressesBandwidthOutcome;
                typedef std::future<ModifyAddressesBandwidthOutcome> ModifyAddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressesBandwidthRequest&, ModifyAddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressesBandwidthAsyncHandler;
                typedef Outcome<Error, Model::ModifyAssistantCidrResponse> ModifyAssistantCidrOutcome;
                typedef std::future<ModifyAssistantCidrOutcome> ModifyAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAssistantCidrRequest&, ModifyAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssistantCidrAsyncHandler;
                typedef Outcome<Error, Model::ModifyBandwidthPackageAttributeResponse> ModifyBandwidthPackageAttributeOutcome;
                typedef std::future<ModifyBandwidthPackageAttributeOutcome> ModifyBandwidthPackageAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyBandwidthPackageAttributeRequest&, ModifyBandwidthPackageAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBandwidthPackageAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyCcnAttachedInstancesAttributeResponse> ModifyCcnAttachedInstancesAttributeOutcome;
                typedef std::future<ModifyCcnAttachedInstancesAttributeOutcome> ModifyCcnAttachedInstancesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnAttachedInstancesAttributeRequest&, ModifyCcnAttachedInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnAttachedInstancesAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyCcnAttributeResponse> ModifyCcnAttributeOutcome;
                typedef std::future<ModifyCcnAttributeOutcome> ModifyCcnAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnAttributeRequest&, ModifyCcnAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyCcnRegionBandwidthLimitsTypeResponse> ModifyCcnRegionBandwidthLimitsTypeOutcome;
                typedef std::future<ModifyCcnRegionBandwidthLimitsTypeOutcome> ModifyCcnRegionBandwidthLimitsTypeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnRegionBandwidthLimitsTypeRequest&, ModifyCcnRegionBandwidthLimitsTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnRegionBandwidthLimitsTypeAsyncHandler;
                typedef Outcome<Error, Model::ModifyCustomerGatewayAttributeResponse> ModifyCustomerGatewayAttributeOutcome;
                typedef std::future<ModifyCustomerGatewayAttributeOutcome> ModifyCustomerGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCustomerGatewayAttributeRequest&, ModifyCustomerGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomerGatewayAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyDhcpIpAttributeResponse> ModifyDhcpIpAttributeOutcome;
                typedef std::future<ModifyDhcpIpAttributeOutcome> ModifyDhcpIpAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyDhcpIpAttributeRequest&, ModifyDhcpIpAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDhcpIpAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyDirectConnectGatewayAttributeResponse> ModifyDirectConnectGatewayAttributeOutcome;
                typedef std::future<ModifyDirectConnectGatewayAttributeOutcome> ModifyDirectConnectGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyDirectConnectGatewayAttributeRequest&, ModifyDirectConnectGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDirectConnectGatewayAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyFlowLogAttributeResponse> ModifyFlowLogAttributeOutcome;
                typedef std::future<ModifyFlowLogAttributeOutcome> ModifyFlowLogAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyFlowLogAttributeRequest&, ModifyFlowLogAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowLogAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyGatewayFlowQosResponse> ModifyGatewayFlowQosOutcome;
                typedef std::future<ModifyGatewayFlowQosOutcome> ModifyGatewayFlowQosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyGatewayFlowQosRequest&, ModifyGatewayFlowQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayFlowQosAsyncHandler;
                typedef Outcome<Error, Model::ModifyHaVipAttributeResponse> ModifyHaVipAttributeOutcome;
                typedef std::future<ModifyHaVipAttributeOutcome> ModifyHaVipAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyHaVipAttributeRequest&, ModifyHaVipAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHaVipAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyIp6AddressesBandwidthResponse> ModifyIp6AddressesBandwidthOutcome;
                typedef std::future<ModifyIp6AddressesBandwidthOutcome> ModifyIp6AddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIp6AddressesBandwidthRequest&, ModifyIp6AddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIp6AddressesBandwidthAsyncHandler;
                typedef Outcome<Error, Model::ModifyIp6RuleResponse> ModifyIp6RuleOutcome;
                typedef std::future<ModifyIp6RuleOutcome> ModifyIp6RuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIp6RuleRequest&, ModifyIp6RuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIp6RuleAsyncHandler;
                typedef Outcome<Error, Model::ModifyIp6TranslatorResponse> ModifyIp6TranslatorOutcome;
                typedef std::future<ModifyIp6TranslatorOutcome> ModifyIp6TranslatorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIp6TranslatorRequest&, ModifyIp6TranslatorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIp6TranslatorAsyncHandler;
                typedef Outcome<Error, Model::ModifyIpv6AddressesAttributeResponse> ModifyIpv6AddressesAttributeOutcome;
                typedef std::future<ModifyIpv6AddressesAttributeOutcome> ModifyIpv6AddressesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIpv6AddressesAttributeRequest&, ModifyIpv6AddressesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpv6AddressesAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyLocalGatewayResponse> ModifyLocalGatewayOutcome;
                typedef std::future<ModifyLocalGatewayOutcome> ModifyLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyLocalGatewayRequest&, ModifyLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLocalGatewayAsyncHandler;
                typedef Outcome<Error, Model::ModifyNatGatewayAttributeResponse> ModifyNatGatewayAttributeOutcome;
                typedef std::future<ModifyNatGatewayAttributeOutcome> ModifyNatGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewayAttributeRequest&, ModifyNatGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewayAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse> ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome> ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest&, ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Error, Model::ModifyNatGatewaySourceIpTranslationNatRuleResponse> ModifyNatGatewaySourceIpTranslationNatRuleOutcome;
                typedef std::future<ModifyNatGatewaySourceIpTranslationNatRuleOutcome> ModifyNatGatewaySourceIpTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewaySourceIpTranslationNatRuleRequest&, ModifyNatGatewaySourceIpTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewaySourceIpTranslationNatRuleAsyncHandler;
                typedef Outcome<Error, Model::ModifyNetDetectResponse> ModifyNetDetectOutcome;
                typedef std::future<ModifyNetDetectOutcome> ModifyNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetDetectRequest&, ModifyNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetDetectAsyncHandler;
                typedef Outcome<Error, Model::ModifyNetworkAclAttributeResponse> ModifyNetworkAclAttributeOutcome;
                typedef std::future<ModifyNetworkAclAttributeOutcome> ModifyNetworkAclAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclAttributeRequest&, ModifyNetworkAclAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyNetworkAclEntriesResponse> ModifyNetworkAclEntriesOutcome;
                typedef std::future<ModifyNetworkAclEntriesOutcome> ModifyNetworkAclEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclEntriesRequest&, ModifyNetworkAclEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclEntriesAsyncHandler;
                typedef Outcome<Error, Model::ModifyNetworkInterfaceAttributeResponse> ModifyNetworkInterfaceAttributeOutcome;
                typedef std::future<ModifyNetworkInterfaceAttributeOutcome> ModifyNetworkInterfaceAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkInterfaceAttributeRequest&, ModifyNetworkInterfaceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkInterfaceAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyNetworkInterfaceQosResponse> ModifyNetworkInterfaceQosOutcome;
                typedef std::future<ModifyNetworkInterfaceQosOutcome> ModifyNetworkInterfaceQosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkInterfaceQosRequest&, ModifyNetworkInterfaceQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkInterfaceQosAsyncHandler;
                typedef Outcome<Error, Model::ModifyPrivateIpAddressesAttributeResponse> ModifyPrivateIpAddressesAttributeOutcome;
                typedef std::future<ModifyPrivateIpAddressesAttributeOutcome> ModifyPrivateIpAddressesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyPrivateIpAddressesAttributeRequest&, ModifyPrivateIpAddressesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateIpAddressesAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyRouteTableAttributeResponse> ModifyRouteTableAttributeOutcome;
                typedef std::future<ModifyRouteTableAttributeOutcome> ModifyRouteTableAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyRouteTableAttributeRequest&, ModifyRouteTableAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteTableAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifySecurityGroupAttributeResponse> ModifySecurityGroupAttributeOutcome;
                typedef std::future<ModifySecurityGroupAttributeOutcome> ModifySecurityGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySecurityGroupAttributeRequest&, ModifySecurityGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifySecurityGroupPoliciesResponse> ModifySecurityGroupPoliciesOutcome;
                typedef std::future<ModifySecurityGroupPoliciesOutcome> ModifySecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySecurityGroupPoliciesRequest&, ModifySecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::ModifyServiceTemplateAttributeResponse> ModifyServiceTemplateAttributeOutcome;
                typedef std::future<ModifyServiceTemplateAttributeOutcome> ModifyServiceTemplateAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyServiceTemplateAttributeRequest&, ModifyServiceTemplateAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceTemplateAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyServiceTemplateGroupAttributeResponse> ModifyServiceTemplateGroupAttributeOutcome;
                typedef std::future<ModifyServiceTemplateGroupAttributeOutcome> ModifyServiceTemplateGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyServiceTemplateGroupAttributeRequest&, ModifyServiceTemplateGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceTemplateGroupAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifySubnetAttributeResponse> ModifySubnetAttributeOutcome;
                typedef std::future<ModifySubnetAttributeOutcome> ModifySubnetAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySubnetAttributeRequest&, ModifySubnetAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubnetAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpcAttributeResponse> ModifyVpcAttributeOutcome;
                typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcAttributeRequest&, ModifyVpcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpcEndPointAttributeResponse> ModifyVpcEndPointAttributeOutcome;
                typedef std::future<ModifyVpcEndPointAttributeOutcome> ModifyVpcEndPointAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcEndPointAttributeRequest&, ModifyVpcEndPointAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcEndPointAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpcEndPointServiceAttributeResponse> ModifyVpcEndPointServiceAttributeOutcome;
                typedef std::future<ModifyVpcEndPointServiceAttributeOutcome> ModifyVpcEndPointServiceAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcEndPointServiceAttributeRequest&, ModifyVpcEndPointServiceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcEndPointServiceAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpcEndPointServiceWhiteListResponse> ModifyVpcEndPointServiceWhiteListOutcome;
                typedef std::future<ModifyVpcEndPointServiceWhiteListOutcome> ModifyVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcEndPointServiceWhiteListRequest&, ModifyVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpnConnectionAttributeResponse> ModifyVpnConnectionAttributeOutcome;
                typedef std::future<ModifyVpnConnectionAttributeOutcome> ModifyVpnConnectionAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnConnectionAttributeRequest&, ModifyVpnConnectionAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnConnectionAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpnGatewayAttributeResponse> ModifyVpnGatewayAttributeOutcome;
                typedef std::future<ModifyVpnGatewayAttributeOutcome> ModifyVpnGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayAttributeRequest&, ModifyVpnGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpnGatewayCcnRoutesResponse> ModifyVpnGatewayCcnRoutesOutcome;
                typedef std::future<ModifyVpnGatewayCcnRoutesOutcome> ModifyVpnGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayCcnRoutesRequest&, ModifyVpnGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpnGatewayRoutesResponse> ModifyVpnGatewayRoutesOutcome;
                typedef std::future<ModifyVpnGatewayRoutesOutcome> ModifyVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayRoutesRequest&, ModifyVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Error, Model::NotifyRoutesResponse> NotifyRoutesOutcome;
                typedef std::future<NotifyRoutesOutcome> NotifyRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::NotifyRoutesRequest&, NotifyRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> NotifyRoutesAsyncHandler;
                typedef Outcome<Error, Model::RejectAttachCcnInstancesResponse> RejectAttachCcnInstancesOutcome;
                typedef std::future<RejectAttachCcnInstancesOutcome> RejectAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RejectAttachCcnInstancesRequest&, RejectAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectAttachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::ReleaseAddressesResponse> ReleaseAddressesOutcome;
                typedef std::future<ReleaseAddressesOutcome> ReleaseAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReleaseAddressesRequest&, ReleaseAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseAddressesAsyncHandler;
                typedef Outcome<Error, Model::ReleaseIp6AddressesBandwidthResponse> ReleaseIp6AddressesBandwidthOutcome;
                typedef std::future<ReleaseIp6AddressesBandwidthOutcome> ReleaseIp6AddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReleaseIp6AddressesBandwidthRequest&, ReleaseIp6AddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseIp6AddressesBandwidthAsyncHandler;
                typedef Outcome<Error, Model::RemoveBandwidthPackageResourcesResponse> RemoveBandwidthPackageResourcesOutcome;
                typedef std::future<RemoveBandwidthPackageResourcesOutcome> RemoveBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RemoveBandwidthPackageResourcesRequest&, RemoveBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Error, Model::RemoveIp6RulesResponse> RemoveIp6RulesOutcome;
                typedef std::future<RemoveIp6RulesOutcome> RemoveIp6RulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RemoveIp6RulesRequest&, RemoveIp6RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveIp6RulesAsyncHandler;
                typedef Outcome<Error, Model::RenewAddressesResponse> RenewAddressesOutcome;
                typedef std::future<RenewAddressesOutcome> RenewAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RenewAddressesRequest&, RenewAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewAddressesAsyncHandler;
                typedef Outcome<Error, Model::RenewVpnGatewayResponse> RenewVpnGatewayOutcome;
                typedef std::future<RenewVpnGatewayOutcome> RenewVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RenewVpnGatewayRequest&, RenewVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewVpnGatewayAsyncHandler;
                typedef Outcome<Error, Model::ReplaceDirectConnectGatewayCcnRoutesResponse> ReplaceDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<ReplaceDirectConnectGatewayCcnRoutesOutcome> ReplaceDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceDirectConnectGatewayCcnRoutesRequest&, ReplaceDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::ReplaceRouteTableAssociationResponse> ReplaceRouteTableAssociationOutcome;
                typedef std::future<ReplaceRouteTableAssociationOutcome> ReplaceRouteTableAssociationOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRouteTableAssociationRequest&, ReplaceRouteTableAssociationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRouteTableAssociationAsyncHandler;
                typedef Outcome<Error, Model::ReplaceRoutesResponse> ReplaceRoutesOutcome;
                typedef std::future<ReplaceRoutesOutcome> ReplaceRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRoutesRequest&, ReplaceRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRoutesAsyncHandler;
                typedef Outcome<Error, Model::ReplaceSecurityGroupPolicyResponse> ReplaceSecurityGroupPolicyOutcome;
                typedef std::future<ReplaceSecurityGroupPolicyOutcome> ReplaceSecurityGroupPolicyOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceSecurityGroupPolicyRequest&, ReplaceSecurityGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceSecurityGroupPolicyAsyncHandler;
                typedef Outcome<Error, Model::ResetAttachCcnInstancesResponse> ResetAttachCcnInstancesOutcome;
                typedef std::future<ResetAttachCcnInstancesOutcome> ResetAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetAttachCcnInstancesRequest&, ResetAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAttachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::ResetNatGatewayConnectionResponse> ResetNatGatewayConnectionOutcome;
                typedef std::future<ResetNatGatewayConnectionOutcome> ResetNatGatewayConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetNatGatewayConnectionRequest&, ResetNatGatewayConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetNatGatewayConnectionAsyncHandler;
                typedef Outcome<Error, Model::ResetRoutesResponse> ResetRoutesOutcome;
                typedef std::future<ResetRoutesOutcome> ResetRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetRoutesRequest&, ResetRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetRoutesAsyncHandler;
                typedef Outcome<Error, Model::ResetVpnConnectionResponse> ResetVpnConnectionOutcome;
                typedef std::future<ResetVpnConnectionOutcome> ResetVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetVpnConnectionRequest&, ResetVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetVpnConnectionAsyncHandler;
                typedef Outcome<Error, Model::ResetVpnGatewayInternetMaxBandwidthResponse> ResetVpnGatewayInternetMaxBandwidthOutcome;
                typedef std::future<ResetVpnGatewayInternetMaxBandwidthOutcome> ResetVpnGatewayInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetVpnGatewayInternetMaxBandwidthRequest&, ResetVpnGatewayInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetVpnGatewayInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Error, Model::SetCcnRegionBandwidthLimitsResponse> SetCcnRegionBandwidthLimitsOutcome;
                typedef std::future<SetCcnRegionBandwidthLimitsOutcome> SetCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::SetCcnRegionBandwidthLimitsRequest&, SetCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Error, Model::TransformAddressResponse> TransformAddressOutcome;
                typedef std::future<TransformAddressOutcome> TransformAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::TransformAddressRequest&, TransformAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransformAddressAsyncHandler;
                typedef Outcome<Error, Model::UnassignIpv6AddressesResponse> UnassignIpv6AddressesOutcome;
                typedef std::future<UnassignIpv6AddressesOutcome> UnassignIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6AddressesRequest&, UnassignIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6AddressesAsyncHandler;
                typedef Outcome<Error, Model::UnassignIpv6CidrBlockResponse> UnassignIpv6CidrBlockOutcome;
                typedef std::future<UnassignIpv6CidrBlockOutcome> UnassignIpv6CidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6CidrBlockRequest&, UnassignIpv6CidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6CidrBlockAsyncHandler;
                typedef Outcome<Error, Model::UnassignIpv6SubnetCidrBlockResponse> UnassignIpv6SubnetCidrBlockOutcome;
                typedef std::future<UnassignIpv6SubnetCidrBlockOutcome> UnassignIpv6SubnetCidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6SubnetCidrBlockRequest&, UnassignIpv6SubnetCidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6SubnetCidrBlockAsyncHandler;
                typedef Outcome<Error, Model::UnassignPrivateIpAddressesResponse> UnassignPrivateIpAddressesOutcome;
                typedef std::future<UnassignPrivateIpAddressesOutcome> UnassignPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignPrivateIpAddressesRequest&, UnassignPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignPrivateIpAddressesAsyncHandler;
                typedef Outcome<Error, Model::WithdrawNotifyRoutesResponse> WithdrawNotifyRoutesOutcome;
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
                 *本接口 (AllocateAddresses) 用于申请一个或多个[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）。
* EIP 是专为动态云计算设计的静态 IP 地址。借助 EIP，您可以快速将 EIP 重新映射到您的另一个实例上，从而屏蔽实例故障。
* 您的 EIP 与腾讯云账户相关联，而不是与某个实例相关联。在您选择显式释放该地址，或欠费超过24小时之前，它会一直与您的腾讯云账户保持关联。
* 一个腾讯云账户在每个地域能申请的 EIP 最大配额有所限制，可参见 [EIP 产品简介](https://cloud.tencent.com/document/product/213/5733)，上述配额可通过 DescribeAddressQuota 接口获取。
                 * @param req AllocateAddressesRequest
                 * @return AllocateAddressesOutcome
                 */
                AllocateAddressesOutcome AllocateAddresses(const Model::AllocateAddressesRequest &request);
                void AllocateAddressesAsync(const Model::AllocateAddressesRequest& request, const AllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateAddressesOutcomeCallable AllocateAddressesCallable(const Model::AllocateAddressesRequest& request);

                /**
                 *该接口用于给IPv6地址初次分配公网带宽
                 * @param req AllocateIp6AddressesBandwidthRequest
                 * @return AllocateIp6AddressesBandwidthOutcome
                 */
                AllocateIp6AddressesBandwidthOutcome AllocateIp6AddressesBandwidth(const Model::AllocateIp6AddressesBandwidthRequest &request);
                void AllocateIp6AddressesBandwidthAsync(const Model::AllocateIp6AddressesBandwidthRequest& request, const AllocateIp6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateIp6AddressesBandwidthOutcomeCallable AllocateIp6AddressesBandwidthCallable(const Model::AllocateIp6AddressesBandwidthRequest& request);

                /**
                 *本接口（AssignIpv6Addresses）用于弹性网卡申请`IPv6`地址。<br />
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
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
* 每个VPC只能申请一个IPv6网段
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
* 可以指定内网IP地址申请，内网IP地址类型不能为主IP，主IP已存在，不能修改，内网IP必须要弹性网卡所在子网内，而且不能被占用。
* 在弹性网卡上申请一个到多个辅助内网IP，接口会在弹性网卡所在子网网段内返回指定数量的辅助内网IP。
                 * @param req AssignPrivateIpAddressesRequest
                 * @return AssignPrivateIpAddressesOutcome
                 */
                AssignPrivateIpAddressesOutcome AssignPrivateIpAddresses(const Model::AssignPrivateIpAddressesRequest &request);
                void AssignPrivateIpAddressesAsync(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignPrivateIpAddressesOutcomeCallable AssignPrivateIpAddressesCallable(const Model::AssignPrivateIpAddressesRequest& request);

                /**
                 *本接口 (AssociateAddress) 用于将[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）绑定到实例或弹性网卡的指定内网 IP 上。
* 将 EIP 绑定到实例（CVM）上，其本质是将 EIP 绑定到实例上主网卡的主内网 IP 上。
* 将 EIP 绑定到主网卡的主内网IP上，绑定过程会把其上绑定的普通公网 IP 自动解绑并释放。
* 将 EIP 绑定到指定网卡的内网 IP上（非主网卡的主内网IP），则必须先解绑该 EIP，才能再绑定新的。
* 将 EIP 绑定到NAT网关，请使用接口[AssociateNatGatewayAddress](https://cloud.tencent.com/document/product/215/36722)
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
                 *本接口(AssociateNatGatewayAddress)用于NAT网关绑定弹性IP（EIP）。
                 * @param req AssociateNatGatewayAddressRequest
                 * @return AssociateNatGatewayAddressOutcome
                 */
                AssociateNatGatewayAddressOutcome AssociateNatGatewayAddress(const Model::AssociateNatGatewayAddressRequest &request);
                void AssociateNatGatewayAddressAsync(const Model::AssociateNatGatewayAddressRequest& request, const AssociateNatGatewayAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateNatGatewayAddressOutcomeCallable AssociateNatGatewayAddressCallable(const Model::AssociateNatGatewayAddressRequest& request);

                /**
                 *本接口（AssociateNetworkAclSubnets）用于网络ACL关联vpc下的子网。
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
每个云联网能够关联的网络实例个数是有限的，详请参考产品文档。如果需要扩充请联系在线客服。
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
                 * @param req AttachClassicLinkVpcRequest
                 * @return AttachClassicLinkVpcOutcome
                 */
                AttachClassicLinkVpcOutcome AttachClassicLinkVpc(const Model::AttachClassicLinkVpcRequest &request);
                void AttachClassicLinkVpcAsync(const Model::AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachClassicLinkVpcOutcomeCallable AttachClassicLinkVpcCallable(const Model::AttachClassicLinkVpcRequest& request);

                /**
                 *本接口（AttachNetworkInterface）用于弹性网卡绑定云服务器。
* 一个云服务器可以绑定多个弹性网卡，但只能绑定一个主网卡。更多限制信息详见<a href="https://cloud.tencent.com/document/product/576/18527">弹性网卡使用限制</a>。
* 一个弹性网卡只能同时绑定一个云服务器。
* 只有运行中或者已关机状态的云服务器才能绑定弹性网卡，查看云服务器状态详见<a href="https://cloud.tencent.com/document/api/213/9452#InstanceStatus">腾讯云服务器信息</a>。
* 弹性网卡绑定的云服务器必须是私有网络的，而且云服务器所在可用区必须和弹性网卡子网的可用区相同。

本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
                 * @param req AttachNetworkInterfaceRequest
                 * @return AttachNetworkInterfaceOutcome
                 */
                AttachNetworkInterfaceOutcome AttachNetworkInterface(const Model::AttachNetworkInterfaceRequest &request);
                void AttachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachNetworkInterfaceOutcomeCallable AttachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request);

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
                 *本接口(CheckAssistantCidr)用于检查辅助CIDR是否与存量路由、对等连接（对端VPC的CIDR）等资源存在冲突。如果存在重叠，则返回重叠的资源。（接口灰度中，如需使用请提工单。）
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
                 *本接口(CheckNetDetectState)用于验证网络探测。
                 * @param req CheckNetDetectStateRequest
                 * @return CheckNetDetectStateOutcome
                 */
                CheckNetDetectStateOutcome CheckNetDetectState(const Model::CheckNetDetectStateRequest &request);
                void CheckNetDetectStateAsync(const Model::CheckNetDetectStateRequest& request, const CheckNetDetectStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckNetDetectStateOutcomeCallable CheckNetDetectStateCallable(const Model::CheckNetDetectStateRequest& request);

                /**
                 *本接口（CloneSecurityGroup）用于根据存量的安全组，克隆创建出同样规则配置的安全组。仅克隆安全组及其规则信息，不会克隆安全组标签信息。
                 * @param req CloneSecurityGroupRequest
                 * @return CloneSecurityGroupOutcome
                 */
                CloneSecurityGroupOutcome CloneSecurityGroup(const Model::CloneSecurityGroupRequest &request);
                void CloneSecurityGroupAsync(const Model::CloneSecurityGroupRequest& request, const CloneSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneSecurityGroupOutcomeCallable CloneSecurityGroupCallable(const Model::CloneSecurityGroupRequest& request);

                /**
                 *本接口（CreateAddressTemplate）用于创建IP地址模版
                 * @param req CreateAddressTemplateRequest
                 * @return CreateAddressTemplateOutcome
                 */
                CreateAddressTemplateOutcome CreateAddressTemplate(const Model::CreateAddressTemplateRequest &request);
                void CreateAddressTemplateAsync(const Model::CreateAddressTemplateRequest& request, const CreateAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAddressTemplateOutcomeCallable CreateAddressTemplateCallable(const Model::CreateAddressTemplateRequest& request);

                /**
                 *本接口（CreateAddressTemplateGroup）用于创建IP地址模版集合
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
                 * @param req CreateAndAttachNetworkInterfaceRequest
                 * @return CreateAndAttachNetworkInterfaceOutcome
                 */
                CreateAndAttachNetworkInterfaceOutcome CreateAndAttachNetworkInterface(const Model::CreateAndAttachNetworkInterfaceRequest &request);
                void CreateAndAttachNetworkInterfaceAsync(const Model::CreateAndAttachNetworkInterfaceRequest& request, const CreateAndAttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndAttachNetworkInterfaceOutcomeCallable CreateAndAttachNetworkInterfaceCallable(const Model::CreateAndAttachNetworkInterfaceRequest& request);

                /**
                 *本接口(CreateAssistantCidr)用于批量创建辅助CIDR。（接口灰度中，如需使用请提工单。）
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
每个账号能创建的云联网实例个数是有限的，详请参考产品文档。如果需要扩充请联系在线客服。
                 * @param req CreateCcnRequest
                 * @return CreateCcnOutcome
                 */
                CreateCcnOutcome CreateCcn(const Model::CreateCcnRequest &request);
                void CreateCcnAsync(const Model::CreateCcnRequest& request, const CreateCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCcnOutcomeCallable CreateCcnCallable(const Model::CreateCcnRequest& request);

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

您也可以通过 Force 参数，强制返回默认VPC
                 * @param req CreateDefaultVpcRequest
                 * @return CreateDefaultVpcOutcome
                 */
                CreateDefaultVpcOutcome CreateDefaultVpc(const Model::CreateDefaultVpcRequest &request);
                void CreateDefaultVpcAsync(const Model::CreateDefaultVpcRequest& request, const CreateDefaultVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDefaultVpcOutcomeCallable CreateDefaultVpcCallable(const Model::CreateDefaultVpcRequest& request);

                /**
                 *本接口（CreateDhcpIp）用于创建DhcpIp
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
                 *本接口（CreateFlowLog）用于创建流日志
                 * @param req CreateFlowLogRequest
                 * @return CreateFlowLogOutcome
                 */
                CreateFlowLogOutcome CreateFlowLog(const Model::CreateFlowLogRequest &request);
                void CreateFlowLogAsync(const Model::CreateFlowLogRequest& request, const CreateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowLogOutcomeCallable CreateFlowLogCallable(const Model::CreateFlowLogRequest& request);

                /**
                 *本接口（CreateHaVip）用于创建高可用虚拟IP（HAVIP）
                 * @param req CreateHaVipRequest
                 * @return CreateHaVipOutcome
                 */
                CreateHaVipOutcome CreateHaVip(const Model::CreateHaVipRequest &request);
                void CreateHaVipAsync(const Model::CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHaVipOutcomeCallable CreateHaVipCallable(const Model::CreateHaVipRequest& request);

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
                 *该接口用于创建用于CDC的本地网关。
                 * @param req CreateLocalGatewayRequest
                 * @return CreateLocalGatewayOutcome
                 */
                CreateLocalGatewayOutcome CreateLocalGateway(const Model::CreateLocalGatewayRequest &request);
                void CreateLocalGatewayAsync(const Model::CreateLocalGatewayRequest& request, const CreateLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLocalGatewayOutcomeCallable CreateLocalGatewayCallable(const Model::CreateLocalGatewayRequest& request);

                /**
                 *本接口(CreateNatGateway)用于创建NAT网关。
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
                 *本接口(CreateNetDetect)用于创建网络探测。
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
                 *本接口（CreateNetworkInterface）用于创建弹性网卡。
* 创建弹性网卡时可以指定内网IP，并且可以指定一个主IP，指定的内网IP必须在弹性网卡所在子网内，而且不能被占用。
* 创建弹性网卡时可以指定需要申请的内网IP数量，系统会随机生成内网IP地址。
* 一个弹性网卡支持绑定的IP地址是有限制的，更多资源限制信息详见<a href="/document/product/576/18527">弹性网卡使用限制</a>。
* 创建弹性网卡同时可以绑定已有安全组。
* 创建弹性网卡同时可以绑定标签, 应答里的标签列表代表添加成功的标签。
                 * @param req CreateNetworkInterfaceRequest
                 * @return CreateNetworkInterfaceOutcome
                 */
                CreateNetworkInterfaceOutcome CreateNetworkInterface(const Model::CreateNetworkInterfaceRequest &request);
                void CreateNetworkInterfaceAsync(const Model::CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkInterfaceOutcomeCallable CreateNetworkInterfaceCallable(const Model::CreateNetworkInterfaceRequest& request);

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
                 *本接口(CreateRoutes)用于创建路由策略。
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
<li>Port 字段允许输入一个单独端口号，或者用减号分隔的两个端口号代表端口范围，例如80或8000-8010。只有当 Protocol 字段是 TCP 或 UDP 时，Port 字段才被接受，即 Protocol 字段不是 TCP 或 UDP 时，Protocol 和 Port 排他关系，不允许同时输入，否则会接口报错。</li>
<li>Action 字段只允许输入 ACCEPT 或 DROP。</li>
<li>CidrBlock, Ipv6CidrBlock, SecurityGroupId, AddressTemplate 四者是排他关系，不允许同时输入，Protocol + Port 和 ServiceTemplate 二者是排他关系，不允许同时输入。</li>
<li>一次请求中只能创建单个方向的规则, 如果需要指定索引（PolicyIndex）参数, 多条规则的索引必须一致。</li>
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
* 新建的安全组的入站和出站规则默认都是全部拒绝，在创建后通常您需要再调用CreateSecurityGroupPolicies将安全组的规则设置为需要的规则。

安全组规则说明：
* Version安全组规则版本号，用户每次更新安全规则版本会自动加1，防止您更新的路由规则已过期，不填不考虑冲突。
* Protocol字段支持输入TCP, UDP, ICMP, ICMPV6, GRE, ALL。
* CidrBlock字段允许输入符合cidr格式标准的任意字符串。(展开)在基础网络中，如果CidrBlock包含您的账户内的云服务器之外的设备在腾讯云的内网IP，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。
* Ipv6CidrBlock字段允许输入符合IPv6 cidr格式标准的任意字符串。(展开)在基础网络中，如果Ipv6CidrBlock包含您的账户内的云服务器之外的设备在腾讯云的内网IPv6，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。
* SecurityGroupId字段允许输入与待修改的安全组位于相同项目中的安全组ID，包括这个安全组ID本身，代表安全组下所有云服务器的内网IP。使用这个字段时，这条规则用来匹配网络报文的过程中会随着被使用的这个ID所关联的云服务器变化而变化，不需要重新修改。
* Port字段允许输入一个单独端口号，或者用减号分隔的两个端口号代表端口范围，例如80或8000-8010。只有当Protocol字段是TCP或UDP时，Port字段才被接受，即Protocol字段不是TCP或UDP时，Protocol和Port排他关系，不允许同时输入，否则会接口报错。
* Action字段只允许输入ACCEPT或DROP。
* CidrBlock, Ipv6CidrBlock, SecurityGroupId, AddressTemplate四者是排他关系，不允许同时输入，Protocol + Port和ServiceTemplate二者是排他关系，不允许同时输入。
* 一次请求中只能创建单个方向的规则, 如果需要指定索引（PolicyIndex）参数, 多条规则的索引必须一致。
                 * @param req CreateSecurityGroupWithPoliciesRequest
                 * @return CreateSecurityGroupWithPoliciesOutcome
                 */
                CreateSecurityGroupWithPoliciesOutcome CreateSecurityGroupWithPolicies(const Model::CreateSecurityGroupWithPoliciesRequest &request);
                void CreateSecurityGroupWithPoliciesAsync(const Model::CreateSecurityGroupWithPoliciesRequest& request, const CreateSecurityGroupWithPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupWithPoliciesOutcomeCallable CreateSecurityGroupWithPoliciesCallable(const Model::CreateSecurityGroupWithPoliciesRequest& request);

                /**
                 *本接口（CreateServiceTemplate）用于创建协议端口模板
                 * @param req CreateServiceTemplateRequest
                 * @return CreateServiceTemplateOutcome
                 */
                CreateServiceTemplateOutcome CreateServiceTemplate(const Model::CreateServiceTemplateRequest &request);
                void CreateServiceTemplateAsync(const Model::CreateServiceTemplateRequest& request, const CreateServiceTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceTemplateOutcomeCallable CreateServiceTemplateCallable(const Model::CreateServiceTemplateRequest& request);

                /**
                 *本接口（CreateServiceTemplateGroup）用于创建协议端口模板集合
                 * @param req CreateServiceTemplateGroupRequest
                 * @return CreateServiceTemplateGroupOutcome
                 */
                CreateServiceTemplateGroupOutcome CreateServiceTemplateGroup(const Model::CreateServiceTemplateGroupRequest &request);
                void CreateServiceTemplateGroupAsync(const Model::CreateServiceTemplateGroupRequest& request, const CreateServiceTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceTemplateGroupOutcomeCallable CreateServiceTemplateGroupCallable(const Model::CreateServiceTemplateGroupRequest& request);

                /**
                 *本接口(CreateSubnet)用于创建子网。
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
                 *本接口(CreateSubnets)用于批量创建子网。
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
                 *本接口(CreateVpc)用于创建私有网络(VPC)。
* 用户可以创建的最小网段子网掩码为28（有16个IP地址），最大网段子网掩码为16（65,536个IP地址），如果需要规划VPC网段请参见[网络规划](https://cloud.tencent.com/document/product/215/30313)。
* 同一个地域能创建的VPC资源个数也是有限制的，详见 <a href="https://cloud.tencent.com/doc/product/215/537" title="VPC使用限制">VPC使用限制</a>，如果需要申请更多资源，请提交[工单申请](https://console.cloud.tencent.com/workorder/category)。
* 创建VPC同时可以绑定标签, 应答里的标签列表代表添加成功的标签。
                 * @param req CreateVpcRequest
                 * @return CreateVpcOutcome
                 */
                CreateVpcOutcome CreateVpc(const Model::CreateVpcRequest &request);
                void CreateVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcOutcomeCallable CreateVpcCallable(const Model::CreateVpcRequest& request);

                /**
                 *创建终端节点。
                 * @param req CreateVpcEndPointRequest
                 * @return CreateVpcEndPointOutcome
                 */
                CreateVpcEndPointOutcome CreateVpcEndPoint(const Model::CreateVpcEndPointRequest &request);
                void CreateVpcEndPointAsync(const Model::CreateVpcEndPointRequest& request, const CreateVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcEndPointOutcomeCallable CreateVpcEndPointCallable(const Model::CreateVpcEndPointRequest& request);

                /**
                 *创建终端节点服务。
                 * @param req CreateVpcEndPointServiceRequest
                 * @return CreateVpcEndPointServiceOutcome
                 */
                CreateVpcEndPointServiceOutcome CreateVpcEndPointService(const Model::CreateVpcEndPointServiceRequest &request);
                void CreateVpcEndPointServiceAsync(const Model::CreateVpcEndPointServiceRequest& request, const CreateVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcEndPointServiceOutcomeCallable CreateVpcEndPointServiceCallable(const Model::CreateVpcEndPointServiceRequest& request);

                /**
                 *创建终端服务白名单。
                 * @param req CreateVpcEndPointServiceWhiteListRequest
                 * @return CreateVpcEndPointServiceWhiteListOutcome
                 */
                CreateVpcEndPointServiceWhiteListOutcome CreateVpcEndPointServiceWhiteList(const Model::CreateVpcEndPointServiceWhiteListRequest &request);
                void CreateVpcEndPointServiceWhiteListAsync(const Model::CreateVpcEndPointServiceWhiteListRequest& request, const CreateVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcEndPointServiceWhiteListOutcomeCallable CreateVpcEndPointServiceWhiteListCallable(const Model::CreateVpcEndPointServiceWhiteListRequest& request);

                /**
                 *本接口（CreateVpnConnection）用于创建VPN通道。
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
                 *本接口（DeleteAddressTemplate）用于删除IP地址模板
                 * @param req DeleteAddressTemplateRequest
                 * @return DeleteAddressTemplateOutcome
                 */
                DeleteAddressTemplateOutcome DeleteAddressTemplate(const Model::DeleteAddressTemplateRequest &request);
                void DeleteAddressTemplateAsync(const Model::DeleteAddressTemplateRequest& request, const DeleteAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddressTemplateOutcomeCallable DeleteAddressTemplateCallable(const Model::DeleteAddressTemplateRequest& request);

                /**
                 *本接口（DeleteAddressTemplateGroup）用于删除IP地址模板集合
                 * @param req DeleteAddressTemplateGroupRequest
                 * @return DeleteAddressTemplateGroupOutcome
                 */
                DeleteAddressTemplateGroupOutcome DeleteAddressTemplateGroup(const Model::DeleteAddressTemplateGroupRequest &request);
                void DeleteAddressTemplateGroupAsync(const Model::DeleteAddressTemplateGroupRequest& request, const DeleteAddressTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddressTemplateGroupOutcomeCallable DeleteAddressTemplateGroupCallable(const Model::DeleteAddressTemplateGroupRequest& request);

                /**
                 *本接口(DeleteAssistantCidr)用于删除辅助CIDR。（接口灰度中，如需使用请提工单。）
                 * @param req DeleteAssistantCidrRequest
                 * @return DeleteAssistantCidrOutcome
                 */
                DeleteAssistantCidrOutcome DeleteAssistantCidr(const Model::DeleteAssistantCidrRequest &request);
                void DeleteAssistantCidrAsync(const Model::DeleteAssistantCidrRequest& request, const DeleteAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssistantCidrOutcomeCallable DeleteAssistantCidrCallable(const Model::DeleteAssistantCidrRequest& request);

                /**
                 *接口支持删除共享带宽包，包括[设备带宽包](https://cloud.tencent.com/document/product/684/15246#.E8.AE.BE.E5.A4.87.E5.B8.A6.E5.AE.BD.E5.8C.85)和[IP带宽包](https://cloud.tencent.com/document/product/684/15246#ip-.E5.B8.A6.E5.AE.BD.E5.8C.85)
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
                 *本接口（DeleteCustomerGateway）用于删除对端网关。
                 * @param req DeleteCustomerGatewayRequest
                 * @return DeleteCustomerGatewayOutcome
                 */
                DeleteCustomerGatewayOutcome DeleteCustomerGateway(const Model::DeleteCustomerGatewayRequest &request);
                void DeleteCustomerGatewayAsync(const Model::DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomerGatewayOutcomeCallable DeleteCustomerGatewayCallable(const Model::DeleteCustomerGatewayRequest& request);

                /**
                 *本接口（DeleteDhcpIp）用于删除DhcpIp
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
                 *本接口（DeleteFlowLog）用于删除流日志
                 * @param req DeleteFlowLogRequest
                 * @return DeleteFlowLogOutcome
                 */
                DeleteFlowLogOutcome DeleteFlowLog(const Model::DeleteFlowLogRequest &request);
                void DeleteFlowLogAsync(const Model::DeleteFlowLogRequest& request, const DeleteFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFlowLogOutcomeCallable DeleteFlowLogCallable(const Model::DeleteFlowLogRequest& request);

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
                 *1. 该接口用于释放IPV6转换实例，支持批量。
2.  如果IPV6转换实例建立有转换规则，会一并删除。
                 * @param req DeleteIp6TranslatorsRequest
                 * @return DeleteIp6TranslatorsOutcome
                 */
                DeleteIp6TranslatorsOutcome DeleteIp6Translators(const Model::DeleteIp6TranslatorsRequest &request);
                void DeleteIp6TranslatorsAsync(const Model::DeleteIp6TranslatorsRequest& request, const DeleteIp6TranslatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIp6TranslatorsOutcomeCallable DeleteIp6TranslatorsCallable(const Model::DeleteIp6TranslatorsRequest& request);

                /**
                 *该接口用于删除CDC的本地网关。
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
                 *本接口(DeleteNetDetect)用于删除网络探测实例。
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
                 *本接口（DeleteNetworkInterface）用于删除弹性网卡。
* 弹性网卡上绑定了云服务器时，不能被删除。
* 删除指定弹性网卡，弹性网卡必须先和子机解绑才能删除。删除之后弹性网卡上所有内网IP都将被退还。

本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
                 * @param req DeleteNetworkInterfaceRequest
                 * @return DeleteNetworkInterfaceOutcome
                 */
                DeleteNetworkInterfaceOutcome DeleteNetworkInterface(const Model::DeleteNetworkInterfaceRequest &request);
                void DeleteNetworkInterfaceAsync(const Model::DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkInterfaceOutcomeCallable DeleteNetworkInterfaceCallable(const Model::DeleteNetworkInterfaceRequest& request);

                /**
                 *删除路由表
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
                 *本接口（DeleteSecurityGroupPolicies）用于用于删除安全组规则（SecurityGroupPolicy）。
* SecurityGroupPolicySet.Version 用于指定要操作的安全组的版本。传入 Version 版本号若不等于当前安全组的最新版本，将返回失败；若不传 Version 则直接删除指定PolicyIndex的规则。
                 * @param req DeleteSecurityGroupPoliciesRequest
                 * @return DeleteSecurityGroupPoliciesOutcome
                 */
                DeleteSecurityGroupPoliciesOutcome DeleteSecurityGroupPolicies(const Model::DeleteSecurityGroupPoliciesRequest &request);
                void DeleteSecurityGroupPoliciesAsync(const Model::DeleteSecurityGroupPoliciesRequest& request, const DeleteSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupPoliciesOutcomeCallable DeleteSecurityGroupPoliciesCallable(const Model::DeleteSecurityGroupPoliciesRequest& request);

                /**
                 *本接口（DeleteServiceTemplate）用于删除协议端口模板
                 * @param req DeleteServiceTemplateRequest
                 * @return DeleteServiceTemplateOutcome
                 */
                DeleteServiceTemplateOutcome DeleteServiceTemplate(const Model::DeleteServiceTemplateRequest &request);
                void DeleteServiceTemplateAsync(const Model::DeleteServiceTemplateRequest& request, const DeleteServiceTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceTemplateOutcomeCallable DeleteServiceTemplateCallable(const Model::DeleteServiceTemplateRequest& request);

                /**
                 *本接口（DeleteServiceTemplateGroup）用于删除协议端口模板集合
                 * @param req DeleteServiceTemplateGroupRequest
                 * @return DeleteServiceTemplateGroupOutcome
                 */
                DeleteServiceTemplateGroupOutcome DeleteServiceTemplateGroup(const Model::DeleteServiceTemplateGroupRequest &request);
                void DeleteServiceTemplateGroupAsync(const Model::DeleteServiceTemplateGroupRequest& request, const DeleteServiceTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceTemplateGroupOutcomeCallable DeleteServiceTemplateGroupCallable(const Model::DeleteServiceTemplateGroupRequest& request);

                /**
                 *本接口（DeleteSubnet）用于用于删除子网(Subnet)。
* 删除子网前，请清理该子网下所有资源，包括云服务器、负载均衡、云数据、noSql、弹性网卡等资源。
                 * @param req DeleteSubnetRequest
                 * @return DeleteSubnetOutcome
                 */
                DeleteSubnetOutcome DeleteSubnet(const Model::DeleteSubnetRequest &request);
                void DeleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubnetOutcomeCallable DeleteSubnetCallable(const Model::DeleteSubnetRequest& request);

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
                 *删除终端节点。
                 * @param req DeleteVpcEndPointRequest
                 * @return DeleteVpcEndPointOutcome
                 */
                DeleteVpcEndPointOutcome DeleteVpcEndPoint(const Model::DeleteVpcEndPointRequest &request);
                void DeleteVpcEndPointAsync(const Model::DeleteVpcEndPointRequest& request, const DeleteVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcEndPointOutcomeCallable DeleteVpcEndPointCallable(const Model::DeleteVpcEndPointRequest& request);

                /**
                 *删除终端节点服务。


                 * @param req DeleteVpcEndPointServiceRequest
                 * @return DeleteVpcEndPointServiceOutcome
                 */
                DeleteVpcEndPointServiceOutcome DeleteVpcEndPointService(const Model::DeleteVpcEndPointServiceRequest &request);
                void DeleteVpcEndPointServiceAsync(const Model::DeleteVpcEndPointServiceRequest& request, const DeleteVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcEndPointServiceOutcomeCallable DeleteVpcEndPointServiceCallable(const Model::DeleteVpcEndPointServiceRequest& request);

                /**
                 *删除终端节点服务白名单。
                 * @param req DeleteVpcEndPointServiceWhiteListRequest
                 * @return DeleteVpcEndPointServiceWhiteListOutcome
                 */
                DeleteVpcEndPointServiceWhiteListOutcome DeleteVpcEndPointServiceWhiteList(const Model::DeleteVpcEndPointServiceWhiteListRequest &request);
                void DeleteVpcEndPointServiceWhiteListAsync(const Model::DeleteVpcEndPointServiceWhiteListRequest& request, const DeleteVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcEndPointServiceWhiteListOutcomeCallable DeleteVpcEndPointServiceWhiteListCallable(const Model::DeleteVpcEndPointServiceWhiteListRequest& request);

                /**
                 *本接口(DeleteVpnConnection)用于删除VPN通道。
                 * @param req DeleteVpnConnectionRequest
                 * @return DeleteVpnConnectionOutcome
                 */
                DeleteVpnConnectionOutcome DeleteVpnConnection(const Model::DeleteVpnConnectionRequest &request);
                void DeleteVpnConnectionAsync(const Model::DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnConnectionOutcomeCallable DeleteVpnConnectionCallable(const Model::DeleteVpnConnectionRequest& request);

                /**
                 *本接口（DeleteVpnGateway）用于删除VPN网关。目前只支持删除运行中的按量计费的IPSEC网关实例。
                 * @param req DeleteVpnGatewayRequest
                 * @return DeleteVpnGatewayOutcome
                 */
                DeleteVpnGatewayOutcome DeleteVpnGateway(const Model::DeleteVpnGatewayRequest &request);
                void DeleteVpnGatewayAsync(const Model::DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnGatewayOutcomeCallable DeleteVpnGatewayCallable(const Model::DeleteVpnGatewayRequest& request);

                /**
                 *本接口（DeleteVpnGatewayCcnRoutes）用于删除VPN网关路由
                 * @param req DeleteVpnGatewayRoutesRequest
                 * @return DeleteVpnGatewayRoutesOutcome
                 */
                DeleteVpnGatewayRoutesOutcome DeleteVpnGatewayRoutes(const Model::DeleteVpnGatewayRoutesRequest &request);
                void DeleteVpnGatewayRoutesAsync(const Model::DeleteVpnGatewayRoutesRequest& request, const DeleteVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnGatewayRoutesOutcomeCallable DeleteVpnGatewayRoutesCallable(const Model::DeleteVpnGatewayRoutesRequest& request);

                /**
                 *本接口（DescribeAccountAttributes）用于查询用户账号私有属性。
                 * @param req DescribeAccountAttributesRequest
                 * @return DescribeAccountAttributesOutcome
                 */
                DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest &request);
                void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request);

                /**
                 *本接口 (DescribeAddressQuota) 用于查询您账户的[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）在当前地域的配额信息。配额详情可参见 [EIP 产品简介](https://cloud.tencent.com/document/product/213/5733)。
                 * @param req DescribeAddressQuotaRequest
                 * @return DescribeAddressQuotaOutcome
                 */
                DescribeAddressQuotaOutcome DescribeAddressQuota(const Model::DescribeAddressQuotaRequest &request);
                void DescribeAddressQuotaAsync(const Model::DescribeAddressQuotaRequest& request, const DescribeAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressQuotaOutcomeCallable DescribeAddressQuotaCallable(const Model::DescribeAddressQuotaRequest& request);

                /**
                 *本接口（DescribeAddressTemplateGroups）用于查询IP地址模板集合
                 * @param req DescribeAddressTemplateGroupsRequest
                 * @return DescribeAddressTemplateGroupsOutcome
                 */
                DescribeAddressTemplateGroupsOutcome DescribeAddressTemplateGroups(const Model::DescribeAddressTemplateGroupsRequest &request);
                void DescribeAddressTemplateGroupsAsync(const Model::DescribeAddressTemplateGroupsRequest& request, const DescribeAddressTemplateGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressTemplateGroupsOutcomeCallable DescribeAddressTemplateGroupsCallable(const Model::DescribeAddressTemplateGroupsRequest& request);

                /**
                 *本接口（DescribeAddressTemplates）用于查询IP地址模板
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
                 *本接口（DescribeAssistantCidr）用于查询辅助CIDR列表。（接口灰度中，如需使用请提工单。）
                 * @param req DescribeAssistantCidrRequest
                 * @return DescribeAssistantCidrOutcome
                 */
                DescribeAssistantCidrOutcome DescribeAssistantCidr(const Model::DescribeAssistantCidrRequest &request);
                void DescribeAssistantCidrAsync(const Model::DescribeAssistantCidrRequest& request, const DescribeAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssistantCidrOutcomeCallable DescribeAssistantCidrCallable(const Model::DescribeAssistantCidrRequest& request);

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
                 *本接口（DescribeCcnRegionBandwidthLimits）用于查询云联网各地域出带宽上限，该接口只返回已关联网络实例包含的地域
                 * @param req DescribeCcnRegionBandwidthLimitsRequest
                 * @return DescribeCcnRegionBandwidthLimitsOutcome
                 */
                DescribeCcnRegionBandwidthLimitsOutcome DescribeCcnRegionBandwidthLimits(const Model::DescribeCcnRegionBandwidthLimitsRequest &request);
                void DescribeCcnRegionBandwidthLimitsAsync(const Model::DescribeCcnRegionBandwidthLimitsRequest& request, const DescribeCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnRegionBandwidthLimitsOutcomeCallable DescribeCcnRegionBandwidthLimitsCallable(const Model::DescribeCcnRegionBandwidthLimitsRequest& request);

                /**
                 *本接口（DescribeCcnRoutes）用于查询已加入云联网（CCN）的路由
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
                 *本接口(DescribeClassicLinkInstances)用于查询私有网络和基础网络设备互通列表。
                 * @param req DescribeClassicLinkInstancesRequest
                 * @return DescribeClassicLinkInstancesOutcome
                 */
                DescribeClassicLinkInstancesOutcome DescribeClassicLinkInstances(const Model::DescribeClassicLinkInstancesRequest &request);
                void DescribeClassicLinkInstancesAsync(const Model::DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicLinkInstancesOutcomeCallable DescribeClassicLinkInstancesCallable(const Model::DescribeClassicLinkInstancesRequest& request);

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
                 *本接口（DescribeFlowLog）用于查询流日志实例信息
                 * @param req DescribeFlowLogRequest
                 * @return DescribeFlowLogOutcome
                 */
                DescribeFlowLogOutcome DescribeFlowLog(const Model::DescribeFlowLogRequest &request);
                void DescribeFlowLogAsync(const Model::DescribeFlowLogRequest& request, const DescribeFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowLogOutcomeCallable DescribeFlowLogCallable(const Model::DescribeFlowLogRequest& request);

                /**
                 *本接口（DescribeFlowLogs）用于查询获取流日志集合
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
                 *本接口（DescribeHaVips）用于查询高可用虚拟IP（HAVIP）列表。
                 * @param req DescribeHaVipsRequest
                 * @return DescribeHaVipsOutcome
                 */
                DescribeHaVipsOutcome DescribeHaVips(const Model::DescribeHaVipsRequest &request);
                void DescribeHaVipsAsync(const Model::DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHaVipsOutcomeCallable DescribeHaVipsCallable(const Model::DescribeHaVipsRequest& request);

                /**
                 *该接口用于查询IPV6地址信息
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
                 * @param req DescribeIpGeolocationDatabaseUrlRequest
                 * @return DescribeIpGeolocationDatabaseUrlOutcome
                 */
                DescribeIpGeolocationDatabaseUrlOutcome DescribeIpGeolocationDatabaseUrl(const Model::DescribeIpGeolocationDatabaseUrlRequest &request);
                void DescribeIpGeolocationDatabaseUrlAsync(const Model::DescribeIpGeolocationDatabaseUrlRequest& request, const DescribeIpGeolocationDatabaseUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpGeolocationDatabaseUrlOutcomeCallable DescribeIpGeolocationDatabaseUrlCallable(const Model::DescribeIpGeolocationDatabaseUrlRequest& request);

                /**
                 *该接口用于查询IP地址信息，包括地理位置信息和网络信息。
                 * @param req DescribeIpGeolocationInfosRequest
                 * @return DescribeIpGeolocationInfosOutcome
                 */
                DescribeIpGeolocationInfosOutcome DescribeIpGeolocationInfos(const Model::DescribeIpGeolocationInfosRequest &request);
                void DescribeIpGeolocationInfosAsync(const Model::DescribeIpGeolocationInfosRequest& request, const DescribeIpGeolocationInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpGeolocationInfosOutcomeCallable DescribeIpGeolocationInfosCallable(const Model::DescribeIpGeolocationInfosRequest& request);

                /**
                 *该接口用于查询CDC的本地网关。
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
                 *本接口（DescribeNatGatewaySourceIpTranslationNatRules）用于查询NAT网关SNAT转发规则对象数组。
                 * @param req DescribeNatGatewaySourceIpTranslationNatRulesRequest
                 * @return DescribeNatGatewaySourceIpTranslationNatRulesOutcome
                 */
                DescribeNatGatewaySourceIpTranslationNatRulesOutcome DescribeNatGatewaySourceIpTranslationNatRules(const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest &request);
                void DescribeNatGatewaySourceIpTranslationNatRulesAsync(const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest& request, const DescribeNatGatewaySourceIpTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewaySourceIpTranslationNatRulesOutcomeCallable DescribeNatGatewaySourceIpTranslationNatRulesCallable(const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest& request);

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
                 *本接口（DescribeNetworkAcls）用于查询网络ACL列表。
                 * @param req DescribeNetworkAclsRequest
                 * @return DescribeNetworkAclsOutcome
                 */
                DescribeNetworkAclsOutcome DescribeNetworkAcls(const Model::DescribeNetworkAclsRequest &request);
                void DescribeNetworkAclsAsync(const Model::DescribeNetworkAclsRequest& request, const DescribeNetworkAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkAclsOutcomeCallable DescribeNetworkAclsCallable(const Model::DescribeNetworkAclsRequest& request);

                /**
                 *本接口（DescribeNetworkInterfaceLimit）根据CVM实例ID或弹性网卡ID查询弹性网卡配额，返回该CVM实例或弹性网卡能绑定的弹性网卡配额，以及弹性网卡可以分配的IP配额
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
                 *本接口用于查询网络产品的配额信息
                 * @param req DescribeProductQuotaRequest
                 * @return DescribeProductQuotaOutcome
                 */
                DescribeProductQuotaOutcome DescribeProductQuota(const Model::DescribeProductQuotaRequest &request);
                void DescribeProductQuotaAsync(const Model::DescribeProductQuotaRequest& request, const DescribeProductQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductQuotaOutcomeCallable DescribeProductQuotaCallable(const Model::DescribeProductQuotaRequest& request);

                /**
                 *本接口（DescribeRouteConflicts）用于查询自定义路由策略与云联网路由策略冲突列表
                 * @param req DescribeRouteConflictsRequest
                 * @return DescribeRouteConflictsOutcome
                 */
                DescribeRouteConflictsOutcome DescribeRouteConflicts(const Model::DescribeRouteConflictsRequest &request);
                void DescribeRouteConflictsAsync(const Model::DescribeRouteConflictsRequest& request, const DescribeRouteConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteConflictsOutcomeCallable DescribeRouteConflictsCallable(const Model::DescribeRouteConflictsRequest& request);

                /**
                 * 本接口（DescribeRouteTables）用于查询路由表。
                 * @param req DescribeRouteTablesRequest
                 * @return DescribeRouteTablesOutcome
                 */
                DescribeRouteTablesOutcome DescribeRouteTables(const Model::DescribeRouteTablesRequest &request);
                void DescribeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTablesOutcomeCallable DescribeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request);

                /**
                 *本接口（DescribeSecurityGroupAssociationStatistics）用于查询安全组关联的实例统计。
                 * @param req DescribeSecurityGroupAssociationStatisticsRequest
                 * @return DescribeSecurityGroupAssociationStatisticsOutcome
                 */
                DescribeSecurityGroupAssociationStatisticsOutcome DescribeSecurityGroupAssociationStatistics(const Model::DescribeSecurityGroupAssociationStatisticsRequest &request);
                void DescribeSecurityGroupAssociationStatisticsAsync(const Model::DescribeSecurityGroupAssociationStatisticsRequest& request, const DescribeSecurityGroupAssociationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupAssociationStatisticsOutcomeCallable DescribeSecurityGroupAssociationStatisticsCallable(const Model::DescribeSecurityGroupAssociationStatisticsRequest& request);

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
                 *本接口（DescribeServiceTemplateGroups）用于查询协议端口模板集合
                 * @param req DescribeServiceTemplateGroupsRequest
                 * @return DescribeServiceTemplateGroupsOutcome
                 */
                DescribeServiceTemplateGroupsOutcome DescribeServiceTemplateGroups(const Model::DescribeServiceTemplateGroupsRequest &request);
                void DescribeServiceTemplateGroupsAsync(const Model::DescribeServiceTemplateGroupsRequest& request, const DescribeServiceTemplateGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceTemplateGroupsOutcomeCallable DescribeServiceTemplateGroupsCallable(const Model::DescribeServiceTemplateGroupsRequest& request);

                /**
                 *本接口（DescribeServiceTemplates）用于查询协议端口模板
                 * @param req DescribeServiceTemplatesRequest
                 * @return DescribeServiceTemplatesOutcome
                 */
                DescribeServiceTemplatesOutcome DescribeServiceTemplates(const Model::DescribeServiceTemplatesRequest &request);
                void DescribeServiceTemplatesAsync(const Model::DescribeServiceTemplatesRequest& request, const DescribeServiceTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceTemplatesOutcomeCallable DescribeServiceTemplatesCallable(const Model::DescribeServiceTemplatesRequest& request);

                /**
                 *本接口（DescribeSubnets）用于查询子网列表。
                 * @param req DescribeSubnetsRequest
                 * @return DescribeSubnetsOutcome
                 */
                DescribeSubnetsOutcome DescribeSubnets(const Model::DescribeSubnetsRequest &request);
                void DescribeSubnetsAsync(const Model::DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetsOutcomeCallable DescribeSubnetsCallable(const Model::DescribeSubnetsRequest& request);

                /**
                 *查询EIP异步任务执行结果
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
                 *查询终端节点列表。
                 * @param req DescribeVpcEndPointRequest
                 * @return DescribeVpcEndPointOutcome
                 */
                DescribeVpcEndPointOutcome DescribeVpcEndPoint(const Model::DescribeVpcEndPointRequest &request);
                void DescribeVpcEndPointAsync(const Model::DescribeVpcEndPointRequest& request, const DescribeVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcEndPointOutcomeCallable DescribeVpcEndPointCallable(const Model::DescribeVpcEndPointRequest& request);

                /**
                 *查询终端节点服务列表。
                 * @param req DescribeVpcEndPointServiceRequest
                 * @return DescribeVpcEndPointServiceOutcome
                 */
                DescribeVpcEndPointServiceOutcome DescribeVpcEndPointService(const Model::DescribeVpcEndPointServiceRequest &request);
                void DescribeVpcEndPointServiceAsync(const Model::DescribeVpcEndPointServiceRequest& request, const DescribeVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcEndPointServiceOutcomeCallable DescribeVpcEndPointServiceCallable(const Model::DescribeVpcEndPointServiceRequest& request);

                /**
                 *查询终端节点服务的服务白名单列表。
                 * @param req DescribeVpcEndPointServiceWhiteListRequest
                 * @return DescribeVpcEndPointServiceWhiteListOutcome
                 */
                DescribeVpcEndPointServiceWhiteListOutcome DescribeVpcEndPointServiceWhiteList(const Model::DescribeVpcEndPointServiceWhiteListRequest &request);
                void DescribeVpcEndPointServiceWhiteListAsync(const Model::DescribeVpcEndPointServiceWhiteListRequest& request, const DescribeVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcEndPointServiceWhiteListOutcomeCallable DescribeVpcEndPointServiceWhiteListCallable(const Model::DescribeVpcEndPointServiceWhiteListRequest& request);

                /**
                 * 本接口（DescribeVpcInstances）用于查询VPC下的云主机实例列表。
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
                 *获取私有网络配额，部分私有网络的配额有地域属性。
LimitTypes取值范围：
* appid-max-vpcs （每个开发商每个地域可创建的VPC数）
* vpc-max-subnets（每个VPC可创建的子网数）
* vpc-max-route-tables（每个VPC可创建的路由表数）
* route-table-max-policies（每个路由表可添加的策略数）
* vpc-max-vpn-gateways（每个VPC可创建的VPN网关数）
* appid-max-custom-gateways（每个开发商可创建的对端网关数）
* appid-max-vpn-connections（每个开发商可创建的VPN通道数）
* custom-gateway-max-vpn-connections（每个对端网关可创建的VPN通道数）
* vpn-gateway-max-custom-gateways（每个VPNGW可以创建的通道数）
* vpc-max-network-acls（每个VPC可创建的网络ACL数）
* network-acl-max-inbound-policies（每个网络ACL可添加的入站规则数）
* network-acl-max-outbound-policies（每个网络ACL可添加的出站规则数）
* vpc-max-vpcpeers（每个VPC可创建的对等连接数）
* vpc-max-available-vpcpeers（每个VPC可创建的有效对等连接数）
* vpc-max-basic-network-interconnections（每个VPC可创建的基础网络云主机与VPC互通数）
* direct-connection-max-snats（每个专线网关可创建的SNAT数）
* direct-connection-max-dnats（每个专线网关可创建的DNAT数）
* direct-connection-max-snapts（每个专线网关可创建的SNAPT数）
* direct-connection-max-dnapts（每个专线网关可创建的DNAPT数）
* vpc-max-nat-gateways（每个VPC可创建的NAT网关数）
* nat-gateway-max-eips（每个NAT可以购买的外网IP数量）
* vpc-max-enis（每个VPC可创建弹性网卡数）
* vpc-max-havips（每个VPC可创建HAVIP数）
* eni-max-private-ips（每个ENI可以绑定的内网IP数（ENI未绑定子机））
* nat-gateway-max-dnapts（每个NAT网关可创建的DNAPT数）
* vpc-max-ipv6s（每个VPC可分配的IPv6地址数）
* eni-max-ipv6s（每个ENI可分配的IPv6地址数）
* vpc-max-assistant_cidrs（每个VPC可分配的辅助CIDR数）
                 * @param req DescribeVpcLimitsRequest
                 * @return DescribeVpcLimitsOutcome
                 */
                DescribeVpcLimitsOutcome DescribeVpcLimits(const Model::DescribeVpcLimitsRequest &request);
                void DescribeVpcLimitsAsync(const Model::DescribeVpcLimitsRequest& request, const DescribeVpcLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcLimitsOutcomeCallable DescribeVpcLimitsCallable(const Model::DescribeVpcLimitsRequest& request);

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
                 * 本接口（DescribeVpnConnections）查询VPN通道列表。
                 * @param req DescribeVpnConnectionsRequest
                 * @return DescribeVpnConnectionsOutcome
                 */
                DescribeVpnConnectionsOutcome DescribeVpnConnections(const Model::DescribeVpnConnectionsRequest &request);
                void DescribeVpnConnectionsAsync(const Model::DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnConnectionsOutcomeCallable DescribeVpnConnectionsCallable(const Model::DescribeVpnConnectionsRequest& request);

                /**
                 *本接口（DescribeVpnGatewayCcnRoutes）用于查询VPN网关云联网路由
                 * @param req DescribeVpnGatewayCcnRoutesRequest
                 * @return DescribeVpnGatewayCcnRoutesOutcome
                 */
                DescribeVpnGatewayCcnRoutesOutcome DescribeVpnGatewayCcnRoutes(const Model::DescribeVpnGatewayCcnRoutesRequest &request);
                void DescribeVpnGatewayCcnRoutesAsync(const Model::DescribeVpnGatewayCcnRoutesRequest& request, const DescribeVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewayCcnRoutesOutcomeCallable DescribeVpnGatewayCcnRoutesCallable(const Model::DescribeVpnGatewayCcnRoutesRequest& request);

                /**
                 *查询路由型VPN网关的目的路由
                 * @param req DescribeVpnGatewayRoutesRequest
                 * @return DescribeVpnGatewayRoutesOutcome
                 */
                DescribeVpnGatewayRoutesOutcome DescribeVpnGatewayRoutes(const Model::DescribeVpnGatewayRoutesRequest &request);
                void DescribeVpnGatewayRoutesAsync(const Model::DescribeVpnGatewayRoutesRequest& request, const DescribeVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewayRoutesOutcomeCallable DescribeVpnGatewayRoutesCallable(const Model::DescribeVpnGatewayRoutesRequest& request);

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
                 * @param req DetachClassicLinkVpcRequest
                 * @return DetachClassicLinkVpcOutcome
                 */
                DetachClassicLinkVpcOutcome DetachClassicLinkVpc(const Model::DetachClassicLinkVpcRequest &request);
                void DetachClassicLinkVpcAsync(const Model::DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachClassicLinkVpcOutcomeCallable DetachClassicLinkVpcCallable(const Model::DetachClassicLinkVpcRequest& request);

                /**
                 *本接口（DetachNetworkInterface）用于弹性网卡解绑云服务器。
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
                 * @param req DetachNetworkInterfaceRequest
                 * @return DetachNetworkInterfaceOutcome
                 */
                DetachNetworkInterfaceOutcome DetachNetworkInterface(const Model::DetachNetworkInterfaceRequest &request);
                void DetachNetworkInterfaceAsync(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachNetworkInterfaceOutcomeCallable DetachNetworkInterfaceCallable(const Model::DetachNetworkInterfaceRequest& request);

                /**
                 *本接口（DisableCcnRoutes）用于禁用已经启用的云联网（CCN）路由
                 * @param req DisableCcnRoutesRequest
                 * @return DisableCcnRoutesOutcome
                 */
                DisableCcnRoutesOutcome DisableCcnRoutes(const Model::DisableCcnRoutesRequest &request);
                void DisableCcnRoutesAsync(const Model::DisableCcnRoutesRequest& request, const DisableCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableCcnRoutesOutcomeCallable DisableCcnRoutesCallable(const Model::DisableCcnRoutesRequest& request);

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
                 *本接口 (DisassociateAddress) 用于解绑[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）。
* 支持CVM实例，弹性网卡上的EIP解绑
* 不支持NAT上的EIP解绑。NAT上的EIP解绑请参考[DisassociateNatGatewayAddress](https://cloud.tencent.com/document/api/215/36716)
* 只有状态为 BIND 和 BIND_ENI 的 EIP 才能进行解绑定操作。
* EIP 如果被封堵，则不能进行解绑定操作。
                 * @param req DisassociateAddressRequest
                 * @return DisassociateAddressOutcome
                 */
                DisassociateAddressOutcome DisassociateAddress(const Model::DisassociateAddressRequest &request);
                void DisassociateAddressAsync(const Model::DisassociateAddressRequest& request, const DisassociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateAddressOutcomeCallable DisassociateAddressCallable(const Model::DisassociateAddressRequest& request);

                /**
                 *本接口（DisassociateDhcpIpWithAddressIp）用于将DhcpIp已绑定的弹性公网IP（EIP）解除绑定。<br />
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
                 *本接口（DisassociateNatGatewayAddress）用于NAT网关解绑弹性IP。
                 * @param req DisassociateNatGatewayAddressRequest
                 * @return DisassociateNatGatewayAddressOutcome
                 */
                DisassociateNatGatewayAddressOutcome DisassociateNatGatewayAddress(const Model::DisassociateNatGatewayAddressRequest &request);
                void DisassociateNatGatewayAddressAsync(const Model::DisassociateNatGatewayAddressRequest& request, const DisassociateNatGatewayAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateNatGatewayAddressOutcomeCallable DisassociateNatGatewayAddressCallable(const Model::DisassociateNatGatewayAddressRequest& request);

                /**
                 *本接口（DisassociateNetworkAclSubnets）用于网络ACL解关联vpc下的子网。
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
                 *终端节点解绑安全组。
                 * @param req DisassociateVpcEndPointSecurityGroupsRequest
                 * @return DisassociateVpcEndPointSecurityGroupsOutcome
                 */
                DisassociateVpcEndPointSecurityGroupsOutcome DisassociateVpcEndPointSecurityGroups(const Model::DisassociateVpcEndPointSecurityGroupsRequest &request);
                void DisassociateVpcEndPointSecurityGroupsAsync(const Model::DisassociateVpcEndPointSecurityGroupsRequest& request, const DisassociateVpcEndPointSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateVpcEndPointSecurityGroupsOutcomeCallable DisassociateVpcEndPointSecurityGroupsCallable(const Model::DisassociateVpcEndPointSecurityGroupsRequest& request);

                /**
                 *本接口(DownloadCustomerGatewayConfiguration)用于下载VPN通道配置。
                 * @param req DownloadCustomerGatewayConfigurationRequest
                 * @return DownloadCustomerGatewayConfigurationOutcome
                 */
                DownloadCustomerGatewayConfigurationOutcome DownloadCustomerGatewayConfiguration(const Model::DownloadCustomerGatewayConfigurationRequest &request);
                void DownloadCustomerGatewayConfigurationAsync(const Model::DownloadCustomerGatewayConfigurationRequest& request, const DownloadCustomerGatewayConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadCustomerGatewayConfigurationOutcomeCallable DownloadCustomerGatewayConfigurationCallable(const Model::DownloadCustomerGatewayConfigurationRequest& request);

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
                 *是否接受终端节点连接请求。
                 * @param req EnableVpcEndPointConnectRequest
                 * @return EnableVpcEndPointConnectOutcome
                 */
                EnableVpcEndPointConnectOutcome EnableVpcEndPointConnect(const Model::EnableVpcEndPointConnectRequest &request);
                void EnableVpcEndPointConnectAsync(const Model::EnableVpcEndPointConnectRequest& request, const EnableVpcEndPointConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableVpcEndPointConnectOutcomeCallable EnableVpcEndPointConnectCallable(const Model::EnableVpcEndPointConnectRequest& request);

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
                 *本接口（InquiryPriceCreateVpnGateway）用于创建VPN网关询价。
                 * @param req InquiryPriceCreateVpnGatewayRequest
                 * @return InquiryPriceCreateVpnGatewayOutcome
                 */
                InquiryPriceCreateVpnGatewayOutcome InquiryPriceCreateVpnGateway(const Model::InquiryPriceCreateVpnGatewayRequest &request);
                void InquiryPriceCreateVpnGatewayAsync(const Model::InquiryPriceCreateVpnGatewayRequest& request, const InquiryPriceCreateVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateVpnGatewayOutcomeCallable InquiryPriceCreateVpnGatewayCallable(const Model::InquiryPriceCreateVpnGatewayRequest& request);

                /**
                 *本接口（InquiryPriceRenewVpnGateway）用于续费VPN网关询价。目前仅支持IPSEC类型网关的询价。
                 * @param req InquiryPriceRenewVpnGatewayRequest
                 * @return InquiryPriceRenewVpnGatewayOutcome
                 */
                InquiryPriceRenewVpnGatewayOutcome InquiryPriceRenewVpnGateway(const Model::InquiryPriceRenewVpnGatewayRequest &request);
                void InquiryPriceRenewVpnGatewayAsync(const Model::InquiryPriceRenewVpnGatewayRequest& request, const InquiryPriceRenewVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewVpnGatewayOutcomeCallable InquiryPriceRenewVpnGatewayCallable(const Model::InquiryPriceRenewVpnGatewayRequest& request);

                /**
                 *本接口（InquiryPriceResetVpnGatewayInternetMaxBandwidth）调整VPN网关带宽上限询价。
                 * @param req InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest
                 * @return InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome
                 */
                InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome InquiryPriceResetVpnGatewayInternetMaxBandwidth(const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest &request);
                void InquiryPriceResetVpnGatewayInternetMaxBandwidthAsync(const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest& request, const InquiryPriceResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcomeCallable InquiryPriceResetVpnGatewayInternetMaxBandwidthCallable(const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest& request);

                /**
                 *本接口（MigrateNetworkInterface）用于弹性网卡迁移。
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
                 * @param req MigrateNetworkInterfaceRequest
                 * @return MigrateNetworkInterfaceOutcome
                 */
                MigrateNetworkInterfaceOutcome MigrateNetworkInterface(const Model::MigrateNetworkInterfaceRequest &request);
                void MigrateNetworkInterfaceAsync(const Model::MigrateNetworkInterfaceRequest& request, const MigrateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateNetworkInterfaceOutcomeCallable MigrateNetworkInterfaceCallable(const Model::MigrateNetworkInterfaceRequest& request);

                /**
                 * 本接口（MigratePrivateIpAddress）用于弹性网卡内网IP迁移。
* 该接口用于将一个内网IP从一个弹性网卡上迁移到另外一个弹性网卡，主IP地址不支持迁移。
* 迁移前后的弹性网卡必须在同一个子网内。  

本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
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
* 支持BANDWIDTH_PREPAID_BY_MONTH和TRAFFIC_POSTPAID_BY_HOUR两种网络计费模式之间的切换。
* 每个弹性公网IP支持调整两次，次数超出则无法调整。
                 * @param req ModifyAddressInternetChargeTypeRequest
                 * @return ModifyAddressInternetChargeTypeOutcome
                 */
                ModifyAddressInternetChargeTypeOutcome ModifyAddressInternetChargeType(const Model::ModifyAddressInternetChargeTypeRequest &request);
                void ModifyAddressInternetChargeTypeAsync(const Model::ModifyAddressInternetChargeTypeRequest& request, const ModifyAddressInternetChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressInternetChargeTypeOutcomeCallable ModifyAddressInternetChargeTypeCallable(const Model::ModifyAddressInternetChargeTypeRequest& request);

                /**
                 *本接口（ModifyAddressTemplateAttribute）用于修改IP地址模板
                 * @param req ModifyAddressTemplateAttributeRequest
                 * @return ModifyAddressTemplateAttributeOutcome
                 */
                ModifyAddressTemplateAttributeOutcome ModifyAddressTemplateAttribute(const Model::ModifyAddressTemplateAttributeRequest &request);
                void ModifyAddressTemplateAttributeAsync(const Model::ModifyAddressTemplateAttributeRequest& request, const ModifyAddressTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressTemplateAttributeOutcomeCallable ModifyAddressTemplateAttributeCallable(const Model::ModifyAddressTemplateAttributeRequest& request);

                /**
                 *本接口（ModifyAddressTemplateGroupAttribute）用于修改IP地址模板集合
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
                 *本接口(ModifyAssistantCidr)用于批量修改辅助CIDR，支持新增和删除。（接口灰度中，如需使用请提工单。）
                 * @param req ModifyAssistantCidrRequest
                 * @return ModifyAssistantCidrOutcome
                 */
                ModifyAssistantCidrOutcome ModifyAssistantCidr(const Model::ModifyAssistantCidrRequest &request);
                void ModifyAssistantCidrAsync(const Model::ModifyAssistantCidrRequest& request, const ModifyAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssistantCidrOutcomeCallable ModifyAssistantCidrCallable(const Model::ModifyAssistantCidrRequest& request);

                /**
                 *接口用于修改带宽包属性，包括带宽包名字等
                 * @param req ModifyBandwidthPackageAttributeRequest
                 * @return ModifyBandwidthPackageAttributeOutcome
                 */
                ModifyBandwidthPackageAttributeOutcome ModifyBandwidthPackageAttribute(const Model::ModifyBandwidthPackageAttributeRequest &request);
                void ModifyBandwidthPackageAttributeAsync(const Model::ModifyBandwidthPackageAttributeRequest& request, const ModifyBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBandwidthPackageAttributeOutcomeCallable ModifyBandwidthPackageAttributeCallable(const Model::ModifyBandwidthPackageAttributeRequest& request);

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
                 *本接口（ModifyCcnRegionBandwidthLimitsType）用于修改后付费云联网实例修改带宽限速策略。
                 * @param req ModifyCcnRegionBandwidthLimitsTypeRequest
                 * @return ModifyCcnRegionBandwidthLimitsTypeOutcome
                 */
                ModifyCcnRegionBandwidthLimitsTypeOutcome ModifyCcnRegionBandwidthLimitsType(const Model::ModifyCcnRegionBandwidthLimitsTypeRequest &request);
                void ModifyCcnRegionBandwidthLimitsTypeAsync(const Model::ModifyCcnRegionBandwidthLimitsTypeRequest& request, const ModifyCcnRegionBandwidthLimitsTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcnRegionBandwidthLimitsTypeOutcomeCallable ModifyCcnRegionBandwidthLimitsTypeCallable(const Model::ModifyCcnRegionBandwidthLimitsTypeRequest& request);

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
                 *本接口（ModifyFlowLogAttribute）用于修改流日志属性
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
                 *本接口（ModifyHaVipAttribute）用于修改高可用虚拟IP（HAVIP）属性
                 * @param req ModifyHaVipAttributeRequest
                 * @return ModifyHaVipAttributeOutcome
                 */
                ModifyHaVipAttributeOutcome ModifyHaVipAttribute(const Model::ModifyHaVipAttributeRequest &request);
                void ModifyHaVipAttributeAsync(const Model::ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHaVipAttributeOutcomeCallable ModifyHaVipAttributeCallable(const Model::ModifyHaVipAttributeRequest& request);

                /**
                 *该接口用于修改IPV6地址访问internet的带宽
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
                 *该接口用于修改CDC的本地网关。
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
                 *本接口（ModifyNetworkInterfaceAttribute）用于修改弹性网卡属性。
                 * @param req ModifyNetworkInterfaceAttributeRequest
                 * @return ModifyNetworkInterfaceAttributeOutcome
                 */
                ModifyNetworkInterfaceAttributeOutcome ModifyNetworkInterfaceAttribute(const Model::ModifyNetworkInterfaceAttributeRequest &request);
                void ModifyNetworkInterfaceAttributeAsync(const Model::ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkInterfaceAttributeOutcomeCallable ModifyNetworkInterfaceAttributeCallable(const Model::ModifyNetworkInterfaceAttributeRequest& request);

                /**
                 *修改弹性网卡服务质量
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
                 *本接口（ModifyRouteTableAttribute）用于修改路由表（RouteTable）属性。
                 * @param req ModifyRouteTableAttributeRequest
                 * @return ModifyRouteTableAttributeOutcome
                 */
                ModifyRouteTableAttributeOutcome ModifyRouteTableAttribute(const Model::ModifyRouteTableAttributeRequest &request);
                void ModifyRouteTableAttributeAsync(const Model::ModifyRouteTableAttributeRequest& request, const ModifyRouteTableAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRouteTableAttributeOutcomeCallable ModifyRouteTableAttributeCallable(const Model::ModifyRouteTableAttributeRequest& request);

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
		<li>CidrBlock 字段允许输入符合 cidr 格式标准的任意字符串。(展开)在基础网络中，如果 CidrBlock 包含您的账户内的云服务器之外的设备在腾讯云的内网 IP，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。</li>
		<li>Ipv6CidrBlock 字段允许输入符合 IPv6 cidr 格式标准的任意字符串。(展开)在基础网络中，如果Ipv6CidrBlock 包含您的账户内的云服务器之外的设备在腾讯云的内网 IPv6，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。</li>
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
                 *本接口（ModifyServiceTemplateAttribute）用于修改协议端口模板
                 * @param req ModifyServiceTemplateAttributeRequest
                 * @return ModifyServiceTemplateAttributeOutcome
                 */
                ModifyServiceTemplateAttributeOutcome ModifyServiceTemplateAttribute(const Model::ModifyServiceTemplateAttributeRequest &request);
                void ModifyServiceTemplateAttributeAsync(const Model::ModifyServiceTemplateAttributeRequest& request, const ModifyServiceTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceTemplateAttributeOutcomeCallable ModifyServiceTemplateAttributeCallable(const Model::ModifyServiceTemplateAttributeRequest& request);

                /**
                 *本接口（ModifyServiceTemplateGroupAttribute）用于修改协议端口模板集合。
                 * @param req ModifyServiceTemplateGroupAttributeRequest
                 * @return ModifyServiceTemplateGroupAttributeOutcome
                 */
                ModifyServiceTemplateGroupAttributeOutcome ModifyServiceTemplateGroupAttribute(const Model::ModifyServiceTemplateGroupAttributeRequest &request);
                void ModifyServiceTemplateGroupAttributeAsync(const Model::ModifyServiceTemplateGroupAttributeRequest& request, const ModifyServiceTemplateGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceTemplateGroupAttributeOutcomeCallable ModifyServiceTemplateGroupAttributeCallable(const Model::ModifyServiceTemplateGroupAttributeRequest& request);

                /**
                 *本接口（ModifySubnetAttribute）用于修改子网属性。
                 * @param req ModifySubnetAttributeRequest
                 * @return ModifySubnetAttributeOutcome
                 */
                ModifySubnetAttributeOutcome ModifySubnetAttribute(const Model::ModifySubnetAttributeRequest &request);
                void ModifySubnetAttributeAsync(const Model::ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubnetAttributeOutcomeCallable ModifySubnetAttributeCallable(const Model::ModifySubnetAttributeRequest& request);

                /**
                 *本接口（ModifyVpcAttribute）用于修改私有网络（VPC）的相关属性。
                 * @param req ModifyVpcAttributeRequest
                 * @return ModifyVpcAttributeOutcome
                 */
                ModifyVpcAttributeOutcome ModifyVpcAttribute(const Model::ModifyVpcAttributeRequest &request);
                void ModifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcAttributeOutcomeCallable ModifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request);

                /**
                 *修改终端节点属性。
                 * @param req ModifyVpcEndPointAttributeRequest
                 * @return ModifyVpcEndPointAttributeOutcome
                 */
                ModifyVpcEndPointAttributeOutcome ModifyVpcEndPointAttribute(const Model::ModifyVpcEndPointAttributeRequest &request);
                void ModifyVpcEndPointAttributeAsync(const Model::ModifyVpcEndPointAttributeRequest& request, const ModifyVpcEndPointAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcEndPointAttributeOutcomeCallable ModifyVpcEndPointAttributeCallable(const Model::ModifyVpcEndPointAttributeRequest& request);

                /**
                 *修改终端节点服务属性。


                 * @param req ModifyVpcEndPointServiceAttributeRequest
                 * @return ModifyVpcEndPointServiceAttributeOutcome
                 */
                ModifyVpcEndPointServiceAttributeOutcome ModifyVpcEndPointServiceAttribute(const Model::ModifyVpcEndPointServiceAttributeRequest &request);
                void ModifyVpcEndPointServiceAttributeAsync(const Model::ModifyVpcEndPointServiceAttributeRequest& request, const ModifyVpcEndPointServiceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcEndPointServiceAttributeOutcomeCallable ModifyVpcEndPointServiceAttributeCallable(const Model::ModifyVpcEndPointServiceAttributeRequest& request);

                /**
                 *修改终端节点服务白名单属性。
                 * @param req ModifyVpcEndPointServiceWhiteListRequest
                 * @return ModifyVpcEndPointServiceWhiteListOutcome
                 */
                ModifyVpcEndPointServiceWhiteListOutcome ModifyVpcEndPointServiceWhiteList(const Model::ModifyVpcEndPointServiceWhiteListRequest &request);
                void ModifyVpcEndPointServiceWhiteListAsync(const Model::ModifyVpcEndPointServiceWhiteListRequest& request, const ModifyVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcEndPointServiceWhiteListOutcomeCallable ModifyVpcEndPointServiceWhiteListCallable(const Model::ModifyVpcEndPointServiceWhiteListRequest& request);

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
                 *本接口（ModifyVpnGatewayCcnRoutes）用于修改VPN网关云联网路由
                 * @param req ModifyVpnGatewayCcnRoutesRequest
                 * @return ModifyVpnGatewayCcnRoutesOutcome
                 */
                ModifyVpnGatewayCcnRoutesOutcome ModifyVpnGatewayCcnRoutes(const Model::ModifyVpnGatewayCcnRoutesRequest &request);
                void ModifyVpnGatewayCcnRoutesAsync(const Model::ModifyVpnGatewayCcnRoutesRequest& request, const ModifyVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewayCcnRoutesOutcomeCallable ModifyVpnGatewayCcnRoutesCallable(const Model::ModifyVpnGatewayCcnRoutesRequest& request);

                /**
                 *修改VPN路由是否启用
                 * @param req ModifyVpnGatewayRoutesRequest
                 * @return ModifyVpnGatewayRoutesOutcome
                 */
                ModifyVpnGatewayRoutesOutcome ModifyVpnGatewayRoutes(const Model::ModifyVpnGatewayRoutesRequest &request);
                void ModifyVpnGatewayRoutesAsync(const Model::ModifyVpnGatewayRoutesRequest& request, const ModifyVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewayRoutesOutcomeCallable ModifyVpnGatewayRoutesCallable(const Model::ModifyVpnGatewayRoutesRequest& request);

                /**
                 *路由表列表页操作增加“发布到云联网”，用于发布路由到云联网。
                 * @param req NotifyRoutesRequest
                 * @return NotifyRoutesOutcome
                 */
                NotifyRoutesOutcome NotifyRoutes(const Model::NotifyRoutesRequest &request);
                void NotifyRoutesAsync(const Model::NotifyRoutesRequest& request, const NotifyRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                NotifyRoutesOutcomeCallable NotifyRoutesCallable(const Model::NotifyRoutesRequest& request);

                /**
                 *本接口（RejectAttachCcnInstances）用于跨账号关联实例时，云联网所有者拒绝关联操作。

                 * @param req RejectAttachCcnInstancesRequest
                 * @return RejectAttachCcnInstancesOutcome
                 */
                RejectAttachCcnInstancesOutcome RejectAttachCcnInstances(const Model::RejectAttachCcnInstancesRequest &request);
                void RejectAttachCcnInstancesAsync(const Model::RejectAttachCcnInstancesRequest& request, const RejectAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectAttachCcnInstancesOutcomeCallable RejectAttachCcnInstancesCallable(const Model::RejectAttachCcnInstancesRequest& request);

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
                 *该接口用于给弹性公网IPv6地址释放带宽。
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
                 *该接口用于续费包月带宽计费模式的弹性公网IP
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
                 *本接口（ReplaceDirectConnectGatewayCcnRoutes）根据路由ID（RouteId）修改指定的路由（Route），支持批量修改。
                 * @param req ReplaceDirectConnectGatewayCcnRoutesRequest
                 * @return ReplaceDirectConnectGatewayCcnRoutesOutcome
                 */
                ReplaceDirectConnectGatewayCcnRoutesOutcome ReplaceDirectConnectGatewayCcnRoutes(const Model::ReplaceDirectConnectGatewayCcnRoutesRequest &request);
                void ReplaceDirectConnectGatewayCcnRoutesAsync(const Model::ReplaceDirectConnectGatewayCcnRoutesRequest& request, const ReplaceDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceDirectConnectGatewayCcnRoutesOutcomeCallable ReplaceDirectConnectGatewayCcnRoutesCallable(const Model::ReplaceDirectConnectGatewayCcnRoutesRequest& request);

                /**
                 *本接口（ReplaceRouteTableAssociation)用于修改子网（Subnet）关联的路由表（RouteTable）。
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
                 *本接口（ResetNatGatewayConnection）用来NAT网关并发连接上限。
                 * @param req ResetNatGatewayConnectionRequest
                 * @return ResetNatGatewayConnectionOutcome
                 */
                ResetNatGatewayConnectionOutcome ResetNatGatewayConnection(const Model::ResetNatGatewayConnectionRequest &request);
                void ResetNatGatewayConnectionAsync(const Model::ResetNatGatewayConnectionRequest& request, const ResetNatGatewayConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetNatGatewayConnectionOutcomeCallable ResetNatGatewayConnectionCallable(const Model::ResetNatGatewayConnectionRequest& request);

                /**
                 *本接口（ResetRoutes）用于对某个路由表名称和所有路由策略（Route）进行重新设置。<br />
注意: 调用本接口是先删除当前路由表中所有路由策略, 再保存新提交的路由策略内容, 会引起网络中断。
                 * @param req ResetRoutesRequest
                 * @return ResetRoutesOutcome
                 */
                ResetRoutesOutcome ResetRoutes(const Model::ResetRoutesRequest &request);
                void ResetRoutesAsync(const Model::ResetRoutesRequest& request, const ResetRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetRoutesOutcomeCallable ResetRoutesCallable(const Model::ResetRoutesRequest& request);

                /**
                 *本接口(ResetVpnConnection)用于重置VPN通道。
                 * @param req ResetVpnConnectionRequest
                 * @return ResetVpnConnectionOutcome
                 */
                ResetVpnConnectionOutcome ResetVpnConnection(const Model::ResetVpnConnectionRequest &request);
                void ResetVpnConnectionAsync(const Model::ResetVpnConnectionRequest& request, const ResetVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetVpnConnectionOutcomeCallable ResetVpnConnectionCallable(const Model::ResetVpnConnectionRequest& request);

                /**
                 *本接口（ResetVpnGatewayInternetMaxBandwidth）调整VPN网关带宽上限。目前支持升级配置，如果是包年包月VPN网关需要在有效期内。
                 * @param req ResetVpnGatewayInternetMaxBandwidthRequest
                 * @return ResetVpnGatewayInternetMaxBandwidthOutcome
                 */
                ResetVpnGatewayInternetMaxBandwidthOutcome ResetVpnGatewayInternetMaxBandwidth(const Model::ResetVpnGatewayInternetMaxBandwidthRequest &request);
                void ResetVpnGatewayInternetMaxBandwidthAsync(const Model::ResetVpnGatewayInternetMaxBandwidthRequest& request, const ResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetVpnGatewayInternetMaxBandwidthOutcomeCallable ResetVpnGatewayInternetMaxBandwidthCallable(const Model::ResetVpnGatewayInternetMaxBandwidthRequest& request);

                /**
                 *本接口（SetCcnRegionBandwidthLimits）用于设置云联网（CCN）各地域出带宽上限，或者地域间带宽上限。
                 * @param req SetCcnRegionBandwidthLimitsRequest
                 * @return SetCcnRegionBandwidthLimitsOutcome
                 */
                SetCcnRegionBandwidthLimitsOutcome SetCcnRegionBandwidthLimits(const Model::SetCcnRegionBandwidthLimitsRequest &request);
                void SetCcnRegionBandwidthLimitsAsync(const Model::SetCcnRegionBandwidthLimitsRequest& request, const SetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCcnRegionBandwidthLimitsOutcomeCallable SetCcnRegionBandwidthLimitsCallable(const Model::SetCcnRegionBandwidthLimitsRequest& request);

                /**
                 *本接口 (TransformAddress) 用于将实例的普通公网 IP 转换为[弹性公网IP](https://cloud.tencent.com/document/product/213/1941)（简称 EIP）。
* 平台对用户每地域每日解绑 EIP 重新分配普通公网 IP 次数有所限制（可参见 [EIP 产品简介](/document/product/213/1941)）。上述配额可通过 [DescribeAddressQuota](https://cloud.tencent.com/document/api/213/1378) 接口获取。
                 * @param req TransformAddressRequest
                 * @return TransformAddressOutcome
                 */
                TransformAddressOutcome TransformAddress(const Model::TransformAddressRequest &request);
                void TransformAddressAsync(const Model::TransformAddressRequest& request, const TransformAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransformAddressOutcomeCallable TransformAddressCallable(const Model::TransformAddressRequest& request);

                /**
                 *本接口（UnassignIpv6Addresses）用于释放弹性网卡`IPv6`地址。<br />
本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
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
* 退还弹性网卡上的辅助内网IP，接口自动解关联弹性公网 IP。不能退还弹性网卡的主内网IP。

本接口是异步完成，如需查询异步任务执行结果，请使用本接口返回的`RequestId`轮询`DescribeVpcTaskResult`接口。
                 * @param req UnassignPrivateIpAddressesRequest
                 * @return UnassignPrivateIpAddressesOutcome
                 */
                UnassignPrivateIpAddressesOutcome UnassignPrivateIpAddresses(const Model::UnassignPrivateIpAddressesRequest &request);
                void UnassignPrivateIpAddressesAsync(const Model::UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassignPrivateIpAddressesOutcomeCallable UnassignPrivateIpAddressesCallable(const Model::UnassignPrivateIpAddressesRequest& request);

                /**
                 *路由表列表页操作增加“从云联网撤销”，用于撤销已发布到云联网的路由。
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

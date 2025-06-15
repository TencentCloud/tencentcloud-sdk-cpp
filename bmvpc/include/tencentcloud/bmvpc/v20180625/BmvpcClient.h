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

#ifndef TENCENTCLOUD_BMVPC_V20180625_BMVPCCLIENT_H_
#define TENCENTCLOUD_BMVPC_V20180625_BMVPCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bmvpc/v20180625/model/AcceptVpcPeerConnectionRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/AcceptVpcPeerConnectionResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/AsyncRegisterIpsRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/AsyncRegisterIpsResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/BindEipsToNatGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/BindEipsToNatGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/BindIpsToNatGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/BindIpsToNatGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/BindSubnetsToNatGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/BindSubnetsToNatGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateCustomerGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateCustomerGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateDockerSubnetWithVlanRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateDockerSubnetWithVlanResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateHostedInterfaceRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateHostedInterfaceResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateInterfacesRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateInterfacesResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateNatGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateNatGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateRoutePoliciesRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateRoutePoliciesResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateSubnetRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateSubnetResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateVirtualSubnetWithVlanRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateVirtualSubnetWithVlanResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateVpcRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateVpcResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateVpcPeerConnectionRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/CreateVpcPeerConnectionResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteCustomerGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteCustomerGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteHostedInterfaceRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteHostedInterfaceResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteHostedInterfacesRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteHostedInterfacesResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteInterfacesRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteInterfacesResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteNatGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteNatGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteRoutePolicyRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteRoutePolicyResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteSubnetRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteSubnetResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteVirtualIpRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteVirtualIpResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteVpcRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteVpcResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteVpcPeerConnectionRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteVpcPeerConnectionResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteVpnConnectionRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteVpnConnectionResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteVpnGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeleteVpnGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DeregisterIpsRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DeregisterIpsResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeCustomerGatewaysRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeCustomerGatewaysResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeNatGatewaysRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeNatGatewaysResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeNatSubnetsRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeNatSubnetsResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeRoutePoliciesRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeRoutePoliciesResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeRouteTablesRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeRouteTablesResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeSubnetAvailableIpsRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeSubnetAvailableIpsResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeSubnetByDeviceRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeSubnetByDeviceResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeSubnetByHostedDeviceRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeSubnetByHostedDeviceResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeSubnetsRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeSubnetsResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcPeerConnectionsRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcPeerConnectionsResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcQuotaRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcQuotaResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcResourceRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcResourceResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcViewRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcViewResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcsRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpcsResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpnConnectionsRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpnConnectionsResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpnGatewaysRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DescribeVpnGatewaysResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/DownloadCustomerGatewayConfigurationRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/DownloadCustomerGatewayConfigurationResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyCustomerGatewayAttributeRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyCustomerGatewayAttributeResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyRoutePolicyRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyRoutePolicyResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyRouteTableRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyRouteTableResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifySubnetAttributeRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifySubnetAttributeResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifySubnetDHCPRelayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifySubnetDHCPRelayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyVpcAttributeRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyVpcAttributeResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyVpcPeerConnectionRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyVpcPeerConnectionResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyVpnConnectionAttributeRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyVpnConnectionAttributeResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyVpnGatewayAttributeRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/ModifyVpnGatewayAttributeResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/RejectVpcPeerConnectionRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/RejectVpcPeerConnectionResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/ResetVpnConnectionRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/ResetVpnConnectionResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/UnbindEipsFromNatGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/UnbindEipsFromNatGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/UnbindIpsFromNatGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/UnbindIpsFromNatGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/UnbindSubnetsFromNatGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/UnbindSubnetsFromNatGatewayResponse.h>
#include <tencentcloud/bmvpc/v20180625/model/UpgradeNatGatewayRequest.h>
#include <tencentcloud/bmvpc/v20180625/model/UpgradeNatGatewayResponse.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            class BmvpcClient : public AbstractClient
            {
            public:
                BmvpcClient(const Credential &credential, const std::string &region);
                BmvpcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcceptVpcPeerConnectionResponse> AcceptVpcPeerConnectionOutcome;
                typedef std::future<AcceptVpcPeerConnectionOutcome> AcceptVpcPeerConnectionOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::AcceptVpcPeerConnectionRequest&, AcceptVpcPeerConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptVpcPeerConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::AsyncRegisterIpsResponse> AsyncRegisterIpsOutcome;
                typedef std::future<AsyncRegisterIpsOutcome> AsyncRegisterIpsOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::AsyncRegisterIpsRequest&, AsyncRegisterIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AsyncRegisterIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::BindEipsToNatGatewayResponse> BindEipsToNatGatewayOutcome;
                typedef std::future<BindEipsToNatGatewayOutcome> BindEipsToNatGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::BindEipsToNatGatewayRequest&, BindEipsToNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindEipsToNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::BindIpsToNatGatewayResponse> BindIpsToNatGatewayOutcome;
                typedef std::future<BindIpsToNatGatewayOutcome> BindIpsToNatGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::BindIpsToNatGatewayRequest&, BindIpsToNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindIpsToNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::BindSubnetsToNatGatewayResponse> BindSubnetsToNatGatewayOutcome;
                typedef std::future<BindSubnetsToNatGatewayOutcome> BindSubnetsToNatGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::BindSubnetsToNatGatewayRequest&, BindSubnetsToNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindSubnetsToNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomerGatewayResponse> CreateCustomerGatewayOutcome;
                typedef std::future<CreateCustomerGatewayOutcome> CreateCustomerGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::CreateCustomerGatewayRequest&, CreateCustomerGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomerGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDockerSubnetWithVlanResponse> CreateDockerSubnetWithVlanOutcome;
                typedef std::future<CreateDockerSubnetWithVlanOutcome> CreateDockerSubnetWithVlanOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::CreateDockerSubnetWithVlanRequest&, CreateDockerSubnetWithVlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDockerSubnetWithVlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHostedInterfaceResponse> CreateHostedInterfaceOutcome;
                typedef std::future<CreateHostedInterfaceOutcome> CreateHostedInterfaceOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::CreateHostedInterfaceRequest&, CreateHostedInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostedInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInterfacesResponse> CreateInterfacesOutcome;
                typedef std::future<CreateInterfacesOutcome> CreateInterfacesOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::CreateInterfacesRequest&, CreateInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInterfacesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatGatewayResponse> CreateNatGatewayOutcome;
                typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::CreateNatGatewayRequest&, CreateNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoutePoliciesResponse> CreateRoutePoliciesOutcome;
                typedef std::future<CreateRoutePoliciesOutcome> CreateRoutePoliciesOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::CreateRoutePoliciesRequest&, CreateRoutePoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutePoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubnetResponse> CreateSubnetOutcome;
                typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::CreateSubnetRequest&, CreateSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVirtualSubnetWithVlanResponse> CreateVirtualSubnetWithVlanOutcome;
                typedef std::future<CreateVirtualSubnetWithVlanOutcome> CreateVirtualSubnetWithVlanOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::CreateVirtualSubnetWithVlanRequest&, CreateVirtualSubnetWithVlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirtualSubnetWithVlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcResponse> CreateVpcOutcome;
                typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::CreateVpcRequest&, CreateVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcPeerConnectionResponse> CreateVpcPeerConnectionOutcome;
                typedef std::future<CreateVpcPeerConnectionOutcome> CreateVpcPeerConnectionOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::CreateVpcPeerConnectionRequest&, CreateVpcPeerConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcPeerConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomerGatewayResponse> DeleteCustomerGatewayOutcome;
                typedef std::future<DeleteCustomerGatewayOutcome> DeleteCustomerGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteCustomerGatewayRequest&, DeleteCustomerGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomerGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHostedInterfaceResponse> DeleteHostedInterfaceOutcome;
                typedef std::future<DeleteHostedInterfaceOutcome> DeleteHostedInterfaceOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteHostedInterfaceRequest&, DeleteHostedInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHostedInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHostedInterfacesResponse> DeleteHostedInterfacesOutcome;
                typedef std::future<DeleteHostedInterfacesOutcome> DeleteHostedInterfacesOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteHostedInterfacesRequest&, DeleteHostedInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHostedInterfacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInterfacesResponse> DeleteInterfacesOutcome;
                typedef std::future<DeleteInterfacesOutcome> DeleteInterfacesOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteInterfacesRequest&, DeleteInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInterfacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNatGatewayResponse> DeleteNatGatewayOutcome;
                typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteNatGatewayRequest&, DeleteNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoutePolicyResponse> DeleteRoutePolicyOutcome;
                typedef std::future<DeleteRoutePolicyOutcome> DeleteRoutePolicyOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteRoutePolicyRequest&, DeleteRoutePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSubnetResponse> DeleteSubnetOutcome;
                typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteSubnetRequest&, DeleteSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVirtualIpResponse> DeleteVirtualIpOutcome;
                typedef std::future<DeleteVirtualIpOutcome> DeleteVirtualIpOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteVirtualIpRequest&, DeleteVirtualIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVirtualIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcResponse> DeleteVpcOutcome;
                typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteVpcRequest&, DeleteVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcPeerConnectionResponse> DeleteVpcPeerConnectionOutcome;
                typedef std::future<DeleteVpcPeerConnectionOutcome> DeleteVpcPeerConnectionOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteVpcPeerConnectionRequest&, DeleteVpcPeerConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcPeerConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpnConnectionResponse> DeleteVpnConnectionOutcome;
                typedef std::future<DeleteVpnConnectionOutcome> DeleteVpnConnectionOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteVpnConnectionRequest&, DeleteVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpnGatewayResponse> DeleteVpnGatewayOutcome;
                typedef std::future<DeleteVpnGatewayOutcome> DeleteVpnGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeleteVpnGatewayRequest&, DeleteVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterIpsResponse> DeregisterIpsOutcome;
                typedef std::future<DeregisterIpsOutcome> DeregisterIpsOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DeregisterIpsRequest&, DeregisterIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerGatewaysResponse> DescribeCustomerGatewaysOutcome;
                typedef std::future<DescribeCustomerGatewaysOutcome> DescribeCustomerGatewaysOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeCustomerGatewaysRequest&, DescribeCustomerGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewaysResponse> DescribeNatGatewaysOutcome;
                typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeNatGatewaysRequest&, DescribeNatGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatSubnetsResponse> DescribeNatSubnetsOutcome;
                typedef std::future<DescribeNatSubnetsOutcome> DescribeNatSubnetsOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeNatSubnetsRequest&, DescribeNatSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoutePoliciesResponse> DescribeRoutePoliciesOutcome;
                typedef std::future<DescribeRoutePoliciesOutcome> DescribeRoutePoliciesOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeRoutePoliciesRequest&, DescribeRoutePoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoutePoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteTablesResponse> DescribeRouteTablesOutcome;
                typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeRouteTablesRequest&, DescribeRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetAvailableIpsResponse> DescribeSubnetAvailableIpsOutcome;
                typedef std::future<DescribeSubnetAvailableIpsOutcome> DescribeSubnetAvailableIpsOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeSubnetAvailableIpsRequest&, DescribeSubnetAvailableIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetAvailableIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetByDeviceResponse> DescribeSubnetByDeviceOutcome;
                typedef std::future<DescribeSubnetByDeviceOutcome> DescribeSubnetByDeviceOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeSubnetByDeviceRequest&, DescribeSubnetByDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetByDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetByHostedDeviceResponse> DescribeSubnetByHostedDeviceOutcome;
                typedef std::future<DescribeSubnetByHostedDeviceOutcome> DescribeSubnetByHostedDeviceOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeSubnetByHostedDeviceRequest&, DescribeSubnetByHostedDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetByHostedDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetsResponse> DescribeSubnetsOutcome;
                typedef std::future<DescribeSubnetsOutcome> DescribeSubnetsOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeSubnetsRequest&, DescribeSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcPeerConnectionsResponse> DescribeVpcPeerConnectionsOutcome;
                typedef std::future<DescribeVpcPeerConnectionsOutcome> DescribeVpcPeerConnectionsOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeVpcPeerConnectionsRequest&, DescribeVpcPeerConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcPeerConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcQuotaResponse> DescribeVpcQuotaOutcome;
                typedef std::future<DescribeVpcQuotaOutcome> DescribeVpcQuotaOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeVpcQuotaRequest&, DescribeVpcQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcResourceResponse> DescribeVpcResourceOutcome;
                typedef std::future<DescribeVpcResourceOutcome> DescribeVpcResourceOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeVpcResourceRequest&, DescribeVpcResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcViewResponse> DescribeVpcViewOutcome;
                typedef std::future<DescribeVpcViewOutcome> DescribeVpcViewOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeVpcViewRequest&, DescribeVpcViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcViewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcsResponse> DescribeVpcsOutcome;
                typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeVpcsRequest&, DescribeVpcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnConnectionsResponse> DescribeVpnConnectionsOutcome;
                typedef std::future<DescribeVpnConnectionsOutcome> DescribeVpnConnectionsOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeVpnConnectionsRequest&, DescribeVpnConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnGatewaysResponse> DescribeVpnGatewaysOutcome;
                typedef std::future<DescribeVpnGatewaysOutcome> DescribeVpnGatewaysOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DescribeVpnGatewaysRequest&, DescribeVpnGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadCustomerGatewayConfigurationResponse> DownloadCustomerGatewayConfigurationOutcome;
                typedef std::future<DownloadCustomerGatewayConfigurationOutcome> DownloadCustomerGatewayConfigurationOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::DownloadCustomerGatewayConfigurationRequest&, DownloadCustomerGatewayConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCustomerGatewayConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomerGatewayAttributeResponse> ModifyCustomerGatewayAttributeOutcome;
                typedef std::future<ModifyCustomerGatewayAttributeOutcome> ModifyCustomerGatewayAttributeOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::ModifyCustomerGatewayAttributeRequest&, ModifyCustomerGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomerGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoutePolicyResponse> ModifyRoutePolicyOutcome;
                typedef std::future<ModifyRoutePolicyOutcome> ModifyRoutePolicyOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::ModifyRoutePolicyRequest&, ModifyRoutePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoutePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRouteTableResponse> ModifyRouteTableOutcome;
                typedef std::future<ModifyRouteTableOutcome> ModifyRouteTableOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::ModifyRouteTableRequest&, ModifyRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubnetAttributeResponse> ModifySubnetAttributeOutcome;
                typedef std::future<ModifySubnetAttributeOutcome> ModifySubnetAttributeOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::ModifySubnetAttributeRequest&, ModifySubnetAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubnetAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubnetDHCPRelayResponse> ModifySubnetDHCPRelayOutcome;
                typedef std::future<ModifySubnetDHCPRelayOutcome> ModifySubnetDHCPRelayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::ModifySubnetDHCPRelayRequest&, ModifySubnetDHCPRelayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubnetDHCPRelayAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcAttributeResponse> ModifyVpcAttributeOutcome;
                typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::ModifyVpcAttributeRequest&, ModifyVpcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcPeerConnectionResponse> ModifyVpcPeerConnectionOutcome;
                typedef std::future<ModifyVpcPeerConnectionOutcome> ModifyVpcPeerConnectionOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::ModifyVpcPeerConnectionRequest&, ModifyVpcPeerConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcPeerConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnConnectionAttributeResponse> ModifyVpnConnectionAttributeOutcome;
                typedef std::future<ModifyVpnConnectionAttributeOutcome> ModifyVpnConnectionAttributeOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::ModifyVpnConnectionAttributeRequest&, ModifyVpnConnectionAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnConnectionAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnGatewayAttributeResponse> ModifyVpnGatewayAttributeOutcome;
                typedef std::future<ModifyVpnGatewayAttributeOutcome> ModifyVpnGatewayAttributeOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::ModifyVpnGatewayAttributeRequest&, ModifyVpnGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::RejectVpcPeerConnectionResponse> RejectVpcPeerConnectionOutcome;
                typedef std::future<RejectVpcPeerConnectionOutcome> RejectVpcPeerConnectionOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::RejectVpcPeerConnectionRequest&, RejectVpcPeerConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectVpcPeerConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetVpnConnectionResponse> ResetVpnConnectionOutcome;
                typedef std::future<ResetVpnConnectionOutcome> ResetVpnConnectionOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::ResetVpnConnectionRequest&, ResetVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetVpnConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindEipsFromNatGatewayResponse> UnbindEipsFromNatGatewayOutcome;
                typedef std::future<UnbindEipsFromNatGatewayOutcome> UnbindEipsFromNatGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::UnbindEipsFromNatGatewayRequest&, UnbindEipsFromNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindEipsFromNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindIpsFromNatGatewayResponse> UnbindIpsFromNatGatewayOutcome;
                typedef std::future<UnbindIpsFromNatGatewayOutcome> UnbindIpsFromNatGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::UnbindIpsFromNatGatewayRequest&, UnbindIpsFromNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindIpsFromNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindSubnetsFromNatGatewayResponse> UnbindSubnetsFromNatGatewayOutcome;
                typedef std::future<UnbindSubnetsFromNatGatewayOutcome> UnbindSubnetsFromNatGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::UnbindSubnetsFromNatGatewayRequest&, UnbindSubnetsFromNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindSubnetsFromNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeNatGatewayResponse> UpgradeNatGatewayOutcome;
                typedef std::future<UpgradeNatGatewayOutcome> UpgradeNatGatewayOutcomeCallable;
                typedef std::function<void(const BmvpcClient*, const Model::UpgradeNatGatewayRequest&, UpgradeNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeNatGatewayAsyncHandler;



                /**
                 *接受黑石对等连接
                 * @param req AcceptVpcPeerConnectionRequest
                 * @return AcceptVpcPeerConnectionOutcome
                 */
                AcceptVpcPeerConnectionOutcome AcceptVpcPeerConnection(const Model::AcceptVpcPeerConnectionRequest &request);
                void AcceptVpcPeerConnectionAsync(const Model::AcceptVpcPeerConnectionRequest& request, const AcceptVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcceptVpcPeerConnectionOutcomeCallable AcceptVpcPeerConnectionCallable(const Model::AcceptVpcPeerConnectionRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

批量注册虚拟IP，异步接口。通过接口来查询任务进度。每次请求最多注册256个IP
                 * @param req AsyncRegisterIpsRequest
                 * @return AsyncRegisterIpsOutcome
                 */
                AsyncRegisterIpsOutcome AsyncRegisterIps(const Model::AsyncRegisterIpsRequest &request);
                void AsyncRegisterIpsAsync(const Model::AsyncRegisterIpsRequest& request, const AsyncRegisterIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AsyncRegisterIpsOutcomeCallable AsyncRegisterIpsCallable(const Model::AsyncRegisterIpsRequest& request);

                /**
                 *NAT网关绑定EIP接口，可将EIP绑定到NAT网关，该EIP作为访问外网的源IP地址，将流量发送到Internet
                 * @param req BindEipsToNatGatewayRequest
                 * @return BindEipsToNatGatewayOutcome
                 */
                BindEipsToNatGatewayOutcome BindEipsToNatGateway(const Model::BindEipsToNatGatewayRequest &request);
                void BindEipsToNatGatewayAsync(const Model::BindEipsToNatGatewayRequest& request, const BindEipsToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindEipsToNatGatewayOutcomeCallable BindEipsToNatGatewayCallable(const Model::BindEipsToNatGatewayRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

可用于将子网的部分IP绑定到NAT网关
                 * @param req BindIpsToNatGatewayRequest
                 * @return BindIpsToNatGatewayOutcome
                 */
                BindIpsToNatGatewayOutcome BindIpsToNatGateway(const Model::BindIpsToNatGatewayRequest &request);
                void BindIpsToNatGatewayAsync(const Model::BindIpsToNatGatewayRequest& request, const BindIpsToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindIpsToNatGatewayOutcomeCallable BindIpsToNatGatewayCallable(const Model::BindIpsToNatGatewayRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

NAT网关绑定子网后，该子网内全部IP可出公网
                 * @param req BindSubnetsToNatGatewayRequest
                 * @return BindSubnetsToNatGatewayOutcome
                 */
                BindSubnetsToNatGatewayOutcome BindSubnetsToNatGateway(const Model::BindSubnetsToNatGatewayRequest &request);
                void BindSubnetsToNatGatewayAsync(const Model::BindSubnetsToNatGatewayRequest& request, const BindSubnetsToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindSubnetsToNatGatewayOutcomeCallable BindSubnetsToNatGatewayCallable(const Model::BindSubnetsToNatGatewayRequest& request);

                /**
                 *90天无调用

本接口（CreateCustomerGateway）用于创建对端网关。
                 * @param req CreateCustomerGatewayRequest
                 * @return CreateCustomerGatewayOutcome
                 */
                CreateCustomerGatewayOutcome CreateCustomerGateway(const Model::CreateCustomerGatewayRequest &request);
                void CreateCustomerGatewayAsync(const Model::CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomerGatewayOutcomeCallable CreateCustomerGatewayCallable(const Model::CreateCustomerGatewayRequest& request);

                /**
                 *创建黑石Docker子网， 如果不指定VlanId，将会分配2000--2999范围的VlanId; 子网会关闭分布式网关
                 * @param req CreateDockerSubnetWithVlanRequest
                 * @return CreateDockerSubnetWithVlanOutcome
                 */
                CreateDockerSubnetWithVlanOutcome CreateDockerSubnetWithVlan(const Model::CreateDockerSubnetWithVlanRequest &request);
                void CreateDockerSubnetWithVlanAsync(const Model::CreateDockerSubnetWithVlanRequest& request, const CreateDockerSubnetWithVlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDockerSubnetWithVlanOutcomeCallable CreateDockerSubnetWithVlanCallable(const Model::CreateDockerSubnetWithVlanRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

本接口（CreateHostedInterface）用于黑石托管机器加入带VLANID不为5的子网。

1) 不能加入vlanId 为5的子网，只能加入VLANID范围为2000-2999的子网。
2) 每台托管机器最多可以加入20个子网。
3) 每次调用最多能支持传入10台托管机器。
                 * @param req CreateHostedInterfaceRequest
                 * @return CreateHostedInterfaceOutcome
                 */
                CreateHostedInterfaceOutcome CreateHostedInterface(const Model::CreateHostedInterfaceRequest &request);
                void CreateHostedInterfaceAsync(const Model::CreateHostedInterfaceRequest& request, const CreateHostedInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostedInterfaceOutcomeCallable CreateHostedInterfaceCallable(const Model::CreateHostedInterfaceRequest& request);

                /**
                 *物理机加入子网
                 * @param req CreateInterfacesRequest
                 * @return CreateInterfacesOutcome
                 */
                CreateInterfacesOutcome CreateInterfaces(const Model::CreateInterfacesRequest &request);
                void CreateInterfacesAsync(const Model::CreateInterfacesRequest& request, const CreateInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInterfacesOutcomeCallable CreateInterfacesCallable(const Model::CreateInterfacesRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

创建NAT网关接口，可针对网段方式、子网全部IP、子网部分IP这三种方式创建NAT网关
                 * @param req CreateNatGatewayRequest
                 * @return CreateNatGatewayOutcome
                 */
                CreateNatGatewayOutcome CreateNatGateway(const Model::CreateNatGatewayRequest &request);
                void CreateNatGatewayAsync(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatGatewayOutcomeCallable CreateNatGatewayCallable(const Model::CreateNatGatewayRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

创建黑石路由表的路由规则
                 * @param req CreateRoutePoliciesRequest
                 * @return CreateRoutePoliciesOutcome
                 */
                CreateRoutePoliciesOutcome CreateRoutePolicies(const Model::CreateRoutePoliciesRequest &request);
                void CreateRoutePoliciesAsync(const Model::CreateRoutePoliciesRequest& request, const CreateRoutePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoutePoliciesOutcomeCallable CreateRoutePoliciesCallable(const Model::CreateRoutePoliciesRequest& request);

                /**
                 *创建黑石私有网络的子网
访问管理: 用户可以对VpcId进行授权操作。例如设置资源为["qcs::bmvpc:::unVpc/vpc-xxxxx"]
                 * @param req CreateSubnetRequest
                 * @return CreateSubnetOutcome
                 */
                CreateSubnetOutcome CreateSubnet(const Model::CreateSubnetRequest &request);
                void CreateSubnetAsync(const Model::CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubnetOutcomeCallable CreateSubnetCallable(const Model::CreateSubnetRequest& request);

                /**
                 *创建黑石虚拟子网， 虚拟子网用于在黑石上创建虚拟网络，与黑石子网要做好规划。虚拟子网会分配2000-2999的VlanId。
                 * @param req CreateVirtualSubnetWithVlanRequest
                 * @return CreateVirtualSubnetWithVlanOutcome
                 */
                CreateVirtualSubnetWithVlanOutcome CreateVirtualSubnetWithVlan(const Model::CreateVirtualSubnetWithVlanRequest &request);
                void CreateVirtualSubnetWithVlanAsync(const Model::CreateVirtualSubnetWithVlanRequest& request, const CreateVirtualSubnetWithVlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVirtualSubnetWithVlanOutcomeCallable CreateVirtualSubnetWithVlanCallable(const Model::CreateVirtualSubnetWithVlanRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

创建黑石私有网络
                 * @param req CreateVpcRequest
                 * @return CreateVpcOutcome
                 */
                CreateVpcOutcome CreateVpc(const Model::CreateVpcRequest &request);
                void CreateVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcOutcomeCallable CreateVpcCallable(const Model::CreateVpcRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

创建对等连接
                 * @param req CreateVpcPeerConnectionRequest
                 * @return CreateVpcPeerConnectionOutcome
                 */
                CreateVpcPeerConnectionOutcome CreateVpcPeerConnection(const Model::CreateVpcPeerConnectionRequest &request);
                void CreateVpcPeerConnectionAsync(const Model::CreateVpcPeerConnectionRequest& request, const CreateVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcPeerConnectionOutcomeCallable CreateVpcPeerConnectionCallable(const Model::CreateVpcPeerConnectionRequest& request);

                /**
                 *本接口（DeleteCustomerGateway）用于删除对端网关。
                 * @param req DeleteCustomerGatewayRequest
                 * @return DeleteCustomerGatewayOutcome
                 */
                DeleteCustomerGatewayOutcome DeleteCustomerGateway(const Model::DeleteCustomerGatewayRequest &request);
                void DeleteCustomerGatewayAsync(const Model::DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomerGatewayOutcomeCallable DeleteCustomerGatewayCallable(const Model::DeleteCustomerGatewayRequest& request);

                /**
                 *本接口用于托管机器从VLANID不为5的子网中移除。
1) 不能从vlanId 为5的子网中移除。
2) 每次调用最多能支持传入10台物理机。
                 * @param req DeleteHostedInterfaceRequest
                 * @return DeleteHostedInterfaceOutcome
                 */
                DeleteHostedInterfaceOutcome DeleteHostedInterface(const Model::DeleteHostedInterfaceRequest &request);
                void DeleteHostedInterfaceAsync(const Model::DeleteHostedInterfaceRequest& request, const DeleteHostedInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHostedInterfaceOutcomeCallable DeleteHostedInterfaceCallable(const Model::DeleteHostedInterfaceRequest& request);

                /**
                 *托管机器移除子网批量接口，传入一台托管机器和多个子网，批量移除这些子网。异步接口，接口返回TaskId。
                 * @param req DeleteHostedInterfacesRequest
                 * @return DeleteHostedInterfacesOutcome
                 */
                DeleteHostedInterfacesOutcome DeleteHostedInterfaces(const Model::DeleteHostedInterfacesRequest &request);
                void DeleteHostedInterfacesAsync(const Model::DeleteHostedInterfacesRequest& request, const DeleteHostedInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHostedInterfacesOutcomeCallable DeleteHostedInterfacesCallable(const Model::DeleteHostedInterfacesRequest& request);

                /**
                 *物理机移除子网批量接口，传入一台物理机和多个子网，批量移除这些子网。异步接口，接口返回TaskId。
                 * @param req DeleteInterfacesRequest
                 * @return DeleteInterfacesOutcome
                 */
                DeleteInterfacesOutcome DeleteInterfaces(const Model::DeleteInterfacesRequest &request);
                void DeleteInterfacesAsync(const Model::DeleteInterfacesRequest& request, const DeleteInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInterfacesOutcomeCallable DeleteInterfacesCallable(const Model::DeleteInterfacesRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

删除NAT网关
                 * @param req DeleteNatGatewayRequest
                 * @return DeleteNatGatewayOutcome
                 */
                DeleteNatGatewayOutcome DeleteNatGateway(const Model::DeleteNatGatewayRequest &request);
                void DeleteNatGatewayAsync(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatGatewayOutcomeCallable DeleteNatGatewayCallable(const Model::DeleteNatGatewayRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

删除黑石路由表路由规则
                 * @param req DeleteRoutePolicyRequest
                 * @return DeleteRoutePolicyOutcome
                 */
                DeleteRoutePolicyOutcome DeleteRoutePolicy(const Model::DeleteRoutePolicyRequest &request);
                void DeleteRoutePolicyAsync(const Model::DeleteRoutePolicyRequest& request, const DeleteRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoutePolicyOutcomeCallable DeleteRoutePolicyCallable(const Model::DeleteRoutePolicyRequest& request);

                /**
                 *本接口（DeleteSubnet）用于删除黑石私有网络子网。
删除子网前，请清理该子网下所有资源，包括物理机、负载均衡、黑石数据库、弹性IP、NAT网关等资源
                 * @param req DeleteSubnetRequest
                 * @return DeleteSubnetOutcome
                 */
                DeleteSubnetOutcome DeleteSubnet(const Model::DeleteSubnetRequest &request);
                void DeleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubnetOutcomeCallable DeleteSubnetCallable(const Model::DeleteSubnetRequest& request);

                /**
                 *退还虚拟IP。此接口只能退还虚拟IP，物理机IP不能退还。
                 * @param req DeleteVirtualIpRequest
                 * @return DeleteVirtualIpOutcome
                 */
                DeleteVirtualIpOutcome DeleteVirtualIp(const Model::DeleteVirtualIpRequest &request);
                void DeleteVirtualIpAsync(const Model::DeleteVirtualIpRequest& request, const DeleteVirtualIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVirtualIpOutcomeCallable DeleteVirtualIpCallable(const Model::DeleteVirtualIpRequest& request);

                /**
                 *本接口(DeleteVpc)用于删除黑石私有网络(VPC)。

删除私有网络前，请清理该私有网络下所有资源，包括子网、负载均衡、弹性 IP、对等连接、NAT 网关、专线通道、SSLVPN 等资源。
                 * @param req DeleteVpcRequest
                 * @return DeleteVpcOutcome
                 */
                DeleteVpcOutcome DeleteVpc(const Model::DeleteVpcRequest &request);
                void DeleteVpcAsync(const Model::DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcOutcomeCallable DeleteVpcCallable(const Model::DeleteVpcRequest& request);

                /**
                 *删除黑石对等连接
                 * @param req DeleteVpcPeerConnectionRequest
                 * @return DeleteVpcPeerConnectionOutcome
                 */
                DeleteVpcPeerConnectionOutcome DeleteVpcPeerConnection(const Model::DeleteVpcPeerConnectionRequest &request);
                void DeleteVpcPeerConnectionAsync(const Model::DeleteVpcPeerConnectionRequest& request, const DeleteVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcPeerConnectionOutcomeCallable DeleteVpcPeerConnectionCallable(const Model::DeleteVpcPeerConnectionRequest& request);

                /**
                 *本接口(DeleteVpnConnection)用于删除VPN通道。
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
                 *黑石1.0接口，业务已下线，90天无调用

注销私有网络IP为空闲
                 * @param req DeregisterIpsRequest
                 * @return DeregisterIpsOutcome
                 */
                DeregisterIpsOutcome DeregisterIps(const Model::DeregisterIpsRequest &request);
                void DeregisterIpsAsync(const Model::DeregisterIpsRequest& request, const DeregisterIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterIpsOutcomeCallable DeregisterIpsCallable(const Model::DeregisterIpsRequest& request);

                /**
                 *本接口（DescribeCustomerGateways）用于查询对端网关列表。
                 * @param req DescribeCustomerGatewaysRequest
                 * @return DescribeCustomerGatewaysOutcome
                 */
                DescribeCustomerGatewaysOutcome DescribeCustomerGateways(const Model::DescribeCustomerGatewaysRequest &request);
                void DescribeCustomerGatewaysAsync(const Model::DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerGatewaysOutcomeCallable DescribeCustomerGatewaysCallable(const Model::DescribeCustomerGatewaysRequest& request);

                /**
                 *获取NAT网关信息，包括NAT网关 ID、网关名称、私有网络、网关并发连接上限、绑定EIP列表等
                 * @param req DescribeNatGatewaysRequest
                 * @return DescribeNatGatewaysOutcome
                 */
                DescribeNatGatewaysOutcome DescribeNatGateways(const Model::DescribeNatGatewaysRequest &request);
                void DescribeNatGatewaysAsync(const Model::DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewaysOutcomeCallable DescribeNatGatewaysCallable(const Model::DescribeNatGatewaysRequest& request);

                /**
                 *可获取NAT网关绑定的子网信息
                 * @param req DescribeNatSubnetsRequest
                 * @return DescribeNatSubnetsOutcome
                 */
                DescribeNatSubnetsOutcome DescribeNatSubnets(const Model::DescribeNatSubnetsRequest &request);
                void DescribeNatSubnetsAsync(const Model::DescribeNatSubnetsRequest& request, const DescribeNatSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatSubnetsOutcomeCallable DescribeNatSubnetsCallable(const Model::DescribeNatSubnetsRequest& request);

                /**
                 *本接口（DescribeRoutePolicies）用于查询路由表条目。
                 * @param req DescribeRoutePoliciesRequest
                 * @return DescribeRoutePoliciesOutcome
                 */
                DescribeRoutePoliciesOutcome DescribeRoutePolicies(const Model::DescribeRoutePoliciesRequest &request);
                void DescribeRoutePoliciesAsync(const Model::DescribeRoutePoliciesRequest& request, const DescribeRoutePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoutePoliciesOutcomeCallable DescribeRoutePoliciesCallable(const Model::DescribeRoutePoliciesRequest& request);

                /**
                 *本接口（DescribeRouteTables）用于查询路由表。
                 * @param req DescribeRouteTablesRequest
                 * @return DescribeRouteTablesOutcome
                 */
                DescribeRouteTablesOutcome DescribeRouteTables(const Model::DescribeRouteTablesRequest &request);
                void DescribeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTablesOutcomeCallable DescribeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request);

                /**
                 *获取子网内可用IP列表
                 * @param req DescribeSubnetAvailableIpsRequest
                 * @return DescribeSubnetAvailableIpsOutcome
                 */
                DescribeSubnetAvailableIpsOutcome DescribeSubnetAvailableIps(const Model::DescribeSubnetAvailableIpsRequest &request);
                void DescribeSubnetAvailableIpsAsync(const Model::DescribeSubnetAvailableIpsRequest& request, const DescribeSubnetAvailableIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetAvailableIpsOutcomeCallable DescribeSubnetAvailableIpsCallable(const Model::DescribeSubnetAvailableIpsRequest& request);

                /**
                 *物理机可以加入物理机子网，虚拟子网，DOCKER子网，通过此接口可以查询物理机加入的子网。
                 * @param req DescribeSubnetByDeviceRequest
                 * @return DescribeSubnetByDeviceOutcome
                 */
                DescribeSubnetByDeviceOutcome DescribeSubnetByDevice(const Model::DescribeSubnetByDeviceRequest &request);
                void DescribeSubnetByDeviceAsync(const Model::DescribeSubnetByDeviceRequest& request, const DescribeSubnetByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetByDeviceOutcomeCallable DescribeSubnetByDeviceCallable(const Model::DescribeSubnetByDeviceRequest& request);

                /**
                 *托管可以加入物理机子网，虚拟子网，DOCKER子网，通过此接口可以查询托管加入的子网。
                 * @param req DescribeSubnetByHostedDeviceRequest
                 * @return DescribeSubnetByHostedDeviceOutcome
                 */
                DescribeSubnetByHostedDeviceOutcome DescribeSubnetByHostedDevice(const Model::DescribeSubnetByHostedDeviceRequest &request);
                void DescribeSubnetByHostedDeviceAsync(const Model::DescribeSubnetByHostedDeviceRequest& request, const DescribeSubnetByHostedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetByHostedDeviceOutcomeCallable DescribeSubnetByHostedDeviceCallable(const Model::DescribeSubnetByHostedDeviceRequest& request);

                /**
                 *本接口（DescribeSubnets）用于查询黑石子网列表。
                 * @param req DescribeSubnetsRequest
                 * @return DescribeSubnetsOutcome
                 */
                DescribeSubnetsOutcome DescribeSubnets(const Model::DescribeSubnetsRequest &request);
                void DescribeSubnetsAsync(const Model::DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetsOutcomeCallable DescribeSubnetsCallable(const Model::DescribeSubnetsRequest& request);

                /**
                 *根据任务ID，获取任务的执行状态
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *获取对等连接列表
                 * @param req DescribeVpcPeerConnectionsRequest
                 * @return DescribeVpcPeerConnectionsOutcome
                 */
                DescribeVpcPeerConnectionsOutcome DescribeVpcPeerConnections(const Model::DescribeVpcPeerConnectionsRequest &request);
                void DescribeVpcPeerConnectionsAsync(const Model::DescribeVpcPeerConnectionsRequest& request, const DescribeVpcPeerConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcPeerConnectionsOutcomeCallable DescribeVpcPeerConnectionsCallable(const Model::DescribeVpcPeerConnectionsRequest& request);

                /**
                 *本接口（DescribeVpcQuota）用于查询用户VPC相关配额限制。
                 * @param req DescribeVpcQuotaRequest
                 * @return DescribeVpcQuotaOutcome
                 */
                DescribeVpcQuotaOutcome DescribeVpcQuota(const Model::DescribeVpcQuotaRequest &request);
                void DescribeVpcQuotaAsync(const Model::DescribeVpcQuotaRequest& request, const DescribeVpcQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcQuotaOutcomeCallable DescribeVpcQuotaCallable(const Model::DescribeVpcQuotaRequest& request);

                /**
                 *查询黑石私有网络关联资源
                 * @param req DescribeVpcResourceRequest
                 * @return DescribeVpcResourceOutcome
                 */
                DescribeVpcResourceOutcome DescribeVpcResource(const Model::DescribeVpcResourceRequest &request);
                void DescribeVpcResourceAsync(const Model::DescribeVpcResourceRequest& request, const DescribeVpcResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcResourceOutcomeCallable DescribeVpcResourceCallable(const Model::DescribeVpcResourceRequest& request);

                /**
                 *本接口（DescribeVpcView）用于查询VPC网络拓扑视图。
                 * @param req DescribeVpcViewRequest
                 * @return DescribeVpcViewOutcome
                 */
                DescribeVpcViewOutcome DescribeVpcView(const Model::DescribeVpcViewRequest &request);
                void DescribeVpcViewAsync(const Model::DescribeVpcViewRequest& request, const DescribeVpcViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcViewOutcomeCallable DescribeVpcViewCallable(const Model::DescribeVpcViewRequest& request);

                /**
                 *本接口（DescribeVpcs）用于查询私有网络列表。
本接口不传参数时，返回默认排序下的前20条VPC信息。
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
                 *本接口（DescribeVpnGateways）用于查询VPN网关列表。
                 * @param req DescribeVpnGatewaysRequest
                 * @return DescribeVpnGatewaysOutcome
                 */
                DescribeVpnGatewaysOutcome DescribeVpnGateways(const Model::DescribeVpnGatewaysRequest &request);
                void DescribeVpnGatewaysAsync(const Model::DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewaysOutcomeCallable DescribeVpnGatewaysCallable(const Model::DescribeVpnGatewaysRequest& request);

                /**
                 *90天无调用

本接口(DownloadCustomerGatewayConfiguration)用于下载VPN通道配置。
                 * @param req DownloadCustomerGatewayConfigurationRequest
                 * @return DownloadCustomerGatewayConfigurationOutcome
                 */
                DownloadCustomerGatewayConfigurationOutcome DownloadCustomerGatewayConfiguration(const Model::DownloadCustomerGatewayConfigurationRequest &request);
                void DownloadCustomerGatewayConfigurationAsync(const Model::DownloadCustomerGatewayConfigurationRequest& request, const DownloadCustomerGatewayConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadCustomerGatewayConfigurationOutcomeCallable DownloadCustomerGatewayConfigurationCallable(const Model::DownloadCustomerGatewayConfigurationRequest& request);

                /**
                 *本接口（ModifyCustomerGatewayAttribute）用于修改对端网关信息。
                 * @param req ModifyCustomerGatewayAttributeRequest
                 * @return ModifyCustomerGatewayAttributeOutcome
                 */
                ModifyCustomerGatewayAttributeOutcome ModifyCustomerGatewayAttribute(const Model::ModifyCustomerGatewayAttributeRequest &request);
                void ModifyCustomerGatewayAttributeAsync(const Model::ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomerGatewayAttributeOutcomeCallable ModifyCustomerGatewayAttributeCallable(const Model::ModifyCustomerGatewayAttributeRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

修改自定义路由
                 * @param req ModifyRoutePolicyRequest
                 * @return ModifyRoutePolicyOutcome
                 */
                ModifyRoutePolicyOutcome ModifyRoutePolicy(const Model::ModifyRoutePolicyRequest &request);
                void ModifyRoutePolicyAsync(const Model::ModifyRoutePolicyRequest& request, const ModifyRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoutePolicyOutcomeCallable ModifyRoutePolicyCallable(const Model::ModifyRoutePolicyRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

修改路由表
                 * @param req ModifyRouteTableRequest
                 * @return ModifyRouteTableOutcome
                 */
                ModifyRouteTableOutcome ModifyRouteTable(const Model::ModifyRouteTableRequest &request);
                void ModifyRouteTableAsync(const Model::ModifyRouteTableRequest& request, const ModifyRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRouteTableOutcomeCallable ModifyRouteTableCallable(const Model::ModifyRouteTableRequest& request);

                /**
                 *修改子网属性
                 * @param req ModifySubnetAttributeRequest
                 * @return ModifySubnetAttributeOutcome
                 */
                ModifySubnetAttributeOutcome ModifySubnetAttribute(const Model::ModifySubnetAttributeRequest &request);
                void ModifySubnetAttributeAsync(const Model::ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubnetAttributeOutcomeCallable ModifySubnetAttributeCallable(const Model::ModifySubnetAttributeRequest& request);

                /**
                 *修改子网DHCP Relay属性
                 * @param req ModifySubnetDHCPRelayRequest
                 * @return ModifySubnetDHCPRelayOutcome
                 */
                ModifySubnetDHCPRelayOutcome ModifySubnetDHCPRelay(const Model::ModifySubnetDHCPRelayRequest &request);
                void ModifySubnetDHCPRelayAsync(const Model::ModifySubnetDHCPRelayRequest& request, const ModifySubnetDHCPRelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubnetDHCPRelayOutcomeCallable ModifySubnetDHCPRelayCallable(const Model::ModifySubnetDHCPRelayRequest& request);

                /**
                 *本接口（ModifyVpcAttribute）用于修改VPC的标识名称和控制VPC的监控起停。
                 * @param req ModifyVpcAttributeRequest
                 * @return ModifyVpcAttributeOutcome
                 */
                ModifyVpcAttributeOutcome ModifyVpcAttribute(const Model::ModifyVpcAttributeRequest &request);
                void ModifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcAttributeOutcomeCallable ModifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request);

                /**
                 *修改黑石对等连接
                 * @param req ModifyVpcPeerConnectionRequest
                 * @return ModifyVpcPeerConnectionOutcome
                 */
                ModifyVpcPeerConnectionOutcome ModifyVpcPeerConnection(const Model::ModifyVpcPeerConnectionRequest &request);
                void ModifyVpcPeerConnectionAsync(const Model::ModifyVpcPeerConnectionRequest& request, const ModifyVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcPeerConnectionOutcomeCallable ModifyVpcPeerConnectionCallable(const Model::ModifyVpcPeerConnectionRequest& request);

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
                 *拒绝黑石对等连接申请
                 * @param req RejectVpcPeerConnectionRequest
                 * @return RejectVpcPeerConnectionOutcome
                 */
                RejectVpcPeerConnectionOutcome RejectVpcPeerConnection(const Model::RejectVpcPeerConnectionRequest &request);
                void RejectVpcPeerConnectionAsync(const Model::RejectVpcPeerConnectionRequest& request, const RejectVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectVpcPeerConnectionOutcomeCallable RejectVpcPeerConnectionCallable(const Model::RejectVpcPeerConnectionRequest& request);

                /**
                 *本接口(ResetVpnConnection)用于重置VPN通道。
                 * @param req ResetVpnConnectionRequest
                 * @return ResetVpnConnectionOutcome
                 */
                ResetVpnConnectionOutcome ResetVpnConnection(const Model::ResetVpnConnectionRequest &request);
                void ResetVpnConnectionAsync(const Model::ResetVpnConnectionRequest& request, const ResetVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetVpnConnectionOutcomeCallable ResetVpnConnectionCallable(const Model::ResetVpnConnectionRequest& request);

                /**
                 *NAT网关解绑该EIP后，NAT网关将不会使用该EIP作为访问外网的源IP地址

                 * @param req UnbindEipsFromNatGatewayRequest
                 * @return UnbindEipsFromNatGatewayOutcome
                 */
                UnbindEipsFromNatGatewayOutcome UnbindEipsFromNatGateway(const Model::UnbindEipsFromNatGatewayRequest &request);
                void UnbindEipsFromNatGatewayAsync(const Model::UnbindEipsFromNatGatewayRequest& request, const UnbindEipsFromNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindEipsFromNatGatewayOutcomeCallable UnbindEipsFromNatGatewayCallable(const Model::UnbindEipsFromNatGatewayRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

NAT网关解绑IP接口，可将子网的部分IP从NAT网关中解绑
                 * @param req UnbindIpsFromNatGatewayRequest
                 * @return UnbindIpsFromNatGatewayOutcome
                 */
                UnbindIpsFromNatGatewayOutcome UnbindIpsFromNatGateway(const Model::UnbindIpsFromNatGatewayRequest &request);
                void UnbindIpsFromNatGatewayAsync(const Model::UnbindIpsFromNatGatewayRequest& request, const UnbindIpsFromNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindIpsFromNatGatewayOutcomeCallable UnbindIpsFromNatGatewayCallable(const Model::UnbindIpsFromNatGatewayRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

NAT网关解绑子网接口，可将子网解绑NAT网关
                 * @param req UnbindSubnetsFromNatGatewayRequest
                 * @return UnbindSubnetsFromNatGatewayOutcome
                 */
                UnbindSubnetsFromNatGatewayOutcome UnbindSubnetsFromNatGateway(const Model::UnbindSubnetsFromNatGatewayRequest &request);
                void UnbindSubnetsFromNatGatewayAsync(const Model::UnbindSubnetsFromNatGatewayRequest& request, const UnbindSubnetsFromNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindSubnetsFromNatGatewayOutcomeCallable UnbindSubnetsFromNatGatewayCallable(const Model::UnbindSubnetsFromNatGatewayRequest& request);

                /**
                 *黑石1.0接口，业务已下线，90天无调用

升级NAT网关接口，可NAT网关修改为小型NAT网关、中型NAT网关、以及大型NAT网关

                 * @param req UpgradeNatGatewayRequest
                 * @return UpgradeNatGatewayOutcome
                 */
                UpgradeNatGatewayOutcome UpgradeNatGateway(const Model::UpgradeNatGatewayRequest &request);
                void UpgradeNatGatewayAsync(const Model::UpgradeNatGatewayRequest& request, const UpgradeNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeNatGatewayOutcomeCallable UpgradeNatGatewayCallable(const Model::UpgradeNatGatewayRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_BMVPCCLIENT_H_

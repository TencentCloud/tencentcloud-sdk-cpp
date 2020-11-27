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

#include <tencentcloud/vpc/v20170312/VpcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vpc::V20170312;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "vpc.tencentcloudapi.com";
}

VpcClient::VpcClient(const Credential &credential, const string &region) :
    VpcClient(credential, region, ClientProfile())
{
}

VpcClient::VpcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VpcClient::AcceptAttachCcnInstancesOutcome VpcClient::AcceptAttachCcnInstances(const AcceptAttachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AcceptAttachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcceptAttachCcnInstancesResponse rsp = AcceptAttachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcceptAttachCcnInstancesOutcome(rsp);
        else
            return AcceptAttachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return AcceptAttachCcnInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::AcceptAttachCcnInstancesAsync(const AcceptAttachCcnInstancesRequest& request, const AcceptAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AcceptAttachCcnInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AcceptAttachCcnInstancesOutcomeCallable VpcClient::AcceptAttachCcnInstancesCallable(const AcceptAttachCcnInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AcceptAttachCcnInstancesOutcome()>>(
        [this, request]()
        {
            return this->AcceptAttachCcnInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AddBandwidthPackageResourcesOutcome VpcClient::AddBandwidthPackageResources(const AddBandwidthPackageResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "AddBandwidthPackageResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddBandwidthPackageResourcesResponse rsp = AddBandwidthPackageResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddBandwidthPackageResourcesOutcome(rsp);
        else
            return AddBandwidthPackageResourcesOutcome(o.GetError());
    }
    else
    {
        return AddBandwidthPackageResourcesOutcome(outcome.GetError());
    }
}

void VpcClient::AddBandwidthPackageResourcesAsync(const AddBandwidthPackageResourcesRequest& request, const AddBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddBandwidthPackageResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AddBandwidthPackageResourcesOutcomeCallable VpcClient::AddBandwidthPackageResourcesCallable(const AddBandwidthPackageResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddBandwidthPackageResourcesOutcome()>>(
        [this, request]()
        {
            return this->AddBandwidthPackageResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AddIp6RulesOutcome VpcClient::AddIp6Rules(const AddIp6RulesRequest &request)
{
    auto outcome = MakeRequest(request, "AddIp6Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddIp6RulesResponse rsp = AddIp6RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddIp6RulesOutcome(rsp);
        else
            return AddIp6RulesOutcome(o.GetError());
    }
    else
    {
        return AddIp6RulesOutcome(outcome.GetError());
    }
}

void VpcClient::AddIp6RulesAsync(const AddIp6RulesRequest& request, const AddIp6RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddIp6Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AddIp6RulesOutcomeCallable VpcClient::AddIp6RulesCallable(const AddIp6RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddIp6RulesOutcome()>>(
        [this, request]()
        {
            return this->AddIp6Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AllocateAddressesOutcome VpcClient::AllocateAddresses(const AllocateAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateAddressesResponse rsp = AllocateAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateAddressesOutcome(rsp);
        else
            return AllocateAddressesOutcome(o.GetError());
    }
    else
    {
        return AllocateAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::AllocateAddressesAsync(const AllocateAddressesRequest& request, const AllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AllocateAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AllocateAddressesOutcomeCallable VpcClient::AllocateAddressesCallable(const AllocateAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AllocateAddressesOutcome()>>(
        [this, request]()
        {
            return this->AllocateAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AllocateIp6AddressesBandwidthOutcome VpcClient::AllocateIp6AddressesBandwidth(const AllocateIp6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateIp6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateIp6AddressesBandwidthResponse rsp = AllocateIp6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateIp6AddressesBandwidthOutcome(rsp);
        else
            return AllocateIp6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return AllocateIp6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::AllocateIp6AddressesBandwidthAsync(const AllocateIp6AddressesBandwidthRequest& request, const AllocateIp6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AllocateIp6AddressesBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AllocateIp6AddressesBandwidthOutcomeCallable VpcClient::AllocateIp6AddressesBandwidthCallable(const AllocateIp6AddressesBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AllocateIp6AddressesBandwidthOutcome()>>(
        [this, request]()
        {
            return this->AllocateIp6AddressesBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AssignIpv6AddressesOutcome VpcClient::AssignIpv6Addresses(const AssignIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6AddressesResponse rsp = AssignIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6AddressesOutcome(rsp);
        else
            return AssignIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::AssignIpv6AddressesAsync(const AssignIpv6AddressesRequest& request, const AssignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignIpv6Addresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AssignIpv6AddressesOutcomeCallable VpcClient::AssignIpv6AddressesCallable(const AssignIpv6AddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignIpv6AddressesOutcome()>>(
        [this, request]()
        {
            return this->AssignIpv6Addresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AssignIpv6CidrBlockOutcome VpcClient::AssignIpv6CidrBlock(const AssignIpv6CidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6CidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6CidrBlockResponse rsp = AssignIpv6CidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6CidrBlockOutcome(rsp);
        else
            return AssignIpv6CidrBlockOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6CidrBlockOutcome(outcome.GetError());
    }
}

void VpcClient::AssignIpv6CidrBlockAsync(const AssignIpv6CidrBlockRequest& request, const AssignIpv6CidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignIpv6CidrBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AssignIpv6CidrBlockOutcomeCallable VpcClient::AssignIpv6CidrBlockCallable(const AssignIpv6CidrBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignIpv6CidrBlockOutcome()>>(
        [this, request]()
        {
            return this->AssignIpv6CidrBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AssignIpv6SubnetCidrBlockOutcome VpcClient::AssignIpv6SubnetCidrBlock(const AssignIpv6SubnetCidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6SubnetCidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6SubnetCidrBlockResponse rsp = AssignIpv6SubnetCidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6SubnetCidrBlockOutcome(rsp);
        else
            return AssignIpv6SubnetCidrBlockOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6SubnetCidrBlockOutcome(outcome.GetError());
    }
}

void VpcClient::AssignIpv6SubnetCidrBlockAsync(const AssignIpv6SubnetCidrBlockRequest& request, const AssignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignIpv6SubnetCidrBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AssignIpv6SubnetCidrBlockOutcomeCallable VpcClient::AssignIpv6SubnetCidrBlockCallable(const AssignIpv6SubnetCidrBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignIpv6SubnetCidrBlockOutcome()>>(
        [this, request]()
        {
            return this->AssignIpv6SubnetCidrBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AssignPrivateIpAddressesOutcome VpcClient::AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "AssignPrivateIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignPrivateIpAddressesResponse rsp = AssignPrivateIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignPrivateIpAddressesOutcome(rsp);
        else
            return AssignPrivateIpAddressesOutcome(o.GetError());
    }
    else
    {
        return AssignPrivateIpAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::AssignPrivateIpAddressesAsync(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignPrivateIpAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AssignPrivateIpAddressesOutcomeCallable VpcClient::AssignPrivateIpAddressesCallable(const AssignPrivateIpAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignPrivateIpAddressesOutcome()>>(
        [this, request]()
        {
            return this->AssignPrivateIpAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AssociateAddressOutcome VpcClient::AssociateAddress(const AssociateAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateAddressResponse rsp = AssociateAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateAddressOutcome(rsp);
        else
            return AssociateAddressOutcome(o.GetError());
    }
    else
    {
        return AssociateAddressOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateAddressAsync(const AssociateAddressRequest& request, const AssociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AssociateAddressOutcomeCallable VpcClient::AssociateAddressCallable(const AssociateAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateAddressOutcome()>>(
        [this, request]()
        {
            return this->AssociateAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AssociateDhcpIpWithAddressIpOutcome VpcClient::AssociateDhcpIpWithAddressIp(const AssociateDhcpIpWithAddressIpRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateDhcpIpWithAddressIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateDhcpIpWithAddressIpResponse rsp = AssociateDhcpIpWithAddressIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateDhcpIpWithAddressIpOutcome(rsp);
        else
            return AssociateDhcpIpWithAddressIpOutcome(o.GetError());
    }
    else
    {
        return AssociateDhcpIpWithAddressIpOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateDhcpIpWithAddressIpAsync(const AssociateDhcpIpWithAddressIpRequest& request, const AssociateDhcpIpWithAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateDhcpIpWithAddressIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AssociateDhcpIpWithAddressIpOutcomeCallable VpcClient::AssociateDhcpIpWithAddressIpCallable(const AssociateDhcpIpWithAddressIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateDhcpIpWithAddressIpOutcome()>>(
        [this, request]()
        {
            return this->AssociateDhcpIpWithAddressIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AssociateDirectConnectGatewayNatGatewayOutcome VpcClient::AssociateDirectConnectGatewayNatGateway(const AssociateDirectConnectGatewayNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateDirectConnectGatewayNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateDirectConnectGatewayNatGatewayResponse rsp = AssociateDirectConnectGatewayNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateDirectConnectGatewayNatGatewayOutcome(rsp);
        else
            return AssociateDirectConnectGatewayNatGatewayOutcome(o.GetError());
    }
    else
    {
        return AssociateDirectConnectGatewayNatGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateDirectConnectGatewayNatGatewayAsync(const AssociateDirectConnectGatewayNatGatewayRequest& request, const AssociateDirectConnectGatewayNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateDirectConnectGatewayNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AssociateDirectConnectGatewayNatGatewayOutcomeCallable VpcClient::AssociateDirectConnectGatewayNatGatewayCallable(const AssociateDirectConnectGatewayNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateDirectConnectGatewayNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->AssociateDirectConnectGatewayNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AssociateNatGatewayAddressOutcome VpcClient::AssociateNatGatewayAddress(const AssociateNatGatewayAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateNatGatewayAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateNatGatewayAddressResponse rsp = AssociateNatGatewayAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateNatGatewayAddressOutcome(rsp);
        else
            return AssociateNatGatewayAddressOutcome(o.GetError());
    }
    else
    {
        return AssociateNatGatewayAddressOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateNatGatewayAddressAsync(const AssociateNatGatewayAddressRequest& request, const AssociateNatGatewayAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateNatGatewayAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AssociateNatGatewayAddressOutcomeCallable VpcClient::AssociateNatGatewayAddressCallable(const AssociateNatGatewayAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateNatGatewayAddressOutcome()>>(
        [this, request]()
        {
            return this->AssociateNatGatewayAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AssociateNetworkAclSubnetsOutcome VpcClient::AssociateNetworkAclSubnets(const AssociateNetworkAclSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateNetworkAclSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateNetworkAclSubnetsResponse rsp = AssociateNetworkAclSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateNetworkAclSubnetsOutcome(rsp);
        else
            return AssociateNetworkAclSubnetsOutcome(o.GetError());
    }
    else
    {
        return AssociateNetworkAclSubnetsOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateNetworkAclSubnetsAsync(const AssociateNetworkAclSubnetsRequest& request, const AssociateNetworkAclSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateNetworkAclSubnets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AssociateNetworkAclSubnetsOutcomeCallable VpcClient::AssociateNetworkAclSubnetsCallable(const AssociateNetworkAclSubnetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateNetworkAclSubnetsOutcome()>>(
        [this, request]()
        {
            return this->AssociateNetworkAclSubnets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AssociateNetworkInterfaceSecurityGroupsOutcome VpcClient::AssociateNetworkInterfaceSecurityGroups(const AssociateNetworkInterfaceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateNetworkInterfaceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateNetworkInterfaceSecurityGroupsResponse rsp = AssociateNetworkInterfaceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateNetworkInterfaceSecurityGroupsOutcome(rsp);
        else
            return AssociateNetworkInterfaceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateNetworkInterfaceSecurityGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::AssociateNetworkInterfaceSecurityGroupsAsync(const AssociateNetworkInterfaceSecurityGroupsRequest& request, const AssociateNetworkInterfaceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateNetworkInterfaceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AssociateNetworkInterfaceSecurityGroupsOutcomeCallable VpcClient::AssociateNetworkInterfaceSecurityGroupsCallable(const AssociateNetworkInterfaceSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateNetworkInterfaceSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->AssociateNetworkInterfaceSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AttachCcnInstancesOutcome VpcClient::AttachCcnInstances(const AttachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AttachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachCcnInstancesResponse rsp = AttachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachCcnInstancesOutcome(rsp);
        else
            return AttachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return AttachCcnInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::AttachCcnInstancesAsync(const AttachCcnInstancesRequest& request, const AttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachCcnInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AttachCcnInstancesOutcomeCallable VpcClient::AttachCcnInstancesCallable(const AttachCcnInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachCcnInstancesOutcome()>>(
        [this, request]()
        {
            return this->AttachCcnInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AttachClassicLinkVpcOutcome VpcClient::AttachClassicLinkVpc(const AttachClassicLinkVpcRequest &request)
{
    auto outcome = MakeRequest(request, "AttachClassicLinkVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachClassicLinkVpcResponse rsp = AttachClassicLinkVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachClassicLinkVpcOutcome(rsp);
        else
            return AttachClassicLinkVpcOutcome(o.GetError());
    }
    else
    {
        return AttachClassicLinkVpcOutcome(outcome.GetError());
    }
}

void VpcClient::AttachClassicLinkVpcAsync(const AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachClassicLinkVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AttachClassicLinkVpcOutcomeCallable VpcClient::AttachClassicLinkVpcCallable(const AttachClassicLinkVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachClassicLinkVpcOutcome()>>(
        [this, request]()
        {
            return this->AttachClassicLinkVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AttachNetworkInterfaceOutcome VpcClient::AttachNetworkInterface(const AttachNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "AttachNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachNetworkInterfaceResponse rsp = AttachNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachNetworkInterfaceOutcome(rsp);
        else
            return AttachNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return AttachNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::AttachNetworkInterfaceAsync(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AttachNetworkInterfaceOutcomeCallable VpcClient::AttachNetworkInterfaceCallable(const AttachNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->AttachNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::AuditCrossBorderComplianceOutcome VpcClient::AuditCrossBorderCompliance(const AuditCrossBorderComplianceRequest &request)
{
    auto outcome = MakeRequest(request, "AuditCrossBorderCompliance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AuditCrossBorderComplianceResponse rsp = AuditCrossBorderComplianceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AuditCrossBorderComplianceOutcome(rsp);
        else
            return AuditCrossBorderComplianceOutcome(o.GetError());
    }
    else
    {
        return AuditCrossBorderComplianceOutcome(outcome.GetError());
    }
}

void VpcClient::AuditCrossBorderComplianceAsync(const AuditCrossBorderComplianceRequest& request, const AuditCrossBorderComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AuditCrossBorderCompliance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::AuditCrossBorderComplianceOutcomeCallable VpcClient::AuditCrossBorderComplianceCallable(const AuditCrossBorderComplianceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AuditCrossBorderComplianceOutcome()>>(
        [this, request]()
        {
            return this->AuditCrossBorderCompliance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CheckAssistantCidrOutcome VpcClient::CheckAssistantCidr(const CheckAssistantCidrRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAssistantCidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAssistantCidrResponse rsp = CheckAssistantCidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAssistantCidrOutcome(rsp);
        else
            return CheckAssistantCidrOutcome(o.GetError());
    }
    else
    {
        return CheckAssistantCidrOutcome(outcome.GetError());
    }
}

void VpcClient::CheckAssistantCidrAsync(const CheckAssistantCidrRequest& request, const CheckAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckAssistantCidr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CheckAssistantCidrOutcomeCallable VpcClient::CheckAssistantCidrCallable(const CheckAssistantCidrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckAssistantCidrOutcome()>>(
        [this, request]()
        {
            return this->CheckAssistantCidr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CheckDefaultSubnetOutcome VpcClient::CheckDefaultSubnet(const CheckDefaultSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDefaultSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDefaultSubnetResponse rsp = CheckDefaultSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDefaultSubnetOutcome(rsp);
        else
            return CheckDefaultSubnetOutcome(o.GetError());
    }
    else
    {
        return CheckDefaultSubnetOutcome(outcome.GetError());
    }
}

void VpcClient::CheckDefaultSubnetAsync(const CheckDefaultSubnetRequest& request, const CheckDefaultSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDefaultSubnet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CheckDefaultSubnetOutcomeCallable VpcClient::CheckDefaultSubnetCallable(const CheckDefaultSubnetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDefaultSubnetOutcome()>>(
        [this, request]()
        {
            return this->CheckDefaultSubnet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CheckNetDetectStateOutcome VpcClient::CheckNetDetectState(const CheckNetDetectStateRequest &request)
{
    auto outcome = MakeRequest(request, "CheckNetDetectState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckNetDetectStateResponse rsp = CheckNetDetectStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckNetDetectStateOutcome(rsp);
        else
            return CheckNetDetectStateOutcome(o.GetError());
    }
    else
    {
        return CheckNetDetectStateOutcome(outcome.GetError());
    }
}

void VpcClient::CheckNetDetectStateAsync(const CheckNetDetectStateRequest& request, const CheckNetDetectStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckNetDetectState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CheckNetDetectStateOutcomeCallable VpcClient::CheckNetDetectStateCallable(const CheckNetDetectStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckNetDetectStateOutcome()>>(
        [this, request]()
        {
            return this->CheckNetDetectState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateAddressTemplateOutcome VpcClient::CreateAddressTemplate(const CreateAddressTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAddressTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAddressTemplateResponse rsp = CreateAddressTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAddressTemplateOutcome(rsp);
        else
            return CreateAddressTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAddressTemplateOutcome(outcome.GetError());
    }
}

void VpcClient::CreateAddressTemplateAsync(const CreateAddressTemplateRequest& request, const CreateAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAddressTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateAddressTemplateOutcomeCallable VpcClient::CreateAddressTemplateCallable(const CreateAddressTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAddressTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAddressTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateAddressTemplateGroupOutcome VpcClient::CreateAddressTemplateGroup(const CreateAddressTemplateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAddressTemplateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAddressTemplateGroupResponse rsp = CreateAddressTemplateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAddressTemplateGroupOutcome(rsp);
        else
            return CreateAddressTemplateGroupOutcome(o.GetError());
    }
    else
    {
        return CreateAddressTemplateGroupOutcome(outcome.GetError());
    }
}

void VpcClient::CreateAddressTemplateGroupAsync(const CreateAddressTemplateGroupRequest& request, const CreateAddressTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAddressTemplateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateAddressTemplateGroupOutcomeCallable VpcClient::CreateAddressTemplateGroupCallable(const CreateAddressTemplateGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAddressTemplateGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateAddressTemplateGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateAndAttachNetworkInterfaceOutcome VpcClient::CreateAndAttachNetworkInterface(const CreateAndAttachNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndAttachNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndAttachNetworkInterfaceResponse rsp = CreateAndAttachNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndAttachNetworkInterfaceOutcome(rsp);
        else
            return CreateAndAttachNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return CreateAndAttachNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::CreateAndAttachNetworkInterfaceAsync(const CreateAndAttachNetworkInterfaceRequest& request, const CreateAndAttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndAttachNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateAndAttachNetworkInterfaceOutcomeCallable VpcClient::CreateAndAttachNetworkInterfaceCallable(const CreateAndAttachNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndAttachNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->CreateAndAttachNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateAssistantCidrOutcome VpcClient::CreateAssistantCidr(const CreateAssistantCidrRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssistantCidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssistantCidrResponse rsp = CreateAssistantCidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssistantCidrOutcome(rsp);
        else
            return CreateAssistantCidrOutcome(o.GetError());
    }
    else
    {
        return CreateAssistantCidrOutcome(outcome.GetError());
    }
}

void VpcClient::CreateAssistantCidrAsync(const CreateAssistantCidrRequest& request, const CreateAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAssistantCidr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateAssistantCidrOutcomeCallable VpcClient::CreateAssistantCidrCallable(const CreateAssistantCidrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAssistantCidrOutcome()>>(
        [this, request]()
        {
            return this->CreateAssistantCidr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateBandwidthPackageOutcome VpcClient::CreateBandwidthPackage(const CreateBandwidthPackageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBandwidthPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBandwidthPackageResponse rsp = CreateBandwidthPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBandwidthPackageOutcome(rsp);
        else
            return CreateBandwidthPackageOutcome(o.GetError());
    }
    else
    {
        return CreateBandwidthPackageOutcome(outcome.GetError());
    }
}

void VpcClient::CreateBandwidthPackageAsync(const CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBandwidthPackage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateBandwidthPackageOutcomeCallable VpcClient::CreateBandwidthPackageCallable(const CreateBandwidthPackageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBandwidthPackageOutcome()>>(
        [this, request]()
        {
            return this->CreateBandwidthPackage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateCcnOutcome VpcClient::CreateCcn(const CreateCcnRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCcn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCcnResponse rsp = CreateCcnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCcnOutcome(rsp);
        else
            return CreateCcnOutcome(o.GetError());
    }
    else
    {
        return CreateCcnOutcome(outcome.GetError());
    }
}

void VpcClient::CreateCcnAsync(const CreateCcnRequest& request, const CreateCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCcn(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateCcnOutcomeCallable VpcClient::CreateCcnCallable(const CreateCcnRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCcnOutcome()>>(
        [this, request]()
        {
            return this->CreateCcn(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateCustomerGatewayOutcome VpcClient::CreateCustomerGateway(const CreateCustomerGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomerGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomerGatewayResponse rsp = CreateCustomerGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomerGatewayOutcome(rsp);
        else
            return CreateCustomerGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateCustomerGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::CreateCustomerGatewayAsync(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomerGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateCustomerGatewayOutcomeCallable VpcClient::CreateCustomerGatewayCallable(const CreateCustomerGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomerGatewayOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomerGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateDefaultSecurityGroupOutcome VpcClient::CreateDefaultSecurityGroup(const CreateDefaultSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDefaultSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDefaultSecurityGroupResponse rsp = CreateDefaultSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDefaultSecurityGroupOutcome(rsp);
        else
            return CreateDefaultSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDefaultSecurityGroupOutcome(outcome.GetError());
    }
}

void VpcClient::CreateDefaultSecurityGroupAsync(const CreateDefaultSecurityGroupRequest& request, const CreateDefaultSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDefaultSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateDefaultSecurityGroupOutcomeCallable VpcClient::CreateDefaultSecurityGroupCallable(const CreateDefaultSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDefaultSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateDefaultSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateDefaultVpcOutcome VpcClient::CreateDefaultVpc(const CreateDefaultVpcRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDefaultVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDefaultVpcResponse rsp = CreateDefaultVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDefaultVpcOutcome(rsp);
        else
            return CreateDefaultVpcOutcome(o.GetError());
    }
    else
    {
        return CreateDefaultVpcOutcome(outcome.GetError());
    }
}

void VpcClient::CreateDefaultVpcAsync(const CreateDefaultVpcRequest& request, const CreateDefaultVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDefaultVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateDefaultVpcOutcomeCallable VpcClient::CreateDefaultVpcCallable(const CreateDefaultVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDefaultVpcOutcome()>>(
        [this, request]()
        {
            return this->CreateDefaultVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateDhcpIpOutcome VpcClient::CreateDhcpIp(const CreateDhcpIpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDhcpIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDhcpIpResponse rsp = CreateDhcpIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDhcpIpOutcome(rsp);
        else
            return CreateDhcpIpOutcome(o.GetError());
    }
    else
    {
        return CreateDhcpIpOutcome(outcome.GetError());
    }
}

void VpcClient::CreateDhcpIpAsync(const CreateDhcpIpRequest& request, const CreateDhcpIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDhcpIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateDhcpIpOutcomeCallable VpcClient::CreateDhcpIpCallable(const CreateDhcpIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDhcpIpOutcome()>>(
        [this, request]()
        {
            return this->CreateDhcpIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateDirectConnectGatewayOutcome VpcClient::CreateDirectConnectGateway(const CreateDirectConnectGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDirectConnectGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDirectConnectGatewayResponse rsp = CreateDirectConnectGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDirectConnectGatewayOutcome(rsp);
        else
            return CreateDirectConnectGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateDirectConnectGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::CreateDirectConnectGatewayAsync(const CreateDirectConnectGatewayRequest& request, const CreateDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDirectConnectGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateDirectConnectGatewayOutcomeCallable VpcClient::CreateDirectConnectGatewayCallable(const CreateDirectConnectGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDirectConnectGatewayOutcome()>>(
        [this, request]()
        {
            return this->CreateDirectConnectGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateDirectConnectGatewayCcnRoutesOutcome VpcClient::CreateDirectConnectGatewayCcnRoutes(const CreateDirectConnectGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDirectConnectGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDirectConnectGatewayCcnRoutesResponse rsp = CreateDirectConnectGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDirectConnectGatewayCcnRoutesOutcome(rsp);
        else
            return CreateDirectConnectGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return CreateDirectConnectGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateDirectConnectGatewayCcnRoutesAsync(const CreateDirectConnectGatewayCcnRoutesRequest& request, const CreateDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDirectConnectGatewayCcnRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateDirectConnectGatewayCcnRoutesOutcomeCallable VpcClient::CreateDirectConnectGatewayCcnRoutesCallable(const CreateDirectConnectGatewayCcnRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDirectConnectGatewayCcnRoutesOutcome()>>(
        [this, request]()
        {
            return this->CreateDirectConnectGatewayCcnRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateFlowLogOutcome VpcClient::CreateFlowLog(const CreateFlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowLogResponse rsp = CreateFlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowLogOutcome(rsp);
        else
            return CreateFlowLogOutcome(o.GetError());
    }
    else
    {
        return CreateFlowLogOutcome(outcome.GetError());
    }
}

void VpcClient::CreateFlowLogAsync(const CreateFlowLogRequest& request, const CreateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateFlowLogOutcomeCallable VpcClient::CreateFlowLogCallable(const CreateFlowLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowLogOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateHaVipOutcome VpcClient::CreateHaVip(const CreateHaVipRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHaVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHaVipResponse rsp = CreateHaVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHaVipOutcome(rsp);
        else
            return CreateHaVipOutcome(o.GetError());
    }
    else
    {
        return CreateHaVipOutcome(outcome.GetError());
    }
}

void VpcClient::CreateHaVipAsync(const CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHaVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateHaVipOutcomeCallable VpcClient::CreateHaVipCallable(const CreateHaVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHaVipOutcome()>>(
        [this, request]()
        {
            return this->CreateHaVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateIp6TranslatorsOutcome VpcClient::CreateIp6Translators(const CreateIp6TranslatorsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIp6Translators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIp6TranslatorsResponse rsp = CreateIp6TranslatorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIp6TranslatorsOutcome(rsp);
        else
            return CreateIp6TranslatorsOutcome(o.GetError());
    }
    else
    {
        return CreateIp6TranslatorsOutcome(outcome.GetError());
    }
}

void VpcClient::CreateIp6TranslatorsAsync(const CreateIp6TranslatorsRequest& request, const CreateIp6TranslatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIp6Translators(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateIp6TranslatorsOutcomeCallable VpcClient::CreateIp6TranslatorsCallable(const CreateIp6TranslatorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIp6TranslatorsOutcome()>>(
        [this, request]()
        {
            return this->CreateIp6Translators(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateNatGatewayOutcome VpcClient::CreateNatGateway(const CreateNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatGatewayResponse rsp = CreateNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatGatewayOutcome(rsp);
        else
            return CreateNatGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateNatGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateNatGatewayOutcomeCallable VpcClient::CreateNatGatewayCallable(const CreateNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->CreateNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome VpcClient::CreateNatGatewayDestinationIpPortTranslationNatRule(const CreateNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatGatewayDestinationIpPortTranslationNatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatGatewayDestinationIpPortTranslationNatRuleResponse rsp = CreateNatGatewayDestinationIpPortTranslationNatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome(rsp);
        else
            return CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome(o.GetError());
    }
    else
    {
        return CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNatGatewayDestinationIpPortTranslationNatRuleAsync(const CreateNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const CreateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNatGatewayDestinationIpPortTranslationNatRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable VpcClient::CreateNatGatewayDestinationIpPortTranslationNatRuleCallable(const CreateNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateNatGatewayDestinationIpPortTranslationNatRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateNetDetectOutcome VpcClient::CreateNetDetect(const CreateNetDetectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetDetectResponse rsp = CreateNetDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetDetectOutcome(rsp);
        else
            return CreateNetDetectOutcome(o.GetError());
    }
    else
    {
        return CreateNetDetectOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNetDetectAsync(const CreateNetDetectRequest& request, const CreateNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateNetDetectOutcomeCallable VpcClient::CreateNetDetectCallable(const CreateNetDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetDetectOutcome()>>(
        [this, request]()
        {
            return this->CreateNetDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateNetworkAclOutcome VpcClient::CreateNetworkAcl(const CreateNetworkAclRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetworkAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetworkAclResponse rsp = CreateNetworkAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetworkAclOutcome(rsp);
        else
            return CreateNetworkAclOutcome(o.GetError());
    }
    else
    {
        return CreateNetworkAclOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNetworkAclAsync(const CreateNetworkAclRequest& request, const CreateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetworkAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateNetworkAclOutcomeCallable VpcClient::CreateNetworkAclCallable(const CreateNetworkAclRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetworkAclOutcome()>>(
        [this, request]()
        {
            return this->CreateNetworkAcl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateNetworkInterfaceOutcome VpcClient::CreateNetworkInterface(const CreateNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetworkInterfaceResponse rsp = CreateNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetworkInterfaceOutcome(rsp);
        else
            return CreateNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return CreateNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::CreateNetworkInterfaceAsync(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateNetworkInterfaceOutcomeCallable VpcClient::CreateNetworkInterfaceCallable(const CreateNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->CreateNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateRouteTableOutcome VpcClient::CreateRouteTable(const CreateRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRouteTableResponse rsp = CreateRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRouteTableOutcome(rsp);
        else
            return CreateRouteTableOutcome(o.GetError());
    }
    else
    {
        return CreateRouteTableOutcome(outcome.GetError());
    }
}

void VpcClient::CreateRouteTableAsync(const CreateRouteTableRequest& request, const CreateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRouteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateRouteTableOutcomeCallable VpcClient::CreateRouteTableCallable(const CreateRouteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRouteTableOutcome()>>(
        [this, request]()
        {
            return this->CreateRouteTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateRoutesOutcome VpcClient::CreateRoutes(const CreateRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoutesResponse rsp = CreateRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoutesOutcome(rsp);
        else
            return CreateRoutesOutcome(o.GetError());
    }
    else
    {
        return CreateRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateRoutesAsync(const CreateRoutesRequest& request, const CreateRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateRoutesOutcomeCallable VpcClient::CreateRoutesCallable(const CreateRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoutesOutcome()>>(
        [this, request]()
        {
            return this->CreateRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateSecurityGroupOutcome VpcClient::CreateSecurityGroup(const CreateSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupResponse rsp = CreateSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupOutcome(rsp);
        else
            return CreateSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSecurityGroupAsync(const CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateSecurityGroupOutcomeCallable VpcClient::CreateSecurityGroupCallable(const CreateSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateSecurityGroupPoliciesOutcome VpcClient::CreateSecurityGroupPolicies(const CreateSecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupPoliciesResponse rsp = CreateSecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupPoliciesOutcome(rsp);
        else
            return CreateSecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSecurityGroupPoliciesAsync(const CreateSecurityGroupPoliciesRequest& request, const CreateSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityGroupPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateSecurityGroupPoliciesOutcomeCallable VpcClient::CreateSecurityGroupPoliciesCallable(const CreateSecurityGroupPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityGroupPoliciesOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityGroupPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateSecurityGroupWithPoliciesOutcome VpcClient::CreateSecurityGroupWithPolicies(const CreateSecurityGroupWithPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupWithPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupWithPoliciesResponse rsp = CreateSecurityGroupWithPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupWithPoliciesOutcome(rsp);
        else
            return CreateSecurityGroupWithPoliciesOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupWithPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSecurityGroupWithPoliciesAsync(const CreateSecurityGroupWithPoliciesRequest& request, const CreateSecurityGroupWithPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityGroupWithPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateSecurityGroupWithPoliciesOutcomeCallable VpcClient::CreateSecurityGroupWithPoliciesCallable(const CreateSecurityGroupWithPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityGroupWithPoliciesOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityGroupWithPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateServiceTemplateOutcome VpcClient::CreateServiceTemplate(const CreateServiceTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceTemplateResponse rsp = CreateServiceTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceTemplateOutcome(rsp);
        else
            return CreateServiceTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateServiceTemplateOutcome(outcome.GetError());
    }
}

void VpcClient::CreateServiceTemplateAsync(const CreateServiceTemplateRequest& request, const CreateServiceTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServiceTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateServiceTemplateOutcomeCallable VpcClient::CreateServiceTemplateCallable(const CreateServiceTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateServiceTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateServiceTemplateGroupOutcome VpcClient::CreateServiceTemplateGroup(const CreateServiceTemplateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceTemplateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceTemplateGroupResponse rsp = CreateServiceTemplateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceTemplateGroupOutcome(rsp);
        else
            return CreateServiceTemplateGroupOutcome(o.GetError());
    }
    else
    {
        return CreateServiceTemplateGroupOutcome(outcome.GetError());
    }
}

void VpcClient::CreateServiceTemplateGroupAsync(const CreateServiceTemplateGroupRequest& request, const CreateServiceTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServiceTemplateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateServiceTemplateGroupOutcomeCallable VpcClient::CreateServiceTemplateGroupCallable(const CreateServiceTemplateGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceTemplateGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateServiceTemplateGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateSubnetOutcome VpcClient::CreateSubnet(const CreateSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubnetResponse rsp = CreateSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubnetOutcome(rsp);
        else
            return CreateSubnetOutcome(o.GetError());
    }
    else
    {
        return CreateSubnetOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubnet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateSubnetOutcomeCallable VpcClient::CreateSubnetCallable(const CreateSubnetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubnetOutcome()>>(
        [this, request]()
        {
            return this->CreateSubnet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateSubnetsOutcome VpcClient::CreateSubnets(const CreateSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubnetsResponse rsp = CreateSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubnetsOutcome(rsp);
        else
            return CreateSubnetsOutcome(o.GetError());
    }
    else
    {
        return CreateSubnetsOutcome(outcome.GetError());
    }
}

void VpcClient::CreateSubnetsAsync(const CreateSubnetsRequest& request, const CreateSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubnets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateSubnetsOutcomeCallable VpcClient::CreateSubnetsCallable(const CreateSubnetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubnetsOutcome()>>(
        [this, request]()
        {
            return this->CreateSubnets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateVpcOutcome VpcClient::CreateVpc(const CreateVpcRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcResponse rsp = CreateVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcOutcome(rsp);
        else
            return CreateVpcOutcome(o.GetError());
    }
    else
    {
        return CreateVpcOutcome(outcome.GetError());
    }
}

void VpcClient::CreateVpcAsync(const CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateVpcOutcomeCallable VpcClient::CreateVpcCallable(const CreateVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVpcOutcome()>>(
        [this, request]()
        {
            return this->CreateVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateVpnConnectionOutcome VpcClient::CreateVpnConnection(const CreateVpnConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpnConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpnConnectionResponse rsp = CreateVpnConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpnConnectionOutcome(rsp);
        else
            return CreateVpnConnectionOutcome(o.GetError());
    }
    else
    {
        return CreateVpnConnectionOutcome(outcome.GetError());
    }
}

void VpcClient::CreateVpnConnectionAsync(const CreateVpnConnectionRequest& request, const CreateVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVpnConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateVpnConnectionOutcomeCallable VpcClient::CreateVpnConnectionCallable(const CreateVpnConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVpnConnectionOutcome()>>(
        [this, request]()
        {
            return this->CreateVpnConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::CreateVpnGatewayOutcome VpcClient::CreateVpnGateway(const CreateVpnGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpnGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpnGatewayResponse rsp = CreateVpnGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpnGatewayOutcome(rsp);
        else
            return CreateVpnGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateVpnGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::CreateVpnGatewayAsync(const CreateVpnGatewayRequest& request, const CreateVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVpnGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::CreateVpnGatewayOutcomeCallable VpcClient::CreateVpnGatewayCallable(const CreateVpnGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVpnGatewayOutcome()>>(
        [this, request]()
        {
            return this->CreateVpnGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteAddressTemplateOutcome VpcClient::DeleteAddressTemplate(const DeleteAddressTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddressTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddressTemplateResponse rsp = DeleteAddressTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddressTemplateOutcome(rsp);
        else
            return DeleteAddressTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAddressTemplateOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteAddressTemplateAsync(const DeleteAddressTemplateRequest& request, const DeleteAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAddressTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteAddressTemplateOutcomeCallable VpcClient::DeleteAddressTemplateCallable(const DeleteAddressTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAddressTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteAddressTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteAddressTemplateGroupOutcome VpcClient::DeleteAddressTemplateGroup(const DeleteAddressTemplateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddressTemplateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddressTemplateGroupResponse rsp = DeleteAddressTemplateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddressTemplateGroupOutcome(rsp);
        else
            return DeleteAddressTemplateGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteAddressTemplateGroupOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteAddressTemplateGroupAsync(const DeleteAddressTemplateGroupRequest& request, const DeleteAddressTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAddressTemplateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteAddressTemplateGroupOutcomeCallable VpcClient::DeleteAddressTemplateGroupCallable(const DeleteAddressTemplateGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAddressTemplateGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteAddressTemplateGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteAssistantCidrOutcome VpcClient::DeleteAssistantCidr(const DeleteAssistantCidrRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAssistantCidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAssistantCidrResponse rsp = DeleteAssistantCidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAssistantCidrOutcome(rsp);
        else
            return DeleteAssistantCidrOutcome(o.GetError());
    }
    else
    {
        return DeleteAssistantCidrOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteAssistantCidrAsync(const DeleteAssistantCidrRequest& request, const DeleteAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAssistantCidr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteAssistantCidrOutcomeCallable VpcClient::DeleteAssistantCidrCallable(const DeleteAssistantCidrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAssistantCidrOutcome()>>(
        [this, request]()
        {
            return this->DeleteAssistantCidr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteBandwidthPackageOutcome VpcClient::DeleteBandwidthPackage(const DeleteBandwidthPackageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBandwidthPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBandwidthPackageResponse rsp = DeleteBandwidthPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBandwidthPackageOutcome(rsp);
        else
            return DeleteBandwidthPackageOutcome(o.GetError());
    }
    else
    {
        return DeleteBandwidthPackageOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteBandwidthPackageAsync(const DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBandwidthPackage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteBandwidthPackageOutcomeCallable VpcClient::DeleteBandwidthPackageCallable(const DeleteBandwidthPackageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBandwidthPackageOutcome()>>(
        [this, request]()
        {
            return this->DeleteBandwidthPackage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteCcnOutcome VpcClient::DeleteCcn(const DeleteCcnRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCcn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCcnResponse rsp = DeleteCcnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCcnOutcome(rsp);
        else
            return DeleteCcnOutcome(o.GetError());
    }
    else
    {
        return DeleteCcnOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteCcnAsync(const DeleteCcnRequest& request, const DeleteCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCcn(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteCcnOutcomeCallable VpcClient::DeleteCcnCallable(const DeleteCcnRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCcnOutcome()>>(
        [this, request]()
        {
            return this->DeleteCcn(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteCustomerGatewayOutcome VpcClient::DeleteCustomerGateway(const DeleteCustomerGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomerGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomerGatewayResponse rsp = DeleteCustomerGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomerGatewayOutcome(rsp);
        else
            return DeleteCustomerGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomerGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteCustomerGatewayAsync(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomerGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteCustomerGatewayOutcomeCallable VpcClient::DeleteCustomerGatewayCallable(const DeleteCustomerGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomerGatewayOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomerGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteDhcpIpOutcome VpcClient::DeleteDhcpIp(const DeleteDhcpIpRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDhcpIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDhcpIpResponse rsp = DeleteDhcpIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDhcpIpOutcome(rsp);
        else
            return DeleteDhcpIpOutcome(o.GetError());
    }
    else
    {
        return DeleteDhcpIpOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteDhcpIpAsync(const DeleteDhcpIpRequest& request, const DeleteDhcpIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDhcpIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteDhcpIpOutcomeCallable VpcClient::DeleteDhcpIpCallable(const DeleteDhcpIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDhcpIpOutcome()>>(
        [this, request]()
        {
            return this->DeleteDhcpIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteDirectConnectGatewayOutcome VpcClient::DeleteDirectConnectGateway(const DeleteDirectConnectGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDirectConnectGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDirectConnectGatewayResponse rsp = DeleteDirectConnectGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDirectConnectGatewayOutcome(rsp);
        else
            return DeleteDirectConnectGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteDirectConnectGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteDirectConnectGatewayAsync(const DeleteDirectConnectGatewayRequest& request, const DeleteDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDirectConnectGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteDirectConnectGatewayOutcomeCallable VpcClient::DeleteDirectConnectGatewayCallable(const DeleteDirectConnectGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDirectConnectGatewayOutcome()>>(
        [this, request]()
        {
            return this->DeleteDirectConnectGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteDirectConnectGatewayCcnRoutesOutcome VpcClient::DeleteDirectConnectGatewayCcnRoutes(const DeleteDirectConnectGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDirectConnectGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDirectConnectGatewayCcnRoutesResponse rsp = DeleteDirectConnectGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDirectConnectGatewayCcnRoutesOutcome(rsp);
        else
            return DeleteDirectConnectGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return DeleteDirectConnectGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteDirectConnectGatewayCcnRoutesAsync(const DeleteDirectConnectGatewayCcnRoutesRequest& request, const DeleteDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDirectConnectGatewayCcnRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteDirectConnectGatewayCcnRoutesOutcomeCallable VpcClient::DeleteDirectConnectGatewayCcnRoutesCallable(const DeleteDirectConnectGatewayCcnRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDirectConnectGatewayCcnRoutesOutcome()>>(
        [this, request]()
        {
            return this->DeleteDirectConnectGatewayCcnRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteFlowLogOutcome VpcClient::DeleteFlowLog(const DeleteFlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFlowLogResponse rsp = DeleteFlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFlowLogOutcome(rsp);
        else
            return DeleteFlowLogOutcome(o.GetError());
    }
    else
    {
        return DeleteFlowLogOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteFlowLogAsync(const DeleteFlowLogRequest& request, const DeleteFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFlowLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteFlowLogOutcomeCallable VpcClient::DeleteFlowLogCallable(const DeleteFlowLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFlowLogOutcome()>>(
        [this, request]()
        {
            return this->DeleteFlowLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteHaVipOutcome VpcClient::DeleteHaVip(const DeleteHaVipRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHaVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHaVipResponse rsp = DeleteHaVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHaVipOutcome(rsp);
        else
            return DeleteHaVipOutcome(o.GetError());
    }
    else
    {
        return DeleteHaVipOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteHaVipAsync(const DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteHaVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteHaVipOutcomeCallable VpcClient::DeleteHaVipCallable(const DeleteHaVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteHaVipOutcome()>>(
        [this, request]()
        {
            return this->DeleteHaVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteIp6TranslatorsOutcome VpcClient::DeleteIp6Translators(const DeleteIp6TranslatorsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIp6Translators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIp6TranslatorsResponse rsp = DeleteIp6TranslatorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIp6TranslatorsOutcome(rsp);
        else
            return DeleteIp6TranslatorsOutcome(o.GetError());
    }
    else
    {
        return DeleteIp6TranslatorsOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteIp6TranslatorsAsync(const DeleteIp6TranslatorsRequest& request, const DeleteIp6TranslatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIp6Translators(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteIp6TranslatorsOutcomeCallable VpcClient::DeleteIp6TranslatorsCallable(const DeleteIp6TranslatorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIp6TranslatorsOutcome()>>(
        [this, request]()
        {
            return this->DeleteIp6Translators(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteNatGatewayOutcome VpcClient::DeleteNatGateway(const DeleteNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNatGatewayResponse rsp = DeleteNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNatGatewayOutcome(rsp);
        else
            return DeleteNatGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteNatGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteNatGatewayOutcomeCallable VpcClient::DeleteNatGatewayCallable(const DeleteNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->DeleteNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome VpcClient::DeleteNatGatewayDestinationIpPortTranslationNatRule(const DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNatGatewayDestinationIpPortTranslationNatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse rsp = DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome(rsp);
        else
            return DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNatGatewayDestinationIpPortTranslationNatRuleAsync(const DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const DeleteNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNatGatewayDestinationIpPortTranslationNatRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable VpcClient::DeleteNatGatewayDestinationIpPortTranslationNatRuleCallable(const DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteNatGatewayDestinationIpPortTranslationNatRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteNetDetectOutcome VpcClient::DeleteNetDetect(const DeleteNetDetectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetDetectResponse rsp = DeleteNetDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetDetectOutcome(rsp);
        else
            return DeleteNetDetectOutcome(o.GetError());
    }
    else
    {
        return DeleteNetDetectOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNetDetectAsync(const DeleteNetDetectRequest& request, const DeleteNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNetDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteNetDetectOutcomeCallable VpcClient::DeleteNetDetectCallable(const DeleteNetDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNetDetectOutcome()>>(
        [this, request]()
        {
            return this->DeleteNetDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteNetworkAclOutcome VpcClient::DeleteNetworkAcl(const DeleteNetworkAclRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetworkAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetworkAclResponse rsp = DeleteNetworkAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetworkAclOutcome(rsp);
        else
            return DeleteNetworkAclOutcome(o.GetError());
    }
    else
    {
        return DeleteNetworkAclOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNetworkAclAsync(const DeleteNetworkAclRequest& request, const DeleteNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNetworkAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteNetworkAclOutcomeCallable VpcClient::DeleteNetworkAclCallable(const DeleteNetworkAclRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNetworkAclOutcome()>>(
        [this, request]()
        {
            return this->DeleteNetworkAcl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteNetworkInterfaceOutcome VpcClient::DeleteNetworkInterface(const DeleteNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetworkInterfaceResponse rsp = DeleteNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetworkInterfaceOutcome(rsp);
        else
            return DeleteNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return DeleteNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteNetworkInterfaceAsync(const DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteNetworkInterfaceOutcomeCallable VpcClient::DeleteNetworkInterfaceCallable(const DeleteNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteRouteTableOutcome VpcClient::DeleteRouteTable(const DeleteRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRouteTableResponse rsp = DeleteRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRouteTableOutcome(rsp);
        else
            return DeleteRouteTableOutcome(o.GetError());
    }
    else
    {
        return DeleteRouteTableOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteRouteTableAsync(const DeleteRouteTableRequest& request, const DeleteRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRouteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteRouteTableOutcomeCallable VpcClient::DeleteRouteTableCallable(const DeleteRouteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRouteTableOutcome()>>(
        [this, request]()
        {
            return this->DeleteRouteTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteRoutesOutcome VpcClient::DeleteRoutes(const DeleteRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoutesResponse rsp = DeleteRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoutesOutcome(rsp);
        else
            return DeleteRoutesOutcome(o.GetError());
    }
    else
    {
        return DeleteRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteRoutesAsync(const DeleteRoutesRequest& request, const DeleteRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteRoutesOutcomeCallable VpcClient::DeleteRoutesCallable(const DeleteRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoutesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteSecurityGroupOutcome VpcClient::DeleteSecurityGroup(const DeleteSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupResponse rsp = DeleteSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupOutcome(rsp);
        else
            return DeleteSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteSecurityGroupAsync(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteSecurityGroupOutcomeCallable VpcClient::DeleteSecurityGroupCallable(const DeleteSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteSecurityGroupPoliciesOutcome VpcClient::DeleteSecurityGroupPolicies(const DeleteSecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupPoliciesResponse rsp = DeleteSecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupPoliciesOutcome(rsp);
        else
            return DeleteSecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteSecurityGroupPoliciesAsync(const DeleteSecurityGroupPoliciesRequest& request, const DeleteSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityGroupPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteSecurityGroupPoliciesOutcomeCallable VpcClient::DeleteSecurityGroupPoliciesCallable(const DeleteSecurityGroupPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityGroupPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityGroupPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteServiceTemplateOutcome VpcClient::DeleteServiceTemplate(const DeleteServiceTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceTemplateResponse rsp = DeleteServiceTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceTemplateOutcome(rsp);
        else
            return DeleteServiceTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceTemplateOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteServiceTemplateAsync(const DeleteServiceTemplateRequest& request, const DeleteServiceTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServiceTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteServiceTemplateOutcomeCallable VpcClient::DeleteServiceTemplateCallable(const DeleteServiceTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteServiceTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteServiceTemplateGroupOutcome VpcClient::DeleteServiceTemplateGroup(const DeleteServiceTemplateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceTemplateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceTemplateGroupResponse rsp = DeleteServiceTemplateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceTemplateGroupOutcome(rsp);
        else
            return DeleteServiceTemplateGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceTemplateGroupOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteServiceTemplateGroupAsync(const DeleteServiceTemplateGroupRequest& request, const DeleteServiceTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServiceTemplateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteServiceTemplateGroupOutcomeCallable VpcClient::DeleteServiceTemplateGroupCallable(const DeleteServiceTemplateGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceTemplateGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteServiceTemplateGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteSubnetOutcome VpcClient::DeleteSubnet(const DeleteSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSubnetResponse rsp = DeleteSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSubnetOutcome(rsp);
        else
            return DeleteSubnetOutcome(o.GetError());
    }
    else
    {
        return DeleteSubnetOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSubnet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteSubnetOutcomeCallable VpcClient::DeleteSubnetCallable(const DeleteSubnetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSubnetOutcome()>>(
        [this, request]()
        {
            return this->DeleteSubnet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteVpcOutcome VpcClient::DeleteVpc(const DeleteVpcRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcResponse rsp = DeleteVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcOutcome(rsp);
        else
            return DeleteVpcOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteVpcOutcomeCallable VpcClient::DeleteVpcCallable(const DeleteVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVpcOutcome()>>(
        [this, request]()
        {
            return this->DeleteVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteVpnConnectionOutcome VpcClient::DeleteVpnConnection(const DeleteVpnConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpnConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpnConnectionResponse rsp = DeleteVpnConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpnConnectionOutcome(rsp);
        else
            return DeleteVpnConnectionOutcome(o.GetError());
    }
    else
    {
        return DeleteVpnConnectionOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteVpnConnectionAsync(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVpnConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteVpnConnectionOutcomeCallable VpcClient::DeleteVpnConnectionCallable(const DeleteVpnConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVpnConnectionOutcome()>>(
        [this, request]()
        {
            return this->DeleteVpnConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DeleteVpnGatewayOutcome VpcClient::DeleteVpnGateway(const DeleteVpnGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpnGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpnGatewayResponse rsp = DeleteVpnGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpnGatewayOutcome(rsp);
        else
            return DeleteVpnGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteVpnGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DeleteVpnGatewayAsync(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVpnGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DeleteVpnGatewayOutcomeCallable VpcClient::DeleteVpnGatewayCallable(const DeleteVpnGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVpnGatewayOutcome()>>(
        [this, request]()
        {
            return this->DeleteVpnGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeAccountAttributesOutcome VpcClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountAttributesResponse rsp = DescribeAccountAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountAttributesOutcome(rsp);
        else
            return DescribeAccountAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountAttributesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeAccountAttributesOutcomeCallable VpcClient::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountAttributesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeAddressQuotaOutcome VpcClient::DescribeAddressQuota(const DescribeAddressQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressQuotaResponse rsp = DescribeAddressQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressQuotaOutcome(rsp);
        else
            return DescribeAddressQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressQuotaOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAddressQuotaAsync(const DescribeAddressQuotaRequest& request, const DescribeAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddressQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeAddressQuotaOutcomeCallable VpcClient::DescribeAddressQuotaCallable(const DescribeAddressQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddressQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddressQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeAddressTemplateGroupsOutcome VpcClient::DescribeAddressTemplateGroups(const DescribeAddressTemplateGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressTemplateGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressTemplateGroupsResponse rsp = DescribeAddressTemplateGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressTemplateGroupsOutcome(rsp);
        else
            return DescribeAddressTemplateGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressTemplateGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAddressTemplateGroupsAsync(const DescribeAddressTemplateGroupsRequest& request, const DescribeAddressTemplateGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddressTemplateGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeAddressTemplateGroupsOutcomeCallable VpcClient::DescribeAddressTemplateGroupsCallable(const DescribeAddressTemplateGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddressTemplateGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddressTemplateGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeAddressTemplatesOutcome VpcClient::DescribeAddressTemplates(const DescribeAddressTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressTemplatesResponse rsp = DescribeAddressTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressTemplatesOutcome(rsp);
        else
            return DescribeAddressTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressTemplatesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAddressTemplatesAsync(const DescribeAddressTemplatesRequest& request, const DescribeAddressTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddressTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeAddressTemplatesOutcomeCallable VpcClient::DescribeAddressTemplatesCallable(const DescribeAddressTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddressTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddressTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeAddressesOutcome VpcClient::DescribeAddresses(const DescribeAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressesResponse rsp = DescribeAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressesOutcome(rsp);
        else
            return DescribeAddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAddressesAsync(const DescribeAddressesRequest& request, const DescribeAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeAddressesOutcomeCallable VpcClient::DescribeAddressesCallable(const DescribeAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddressesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeAssistantCidrOutcome VpcClient::DescribeAssistantCidr(const DescribeAssistantCidrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssistantCidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssistantCidrResponse rsp = DescribeAssistantCidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssistantCidrOutcome(rsp);
        else
            return DescribeAssistantCidrOutcome(o.GetError());
    }
    else
    {
        return DescribeAssistantCidrOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeAssistantCidrAsync(const DescribeAssistantCidrRequest& request, const DescribeAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssistantCidr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeAssistantCidrOutcomeCallable VpcClient::DescribeAssistantCidrCallable(const DescribeAssistantCidrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssistantCidrOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssistantCidr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeBandwidthPackageBillUsageOutcome VpcClient::DescribeBandwidthPackageBillUsage(const DescribeBandwidthPackageBillUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBandwidthPackageBillUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBandwidthPackageBillUsageResponse rsp = DescribeBandwidthPackageBillUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBandwidthPackageBillUsageOutcome(rsp);
        else
            return DescribeBandwidthPackageBillUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeBandwidthPackageBillUsageOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeBandwidthPackageBillUsageAsync(const DescribeBandwidthPackageBillUsageRequest& request, const DescribeBandwidthPackageBillUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBandwidthPackageBillUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeBandwidthPackageBillUsageOutcomeCallable VpcClient::DescribeBandwidthPackageBillUsageCallable(const DescribeBandwidthPackageBillUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBandwidthPackageBillUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeBandwidthPackageBillUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeBandwidthPackageQuotaOutcome VpcClient::DescribeBandwidthPackageQuota(const DescribeBandwidthPackageQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBandwidthPackageQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBandwidthPackageQuotaResponse rsp = DescribeBandwidthPackageQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBandwidthPackageQuotaOutcome(rsp);
        else
            return DescribeBandwidthPackageQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeBandwidthPackageQuotaOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeBandwidthPackageQuotaAsync(const DescribeBandwidthPackageQuotaRequest& request, const DescribeBandwidthPackageQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBandwidthPackageQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeBandwidthPackageQuotaOutcomeCallable VpcClient::DescribeBandwidthPackageQuotaCallable(const DescribeBandwidthPackageQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBandwidthPackageQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeBandwidthPackageQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeBandwidthPackageResourcesOutcome VpcClient::DescribeBandwidthPackageResources(const DescribeBandwidthPackageResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBandwidthPackageResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBandwidthPackageResourcesResponse rsp = DescribeBandwidthPackageResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBandwidthPackageResourcesOutcome(rsp);
        else
            return DescribeBandwidthPackageResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeBandwidthPackageResourcesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeBandwidthPackageResourcesAsync(const DescribeBandwidthPackageResourcesRequest& request, const DescribeBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBandwidthPackageResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeBandwidthPackageResourcesOutcomeCallable VpcClient::DescribeBandwidthPackageResourcesCallable(const DescribeBandwidthPackageResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBandwidthPackageResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBandwidthPackageResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeBandwidthPackagesOutcome VpcClient::DescribeBandwidthPackages(const DescribeBandwidthPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBandwidthPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBandwidthPackagesResponse rsp = DescribeBandwidthPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBandwidthPackagesOutcome(rsp);
        else
            return DescribeBandwidthPackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeBandwidthPackagesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeBandwidthPackagesAsync(const DescribeBandwidthPackagesRequest& request, const DescribeBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBandwidthPackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeBandwidthPackagesOutcomeCallable VpcClient::DescribeBandwidthPackagesCallable(const DescribeBandwidthPackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBandwidthPackagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBandwidthPackages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeCcnAttachedInstancesOutcome VpcClient::DescribeCcnAttachedInstances(const DescribeCcnAttachedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcnAttachedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnAttachedInstancesResponse rsp = DescribeCcnAttachedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnAttachedInstancesOutcome(rsp);
        else
            return DescribeCcnAttachedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnAttachedInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCcnAttachedInstancesAsync(const DescribeCcnAttachedInstancesRequest& request, const DescribeCcnAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCcnAttachedInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeCcnAttachedInstancesOutcomeCallable VpcClient::DescribeCcnAttachedInstancesCallable(const DescribeCcnAttachedInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCcnAttachedInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCcnAttachedInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeCcnRegionBandwidthLimitsOutcome VpcClient::DescribeCcnRegionBandwidthLimits(const DescribeCcnRegionBandwidthLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcnRegionBandwidthLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnRegionBandwidthLimitsResponse rsp = DescribeCcnRegionBandwidthLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnRegionBandwidthLimitsOutcome(rsp);
        else
            return DescribeCcnRegionBandwidthLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnRegionBandwidthLimitsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCcnRegionBandwidthLimitsAsync(const DescribeCcnRegionBandwidthLimitsRequest& request, const DescribeCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCcnRegionBandwidthLimits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeCcnRegionBandwidthLimitsOutcomeCallable VpcClient::DescribeCcnRegionBandwidthLimitsCallable(const DescribeCcnRegionBandwidthLimitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCcnRegionBandwidthLimitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCcnRegionBandwidthLimits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeCcnRoutesOutcome VpcClient::DescribeCcnRoutes(const DescribeCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnRoutesResponse rsp = DescribeCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnRoutesOutcome(rsp);
        else
            return DescribeCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCcnRoutesAsync(const DescribeCcnRoutesRequest& request, const DescribeCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCcnRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeCcnRoutesOutcomeCallable VpcClient::DescribeCcnRoutesCallable(const DescribeCcnRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCcnRoutesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCcnRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeCcnsOutcome VpcClient::DescribeCcns(const DescribeCcnsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnsResponse rsp = DescribeCcnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnsOutcome(rsp);
        else
            return DescribeCcnsOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCcnsAsync(const DescribeCcnsRequest& request, const DescribeCcnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCcns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeCcnsOutcomeCallable VpcClient::DescribeCcnsCallable(const DescribeCcnsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCcnsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCcns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeClassicLinkInstancesOutcome VpcClient::DescribeClassicLinkInstances(const DescribeClassicLinkInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicLinkInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicLinkInstancesResponse rsp = DescribeClassicLinkInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicLinkInstancesOutcome(rsp);
        else
            return DescribeClassicLinkInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicLinkInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeClassicLinkInstancesAsync(const DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClassicLinkInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeClassicLinkInstancesOutcomeCallable VpcClient::DescribeClassicLinkInstancesCallable(const DescribeClassicLinkInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClassicLinkInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClassicLinkInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeCrossBorderComplianceOutcome VpcClient::DescribeCrossBorderCompliance(const DescribeCrossBorderComplianceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossBorderCompliance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossBorderComplianceResponse rsp = DescribeCrossBorderComplianceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossBorderComplianceOutcome(rsp);
        else
            return DescribeCrossBorderComplianceOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossBorderComplianceOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCrossBorderComplianceAsync(const DescribeCrossBorderComplianceRequest& request, const DescribeCrossBorderComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCrossBorderCompliance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeCrossBorderComplianceOutcomeCallable VpcClient::DescribeCrossBorderComplianceCallable(const DescribeCrossBorderComplianceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCrossBorderComplianceOutcome()>>(
        [this, request]()
        {
            return this->DescribeCrossBorderCompliance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeCustomerGatewayVendorsOutcome VpcClient::DescribeCustomerGatewayVendors(const DescribeCustomerGatewayVendorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerGatewayVendors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerGatewayVendorsResponse rsp = DescribeCustomerGatewayVendorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerGatewayVendorsOutcome(rsp);
        else
            return DescribeCustomerGatewayVendorsOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerGatewayVendorsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCustomerGatewayVendorsAsync(const DescribeCustomerGatewayVendorsRequest& request, const DescribeCustomerGatewayVendorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomerGatewayVendors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeCustomerGatewayVendorsOutcomeCallable VpcClient::DescribeCustomerGatewayVendorsCallable(const DescribeCustomerGatewayVendorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerGatewayVendorsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomerGatewayVendors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeCustomerGatewaysOutcome VpcClient::DescribeCustomerGateways(const DescribeCustomerGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerGatewaysResponse rsp = DescribeCustomerGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerGatewaysOutcome(rsp);
        else
            return DescribeCustomerGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerGatewaysOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeCustomerGatewaysAsync(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomerGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeCustomerGatewaysOutcomeCallable VpcClient::DescribeCustomerGatewaysCallable(const DescribeCustomerGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomerGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeDhcpIpsOutcome VpcClient::DescribeDhcpIps(const DescribeDhcpIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDhcpIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDhcpIpsResponse rsp = DescribeDhcpIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDhcpIpsOutcome(rsp);
        else
            return DescribeDhcpIpsOutcome(o.GetError());
    }
    else
    {
        return DescribeDhcpIpsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeDhcpIpsAsync(const DescribeDhcpIpsRequest& request, const DescribeDhcpIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDhcpIps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeDhcpIpsOutcomeCallable VpcClient::DescribeDhcpIpsCallable(const DescribeDhcpIpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDhcpIpsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDhcpIps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeDirectConnectGatewayCcnRoutesOutcome VpcClient::DescribeDirectConnectGatewayCcnRoutes(const DescribeDirectConnectGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDirectConnectGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDirectConnectGatewayCcnRoutesResponse rsp = DescribeDirectConnectGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDirectConnectGatewayCcnRoutesOutcome(rsp);
        else
            return DescribeDirectConnectGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeDirectConnectGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeDirectConnectGatewayCcnRoutesAsync(const DescribeDirectConnectGatewayCcnRoutesRequest& request, const DescribeDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDirectConnectGatewayCcnRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeDirectConnectGatewayCcnRoutesOutcomeCallable VpcClient::DescribeDirectConnectGatewayCcnRoutesCallable(const DescribeDirectConnectGatewayCcnRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDirectConnectGatewayCcnRoutesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDirectConnectGatewayCcnRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeDirectConnectGatewaysOutcome VpcClient::DescribeDirectConnectGateways(const DescribeDirectConnectGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDirectConnectGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDirectConnectGatewaysResponse rsp = DescribeDirectConnectGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDirectConnectGatewaysOutcome(rsp);
        else
            return DescribeDirectConnectGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeDirectConnectGatewaysOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeDirectConnectGatewaysAsync(const DescribeDirectConnectGatewaysRequest& request, const DescribeDirectConnectGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDirectConnectGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeDirectConnectGatewaysOutcomeCallable VpcClient::DescribeDirectConnectGatewaysCallable(const DescribeDirectConnectGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDirectConnectGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeDirectConnectGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeFlowLogOutcome VpcClient::DescribeFlowLog(const DescribeFlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowLogResponse rsp = DescribeFlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowLogOutcome(rsp);
        else
            return DescribeFlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowLogOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeFlowLogAsync(const DescribeFlowLogRequest& request, const DescribeFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeFlowLogOutcomeCallable VpcClient::DescribeFlowLogCallable(const DescribeFlowLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeFlowLogsOutcome VpcClient::DescribeFlowLogs(const DescribeFlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowLogsResponse rsp = DescribeFlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowLogsOutcome(rsp);
        else
            return DescribeFlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowLogsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeFlowLogsAsync(const DescribeFlowLogsRequest& request, const DescribeFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeFlowLogsOutcomeCallable VpcClient::DescribeFlowLogsCallable(const DescribeFlowLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeGatewayFlowMonitorDetailOutcome VpcClient::DescribeGatewayFlowMonitorDetail(const DescribeGatewayFlowMonitorDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayFlowMonitorDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayFlowMonitorDetailResponse rsp = DescribeGatewayFlowMonitorDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayFlowMonitorDetailOutcome(rsp);
        else
            return DescribeGatewayFlowMonitorDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayFlowMonitorDetailOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeGatewayFlowMonitorDetailAsync(const DescribeGatewayFlowMonitorDetailRequest& request, const DescribeGatewayFlowMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayFlowMonitorDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeGatewayFlowMonitorDetailOutcomeCallable VpcClient::DescribeGatewayFlowMonitorDetailCallable(const DescribeGatewayFlowMonitorDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayFlowMonitorDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayFlowMonitorDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeGatewayFlowQosOutcome VpcClient::DescribeGatewayFlowQos(const DescribeGatewayFlowQosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayFlowQos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayFlowQosResponse rsp = DescribeGatewayFlowQosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayFlowQosOutcome(rsp);
        else
            return DescribeGatewayFlowQosOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayFlowQosOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeGatewayFlowQosAsync(const DescribeGatewayFlowQosRequest& request, const DescribeGatewayFlowQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayFlowQos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeGatewayFlowQosOutcomeCallable VpcClient::DescribeGatewayFlowQosCallable(const DescribeGatewayFlowQosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayFlowQosOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayFlowQos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeHaVipsOutcome VpcClient::DescribeHaVips(const DescribeHaVipsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHaVips");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHaVipsResponse rsp = DescribeHaVipsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHaVipsOutcome(rsp);
        else
            return DescribeHaVipsOutcome(o.GetError());
    }
    else
    {
        return DescribeHaVipsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeHaVipsAsync(const DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHaVips(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeHaVipsOutcomeCallable VpcClient::DescribeHaVipsCallable(const DescribeHaVipsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHaVipsOutcome()>>(
        [this, request]()
        {
            return this->DescribeHaVips(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeIp6AddressesOutcome VpcClient::DescribeIp6Addresses(const DescribeIp6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIp6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIp6AddressesResponse rsp = DescribeIp6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIp6AddressesOutcome(rsp);
        else
            return DescribeIp6AddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeIp6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeIp6AddressesAsync(const DescribeIp6AddressesRequest& request, const DescribeIp6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIp6Addresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeIp6AddressesOutcomeCallable VpcClient::DescribeIp6AddressesCallable(const DescribeIp6AddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIp6AddressesOutcome()>>(
        [this, request]()
        {
            return this->DescribeIp6Addresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeIp6TranslatorQuotaOutcome VpcClient::DescribeIp6TranslatorQuota(const DescribeIp6TranslatorQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIp6TranslatorQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIp6TranslatorQuotaResponse rsp = DescribeIp6TranslatorQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIp6TranslatorQuotaOutcome(rsp);
        else
            return DescribeIp6TranslatorQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeIp6TranslatorQuotaOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeIp6TranslatorQuotaAsync(const DescribeIp6TranslatorQuotaRequest& request, const DescribeIp6TranslatorQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIp6TranslatorQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeIp6TranslatorQuotaOutcomeCallable VpcClient::DescribeIp6TranslatorQuotaCallable(const DescribeIp6TranslatorQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIp6TranslatorQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeIp6TranslatorQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeIp6TranslatorsOutcome VpcClient::DescribeIp6Translators(const DescribeIp6TranslatorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIp6Translators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIp6TranslatorsResponse rsp = DescribeIp6TranslatorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIp6TranslatorsOutcome(rsp);
        else
            return DescribeIp6TranslatorsOutcome(o.GetError());
    }
    else
    {
        return DescribeIp6TranslatorsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeIp6TranslatorsAsync(const DescribeIp6TranslatorsRequest& request, const DescribeIp6TranslatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIp6Translators(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeIp6TranslatorsOutcomeCallable VpcClient::DescribeIp6TranslatorsCallable(const DescribeIp6TranslatorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIp6TranslatorsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIp6Translators(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeIpGeolocationDatabaseUrlOutcome VpcClient::DescribeIpGeolocationDatabaseUrl(const DescribeIpGeolocationDatabaseUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpGeolocationDatabaseUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpGeolocationDatabaseUrlResponse rsp = DescribeIpGeolocationDatabaseUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpGeolocationDatabaseUrlOutcome(rsp);
        else
            return DescribeIpGeolocationDatabaseUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeIpGeolocationDatabaseUrlOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeIpGeolocationDatabaseUrlAsync(const DescribeIpGeolocationDatabaseUrlRequest& request, const DescribeIpGeolocationDatabaseUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpGeolocationDatabaseUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeIpGeolocationDatabaseUrlOutcomeCallable VpcClient::DescribeIpGeolocationDatabaseUrlCallable(const DescribeIpGeolocationDatabaseUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpGeolocationDatabaseUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpGeolocationDatabaseUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeIpGeolocationInfosOutcome VpcClient::DescribeIpGeolocationInfos(const DescribeIpGeolocationInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpGeolocationInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpGeolocationInfosResponse rsp = DescribeIpGeolocationInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpGeolocationInfosOutcome(rsp);
        else
            return DescribeIpGeolocationInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeIpGeolocationInfosOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeIpGeolocationInfosAsync(const DescribeIpGeolocationInfosRequest& request, const DescribeIpGeolocationInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpGeolocationInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeIpGeolocationInfosOutcomeCallable VpcClient::DescribeIpGeolocationInfosCallable(const DescribeIpGeolocationInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpGeolocationInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpGeolocationInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome VpcClient::DescribeNatGatewayDestinationIpPortTranslationNatRules(const DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatGatewayDestinationIpPortTranslationNatRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse rsp = DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome(rsp);
        else
            return DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNatGatewayDestinationIpPortTranslationNatRulesAsync(const DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest& request, const DescribeNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatGatewayDestinationIpPortTranslationNatRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable VpcClient::DescribeNatGatewayDestinationIpPortTranslationNatRulesCallable(const DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatGatewayDestinationIpPortTranslationNatRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeNatGatewaysOutcome VpcClient::DescribeNatGateways(const DescribeNatGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatGatewaysResponse rsp = DescribeNatGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatGatewaysOutcome(rsp);
        else
            return DescribeNatGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeNatGatewaysOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeNatGatewaysOutcomeCallable VpcClient::DescribeNatGatewaysCallable(const DescribeNatGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeNetDetectStatesOutcome VpcClient::DescribeNetDetectStates(const DescribeNetDetectStatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetDetectStates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetDetectStatesResponse rsp = DescribeNetDetectStatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetDetectStatesOutcome(rsp);
        else
            return DescribeNetDetectStatesOutcome(o.GetError());
    }
    else
    {
        return DescribeNetDetectStatesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetDetectStatesAsync(const DescribeNetDetectStatesRequest& request, const DescribeNetDetectStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetDetectStates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeNetDetectStatesOutcomeCallable VpcClient::DescribeNetDetectStatesCallable(const DescribeNetDetectStatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetDetectStatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetDetectStates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeNetDetectsOutcome VpcClient::DescribeNetDetects(const DescribeNetDetectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetDetects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetDetectsResponse rsp = DescribeNetDetectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetDetectsOutcome(rsp);
        else
            return DescribeNetDetectsOutcome(o.GetError());
    }
    else
    {
        return DescribeNetDetectsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetDetectsAsync(const DescribeNetDetectsRequest& request, const DescribeNetDetectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetDetects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeNetDetectsOutcomeCallable VpcClient::DescribeNetDetectsCallable(const DescribeNetDetectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetDetectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetDetects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeNetworkAclsOutcome VpcClient::DescribeNetworkAcls(const DescribeNetworkAclsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkAclsResponse rsp = DescribeNetworkAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkAclsOutcome(rsp);
        else
            return DescribeNetworkAclsOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkAclsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetworkAclsAsync(const DescribeNetworkAclsRequest& request, const DescribeNetworkAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkAcls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeNetworkAclsOutcomeCallable VpcClient::DescribeNetworkAclsCallable(const DescribeNetworkAclsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkAclsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkAcls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeNetworkInterfaceLimitOutcome VpcClient::DescribeNetworkInterfaceLimit(const DescribeNetworkInterfaceLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkInterfaceLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkInterfaceLimitResponse rsp = DescribeNetworkInterfaceLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkInterfaceLimitOutcome(rsp);
        else
            return DescribeNetworkInterfaceLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkInterfaceLimitOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetworkInterfaceLimitAsync(const DescribeNetworkInterfaceLimitRequest& request, const DescribeNetworkInterfaceLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkInterfaceLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeNetworkInterfaceLimitOutcomeCallable VpcClient::DescribeNetworkInterfaceLimitCallable(const DescribeNetworkInterfaceLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkInterfaceLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkInterfaceLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeNetworkInterfacesOutcome VpcClient::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkInterfacesResponse rsp = DescribeNetworkInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkInterfacesOutcome(rsp);
        else
            return DescribeNetworkInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkInterfacesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNetworkInterfacesAsync(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeNetworkInterfacesOutcomeCallable VpcClient::DescribeNetworkInterfacesCallable(const DescribeNetworkInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkInterfacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeProductQuotaOutcome VpcClient::DescribeProductQuota(const DescribeProductQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductQuotaResponse rsp = DescribeProductQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductQuotaOutcome(rsp);
        else
            return DescribeProductQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeProductQuotaOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeProductQuotaAsync(const DescribeProductQuotaRequest& request, const DescribeProductQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeProductQuotaOutcomeCallable VpcClient::DescribeProductQuotaCallable(const DescribeProductQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeRouteConflictsOutcome VpcClient::DescribeRouteConflicts(const DescribeRouteConflictsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRouteConflicts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRouteConflictsResponse rsp = DescribeRouteConflictsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRouteConflictsOutcome(rsp);
        else
            return DescribeRouteConflictsOutcome(o.GetError());
    }
    else
    {
        return DescribeRouteConflictsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeRouteConflictsAsync(const DescribeRouteConflictsRequest& request, const DescribeRouteConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRouteConflicts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeRouteConflictsOutcomeCallable VpcClient::DescribeRouteConflictsCallable(const DescribeRouteConflictsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRouteConflictsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRouteConflicts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeRouteTablesOutcome VpcClient::DescribeRouteTables(const DescribeRouteTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRouteTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRouteTablesResponse rsp = DescribeRouteTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRouteTablesOutcome(rsp);
        else
            return DescribeRouteTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeRouteTablesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRouteTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeRouteTablesOutcomeCallable VpcClient::DescribeRouteTablesCallable(const DescribeRouteTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRouteTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRouteTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeSecurityGroupAssociationStatisticsOutcome VpcClient::DescribeSecurityGroupAssociationStatistics(const DescribeSecurityGroupAssociationStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupAssociationStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupAssociationStatisticsResponse rsp = DescribeSecurityGroupAssociationStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupAssociationStatisticsOutcome(rsp);
        else
            return DescribeSecurityGroupAssociationStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupAssociationStatisticsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSecurityGroupAssociationStatisticsAsync(const DescribeSecurityGroupAssociationStatisticsRequest& request, const DescribeSecurityGroupAssociationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupAssociationStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeSecurityGroupAssociationStatisticsOutcomeCallable VpcClient::DescribeSecurityGroupAssociationStatisticsCallable(const DescribeSecurityGroupAssociationStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupAssociationStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupAssociationStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeSecurityGroupLimitsOutcome VpcClient::DescribeSecurityGroupLimits(const DescribeSecurityGroupLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupLimitsResponse rsp = DescribeSecurityGroupLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupLimitsOutcome(rsp);
        else
            return DescribeSecurityGroupLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupLimitsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSecurityGroupLimitsAsync(const DescribeSecurityGroupLimitsRequest& request, const DescribeSecurityGroupLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupLimits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeSecurityGroupLimitsOutcomeCallable VpcClient::DescribeSecurityGroupLimitsCallable(const DescribeSecurityGroupLimitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupLimitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupLimits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeSecurityGroupPoliciesOutcome VpcClient::DescribeSecurityGroupPolicies(const DescribeSecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupPoliciesResponse rsp = DescribeSecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupPoliciesOutcome(rsp);
        else
            return DescribeSecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSecurityGroupPoliciesAsync(const DescribeSecurityGroupPoliciesRequest& request, const DescribeSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeSecurityGroupPoliciesOutcomeCallable VpcClient::DescribeSecurityGroupPoliciesCallable(const DescribeSecurityGroupPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeSecurityGroupReferencesOutcome VpcClient::DescribeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupReferences");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupReferencesResponse rsp = DescribeSecurityGroupReferencesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupReferencesOutcome(rsp);
        else
            return DescribeSecurityGroupReferencesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupReferencesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSecurityGroupReferencesAsync(const DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupReferences(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeSecurityGroupReferencesOutcomeCallable VpcClient::DescribeSecurityGroupReferencesCallable(const DescribeSecurityGroupReferencesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupReferencesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupReferences(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeSecurityGroupsOutcome VpcClient::DescribeSecurityGroups(const DescribeSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupsResponse rsp = DescribeSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupsOutcome(rsp);
        else
            return DescribeSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeSecurityGroupsOutcomeCallable VpcClient::DescribeSecurityGroupsCallable(const DescribeSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeServiceTemplateGroupsOutcome VpcClient::DescribeServiceTemplateGroups(const DescribeServiceTemplateGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceTemplateGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceTemplateGroupsResponse rsp = DescribeServiceTemplateGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceTemplateGroupsOutcome(rsp);
        else
            return DescribeServiceTemplateGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceTemplateGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeServiceTemplateGroupsAsync(const DescribeServiceTemplateGroupsRequest& request, const DescribeServiceTemplateGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceTemplateGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeServiceTemplateGroupsOutcomeCallable VpcClient::DescribeServiceTemplateGroupsCallable(const DescribeServiceTemplateGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceTemplateGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceTemplateGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeServiceTemplatesOutcome VpcClient::DescribeServiceTemplates(const DescribeServiceTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceTemplatesResponse rsp = DescribeServiceTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceTemplatesOutcome(rsp);
        else
            return DescribeServiceTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceTemplatesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeServiceTemplatesAsync(const DescribeServiceTemplatesRequest& request, const DescribeServiceTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeServiceTemplatesOutcomeCallable VpcClient::DescribeServiceTemplatesCallable(const DescribeServiceTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeSubnetsOutcome VpcClient::DescribeSubnets(const DescribeSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetsResponse rsp = DescribeSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetsOutcome(rsp);
        else
            return DescribeSubnetsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeSubnetsAsync(const DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubnets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeSubnetsOutcomeCallable VpcClient::DescribeSubnetsCallable(const DescribeSubnetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubnetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubnets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeTaskResultOutcome VpcClient::DescribeTaskResult(const DescribeTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResultResponse rsp = DescribeTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskResultOutcome(rsp);
        else
            return DescribeTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskResultOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeTaskResultAsync(const DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeTaskResultOutcomeCallable VpcClient::DescribeTaskResultCallable(const DescribeTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeTemplateLimitsOutcome VpcClient::DescribeTemplateLimits(const DescribeTemplateLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplateLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateLimitsResponse rsp = DescribeTemplateLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateLimitsOutcome(rsp);
        else
            return DescribeTemplateLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateLimitsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeTemplateLimitsAsync(const DescribeTemplateLimitsRequest& request, const DescribeTemplateLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTemplateLimits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeTemplateLimitsOutcomeCallable VpcClient::DescribeTemplateLimitsCallable(const DescribeTemplateLimitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTemplateLimitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTemplateLimits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeVpcInstancesOutcome VpcClient::DescribeVpcInstances(const DescribeVpcInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcInstancesResponse rsp = DescribeVpcInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcInstancesOutcome(rsp);
        else
            return DescribeVpcInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcInstancesAsync(const DescribeVpcInstancesRequest& request, const DescribeVpcInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeVpcInstancesOutcomeCallable VpcClient::DescribeVpcInstancesCallable(const DescribeVpcInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeVpcIpv6AddressesOutcome VpcClient::DescribeVpcIpv6Addresses(const DescribeVpcIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcIpv6AddressesResponse rsp = DescribeVpcIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcIpv6AddressesOutcome(rsp);
        else
            return DescribeVpcIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcIpv6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcIpv6AddressesAsync(const DescribeVpcIpv6AddressesRequest& request, const DescribeVpcIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcIpv6Addresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeVpcIpv6AddressesOutcomeCallable VpcClient::DescribeVpcIpv6AddressesCallable(const DescribeVpcIpv6AddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcIpv6AddressesOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcIpv6Addresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeVpcLimitsOutcome VpcClient::DescribeVpcLimits(const DescribeVpcLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcLimitsResponse rsp = DescribeVpcLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcLimitsOutcome(rsp);
        else
            return DescribeVpcLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcLimitsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcLimitsAsync(const DescribeVpcLimitsRequest& request, const DescribeVpcLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcLimits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeVpcLimitsOutcomeCallable VpcClient::DescribeVpcLimitsCallable(const DescribeVpcLimitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcLimitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcLimits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeVpcPrivateIpAddressesOutcome VpcClient::DescribeVpcPrivateIpAddresses(const DescribeVpcPrivateIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcPrivateIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcPrivateIpAddressesResponse rsp = DescribeVpcPrivateIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcPrivateIpAddressesOutcome(rsp);
        else
            return DescribeVpcPrivateIpAddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcPrivateIpAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcPrivateIpAddressesAsync(const DescribeVpcPrivateIpAddressesRequest& request, const DescribeVpcPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcPrivateIpAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeVpcPrivateIpAddressesOutcomeCallable VpcClient::DescribeVpcPrivateIpAddressesCallable(const DescribeVpcPrivateIpAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcPrivateIpAddressesOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcPrivateIpAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeVpcResourceDashboardOutcome VpcClient::DescribeVpcResourceDashboard(const DescribeVpcResourceDashboardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcResourceDashboard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcResourceDashboardResponse rsp = DescribeVpcResourceDashboardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcResourceDashboardOutcome(rsp);
        else
            return DescribeVpcResourceDashboardOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcResourceDashboardOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcResourceDashboardAsync(const DescribeVpcResourceDashboardRequest& request, const DescribeVpcResourceDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcResourceDashboard(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeVpcResourceDashboardOutcomeCallable VpcClient::DescribeVpcResourceDashboardCallable(const DescribeVpcResourceDashboardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcResourceDashboardOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcResourceDashboard(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeVpcsOutcome VpcClient::DescribeVpcs(const DescribeVpcsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcsResponse rsp = DescribeVpcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcsOutcome(rsp);
        else
            return DescribeVpcsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeVpcsOutcomeCallable VpcClient::DescribeVpcsCallable(const DescribeVpcsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeVpnConnectionsOutcome VpcClient::DescribeVpnConnections(const DescribeVpnConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpnConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpnConnectionsResponse rsp = DescribeVpnConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpnConnectionsOutcome(rsp);
        else
            return DescribeVpnConnectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpnConnectionsOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpnConnectionsAsync(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpnConnections(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeVpnConnectionsOutcomeCallable VpcClient::DescribeVpnConnectionsCallable(const DescribeVpnConnectionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpnConnectionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpnConnections(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeVpnGatewayCcnRoutesOutcome VpcClient::DescribeVpnGatewayCcnRoutes(const DescribeVpnGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpnGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpnGatewayCcnRoutesResponse rsp = DescribeVpnGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpnGatewayCcnRoutesOutcome(rsp);
        else
            return DescribeVpnGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeVpnGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpnGatewayCcnRoutesAsync(const DescribeVpnGatewayCcnRoutesRequest& request, const DescribeVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpnGatewayCcnRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeVpnGatewayCcnRoutesOutcomeCallable VpcClient::DescribeVpnGatewayCcnRoutesCallable(const DescribeVpnGatewayCcnRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpnGatewayCcnRoutesOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpnGatewayCcnRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DescribeVpnGatewaysOutcome VpcClient::DescribeVpnGateways(const DescribeVpnGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpnGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpnGatewaysResponse rsp = DescribeVpnGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpnGatewaysOutcome(rsp);
        else
            return DescribeVpnGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeVpnGatewaysOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeVpnGatewaysAsync(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpnGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeVpnGatewaysOutcomeCallable VpcClient::DescribeVpnGatewaysCallable(const DescribeVpnGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpnGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpnGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DetachCcnInstancesOutcome VpcClient::DetachCcnInstances(const DetachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DetachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachCcnInstancesResponse rsp = DetachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachCcnInstancesOutcome(rsp);
        else
            return DetachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return DetachCcnInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::DetachCcnInstancesAsync(const DetachCcnInstancesRequest& request, const DetachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachCcnInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DetachCcnInstancesOutcomeCallable VpcClient::DetachCcnInstancesCallable(const DetachCcnInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachCcnInstancesOutcome()>>(
        [this, request]()
        {
            return this->DetachCcnInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DetachClassicLinkVpcOutcome VpcClient::DetachClassicLinkVpc(const DetachClassicLinkVpcRequest &request)
{
    auto outcome = MakeRequest(request, "DetachClassicLinkVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachClassicLinkVpcResponse rsp = DetachClassicLinkVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachClassicLinkVpcOutcome(rsp);
        else
            return DetachClassicLinkVpcOutcome(o.GetError());
    }
    else
    {
        return DetachClassicLinkVpcOutcome(outcome.GetError());
    }
}

void VpcClient::DetachClassicLinkVpcAsync(const DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachClassicLinkVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DetachClassicLinkVpcOutcomeCallable VpcClient::DetachClassicLinkVpcCallable(const DetachClassicLinkVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachClassicLinkVpcOutcome()>>(
        [this, request]()
        {
            return this->DetachClassicLinkVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DetachNetworkInterfaceOutcome VpcClient::DetachNetworkInterface(const DetachNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "DetachNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachNetworkInterfaceResponse rsp = DetachNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachNetworkInterfaceOutcome(rsp);
        else
            return DetachNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return DetachNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::DetachNetworkInterfaceAsync(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DetachNetworkInterfaceOutcomeCallable VpcClient::DetachNetworkInterfaceCallable(const DetachNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->DetachNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DisableCcnRoutesOutcome VpcClient::DisableCcnRoutes(const DisableCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DisableCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableCcnRoutesResponse rsp = DisableCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableCcnRoutesOutcome(rsp);
        else
            return DisableCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return DisableCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DisableCcnRoutesAsync(const DisableCcnRoutesRequest& request, const DisableCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableCcnRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DisableCcnRoutesOutcomeCallable VpcClient::DisableCcnRoutesCallable(const DisableCcnRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableCcnRoutesOutcome()>>(
        [this, request]()
        {
            return this->DisableCcnRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DisableGatewayFlowMonitorOutcome VpcClient::DisableGatewayFlowMonitor(const DisableGatewayFlowMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DisableGatewayFlowMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableGatewayFlowMonitorResponse rsp = DisableGatewayFlowMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableGatewayFlowMonitorOutcome(rsp);
        else
            return DisableGatewayFlowMonitorOutcome(o.GetError());
    }
    else
    {
        return DisableGatewayFlowMonitorOutcome(outcome.GetError());
    }
}

void VpcClient::DisableGatewayFlowMonitorAsync(const DisableGatewayFlowMonitorRequest& request, const DisableGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableGatewayFlowMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DisableGatewayFlowMonitorOutcomeCallable VpcClient::DisableGatewayFlowMonitorCallable(const DisableGatewayFlowMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableGatewayFlowMonitorOutcome()>>(
        [this, request]()
        {
            return this->DisableGatewayFlowMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DisableRoutesOutcome VpcClient::DisableRoutes(const DisableRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DisableRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableRoutesResponse rsp = DisableRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableRoutesOutcome(rsp);
        else
            return DisableRoutesOutcome(o.GetError());
    }
    else
    {
        return DisableRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::DisableRoutesAsync(const DisableRoutesRequest& request, const DisableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DisableRoutesOutcomeCallable VpcClient::DisableRoutesCallable(const DisableRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableRoutesOutcome()>>(
        [this, request]()
        {
            return this->DisableRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DisassociateAddressOutcome VpcClient::DisassociateAddress(const DisassociateAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateAddressResponse rsp = DisassociateAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateAddressOutcome(rsp);
        else
            return DisassociateAddressOutcome(o.GetError());
    }
    else
    {
        return DisassociateAddressOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateAddressAsync(const DisassociateAddressRequest& request, const DisassociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DisassociateAddressOutcomeCallable VpcClient::DisassociateAddressCallable(const DisassociateAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateAddressOutcome()>>(
        [this, request]()
        {
            return this->DisassociateAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DisassociateDhcpIpWithAddressIpOutcome VpcClient::DisassociateDhcpIpWithAddressIp(const DisassociateDhcpIpWithAddressIpRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateDhcpIpWithAddressIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateDhcpIpWithAddressIpResponse rsp = DisassociateDhcpIpWithAddressIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateDhcpIpWithAddressIpOutcome(rsp);
        else
            return DisassociateDhcpIpWithAddressIpOutcome(o.GetError());
    }
    else
    {
        return DisassociateDhcpIpWithAddressIpOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateDhcpIpWithAddressIpAsync(const DisassociateDhcpIpWithAddressIpRequest& request, const DisassociateDhcpIpWithAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateDhcpIpWithAddressIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DisassociateDhcpIpWithAddressIpOutcomeCallable VpcClient::DisassociateDhcpIpWithAddressIpCallable(const DisassociateDhcpIpWithAddressIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateDhcpIpWithAddressIpOutcome()>>(
        [this, request]()
        {
            return this->DisassociateDhcpIpWithAddressIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DisassociateDirectConnectGatewayNatGatewayOutcome VpcClient::DisassociateDirectConnectGatewayNatGateway(const DisassociateDirectConnectGatewayNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateDirectConnectGatewayNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateDirectConnectGatewayNatGatewayResponse rsp = DisassociateDirectConnectGatewayNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateDirectConnectGatewayNatGatewayOutcome(rsp);
        else
            return DisassociateDirectConnectGatewayNatGatewayOutcome(o.GetError());
    }
    else
    {
        return DisassociateDirectConnectGatewayNatGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateDirectConnectGatewayNatGatewayAsync(const DisassociateDirectConnectGatewayNatGatewayRequest& request, const DisassociateDirectConnectGatewayNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateDirectConnectGatewayNatGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DisassociateDirectConnectGatewayNatGatewayOutcomeCallable VpcClient::DisassociateDirectConnectGatewayNatGatewayCallable(const DisassociateDirectConnectGatewayNatGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateDirectConnectGatewayNatGatewayOutcome()>>(
        [this, request]()
        {
            return this->DisassociateDirectConnectGatewayNatGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DisassociateNatGatewayAddressOutcome VpcClient::DisassociateNatGatewayAddress(const DisassociateNatGatewayAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateNatGatewayAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateNatGatewayAddressResponse rsp = DisassociateNatGatewayAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateNatGatewayAddressOutcome(rsp);
        else
            return DisassociateNatGatewayAddressOutcome(o.GetError());
    }
    else
    {
        return DisassociateNatGatewayAddressOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateNatGatewayAddressAsync(const DisassociateNatGatewayAddressRequest& request, const DisassociateNatGatewayAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateNatGatewayAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DisassociateNatGatewayAddressOutcomeCallable VpcClient::DisassociateNatGatewayAddressCallable(const DisassociateNatGatewayAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateNatGatewayAddressOutcome()>>(
        [this, request]()
        {
            return this->DisassociateNatGatewayAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DisassociateNetworkAclSubnetsOutcome VpcClient::DisassociateNetworkAclSubnets(const DisassociateNetworkAclSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateNetworkAclSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateNetworkAclSubnetsResponse rsp = DisassociateNetworkAclSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateNetworkAclSubnetsOutcome(rsp);
        else
            return DisassociateNetworkAclSubnetsOutcome(o.GetError());
    }
    else
    {
        return DisassociateNetworkAclSubnetsOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateNetworkAclSubnetsAsync(const DisassociateNetworkAclSubnetsRequest& request, const DisassociateNetworkAclSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateNetworkAclSubnets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DisassociateNetworkAclSubnetsOutcomeCallable VpcClient::DisassociateNetworkAclSubnetsCallable(const DisassociateNetworkAclSubnetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateNetworkAclSubnetsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateNetworkAclSubnets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DisassociateNetworkInterfaceSecurityGroupsOutcome VpcClient::DisassociateNetworkInterfaceSecurityGroups(const DisassociateNetworkInterfaceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateNetworkInterfaceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateNetworkInterfaceSecurityGroupsResponse rsp = DisassociateNetworkInterfaceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateNetworkInterfaceSecurityGroupsOutcome(rsp);
        else
            return DisassociateNetworkInterfaceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateNetworkInterfaceSecurityGroupsOutcome(outcome.GetError());
    }
}

void VpcClient::DisassociateNetworkInterfaceSecurityGroupsAsync(const DisassociateNetworkInterfaceSecurityGroupsRequest& request, const DisassociateNetworkInterfaceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateNetworkInterfaceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DisassociateNetworkInterfaceSecurityGroupsOutcomeCallable VpcClient::DisassociateNetworkInterfaceSecurityGroupsCallable(const DisassociateNetworkInterfaceSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateNetworkInterfaceSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateNetworkInterfaceSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::DownloadCustomerGatewayConfigurationOutcome VpcClient::DownloadCustomerGatewayConfiguration(const DownloadCustomerGatewayConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadCustomerGatewayConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadCustomerGatewayConfigurationResponse rsp = DownloadCustomerGatewayConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadCustomerGatewayConfigurationOutcome(rsp);
        else
            return DownloadCustomerGatewayConfigurationOutcome(o.GetError());
    }
    else
    {
        return DownloadCustomerGatewayConfigurationOutcome(outcome.GetError());
    }
}

void VpcClient::DownloadCustomerGatewayConfigurationAsync(const DownloadCustomerGatewayConfigurationRequest& request, const DownloadCustomerGatewayConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadCustomerGatewayConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DownloadCustomerGatewayConfigurationOutcomeCallable VpcClient::DownloadCustomerGatewayConfigurationCallable(const DownloadCustomerGatewayConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadCustomerGatewayConfigurationOutcome()>>(
        [this, request]()
        {
            return this->DownloadCustomerGatewayConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::EnableCcnRoutesOutcome VpcClient::EnableCcnRoutes(const EnableCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "EnableCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableCcnRoutesResponse rsp = EnableCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableCcnRoutesOutcome(rsp);
        else
            return EnableCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return EnableCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::EnableCcnRoutesAsync(const EnableCcnRoutesRequest& request, const EnableCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableCcnRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::EnableCcnRoutesOutcomeCallable VpcClient::EnableCcnRoutesCallable(const EnableCcnRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableCcnRoutesOutcome()>>(
        [this, request]()
        {
            return this->EnableCcnRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::EnableGatewayFlowMonitorOutcome VpcClient::EnableGatewayFlowMonitor(const EnableGatewayFlowMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "EnableGatewayFlowMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableGatewayFlowMonitorResponse rsp = EnableGatewayFlowMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableGatewayFlowMonitorOutcome(rsp);
        else
            return EnableGatewayFlowMonitorOutcome(o.GetError());
    }
    else
    {
        return EnableGatewayFlowMonitorOutcome(outcome.GetError());
    }
}

void VpcClient::EnableGatewayFlowMonitorAsync(const EnableGatewayFlowMonitorRequest& request, const EnableGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableGatewayFlowMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::EnableGatewayFlowMonitorOutcomeCallable VpcClient::EnableGatewayFlowMonitorCallable(const EnableGatewayFlowMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableGatewayFlowMonitorOutcome()>>(
        [this, request]()
        {
            return this->EnableGatewayFlowMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::EnableRoutesOutcome VpcClient::EnableRoutes(const EnableRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "EnableRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableRoutesResponse rsp = EnableRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableRoutesOutcome(rsp);
        else
            return EnableRoutesOutcome(o.GetError());
    }
    else
    {
        return EnableRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::EnableRoutesAsync(const EnableRoutesRequest& request, const EnableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::EnableRoutesOutcomeCallable VpcClient::EnableRoutesCallable(const EnableRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableRoutesOutcome()>>(
        [this, request]()
        {
            return this->EnableRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::GetCcnRegionBandwidthLimitsOutcome VpcClient::GetCcnRegionBandwidthLimits(const GetCcnRegionBandwidthLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "GetCcnRegionBandwidthLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCcnRegionBandwidthLimitsResponse rsp = GetCcnRegionBandwidthLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCcnRegionBandwidthLimitsOutcome(rsp);
        else
            return GetCcnRegionBandwidthLimitsOutcome(o.GetError());
    }
    else
    {
        return GetCcnRegionBandwidthLimitsOutcome(outcome.GetError());
    }
}

void VpcClient::GetCcnRegionBandwidthLimitsAsync(const GetCcnRegionBandwidthLimitsRequest& request, const GetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCcnRegionBandwidthLimits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::GetCcnRegionBandwidthLimitsOutcomeCallable VpcClient::GetCcnRegionBandwidthLimitsCallable(const GetCcnRegionBandwidthLimitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCcnRegionBandwidthLimitsOutcome()>>(
        [this, request]()
        {
            return this->GetCcnRegionBandwidthLimits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::HaVipAssociateAddressIpOutcome VpcClient::HaVipAssociateAddressIp(const HaVipAssociateAddressIpRequest &request)
{
    auto outcome = MakeRequest(request, "HaVipAssociateAddressIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HaVipAssociateAddressIpResponse rsp = HaVipAssociateAddressIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HaVipAssociateAddressIpOutcome(rsp);
        else
            return HaVipAssociateAddressIpOutcome(o.GetError());
    }
    else
    {
        return HaVipAssociateAddressIpOutcome(outcome.GetError());
    }
}

void VpcClient::HaVipAssociateAddressIpAsync(const HaVipAssociateAddressIpRequest& request, const HaVipAssociateAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->HaVipAssociateAddressIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::HaVipAssociateAddressIpOutcomeCallable VpcClient::HaVipAssociateAddressIpCallable(const HaVipAssociateAddressIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<HaVipAssociateAddressIpOutcome()>>(
        [this, request]()
        {
            return this->HaVipAssociateAddressIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::HaVipDisassociateAddressIpOutcome VpcClient::HaVipDisassociateAddressIp(const HaVipDisassociateAddressIpRequest &request)
{
    auto outcome = MakeRequest(request, "HaVipDisassociateAddressIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HaVipDisassociateAddressIpResponse rsp = HaVipDisassociateAddressIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HaVipDisassociateAddressIpOutcome(rsp);
        else
            return HaVipDisassociateAddressIpOutcome(o.GetError());
    }
    else
    {
        return HaVipDisassociateAddressIpOutcome(outcome.GetError());
    }
}

void VpcClient::HaVipDisassociateAddressIpAsync(const HaVipDisassociateAddressIpRequest& request, const HaVipDisassociateAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->HaVipDisassociateAddressIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::HaVipDisassociateAddressIpOutcomeCallable VpcClient::HaVipDisassociateAddressIpCallable(const HaVipDisassociateAddressIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<HaVipDisassociateAddressIpOutcome()>>(
        [this, request]()
        {
            return this->HaVipDisassociateAddressIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::InquirePriceCreateDirectConnectGatewayOutcome VpcClient::InquirePriceCreateDirectConnectGateway(const InquirePriceCreateDirectConnectGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateDirectConnectGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateDirectConnectGatewayResponse rsp = InquirePriceCreateDirectConnectGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateDirectConnectGatewayOutcome(rsp);
        else
            return InquirePriceCreateDirectConnectGatewayOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateDirectConnectGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::InquirePriceCreateDirectConnectGatewayAsync(const InquirePriceCreateDirectConnectGatewayRequest& request, const InquirePriceCreateDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceCreateDirectConnectGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::InquirePriceCreateDirectConnectGatewayOutcomeCallable VpcClient::InquirePriceCreateDirectConnectGatewayCallable(const InquirePriceCreateDirectConnectGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceCreateDirectConnectGatewayOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceCreateDirectConnectGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::InquiryPriceCreateVpnGatewayOutcome VpcClient::InquiryPriceCreateVpnGateway(const InquiryPriceCreateVpnGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateVpnGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateVpnGatewayResponse rsp = InquiryPriceCreateVpnGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateVpnGatewayOutcome(rsp);
        else
            return InquiryPriceCreateVpnGatewayOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateVpnGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::InquiryPriceCreateVpnGatewayAsync(const InquiryPriceCreateVpnGatewayRequest& request, const InquiryPriceCreateVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateVpnGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::InquiryPriceCreateVpnGatewayOutcomeCallable VpcClient::InquiryPriceCreateVpnGatewayCallable(const InquiryPriceCreateVpnGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateVpnGatewayOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateVpnGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::InquiryPriceRenewVpnGatewayOutcome VpcClient::InquiryPriceRenewVpnGateway(const InquiryPriceRenewVpnGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewVpnGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewVpnGatewayResponse rsp = InquiryPriceRenewVpnGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewVpnGatewayOutcome(rsp);
        else
            return InquiryPriceRenewVpnGatewayOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewVpnGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::InquiryPriceRenewVpnGatewayAsync(const InquiryPriceRenewVpnGatewayRequest& request, const InquiryPriceRenewVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewVpnGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::InquiryPriceRenewVpnGatewayOutcomeCallable VpcClient::InquiryPriceRenewVpnGatewayCallable(const InquiryPriceRenewVpnGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewVpnGatewayOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewVpnGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome VpcClient::InquiryPriceResetVpnGatewayInternetMaxBandwidth(const InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceResetVpnGatewayInternetMaxBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse rsp = InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome(rsp);
        else
            return InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::InquiryPriceResetVpnGatewayInternetMaxBandwidthAsync(const InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest& request, const InquiryPriceResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceResetVpnGatewayInternetMaxBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcomeCallable VpcClient::InquiryPriceResetVpnGatewayInternetMaxBandwidthCallable(const InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceResetVpnGatewayInternetMaxBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::MigrateNetworkInterfaceOutcome VpcClient::MigrateNetworkInterface(const MigrateNetworkInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "MigrateNetworkInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigrateNetworkInterfaceResponse rsp = MigrateNetworkInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigrateNetworkInterfaceOutcome(rsp);
        else
            return MigrateNetworkInterfaceOutcome(o.GetError());
    }
    else
    {
        return MigrateNetworkInterfaceOutcome(outcome.GetError());
    }
}

void VpcClient::MigrateNetworkInterfaceAsync(const MigrateNetworkInterfaceRequest& request, const MigrateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MigrateNetworkInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::MigrateNetworkInterfaceOutcomeCallable VpcClient::MigrateNetworkInterfaceCallable(const MigrateNetworkInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MigrateNetworkInterfaceOutcome()>>(
        [this, request]()
        {
            return this->MigrateNetworkInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::MigratePrivateIpAddressOutcome VpcClient::MigratePrivateIpAddress(const MigratePrivateIpAddressRequest &request)
{
    auto outcome = MakeRequest(request, "MigratePrivateIpAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigratePrivateIpAddressResponse rsp = MigratePrivateIpAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigratePrivateIpAddressOutcome(rsp);
        else
            return MigratePrivateIpAddressOutcome(o.GetError());
    }
    else
    {
        return MigratePrivateIpAddressOutcome(outcome.GetError());
    }
}

void VpcClient::MigratePrivateIpAddressAsync(const MigratePrivateIpAddressRequest& request, const MigratePrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MigratePrivateIpAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::MigratePrivateIpAddressOutcomeCallable VpcClient::MigratePrivateIpAddressCallable(const MigratePrivateIpAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MigratePrivateIpAddressOutcome()>>(
        [this, request]()
        {
            return this->MigratePrivateIpAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyAddressAttributeOutcome VpcClient::ModifyAddressAttribute(const ModifyAddressAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressAttributeResponse rsp = ModifyAddressAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressAttributeOutcome(rsp);
        else
            return ModifyAddressAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressAttributeAsync(const ModifyAddressAttributeRequest& request, const ModifyAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAddressAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyAddressAttributeOutcomeCallable VpcClient::ModifyAddressAttributeCallable(const ModifyAddressAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAddressAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAddressAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyAddressInternetChargeTypeOutcome VpcClient::ModifyAddressInternetChargeType(const ModifyAddressInternetChargeTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressInternetChargeType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressInternetChargeTypeResponse rsp = ModifyAddressInternetChargeTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressInternetChargeTypeOutcome(rsp);
        else
            return ModifyAddressInternetChargeTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressInternetChargeTypeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressInternetChargeTypeAsync(const ModifyAddressInternetChargeTypeRequest& request, const ModifyAddressInternetChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAddressInternetChargeType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyAddressInternetChargeTypeOutcomeCallable VpcClient::ModifyAddressInternetChargeTypeCallable(const ModifyAddressInternetChargeTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAddressInternetChargeTypeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAddressInternetChargeType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyAddressTemplateAttributeOutcome VpcClient::ModifyAddressTemplateAttribute(const ModifyAddressTemplateAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressTemplateAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressTemplateAttributeResponse rsp = ModifyAddressTemplateAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressTemplateAttributeOutcome(rsp);
        else
            return ModifyAddressTemplateAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressTemplateAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressTemplateAttributeAsync(const ModifyAddressTemplateAttributeRequest& request, const ModifyAddressTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAddressTemplateAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyAddressTemplateAttributeOutcomeCallable VpcClient::ModifyAddressTemplateAttributeCallable(const ModifyAddressTemplateAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAddressTemplateAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAddressTemplateAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyAddressTemplateGroupAttributeOutcome VpcClient::ModifyAddressTemplateGroupAttribute(const ModifyAddressTemplateGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressTemplateGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressTemplateGroupAttributeResponse rsp = ModifyAddressTemplateGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressTemplateGroupAttributeOutcome(rsp);
        else
            return ModifyAddressTemplateGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressTemplateGroupAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressTemplateGroupAttributeAsync(const ModifyAddressTemplateGroupAttributeRequest& request, const ModifyAddressTemplateGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAddressTemplateGroupAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyAddressTemplateGroupAttributeOutcomeCallable VpcClient::ModifyAddressTemplateGroupAttributeCallable(const ModifyAddressTemplateGroupAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAddressTemplateGroupAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAddressTemplateGroupAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyAddressesBandwidthOutcome VpcClient::ModifyAddressesBandwidth(const ModifyAddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressesBandwidthResponse rsp = ModifyAddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressesBandwidthOutcome(rsp);
        else
            return ModifyAddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressesBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAddressesBandwidthAsync(const ModifyAddressesBandwidthRequest& request, const ModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAddressesBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyAddressesBandwidthOutcomeCallable VpcClient::ModifyAddressesBandwidthCallable(const ModifyAddressesBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAddressesBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ModifyAddressesBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyAssistantCidrOutcome VpcClient::ModifyAssistantCidr(const ModifyAssistantCidrRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssistantCidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssistantCidrResponse rsp = ModifyAssistantCidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssistantCidrOutcome(rsp);
        else
            return ModifyAssistantCidrOutcome(o.GetError());
    }
    else
    {
        return ModifyAssistantCidrOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyAssistantCidrAsync(const ModifyAssistantCidrRequest& request, const ModifyAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAssistantCidr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyAssistantCidrOutcomeCallable VpcClient::ModifyAssistantCidrCallable(const ModifyAssistantCidrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAssistantCidrOutcome()>>(
        [this, request]()
        {
            return this->ModifyAssistantCidr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyBandwidthPackageAttributeOutcome VpcClient::ModifyBandwidthPackageAttribute(const ModifyBandwidthPackageAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBandwidthPackageAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBandwidthPackageAttributeResponse rsp = ModifyBandwidthPackageAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBandwidthPackageAttributeOutcome(rsp);
        else
            return ModifyBandwidthPackageAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyBandwidthPackageAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyBandwidthPackageAttributeAsync(const ModifyBandwidthPackageAttributeRequest& request, const ModifyBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBandwidthPackageAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyBandwidthPackageAttributeOutcomeCallable VpcClient::ModifyBandwidthPackageAttributeCallable(const ModifyBandwidthPackageAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBandwidthPackageAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyBandwidthPackageAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyCcnAttributeOutcome VpcClient::ModifyCcnAttribute(const ModifyCcnAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCcnAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCcnAttributeResponse rsp = ModifyCcnAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCcnAttributeOutcome(rsp);
        else
            return ModifyCcnAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCcnAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyCcnAttributeAsync(const ModifyCcnAttributeRequest& request, const ModifyCcnAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCcnAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyCcnAttributeOutcomeCallable VpcClient::ModifyCcnAttributeCallable(const ModifyCcnAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCcnAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyCcnAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyCcnRegionBandwidthLimitsTypeOutcome VpcClient::ModifyCcnRegionBandwidthLimitsType(const ModifyCcnRegionBandwidthLimitsTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCcnRegionBandwidthLimitsType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCcnRegionBandwidthLimitsTypeResponse rsp = ModifyCcnRegionBandwidthLimitsTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCcnRegionBandwidthLimitsTypeOutcome(rsp);
        else
            return ModifyCcnRegionBandwidthLimitsTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyCcnRegionBandwidthLimitsTypeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyCcnRegionBandwidthLimitsTypeAsync(const ModifyCcnRegionBandwidthLimitsTypeRequest& request, const ModifyCcnRegionBandwidthLimitsTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCcnRegionBandwidthLimitsType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyCcnRegionBandwidthLimitsTypeOutcomeCallable VpcClient::ModifyCcnRegionBandwidthLimitsTypeCallable(const ModifyCcnRegionBandwidthLimitsTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCcnRegionBandwidthLimitsTypeOutcome()>>(
        [this, request]()
        {
            return this->ModifyCcnRegionBandwidthLimitsType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyCustomerGatewayAttributeOutcome VpcClient::ModifyCustomerGatewayAttribute(const ModifyCustomerGatewayAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomerGatewayAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomerGatewayAttributeResponse rsp = ModifyCustomerGatewayAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomerGatewayAttributeOutcome(rsp);
        else
            return ModifyCustomerGatewayAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomerGatewayAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyCustomerGatewayAttributeAsync(const ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomerGatewayAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyCustomerGatewayAttributeOutcomeCallable VpcClient::ModifyCustomerGatewayAttributeCallable(const ModifyCustomerGatewayAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomerGatewayAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomerGatewayAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyDhcpIpAttributeOutcome VpcClient::ModifyDhcpIpAttribute(const ModifyDhcpIpAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDhcpIpAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDhcpIpAttributeResponse rsp = ModifyDhcpIpAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDhcpIpAttributeOutcome(rsp);
        else
            return ModifyDhcpIpAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDhcpIpAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyDhcpIpAttributeAsync(const ModifyDhcpIpAttributeRequest& request, const ModifyDhcpIpAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDhcpIpAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyDhcpIpAttributeOutcomeCallable VpcClient::ModifyDhcpIpAttributeCallable(const ModifyDhcpIpAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDhcpIpAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDhcpIpAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyDirectConnectGatewayAttributeOutcome VpcClient::ModifyDirectConnectGatewayAttribute(const ModifyDirectConnectGatewayAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDirectConnectGatewayAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDirectConnectGatewayAttributeResponse rsp = ModifyDirectConnectGatewayAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDirectConnectGatewayAttributeOutcome(rsp);
        else
            return ModifyDirectConnectGatewayAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDirectConnectGatewayAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyDirectConnectGatewayAttributeAsync(const ModifyDirectConnectGatewayAttributeRequest& request, const ModifyDirectConnectGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDirectConnectGatewayAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyDirectConnectGatewayAttributeOutcomeCallable VpcClient::ModifyDirectConnectGatewayAttributeCallable(const ModifyDirectConnectGatewayAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDirectConnectGatewayAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDirectConnectGatewayAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyFlowLogAttributeOutcome VpcClient::ModifyFlowLogAttribute(const ModifyFlowLogAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFlowLogAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFlowLogAttributeResponse rsp = ModifyFlowLogAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFlowLogAttributeOutcome(rsp);
        else
            return ModifyFlowLogAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyFlowLogAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyFlowLogAttributeAsync(const ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFlowLogAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyFlowLogAttributeOutcomeCallable VpcClient::ModifyFlowLogAttributeCallable(const ModifyFlowLogAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFlowLogAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyFlowLogAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyGatewayFlowQosOutcome VpcClient::ModifyGatewayFlowQos(const ModifyGatewayFlowQosRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGatewayFlowQos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGatewayFlowQosResponse rsp = ModifyGatewayFlowQosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGatewayFlowQosOutcome(rsp);
        else
            return ModifyGatewayFlowQosOutcome(o.GetError());
    }
    else
    {
        return ModifyGatewayFlowQosOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyGatewayFlowQosAsync(const ModifyGatewayFlowQosRequest& request, const ModifyGatewayFlowQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGatewayFlowQos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyGatewayFlowQosOutcomeCallable VpcClient::ModifyGatewayFlowQosCallable(const ModifyGatewayFlowQosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGatewayFlowQosOutcome()>>(
        [this, request]()
        {
            return this->ModifyGatewayFlowQos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyHaVipAttributeOutcome VpcClient::ModifyHaVipAttribute(const ModifyHaVipAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHaVipAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHaVipAttributeResponse rsp = ModifyHaVipAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHaVipAttributeOutcome(rsp);
        else
            return ModifyHaVipAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyHaVipAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyHaVipAttributeAsync(const ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHaVipAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyHaVipAttributeOutcomeCallable VpcClient::ModifyHaVipAttributeCallable(const ModifyHaVipAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHaVipAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyHaVipAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyIp6AddressesBandwidthOutcome VpcClient::ModifyIp6AddressesBandwidth(const ModifyIp6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIp6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIp6AddressesBandwidthResponse rsp = ModifyIp6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIp6AddressesBandwidthOutcome(rsp);
        else
            return ModifyIp6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ModifyIp6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyIp6AddressesBandwidthAsync(const ModifyIp6AddressesBandwidthRequest& request, const ModifyIp6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIp6AddressesBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyIp6AddressesBandwidthOutcomeCallable VpcClient::ModifyIp6AddressesBandwidthCallable(const ModifyIp6AddressesBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIp6AddressesBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ModifyIp6AddressesBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyIp6RuleOutcome VpcClient::ModifyIp6Rule(const ModifyIp6RuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIp6Rule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIp6RuleResponse rsp = ModifyIp6RuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIp6RuleOutcome(rsp);
        else
            return ModifyIp6RuleOutcome(o.GetError());
    }
    else
    {
        return ModifyIp6RuleOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyIp6RuleAsync(const ModifyIp6RuleRequest& request, const ModifyIp6RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIp6Rule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyIp6RuleOutcomeCallable VpcClient::ModifyIp6RuleCallable(const ModifyIp6RuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIp6RuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyIp6Rule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyIp6TranslatorOutcome VpcClient::ModifyIp6Translator(const ModifyIp6TranslatorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIp6Translator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIp6TranslatorResponse rsp = ModifyIp6TranslatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIp6TranslatorOutcome(rsp);
        else
            return ModifyIp6TranslatorOutcome(o.GetError());
    }
    else
    {
        return ModifyIp6TranslatorOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyIp6TranslatorAsync(const ModifyIp6TranslatorRequest& request, const ModifyIp6TranslatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIp6Translator(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyIp6TranslatorOutcomeCallable VpcClient::ModifyIp6TranslatorCallable(const ModifyIp6TranslatorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIp6TranslatorOutcome()>>(
        [this, request]()
        {
            return this->ModifyIp6Translator(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyIpv6AddressesAttributeOutcome VpcClient::ModifyIpv6AddressesAttribute(const ModifyIpv6AddressesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIpv6AddressesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIpv6AddressesAttributeResponse rsp = ModifyIpv6AddressesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIpv6AddressesAttributeOutcome(rsp);
        else
            return ModifyIpv6AddressesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyIpv6AddressesAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyIpv6AddressesAttributeAsync(const ModifyIpv6AddressesAttributeRequest& request, const ModifyIpv6AddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIpv6AddressesAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyIpv6AddressesAttributeOutcomeCallable VpcClient::ModifyIpv6AddressesAttributeCallable(const ModifyIpv6AddressesAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIpv6AddressesAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyIpv6AddressesAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyNatGatewayAttributeOutcome VpcClient::ModifyNatGatewayAttribute(const ModifyNatGatewayAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatGatewayAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatGatewayAttributeResponse rsp = ModifyNatGatewayAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatGatewayAttributeOutcome(rsp);
        else
            return ModifyNatGatewayAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyNatGatewayAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNatGatewayAttributeAsync(const ModifyNatGatewayAttributeRequest& request, const ModifyNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatGatewayAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyNatGatewayAttributeOutcomeCallable VpcClient::ModifyNatGatewayAttributeCallable(const ModifyNatGatewayAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatGatewayAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatGatewayAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome VpcClient::ModifyNatGatewayDestinationIpPortTranslationNatRule(const ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatGatewayDestinationIpPortTranslationNatRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse rsp = ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome(rsp);
        else
            return ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNatGatewayDestinationIpPortTranslationNatRuleAsync(const ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const ModifyNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNatGatewayDestinationIpPortTranslationNatRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable VpcClient::ModifyNatGatewayDestinationIpPortTranslationNatRuleCallable(const ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyNatGatewayDestinationIpPortTranslationNatRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyNetDetectOutcome VpcClient::ModifyNetDetect(const ModifyNetDetectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetDetectResponse rsp = ModifyNetDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetDetectOutcome(rsp);
        else
            return ModifyNetDetectOutcome(o.GetError());
    }
    else
    {
        return ModifyNetDetectOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNetDetectAsync(const ModifyNetDetectRequest& request, const ModifyNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNetDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyNetDetectOutcomeCallable VpcClient::ModifyNetDetectCallable(const ModifyNetDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNetDetectOutcome()>>(
        [this, request]()
        {
            return this->ModifyNetDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyNetworkAclAttributeOutcome VpcClient::ModifyNetworkAclAttribute(const ModifyNetworkAclAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkAclAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkAclAttributeResponse rsp = ModifyNetworkAclAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkAclAttributeOutcome(rsp);
        else
            return ModifyNetworkAclAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkAclAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNetworkAclAttributeAsync(const ModifyNetworkAclAttributeRequest& request, const ModifyNetworkAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNetworkAclAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyNetworkAclAttributeOutcomeCallable VpcClient::ModifyNetworkAclAttributeCallable(const ModifyNetworkAclAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNetworkAclAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyNetworkAclAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyNetworkAclEntriesOutcome VpcClient::ModifyNetworkAclEntries(const ModifyNetworkAclEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkAclEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkAclEntriesResponse rsp = ModifyNetworkAclEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkAclEntriesOutcome(rsp);
        else
            return ModifyNetworkAclEntriesOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkAclEntriesOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNetworkAclEntriesAsync(const ModifyNetworkAclEntriesRequest& request, const ModifyNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNetworkAclEntries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyNetworkAclEntriesOutcomeCallable VpcClient::ModifyNetworkAclEntriesCallable(const ModifyNetworkAclEntriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNetworkAclEntriesOutcome()>>(
        [this, request]()
        {
            return this->ModifyNetworkAclEntries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyNetworkInterfaceAttributeOutcome VpcClient::ModifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkInterfaceAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkInterfaceAttributeResponse rsp = ModifyNetworkInterfaceAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkInterfaceAttributeOutcome(rsp);
        else
            return ModifyNetworkInterfaceAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkInterfaceAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyNetworkInterfaceAttributeAsync(const ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNetworkInterfaceAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyNetworkInterfaceAttributeOutcomeCallable VpcClient::ModifyNetworkInterfaceAttributeCallable(const ModifyNetworkInterfaceAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNetworkInterfaceAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyNetworkInterfaceAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyPrivateIpAddressesAttributeOutcome VpcClient::ModifyPrivateIpAddressesAttribute(const ModifyPrivateIpAddressesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrivateIpAddressesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrivateIpAddressesAttributeResponse rsp = ModifyPrivateIpAddressesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrivateIpAddressesAttributeOutcome(rsp);
        else
            return ModifyPrivateIpAddressesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyPrivateIpAddressesAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyPrivateIpAddressesAttributeAsync(const ModifyPrivateIpAddressesAttributeRequest& request, const ModifyPrivateIpAddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrivateIpAddressesAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyPrivateIpAddressesAttributeOutcomeCallable VpcClient::ModifyPrivateIpAddressesAttributeCallable(const ModifyPrivateIpAddressesAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrivateIpAddressesAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrivateIpAddressesAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyRouteTableAttributeOutcome VpcClient::ModifyRouteTableAttribute(const ModifyRouteTableAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRouteTableAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRouteTableAttributeResponse rsp = ModifyRouteTableAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRouteTableAttributeOutcome(rsp);
        else
            return ModifyRouteTableAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyRouteTableAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyRouteTableAttributeAsync(const ModifyRouteTableAttributeRequest& request, const ModifyRouteTableAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRouteTableAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyRouteTableAttributeOutcomeCallable VpcClient::ModifyRouteTableAttributeCallable(const ModifyRouteTableAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRouteTableAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyRouteTableAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifySecurityGroupAttributeOutcome VpcClient::ModifySecurityGroupAttribute(const ModifySecurityGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupAttributeResponse rsp = ModifySecurityGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupAttributeOutcome(rsp);
        else
            return ModifySecurityGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifySecurityGroupAttributeAsync(const ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroupAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifySecurityGroupAttributeOutcomeCallable VpcClient::ModifySecurityGroupAttributeCallable(const ModifySecurityGroupAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroupAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifySecurityGroupPoliciesOutcome VpcClient::ModifySecurityGroupPolicies(const ModifySecurityGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupPoliciesResponse rsp = ModifySecurityGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupPoliciesOutcome(rsp);
        else
            return ModifySecurityGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupPoliciesOutcome(outcome.GetError());
    }
}

void VpcClient::ModifySecurityGroupPoliciesAsync(const ModifySecurityGroupPoliciesRequest& request, const ModifySecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroupPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifySecurityGroupPoliciesOutcomeCallable VpcClient::ModifySecurityGroupPoliciesCallable(const ModifySecurityGroupPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupPoliciesOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroupPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyServiceTemplateAttributeOutcome VpcClient::ModifyServiceTemplateAttribute(const ModifyServiceTemplateAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceTemplateAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceTemplateAttributeResponse rsp = ModifyServiceTemplateAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceTemplateAttributeOutcome(rsp);
        else
            return ModifyServiceTemplateAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceTemplateAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyServiceTemplateAttributeAsync(const ModifyServiceTemplateAttributeRequest& request, const ModifyServiceTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyServiceTemplateAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyServiceTemplateAttributeOutcomeCallable VpcClient::ModifyServiceTemplateAttributeCallable(const ModifyServiceTemplateAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyServiceTemplateAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyServiceTemplateAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyServiceTemplateGroupAttributeOutcome VpcClient::ModifyServiceTemplateGroupAttribute(const ModifyServiceTemplateGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceTemplateGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceTemplateGroupAttributeResponse rsp = ModifyServiceTemplateGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceTemplateGroupAttributeOutcome(rsp);
        else
            return ModifyServiceTemplateGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceTemplateGroupAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyServiceTemplateGroupAttributeAsync(const ModifyServiceTemplateGroupAttributeRequest& request, const ModifyServiceTemplateGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyServiceTemplateGroupAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyServiceTemplateGroupAttributeOutcomeCallable VpcClient::ModifyServiceTemplateGroupAttributeCallable(const ModifyServiceTemplateGroupAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyServiceTemplateGroupAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyServiceTemplateGroupAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifySubnetAttributeOutcome VpcClient::ModifySubnetAttribute(const ModifySubnetAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubnetAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubnetAttributeResponse rsp = ModifySubnetAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubnetAttributeOutcome(rsp);
        else
            return ModifySubnetAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySubnetAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifySubnetAttributeAsync(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubnetAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifySubnetAttributeOutcomeCallable VpcClient::ModifySubnetAttributeCallable(const ModifySubnetAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubnetAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifySubnetAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyVpcAttributeOutcome VpcClient::ModifyVpcAttribute(const ModifyVpcAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcAttributeResponse rsp = ModifyVpcAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcAttributeOutcome(rsp);
        else
            return ModifyVpcAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpcAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyVpcAttributeOutcomeCallable VpcClient::ModifyVpcAttributeCallable(const ModifyVpcAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpcAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpcAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyVpnConnectionAttributeOutcome VpcClient::ModifyVpnConnectionAttribute(const ModifyVpnConnectionAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpnConnectionAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpnConnectionAttributeResponse rsp = ModifyVpnConnectionAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpnConnectionAttributeOutcome(rsp);
        else
            return ModifyVpnConnectionAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpnConnectionAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpnConnectionAttributeAsync(const ModifyVpnConnectionAttributeRequest& request, const ModifyVpnConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpnConnectionAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyVpnConnectionAttributeOutcomeCallable VpcClient::ModifyVpnConnectionAttributeCallable(const ModifyVpnConnectionAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpnConnectionAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpnConnectionAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyVpnGatewayAttributeOutcome VpcClient::ModifyVpnGatewayAttribute(const ModifyVpnGatewayAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpnGatewayAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpnGatewayAttributeResponse rsp = ModifyVpnGatewayAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpnGatewayAttributeOutcome(rsp);
        else
            return ModifyVpnGatewayAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyVpnGatewayAttributeOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpnGatewayAttributeAsync(const ModifyVpnGatewayAttributeRequest& request, const ModifyVpnGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpnGatewayAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyVpnGatewayAttributeOutcomeCallable VpcClient::ModifyVpnGatewayAttributeCallable(const ModifyVpnGatewayAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpnGatewayAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpnGatewayAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ModifyVpnGatewayCcnRoutesOutcome VpcClient::ModifyVpnGatewayCcnRoutes(const ModifyVpnGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpnGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpnGatewayCcnRoutesResponse rsp = ModifyVpnGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpnGatewayCcnRoutesOutcome(rsp);
        else
            return ModifyVpnGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return ModifyVpnGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::ModifyVpnGatewayCcnRoutesAsync(const ModifyVpnGatewayCcnRoutesRequest& request, const ModifyVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVpnGatewayCcnRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ModifyVpnGatewayCcnRoutesOutcomeCallable VpcClient::ModifyVpnGatewayCcnRoutesCallable(const ModifyVpnGatewayCcnRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVpnGatewayCcnRoutesOutcome()>>(
        [this, request]()
        {
            return this->ModifyVpnGatewayCcnRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::RejectAttachCcnInstancesOutcome VpcClient::RejectAttachCcnInstances(const RejectAttachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RejectAttachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RejectAttachCcnInstancesResponse rsp = RejectAttachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RejectAttachCcnInstancesOutcome(rsp);
        else
            return RejectAttachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return RejectAttachCcnInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::RejectAttachCcnInstancesAsync(const RejectAttachCcnInstancesRequest& request, const RejectAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RejectAttachCcnInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::RejectAttachCcnInstancesOutcomeCallable VpcClient::RejectAttachCcnInstancesCallable(const RejectAttachCcnInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RejectAttachCcnInstancesOutcome()>>(
        [this, request]()
        {
            return this->RejectAttachCcnInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ReleaseAddressesOutcome VpcClient::ReleaseAddresses(const ReleaseAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseAddressesResponse rsp = ReleaseAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseAddressesOutcome(rsp);
        else
            return ReleaseAddressesOutcome(o.GetError());
    }
    else
    {
        return ReleaseAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::ReleaseAddressesAsync(const ReleaseAddressesRequest& request, const ReleaseAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ReleaseAddressesOutcomeCallable VpcClient::ReleaseAddressesCallable(const ReleaseAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseAddressesOutcome()>>(
        [this, request]()
        {
            return this->ReleaseAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ReleaseIp6AddressesBandwidthOutcome VpcClient::ReleaseIp6AddressesBandwidth(const ReleaseIp6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseIp6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseIp6AddressesBandwidthResponse rsp = ReleaseIp6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseIp6AddressesBandwidthOutcome(rsp);
        else
            return ReleaseIp6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ReleaseIp6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::ReleaseIp6AddressesBandwidthAsync(const ReleaseIp6AddressesBandwidthRequest& request, const ReleaseIp6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseIp6AddressesBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ReleaseIp6AddressesBandwidthOutcomeCallable VpcClient::ReleaseIp6AddressesBandwidthCallable(const ReleaseIp6AddressesBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseIp6AddressesBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ReleaseIp6AddressesBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::RemoveBandwidthPackageResourcesOutcome VpcClient::RemoveBandwidthPackageResources(const RemoveBandwidthPackageResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveBandwidthPackageResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveBandwidthPackageResourcesResponse rsp = RemoveBandwidthPackageResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveBandwidthPackageResourcesOutcome(rsp);
        else
            return RemoveBandwidthPackageResourcesOutcome(o.GetError());
    }
    else
    {
        return RemoveBandwidthPackageResourcesOutcome(outcome.GetError());
    }
}

void VpcClient::RemoveBandwidthPackageResourcesAsync(const RemoveBandwidthPackageResourcesRequest& request, const RemoveBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveBandwidthPackageResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::RemoveBandwidthPackageResourcesOutcomeCallable VpcClient::RemoveBandwidthPackageResourcesCallable(const RemoveBandwidthPackageResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveBandwidthPackageResourcesOutcome()>>(
        [this, request]()
        {
            return this->RemoveBandwidthPackageResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::RemoveIp6RulesOutcome VpcClient::RemoveIp6Rules(const RemoveIp6RulesRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveIp6Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveIp6RulesResponse rsp = RemoveIp6RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveIp6RulesOutcome(rsp);
        else
            return RemoveIp6RulesOutcome(o.GetError());
    }
    else
    {
        return RemoveIp6RulesOutcome(outcome.GetError());
    }
}

void VpcClient::RemoveIp6RulesAsync(const RemoveIp6RulesRequest& request, const RemoveIp6RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveIp6Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::RemoveIp6RulesOutcomeCallable VpcClient::RemoveIp6RulesCallable(const RemoveIp6RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveIp6RulesOutcome()>>(
        [this, request]()
        {
            return this->RemoveIp6Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::RenewAddressesOutcome VpcClient::RenewAddresses(const RenewAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "RenewAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewAddressesResponse rsp = RenewAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewAddressesOutcome(rsp);
        else
            return RenewAddressesOutcome(o.GetError());
    }
    else
    {
        return RenewAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::RenewAddressesAsync(const RenewAddressesRequest& request, const RenewAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::RenewAddressesOutcomeCallable VpcClient::RenewAddressesCallable(const RenewAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewAddressesOutcome()>>(
        [this, request]()
        {
            return this->RenewAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::RenewVpnGatewayOutcome VpcClient::RenewVpnGateway(const RenewVpnGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "RenewVpnGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewVpnGatewayResponse rsp = RenewVpnGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewVpnGatewayOutcome(rsp);
        else
            return RenewVpnGatewayOutcome(o.GetError());
    }
    else
    {
        return RenewVpnGatewayOutcome(outcome.GetError());
    }
}

void VpcClient::RenewVpnGatewayAsync(const RenewVpnGatewayRequest& request, const RenewVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewVpnGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::RenewVpnGatewayOutcomeCallable VpcClient::RenewVpnGatewayCallable(const RenewVpnGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewVpnGatewayOutcome()>>(
        [this, request]()
        {
            return this->RenewVpnGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ReplaceDirectConnectGatewayCcnRoutesOutcome VpcClient::ReplaceDirectConnectGatewayCcnRoutes(const ReplaceDirectConnectGatewayCcnRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceDirectConnectGatewayCcnRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceDirectConnectGatewayCcnRoutesResponse rsp = ReplaceDirectConnectGatewayCcnRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceDirectConnectGatewayCcnRoutesOutcome(rsp);
        else
            return ReplaceDirectConnectGatewayCcnRoutesOutcome(o.GetError());
    }
    else
    {
        return ReplaceDirectConnectGatewayCcnRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceDirectConnectGatewayCcnRoutesAsync(const ReplaceDirectConnectGatewayCcnRoutesRequest& request, const ReplaceDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceDirectConnectGatewayCcnRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ReplaceDirectConnectGatewayCcnRoutesOutcomeCallable VpcClient::ReplaceDirectConnectGatewayCcnRoutesCallable(const ReplaceDirectConnectGatewayCcnRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceDirectConnectGatewayCcnRoutesOutcome()>>(
        [this, request]()
        {
            return this->ReplaceDirectConnectGatewayCcnRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ReplaceRouteTableAssociationOutcome VpcClient::ReplaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceRouteTableAssociation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceRouteTableAssociationResponse rsp = ReplaceRouteTableAssociationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceRouteTableAssociationOutcome(rsp);
        else
            return ReplaceRouteTableAssociationOutcome(o.GetError());
    }
    else
    {
        return ReplaceRouteTableAssociationOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceRouteTableAssociationAsync(const ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceRouteTableAssociation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ReplaceRouteTableAssociationOutcomeCallable VpcClient::ReplaceRouteTableAssociationCallable(const ReplaceRouteTableAssociationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceRouteTableAssociationOutcome()>>(
        [this, request]()
        {
            return this->ReplaceRouteTableAssociation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ReplaceRoutesOutcome VpcClient::ReplaceRoutes(const ReplaceRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceRoutesResponse rsp = ReplaceRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceRoutesOutcome(rsp);
        else
            return ReplaceRoutesOutcome(o.GetError());
    }
    else
    {
        return ReplaceRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceRoutesAsync(const ReplaceRoutesRequest& request, const ReplaceRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ReplaceRoutesOutcomeCallable VpcClient::ReplaceRoutesCallable(const ReplaceRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceRoutesOutcome()>>(
        [this, request]()
        {
            return this->ReplaceRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ReplaceSecurityGroupPolicyOutcome VpcClient::ReplaceSecurityGroupPolicy(const ReplaceSecurityGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceSecurityGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceSecurityGroupPolicyResponse rsp = ReplaceSecurityGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceSecurityGroupPolicyOutcome(rsp);
        else
            return ReplaceSecurityGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return ReplaceSecurityGroupPolicyOutcome(outcome.GetError());
    }
}

void VpcClient::ReplaceSecurityGroupPolicyAsync(const ReplaceSecurityGroupPolicyRequest& request, const ReplaceSecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceSecurityGroupPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ReplaceSecurityGroupPolicyOutcomeCallable VpcClient::ReplaceSecurityGroupPolicyCallable(const ReplaceSecurityGroupPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceSecurityGroupPolicyOutcome()>>(
        [this, request]()
        {
            return this->ReplaceSecurityGroupPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ResetAttachCcnInstancesOutcome VpcClient::ResetAttachCcnInstances(const ResetAttachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAttachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAttachCcnInstancesResponse rsp = ResetAttachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAttachCcnInstancesOutcome(rsp);
        else
            return ResetAttachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return ResetAttachCcnInstancesOutcome(outcome.GetError());
    }
}

void VpcClient::ResetAttachCcnInstancesAsync(const ResetAttachCcnInstancesRequest& request, const ResetAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAttachCcnInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ResetAttachCcnInstancesOutcomeCallable VpcClient::ResetAttachCcnInstancesCallable(const ResetAttachCcnInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetAttachCcnInstancesOutcome()>>(
        [this, request]()
        {
            return this->ResetAttachCcnInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ResetNatGatewayConnectionOutcome VpcClient::ResetNatGatewayConnection(const ResetNatGatewayConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "ResetNatGatewayConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetNatGatewayConnectionResponse rsp = ResetNatGatewayConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetNatGatewayConnectionOutcome(rsp);
        else
            return ResetNatGatewayConnectionOutcome(o.GetError());
    }
    else
    {
        return ResetNatGatewayConnectionOutcome(outcome.GetError());
    }
}

void VpcClient::ResetNatGatewayConnectionAsync(const ResetNatGatewayConnectionRequest& request, const ResetNatGatewayConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetNatGatewayConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ResetNatGatewayConnectionOutcomeCallable VpcClient::ResetNatGatewayConnectionCallable(const ResetNatGatewayConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetNatGatewayConnectionOutcome()>>(
        [this, request]()
        {
            return this->ResetNatGatewayConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ResetRoutesOutcome VpcClient::ResetRoutes(const ResetRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetRoutesResponse rsp = ResetRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetRoutesOutcome(rsp);
        else
            return ResetRoutesOutcome(o.GetError());
    }
    else
    {
        return ResetRoutesOutcome(outcome.GetError());
    }
}

void VpcClient::ResetRoutesAsync(const ResetRoutesRequest& request, const ResetRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ResetRoutesOutcomeCallable VpcClient::ResetRoutesCallable(const ResetRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetRoutesOutcome()>>(
        [this, request]()
        {
            return this->ResetRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ResetVpnConnectionOutcome VpcClient::ResetVpnConnection(const ResetVpnConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "ResetVpnConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetVpnConnectionResponse rsp = ResetVpnConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetVpnConnectionOutcome(rsp);
        else
            return ResetVpnConnectionOutcome(o.GetError());
    }
    else
    {
        return ResetVpnConnectionOutcome(outcome.GetError());
    }
}

void VpcClient::ResetVpnConnectionAsync(const ResetVpnConnectionRequest& request, const ResetVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetVpnConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ResetVpnConnectionOutcomeCallable VpcClient::ResetVpnConnectionCallable(const ResetVpnConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetVpnConnectionOutcome()>>(
        [this, request]()
        {
            return this->ResetVpnConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::ResetVpnGatewayInternetMaxBandwidthOutcome VpcClient::ResetVpnGatewayInternetMaxBandwidth(const ResetVpnGatewayInternetMaxBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ResetVpnGatewayInternetMaxBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetVpnGatewayInternetMaxBandwidthResponse rsp = ResetVpnGatewayInternetMaxBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetVpnGatewayInternetMaxBandwidthOutcome(rsp);
        else
            return ResetVpnGatewayInternetMaxBandwidthOutcome(o.GetError());
    }
    else
    {
        return ResetVpnGatewayInternetMaxBandwidthOutcome(outcome.GetError());
    }
}

void VpcClient::ResetVpnGatewayInternetMaxBandwidthAsync(const ResetVpnGatewayInternetMaxBandwidthRequest& request, const ResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetVpnGatewayInternetMaxBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::ResetVpnGatewayInternetMaxBandwidthOutcomeCallable VpcClient::ResetVpnGatewayInternetMaxBandwidthCallable(const ResetVpnGatewayInternetMaxBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetVpnGatewayInternetMaxBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ResetVpnGatewayInternetMaxBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::SetCcnRegionBandwidthLimitsOutcome VpcClient::SetCcnRegionBandwidthLimits(const SetCcnRegionBandwidthLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "SetCcnRegionBandwidthLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetCcnRegionBandwidthLimitsResponse rsp = SetCcnRegionBandwidthLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetCcnRegionBandwidthLimitsOutcome(rsp);
        else
            return SetCcnRegionBandwidthLimitsOutcome(o.GetError());
    }
    else
    {
        return SetCcnRegionBandwidthLimitsOutcome(outcome.GetError());
    }
}

void VpcClient::SetCcnRegionBandwidthLimitsAsync(const SetCcnRegionBandwidthLimitsRequest& request, const SetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetCcnRegionBandwidthLimits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::SetCcnRegionBandwidthLimitsOutcomeCallable VpcClient::SetCcnRegionBandwidthLimitsCallable(const SetCcnRegionBandwidthLimitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetCcnRegionBandwidthLimitsOutcome()>>(
        [this, request]()
        {
            return this->SetCcnRegionBandwidthLimits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::TransformAddressOutcome VpcClient::TransformAddress(const TransformAddressRequest &request)
{
    auto outcome = MakeRequest(request, "TransformAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransformAddressResponse rsp = TransformAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransformAddressOutcome(rsp);
        else
            return TransformAddressOutcome(o.GetError());
    }
    else
    {
        return TransformAddressOutcome(outcome.GetError());
    }
}

void VpcClient::TransformAddressAsync(const TransformAddressRequest& request, const TransformAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TransformAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::TransformAddressOutcomeCallable VpcClient::TransformAddressCallable(const TransformAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TransformAddressOutcome()>>(
        [this, request]()
        {
            return this->TransformAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::UnassignIpv6AddressesOutcome VpcClient::UnassignIpv6Addresses(const UnassignIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "UnassignIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnassignIpv6AddressesResponse rsp = UnassignIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnassignIpv6AddressesOutcome(rsp);
        else
            return UnassignIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return UnassignIpv6AddressesOutcome(outcome.GetError());
    }
}

void VpcClient::UnassignIpv6AddressesAsync(const UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnassignIpv6Addresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::UnassignIpv6AddressesOutcomeCallable VpcClient::UnassignIpv6AddressesCallable(const UnassignIpv6AddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnassignIpv6AddressesOutcome()>>(
        [this, request]()
        {
            return this->UnassignIpv6Addresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::UnassignIpv6CidrBlockOutcome VpcClient::UnassignIpv6CidrBlock(const UnassignIpv6CidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "UnassignIpv6CidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnassignIpv6CidrBlockResponse rsp = UnassignIpv6CidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnassignIpv6CidrBlockOutcome(rsp);
        else
            return UnassignIpv6CidrBlockOutcome(o.GetError());
    }
    else
    {
        return UnassignIpv6CidrBlockOutcome(outcome.GetError());
    }
}

void VpcClient::UnassignIpv6CidrBlockAsync(const UnassignIpv6CidrBlockRequest& request, const UnassignIpv6CidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnassignIpv6CidrBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::UnassignIpv6CidrBlockOutcomeCallable VpcClient::UnassignIpv6CidrBlockCallable(const UnassignIpv6CidrBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnassignIpv6CidrBlockOutcome()>>(
        [this, request]()
        {
            return this->UnassignIpv6CidrBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::UnassignIpv6SubnetCidrBlockOutcome VpcClient::UnassignIpv6SubnetCidrBlock(const UnassignIpv6SubnetCidrBlockRequest &request)
{
    auto outcome = MakeRequest(request, "UnassignIpv6SubnetCidrBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnassignIpv6SubnetCidrBlockResponse rsp = UnassignIpv6SubnetCidrBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnassignIpv6SubnetCidrBlockOutcome(rsp);
        else
            return UnassignIpv6SubnetCidrBlockOutcome(o.GetError());
    }
    else
    {
        return UnassignIpv6SubnetCidrBlockOutcome(outcome.GetError());
    }
}

void VpcClient::UnassignIpv6SubnetCidrBlockAsync(const UnassignIpv6SubnetCidrBlockRequest& request, const UnassignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnassignIpv6SubnetCidrBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::UnassignIpv6SubnetCidrBlockOutcomeCallable VpcClient::UnassignIpv6SubnetCidrBlockCallable(const UnassignIpv6SubnetCidrBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnassignIpv6SubnetCidrBlockOutcome()>>(
        [this, request]()
        {
            return this->UnassignIpv6SubnetCidrBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VpcClient::UnassignPrivateIpAddressesOutcome VpcClient::UnassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "UnassignPrivateIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnassignPrivateIpAddressesResponse rsp = UnassignPrivateIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnassignPrivateIpAddressesOutcome(rsp);
        else
            return UnassignPrivateIpAddressesOutcome(o.GetError());
    }
    else
    {
        return UnassignPrivateIpAddressesOutcome(outcome.GetError());
    }
}

void VpcClient::UnassignPrivateIpAddressesAsync(const UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnassignPrivateIpAddresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::UnassignPrivateIpAddressesOutcomeCallable VpcClient::UnassignPrivateIpAddressesCallable(const UnassignPrivateIpAddressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnassignPrivateIpAddressesOutcome()>>(
        [this, request]()
        {
            return this->UnassignPrivateIpAddresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


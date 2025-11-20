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

#include <tencentcloud/ecm/v20190719/EcmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ecm::V20190719;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-19";
    const string ENDPOINT = "ecm.tencentcloudapi.com";
}

EcmClient::EcmClient(const Credential &credential, const string &region) :
    EcmClient(credential, region, ClientProfile())
{
}

EcmClient::EcmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EcmClient::AllocateAddressesOutcome EcmClient::AllocateAddresses(const AllocateAddressesRequest &request)
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

void EcmClient::AllocateAddressesAsync(const AllocateAddressesRequest& request, const AllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AllocateAddressesRequest&;
    using Resp = AllocateAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "AllocateAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AllocateAddressesOutcomeCallable EcmClient::AllocateAddressesCallable(const AllocateAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AllocateAddressesOutcome>>();
    AllocateAddressesAsync(
    request,
    [prom](
        const EcmClient*,
        const AllocateAddressesRequest&,
        AllocateAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::AllocateIpv6AddressesBandwidthOutcome EcmClient::AllocateIpv6AddressesBandwidth(const AllocateIpv6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateIpv6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateIpv6AddressesBandwidthResponse rsp = AllocateIpv6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateIpv6AddressesBandwidthOutcome(rsp);
        else
            return AllocateIpv6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return AllocateIpv6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void EcmClient::AllocateIpv6AddressesBandwidthAsync(const AllocateIpv6AddressesBandwidthRequest& request, const AllocateIpv6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AllocateIpv6AddressesBandwidthRequest&;
    using Resp = AllocateIpv6AddressesBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "AllocateIpv6AddressesBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AllocateIpv6AddressesBandwidthOutcomeCallable EcmClient::AllocateIpv6AddressesBandwidthCallable(const AllocateIpv6AddressesBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<AllocateIpv6AddressesBandwidthOutcome>>();
    AllocateIpv6AddressesBandwidthAsync(
    request,
    [prom](
        const EcmClient*,
        const AllocateIpv6AddressesBandwidthRequest&,
        AllocateIpv6AddressesBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::AssignIpv6AddressesOutcome EcmClient::AssignIpv6Addresses(const AssignIpv6AddressesRequest &request)
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

void EcmClient::AssignIpv6AddressesAsync(const AssignIpv6AddressesRequest& request, const AssignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignIpv6AddressesRequest&;
    using Resp = AssignIpv6AddressesResponse;

    DoRequestAsync<Req, Resp>(
        "AssignIpv6Addresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AssignIpv6AddressesOutcomeCallable EcmClient::AssignIpv6AddressesCallable(const AssignIpv6AddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignIpv6AddressesOutcome>>();
    AssignIpv6AddressesAsync(
    request,
    [prom](
        const EcmClient*,
        const AssignIpv6AddressesRequest&,
        AssignIpv6AddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::AssignIpv6CidrBlockOutcome EcmClient::AssignIpv6CidrBlock(const AssignIpv6CidrBlockRequest &request)
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

void EcmClient::AssignIpv6CidrBlockAsync(const AssignIpv6CidrBlockRequest& request, const AssignIpv6CidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignIpv6CidrBlockRequest&;
    using Resp = AssignIpv6CidrBlockResponse;

    DoRequestAsync<Req, Resp>(
        "AssignIpv6CidrBlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AssignIpv6CidrBlockOutcomeCallable EcmClient::AssignIpv6CidrBlockCallable(const AssignIpv6CidrBlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignIpv6CidrBlockOutcome>>();
    AssignIpv6CidrBlockAsync(
    request,
    [prom](
        const EcmClient*,
        const AssignIpv6CidrBlockRequest&,
        AssignIpv6CidrBlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::AssignIpv6CidrBlocksOutcome EcmClient::AssignIpv6CidrBlocks(const AssignIpv6CidrBlocksRequest &request)
{
    auto outcome = MakeRequest(request, "AssignIpv6CidrBlocks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignIpv6CidrBlocksResponse rsp = AssignIpv6CidrBlocksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignIpv6CidrBlocksOutcome(rsp);
        else
            return AssignIpv6CidrBlocksOutcome(o.GetError());
    }
    else
    {
        return AssignIpv6CidrBlocksOutcome(outcome.GetError());
    }
}

void EcmClient::AssignIpv6CidrBlocksAsync(const AssignIpv6CidrBlocksRequest& request, const AssignIpv6CidrBlocksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignIpv6CidrBlocksRequest&;
    using Resp = AssignIpv6CidrBlocksResponse;

    DoRequestAsync<Req, Resp>(
        "AssignIpv6CidrBlocks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AssignIpv6CidrBlocksOutcomeCallable EcmClient::AssignIpv6CidrBlocksCallable(const AssignIpv6CidrBlocksRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignIpv6CidrBlocksOutcome>>();
    AssignIpv6CidrBlocksAsync(
    request,
    [prom](
        const EcmClient*,
        const AssignIpv6CidrBlocksRequest&,
        AssignIpv6CidrBlocksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::AssignIpv6SubnetCidrBlockOutcome EcmClient::AssignIpv6SubnetCidrBlock(const AssignIpv6SubnetCidrBlockRequest &request)
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

void EcmClient::AssignIpv6SubnetCidrBlockAsync(const AssignIpv6SubnetCidrBlockRequest& request, const AssignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignIpv6SubnetCidrBlockRequest&;
    using Resp = AssignIpv6SubnetCidrBlockResponse;

    DoRequestAsync<Req, Resp>(
        "AssignIpv6SubnetCidrBlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AssignIpv6SubnetCidrBlockOutcomeCallable EcmClient::AssignIpv6SubnetCidrBlockCallable(const AssignIpv6SubnetCidrBlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignIpv6SubnetCidrBlockOutcome>>();
    AssignIpv6SubnetCidrBlockAsync(
    request,
    [prom](
        const EcmClient*,
        const AssignIpv6SubnetCidrBlockRequest&,
        AssignIpv6SubnetCidrBlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::AssignPrivateIpAddressesOutcome EcmClient::AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest &request)
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

void EcmClient::AssignPrivateIpAddressesAsync(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignPrivateIpAddressesRequest&;
    using Resp = AssignPrivateIpAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "AssignPrivateIpAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AssignPrivateIpAddressesOutcomeCallable EcmClient::AssignPrivateIpAddressesCallable(const AssignPrivateIpAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignPrivateIpAddressesOutcome>>();
    AssignPrivateIpAddressesAsync(
    request,
    [prom](
        const EcmClient*,
        const AssignPrivateIpAddressesRequest&,
        AssignPrivateIpAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::AssociateAddressOutcome EcmClient::AssociateAddress(const AssociateAddressRequest &request)
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

void EcmClient::AssociateAddressAsync(const AssociateAddressRequest& request, const AssociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateAddressRequest&;
    using Resp = AssociateAddressResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AssociateAddressOutcomeCallable EcmClient::AssociateAddressCallable(const AssociateAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateAddressOutcome>>();
    AssociateAddressAsync(
    request,
    [prom](
        const EcmClient*,
        const AssociateAddressRequest&,
        AssociateAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::AssociateSecurityGroupsOutcome EcmClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateSecurityGroupsResponse rsp = AssociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateSecurityGroupsOutcome(rsp);
        else
            return AssociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void EcmClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateSecurityGroupsRequest&;
    using Resp = AssociateSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AssociateSecurityGroupsOutcomeCallable EcmClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupsOutcome>>();
    AssociateSecurityGroupsAsync(
    request,
    [prom](
        const EcmClient*,
        const AssociateSecurityGroupsRequest&,
        AssociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::AttachDisksOutcome EcmClient::AttachDisks(const AttachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "AttachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachDisksResponse rsp = AttachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachDisksOutcome(rsp);
        else
            return AttachDisksOutcome(o.GetError());
    }
    else
    {
        return AttachDisksOutcome(outcome.GetError());
    }
}

void EcmClient::AttachDisksAsync(const AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachDisksRequest&;
    using Resp = AttachDisksResponse;

    DoRequestAsync<Req, Resp>(
        "AttachDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AttachDisksOutcomeCallable EcmClient::AttachDisksCallable(const AttachDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachDisksOutcome>>();
    AttachDisksAsync(
    request,
    [prom](
        const EcmClient*,
        const AttachDisksRequest&,
        AttachDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::AttachNetworkInterfaceOutcome EcmClient::AttachNetworkInterface(const AttachNetworkInterfaceRequest &request)
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

void EcmClient::AttachNetworkInterfaceAsync(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachNetworkInterfaceRequest&;
    using Resp = AttachNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "AttachNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::AttachNetworkInterfaceOutcomeCallable EcmClient::AttachNetworkInterfaceCallable(const AttachNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachNetworkInterfaceOutcome>>();
    AttachNetworkInterfaceAsync(
    request,
    [prom](
        const EcmClient*,
        const AttachNetworkInterfaceRequest&,
        AttachNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::BatchDeregisterTargetsOutcome EcmClient::BatchDeregisterTargets(const BatchDeregisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeregisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeregisterTargetsResponse rsp = BatchDeregisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeregisterTargetsOutcome(rsp);
        else
            return BatchDeregisterTargetsOutcome(o.GetError());
    }
    else
    {
        return BatchDeregisterTargetsOutcome(outcome.GetError());
    }
}

void EcmClient::BatchDeregisterTargetsAsync(const BatchDeregisterTargetsRequest& request, const BatchDeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeregisterTargetsRequest&;
    using Resp = BatchDeregisterTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeregisterTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::BatchDeregisterTargetsOutcomeCallable EcmClient::BatchDeregisterTargetsCallable(const BatchDeregisterTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeregisterTargetsOutcome>>();
    BatchDeregisterTargetsAsync(
    request,
    [prom](
        const EcmClient*,
        const BatchDeregisterTargetsRequest&,
        BatchDeregisterTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::BatchModifyTargetWeightOutcome EcmClient::BatchModifyTargetWeight(const BatchModifyTargetWeightRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyTargetWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyTargetWeightResponse rsp = BatchModifyTargetWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyTargetWeightOutcome(rsp);
        else
            return BatchModifyTargetWeightOutcome(o.GetError());
    }
    else
    {
        return BatchModifyTargetWeightOutcome(outcome.GetError());
    }
}

void EcmClient::BatchModifyTargetWeightAsync(const BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchModifyTargetWeightRequest&;
    using Resp = BatchModifyTargetWeightResponse;

    DoRequestAsync<Req, Resp>(
        "BatchModifyTargetWeight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::BatchModifyTargetWeightOutcomeCallable EcmClient::BatchModifyTargetWeightCallable(const BatchModifyTargetWeightRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchModifyTargetWeightOutcome>>();
    BatchModifyTargetWeightAsync(
    request,
    [prom](
        const EcmClient*,
        const BatchModifyTargetWeightRequest&,
        BatchModifyTargetWeightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::BatchRegisterTargetsOutcome EcmClient::BatchRegisterTargets(const BatchRegisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRegisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRegisterTargetsResponse rsp = BatchRegisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRegisterTargetsOutcome(rsp);
        else
            return BatchRegisterTargetsOutcome(o.GetError());
    }
    else
    {
        return BatchRegisterTargetsOutcome(outcome.GetError());
    }
}

void EcmClient::BatchRegisterTargetsAsync(const BatchRegisterTargetsRequest& request, const BatchRegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchRegisterTargetsRequest&;
    using Resp = BatchRegisterTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "BatchRegisterTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::BatchRegisterTargetsOutcomeCallable EcmClient::BatchRegisterTargetsCallable(const BatchRegisterTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchRegisterTargetsOutcome>>();
    BatchRegisterTargetsAsync(
    request,
    [prom](
        const EcmClient*,
        const BatchRegisterTargetsRequest&,
        BatchRegisterTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateDisksOutcome EcmClient::CreateDisks(const CreateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisksResponse rsp = CreateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisksOutcome(rsp);
        else
            return CreateDisksOutcome(o.GetError());
    }
    else
    {
        return CreateDisksOutcome(outcome.GetError());
    }
}

void EcmClient::CreateDisksAsync(const CreateDisksRequest& request, const CreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDisksRequest&;
    using Resp = CreateDisksResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateDisksOutcomeCallable EcmClient::CreateDisksCallable(const CreateDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDisksOutcome>>();
    CreateDisksAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateDisksRequest&,
        CreateDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateHaVipOutcome EcmClient::CreateHaVip(const CreateHaVipRequest &request)
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

void EcmClient::CreateHaVipAsync(const CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHaVipRequest&;
    using Resp = CreateHaVipResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHaVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateHaVipOutcomeCallable EcmClient::CreateHaVipCallable(const CreateHaVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHaVipOutcome>>();
    CreateHaVipAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateHaVipRequest&,
        CreateHaVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateImageOutcome EcmClient::CreateImage(const CreateImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageResponse rsp = CreateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageOutcome(rsp);
        else
            return CreateImageOutcome(o.GetError());
    }
    else
    {
        return CreateImageOutcome(outcome.GetError());
    }
}

void EcmClient::CreateImageAsync(const CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateImageRequest&;
    using Resp = CreateImageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateImageOutcomeCallable EcmClient::CreateImageCallable(const CreateImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImageOutcome>>();
    CreateImageAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateImageRequest&,
        CreateImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateKeyPairOutcome EcmClient::CreateKeyPair(const CreateKeyPairRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKeyPair");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKeyPairResponse rsp = CreateKeyPairResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKeyPairOutcome(rsp);
        else
            return CreateKeyPairOutcome(o.GetError());
    }
    else
    {
        return CreateKeyPairOutcome(outcome.GetError());
    }
}

void EcmClient::CreateKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateKeyPairRequest&;
    using Resp = CreateKeyPairResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKeyPair", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateKeyPairOutcomeCallable EcmClient::CreateKeyPairCallable(const CreateKeyPairRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKeyPairOutcome>>();
    CreateKeyPairAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateKeyPairRequest&,
        CreateKeyPairOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateListenerOutcome EcmClient::CreateListener(const CreateListenerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateListenerResponse rsp = CreateListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateListenerOutcome(rsp);
        else
            return CreateListenerOutcome(o.GetError());
    }
    else
    {
        return CreateListenerOutcome(outcome.GetError());
    }
}

void EcmClient::CreateListenerAsync(const CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateListenerRequest&;
    using Resp = CreateListenerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateListenerOutcomeCallable EcmClient::CreateListenerCallable(const CreateListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateListenerOutcome>>();
    CreateListenerAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateListenerRequest&,
        CreateListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateLoadBalancerOutcome EcmClient::CreateLoadBalancer(const CreateLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadBalancerResponse rsp = CreateLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadBalancerOutcome(rsp);
        else
            return CreateLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return CreateLoadBalancerOutcome(outcome.GetError());
    }
}

void EcmClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLoadBalancerRequest&;
    using Resp = CreateLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateLoadBalancerOutcomeCallable EcmClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLoadBalancerOutcome>>();
    CreateLoadBalancerAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateLoadBalancerRequest&,
        CreateLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateModuleOutcome EcmClient::CreateModule(const CreateModuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModuleResponse rsp = CreateModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModuleOutcome(rsp);
        else
            return CreateModuleOutcome(o.GetError());
    }
    else
    {
        return CreateModuleOutcome(outcome.GetError());
    }
}

void EcmClient::CreateModuleAsync(const CreateModuleRequest& request, const CreateModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModuleRequest&;
    using Resp = CreateModuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateModuleOutcomeCallable EcmClient::CreateModuleCallable(const CreateModuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModuleOutcome>>();
    CreateModuleAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateModuleRequest&,
        CreateModuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateNetworkInterfaceOutcome EcmClient::CreateNetworkInterface(const CreateNetworkInterfaceRequest &request)
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

void EcmClient::CreateNetworkInterfaceAsync(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetworkInterfaceRequest&;
    using Resp = CreateNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateNetworkInterfaceOutcomeCallable EcmClient::CreateNetworkInterfaceCallable(const CreateNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetworkInterfaceOutcome>>();
    CreateNetworkInterfaceAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateNetworkInterfaceRequest&,
        CreateNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateRouteTableOutcome EcmClient::CreateRouteTable(const CreateRouteTableRequest &request)
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

void EcmClient::CreateRouteTableAsync(const CreateRouteTableRequest& request, const CreateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRouteTableRequest&;
    using Resp = CreateRouteTableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRouteTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateRouteTableOutcomeCallable EcmClient::CreateRouteTableCallable(const CreateRouteTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRouteTableOutcome>>();
    CreateRouteTableAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateRouteTableRequest&,
        CreateRouteTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateRoutesOutcome EcmClient::CreateRoutes(const CreateRoutesRequest &request)
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

void EcmClient::CreateRoutesAsync(const CreateRoutesRequest& request, const CreateRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoutesRequest&;
    using Resp = CreateRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateRoutesOutcomeCallable EcmClient::CreateRoutesCallable(const CreateRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoutesOutcome>>();
    CreateRoutesAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateRoutesRequest&,
        CreateRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateSecurityGroupOutcome EcmClient::CreateSecurityGroup(const CreateSecurityGroupRequest &request)
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

void EcmClient::CreateSecurityGroupAsync(const CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityGroupRequest&;
    using Resp = CreateSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateSecurityGroupOutcomeCallable EcmClient::CreateSecurityGroupCallable(const CreateSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityGroupOutcome>>();
    CreateSecurityGroupAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateSecurityGroupRequest&,
        CreateSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateSecurityGroupPoliciesOutcome EcmClient::CreateSecurityGroupPolicies(const CreateSecurityGroupPoliciesRequest &request)
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

void EcmClient::CreateSecurityGroupPoliciesAsync(const CreateSecurityGroupPoliciesRequest& request, const CreateSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityGroupPoliciesRequest&;
    using Resp = CreateSecurityGroupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityGroupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateSecurityGroupPoliciesOutcomeCallable EcmClient::CreateSecurityGroupPoliciesCallable(const CreateSecurityGroupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityGroupPoliciesOutcome>>();
    CreateSecurityGroupPoliciesAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateSecurityGroupPoliciesRequest&,
        CreateSecurityGroupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateSubnetOutcome EcmClient::CreateSubnet(const CreateSubnetRequest &request)
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

void EcmClient::CreateSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubnetRequest&;
    using Resp = CreateSubnetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubnet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateSubnetOutcomeCallable EcmClient::CreateSubnetCallable(const CreateSubnetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubnetOutcome>>();
    CreateSubnetAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateSubnetRequest&,
        CreateSubnetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::CreateVpcOutcome EcmClient::CreateVpc(const CreateVpcRequest &request)
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

void EcmClient::CreateVpcAsync(const CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpcRequest&;
    using Resp = CreateVpcResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::CreateVpcOutcomeCallable EcmClient::CreateVpcCallable(const CreateVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpcOutcome>>();
    CreateVpcAsync(
    request,
    [prom](
        const EcmClient*,
        const CreateVpcRequest&,
        CreateVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteHaVipOutcome EcmClient::DeleteHaVip(const DeleteHaVipRequest &request)
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

void EcmClient::DeleteHaVipAsync(const DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteHaVipRequest&;
    using Resp = DeleteHaVipResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHaVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteHaVipOutcomeCallable EcmClient::DeleteHaVipCallable(const DeleteHaVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHaVipOutcome>>();
    DeleteHaVipAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteHaVipRequest&,
        DeleteHaVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteImageOutcome EcmClient::DeleteImage(const DeleteImageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageResponse rsp = DeleteImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageOutcome(rsp);
        else
            return DeleteImageOutcome(o.GetError());
    }
    else
    {
        return DeleteImageOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteImageRequest&;
    using Resp = DeleteImageResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteImageOutcomeCallable EcmClient::DeleteImageCallable(const DeleteImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImageOutcome>>();
    DeleteImageAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteImageRequest&,
        DeleteImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteListenerOutcome EcmClient::DeleteListener(const DeleteListenerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteListenerResponse rsp = DeleteListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteListenerOutcome(rsp);
        else
            return DeleteListenerOutcome(o.GetError());
    }
    else
    {
        return DeleteListenerOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteListenerRequest&;
    using Resp = DeleteListenerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteListenerOutcomeCallable EcmClient::DeleteListenerCallable(const DeleteListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteListenerOutcome>>();
    DeleteListenerAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteListenerRequest&,
        DeleteListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteLoadBalancerOutcome EcmClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerResponse rsp = DeleteLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerOutcome(rsp);
        else
            return DeleteLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoadBalancerRequest&;
    using Resp = DeleteLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteLoadBalancerOutcomeCallable EcmClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoadBalancerOutcome>>();
    DeleteLoadBalancerAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteLoadBalancerRequest&,
        DeleteLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteLoadBalancerListenersOutcome EcmClient::DeleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancerListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerListenersResponse rsp = DeleteLoadBalancerListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerListenersOutcome(rsp);
        else
            return DeleteLoadBalancerListenersOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerListenersOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteLoadBalancerListenersAsync(const DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoadBalancerListenersRequest&;
    using Resp = DeleteLoadBalancerListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoadBalancerListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteLoadBalancerListenersOutcomeCallable EcmClient::DeleteLoadBalancerListenersCallable(const DeleteLoadBalancerListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoadBalancerListenersOutcome>>();
    DeleteLoadBalancerListenersAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteLoadBalancerListenersRequest&,
        DeleteLoadBalancerListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteModuleOutcome EcmClient::DeleteModule(const DeleteModuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModuleResponse rsp = DeleteModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModuleOutcome(rsp);
        else
            return DeleteModuleOutcome(o.GetError());
    }
    else
    {
        return DeleteModuleOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteModuleAsync(const DeleteModuleRequest& request, const DeleteModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteModuleRequest&;
    using Resp = DeleteModuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteModule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteModuleOutcomeCallable EcmClient::DeleteModuleCallable(const DeleteModuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteModuleOutcome>>();
    DeleteModuleAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteModuleRequest&,
        DeleteModuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteNetworkInterfaceOutcome EcmClient::DeleteNetworkInterface(const DeleteNetworkInterfaceRequest &request)
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

void EcmClient::DeleteNetworkInterfaceAsync(const DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNetworkInterfaceRequest&;
    using Resp = DeleteNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteNetworkInterfaceOutcomeCallable EcmClient::DeleteNetworkInterfaceCallable(const DeleteNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNetworkInterfaceOutcome>>();
    DeleteNetworkInterfaceAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteNetworkInterfaceRequest&,
        DeleteNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteRouteTableOutcome EcmClient::DeleteRouteTable(const DeleteRouteTableRequest &request)
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

void EcmClient::DeleteRouteTableAsync(const DeleteRouteTableRequest& request, const DeleteRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRouteTableRequest&;
    using Resp = DeleteRouteTableResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRouteTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteRouteTableOutcomeCallable EcmClient::DeleteRouteTableCallable(const DeleteRouteTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRouteTableOutcome>>();
    DeleteRouteTableAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteRouteTableRequest&,
        DeleteRouteTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteRoutesOutcome EcmClient::DeleteRoutes(const DeleteRoutesRequest &request)
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

void EcmClient::DeleteRoutesAsync(const DeleteRoutesRequest& request, const DeleteRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoutesRequest&;
    using Resp = DeleteRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteRoutesOutcomeCallable EcmClient::DeleteRoutesCallable(const DeleteRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoutesOutcome>>();
    DeleteRoutesAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteRoutesRequest&,
        DeleteRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteSecurityGroupOutcome EcmClient::DeleteSecurityGroup(const DeleteSecurityGroupRequest &request)
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

void EcmClient::DeleteSecurityGroupAsync(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityGroupRequest&;
    using Resp = DeleteSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteSecurityGroupOutcomeCallable EcmClient::DeleteSecurityGroupCallable(const DeleteSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityGroupOutcome>>();
    DeleteSecurityGroupAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteSecurityGroupRequest&,
        DeleteSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteSecurityGroupPoliciesOutcome EcmClient::DeleteSecurityGroupPolicies(const DeleteSecurityGroupPoliciesRequest &request)
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

void EcmClient::DeleteSecurityGroupPoliciesAsync(const DeleteSecurityGroupPoliciesRequest& request, const DeleteSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityGroupPoliciesRequest&;
    using Resp = DeleteSecurityGroupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityGroupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteSecurityGroupPoliciesOutcomeCallable EcmClient::DeleteSecurityGroupPoliciesCallable(const DeleteSecurityGroupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityGroupPoliciesOutcome>>();
    DeleteSecurityGroupPoliciesAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteSecurityGroupPoliciesRequest&,
        DeleteSecurityGroupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteSnapshotsOutcome EcmClient::DeleteSnapshots(const DeleteSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotsResponse rsp = DeleteSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotsOutcome(rsp);
        else
            return DeleteSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotsOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteSnapshotsAsync(const DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSnapshotsRequest&;
    using Resp = DeleteSnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteSnapshotsOutcomeCallable EcmClient::DeleteSnapshotsCallable(const DeleteSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSnapshotsOutcome>>();
    DeleteSnapshotsAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteSnapshotsRequest&,
        DeleteSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteSubnetOutcome EcmClient::DeleteSubnet(const DeleteSubnetRequest &request)
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

void EcmClient::DeleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSubnetRequest&;
    using Resp = DeleteSubnetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSubnet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteSubnetOutcomeCallable EcmClient::DeleteSubnetCallable(const DeleteSubnetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSubnetOutcome>>();
    DeleteSubnetAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteSubnetRequest&,
        DeleteSubnetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DeleteVpcOutcome EcmClient::DeleteVpc(const DeleteVpcRequest &request)
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

void EcmClient::DeleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpcRequest&;
    using Resp = DeleteVpcResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DeleteVpcOutcomeCallable EcmClient::DeleteVpcCallable(const DeleteVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpcOutcome>>();
    DeleteVpcAsync(
    request,
    [prom](
        const EcmClient*,
        const DeleteVpcRequest&,
        DeleteVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeAddressQuotaOutcome EcmClient::DescribeAddressQuota(const DescribeAddressQuotaRequest &request)
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

void EcmClient::DescribeAddressQuotaAsync(const DescribeAddressQuotaRequest& request, const DescribeAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddressQuotaRequest&;
    using Resp = DescribeAddressQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddressQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeAddressQuotaOutcomeCallable EcmClient::DescribeAddressQuotaCallable(const DescribeAddressQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddressQuotaOutcome>>();
    DescribeAddressQuotaAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeAddressQuotaRequest&,
        DescribeAddressQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeAddressesOutcome EcmClient::DescribeAddresses(const DescribeAddressesRequest &request)
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

void EcmClient::DescribeAddressesAsync(const DescribeAddressesRequest& request, const DescribeAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAddressesRequest&;
    using Resp = DescribeAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeAddressesOutcomeCallable EcmClient::DescribeAddressesCallable(const DescribeAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAddressesOutcome>>();
    DescribeAddressesAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeAddressesRequest&,
        DescribeAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeBaseOverviewOutcome EcmClient::DescribeBaseOverview(const DescribeBaseOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaseOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaseOverviewResponse rsp = DescribeBaseOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaseOverviewOutcome(rsp);
        else
            return DescribeBaseOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBaseOverviewOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeBaseOverviewAsync(const DescribeBaseOverviewRequest& request, const DescribeBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaseOverviewRequest&;
    using Resp = DescribeBaseOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaseOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeBaseOverviewOutcomeCallable EcmClient::DescribeBaseOverviewCallable(const DescribeBaseOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaseOverviewOutcome>>();
    DescribeBaseOverviewAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeBaseOverviewRequest&,
        DescribeBaseOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeConfigOutcome EcmClient::DescribeConfig(const DescribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigResponse rsp = DescribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigOutcome(rsp);
        else
            return DescribeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeConfigAsync(const DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigRequest&;
    using Resp = DescribeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeConfigOutcomeCallable EcmClient::DescribeConfigCallable(const DescribeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigOutcome>>();
    DescribeConfigAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeConfigRequest&,
        DescribeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeCustomImageTaskOutcome EcmClient::DescribeCustomImageTask(const DescribeCustomImageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomImageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomImageTaskResponse rsp = DescribeCustomImageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomImageTaskOutcome(rsp);
        else
            return DescribeCustomImageTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomImageTaskOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeCustomImageTaskAsync(const DescribeCustomImageTaskRequest& request, const DescribeCustomImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomImageTaskRequest&;
    using Resp = DescribeCustomImageTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomImageTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeCustomImageTaskOutcomeCallable EcmClient::DescribeCustomImageTaskCallable(const DescribeCustomImageTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomImageTaskOutcome>>();
    DescribeCustomImageTaskAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeCustomImageTaskRequest&,
        DescribeCustomImageTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeDefaultSubnetOutcome EcmClient::DescribeDefaultSubnet(const DescribeDefaultSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultSubnetResponse rsp = DescribeDefaultSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultSubnetOutcome(rsp);
        else
            return DescribeDefaultSubnetOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultSubnetOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeDefaultSubnetAsync(const DescribeDefaultSubnetRequest& request, const DescribeDefaultSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDefaultSubnetRequest&;
    using Resp = DescribeDefaultSubnetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDefaultSubnet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeDefaultSubnetOutcomeCallable EcmClient::DescribeDefaultSubnetCallable(const DescribeDefaultSubnetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDefaultSubnetOutcome>>();
    DescribeDefaultSubnetAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeDefaultSubnetRequest&,
        DescribeDefaultSubnetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeDisksOutcome EcmClient::DescribeDisks(const DescribeDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisksResponse rsp = DescribeDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisksOutcome(rsp);
        else
            return DescribeDisksOutcome(o.GetError());
    }
    else
    {
        return DescribeDisksOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDisksRequest&;
    using Resp = DescribeDisksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeDisksOutcomeCallable EcmClient::DescribeDisksCallable(const DescribeDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisksOutcome>>();
    DescribeDisksAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeDisksRequest&,
        DescribeDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeHaVipsOutcome EcmClient::DescribeHaVips(const DescribeHaVipsRequest &request)
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

void EcmClient::DescribeHaVipsAsync(const DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHaVipsRequest&;
    using Resp = DescribeHaVipsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHaVips", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeHaVipsOutcomeCallable EcmClient::DescribeHaVipsCallable(const DescribeHaVipsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHaVipsOutcome>>();
    DescribeHaVipsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeHaVipsRequest&,
        DescribeHaVipsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeImageOutcome EcmClient::DescribeImage(const DescribeImageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageResponse rsp = DescribeImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageOutcome(rsp);
        else
            return DescribeImageOutcome(o.GetError());
    }
    else
    {
        return DescribeImageOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeImageAsync(const DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageRequest&;
    using Resp = DescribeImageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeImageOutcomeCallable EcmClient::DescribeImageCallable(const DescribeImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageOutcome>>();
    DescribeImageAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeImageRequest&,
        DescribeImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeImportImageOsOutcome EcmClient::DescribeImportImageOs(const DescribeImportImageOsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImportImageOs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImportImageOsResponse rsp = DescribeImportImageOsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImportImageOsOutcome(rsp);
        else
            return DescribeImportImageOsOutcome(o.GetError());
    }
    else
    {
        return DescribeImportImageOsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeImportImageOsAsync(const DescribeImportImageOsRequest& request, const DescribeImportImageOsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImportImageOsRequest&;
    using Resp = DescribeImportImageOsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImportImageOs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeImportImageOsOutcomeCallable EcmClient::DescribeImportImageOsCallable(const DescribeImportImageOsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImportImageOsOutcome>>();
    DescribeImportImageOsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeImportImageOsRequest&,
        DescribeImportImageOsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeInstanceTypeConfigOutcome EcmClient::DescribeInstanceTypeConfig(const DescribeInstanceTypeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTypeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTypeConfigResponse rsp = DescribeInstanceTypeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTypeConfigOutcome(rsp);
        else
            return DescribeInstanceTypeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTypeConfigOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstanceTypeConfigAsync(const DescribeInstanceTypeConfigRequest& request, const DescribeInstanceTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceTypeConfigRequest&;
    using Resp = DescribeInstanceTypeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceTypeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeInstanceTypeConfigOutcomeCallable EcmClient::DescribeInstanceTypeConfigCallable(const DescribeInstanceTypeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceTypeConfigOutcome>>();
    DescribeInstanceTypeConfigAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeInstanceTypeConfigRequest&,
        DescribeInstanceTypeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeInstanceVncUrlOutcome EcmClient::DescribeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceVncUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceVncUrlResponse rsp = DescribeInstanceVncUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceVncUrlOutcome(rsp);
        else
            return DescribeInstanceVncUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceVncUrlOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstanceVncUrlAsync(const DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceVncUrlRequest&;
    using Resp = DescribeInstanceVncUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceVncUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeInstanceVncUrlOutcomeCallable EcmClient::DescribeInstanceVncUrlCallable(const DescribeInstanceVncUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceVncUrlOutcome>>();
    DescribeInstanceVncUrlAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeInstanceVncUrlRequest&,
        DescribeInstanceVncUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeInstancesOutcome EcmClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeInstancesOutcomeCallable EcmClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeInstancesDeniedActionsOutcome EcmClient::DescribeInstancesDeniedActions(const DescribeInstancesDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDeniedActionsResponse rsp = DescribeInstancesDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDeniedActionsOutcome(rsp);
        else
            return DescribeInstancesDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDeniedActionsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstancesDeniedActionsAsync(const DescribeInstancesDeniedActionsRequest& request, const DescribeInstancesDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesDeniedActionsRequest&;
    using Resp = DescribeInstancesDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeInstancesDeniedActionsOutcomeCallable EcmClient::DescribeInstancesDeniedActionsCallable(const DescribeInstancesDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesDeniedActionsOutcome>>();
    DescribeInstancesDeniedActionsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeInstancesDeniedActionsRequest&,
        DescribeInstancesDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeListenersOutcome EcmClient::DescribeListeners(const DescribeListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenersResponse rsp = DescribeListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenersOutcome(rsp);
        else
            return DescribeListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeListenersOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeListenersAsync(const DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListenersRequest&;
    using Resp = DescribeListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeListenersOutcomeCallable EcmClient::DescribeListenersCallable(const DescribeListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListenersOutcome>>();
    DescribeListenersAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeListenersRequest&,
        DescribeListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeLoadBalanceTaskStatusOutcome EcmClient::DescribeLoadBalanceTaskStatus(const DescribeLoadBalanceTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalanceTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalanceTaskStatusResponse rsp = DescribeLoadBalanceTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalanceTaskStatusOutcome(rsp);
        else
            return DescribeLoadBalanceTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalanceTaskStatusOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeLoadBalanceTaskStatusAsync(const DescribeLoadBalanceTaskStatusRequest& request, const DescribeLoadBalanceTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalanceTaskStatusRequest&;
    using Resp = DescribeLoadBalanceTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalanceTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeLoadBalanceTaskStatusOutcomeCallable EcmClient::DescribeLoadBalanceTaskStatusCallable(const DescribeLoadBalanceTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalanceTaskStatusOutcome>>();
    DescribeLoadBalanceTaskStatusAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeLoadBalanceTaskStatusRequest&,
        DescribeLoadBalanceTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeLoadBalancersOutcome EcmClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancersResponse rsp = DescribeLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancersOutcome(rsp);
        else
            return DescribeLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancersOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancersRequest&;
    using Resp = DescribeLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeLoadBalancersOutcomeCallable EcmClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancersOutcome>>();
    DescribeLoadBalancersAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeLoadBalancersRequest&,
        DescribeLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeModuleOutcome EcmClient::DescribeModule(const DescribeModuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModuleResponse rsp = DescribeModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModuleOutcome(rsp);
        else
            return DescribeModuleOutcome(o.GetError());
    }
    else
    {
        return DescribeModuleOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeModuleAsync(const DescribeModuleRequest& request, const DescribeModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModuleRequest&;
    using Resp = DescribeModuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeModuleOutcomeCallable EcmClient::DescribeModuleCallable(const DescribeModuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModuleOutcome>>();
    DescribeModuleAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeModuleRequest&,
        DescribeModuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeModuleDetailOutcome EcmClient::DescribeModuleDetail(const DescribeModuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModuleDetailResponse rsp = DescribeModuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModuleDetailOutcome(rsp);
        else
            return DescribeModuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeModuleDetailOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeModuleDetailAsync(const DescribeModuleDetailRequest& request, const DescribeModuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModuleDetailRequest&;
    using Resp = DescribeModuleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModuleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeModuleDetailOutcomeCallable EcmClient::DescribeModuleDetailCallable(const DescribeModuleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModuleDetailOutcome>>();
    DescribeModuleDetailAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeModuleDetailRequest&,
        DescribeModuleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeMonthPeakNetworkOutcome EcmClient::DescribeMonthPeakNetwork(const DescribeMonthPeakNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonthPeakNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonthPeakNetworkResponse rsp = DescribeMonthPeakNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonthPeakNetworkOutcome(rsp);
        else
            return DescribeMonthPeakNetworkOutcome(o.GetError());
    }
    else
    {
        return DescribeMonthPeakNetworkOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeMonthPeakNetworkAsync(const DescribeMonthPeakNetworkRequest& request, const DescribeMonthPeakNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMonthPeakNetworkRequest&;
    using Resp = DescribeMonthPeakNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMonthPeakNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeMonthPeakNetworkOutcomeCallable EcmClient::DescribeMonthPeakNetworkCallable(const DescribeMonthPeakNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMonthPeakNetworkOutcome>>();
    DescribeMonthPeakNetworkAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeMonthPeakNetworkRequest&,
        DescribeMonthPeakNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeNetworkInterfacesOutcome EcmClient::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest &request)
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

void EcmClient::DescribeNetworkInterfacesAsync(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkInterfacesRequest&;
    using Resp = DescribeNetworkInterfacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkInterfaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeNetworkInterfacesOutcomeCallable EcmClient::DescribeNetworkInterfacesCallable(const DescribeNetworkInterfacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkInterfacesOutcome>>();
    DescribeNetworkInterfacesAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeNetworkInterfacesRequest&,
        DescribeNetworkInterfacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeNodeOutcome EcmClient::DescribeNode(const DescribeNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeResponse rsp = DescribeNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeOutcome(rsp);
        else
            return DescribeNodeOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeNodeAsync(const DescribeNodeRequest& request, const DescribeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNodeRequest&;
    using Resp = DescribeNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeNodeOutcomeCallable EcmClient::DescribeNodeCallable(const DescribeNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNodeOutcome>>();
    DescribeNodeAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeNodeRequest&,
        DescribeNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribePackingQuotaGroupOutcome EcmClient::DescribePackingQuotaGroup(const DescribePackingQuotaGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackingQuotaGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackingQuotaGroupResponse rsp = DescribePackingQuotaGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackingQuotaGroupOutcome(rsp);
        else
            return DescribePackingQuotaGroupOutcome(o.GetError());
    }
    else
    {
        return DescribePackingQuotaGroupOutcome(outcome.GetError());
    }
}

void EcmClient::DescribePackingQuotaGroupAsync(const DescribePackingQuotaGroupRequest& request, const DescribePackingQuotaGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePackingQuotaGroupRequest&;
    using Resp = DescribePackingQuotaGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePackingQuotaGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribePackingQuotaGroupOutcomeCallable EcmClient::DescribePackingQuotaGroupCallable(const DescribePackingQuotaGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePackingQuotaGroupOutcome>>();
    DescribePackingQuotaGroupAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribePackingQuotaGroupRequest&,
        DescribePackingQuotaGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribePeakBaseOverviewOutcome EcmClient::DescribePeakBaseOverview(const DescribePeakBaseOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePeakBaseOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePeakBaseOverviewResponse rsp = DescribePeakBaseOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePeakBaseOverviewOutcome(rsp);
        else
            return DescribePeakBaseOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribePeakBaseOverviewOutcome(outcome.GetError());
    }
}

void EcmClient::DescribePeakBaseOverviewAsync(const DescribePeakBaseOverviewRequest& request, const DescribePeakBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePeakBaseOverviewRequest&;
    using Resp = DescribePeakBaseOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePeakBaseOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribePeakBaseOverviewOutcomeCallable EcmClient::DescribePeakBaseOverviewCallable(const DescribePeakBaseOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePeakBaseOverviewOutcome>>();
    DescribePeakBaseOverviewAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribePeakBaseOverviewRequest&,
        DescribePeakBaseOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribePeakNetworkOverviewOutcome EcmClient::DescribePeakNetworkOverview(const DescribePeakNetworkOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePeakNetworkOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePeakNetworkOverviewResponse rsp = DescribePeakNetworkOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePeakNetworkOverviewOutcome(rsp);
        else
            return DescribePeakNetworkOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribePeakNetworkOverviewOutcome(outcome.GetError());
    }
}

void EcmClient::DescribePeakNetworkOverviewAsync(const DescribePeakNetworkOverviewRequest& request, const DescribePeakNetworkOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePeakNetworkOverviewRequest&;
    using Resp = DescribePeakNetworkOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePeakNetworkOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribePeakNetworkOverviewOutcomeCallable EcmClient::DescribePeakNetworkOverviewCallable(const DescribePeakNetworkOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePeakNetworkOverviewOutcome>>();
    DescribePeakNetworkOverviewAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribePeakNetworkOverviewRequest&,
        DescribePeakNetworkOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribePriceRunInstanceOutcome EcmClient::DescribePriceRunInstance(const DescribePriceRunInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePriceRunInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePriceRunInstanceResponse rsp = DescribePriceRunInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePriceRunInstanceOutcome(rsp);
        else
            return DescribePriceRunInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribePriceRunInstanceOutcome(outcome.GetError());
    }
}

void EcmClient::DescribePriceRunInstanceAsync(const DescribePriceRunInstanceRequest& request, const DescribePriceRunInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePriceRunInstanceRequest&;
    using Resp = DescribePriceRunInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePriceRunInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribePriceRunInstanceOutcomeCallable EcmClient::DescribePriceRunInstanceCallable(const DescribePriceRunInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePriceRunInstanceOutcome>>();
    DescribePriceRunInstanceAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribePriceRunInstanceRequest&,
        DescribePriceRunInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeRegionIpv6AddressesOutcome EcmClient::DescribeRegionIpv6Addresses(const DescribeRegionIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegionIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionIpv6AddressesResponse rsp = DescribeRegionIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionIpv6AddressesOutcome(rsp);
        else
            return DescribeRegionIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionIpv6AddressesOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeRegionIpv6AddressesAsync(const DescribeRegionIpv6AddressesRequest& request, const DescribeRegionIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegionIpv6AddressesRequest&;
    using Resp = DescribeRegionIpv6AddressesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegionIpv6Addresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeRegionIpv6AddressesOutcomeCallable EcmClient::DescribeRegionIpv6AddressesCallable(const DescribeRegionIpv6AddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionIpv6AddressesOutcome>>();
    DescribeRegionIpv6AddressesAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeRegionIpv6AddressesRequest&,
        DescribeRegionIpv6AddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeRouteConflictsOutcome EcmClient::DescribeRouteConflicts(const DescribeRouteConflictsRequest &request)
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

void EcmClient::DescribeRouteConflictsAsync(const DescribeRouteConflictsRequest& request, const DescribeRouteConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRouteConflictsRequest&;
    using Resp = DescribeRouteConflictsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRouteConflicts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeRouteConflictsOutcomeCallable EcmClient::DescribeRouteConflictsCallable(const DescribeRouteConflictsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRouteConflictsOutcome>>();
    DescribeRouteConflictsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeRouteConflictsRequest&,
        DescribeRouteConflictsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeRouteTablesOutcome EcmClient::DescribeRouteTables(const DescribeRouteTablesRequest &request)
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

void EcmClient::DescribeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRouteTablesRequest&;
    using Resp = DescribeRouteTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRouteTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeRouteTablesOutcomeCallable EcmClient::DescribeRouteTablesCallable(const DescribeRouteTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRouteTablesOutcome>>();
    DescribeRouteTablesAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeRouteTablesRequest&,
        DescribeRouteTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeSecurityGroupAssociationStatisticsOutcome EcmClient::DescribeSecurityGroupAssociationStatistics(const DescribeSecurityGroupAssociationStatisticsRequest &request)
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

void EcmClient::DescribeSecurityGroupAssociationStatisticsAsync(const DescribeSecurityGroupAssociationStatisticsRequest& request, const DescribeSecurityGroupAssociationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupAssociationStatisticsRequest&;
    using Resp = DescribeSecurityGroupAssociationStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupAssociationStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeSecurityGroupAssociationStatisticsOutcomeCallable EcmClient::DescribeSecurityGroupAssociationStatisticsCallable(const DescribeSecurityGroupAssociationStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupAssociationStatisticsOutcome>>();
    DescribeSecurityGroupAssociationStatisticsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeSecurityGroupAssociationStatisticsRequest&,
        DescribeSecurityGroupAssociationStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeSecurityGroupLimitsOutcome EcmClient::DescribeSecurityGroupLimits(const DescribeSecurityGroupLimitsRequest &request)
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

void EcmClient::DescribeSecurityGroupLimitsAsync(const DescribeSecurityGroupLimitsRequest& request, const DescribeSecurityGroupLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupLimitsRequest&;
    using Resp = DescribeSecurityGroupLimitsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupLimits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeSecurityGroupLimitsOutcomeCallable EcmClient::DescribeSecurityGroupLimitsCallable(const DescribeSecurityGroupLimitsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupLimitsOutcome>>();
    DescribeSecurityGroupLimitsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeSecurityGroupLimitsRequest&,
        DescribeSecurityGroupLimitsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeSecurityGroupPoliciesOutcome EcmClient::DescribeSecurityGroupPolicies(const DescribeSecurityGroupPoliciesRequest &request)
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

void EcmClient::DescribeSecurityGroupPoliciesAsync(const DescribeSecurityGroupPoliciesRequest& request, const DescribeSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupPoliciesRequest&;
    using Resp = DescribeSecurityGroupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeSecurityGroupPoliciesOutcomeCallable EcmClient::DescribeSecurityGroupPoliciesCallable(const DescribeSecurityGroupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupPoliciesOutcome>>();
    DescribeSecurityGroupPoliciesAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeSecurityGroupPoliciesRequest&,
        DescribeSecurityGroupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeSecurityGroupsOutcome EcmClient::DescribeSecurityGroups(const DescribeSecurityGroupsRequest &request)
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

void EcmClient::DescribeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupsRequest&;
    using Resp = DescribeSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeSecurityGroupsOutcomeCallable EcmClient::DescribeSecurityGroupsCallable(const DescribeSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupsOutcome>>();
    DescribeSecurityGroupsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeSecurityGroupsRequest&,
        DescribeSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeSnapshotsOutcome EcmClient::DescribeSnapshots(const DescribeSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotsResponse rsp = DescribeSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotsOutcome(rsp);
        else
            return DescribeSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotsRequest&;
    using Resp = DescribeSnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeSnapshotsOutcomeCallable EcmClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotsOutcome>>();
    DescribeSnapshotsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeSnapshotsRequest&,
        DescribeSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeSubnetsOutcome EcmClient::DescribeSubnets(const DescribeSubnetsRequest &request)
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

void EcmClient::DescribeSubnetsAsync(const DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubnetsRequest&;
    using Resp = DescribeSubnetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubnets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeSubnetsOutcomeCallable EcmClient::DescribeSubnetsCallable(const DescribeSubnetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubnetsOutcome>>();
    DescribeSubnetsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeSubnetsRequest&,
        DescribeSubnetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeTargetHealthOutcome EcmClient::DescribeTargetHealth(const DescribeTargetHealthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetHealthResponse rsp = DescribeTargetHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetHealthOutcome(rsp);
        else
            return DescribeTargetHealthOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetHealthOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeTargetHealthAsync(const DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetHealthRequest&;
    using Resp = DescribeTargetHealthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargetHealth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeTargetHealthOutcomeCallable EcmClient::DescribeTargetHealthCallable(const DescribeTargetHealthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetHealthOutcome>>();
    DescribeTargetHealthAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeTargetHealthRequest&,
        DescribeTargetHealthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeTargetsOutcome EcmClient::DescribeTargets(const DescribeTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetsResponse rsp = DescribeTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetsOutcome(rsp);
        else
            return DescribeTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeTargetsAsync(const DescribeTargetsRequest& request, const DescribeTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetsRequest&;
    using Resp = DescribeTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeTargetsOutcomeCallable EcmClient::DescribeTargetsCallable(const DescribeTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetsOutcome>>();
    DescribeTargetsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeTargetsRequest&,
        DescribeTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeTaskResultOutcome EcmClient::DescribeTaskResult(const DescribeTaskResultRequest &request)
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

void EcmClient::DescribeTaskResultAsync(const DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskResultRequest&;
    using Resp = DescribeTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeTaskResultOutcomeCallable EcmClient::DescribeTaskResultCallable(const DescribeTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskResultOutcome>>();
    DescribeTaskResultAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeTaskResultRequest&,
        DescribeTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeTaskStatusOutcome EcmClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskStatusRequest&;
    using Resp = DescribeTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeTaskStatusOutcomeCallable EcmClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskStatusOutcome>>();
    DescribeTaskStatusAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeTaskStatusRequest&,
        DescribeTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DescribeVpcsOutcome EcmClient::DescribeVpcs(const DescribeVpcsRequest &request)
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

void EcmClient::DescribeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcsRequest&;
    using Resp = DescribeVpcsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DescribeVpcsOutcomeCallable EcmClient::DescribeVpcsCallable(const DescribeVpcsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcsOutcome>>();
    DescribeVpcsAsync(
    request,
    [prom](
        const EcmClient*,
        const DescribeVpcsRequest&,
        DescribeVpcsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DetachDisksOutcome EcmClient::DetachDisks(const DetachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DetachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachDisksResponse rsp = DetachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachDisksOutcome(rsp);
        else
            return DetachDisksOutcome(o.GetError());
    }
    else
    {
        return DetachDisksOutcome(outcome.GetError());
    }
}

void EcmClient::DetachDisksAsync(const DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachDisksRequest&;
    using Resp = DetachDisksResponse;

    DoRequestAsync<Req, Resp>(
        "DetachDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DetachDisksOutcomeCallable EcmClient::DetachDisksCallable(const DetachDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachDisksOutcome>>();
    DetachDisksAsync(
    request,
    [prom](
        const EcmClient*,
        const DetachDisksRequest&,
        DetachDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DetachNetworkInterfaceOutcome EcmClient::DetachNetworkInterface(const DetachNetworkInterfaceRequest &request)
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

void EcmClient::DetachNetworkInterfaceAsync(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachNetworkInterfaceRequest&;
    using Resp = DetachNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "DetachNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DetachNetworkInterfaceOutcomeCallable EcmClient::DetachNetworkInterfaceCallable(const DetachNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachNetworkInterfaceOutcome>>();
    DetachNetworkInterfaceAsync(
    request,
    [prom](
        const EcmClient*,
        const DetachNetworkInterfaceRequest&,
        DetachNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DisableRoutesOutcome EcmClient::DisableRoutes(const DisableRoutesRequest &request)
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

void EcmClient::DisableRoutesAsync(const DisableRoutesRequest& request, const DisableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableRoutesRequest&;
    using Resp = DisableRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DisableRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DisableRoutesOutcomeCallable EcmClient::DisableRoutesCallable(const DisableRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableRoutesOutcome>>();
    DisableRoutesAsync(
    request,
    [prom](
        const EcmClient*,
        const DisableRoutesRequest&,
        DisableRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DisassociateAddressOutcome EcmClient::DisassociateAddress(const DisassociateAddressRequest &request)
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

void EcmClient::DisassociateAddressAsync(const DisassociateAddressRequest& request, const DisassociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateAddressRequest&;
    using Resp = DisassociateAddressResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DisassociateAddressOutcomeCallable EcmClient::DisassociateAddressCallable(const DisassociateAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateAddressOutcome>>();
    DisassociateAddressAsync(
    request,
    [prom](
        const EcmClient*,
        const DisassociateAddressRequest&,
        DisassociateAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DisassociateInstancesKeyPairsOutcome EcmClient::DisassociateInstancesKeyPairs(const DisassociateInstancesKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateInstancesKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateInstancesKeyPairsResponse rsp = DisassociateInstancesKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateInstancesKeyPairsOutcome(rsp);
        else
            return DisassociateInstancesKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DisassociateInstancesKeyPairsOutcome(outcome.GetError());
    }
}

void EcmClient::DisassociateInstancesKeyPairsAsync(const DisassociateInstancesKeyPairsRequest& request, const DisassociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateInstancesKeyPairsRequest&;
    using Resp = DisassociateInstancesKeyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateInstancesKeyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DisassociateInstancesKeyPairsOutcomeCallable EcmClient::DisassociateInstancesKeyPairsCallable(const DisassociateInstancesKeyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateInstancesKeyPairsOutcome>>();
    DisassociateInstancesKeyPairsAsync(
    request,
    [prom](
        const EcmClient*,
        const DisassociateInstancesKeyPairsRequest&,
        DisassociateInstancesKeyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::DisassociateSecurityGroupsOutcome EcmClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateSecurityGroupsResponse rsp = DisassociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateSecurityGroupsOutcome(rsp);
        else
            return DisassociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void EcmClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateSecurityGroupsRequest&;
    using Resp = DisassociateSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::DisassociateSecurityGroupsOutcomeCallable EcmClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupsOutcome>>();
    DisassociateSecurityGroupsAsync(
    request,
    [prom](
        const EcmClient*,
        const DisassociateSecurityGroupsRequest&,
        DisassociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::EnableRoutesOutcome EcmClient::EnableRoutes(const EnableRoutesRequest &request)
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

void EcmClient::EnableRoutesAsync(const EnableRoutesRequest& request, const EnableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableRoutesRequest&;
    using Resp = EnableRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "EnableRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::EnableRoutesOutcomeCallable EcmClient::EnableRoutesCallable(const EnableRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableRoutesOutcome>>();
    EnableRoutesAsync(
    request,
    [prom](
        const EcmClient*,
        const EnableRoutesRequest&,
        EnableRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ImportCustomImageOutcome EcmClient::ImportCustomImage(const ImportCustomImageRequest &request)
{
    auto outcome = MakeRequest(request, "ImportCustomImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportCustomImageResponse rsp = ImportCustomImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportCustomImageOutcome(rsp);
        else
            return ImportCustomImageOutcome(o.GetError());
    }
    else
    {
        return ImportCustomImageOutcome(outcome.GetError());
    }
}

void EcmClient::ImportCustomImageAsync(const ImportCustomImageRequest& request, const ImportCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportCustomImageRequest&;
    using Resp = ImportCustomImageResponse;

    DoRequestAsync<Req, Resp>(
        "ImportCustomImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ImportCustomImageOutcomeCallable EcmClient::ImportCustomImageCallable(const ImportCustomImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportCustomImageOutcome>>();
    ImportCustomImageAsync(
    request,
    [prom](
        const EcmClient*,
        const ImportCustomImageRequest&,
        ImportCustomImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ImportImageOutcome EcmClient::ImportImage(const ImportImageRequest &request)
{
    auto outcome = MakeRequest(request, "ImportImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportImageResponse rsp = ImportImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportImageOutcome(rsp);
        else
            return ImportImageOutcome(o.GetError());
    }
    else
    {
        return ImportImageOutcome(outcome.GetError());
    }
}

void EcmClient::ImportImageAsync(const ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportImageRequest&;
    using Resp = ImportImageResponse;

    DoRequestAsync<Req, Resp>(
        "ImportImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ImportImageOutcomeCallable EcmClient::ImportImageCallable(const ImportImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportImageOutcome>>();
    ImportImageAsync(
    request,
    [prom](
        const EcmClient*,
        const ImportImageRequest&,
        ImportImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::MigrateNetworkInterfaceOutcome EcmClient::MigrateNetworkInterface(const MigrateNetworkInterfaceRequest &request)
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

void EcmClient::MigrateNetworkInterfaceAsync(const MigrateNetworkInterfaceRequest& request, const MigrateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MigrateNetworkInterfaceRequest&;
    using Resp = MigrateNetworkInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "MigrateNetworkInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::MigrateNetworkInterfaceOutcomeCallable EcmClient::MigrateNetworkInterfaceCallable(const MigrateNetworkInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<MigrateNetworkInterfaceOutcome>>();
    MigrateNetworkInterfaceAsync(
    request,
    [prom](
        const EcmClient*,
        const MigrateNetworkInterfaceRequest&,
        MigrateNetworkInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::MigratePrivateIpAddressOutcome EcmClient::MigratePrivateIpAddress(const MigratePrivateIpAddressRequest &request)
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

void EcmClient::MigratePrivateIpAddressAsync(const MigratePrivateIpAddressRequest& request, const MigratePrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MigratePrivateIpAddressRequest&;
    using Resp = MigratePrivateIpAddressResponse;

    DoRequestAsync<Req, Resp>(
        "MigratePrivateIpAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::MigratePrivateIpAddressOutcomeCallable EcmClient::MigratePrivateIpAddressCallable(const MigratePrivateIpAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<MigratePrivateIpAddressOutcome>>();
    MigratePrivateIpAddressAsync(
    request,
    [prom](
        const EcmClient*,
        const MigratePrivateIpAddressRequest&,
        MigratePrivateIpAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyAddressAttributeOutcome EcmClient::ModifyAddressAttribute(const ModifyAddressAttributeRequest &request)
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

void EcmClient::ModifyAddressAttributeAsync(const ModifyAddressAttributeRequest& request, const ModifyAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAddressAttributeRequest&;
    using Resp = ModifyAddressAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAddressAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyAddressAttributeOutcomeCallable EcmClient::ModifyAddressAttributeCallable(const ModifyAddressAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAddressAttributeOutcome>>();
    ModifyAddressAttributeAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyAddressAttributeRequest&,
        ModifyAddressAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyAddressesBandwidthOutcome EcmClient::ModifyAddressesBandwidth(const ModifyAddressesBandwidthRequest &request)
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

void EcmClient::ModifyAddressesBandwidthAsync(const ModifyAddressesBandwidthRequest& request, const ModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAddressesBandwidthRequest&;
    using Resp = ModifyAddressesBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAddressesBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyAddressesBandwidthOutcomeCallable EcmClient::ModifyAddressesBandwidthCallable(const ModifyAddressesBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAddressesBandwidthOutcome>>();
    ModifyAddressesBandwidthAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyAddressesBandwidthRequest&,
        ModifyAddressesBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyDefaultSubnetOutcome EcmClient::ModifyDefaultSubnet(const ModifyDefaultSubnetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDefaultSubnet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDefaultSubnetResponse rsp = ModifyDefaultSubnetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDefaultSubnetOutcome(rsp);
        else
            return ModifyDefaultSubnetOutcome(o.GetError());
    }
    else
    {
        return ModifyDefaultSubnetOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyDefaultSubnetAsync(const ModifyDefaultSubnetRequest& request, const ModifyDefaultSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDefaultSubnetRequest&;
    using Resp = ModifyDefaultSubnetResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDefaultSubnet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyDefaultSubnetOutcomeCallable EcmClient::ModifyDefaultSubnetCallable(const ModifyDefaultSubnetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDefaultSubnetOutcome>>();
    ModifyDefaultSubnetAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyDefaultSubnetRequest&,
        ModifyDefaultSubnetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyHaVipAttributeOutcome EcmClient::ModifyHaVipAttribute(const ModifyHaVipAttributeRequest &request)
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

void EcmClient::ModifyHaVipAttributeAsync(const ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyHaVipAttributeRequest&;
    using Resp = ModifyHaVipAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHaVipAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyHaVipAttributeOutcomeCallable EcmClient::ModifyHaVipAttributeCallable(const ModifyHaVipAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHaVipAttributeOutcome>>();
    ModifyHaVipAttributeAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyHaVipAttributeRequest&,
        ModifyHaVipAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyImageAttributeOutcome EcmClient::ModifyImageAttribute(const ModifyImageAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImageAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImageAttributeResponse rsp = ModifyImageAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImageAttributeOutcome(rsp);
        else
            return ModifyImageAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyImageAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyImageAttributeAsync(const ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyImageAttributeRequest&;
    using Resp = ModifyImageAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyImageAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyImageAttributeOutcomeCallable EcmClient::ModifyImageAttributeCallable(const ModifyImageAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyImageAttributeOutcome>>();
    ModifyImageAttributeAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyImageAttributeRequest&,
        ModifyImageAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyInstancesAttributeOutcome EcmClient::ModifyInstancesAttribute(const ModifyInstancesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesAttributeResponse rsp = ModifyInstancesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesAttributeOutcome(rsp);
        else
            return ModifyInstancesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyInstancesAttributeAsync(const ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstancesAttributeRequest&;
    using Resp = ModifyInstancesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyInstancesAttributeOutcomeCallable EcmClient::ModifyInstancesAttributeCallable(const ModifyInstancesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesAttributeOutcome>>();
    ModifyInstancesAttributeAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyInstancesAttributeRequest&,
        ModifyInstancesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyIpv6AddressesAttributeOutcome EcmClient::ModifyIpv6AddressesAttribute(const ModifyIpv6AddressesAttributeRequest &request)
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

void EcmClient::ModifyIpv6AddressesAttributeAsync(const ModifyIpv6AddressesAttributeRequest& request, const ModifyIpv6AddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIpv6AddressesAttributeRequest&;
    using Resp = ModifyIpv6AddressesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIpv6AddressesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyIpv6AddressesAttributeOutcomeCallable EcmClient::ModifyIpv6AddressesAttributeCallable(const ModifyIpv6AddressesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIpv6AddressesAttributeOutcome>>();
    ModifyIpv6AddressesAttributeAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyIpv6AddressesAttributeRequest&,
        ModifyIpv6AddressesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyIpv6AddressesBandwidthOutcome EcmClient::ModifyIpv6AddressesBandwidth(const ModifyIpv6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIpv6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIpv6AddressesBandwidthResponse rsp = ModifyIpv6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIpv6AddressesBandwidthOutcome(rsp);
        else
            return ModifyIpv6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ModifyIpv6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyIpv6AddressesBandwidthAsync(const ModifyIpv6AddressesBandwidthRequest& request, const ModifyIpv6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIpv6AddressesBandwidthRequest&;
    using Resp = ModifyIpv6AddressesBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIpv6AddressesBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyIpv6AddressesBandwidthOutcomeCallable EcmClient::ModifyIpv6AddressesBandwidthCallable(const ModifyIpv6AddressesBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIpv6AddressesBandwidthOutcome>>();
    ModifyIpv6AddressesBandwidthAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyIpv6AddressesBandwidthRequest&,
        ModifyIpv6AddressesBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyListenerOutcome EcmClient::ModifyListener(const ModifyListenerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyListenerResponse rsp = ModifyListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyListenerOutcome(rsp);
        else
            return ModifyListenerOutcome(o.GetError());
    }
    else
    {
        return ModifyListenerOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyListenerAsync(const ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyListenerRequest&;
    using Resp = ModifyListenerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyListenerOutcomeCallable EcmClient::ModifyListenerCallable(const ModifyListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyListenerOutcome>>();
    ModifyListenerAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyListenerRequest&,
        ModifyListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyLoadBalancerAttributesOutcome EcmClient::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerAttributesResponse rsp = ModifyLoadBalancerAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerAttributesOutcome(rsp);
        else
            return ModifyLoadBalancerAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerAttributesOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoadBalancerAttributesRequest&;
    using Resp = ModifyLoadBalancerAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancerAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyLoadBalancerAttributesOutcomeCallable EcmClient::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancerAttributesOutcome>>();
    ModifyLoadBalancerAttributesAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyLoadBalancerAttributesRequest&,
        ModifyLoadBalancerAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyModuleConfigOutcome EcmClient::ModifyModuleConfig(const ModifyModuleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleConfigResponse rsp = ModifyModuleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleConfigOutcome(rsp);
        else
            return ModifyModuleConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleConfigOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleConfigAsync(const ModifyModuleConfigRequest& request, const ModifyModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModuleConfigRequest&;
    using Resp = ModifyModuleConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModuleConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyModuleConfigOutcomeCallable EcmClient::ModifyModuleConfigCallable(const ModifyModuleConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModuleConfigOutcome>>();
    ModifyModuleConfigAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyModuleConfigRequest&,
        ModifyModuleConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyModuleDisableWanIpOutcome EcmClient::ModifyModuleDisableWanIp(const ModifyModuleDisableWanIpRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleDisableWanIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleDisableWanIpResponse rsp = ModifyModuleDisableWanIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleDisableWanIpOutcome(rsp);
        else
            return ModifyModuleDisableWanIpOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleDisableWanIpOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleDisableWanIpAsync(const ModifyModuleDisableWanIpRequest& request, const ModifyModuleDisableWanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModuleDisableWanIpRequest&;
    using Resp = ModifyModuleDisableWanIpResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModuleDisableWanIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyModuleDisableWanIpOutcomeCallable EcmClient::ModifyModuleDisableWanIpCallable(const ModifyModuleDisableWanIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModuleDisableWanIpOutcome>>();
    ModifyModuleDisableWanIpAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyModuleDisableWanIpRequest&,
        ModifyModuleDisableWanIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyModuleImageOutcome EcmClient::ModifyModuleImage(const ModifyModuleImageRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleImageResponse rsp = ModifyModuleImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleImageOutcome(rsp);
        else
            return ModifyModuleImageOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleImageOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleImageAsync(const ModifyModuleImageRequest& request, const ModifyModuleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModuleImageRequest&;
    using Resp = ModifyModuleImageResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModuleImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyModuleImageOutcomeCallable EcmClient::ModifyModuleImageCallable(const ModifyModuleImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModuleImageOutcome>>();
    ModifyModuleImageAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyModuleImageRequest&,
        ModifyModuleImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyModuleIpDirectOutcome EcmClient::ModifyModuleIpDirect(const ModifyModuleIpDirectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleIpDirect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleIpDirectResponse rsp = ModifyModuleIpDirectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleIpDirectOutcome(rsp);
        else
            return ModifyModuleIpDirectOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleIpDirectOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleIpDirectAsync(const ModifyModuleIpDirectRequest& request, const ModifyModuleIpDirectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModuleIpDirectRequest&;
    using Resp = ModifyModuleIpDirectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModuleIpDirect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyModuleIpDirectOutcomeCallable EcmClient::ModifyModuleIpDirectCallable(const ModifyModuleIpDirectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModuleIpDirectOutcome>>();
    ModifyModuleIpDirectAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyModuleIpDirectRequest&,
        ModifyModuleIpDirectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyModuleNameOutcome EcmClient::ModifyModuleName(const ModifyModuleNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleNameResponse rsp = ModifyModuleNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleNameOutcome(rsp);
        else
            return ModifyModuleNameOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleNameOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleNameAsync(const ModifyModuleNameRequest& request, const ModifyModuleNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModuleNameRequest&;
    using Resp = ModifyModuleNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModuleName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyModuleNameOutcomeCallable EcmClient::ModifyModuleNameCallable(const ModifyModuleNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModuleNameOutcome>>();
    ModifyModuleNameAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyModuleNameRequest&,
        ModifyModuleNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyModuleNetworkOutcome EcmClient::ModifyModuleNetwork(const ModifyModuleNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleNetworkResponse rsp = ModifyModuleNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleNetworkOutcome(rsp);
        else
            return ModifyModuleNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleNetworkOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleNetworkAsync(const ModifyModuleNetworkRequest& request, const ModifyModuleNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModuleNetworkRequest&;
    using Resp = ModifyModuleNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModuleNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyModuleNetworkOutcomeCallable EcmClient::ModifyModuleNetworkCallable(const ModifyModuleNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModuleNetworkOutcome>>();
    ModifyModuleNetworkAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyModuleNetworkRequest&,
        ModifyModuleNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyModuleSecurityGroupsOutcome EcmClient::ModifyModuleSecurityGroups(const ModifyModuleSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleSecurityGroupsResponse rsp = ModifyModuleSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleSecurityGroupsOutcome(rsp);
        else
            return ModifyModuleSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleSecurityGroupsOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleSecurityGroupsAsync(const ModifyModuleSecurityGroupsRequest& request, const ModifyModuleSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModuleSecurityGroupsRequest&;
    using Resp = ModifyModuleSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModuleSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyModuleSecurityGroupsOutcomeCallable EcmClient::ModifyModuleSecurityGroupsCallable(const ModifyModuleSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModuleSecurityGroupsOutcome>>();
    ModifyModuleSecurityGroupsAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyModuleSecurityGroupsRequest&,
        ModifyModuleSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyPrivateIpAddressesAttributeOutcome EcmClient::ModifyPrivateIpAddressesAttribute(const ModifyPrivateIpAddressesAttributeRequest &request)
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

void EcmClient::ModifyPrivateIpAddressesAttributeAsync(const ModifyPrivateIpAddressesAttributeRequest& request, const ModifyPrivateIpAddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrivateIpAddressesAttributeRequest&;
    using Resp = ModifyPrivateIpAddressesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrivateIpAddressesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyPrivateIpAddressesAttributeOutcomeCallable EcmClient::ModifyPrivateIpAddressesAttributeCallable(const ModifyPrivateIpAddressesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrivateIpAddressesAttributeOutcome>>();
    ModifyPrivateIpAddressesAttributeAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyPrivateIpAddressesAttributeRequest&,
        ModifyPrivateIpAddressesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyRouteTableAttributeOutcome EcmClient::ModifyRouteTableAttribute(const ModifyRouteTableAttributeRequest &request)
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

void EcmClient::ModifyRouteTableAttributeAsync(const ModifyRouteTableAttributeRequest& request, const ModifyRouteTableAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRouteTableAttributeRequest&;
    using Resp = ModifyRouteTableAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRouteTableAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyRouteTableAttributeOutcomeCallable EcmClient::ModifyRouteTableAttributeCallable(const ModifyRouteTableAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRouteTableAttributeOutcome>>();
    ModifyRouteTableAttributeAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyRouteTableAttributeRequest&,
        ModifyRouteTableAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifySecurityGroupAttributeOutcome EcmClient::ModifySecurityGroupAttribute(const ModifySecurityGroupAttributeRequest &request)
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

void EcmClient::ModifySecurityGroupAttributeAsync(const ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupAttributeRequest&;
    using Resp = ModifySecurityGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifySecurityGroupAttributeOutcomeCallable EcmClient::ModifySecurityGroupAttributeCallable(const ModifySecurityGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupAttributeOutcome>>();
    ModifySecurityGroupAttributeAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifySecurityGroupAttributeRequest&,
        ModifySecurityGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifySecurityGroupPoliciesOutcome EcmClient::ModifySecurityGroupPolicies(const ModifySecurityGroupPoliciesRequest &request)
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

void EcmClient::ModifySecurityGroupPoliciesAsync(const ModifySecurityGroupPoliciesRequest& request, const ModifySecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupPoliciesRequest&;
    using Resp = ModifySecurityGroupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifySecurityGroupPoliciesOutcomeCallable EcmClient::ModifySecurityGroupPoliciesCallable(const ModifySecurityGroupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupPoliciesOutcome>>();
    ModifySecurityGroupPoliciesAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifySecurityGroupPoliciesRequest&,
        ModifySecurityGroupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifySubnetAttributeOutcome EcmClient::ModifySubnetAttribute(const ModifySubnetAttributeRequest &request)
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

void EcmClient::ModifySubnetAttributeAsync(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubnetAttributeRequest&;
    using Resp = ModifySubnetAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubnetAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifySubnetAttributeOutcomeCallable EcmClient::ModifySubnetAttributeCallable(const ModifySubnetAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubnetAttributeOutcome>>();
    ModifySubnetAttributeAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifySubnetAttributeRequest&,
        ModifySubnetAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyTargetPortOutcome EcmClient::ModifyTargetPort(const ModifyTargetPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetPortResponse rsp = ModifyTargetPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetPortOutcome(rsp);
        else
            return ModifyTargetPortOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetPortOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyTargetPortAsync(const ModifyTargetPortRequest& request, const ModifyTargetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTargetPortRequest&;
    using Resp = ModifyTargetPortResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTargetPort", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyTargetPortOutcomeCallable EcmClient::ModifyTargetPortCallable(const ModifyTargetPortRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetPortOutcome>>();
    ModifyTargetPortAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyTargetPortRequest&,
        ModifyTargetPortOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyTargetWeightOutcome EcmClient::ModifyTargetWeight(const ModifyTargetWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetWeightResponse rsp = ModifyTargetWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetWeightOutcome(rsp);
        else
            return ModifyTargetWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetWeightOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyTargetWeightAsync(const ModifyTargetWeightRequest& request, const ModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTargetWeightRequest&;
    using Resp = ModifyTargetWeightResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTargetWeight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyTargetWeightOutcomeCallable EcmClient::ModifyTargetWeightCallable(const ModifyTargetWeightRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetWeightOutcome>>();
    ModifyTargetWeightAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyTargetWeightRequest&,
        ModifyTargetWeightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ModifyVpcAttributeOutcome EcmClient::ModifyVpcAttribute(const ModifyVpcAttributeRequest &request)
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

void EcmClient::ModifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcAttributeRequest&;
    using Resp = ModifyVpcAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ModifyVpcAttributeOutcomeCallable EcmClient::ModifyVpcAttributeCallable(const ModifyVpcAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcAttributeOutcome>>();
    ModifyVpcAttributeAsync(
    request,
    [prom](
        const EcmClient*,
        const ModifyVpcAttributeRequest&,
        ModifyVpcAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::QueryVpcTaskResultOutcome EcmClient::QueryVpcTaskResult(const QueryVpcTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVpcTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVpcTaskResultResponse rsp = QueryVpcTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVpcTaskResultOutcome(rsp);
        else
            return QueryVpcTaskResultOutcome(o.GetError());
    }
    else
    {
        return QueryVpcTaskResultOutcome(outcome.GetError());
    }
}

void EcmClient::QueryVpcTaskResultAsync(const QueryVpcTaskResultRequest& request, const QueryVpcTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryVpcTaskResultRequest&;
    using Resp = QueryVpcTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "QueryVpcTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::QueryVpcTaskResultOutcomeCallable EcmClient::QueryVpcTaskResultCallable(const QueryVpcTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryVpcTaskResultOutcome>>();
    QueryVpcTaskResultAsync(
    request,
    [prom](
        const EcmClient*,
        const QueryVpcTaskResultRequest&,
        QueryVpcTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::RebootInstancesOutcome EcmClient::RebootInstances(const RebootInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootInstancesResponse rsp = RebootInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootInstancesOutcome(rsp);
        else
            return RebootInstancesOutcome(o.GetError());
    }
    else
    {
        return RebootInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RebootInstancesRequest&;
    using Resp = RebootInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RebootInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::RebootInstancesOutcomeCallable EcmClient::RebootInstancesCallable(const RebootInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RebootInstancesOutcome>>();
    RebootInstancesAsync(
    request,
    [prom](
        const EcmClient*,
        const RebootInstancesRequest&,
        RebootInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ReleaseAddressesOutcome EcmClient::ReleaseAddresses(const ReleaseAddressesRequest &request)
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

void EcmClient::ReleaseAddressesAsync(const ReleaseAddressesRequest& request, const ReleaseAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseAddressesRequest&;
    using Resp = ReleaseAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ReleaseAddressesOutcomeCallable EcmClient::ReleaseAddressesCallable(const ReleaseAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseAddressesOutcome>>();
    ReleaseAddressesAsync(
    request,
    [prom](
        const EcmClient*,
        const ReleaseAddressesRequest&,
        ReleaseAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ReleaseIpv6AddressesOutcome EcmClient::ReleaseIpv6Addresses(const ReleaseIpv6AddressesRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseIpv6Addresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseIpv6AddressesResponse rsp = ReleaseIpv6AddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseIpv6AddressesOutcome(rsp);
        else
            return ReleaseIpv6AddressesOutcome(o.GetError());
    }
    else
    {
        return ReleaseIpv6AddressesOutcome(outcome.GetError());
    }
}

void EcmClient::ReleaseIpv6AddressesAsync(const ReleaseIpv6AddressesRequest& request, const ReleaseIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseIpv6AddressesRequest&;
    using Resp = ReleaseIpv6AddressesResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseIpv6Addresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ReleaseIpv6AddressesOutcomeCallable EcmClient::ReleaseIpv6AddressesCallable(const ReleaseIpv6AddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseIpv6AddressesOutcome>>();
    ReleaseIpv6AddressesAsync(
    request,
    [prom](
        const EcmClient*,
        const ReleaseIpv6AddressesRequest&,
        ReleaseIpv6AddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ReleaseIpv6AddressesBandwidthOutcome EcmClient::ReleaseIpv6AddressesBandwidth(const ReleaseIpv6AddressesBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseIpv6AddressesBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseIpv6AddressesBandwidthResponse rsp = ReleaseIpv6AddressesBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseIpv6AddressesBandwidthOutcome(rsp);
        else
            return ReleaseIpv6AddressesBandwidthOutcome(o.GetError());
    }
    else
    {
        return ReleaseIpv6AddressesBandwidthOutcome(outcome.GetError());
    }
}

void EcmClient::ReleaseIpv6AddressesBandwidthAsync(const ReleaseIpv6AddressesBandwidthRequest& request, const ReleaseIpv6AddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseIpv6AddressesBandwidthRequest&;
    using Resp = ReleaseIpv6AddressesBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseIpv6AddressesBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ReleaseIpv6AddressesBandwidthOutcomeCallable EcmClient::ReleaseIpv6AddressesBandwidthCallable(const ReleaseIpv6AddressesBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseIpv6AddressesBandwidthOutcome>>();
    ReleaseIpv6AddressesBandwidthAsync(
    request,
    [prom](
        const EcmClient*,
        const ReleaseIpv6AddressesBandwidthRequest&,
        ReleaseIpv6AddressesBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::RemovePrivateIpAddressesOutcome EcmClient::RemovePrivateIpAddresses(const RemovePrivateIpAddressesRequest &request)
{
    auto outcome = MakeRequest(request, "RemovePrivateIpAddresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemovePrivateIpAddressesResponse rsp = RemovePrivateIpAddressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemovePrivateIpAddressesOutcome(rsp);
        else
            return RemovePrivateIpAddressesOutcome(o.GetError());
    }
    else
    {
        return RemovePrivateIpAddressesOutcome(outcome.GetError());
    }
}

void EcmClient::RemovePrivateIpAddressesAsync(const RemovePrivateIpAddressesRequest& request, const RemovePrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemovePrivateIpAddressesRequest&;
    using Resp = RemovePrivateIpAddressesResponse;

    DoRequestAsync<Req, Resp>(
        "RemovePrivateIpAddresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::RemovePrivateIpAddressesOutcomeCallable EcmClient::RemovePrivateIpAddressesCallable(const RemovePrivateIpAddressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemovePrivateIpAddressesOutcome>>();
    RemovePrivateIpAddressesAsync(
    request,
    [prom](
        const EcmClient*,
        const RemovePrivateIpAddressesRequest&,
        RemovePrivateIpAddressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ReplaceRouteTableAssociationOutcome EcmClient::ReplaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest &request)
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

void EcmClient::ReplaceRouteTableAssociationAsync(const ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceRouteTableAssociationRequest&;
    using Resp = ReplaceRouteTableAssociationResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceRouteTableAssociation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ReplaceRouteTableAssociationOutcomeCallable EcmClient::ReplaceRouteTableAssociationCallable(const ReplaceRouteTableAssociationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceRouteTableAssociationOutcome>>();
    ReplaceRouteTableAssociationAsync(
    request,
    [prom](
        const EcmClient*,
        const ReplaceRouteTableAssociationRequest&,
        ReplaceRouteTableAssociationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ReplaceRoutesOutcome EcmClient::ReplaceRoutes(const ReplaceRoutesRequest &request)
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

void EcmClient::ReplaceRoutesAsync(const ReplaceRoutesRequest& request, const ReplaceRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceRoutesRequest&;
    using Resp = ReplaceRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ReplaceRoutesOutcomeCallable EcmClient::ReplaceRoutesCallable(const ReplaceRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceRoutesOutcome>>();
    ReplaceRoutesAsync(
    request,
    [prom](
        const EcmClient*,
        const ReplaceRoutesRequest&,
        ReplaceRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ReplaceSecurityGroupPolicyOutcome EcmClient::ReplaceSecurityGroupPolicy(const ReplaceSecurityGroupPolicyRequest &request)
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

void EcmClient::ReplaceSecurityGroupPolicyAsync(const ReplaceSecurityGroupPolicyRequest& request, const ReplaceSecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceSecurityGroupPolicyRequest&;
    using Resp = ReplaceSecurityGroupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceSecurityGroupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ReplaceSecurityGroupPolicyOutcomeCallable EcmClient::ReplaceSecurityGroupPolicyCallable(const ReplaceSecurityGroupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceSecurityGroupPolicyOutcome>>();
    ReplaceSecurityGroupPolicyAsync(
    request,
    [prom](
        const EcmClient*,
        const ReplaceSecurityGroupPolicyRequest&,
        ReplaceSecurityGroupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ResetInstancesOutcome EcmClient::ResetInstances(const ResetInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesResponse rsp = ResetInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesOutcome(rsp);
        else
            return ResetInstancesOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::ResetInstancesAsync(const ResetInstancesRequest& request, const ResetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetInstancesRequest&;
    using Resp = ResetInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ResetInstancesOutcomeCallable EcmClient::ResetInstancesCallable(const ResetInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstancesOutcome>>();
    ResetInstancesAsync(
    request,
    [prom](
        const EcmClient*,
        const ResetInstancesRequest&,
        ResetInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ResetInstancesMaxBandwidthOutcome EcmClient::ResetInstancesMaxBandwidth(const ResetInstancesMaxBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesMaxBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesMaxBandwidthResponse rsp = ResetInstancesMaxBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesMaxBandwidthOutcome(rsp);
        else
            return ResetInstancesMaxBandwidthOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesMaxBandwidthOutcome(outcome.GetError());
    }
}

void EcmClient::ResetInstancesMaxBandwidthAsync(const ResetInstancesMaxBandwidthRequest& request, const ResetInstancesMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetInstancesMaxBandwidthRequest&;
    using Resp = ResetInstancesMaxBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstancesMaxBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ResetInstancesMaxBandwidthOutcomeCallable EcmClient::ResetInstancesMaxBandwidthCallable(const ResetInstancesMaxBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstancesMaxBandwidthOutcome>>();
    ResetInstancesMaxBandwidthAsync(
    request,
    [prom](
        const EcmClient*,
        const ResetInstancesMaxBandwidthRequest&,
        ResetInstancesMaxBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ResetInstancesPasswordOutcome EcmClient::ResetInstancesPassword(const ResetInstancesPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesPasswordResponse rsp = ResetInstancesPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesPasswordOutcome(rsp);
        else
            return ResetInstancesPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesPasswordOutcome(outcome.GetError());
    }
}

void EcmClient::ResetInstancesPasswordAsync(const ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetInstancesPasswordRequest&;
    using Resp = ResetInstancesPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstancesPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ResetInstancesPasswordOutcomeCallable EcmClient::ResetInstancesPasswordCallable(const ResetInstancesPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstancesPasswordOutcome>>();
    ResetInstancesPasswordAsync(
    request,
    [prom](
        const EcmClient*,
        const ResetInstancesPasswordRequest&,
        ResetInstancesPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::ResetRoutesOutcome EcmClient::ResetRoutes(const ResetRoutesRequest &request)
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

void EcmClient::ResetRoutesAsync(const ResetRoutesRequest& request, const ResetRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetRoutesRequest&;
    using Resp = ResetRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "ResetRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::ResetRoutesOutcomeCallable EcmClient::ResetRoutesCallable(const ResetRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetRoutesOutcome>>();
    ResetRoutesAsync(
    request,
    [prom](
        const EcmClient*,
        const ResetRoutesRequest&,
        ResetRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::RunInstancesOutcome EcmClient::RunInstances(const RunInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RunInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunInstancesResponse rsp = RunInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunInstancesOutcome(rsp);
        else
            return RunInstancesOutcome(o.GetError());
    }
    else
    {
        return RunInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::RunInstancesAsync(const RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunInstancesRequest&;
    using Resp = RunInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RunInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::RunInstancesOutcomeCallable EcmClient::RunInstancesCallable(const RunInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunInstancesOutcome>>();
    RunInstancesAsync(
    request,
    [prom](
        const EcmClient*,
        const RunInstancesRequest&,
        RunInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::SetLoadBalancerSecurityGroupsOutcome EcmClient::SetLoadBalancerSecurityGroups(const SetLoadBalancerSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "SetLoadBalancerSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLoadBalancerSecurityGroupsResponse rsp = SetLoadBalancerSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLoadBalancerSecurityGroupsOutcome(rsp);
        else
            return SetLoadBalancerSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return SetLoadBalancerSecurityGroupsOutcome(outcome.GetError());
    }
}

void EcmClient::SetLoadBalancerSecurityGroupsAsync(const SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetLoadBalancerSecurityGroupsRequest&;
    using Resp = SetLoadBalancerSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "SetLoadBalancerSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::SetLoadBalancerSecurityGroupsOutcomeCallable EcmClient::SetLoadBalancerSecurityGroupsCallable(const SetLoadBalancerSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetLoadBalancerSecurityGroupsOutcome>>();
    SetLoadBalancerSecurityGroupsAsync(
    request,
    [prom](
        const EcmClient*,
        const SetLoadBalancerSecurityGroupsRequest&,
        SetLoadBalancerSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::SetSecurityGroupForLoadbalancersOutcome EcmClient::SetSecurityGroupForLoadbalancers(const SetSecurityGroupForLoadbalancersRequest &request)
{
    auto outcome = MakeRequest(request, "SetSecurityGroupForLoadbalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetSecurityGroupForLoadbalancersResponse rsp = SetSecurityGroupForLoadbalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetSecurityGroupForLoadbalancersOutcome(rsp);
        else
            return SetSecurityGroupForLoadbalancersOutcome(o.GetError());
    }
    else
    {
        return SetSecurityGroupForLoadbalancersOutcome(outcome.GetError());
    }
}

void EcmClient::SetSecurityGroupForLoadbalancersAsync(const SetSecurityGroupForLoadbalancersRequest& request, const SetSecurityGroupForLoadbalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetSecurityGroupForLoadbalancersRequest&;
    using Resp = SetSecurityGroupForLoadbalancersResponse;

    DoRequestAsync<Req, Resp>(
        "SetSecurityGroupForLoadbalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::SetSecurityGroupForLoadbalancersOutcomeCallable EcmClient::SetSecurityGroupForLoadbalancersCallable(const SetSecurityGroupForLoadbalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetSecurityGroupForLoadbalancersOutcome>>();
    SetSecurityGroupForLoadbalancersAsync(
    request,
    [prom](
        const EcmClient*,
        const SetSecurityGroupForLoadbalancersRequest&,
        SetSecurityGroupForLoadbalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::StartInstancesOutcome EcmClient::StartInstances(const StartInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstancesResponse rsp = StartInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstancesOutcome(rsp);
        else
            return StartInstancesOutcome(o.GetError());
    }
    else
    {
        return StartInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::StartInstancesAsync(const StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartInstancesRequest&;
    using Resp = StartInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StartInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::StartInstancesOutcomeCallable EcmClient::StartInstancesCallable(const StartInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartInstancesOutcome>>();
    StartInstancesAsync(
    request,
    [prom](
        const EcmClient*,
        const StartInstancesRequest&,
        StartInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::StopInstancesOutcome EcmClient::StopInstances(const StopInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstancesResponse rsp = StopInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstancesOutcome(rsp);
        else
            return StopInstancesOutcome(o.GetError());
    }
    else
    {
        return StopInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::StopInstancesAsync(const StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopInstancesRequest&;
    using Resp = StopInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StopInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::StopInstancesOutcomeCallable EcmClient::StopInstancesCallable(const StopInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopInstancesOutcome>>();
    StopInstancesAsync(
    request,
    [prom](
        const EcmClient*,
        const StopInstancesRequest&,
        StopInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::TerminateDisksOutcome EcmClient::TerminateDisks(const TerminateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDisksResponse rsp = TerminateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDisksOutcome(rsp);
        else
            return TerminateDisksOutcome(o.GetError());
    }
    else
    {
        return TerminateDisksOutcome(outcome.GetError());
    }
}

void EcmClient::TerminateDisksAsync(const TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateDisksRequest&;
    using Resp = TerminateDisksResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::TerminateDisksOutcomeCallable EcmClient::TerminateDisksCallable(const TerminateDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateDisksOutcome>>();
    TerminateDisksAsync(
    request,
    [prom](
        const EcmClient*,
        const TerminateDisksRequest&,
        TerminateDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::TerminateInstancesOutcome EcmClient::TerminateInstances(const TerminateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstancesResponse rsp = TerminateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstancesOutcome(rsp);
        else
            return TerminateInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminateInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateInstancesRequest&;
    using Resp = TerminateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::TerminateInstancesOutcomeCallable EcmClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateInstancesOutcome>>();
    TerminateInstancesAsync(
    request,
    [prom](
        const EcmClient*,
        const TerminateInstancesRequest&,
        TerminateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcmClient::UnassignIpv6SubnetCidrBlockOutcome EcmClient::UnassignIpv6SubnetCidrBlock(const UnassignIpv6SubnetCidrBlockRequest &request)
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

void EcmClient::UnassignIpv6SubnetCidrBlockAsync(const UnassignIpv6SubnetCidrBlockRequest& request, const UnassignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnassignIpv6SubnetCidrBlockRequest&;
    using Resp = UnassignIpv6SubnetCidrBlockResponse;

    DoRequestAsync<Req, Resp>(
        "UnassignIpv6SubnetCidrBlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcmClient::UnassignIpv6SubnetCidrBlockOutcomeCallable EcmClient::UnassignIpv6SubnetCidrBlockCallable(const UnassignIpv6SubnetCidrBlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnassignIpv6SubnetCidrBlockOutcome>>();
    UnassignIpv6SubnetCidrBlockAsync(
    request,
    [prom](
        const EcmClient*,
        const UnassignIpv6SubnetCidrBlockRequest&,
        UnassignIpv6SubnetCidrBlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


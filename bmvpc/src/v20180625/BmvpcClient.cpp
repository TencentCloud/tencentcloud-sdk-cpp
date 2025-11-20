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

#include <tencentcloud/bmvpc/v20180625/BmvpcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bmvpc::V20180625;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-25";
    const string ENDPOINT = "bmvpc.tencentcloudapi.com";
}

BmvpcClient::BmvpcClient(const Credential &credential, const string &region) :
    BmvpcClient(credential, region, ClientProfile())
{
}

BmvpcClient::BmvpcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmvpcClient::AcceptVpcPeerConnectionOutcome BmvpcClient::AcceptVpcPeerConnection(const AcceptVpcPeerConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "AcceptVpcPeerConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcceptVpcPeerConnectionResponse rsp = AcceptVpcPeerConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcceptVpcPeerConnectionOutcome(rsp);
        else
            return AcceptVpcPeerConnectionOutcome(o.GetError());
    }
    else
    {
        return AcceptVpcPeerConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::AcceptVpcPeerConnectionAsync(const AcceptVpcPeerConnectionRequest& request, const AcceptVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AcceptVpcPeerConnectionRequest&;
    using Resp = AcceptVpcPeerConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "AcceptVpcPeerConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::AcceptVpcPeerConnectionOutcomeCallable BmvpcClient::AcceptVpcPeerConnectionCallable(const AcceptVpcPeerConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<AcceptVpcPeerConnectionOutcome>>();
    AcceptVpcPeerConnectionAsync(
    request,
    [prom](
        const BmvpcClient*,
        const AcceptVpcPeerConnectionRequest&,
        AcceptVpcPeerConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::AsyncRegisterIpsOutcome BmvpcClient::AsyncRegisterIps(const AsyncRegisterIpsRequest &request)
{
    auto outcome = MakeRequest(request, "AsyncRegisterIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AsyncRegisterIpsResponse rsp = AsyncRegisterIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AsyncRegisterIpsOutcome(rsp);
        else
            return AsyncRegisterIpsOutcome(o.GetError());
    }
    else
    {
        return AsyncRegisterIpsOutcome(outcome.GetError());
    }
}

void BmvpcClient::AsyncRegisterIpsAsync(const AsyncRegisterIpsRequest& request, const AsyncRegisterIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AsyncRegisterIpsRequest&;
    using Resp = AsyncRegisterIpsResponse;

    DoRequestAsync<Req, Resp>(
        "AsyncRegisterIps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::AsyncRegisterIpsOutcomeCallable BmvpcClient::AsyncRegisterIpsCallable(const AsyncRegisterIpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AsyncRegisterIpsOutcome>>();
    AsyncRegisterIpsAsync(
    request,
    [prom](
        const BmvpcClient*,
        const AsyncRegisterIpsRequest&,
        AsyncRegisterIpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::BindEipsToNatGatewayOutcome BmvpcClient::BindEipsToNatGateway(const BindEipsToNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "BindEipsToNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindEipsToNatGatewayResponse rsp = BindEipsToNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindEipsToNatGatewayOutcome(rsp);
        else
            return BindEipsToNatGatewayOutcome(o.GetError());
    }
    else
    {
        return BindEipsToNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::BindEipsToNatGatewayAsync(const BindEipsToNatGatewayRequest& request, const BindEipsToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindEipsToNatGatewayRequest&;
    using Resp = BindEipsToNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "BindEipsToNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::BindEipsToNatGatewayOutcomeCallable BmvpcClient::BindEipsToNatGatewayCallable(const BindEipsToNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindEipsToNatGatewayOutcome>>();
    BindEipsToNatGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const BindEipsToNatGatewayRequest&,
        BindEipsToNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::BindIpsToNatGatewayOutcome BmvpcClient::BindIpsToNatGateway(const BindIpsToNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "BindIpsToNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindIpsToNatGatewayResponse rsp = BindIpsToNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindIpsToNatGatewayOutcome(rsp);
        else
            return BindIpsToNatGatewayOutcome(o.GetError());
    }
    else
    {
        return BindIpsToNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::BindIpsToNatGatewayAsync(const BindIpsToNatGatewayRequest& request, const BindIpsToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindIpsToNatGatewayRequest&;
    using Resp = BindIpsToNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "BindIpsToNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::BindIpsToNatGatewayOutcomeCallable BmvpcClient::BindIpsToNatGatewayCallable(const BindIpsToNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindIpsToNatGatewayOutcome>>();
    BindIpsToNatGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const BindIpsToNatGatewayRequest&,
        BindIpsToNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::BindSubnetsToNatGatewayOutcome BmvpcClient::BindSubnetsToNatGateway(const BindSubnetsToNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "BindSubnetsToNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindSubnetsToNatGatewayResponse rsp = BindSubnetsToNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindSubnetsToNatGatewayOutcome(rsp);
        else
            return BindSubnetsToNatGatewayOutcome(o.GetError());
    }
    else
    {
        return BindSubnetsToNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::BindSubnetsToNatGatewayAsync(const BindSubnetsToNatGatewayRequest& request, const BindSubnetsToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindSubnetsToNatGatewayRequest&;
    using Resp = BindSubnetsToNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "BindSubnetsToNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::BindSubnetsToNatGatewayOutcomeCallable BmvpcClient::BindSubnetsToNatGatewayCallable(const BindSubnetsToNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindSubnetsToNatGatewayOutcome>>();
    BindSubnetsToNatGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const BindSubnetsToNatGatewayRequest&,
        BindSubnetsToNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::CreateCustomerGatewayOutcome BmvpcClient::CreateCustomerGateway(const CreateCustomerGatewayRequest &request)
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

void BmvpcClient::CreateCustomerGatewayAsync(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomerGatewayRequest&;
    using Resp = CreateCustomerGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomerGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::CreateCustomerGatewayOutcomeCallable BmvpcClient::CreateCustomerGatewayCallable(const CreateCustomerGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomerGatewayOutcome>>();
    CreateCustomerGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const CreateCustomerGatewayRequest&,
        CreateCustomerGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::CreateDockerSubnetWithVlanOutcome BmvpcClient::CreateDockerSubnetWithVlan(const CreateDockerSubnetWithVlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDockerSubnetWithVlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDockerSubnetWithVlanResponse rsp = CreateDockerSubnetWithVlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDockerSubnetWithVlanOutcome(rsp);
        else
            return CreateDockerSubnetWithVlanOutcome(o.GetError());
    }
    else
    {
        return CreateDockerSubnetWithVlanOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateDockerSubnetWithVlanAsync(const CreateDockerSubnetWithVlanRequest& request, const CreateDockerSubnetWithVlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDockerSubnetWithVlanRequest&;
    using Resp = CreateDockerSubnetWithVlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDockerSubnetWithVlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::CreateDockerSubnetWithVlanOutcomeCallable BmvpcClient::CreateDockerSubnetWithVlanCallable(const CreateDockerSubnetWithVlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDockerSubnetWithVlanOutcome>>();
    CreateDockerSubnetWithVlanAsync(
    request,
    [prom](
        const BmvpcClient*,
        const CreateDockerSubnetWithVlanRequest&,
        CreateDockerSubnetWithVlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::CreateHostedInterfaceOutcome BmvpcClient::CreateHostedInterface(const CreateHostedInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHostedInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHostedInterfaceResponse rsp = CreateHostedInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHostedInterfaceOutcome(rsp);
        else
            return CreateHostedInterfaceOutcome(o.GetError());
    }
    else
    {
        return CreateHostedInterfaceOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateHostedInterfaceAsync(const CreateHostedInterfaceRequest& request, const CreateHostedInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHostedInterfaceRequest&;
    using Resp = CreateHostedInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHostedInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::CreateHostedInterfaceOutcomeCallable BmvpcClient::CreateHostedInterfaceCallable(const CreateHostedInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHostedInterfaceOutcome>>();
    CreateHostedInterfaceAsync(
    request,
    [prom](
        const BmvpcClient*,
        const CreateHostedInterfaceRequest&,
        CreateHostedInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::CreateInterfacesOutcome BmvpcClient::CreateInterfaces(const CreateInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInterfacesResponse rsp = CreateInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInterfacesOutcome(rsp);
        else
            return CreateInterfacesOutcome(o.GetError());
    }
    else
    {
        return CreateInterfacesOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateInterfacesAsync(const CreateInterfacesRequest& request, const CreateInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInterfacesRequest&;
    using Resp = CreateInterfacesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInterfaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::CreateInterfacesOutcomeCallable BmvpcClient::CreateInterfacesCallable(const CreateInterfacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInterfacesOutcome>>();
    CreateInterfacesAsync(
    request,
    [prom](
        const BmvpcClient*,
        const CreateInterfacesRequest&,
        CreateInterfacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::CreateNatGatewayOutcome BmvpcClient::CreateNatGateway(const CreateNatGatewayRequest &request)
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

void BmvpcClient::CreateNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNatGatewayRequest&;
    using Resp = CreateNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::CreateNatGatewayOutcomeCallable BmvpcClient::CreateNatGatewayCallable(const CreateNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNatGatewayOutcome>>();
    CreateNatGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const CreateNatGatewayRequest&,
        CreateNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::CreateRoutePoliciesOutcome BmvpcClient::CreateRoutePolicies(const CreateRoutePoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoutePolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoutePoliciesResponse rsp = CreateRoutePoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoutePoliciesOutcome(rsp);
        else
            return CreateRoutePoliciesOutcome(o.GetError());
    }
    else
    {
        return CreateRoutePoliciesOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateRoutePoliciesAsync(const CreateRoutePoliciesRequest& request, const CreateRoutePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoutePoliciesRequest&;
    using Resp = CreateRoutePoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoutePolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::CreateRoutePoliciesOutcomeCallable BmvpcClient::CreateRoutePoliciesCallable(const CreateRoutePoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoutePoliciesOutcome>>();
    CreateRoutePoliciesAsync(
    request,
    [prom](
        const BmvpcClient*,
        const CreateRoutePoliciesRequest&,
        CreateRoutePoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::CreateSubnetOutcome BmvpcClient::CreateSubnet(const CreateSubnetRequest &request)
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

void BmvpcClient::CreateSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BmvpcClient::CreateSubnetOutcomeCallable BmvpcClient::CreateSubnetCallable(const CreateSubnetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubnetOutcome>>();
    CreateSubnetAsync(
    request,
    [prom](
        const BmvpcClient*,
        const CreateSubnetRequest&,
        CreateSubnetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::CreateVirtualSubnetWithVlanOutcome BmvpcClient::CreateVirtualSubnetWithVlan(const CreateVirtualSubnetWithVlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVirtualSubnetWithVlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVirtualSubnetWithVlanResponse rsp = CreateVirtualSubnetWithVlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVirtualSubnetWithVlanOutcome(rsp);
        else
            return CreateVirtualSubnetWithVlanOutcome(o.GetError());
    }
    else
    {
        return CreateVirtualSubnetWithVlanOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateVirtualSubnetWithVlanAsync(const CreateVirtualSubnetWithVlanRequest& request, const CreateVirtualSubnetWithVlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVirtualSubnetWithVlanRequest&;
    using Resp = CreateVirtualSubnetWithVlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVirtualSubnetWithVlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::CreateVirtualSubnetWithVlanOutcomeCallable BmvpcClient::CreateVirtualSubnetWithVlanCallable(const CreateVirtualSubnetWithVlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVirtualSubnetWithVlanOutcome>>();
    CreateVirtualSubnetWithVlanAsync(
    request,
    [prom](
        const BmvpcClient*,
        const CreateVirtualSubnetWithVlanRequest&,
        CreateVirtualSubnetWithVlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::CreateVpcOutcome BmvpcClient::CreateVpc(const CreateVpcRequest &request)
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

void BmvpcClient::CreateVpcAsync(const CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BmvpcClient::CreateVpcOutcomeCallable BmvpcClient::CreateVpcCallable(const CreateVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpcOutcome>>();
    CreateVpcAsync(
    request,
    [prom](
        const BmvpcClient*,
        const CreateVpcRequest&,
        CreateVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::CreateVpcPeerConnectionOutcome BmvpcClient::CreateVpcPeerConnection(const CreateVpcPeerConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpcPeerConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcPeerConnectionResponse rsp = CreateVpcPeerConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcPeerConnectionOutcome(rsp);
        else
            return CreateVpcPeerConnectionOutcome(o.GetError());
    }
    else
    {
        return CreateVpcPeerConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::CreateVpcPeerConnectionAsync(const CreateVpcPeerConnectionRequest& request, const CreateVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpcPeerConnectionRequest&;
    using Resp = CreateVpcPeerConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpcPeerConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::CreateVpcPeerConnectionOutcomeCallable BmvpcClient::CreateVpcPeerConnectionCallable(const CreateVpcPeerConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpcPeerConnectionOutcome>>();
    CreateVpcPeerConnectionAsync(
    request,
    [prom](
        const BmvpcClient*,
        const CreateVpcPeerConnectionRequest&,
        CreateVpcPeerConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteCustomerGatewayOutcome BmvpcClient::DeleteCustomerGateway(const DeleteCustomerGatewayRequest &request)
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

void BmvpcClient::DeleteCustomerGatewayAsync(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomerGatewayRequest&;
    using Resp = DeleteCustomerGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomerGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeleteCustomerGatewayOutcomeCallable BmvpcClient::DeleteCustomerGatewayCallable(const DeleteCustomerGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomerGatewayOutcome>>();
    DeleteCustomerGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteCustomerGatewayRequest&,
        DeleteCustomerGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteHostedInterfaceOutcome BmvpcClient::DeleteHostedInterface(const DeleteHostedInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHostedInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHostedInterfaceResponse rsp = DeleteHostedInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHostedInterfaceOutcome(rsp);
        else
            return DeleteHostedInterfaceOutcome(o.GetError());
    }
    else
    {
        return DeleteHostedInterfaceOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteHostedInterfaceAsync(const DeleteHostedInterfaceRequest& request, const DeleteHostedInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteHostedInterfaceRequest&;
    using Resp = DeleteHostedInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHostedInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeleteHostedInterfaceOutcomeCallable BmvpcClient::DeleteHostedInterfaceCallable(const DeleteHostedInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHostedInterfaceOutcome>>();
    DeleteHostedInterfaceAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteHostedInterfaceRequest&,
        DeleteHostedInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteHostedInterfacesOutcome BmvpcClient::DeleteHostedInterfaces(const DeleteHostedInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHostedInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHostedInterfacesResponse rsp = DeleteHostedInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHostedInterfacesOutcome(rsp);
        else
            return DeleteHostedInterfacesOutcome(o.GetError());
    }
    else
    {
        return DeleteHostedInterfacesOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteHostedInterfacesAsync(const DeleteHostedInterfacesRequest& request, const DeleteHostedInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteHostedInterfacesRequest&;
    using Resp = DeleteHostedInterfacesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHostedInterfaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeleteHostedInterfacesOutcomeCallable BmvpcClient::DeleteHostedInterfacesCallable(const DeleteHostedInterfacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHostedInterfacesOutcome>>();
    DeleteHostedInterfacesAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteHostedInterfacesRequest&,
        DeleteHostedInterfacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteInterfacesOutcome BmvpcClient::DeleteInterfaces(const DeleteInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInterfacesResponse rsp = DeleteInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInterfacesOutcome(rsp);
        else
            return DeleteInterfacesOutcome(o.GetError());
    }
    else
    {
        return DeleteInterfacesOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteInterfacesAsync(const DeleteInterfacesRequest& request, const DeleteInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInterfacesRequest&;
    using Resp = DeleteInterfacesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInterfaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeleteInterfacesOutcomeCallable BmvpcClient::DeleteInterfacesCallable(const DeleteInterfacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInterfacesOutcome>>();
    DeleteInterfacesAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteInterfacesRequest&,
        DeleteInterfacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteNatGatewayOutcome BmvpcClient::DeleteNatGateway(const DeleteNatGatewayRequest &request)
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

void BmvpcClient::DeleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNatGatewayRequest&;
    using Resp = DeleteNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeleteNatGatewayOutcomeCallable BmvpcClient::DeleteNatGatewayCallable(const DeleteNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNatGatewayOutcome>>();
    DeleteNatGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteNatGatewayRequest&,
        DeleteNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteRoutePolicyOutcome BmvpcClient::DeleteRoutePolicy(const DeleteRoutePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoutePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoutePolicyResponse rsp = DeleteRoutePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoutePolicyOutcome(rsp);
        else
            return DeleteRoutePolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteRoutePolicyOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteRoutePolicyAsync(const DeleteRoutePolicyRequest& request, const DeleteRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoutePolicyRequest&;
    using Resp = DeleteRoutePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoutePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeleteRoutePolicyOutcomeCallable BmvpcClient::DeleteRoutePolicyCallable(const DeleteRoutePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoutePolicyOutcome>>();
    DeleteRoutePolicyAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteRoutePolicyRequest&,
        DeleteRoutePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteSubnetOutcome BmvpcClient::DeleteSubnet(const DeleteSubnetRequest &request)
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

void BmvpcClient::DeleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BmvpcClient::DeleteSubnetOutcomeCallable BmvpcClient::DeleteSubnetCallable(const DeleteSubnetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSubnetOutcome>>();
    DeleteSubnetAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteSubnetRequest&,
        DeleteSubnetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteVirtualIpOutcome BmvpcClient::DeleteVirtualIp(const DeleteVirtualIpRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVirtualIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVirtualIpResponse rsp = DeleteVirtualIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVirtualIpOutcome(rsp);
        else
            return DeleteVirtualIpOutcome(o.GetError());
    }
    else
    {
        return DeleteVirtualIpOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteVirtualIpAsync(const DeleteVirtualIpRequest& request, const DeleteVirtualIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVirtualIpRequest&;
    using Resp = DeleteVirtualIpResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVirtualIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeleteVirtualIpOutcomeCallable BmvpcClient::DeleteVirtualIpCallable(const DeleteVirtualIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVirtualIpOutcome>>();
    DeleteVirtualIpAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteVirtualIpRequest&,
        DeleteVirtualIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteVpcOutcome BmvpcClient::DeleteVpc(const DeleteVpcRequest &request)
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

void BmvpcClient::DeleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BmvpcClient::DeleteVpcOutcomeCallable BmvpcClient::DeleteVpcCallable(const DeleteVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpcOutcome>>();
    DeleteVpcAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteVpcRequest&,
        DeleteVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteVpcPeerConnectionOutcome BmvpcClient::DeleteVpcPeerConnection(const DeleteVpcPeerConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpcPeerConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcPeerConnectionResponse rsp = DeleteVpcPeerConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcPeerConnectionOutcome(rsp);
        else
            return DeleteVpcPeerConnectionOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcPeerConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeleteVpcPeerConnectionAsync(const DeleteVpcPeerConnectionRequest& request, const DeleteVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpcPeerConnectionRequest&;
    using Resp = DeleteVpcPeerConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpcPeerConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeleteVpcPeerConnectionOutcomeCallable BmvpcClient::DeleteVpcPeerConnectionCallable(const DeleteVpcPeerConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpcPeerConnectionOutcome>>();
    DeleteVpcPeerConnectionAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteVpcPeerConnectionRequest&,
        DeleteVpcPeerConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteVpnConnectionOutcome BmvpcClient::DeleteVpnConnection(const DeleteVpnConnectionRequest &request)
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

void BmvpcClient::DeleteVpnConnectionAsync(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpnConnectionRequest&;
    using Resp = DeleteVpnConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpnConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeleteVpnConnectionOutcomeCallable BmvpcClient::DeleteVpnConnectionCallable(const DeleteVpnConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpnConnectionOutcome>>();
    DeleteVpnConnectionAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteVpnConnectionRequest&,
        DeleteVpnConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeleteVpnGatewayOutcome BmvpcClient::DeleteVpnGateway(const DeleteVpnGatewayRequest &request)
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

void BmvpcClient::DeleteVpnGatewayAsync(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpnGatewayRequest&;
    using Resp = DeleteVpnGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpnGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeleteVpnGatewayOutcomeCallable BmvpcClient::DeleteVpnGatewayCallable(const DeleteVpnGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpnGatewayOutcome>>();
    DeleteVpnGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeleteVpnGatewayRequest&,
        DeleteVpnGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DeregisterIpsOutcome BmvpcClient::DeregisterIps(const DeregisterIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterIpsResponse rsp = DeregisterIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterIpsOutcome(rsp);
        else
            return DeregisterIpsOutcome(o.GetError());
    }
    else
    {
        return DeregisterIpsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DeregisterIpsAsync(const DeregisterIpsRequest& request, const DeregisterIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeregisterIpsRequest&;
    using Resp = DeregisterIpsResponse;

    DoRequestAsync<Req, Resp>(
        "DeregisterIps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DeregisterIpsOutcomeCallable BmvpcClient::DeregisterIpsCallable(const DeregisterIpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeregisterIpsOutcome>>();
    DeregisterIpsAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DeregisterIpsRequest&,
        DeregisterIpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeCustomerGatewaysOutcome BmvpcClient::DescribeCustomerGateways(const DescribeCustomerGatewaysRequest &request)
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

void BmvpcClient::DescribeCustomerGatewaysAsync(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerGatewaysRequest&;
    using Resp = DescribeCustomerGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeCustomerGatewaysOutcomeCallable BmvpcClient::DescribeCustomerGatewaysCallable(const DescribeCustomerGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerGatewaysOutcome>>();
    DescribeCustomerGatewaysAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeCustomerGatewaysRequest&,
        DescribeCustomerGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeNatGatewaysOutcome BmvpcClient::DescribeNatGateways(const DescribeNatGatewaysRequest &request)
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

void BmvpcClient::DescribeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatGatewaysRequest&;
    using Resp = DescribeNatGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeNatGatewaysOutcomeCallable BmvpcClient::DescribeNatGatewaysCallable(const DescribeNatGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatGatewaysOutcome>>();
    DescribeNatGatewaysAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeNatGatewaysRequest&,
        DescribeNatGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeNatSubnetsOutcome BmvpcClient::DescribeNatSubnets(const DescribeNatSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatSubnetsResponse rsp = DescribeNatSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatSubnetsOutcome(rsp);
        else
            return DescribeNatSubnetsOutcome(o.GetError());
    }
    else
    {
        return DescribeNatSubnetsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeNatSubnetsAsync(const DescribeNatSubnetsRequest& request, const DescribeNatSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatSubnetsRequest&;
    using Resp = DescribeNatSubnetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatSubnets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeNatSubnetsOutcomeCallable BmvpcClient::DescribeNatSubnetsCallable(const DescribeNatSubnetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatSubnetsOutcome>>();
    DescribeNatSubnetsAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeNatSubnetsRequest&,
        DescribeNatSubnetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeRoutePoliciesOutcome BmvpcClient::DescribeRoutePolicies(const DescribeRoutePoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoutePolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoutePoliciesResponse rsp = DescribeRoutePoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoutePoliciesOutcome(rsp);
        else
            return DescribeRoutePoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeRoutePoliciesOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeRoutePoliciesAsync(const DescribeRoutePoliciesRequest& request, const DescribeRoutePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoutePoliciesRequest&;
    using Resp = DescribeRoutePoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoutePolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeRoutePoliciesOutcomeCallable BmvpcClient::DescribeRoutePoliciesCallable(const DescribeRoutePoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoutePoliciesOutcome>>();
    DescribeRoutePoliciesAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeRoutePoliciesRequest&,
        DescribeRoutePoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeRouteTablesOutcome BmvpcClient::DescribeRouteTables(const DescribeRouteTablesRequest &request)
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

void BmvpcClient::DescribeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BmvpcClient::DescribeRouteTablesOutcomeCallable BmvpcClient::DescribeRouteTablesCallable(const DescribeRouteTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRouteTablesOutcome>>();
    DescribeRouteTablesAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeRouteTablesRequest&,
        DescribeRouteTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeSubnetAvailableIpsOutcome BmvpcClient::DescribeSubnetAvailableIps(const DescribeSubnetAvailableIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetAvailableIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetAvailableIpsResponse rsp = DescribeSubnetAvailableIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetAvailableIpsOutcome(rsp);
        else
            return DescribeSubnetAvailableIpsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetAvailableIpsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeSubnetAvailableIpsAsync(const DescribeSubnetAvailableIpsRequest& request, const DescribeSubnetAvailableIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubnetAvailableIpsRequest&;
    using Resp = DescribeSubnetAvailableIpsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubnetAvailableIps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeSubnetAvailableIpsOutcomeCallable BmvpcClient::DescribeSubnetAvailableIpsCallable(const DescribeSubnetAvailableIpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubnetAvailableIpsOutcome>>();
    DescribeSubnetAvailableIpsAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeSubnetAvailableIpsRequest&,
        DescribeSubnetAvailableIpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeSubnetByDeviceOutcome BmvpcClient::DescribeSubnetByDevice(const DescribeSubnetByDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetByDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetByDeviceResponse rsp = DescribeSubnetByDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetByDeviceOutcome(rsp);
        else
            return DescribeSubnetByDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetByDeviceOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeSubnetByDeviceAsync(const DescribeSubnetByDeviceRequest& request, const DescribeSubnetByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubnetByDeviceRequest&;
    using Resp = DescribeSubnetByDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubnetByDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeSubnetByDeviceOutcomeCallable BmvpcClient::DescribeSubnetByDeviceCallable(const DescribeSubnetByDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubnetByDeviceOutcome>>();
    DescribeSubnetByDeviceAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeSubnetByDeviceRequest&,
        DescribeSubnetByDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeSubnetByHostedDeviceOutcome BmvpcClient::DescribeSubnetByHostedDevice(const DescribeSubnetByHostedDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetByHostedDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetByHostedDeviceResponse rsp = DescribeSubnetByHostedDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetByHostedDeviceOutcome(rsp);
        else
            return DescribeSubnetByHostedDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetByHostedDeviceOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeSubnetByHostedDeviceAsync(const DescribeSubnetByHostedDeviceRequest& request, const DescribeSubnetByHostedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubnetByHostedDeviceRequest&;
    using Resp = DescribeSubnetByHostedDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubnetByHostedDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeSubnetByHostedDeviceOutcomeCallable BmvpcClient::DescribeSubnetByHostedDeviceCallable(const DescribeSubnetByHostedDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubnetByHostedDeviceOutcome>>();
    DescribeSubnetByHostedDeviceAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeSubnetByHostedDeviceRequest&,
        DescribeSubnetByHostedDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeSubnetsOutcome BmvpcClient::DescribeSubnets(const DescribeSubnetsRequest &request)
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

void BmvpcClient::DescribeSubnetsAsync(const DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BmvpcClient::DescribeSubnetsOutcomeCallable BmvpcClient::DescribeSubnetsCallable(const DescribeSubnetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubnetsOutcome>>();
    DescribeSubnetsAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeSubnetsRequest&,
        DescribeSubnetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeTaskStatusOutcome BmvpcClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
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

void BmvpcClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BmvpcClient::DescribeTaskStatusOutcomeCallable BmvpcClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskStatusOutcome>>();
    DescribeTaskStatusAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeTaskStatusRequest&,
        DescribeTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeVpcPeerConnectionsOutcome BmvpcClient::DescribeVpcPeerConnections(const DescribeVpcPeerConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcPeerConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcPeerConnectionsResponse rsp = DescribeVpcPeerConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcPeerConnectionsOutcome(rsp);
        else
            return DescribeVpcPeerConnectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcPeerConnectionsOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpcPeerConnectionsAsync(const DescribeVpcPeerConnectionsRequest& request, const DescribeVpcPeerConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcPeerConnectionsRequest&;
    using Resp = DescribeVpcPeerConnectionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcPeerConnections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeVpcPeerConnectionsOutcomeCallable BmvpcClient::DescribeVpcPeerConnectionsCallable(const DescribeVpcPeerConnectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcPeerConnectionsOutcome>>();
    DescribeVpcPeerConnectionsAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeVpcPeerConnectionsRequest&,
        DescribeVpcPeerConnectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeVpcQuotaOutcome BmvpcClient::DescribeVpcQuota(const DescribeVpcQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcQuotaResponse rsp = DescribeVpcQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcQuotaOutcome(rsp);
        else
            return DescribeVpcQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcQuotaOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpcQuotaAsync(const DescribeVpcQuotaRequest& request, const DescribeVpcQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcQuotaRequest&;
    using Resp = DescribeVpcQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeVpcQuotaOutcomeCallable BmvpcClient::DescribeVpcQuotaCallable(const DescribeVpcQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcQuotaOutcome>>();
    DescribeVpcQuotaAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeVpcQuotaRequest&,
        DescribeVpcQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeVpcResourceOutcome BmvpcClient::DescribeVpcResource(const DescribeVpcResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcResourceResponse rsp = DescribeVpcResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcResourceOutcome(rsp);
        else
            return DescribeVpcResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcResourceOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpcResourceAsync(const DescribeVpcResourceRequest& request, const DescribeVpcResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcResourceRequest&;
    using Resp = DescribeVpcResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeVpcResourceOutcomeCallable BmvpcClient::DescribeVpcResourceCallable(const DescribeVpcResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcResourceOutcome>>();
    DescribeVpcResourceAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeVpcResourceRequest&,
        DescribeVpcResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeVpcViewOutcome BmvpcClient::DescribeVpcView(const DescribeVpcViewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcView");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcViewResponse rsp = DescribeVpcViewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcViewOutcome(rsp);
        else
            return DescribeVpcViewOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcViewOutcome(outcome.GetError());
    }
}

void BmvpcClient::DescribeVpcViewAsync(const DescribeVpcViewRequest& request, const DescribeVpcViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcViewRequest&;
    using Resp = DescribeVpcViewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcView", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeVpcViewOutcomeCallable BmvpcClient::DescribeVpcViewCallable(const DescribeVpcViewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcViewOutcome>>();
    DescribeVpcViewAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeVpcViewRequest&,
        DescribeVpcViewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeVpcsOutcome BmvpcClient::DescribeVpcs(const DescribeVpcsRequest &request)
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

void BmvpcClient::DescribeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BmvpcClient::DescribeVpcsOutcomeCallable BmvpcClient::DescribeVpcsCallable(const DescribeVpcsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcsOutcome>>();
    DescribeVpcsAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeVpcsRequest&,
        DescribeVpcsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeVpnConnectionsOutcome BmvpcClient::DescribeVpnConnections(const DescribeVpnConnectionsRequest &request)
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

void BmvpcClient::DescribeVpnConnectionsAsync(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpnConnectionsRequest&;
    using Resp = DescribeVpnConnectionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpnConnections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeVpnConnectionsOutcomeCallable BmvpcClient::DescribeVpnConnectionsCallable(const DescribeVpnConnectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpnConnectionsOutcome>>();
    DescribeVpnConnectionsAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeVpnConnectionsRequest&,
        DescribeVpnConnectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DescribeVpnGatewaysOutcome BmvpcClient::DescribeVpnGateways(const DescribeVpnGatewaysRequest &request)
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

void BmvpcClient::DescribeVpnGatewaysAsync(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpnGatewaysRequest&;
    using Resp = DescribeVpnGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpnGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DescribeVpnGatewaysOutcomeCallable BmvpcClient::DescribeVpnGatewaysCallable(const DescribeVpnGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpnGatewaysOutcome>>();
    DescribeVpnGatewaysAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DescribeVpnGatewaysRequest&,
        DescribeVpnGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::DownloadCustomerGatewayConfigurationOutcome BmvpcClient::DownloadCustomerGatewayConfiguration(const DownloadCustomerGatewayConfigurationRequest &request)
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

void BmvpcClient::DownloadCustomerGatewayConfigurationAsync(const DownloadCustomerGatewayConfigurationRequest& request, const DownloadCustomerGatewayConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadCustomerGatewayConfigurationRequest&;
    using Resp = DownloadCustomerGatewayConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadCustomerGatewayConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::DownloadCustomerGatewayConfigurationOutcomeCallable BmvpcClient::DownloadCustomerGatewayConfigurationCallable(const DownloadCustomerGatewayConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadCustomerGatewayConfigurationOutcome>>();
    DownloadCustomerGatewayConfigurationAsync(
    request,
    [prom](
        const BmvpcClient*,
        const DownloadCustomerGatewayConfigurationRequest&,
        DownloadCustomerGatewayConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::ModifyCustomerGatewayAttributeOutcome BmvpcClient::ModifyCustomerGatewayAttribute(const ModifyCustomerGatewayAttributeRequest &request)
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

void BmvpcClient::ModifyCustomerGatewayAttributeAsync(const ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomerGatewayAttributeRequest&;
    using Resp = ModifyCustomerGatewayAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomerGatewayAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::ModifyCustomerGatewayAttributeOutcomeCallable BmvpcClient::ModifyCustomerGatewayAttributeCallable(const ModifyCustomerGatewayAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomerGatewayAttributeOutcome>>();
    ModifyCustomerGatewayAttributeAsync(
    request,
    [prom](
        const BmvpcClient*,
        const ModifyCustomerGatewayAttributeRequest&,
        ModifyCustomerGatewayAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::ModifyRoutePolicyOutcome BmvpcClient::ModifyRoutePolicy(const ModifyRoutePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoutePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoutePolicyResponse rsp = ModifyRoutePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoutePolicyOutcome(rsp);
        else
            return ModifyRoutePolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyRoutePolicyOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifyRoutePolicyAsync(const ModifyRoutePolicyRequest& request, const ModifyRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRoutePolicyRequest&;
    using Resp = ModifyRoutePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRoutePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::ModifyRoutePolicyOutcomeCallable BmvpcClient::ModifyRoutePolicyCallable(const ModifyRoutePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRoutePolicyOutcome>>();
    ModifyRoutePolicyAsync(
    request,
    [prom](
        const BmvpcClient*,
        const ModifyRoutePolicyRequest&,
        ModifyRoutePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::ModifyRouteTableOutcome BmvpcClient::ModifyRouteTable(const ModifyRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRouteTableResponse rsp = ModifyRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRouteTableOutcome(rsp);
        else
            return ModifyRouteTableOutcome(o.GetError());
    }
    else
    {
        return ModifyRouteTableOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifyRouteTableAsync(const ModifyRouteTableRequest& request, const ModifyRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRouteTableRequest&;
    using Resp = ModifyRouteTableResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRouteTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::ModifyRouteTableOutcomeCallable BmvpcClient::ModifyRouteTableCallable(const ModifyRouteTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRouteTableOutcome>>();
    ModifyRouteTableAsync(
    request,
    [prom](
        const BmvpcClient*,
        const ModifyRouteTableRequest&,
        ModifyRouteTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::ModifySubnetAttributeOutcome BmvpcClient::ModifySubnetAttribute(const ModifySubnetAttributeRequest &request)
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

void BmvpcClient::ModifySubnetAttributeAsync(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BmvpcClient::ModifySubnetAttributeOutcomeCallable BmvpcClient::ModifySubnetAttributeCallable(const ModifySubnetAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubnetAttributeOutcome>>();
    ModifySubnetAttributeAsync(
    request,
    [prom](
        const BmvpcClient*,
        const ModifySubnetAttributeRequest&,
        ModifySubnetAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::ModifySubnetDHCPRelayOutcome BmvpcClient::ModifySubnetDHCPRelay(const ModifySubnetDHCPRelayRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubnetDHCPRelay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubnetDHCPRelayResponse rsp = ModifySubnetDHCPRelayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubnetDHCPRelayOutcome(rsp);
        else
            return ModifySubnetDHCPRelayOutcome(o.GetError());
    }
    else
    {
        return ModifySubnetDHCPRelayOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifySubnetDHCPRelayAsync(const ModifySubnetDHCPRelayRequest& request, const ModifySubnetDHCPRelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubnetDHCPRelayRequest&;
    using Resp = ModifySubnetDHCPRelayResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubnetDHCPRelay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::ModifySubnetDHCPRelayOutcomeCallable BmvpcClient::ModifySubnetDHCPRelayCallable(const ModifySubnetDHCPRelayRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubnetDHCPRelayOutcome>>();
    ModifySubnetDHCPRelayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const ModifySubnetDHCPRelayRequest&,
        ModifySubnetDHCPRelayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::ModifyVpcAttributeOutcome BmvpcClient::ModifyVpcAttribute(const ModifyVpcAttributeRequest &request)
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

void BmvpcClient::ModifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BmvpcClient::ModifyVpcAttributeOutcomeCallable BmvpcClient::ModifyVpcAttributeCallable(const ModifyVpcAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcAttributeOutcome>>();
    ModifyVpcAttributeAsync(
    request,
    [prom](
        const BmvpcClient*,
        const ModifyVpcAttributeRequest&,
        ModifyVpcAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::ModifyVpcPeerConnectionOutcome BmvpcClient::ModifyVpcPeerConnection(const ModifyVpcPeerConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcPeerConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcPeerConnectionResponse rsp = ModifyVpcPeerConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcPeerConnectionOutcome(rsp);
        else
            return ModifyVpcPeerConnectionOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcPeerConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::ModifyVpcPeerConnectionAsync(const ModifyVpcPeerConnectionRequest& request, const ModifyVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcPeerConnectionRequest&;
    using Resp = ModifyVpcPeerConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcPeerConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::ModifyVpcPeerConnectionOutcomeCallable BmvpcClient::ModifyVpcPeerConnectionCallable(const ModifyVpcPeerConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcPeerConnectionOutcome>>();
    ModifyVpcPeerConnectionAsync(
    request,
    [prom](
        const BmvpcClient*,
        const ModifyVpcPeerConnectionRequest&,
        ModifyVpcPeerConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::ModifyVpnConnectionAttributeOutcome BmvpcClient::ModifyVpnConnectionAttribute(const ModifyVpnConnectionAttributeRequest &request)
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

void BmvpcClient::ModifyVpnConnectionAttributeAsync(const ModifyVpnConnectionAttributeRequest& request, const ModifyVpnConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpnConnectionAttributeRequest&;
    using Resp = ModifyVpnConnectionAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpnConnectionAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::ModifyVpnConnectionAttributeOutcomeCallable BmvpcClient::ModifyVpnConnectionAttributeCallable(const ModifyVpnConnectionAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpnConnectionAttributeOutcome>>();
    ModifyVpnConnectionAttributeAsync(
    request,
    [prom](
        const BmvpcClient*,
        const ModifyVpnConnectionAttributeRequest&,
        ModifyVpnConnectionAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::ModifyVpnGatewayAttributeOutcome BmvpcClient::ModifyVpnGatewayAttribute(const ModifyVpnGatewayAttributeRequest &request)
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

void BmvpcClient::ModifyVpnGatewayAttributeAsync(const ModifyVpnGatewayAttributeRequest& request, const ModifyVpnGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpnGatewayAttributeRequest&;
    using Resp = ModifyVpnGatewayAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpnGatewayAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::ModifyVpnGatewayAttributeOutcomeCallable BmvpcClient::ModifyVpnGatewayAttributeCallable(const ModifyVpnGatewayAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpnGatewayAttributeOutcome>>();
    ModifyVpnGatewayAttributeAsync(
    request,
    [prom](
        const BmvpcClient*,
        const ModifyVpnGatewayAttributeRequest&,
        ModifyVpnGatewayAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::RejectVpcPeerConnectionOutcome BmvpcClient::RejectVpcPeerConnection(const RejectVpcPeerConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "RejectVpcPeerConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RejectVpcPeerConnectionResponse rsp = RejectVpcPeerConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RejectVpcPeerConnectionOutcome(rsp);
        else
            return RejectVpcPeerConnectionOutcome(o.GetError());
    }
    else
    {
        return RejectVpcPeerConnectionOutcome(outcome.GetError());
    }
}

void BmvpcClient::RejectVpcPeerConnectionAsync(const RejectVpcPeerConnectionRequest& request, const RejectVpcPeerConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RejectVpcPeerConnectionRequest&;
    using Resp = RejectVpcPeerConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "RejectVpcPeerConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::RejectVpcPeerConnectionOutcomeCallable BmvpcClient::RejectVpcPeerConnectionCallable(const RejectVpcPeerConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<RejectVpcPeerConnectionOutcome>>();
    RejectVpcPeerConnectionAsync(
    request,
    [prom](
        const BmvpcClient*,
        const RejectVpcPeerConnectionRequest&,
        RejectVpcPeerConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::ResetVpnConnectionOutcome BmvpcClient::ResetVpnConnection(const ResetVpnConnectionRequest &request)
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

void BmvpcClient::ResetVpnConnectionAsync(const ResetVpnConnectionRequest& request, const ResetVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetVpnConnectionRequest&;
    using Resp = ResetVpnConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "ResetVpnConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::ResetVpnConnectionOutcomeCallable BmvpcClient::ResetVpnConnectionCallable(const ResetVpnConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetVpnConnectionOutcome>>();
    ResetVpnConnectionAsync(
    request,
    [prom](
        const BmvpcClient*,
        const ResetVpnConnectionRequest&,
        ResetVpnConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::UnbindEipsFromNatGatewayOutcome BmvpcClient::UnbindEipsFromNatGateway(const UnbindEipsFromNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindEipsFromNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindEipsFromNatGatewayResponse rsp = UnbindEipsFromNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindEipsFromNatGatewayOutcome(rsp);
        else
            return UnbindEipsFromNatGatewayOutcome(o.GetError());
    }
    else
    {
        return UnbindEipsFromNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::UnbindEipsFromNatGatewayAsync(const UnbindEipsFromNatGatewayRequest& request, const UnbindEipsFromNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindEipsFromNatGatewayRequest&;
    using Resp = UnbindEipsFromNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindEipsFromNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::UnbindEipsFromNatGatewayOutcomeCallable BmvpcClient::UnbindEipsFromNatGatewayCallable(const UnbindEipsFromNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindEipsFromNatGatewayOutcome>>();
    UnbindEipsFromNatGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const UnbindEipsFromNatGatewayRequest&,
        UnbindEipsFromNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::UnbindIpsFromNatGatewayOutcome BmvpcClient::UnbindIpsFromNatGateway(const UnbindIpsFromNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindIpsFromNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindIpsFromNatGatewayResponse rsp = UnbindIpsFromNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindIpsFromNatGatewayOutcome(rsp);
        else
            return UnbindIpsFromNatGatewayOutcome(o.GetError());
    }
    else
    {
        return UnbindIpsFromNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::UnbindIpsFromNatGatewayAsync(const UnbindIpsFromNatGatewayRequest& request, const UnbindIpsFromNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindIpsFromNatGatewayRequest&;
    using Resp = UnbindIpsFromNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindIpsFromNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::UnbindIpsFromNatGatewayOutcomeCallable BmvpcClient::UnbindIpsFromNatGatewayCallable(const UnbindIpsFromNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindIpsFromNatGatewayOutcome>>();
    UnbindIpsFromNatGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const UnbindIpsFromNatGatewayRequest&,
        UnbindIpsFromNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::UnbindSubnetsFromNatGatewayOutcome BmvpcClient::UnbindSubnetsFromNatGateway(const UnbindSubnetsFromNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindSubnetsFromNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindSubnetsFromNatGatewayResponse rsp = UnbindSubnetsFromNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindSubnetsFromNatGatewayOutcome(rsp);
        else
            return UnbindSubnetsFromNatGatewayOutcome(o.GetError());
    }
    else
    {
        return UnbindSubnetsFromNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::UnbindSubnetsFromNatGatewayAsync(const UnbindSubnetsFromNatGatewayRequest& request, const UnbindSubnetsFromNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindSubnetsFromNatGatewayRequest&;
    using Resp = UnbindSubnetsFromNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindSubnetsFromNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::UnbindSubnetsFromNatGatewayOutcomeCallable BmvpcClient::UnbindSubnetsFromNatGatewayCallable(const UnbindSubnetsFromNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindSubnetsFromNatGatewayOutcome>>();
    UnbindSubnetsFromNatGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const UnbindSubnetsFromNatGatewayRequest&,
        UnbindSubnetsFromNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BmvpcClient::UpgradeNatGatewayOutcome BmvpcClient::UpgradeNatGateway(const UpgradeNatGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeNatGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeNatGatewayResponse rsp = UpgradeNatGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeNatGatewayOutcome(rsp);
        else
            return UpgradeNatGatewayOutcome(o.GetError());
    }
    else
    {
        return UpgradeNatGatewayOutcome(outcome.GetError());
    }
}

void BmvpcClient::UpgradeNatGatewayAsync(const UpgradeNatGatewayRequest& request, const UpgradeNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeNatGatewayRequest&;
    using Resp = UpgradeNatGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeNatGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BmvpcClient::UpgradeNatGatewayOutcomeCallable BmvpcClient::UpgradeNatGatewayCallable(const UpgradeNatGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeNatGatewayOutcome>>();
    UpgradeNatGatewayAsync(
    request,
    [prom](
        const BmvpcClient*,
        const UpgradeNatGatewayRequest&,
        UpgradeNatGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


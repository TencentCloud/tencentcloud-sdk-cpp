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

#include <tencentcloud/privatedns/v20201028/PrivatednsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Privatedns::V20201028;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-10-28";
    const string ENDPOINT = "privatedns.tencentcloudapi.com";
}

PrivatednsClient::PrivatednsClient(const Credential &credential, const string &region) :
    PrivatednsClient(credential, region, ClientProfile())
{
}

PrivatednsClient::PrivatednsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


PrivatednsClient::AddSpecifyPrivateZoneVpcOutcome PrivatednsClient::AddSpecifyPrivateZoneVpc(const AddSpecifyPrivateZoneVpcRequest &request)
{
    auto outcome = MakeRequest(request, "AddSpecifyPrivateZoneVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSpecifyPrivateZoneVpcResponse rsp = AddSpecifyPrivateZoneVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSpecifyPrivateZoneVpcOutcome(rsp);
        else
            return AddSpecifyPrivateZoneVpcOutcome(o.GetError());
    }
    else
    {
        return AddSpecifyPrivateZoneVpcOutcome(outcome.GetError());
    }
}

void PrivatednsClient::AddSpecifyPrivateZoneVpcAsync(const AddSpecifyPrivateZoneVpcRequest& request, const AddSpecifyPrivateZoneVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddSpecifyPrivateZoneVpcRequest&;
    using Resp = AddSpecifyPrivateZoneVpcResponse;

    DoRequestAsync<Req, Resp>(
        "AddSpecifyPrivateZoneVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::AddSpecifyPrivateZoneVpcOutcomeCallable PrivatednsClient::AddSpecifyPrivateZoneVpcCallable(const AddSpecifyPrivateZoneVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddSpecifyPrivateZoneVpcOutcome>>();
    AddSpecifyPrivateZoneVpcAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const AddSpecifyPrivateZoneVpcRequest&,
        AddSpecifyPrivateZoneVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreateExtendEndpointOutcome PrivatednsClient::CreateExtendEndpoint(const CreateExtendEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExtendEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExtendEndpointResponse rsp = CreateExtendEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExtendEndpointOutcome(rsp);
        else
            return CreateExtendEndpointOutcome(o.GetError());
    }
    else
    {
        return CreateExtendEndpointOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreateExtendEndpointAsync(const CreateExtendEndpointRequest& request, const CreateExtendEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExtendEndpointRequest&;
    using Resp = CreateExtendEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExtendEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreateExtendEndpointOutcomeCallable PrivatednsClient::CreateExtendEndpointCallable(const CreateExtendEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExtendEndpointOutcome>>();
    CreateExtendEndpointAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreateExtendEndpointRequest&,
        CreateExtendEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreateForwardRuleOutcome PrivatednsClient::CreateForwardRule(const CreateForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateForwardRuleResponse rsp = CreateForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateForwardRuleOutcome(rsp);
        else
            return CreateForwardRuleOutcome(o.GetError());
    }
    else
    {
        return CreateForwardRuleOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreateForwardRuleAsync(const CreateForwardRuleRequest& request, const CreateForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateForwardRuleRequest&;
    using Resp = CreateForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreateForwardRuleOutcomeCallable PrivatednsClient::CreateForwardRuleCallable(const CreateForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateForwardRuleOutcome>>();
    CreateForwardRuleAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreateForwardRuleRequest&,
        CreateForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreateInboundEndpointOutcome PrivatednsClient::CreateInboundEndpoint(const CreateInboundEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInboundEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInboundEndpointResponse rsp = CreateInboundEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInboundEndpointOutcome(rsp);
        else
            return CreateInboundEndpointOutcome(o.GetError());
    }
    else
    {
        return CreateInboundEndpointOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreateInboundEndpointAsync(const CreateInboundEndpointRequest& request, const CreateInboundEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInboundEndpointRequest&;
    using Resp = CreateInboundEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInboundEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreateInboundEndpointOutcomeCallable PrivatednsClient::CreateInboundEndpointCallable(const CreateInboundEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInboundEndpointOutcome>>();
    CreateInboundEndpointAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreateInboundEndpointRequest&,
        CreateInboundEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreatePrivateDNSAccountOutcome PrivatednsClient::CreatePrivateDNSAccount(const CreatePrivateDNSAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateDNSAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateDNSAccountResponse rsp = CreatePrivateDNSAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateDNSAccountOutcome(rsp);
        else
            return CreatePrivateDNSAccountOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateDNSAccountOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreatePrivateDNSAccountAsync(const CreatePrivateDNSAccountRequest& request, const CreatePrivateDNSAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivateDNSAccountRequest&;
    using Resp = CreatePrivateDNSAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivateDNSAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreatePrivateDNSAccountOutcomeCallable PrivatednsClient::CreatePrivateDNSAccountCallable(const CreatePrivateDNSAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivateDNSAccountOutcome>>();
    CreatePrivateDNSAccountAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreatePrivateDNSAccountRequest&,
        CreatePrivateDNSAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreatePrivateZoneOutcome PrivatednsClient::CreatePrivateZone(const CreatePrivateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateZoneResponse rsp = CreatePrivateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateZoneOutcome(rsp);
        else
            return CreatePrivateZoneOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateZoneOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreatePrivateZoneAsync(const CreatePrivateZoneRequest& request, const CreatePrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivateZoneRequest&;
    using Resp = CreatePrivateZoneResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivateZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreatePrivateZoneOutcomeCallable PrivatednsClient::CreatePrivateZoneCallable(const CreatePrivateZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivateZoneOutcome>>();
    CreatePrivateZoneAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreatePrivateZoneRequest&,
        CreatePrivateZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreatePrivateZoneListOutcome PrivatednsClient::CreatePrivateZoneList(const CreatePrivateZoneListRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateZoneList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateZoneListResponse rsp = CreatePrivateZoneListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateZoneListOutcome(rsp);
        else
            return CreatePrivateZoneListOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateZoneListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreatePrivateZoneListAsync(const CreatePrivateZoneListRequest& request, const CreatePrivateZoneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivateZoneListRequest&;
    using Resp = CreatePrivateZoneListResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivateZoneList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreatePrivateZoneListOutcomeCallable PrivatednsClient::CreatePrivateZoneListCallable(const CreatePrivateZoneListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivateZoneListOutcome>>();
    CreatePrivateZoneListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreatePrivateZoneListRequest&,
        CreatePrivateZoneListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreatePrivateZoneRecordOutcome PrivatednsClient::CreatePrivateZoneRecord(const CreatePrivateZoneRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateZoneRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateZoneRecordResponse rsp = CreatePrivateZoneRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateZoneRecordOutcome(rsp);
        else
            return CreatePrivateZoneRecordOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateZoneRecordOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreatePrivateZoneRecordAsync(const CreatePrivateZoneRecordRequest& request, const CreatePrivateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivateZoneRecordRequest&;
    using Resp = CreatePrivateZoneRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivateZoneRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreatePrivateZoneRecordOutcomeCallable PrivatednsClient::CreatePrivateZoneRecordCallable(const CreatePrivateZoneRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivateZoneRecordOutcome>>();
    CreatePrivateZoneRecordAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreatePrivateZoneRecordRequest&,
        CreatePrivateZoneRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreatePrivateZoneRecordListOutcome PrivatednsClient::CreatePrivateZoneRecordList(const CreatePrivateZoneRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateZoneRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateZoneRecordListResponse rsp = CreatePrivateZoneRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateZoneRecordListOutcome(rsp);
        else
            return CreatePrivateZoneRecordListOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateZoneRecordListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreatePrivateZoneRecordListAsync(const CreatePrivateZoneRecordListRequest& request, const CreatePrivateZoneRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivateZoneRecordListRequest&;
    using Resp = CreatePrivateZoneRecordListResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivateZoneRecordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreatePrivateZoneRecordListOutcomeCallable PrivatednsClient::CreatePrivateZoneRecordListCallable(const CreatePrivateZoneRecordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivateZoneRecordListOutcome>>();
    CreatePrivateZoneRecordListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreatePrivateZoneRecordListRequest&,
        CreatePrivateZoneRecordListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DeleteEndPointOutcome PrivatednsClient::DeleteEndPoint(const DeleteEndPointRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEndPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEndPointResponse rsp = DeleteEndPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEndPointOutcome(rsp);
        else
            return DeleteEndPointOutcome(o.GetError());
    }
    else
    {
        return DeleteEndPointOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DeleteEndPointAsync(const DeleteEndPointRequest& request, const DeleteEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEndPointRequest&;
    using Resp = DeleteEndPointResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEndPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DeleteEndPointOutcomeCallable PrivatednsClient::DeleteEndPointCallable(const DeleteEndPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEndPointOutcome>>();
    DeleteEndPointAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DeleteEndPointRequest&,
        DeleteEndPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DeleteForwardRuleOutcome PrivatednsClient::DeleteForwardRule(const DeleteForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteForwardRuleResponse rsp = DeleteForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteForwardRuleOutcome(rsp);
        else
            return DeleteForwardRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteForwardRuleOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DeleteForwardRuleAsync(const DeleteForwardRuleRequest& request, const DeleteForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteForwardRuleRequest&;
    using Resp = DeleteForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DeleteForwardRuleOutcomeCallable PrivatednsClient::DeleteForwardRuleCallable(const DeleteForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteForwardRuleOutcome>>();
    DeleteForwardRuleAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DeleteForwardRuleRequest&,
        DeleteForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DeleteInboundEndpointOutcome PrivatednsClient::DeleteInboundEndpoint(const DeleteInboundEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInboundEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInboundEndpointResponse rsp = DeleteInboundEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInboundEndpointOutcome(rsp);
        else
            return DeleteInboundEndpointOutcome(o.GetError());
    }
    else
    {
        return DeleteInboundEndpointOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DeleteInboundEndpointAsync(const DeleteInboundEndpointRequest& request, const DeleteInboundEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInboundEndpointRequest&;
    using Resp = DeleteInboundEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInboundEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DeleteInboundEndpointOutcomeCallable PrivatednsClient::DeleteInboundEndpointCallable(const DeleteInboundEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInboundEndpointOutcome>>();
    DeleteInboundEndpointAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DeleteInboundEndpointRequest&,
        DeleteInboundEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DeletePrivateDNSAccountOutcome PrivatednsClient::DeletePrivateDNSAccount(const DeletePrivateDNSAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivateDNSAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivateDNSAccountResponse rsp = DeletePrivateDNSAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivateDNSAccountOutcome(rsp);
        else
            return DeletePrivateDNSAccountOutcome(o.GetError());
    }
    else
    {
        return DeletePrivateDNSAccountOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DeletePrivateDNSAccountAsync(const DeletePrivateDNSAccountRequest& request, const DeletePrivateDNSAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrivateDNSAccountRequest&;
    using Resp = DeletePrivateDNSAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrivateDNSAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DeletePrivateDNSAccountOutcomeCallable PrivatednsClient::DeletePrivateDNSAccountCallable(const DeletePrivateDNSAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrivateDNSAccountOutcome>>();
    DeletePrivateDNSAccountAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DeletePrivateDNSAccountRequest&,
        DeletePrivateDNSAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DeletePrivateZoneOutcome PrivatednsClient::DeletePrivateZone(const DeletePrivateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivateZoneResponse rsp = DeletePrivateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivateZoneOutcome(rsp);
        else
            return DeletePrivateZoneOutcome(o.GetError());
    }
    else
    {
        return DeletePrivateZoneOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DeletePrivateZoneAsync(const DeletePrivateZoneRequest& request, const DeletePrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrivateZoneRequest&;
    using Resp = DeletePrivateZoneResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrivateZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DeletePrivateZoneOutcomeCallable PrivatednsClient::DeletePrivateZoneCallable(const DeletePrivateZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrivateZoneOutcome>>();
    DeletePrivateZoneAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DeletePrivateZoneRequest&,
        DeletePrivateZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DeletePrivateZoneRecordOutcome PrivatednsClient::DeletePrivateZoneRecord(const DeletePrivateZoneRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivateZoneRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivateZoneRecordResponse rsp = DeletePrivateZoneRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivateZoneRecordOutcome(rsp);
        else
            return DeletePrivateZoneRecordOutcome(o.GetError());
    }
    else
    {
        return DeletePrivateZoneRecordOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DeletePrivateZoneRecordAsync(const DeletePrivateZoneRecordRequest& request, const DeletePrivateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrivateZoneRecordRequest&;
    using Resp = DeletePrivateZoneRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrivateZoneRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DeletePrivateZoneRecordOutcomeCallable PrivatednsClient::DeletePrivateZoneRecordCallable(const DeletePrivateZoneRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrivateZoneRecordOutcome>>();
    DeletePrivateZoneRecordAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DeletePrivateZoneRecordRequest&,
        DeletePrivateZoneRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DeleteSpecifyPrivateZoneVpcOutcome PrivatednsClient::DeleteSpecifyPrivateZoneVpc(const DeleteSpecifyPrivateZoneVpcRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSpecifyPrivateZoneVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSpecifyPrivateZoneVpcResponse rsp = DeleteSpecifyPrivateZoneVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSpecifyPrivateZoneVpcOutcome(rsp);
        else
            return DeleteSpecifyPrivateZoneVpcOutcome(o.GetError());
    }
    else
    {
        return DeleteSpecifyPrivateZoneVpcOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DeleteSpecifyPrivateZoneVpcAsync(const DeleteSpecifyPrivateZoneVpcRequest& request, const DeleteSpecifyPrivateZoneVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSpecifyPrivateZoneVpcRequest&;
    using Resp = DeleteSpecifyPrivateZoneVpcResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSpecifyPrivateZoneVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DeleteSpecifyPrivateZoneVpcOutcomeCallable PrivatednsClient::DeleteSpecifyPrivateZoneVpcCallable(const DeleteSpecifyPrivateZoneVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSpecifyPrivateZoneVpcOutcome>>();
    DeleteSpecifyPrivateZoneVpcAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DeleteSpecifyPrivateZoneVpcRequest&,
        DeleteSpecifyPrivateZoneVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeAccountVpcListOutcome PrivatednsClient::DescribeAccountVpcList(const DescribeAccountVpcListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountVpcList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountVpcListResponse rsp = DescribeAccountVpcListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountVpcListOutcome(rsp);
        else
            return DescribeAccountVpcListOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountVpcListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeAccountVpcListAsync(const DescribeAccountVpcListRequest& request, const DescribeAccountVpcListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountVpcListRequest&;
    using Resp = DescribeAccountVpcListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountVpcList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeAccountVpcListOutcomeCallable PrivatednsClient::DescribeAccountVpcListCallable(const DescribeAccountVpcListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountVpcListOutcome>>();
    DescribeAccountVpcListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeAccountVpcListRequest&,
        DescribeAccountVpcListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeAuditLogOutcome PrivatednsClient::DescribeAuditLog(const DescribeAuditLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditLogResponse rsp = DescribeAuditLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditLogOutcome(rsp);
        else
            return DescribeAuditLogOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditLogOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeAuditLogAsync(const DescribeAuditLogRequest& request, const DescribeAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditLogRequest&;
    using Resp = DescribeAuditLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeAuditLogOutcomeCallable PrivatednsClient::DescribeAuditLogCallable(const DescribeAuditLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditLogOutcome>>();
    DescribeAuditLogAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeAuditLogRequest&,
        DescribeAuditLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeCreateRecordListResultOutcome PrivatednsClient::DescribeCreateRecordListResult(const DescribeCreateRecordListResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCreateRecordListResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCreateRecordListResultResponse rsp = DescribeCreateRecordListResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCreateRecordListResultOutcome(rsp);
        else
            return DescribeCreateRecordListResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCreateRecordListResultOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeCreateRecordListResultAsync(const DescribeCreateRecordListResultRequest& request, const DescribeCreateRecordListResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCreateRecordListResultRequest&;
    using Resp = DescribeCreateRecordListResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCreateRecordListResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeCreateRecordListResultOutcomeCallable PrivatednsClient::DescribeCreateRecordListResultCallable(const DescribeCreateRecordListResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCreateRecordListResultOutcome>>();
    DescribeCreateRecordListResultAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeCreateRecordListResultRequest&,
        DescribeCreateRecordListResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeCreateZoneListResultOutcome PrivatednsClient::DescribeCreateZoneListResult(const DescribeCreateZoneListResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCreateZoneListResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCreateZoneListResultResponse rsp = DescribeCreateZoneListResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCreateZoneListResultOutcome(rsp);
        else
            return DescribeCreateZoneListResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCreateZoneListResultOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeCreateZoneListResultAsync(const DescribeCreateZoneListResultRequest& request, const DescribeCreateZoneListResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCreateZoneListResultRequest&;
    using Resp = DescribeCreateZoneListResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCreateZoneListResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeCreateZoneListResultOutcomeCallable PrivatednsClient::DescribeCreateZoneListResultCallable(const DescribeCreateZoneListResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCreateZoneListResultOutcome>>();
    DescribeCreateZoneListResultAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeCreateZoneListResultRequest&,
        DescribeCreateZoneListResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeDashboardOutcome PrivatednsClient::DescribeDashboard(const DescribeDashboardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDashboard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDashboardResponse rsp = DescribeDashboardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDashboardOutcome(rsp);
        else
            return DescribeDashboardOutcome(o.GetError());
    }
    else
    {
        return DescribeDashboardOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeDashboardAsync(const DescribeDashboardRequest& request, const DescribeDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDashboardRequest&;
    using Resp = DescribeDashboardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDashboard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeDashboardOutcomeCallable PrivatednsClient::DescribeDashboardCallable(const DescribeDashboardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDashboardOutcome>>();
    DescribeDashboardAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeDashboardRequest&,
        DescribeDashboardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeExtendEndpointListOutcome PrivatednsClient::DescribeExtendEndpointList(const DescribeExtendEndpointListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtendEndpointList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtendEndpointListResponse rsp = DescribeExtendEndpointListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtendEndpointListOutcome(rsp);
        else
            return DescribeExtendEndpointListOutcome(o.GetError());
    }
    else
    {
        return DescribeExtendEndpointListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeExtendEndpointListAsync(const DescribeExtendEndpointListRequest& request, const DescribeExtendEndpointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtendEndpointListRequest&;
    using Resp = DescribeExtendEndpointListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtendEndpointList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeExtendEndpointListOutcomeCallable PrivatednsClient::DescribeExtendEndpointListCallable(const DescribeExtendEndpointListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtendEndpointListOutcome>>();
    DescribeExtendEndpointListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeExtendEndpointListRequest&,
        DescribeExtendEndpointListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeForwardRuleListOutcome PrivatednsClient::DescribeForwardRuleList(const DescribeForwardRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeForwardRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeForwardRuleListResponse rsp = DescribeForwardRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeForwardRuleListOutcome(rsp);
        else
            return DescribeForwardRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeForwardRuleListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeForwardRuleListAsync(const DescribeForwardRuleListRequest& request, const DescribeForwardRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeForwardRuleListRequest&;
    using Resp = DescribeForwardRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeForwardRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeForwardRuleListOutcomeCallable PrivatednsClient::DescribeForwardRuleListCallable(const DescribeForwardRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeForwardRuleListOutcome>>();
    DescribeForwardRuleListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeForwardRuleListRequest&,
        DescribeForwardRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeInboundEndpointListOutcome PrivatednsClient::DescribeInboundEndpointList(const DescribeInboundEndpointListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInboundEndpointList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInboundEndpointListResponse rsp = DescribeInboundEndpointListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInboundEndpointListOutcome(rsp);
        else
            return DescribeInboundEndpointListOutcome(o.GetError());
    }
    else
    {
        return DescribeInboundEndpointListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeInboundEndpointListAsync(const DescribeInboundEndpointListRequest& request, const DescribeInboundEndpointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInboundEndpointListRequest&;
    using Resp = DescribeInboundEndpointListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInboundEndpointList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeInboundEndpointListOutcomeCallable PrivatednsClient::DescribeInboundEndpointListCallable(const DescribeInboundEndpointListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInboundEndpointListOutcome>>();
    DescribeInboundEndpointListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeInboundEndpointListRequest&,
        DescribeInboundEndpointListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribePrivateDNSAccountListOutcome PrivatednsClient::DescribePrivateDNSAccountList(const DescribePrivateDNSAccountListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateDNSAccountList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateDNSAccountListResponse rsp = DescribePrivateDNSAccountListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateDNSAccountListOutcome(rsp);
        else
            return DescribePrivateDNSAccountListOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateDNSAccountListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribePrivateDNSAccountListAsync(const DescribePrivateDNSAccountListRequest& request, const DescribePrivateDNSAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateDNSAccountListRequest&;
    using Resp = DescribePrivateDNSAccountListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateDNSAccountList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribePrivateDNSAccountListOutcomeCallable PrivatednsClient::DescribePrivateDNSAccountListCallable(const DescribePrivateDNSAccountListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateDNSAccountListOutcome>>();
    DescribePrivateDNSAccountListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribePrivateDNSAccountListRequest&,
        DescribePrivateDNSAccountListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribePrivateZoneOutcome PrivatednsClient::DescribePrivateZone(const DescribePrivateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateZoneResponse rsp = DescribePrivateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateZoneOutcome(rsp);
        else
            return DescribePrivateZoneOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateZoneOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribePrivateZoneAsync(const DescribePrivateZoneRequest& request, const DescribePrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateZoneRequest&;
    using Resp = DescribePrivateZoneResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribePrivateZoneOutcomeCallable PrivatednsClient::DescribePrivateZoneCallable(const DescribePrivateZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateZoneOutcome>>();
    DescribePrivateZoneAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribePrivateZoneRequest&,
        DescribePrivateZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribePrivateZoneListOutcome PrivatednsClient::DescribePrivateZoneList(const DescribePrivateZoneListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateZoneList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateZoneListResponse rsp = DescribePrivateZoneListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateZoneListOutcome(rsp);
        else
            return DescribePrivateZoneListOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateZoneListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribePrivateZoneListAsync(const DescribePrivateZoneListRequest& request, const DescribePrivateZoneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateZoneListRequest&;
    using Resp = DescribePrivateZoneListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateZoneList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribePrivateZoneListOutcomeCallable PrivatednsClient::DescribePrivateZoneListCallable(const DescribePrivateZoneListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateZoneListOutcome>>();
    DescribePrivateZoneListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribePrivateZoneListRequest&,
        DescribePrivateZoneListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribePrivateZoneRecordListOutcome PrivatednsClient::DescribePrivateZoneRecordList(const DescribePrivateZoneRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateZoneRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateZoneRecordListResponse rsp = DescribePrivateZoneRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateZoneRecordListOutcome(rsp);
        else
            return DescribePrivateZoneRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateZoneRecordListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribePrivateZoneRecordListAsync(const DescribePrivateZoneRecordListRequest& request, const DescribePrivateZoneRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateZoneRecordListRequest&;
    using Resp = DescribePrivateZoneRecordListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateZoneRecordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribePrivateZoneRecordListOutcomeCallable PrivatednsClient::DescribePrivateZoneRecordListCallable(const DescribePrivateZoneRecordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateZoneRecordListOutcome>>();
    DescribePrivateZoneRecordListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribePrivateZoneRecordListRequest&,
        DescribePrivateZoneRecordListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribePrivateZoneServiceOutcome PrivatednsClient::DescribePrivateZoneService(const DescribePrivateZoneServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateZoneService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateZoneServiceResponse rsp = DescribePrivateZoneServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateZoneServiceOutcome(rsp);
        else
            return DescribePrivateZoneServiceOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateZoneServiceOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribePrivateZoneServiceAsync(const DescribePrivateZoneServiceRequest& request, const DescribePrivateZoneServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateZoneServiceRequest&;
    using Resp = DescribePrivateZoneServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateZoneService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribePrivateZoneServiceOutcomeCallable PrivatednsClient::DescribePrivateZoneServiceCallable(const DescribePrivateZoneServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateZoneServiceOutcome>>();
    DescribePrivateZoneServiceAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribePrivateZoneServiceRequest&,
        DescribePrivateZoneServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeQuotaUsageOutcome PrivatednsClient::DescribeQuotaUsage(const DescribeQuotaUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuotaUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotaUsageResponse rsp = DescribeQuotaUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotaUsageOutcome(rsp);
        else
            return DescribeQuotaUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotaUsageOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeQuotaUsageAsync(const DescribeQuotaUsageRequest& request, const DescribeQuotaUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQuotaUsageRequest&;
    using Resp = DescribeQuotaUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQuotaUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeQuotaUsageOutcomeCallable PrivatednsClient::DescribeQuotaUsageCallable(const DescribeQuotaUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQuotaUsageOutcome>>();
    DescribeQuotaUsageAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeQuotaUsageRequest&,
        DescribeQuotaUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeRecordOutcome PrivatednsClient::DescribeRecord(const DescribeRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordResponse rsp = DescribeRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordOutcome(rsp);
        else
            return DescribeRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordRequest&;
    using Resp = DescribeRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeRecordOutcomeCallable PrivatednsClient::DescribeRecordCallable(const DescribeRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordOutcome>>();
    DescribeRecordAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeRecordRequest&,
        DescribeRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeRequestDataOutcome PrivatednsClient::DescribeRequestData(const DescribeRequestDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRequestData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRequestDataResponse rsp = DescribeRequestDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRequestDataOutcome(rsp);
        else
            return DescribeRequestDataOutcome(o.GetError());
    }
    else
    {
        return DescribeRequestDataOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeRequestDataAsync(const DescribeRequestDataRequest& request, const DescribeRequestDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRequestDataRequest&;
    using Resp = DescribeRequestDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRequestData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeRequestDataOutcomeCallable PrivatednsClient::DescribeRequestDataCallable(const DescribeRequestDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRequestDataOutcome>>();
    DescribeRequestDataAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeRequestDataRequest&,
        DescribeRequestDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyForwardRuleOutcome PrivatednsClient::ModifyForwardRule(const ModifyForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyForwardRuleResponse rsp = ModifyForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyForwardRuleOutcome(rsp);
        else
            return ModifyForwardRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyForwardRuleOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyForwardRuleAsync(const ModifyForwardRuleRequest& request, const ModifyForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyForwardRuleRequest&;
    using Resp = ModifyForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyForwardRuleOutcomeCallable PrivatednsClient::ModifyForwardRuleCallable(const ModifyForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyForwardRuleOutcome>>();
    ModifyForwardRuleAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyForwardRuleRequest&,
        ModifyForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyInboundEndpointOutcome PrivatednsClient::ModifyInboundEndpoint(const ModifyInboundEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInboundEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInboundEndpointResponse rsp = ModifyInboundEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInboundEndpointOutcome(rsp);
        else
            return ModifyInboundEndpointOutcome(o.GetError());
    }
    else
    {
        return ModifyInboundEndpointOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyInboundEndpointAsync(const ModifyInboundEndpointRequest& request, const ModifyInboundEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInboundEndpointRequest&;
    using Resp = ModifyInboundEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInboundEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyInboundEndpointOutcomeCallable PrivatednsClient::ModifyInboundEndpointCallable(const ModifyInboundEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInboundEndpointOutcome>>();
    ModifyInboundEndpointAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyInboundEndpointRequest&,
        ModifyInboundEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyPrivateZoneOutcome PrivatednsClient::ModifyPrivateZone(const ModifyPrivateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrivateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrivateZoneResponse rsp = ModifyPrivateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrivateZoneOutcome(rsp);
        else
            return ModifyPrivateZoneOutcome(o.GetError());
    }
    else
    {
        return ModifyPrivateZoneOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyPrivateZoneAsync(const ModifyPrivateZoneRequest& request, const ModifyPrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrivateZoneRequest&;
    using Resp = ModifyPrivateZoneResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrivateZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyPrivateZoneOutcomeCallable PrivatednsClient::ModifyPrivateZoneCallable(const ModifyPrivateZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrivateZoneOutcome>>();
    ModifyPrivateZoneAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyPrivateZoneRequest&,
        ModifyPrivateZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyPrivateZoneRecordOutcome PrivatednsClient::ModifyPrivateZoneRecord(const ModifyPrivateZoneRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrivateZoneRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrivateZoneRecordResponse rsp = ModifyPrivateZoneRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrivateZoneRecordOutcome(rsp);
        else
            return ModifyPrivateZoneRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyPrivateZoneRecordOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyPrivateZoneRecordAsync(const ModifyPrivateZoneRecordRequest& request, const ModifyPrivateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrivateZoneRecordRequest&;
    using Resp = ModifyPrivateZoneRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrivateZoneRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyPrivateZoneRecordOutcomeCallable PrivatednsClient::ModifyPrivateZoneRecordCallable(const ModifyPrivateZoneRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrivateZoneRecordOutcome>>();
    ModifyPrivateZoneRecordAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyPrivateZoneRecordRequest&,
        ModifyPrivateZoneRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyPrivateZoneVpcOutcome PrivatednsClient::ModifyPrivateZoneVpc(const ModifyPrivateZoneVpcRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrivateZoneVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrivateZoneVpcResponse rsp = ModifyPrivateZoneVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrivateZoneVpcOutcome(rsp);
        else
            return ModifyPrivateZoneVpcOutcome(o.GetError());
    }
    else
    {
        return ModifyPrivateZoneVpcOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyPrivateZoneVpcAsync(const ModifyPrivateZoneVpcRequest& request, const ModifyPrivateZoneVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrivateZoneVpcRequest&;
    using Resp = ModifyPrivateZoneVpcResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrivateZoneVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyPrivateZoneVpcOutcomeCallable PrivatednsClient::ModifyPrivateZoneVpcCallable(const ModifyPrivateZoneVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrivateZoneVpcOutcome>>();
    ModifyPrivateZoneVpcAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyPrivateZoneVpcRequest&,
        ModifyPrivateZoneVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyRecordsStatusOutcome PrivatednsClient::ModifyRecordsStatus(const ModifyRecordsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordsStatusResponse rsp = ModifyRecordsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordsStatusOutcome(rsp);
        else
            return ModifyRecordsStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordsStatusOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyRecordsStatusAsync(const ModifyRecordsStatusRequest& request, const ModifyRecordsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordsStatusRequest&;
    using Resp = ModifyRecordsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyRecordsStatusOutcomeCallable PrivatednsClient::ModifyRecordsStatusCallable(const ModifyRecordsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordsStatusOutcome>>();
    ModifyRecordsStatusAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyRecordsStatusRequest&,
        ModifyRecordsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::QueryAsyncBindVpcStatusOutcome PrivatednsClient::QueryAsyncBindVpcStatus(const QueryAsyncBindVpcStatusRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAsyncBindVpcStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAsyncBindVpcStatusResponse rsp = QueryAsyncBindVpcStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAsyncBindVpcStatusOutcome(rsp);
        else
            return QueryAsyncBindVpcStatusOutcome(o.GetError());
    }
    else
    {
        return QueryAsyncBindVpcStatusOutcome(outcome.GetError());
    }
}

void PrivatednsClient::QueryAsyncBindVpcStatusAsync(const QueryAsyncBindVpcStatusRequest& request, const QueryAsyncBindVpcStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAsyncBindVpcStatusRequest&;
    using Resp = QueryAsyncBindVpcStatusResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAsyncBindVpcStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::QueryAsyncBindVpcStatusOutcomeCallable PrivatednsClient::QueryAsyncBindVpcStatusCallable(const QueryAsyncBindVpcStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAsyncBindVpcStatusOutcome>>();
    QueryAsyncBindVpcStatusAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const QueryAsyncBindVpcStatusRequest&,
        QueryAsyncBindVpcStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::SubscribePrivateZoneServiceOutcome PrivatednsClient::SubscribePrivateZoneService(const SubscribePrivateZoneServiceRequest &request)
{
    auto outcome = MakeRequest(request, "SubscribePrivateZoneService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubscribePrivateZoneServiceResponse rsp = SubscribePrivateZoneServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubscribePrivateZoneServiceOutcome(rsp);
        else
            return SubscribePrivateZoneServiceOutcome(o.GetError());
    }
    else
    {
        return SubscribePrivateZoneServiceOutcome(outcome.GetError());
    }
}

void PrivatednsClient::SubscribePrivateZoneServiceAsync(const SubscribePrivateZoneServiceRequest& request, const SubscribePrivateZoneServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubscribePrivateZoneServiceRequest&;
    using Resp = SubscribePrivateZoneServiceResponse;

    DoRequestAsync<Req, Resp>(
        "SubscribePrivateZoneService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::SubscribePrivateZoneServiceOutcomeCallable PrivatednsClient::SubscribePrivateZoneServiceCallable(const SubscribePrivateZoneServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubscribePrivateZoneServiceOutcome>>();
    SubscribePrivateZoneServiceAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const SubscribePrivateZoneServiceRequest&,
        SubscribePrivateZoneServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


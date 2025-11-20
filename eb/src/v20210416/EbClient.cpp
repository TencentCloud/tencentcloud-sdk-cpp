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

#include <tencentcloud/eb/v20210416/EbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Eb::V20210416;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-16";
    const string ENDPOINT = "eb.tencentcloudapi.com";
}

EbClient::EbClient(const Credential &credential, const string &region) :
    EbClient(credential, region, ClientProfile())
{
}

EbClient::EbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EbClient::CheckRuleOutcome EbClient::CheckRule(const CheckRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CheckRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckRuleResponse rsp = CheckRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckRuleOutcome(rsp);
        else
            return CheckRuleOutcome(o.GetError());
    }
    else
    {
        return CheckRuleOutcome(outcome.GetError());
    }
}

void EbClient::CheckRuleAsync(const CheckRuleRequest& request, const CheckRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckRuleRequest&;
    using Resp = CheckRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CheckRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::CheckRuleOutcomeCallable EbClient::CheckRuleCallable(const CheckRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckRuleOutcome>>();
    CheckRuleAsync(
    request,
    [prom](
        const EbClient*,
        const CheckRuleRequest&,
        CheckRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::CheckTransformationOutcome EbClient::CheckTransformation(const CheckTransformationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckTransformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckTransformationResponse rsp = CheckTransformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckTransformationOutcome(rsp);
        else
            return CheckTransformationOutcome(o.GetError());
    }
    else
    {
        return CheckTransformationOutcome(outcome.GetError());
    }
}

void EbClient::CheckTransformationAsync(const CheckTransformationRequest& request, const CheckTransformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckTransformationRequest&;
    using Resp = CheckTransformationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckTransformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::CheckTransformationOutcomeCallable EbClient::CheckTransformationCallable(const CheckTransformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckTransformationOutcome>>();
    CheckTransformationAsync(
    request,
    [prom](
        const EbClient*,
        const CheckTransformationRequest&,
        CheckTransformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::CreateConnectionOutcome EbClient::CreateConnection(const CreateConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConnectionResponse rsp = CreateConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConnectionOutcome(rsp);
        else
            return CreateConnectionOutcome(o.GetError());
    }
    else
    {
        return CreateConnectionOutcome(outcome.GetError());
    }
}

void EbClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConnectionRequest&;
    using Resp = CreateConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::CreateConnectionOutcomeCallable EbClient::CreateConnectionCallable(const CreateConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConnectionOutcome>>();
    CreateConnectionAsync(
    request,
    [prom](
        const EbClient*,
        const CreateConnectionRequest&,
        CreateConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::CreateEventBusOutcome EbClient::CreateEventBus(const CreateEventBusRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEventBus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEventBusResponse rsp = CreateEventBusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEventBusOutcome(rsp);
        else
            return CreateEventBusOutcome(o.GetError());
    }
    else
    {
        return CreateEventBusOutcome(outcome.GetError());
    }
}

void EbClient::CreateEventBusAsync(const CreateEventBusRequest& request, const CreateEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEventBusRequest&;
    using Resp = CreateEventBusResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEventBus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::CreateEventBusOutcomeCallable EbClient::CreateEventBusCallable(const CreateEventBusRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEventBusOutcome>>();
    CreateEventBusAsync(
    request,
    [prom](
        const EbClient*,
        const CreateEventBusRequest&,
        CreateEventBusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::CreateRuleOutcome EbClient::CreateRule(const CreateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleResponse rsp = CreateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleOutcome(rsp);
        else
            return CreateRuleOutcome(o.GetError());
    }
    else
    {
        return CreateRuleOutcome(outcome.GetError());
    }
}

void EbClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRuleRequest&;
    using Resp = CreateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::CreateRuleOutcomeCallable EbClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRuleOutcome>>();
    CreateRuleAsync(
    request,
    [prom](
        const EbClient*,
        const CreateRuleRequest&,
        CreateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::CreateTargetOutcome EbClient::CreateTarget(const CreateTargetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTargetResponse rsp = CreateTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTargetOutcome(rsp);
        else
            return CreateTargetOutcome(o.GetError());
    }
    else
    {
        return CreateTargetOutcome(outcome.GetError());
    }
}

void EbClient::CreateTargetAsync(const CreateTargetRequest& request, const CreateTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTargetRequest&;
    using Resp = CreateTargetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTarget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::CreateTargetOutcomeCallable EbClient::CreateTargetCallable(const CreateTargetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTargetOutcome>>();
    CreateTargetAsync(
    request,
    [prom](
        const EbClient*,
        const CreateTargetRequest&,
        CreateTargetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::CreateTransformationOutcome EbClient::CreateTransformation(const CreateTransformationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTransformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTransformationResponse rsp = CreateTransformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTransformationOutcome(rsp);
        else
            return CreateTransformationOutcome(o.GetError());
    }
    else
    {
        return CreateTransformationOutcome(outcome.GetError());
    }
}

void EbClient::CreateTransformationAsync(const CreateTransformationRequest& request, const CreateTransformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTransformationRequest&;
    using Resp = CreateTransformationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTransformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::CreateTransformationOutcomeCallable EbClient::CreateTransformationCallable(const CreateTransformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTransformationOutcome>>();
    CreateTransformationAsync(
    request,
    [prom](
        const EbClient*,
        const CreateTransformationRequest&,
        CreateTransformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::DeleteConnectionOutcome EbClient::DeleteConnection(const DeleteConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConnectionResponse rsp = DeleteConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConnectionOutcome(rsp);
        else
            return DeleteConnectionOutcome(o.GetError());
    }
    else
    {
        return DeleteConnectionOutcome(outcome.GetError());
    }
}

void EbClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConnectionRequest&;
    using Resp = DeleteConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::DeleteConnectionOutcomeCallable EbClient::DeleteConnectionCallable(const DeleteConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConnectionOutcome>>();
    DeleteConnectionAsync(
    request,
    [prom](
        const EbClient*,
        const DeleteConnectionRequest&,
        DeleteConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::DeleteEventBusOutcome EbClient::DeleteEventBus(const DeleteEventBusRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEventBus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEventBusResponse rsp = DeleteEventBusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEventBusOutcome(rsp);
        else
            return DeleteEventBusOutcome(o.GetError());
    }
    else
    {
        return DeleteEventBusOutcome(outcome.GetError());
    }
}

void EbClient::DeleteEventBusAsync(const DeleteEventBusRequest& request, const DeleteEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEventBusRequest&;
    using Resp = DeleteEventBusResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEventBus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::DeleteEventBusOutcomeCallable EbClient::DeleteEventBusCallable(const DeleteEventBusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEventBusOutcome>>();
    DeleteEventBusAsync(
    request,
    [prom](
        const EbClient*,
        const DeleteEventBusRequest&,
        DeleteEventBusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::DeleteRuleOutcome EbClient::DeleteRule(const DeleteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleResponse rsp = DeleteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleOutcome(rsp);
        else
            return DeleteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleOutcome(outcome.GetError());
    }
}

void EbClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRuleRequest&;
    using Resp = DeleteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::DeleteRuleOutcomeCallable EbClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRuleOutcome>>();
    DeleteRuleAsync(
    request,
    [prom](
        const EbClient*,
        const DeleteRuleRequest&,
        DeleteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::DeleteTargetOutcome EbClient::DeleteTarget(const DeleteTargetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTargetResponse rsp = DeleteTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTargetOutcome(rsp);
        else
            return DeleteTargetOutcome(o.GetError());
    }
    else
    {
        return DeleteTargetOutcome(outcome.GetError());
    }
}

void EbClient::DeleteTargetAsync(const DeleteTargetRequest& request, const DeleteTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTargetRequest&;
    using Resp = DeleteTargetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTarget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::DeleteTargetOutcomeCallable EbClient::DeleteTargetCallable(const DeleteTargetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTargetOutcome>>();
    DeleteTargetAsync(
    request,
    [prom](
        const EbClient*,
        const DeleteTargetRequest&,
        DeleteTargetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::DeleteTransformationOutcome EbClient::DeleteTransformation(const DeleteTransformationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTransformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTransformationResponse rsp = DeleteTransformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTransformationOutcome(rsp);
        else
            return DeleteTransformationOutcome(o.GetError());
    }
    else
    {
        return DeleteTransformationOutcome(outcome.GetError());
    }
}

void EbClient::DeleteTransformationAsync(const DeleteTransformationRequest& request, const DeleteTransformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTransformationRequest&;
    using Resp = DeleteTransformationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTransformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::DeleteTransformationOutcomeCallable EbClient::DeleteTransformationCallable(const DeleteTransformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTransformationOutcome>>();
    DeleteTransformationAsync(
    request,
    [prom](
        const EbClient*,
        const DeleteTransformationRequest&,
        DeleteTransformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::DescribeLogTagValueOutcome EbClient::DescribeLogTagValue(const DescribeLogTagValueRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogTagValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogTagValueResponse rsp = DescribeLogTagValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogTagValueOutcome(rsp);
        else
            return DescribeLogTagValueOutcome(o.GetError());
    }
    else
    {
        return DescribeLogTagValueOutcome(outcome.GetError());
    }
}

void EbClient::DescribeLogTagValueAsync(const DescribeLogTagValueRequest& request, const DescribeLogTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogTagValueRequest&;
    using Resp = DescribeLogTagValueResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogTagValue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::DescribeLogTagValueOutcomeCallable EbClient::DescribeLogTagValueCallable(const DescribeLogTagValueRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogTagValueOutcome>>();
    DescribeLogTagValueAsync(
    request,
    [prom](
        const EbClient*,
        const DescribeLogTagValueRequest&,
        DescribeLogTagValueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::GetEventBusOutcome EbClient::GetEventBus(const GetEventBusRequest &request)
{
    auto outcome = MakeRequest(request, "GetEventBus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetEventBusResponse rsp = GetEventBusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetEventBusOutcome(rsp);
        else
            return GetEventBusOutcome(o.GetError());
    }
    else
    {
        return GetEventBusOutcome(outcome.GetError());
    }
}

void EbClient::GetEventBusAsync(const GetEventBusRequest& request, const GetEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetEventBusRequest&;
    using Resp = GetEventBusResponse;

    DoRequestAsync<Req, Resp>(
        "GetEventBus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::GetEventBusOutcomeCallable EbClient::GetEventBusCallable(const GetEventBusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetEventBusOutcome>>();
    GetEventBusAsync(
    request,
    [prom](
        const EbClient*,
        const GetEventBusRequest&,
        GetEventBusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::GetPlatformEventTemplateOutcome EbClient::GetPlatformEventTemplate(const GetPlatformEventTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "GetPlatformEventTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPlatformEventTemplateResponse rsp = GetPlatformEventTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPlatformEventTemplateOutcome(rsp);
        else
            return GetPlatformEventTemplateOutcome(o.GetError());
    }
    else
    {
        return GetPlatformEventTemplateOutcome(outcome.GetError());
    }
}

void EbClient::GetPlatformEventTemplateAsync(const GetPlatformEventTemplateRequest& request, const GetPlatformEventTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPlatformEventTemplateRequest&;
    using Resp = GetPlatformEventTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "GetPlatformEventTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::GetPlatformEventTemplateOutcomeCallable EbClient::GetPlatformEventTemplateCallable(const GetPlatformEventTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPlatformEventTemplateOutcome>>();
    GetPlatformEventTemplateAsync(
    request,
    [prom](
        const EbClient*,
        const GetPlatformEventTemplateRequest&,
        GetPlatformEventTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::GetRuleOutcome EbClient::GetRule(const GetRuleRequest &request)
{
    auto outcome = MakeRequest(request, "GetRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRuleResponse rsp = GetRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRuleOutcome(rsp);
        else
            return GetRuleOutcome(o.GetError());
    }
    else
    {
        return GetRuleOutcome(outcome.GetError());
    }
}

void EbClient::GetRuleAsync(const GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRuleRequest&;
    using Resp = GetRuleResponse;

    DoRequestAsync<Req, Resp>(
        "GetRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::GetRuleOutcomeCallable EbClient::GetRuleCallable(const GetRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRuleOutcome>>();
    GetRuleAsync(
    request,
    [prom](
        const EbClient*,
        const GetRuleRequest&,
        GetRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::GetTransformationOutcome EbClient::GetTransformation(const GetTransformationRequest &request)
{
    auto outcome = MakeRequest(request, "GetTransformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTransformationResponse rsp = GetTransformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTransformationOutcome(rsp);
        else
            return GetTransformationOutcome(o.GetError());
    }
    else
    {
        return GetTransformationOutcome(outcome.GetError());
    }
}

void EbClient::GetTransformationAsync(const GetTransformationRequest& request, const GetTransformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTransformationRequest&;
    using Resp = GetTransformationResponse;

    DoRequestAsync<Req, Resp>(
        "GetTransformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::GetTransformationOutcomeCallable EbClient::GetTransformationCallable(const GetTransformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTransformationOutcome>>();
    GetTransformationAsync(
    request,
    [prom](
        const EbClient*,
        const GetTransformationRequest&,
        GetTransformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::ListConnectionsOutcome EbClient::ListConnections(const ListConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListConnectionsResponse rsp = ListConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListConnectionsOutcome(rsp);
        else
            return ListConnectionsOutcome(o.GetError());
    }
    else
    {
        return ListConnectionsOutcome(outcome.GetError());
    }
}

void EbClient::ListConnectionsAsync(const ListConnectionsRequest& request, const ListConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListConnectionsRequest&;
    using Resp = ListConnectionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListConnections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::ListConnectionsOutcomeCallable EbClient::ListConnectionsCallable(const ListConnectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListConnectionsOutcome>>();
    ListConnectionsAsync(
    request,
    [prom](
        const EbClient*,
        const ListConnectionsRequest&,
        ListConnectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::ListEventBusesOutcome EbClient::ListEventBuses(const ListEventBusesRequest &request)
{
    auto outcome = MakeRequest(request, "ListEventBuses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEventBusesResponse rsp = ListEventBusesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEventBusesOutcome(rsp);
        else
            return ListEventBusesOutcome(o.GetError());
    }
    else
    {
        return ListEventBusesOutcome(outcome.GetError());
    }
}

void EbClient::ListEventBusesAsync(const ListEventBusesRequest& request, const ListEventBusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListEventBusesRequest&;
    using Resp = ListEventBusesResponse;

    DoRequestAsync<Req, Resp>(
        "ListEventBuses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::ListEventBusesOutcomeCallable EbClient::ListEventBusesCallable(const ListEventBusesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListEventBusesOutcome>>();
    ListEventBusesAsync(
    request,
    [prom](
        const EbClient*,
        const ListEventBusesRequest&,
        ListEventBusesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::ListPlatformEventNamesOutcome EbClient::ListPlatformEventNames(const ListPlatformEventNamesRequest &request)
{
    auto outcome = MakeRequest(request, "ListPlatformEventNames");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPlatformEventNamesResponse rsp = ListPlatformEventNamesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPlatformEventNamesOutcome(rsp);
        else
            return ListPlatformEventNamesOutcome(o.GetError());
    }
    else
    {
        return ListPlatformEventNamesOutcome(outcome.GetError());
    }
}

void EbClient::ListPlatformEventNamesAsync(const ListPlatformEventNamesRequest& request, const ListPlatformEventNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListPlatformEventNamesRequest&;
    using Resp = ListPlatformEventNamesResponse;

    DoRequestAsync<Req, Resp>(
        "ListPlatformEventNames", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::ListPlatformEventNamesOutcomeCallable EbClient::ListPlatformEventNamesCallable(const ListPlatformEventNamesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListPlatformEventNamesOutcome>>();
    ListPlatformEventNamesAsync(
    request,
    [prom](
        const EbClient*,
        const ListPlatformEventNamesRequest&,
        ListPlatformEventNamesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::ListPlatformEventPatternsOutcome EbClient::ListPlatformEventPatterns(const ListPlatformEventPatternsRequest &request)
{
    auto outcome = MakeRequest(request, "ListPlatformEventPatterns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPlatformEventPatternsResponse rsp = ListPlatformEventPatternsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPlatformEventPatternsOutcome(rsp);
        else
            return ListPlatformEventPatternsOutcome(o.GetError());
    }
    else
    {
        return ListPlatformEventPatternsOutcome(outcome.GetError());
    }
}

void EbClient::ListPlatformEventPatternsAsync(const ListPlatformEventPatternsRequest& request, const ListPlatformEventPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListPlatformEventPatternsRequest&;
    using Resp = ListPlatformEventPatternsResponse;

    DoRequestAsync<Req, Resp>(
        "ListPlatformEventPatterns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::ListPlatformEventPatternsOutcomeCallable EbClient::ListPlatformEventPatternsCallable(const ListPlatformEventPatternsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListPlatformEventPatternsOutcome>>();
    ListPlatformEventPatternsAsync(
    request,
    [prom](
        const EbClient*,
        const ListPlatformEventPatternsRequest&,
        ListPlatformEventPatternsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::ListPlatformProductsOutcome EbClient::ListPlatformProducts(const ListPlatformProductsRequest &request)
{
    auto outcome = MakeRequest(request, "ListPlatformProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPlatformProductsResponse rsp = ListPlatformProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPlatformProductsOutcome(rsp);
        else
            return ListPlatformProductsOutcome(o.GetError());
    }
    else
    {
        return ListPlatformProductsOutcome(outcome.GetError());
    }
}

void EbClient::ListPlatformProductsAsync(const ListPlatformProductsRequest& request, const ListPlatformProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListPlatformProductsRequest&;
    using Resp = ListPlatformProductsResponse;

    DoRequestAsync<Req, Resp>(
        "ListPlatformProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::ListPlatformProductsOutcomeCallable EbClient::ListPlatformProductsCallable(const ListPlatformProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListPlatformProductsOutcome>>();
    ListPlatformProductsAsync(
    request,
    [prom](
        const EbClient*,
        const ListPlatformProductsRequest&,
        ListPlatformProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::ListRulesOutcome EbClient::ListRules(const ListRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRulesResponse rsp = ListRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRulesOutcome(rsp);
        else
            return ListRulesOutcome(o.GetError());
    }
    else
    {
        return ListRulesOutcome(outcome.GetError());
    }
}

void EbClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRulesRequest&;
    using Resp = ListRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::ListRulesOutcomeCallable EbClient::ListRulesCallable(const ListRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRulesOutcome>>();
    ListRulesAsync(
    request,
    [prom](
        const EbClient*,
        const ListRulesRequest&,
        ListRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::ListTargetsOutcome EbClient::ListTargets(const ListTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "ListTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTargetsResponse rsp = ListTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTargetsOutcome(rsp);
        else
            return ListTargetsOutcome(o.GetError());
    }
    else
    {
        return ListTargetsOutcome(outcome.GetError());
    }
}

void EbClient::ListTargetsAsync(const ListTargetsRequest& request, const ListTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTargetsRequest&;
    using Resp = ListTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "ListTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::ListTargetsOutcomeCallable EbClient::ListTargetsCallable(const ListTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTargetsOutcome>>();
    ListTargetsAsync(
    request,
    [prom](
        const EbClient*,
        const ListTargetsRequest&,
        ListTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::PublishEventOutcome EbClient::PublishEvent(const PublishEventRequest &request)
{
    auto outcome = MakeRequest(request, "PublishEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishEventResponse rsp = PublishEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishEventOutcome(rsp);
        else
            return PublishEventOutcome(o.GetError());
    }
    else
    {
        return PublishEventOutcome(outcome.GetError());
    }
}

void EbClient::PublishEventAsync(const PublishEventRequest& request, const PublishEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishEventRequest&;
    using Resp = PublishEventResponse;

    DoRequestAsync<Req, Resp>(
        "PublishEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::PublishEventOutcomeCallable EbClient::PublishEventCallable(const PublishEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishEventOutcome>>();
    PublishEventAsync(
    request,
    [prom](
        const EbClient*,
        const PublishEventRequest&,
        PublishEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::PutEventsOutcome EbClient::PutEvents(const PutEventsRequest &request)
{
    auto outcome = MakeRequest(request, "PutEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutEventsResponse rsp = PutEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutEventsOutcome(rsp);
        else
            return PutEventsOutcome(o.GetError());
    }
    else
    {
        return PutEventsOutcome(outcome.GetError());
    }
}

void EbClient::PutEventsAsync(const PutEventsRequest& request, const PutEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutEventsRequest&;
    using Resp = PutEventsResponse;

    DoRequestAsync<Req, Resp>(
        "PutEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::PutEventsOutcomeCallable EbClient::PutEventsCallable(const PutEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutEventsOutcome>>();
    PutEventsAsync(
    request,
    [prom](
        const EbClient*,
        const PutEventsRequest&,
        PutEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::SearchLogOutcome EbClient::SearchLog(const SearchLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchLogResponse rsp = SearchLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchLogOutcome(rsp);
        else
            return SearchLogOutcome(o.GetError());
    }
    else
    {
        return SearchLogOutcome(outcome.GetError());
    }
}

void EbClient::SearchLogAsync(const SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchLogRequest&;
    using Resp = SearchLogResponse;

    DoRequestAsync<Req, Resp>(
        "SearchLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::SearchLogOutcomeCallable EbClient::SearchLogCallable(const SearchLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchLogOutcome>>();
    SearchLogAsync(
    request,
    [prom](
        const EbClient*,
        const SearchLogRequest&,
        SearchLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::UpdateConnectionOutcome EbClient::UpdateConnection(const UpdateConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateConnectionResponse rsp = UpdateConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateConnectionOutcome(rsp);
        else
            return UpdateConnectionOutcome(o.GetError());
    }
    else
    {
        return UpdateConnectionOutcome(outcome.GetError());
    }
}

void EbClient::UpdateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateConnectionRequest&;
    using Resp = UpdateConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::UpdateConnectionOutcomeCallable EbClient::UpdateConnectionCallable(const UpdateConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateConnectionOutcome>>();
    UpdateConnectionAsync(
    request,
    [prom](
        const EbClient*,
        const UpdateConnectionRequest&,
        UpdateConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::UpdateEventBusOutcome EbClient::UpdateEventBus(const UpdateEventBusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEventBus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEventBusResponse rsp = UpdateEventBusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEventBusOutcome(rsp);
        else
            return UpdateEventBusOutcome(o.GetError());
    }
    else
    {
        return UpdateEventBusOutcome(outcome.GetError());
    }
}

void EbClient::UpdateEventBusAsync(const UpdateEventBusRequest& request, const UpdateEventBusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateEventBusRequest&;
    using Resp = UpdateEventBusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateEventBus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::UpdateEventBusOutcomeCallable EbClient::UpdateEventBusCallable(const UpdateEventBusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateEventBusOutcome>>();
    UpdateEventBusAsync(
    request,
    [prom](
        const EbClient*,
        const UpdateEventBusRequest&,
        UpdateEventBusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::UpdateRuleOutcome EbClient::UpdateRule(const UpdateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRuleResponse rsp = UpdateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRuleOutcome(rsp);
        else
            return UpdateRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateRuleOutcome(outcome.GetError());
    }
}

void EbClient::UpdateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRuleRequest&;
    using Resp = UpdateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::UpdateRuleOutcomeCallable EbClient::UpdateRuleCallable(const UpdateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRuleOutcome>>();
    UpdateRuleAsync(
    request,
    [prom](
        const EbClient*,
        const UpdateRuleRequest&,
        UpdateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::UpdateTargetOutcome EbClient::UpdateTarget(const UpdateTargetRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTargetResponse rsp = UpdateTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTargetOutcome(rsp);
        else
            return UpdateTargetOutcome(o.GetError());
    }
    else
    {
        return UpdateTargetOutcome(outcome.GetError());
    }
}

void EbClient::UpdateTargetAsync(const UpdateTargetRequest& request, const UpdateTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTargetRequest&;
    using Resp = UpdateTargetResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTarget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::UpdateTargetOutcomeCallable EbClient::UpdateTargetCallable(const UpdateTargetRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTargetOutcome>>();
    UpdateTargetAsync(
    request,
    [prom](
        const EbClient*,
        const UpdateTargetRequest&,
        UpdateTargetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EbClient::UpdateTransformationOutcome EbClient::UpdateTransformation(const UpdateTransformationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTransformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTransformationResponse rsp = UpdateTransformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTransformationOutcome(rsp);
        else
            return UpdateTransformationOutcome(o.GetError());
    }
    else
    {
        return UpdateTransformationOutcome(outcome.GetError());
    }
}

void EbClient::UpdateTransformationAsync(const UpdateTransformationRequest& request, const UpdateTransformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateTransformationRequest&;
    using Resp = UpdateTransformationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateTransformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EbClient::UpdateTransformationOutcomeCallable EbClient::UpdateTransformationCallable(const UpdateTransformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateTransformationOutcome>>();
    UpdateTransformationAsync(
    request,
    [prom](
        const EbClient*,
        const UpdateTransformationRequest&,
        UpdateTransformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


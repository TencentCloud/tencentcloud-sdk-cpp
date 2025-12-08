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

#include <tencentcloud/trocket/v20230308/TrocketClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trocket::V20230308;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-03-08";
    const string ENDPOINT = "trocket.tencentcloudapi.com";
}

TrocketClient::TrocketClient(const Credential &credential, const string &region) :
    TrocketClient(credential, region, ClientProfile())
{
}

TrocketClient::TrocketClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrocketClient::ChangeMigratingTopicToNextStageOutcome TrocketClient::ChangeMigratingTopicToNextStage(const ChangeMigratingTopicToNextStageRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeMigratingTopicToNextStage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeMigratingTopicToNextStageResponse rsp = ChangeMigratingTopicToNextStageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeMigratingTopicToNextStageOutcome(rsp);
        else
            return ChangeMigratingTopicToNextStageOutcome(o.GetError());
    }
    else
    {
        return ChangeMigratingTopicToNextStageOutcome(outcome.GetError());
    }
}

void TrocketClient::ChangeMigratingTopicToNextStageAsync(const ChangeMigratingTopicToNextStageRequest& request, const ChangeMigratingTopicToNextStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeMigratingTopicToNextStageRequest&;
    using Resp = ChangeMigratingTopicToNextStageResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeMigratingTopicToNextStage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ChangeMigratingTopicToNextStageOutcomeCallable TrocketClient::ChangeMigratingTopicToNextStageCallable(const ChangeMigratingTopicToNextStageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeMigratingTopicToNextStageOutcome>>();
    ChangeMigratingTopicToNextStageAsync(
    request,
    [prom](
        const TrocketClient*,
        const ChangeMigratingTopicToNextStageRequest&,
        ChangeMigratingTopicToNextStageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::CreateConsumerGroupOutcome TrocketClient::CreateConsumerGroup(const CreateConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsumerGroupResponse rsp = CreateConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsumerGroupOutcome(rsp);
        else
            return CreateConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return CreateConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateConsumerGroupAsync(const CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConsumerGroupRequest&;
    using Resp = CreateConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::CreateConsumerGroupOutcomeCallable TrocketClient::CreateConsumerGroupCallable(const CreateConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConsumerGroupOutcome>>();
    CreateConsumerGroupAsync(
    request,
    [prom](
        const TrocketClient*,
        const CreateConsumerGroupRequest&,
        CreateConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::CreateInstanceOutcome TrocketClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceRequest&;
    using Resp = CreateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::CreateInstanceOutcomeCallable TrocketClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceOutcome>>();
    CreateInstanceAsync(
    request,
    [prom](
        const TrocketClient*,
        const CreateInstanceRequest&,
        CreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::CreateMQTTInsPublicEndpointOutcome TrocketClient::CreateMQTTInsPublicEndpoint(const CreateMQTTInsPublicEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMQTTInsPublicEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMQTTInsPublicEndpointResponse rsp = CreateMQTTInsPublicEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMQTTInsPublicEndpointOutcome(rsp);
        else
            return CreateMQTTInsPublicEndpointOutcome(o.GetError());
    }
    else
    {
        return CreateMQTTInsPublicEndpointOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateMQTTInsPublicEndpointAsync(const CreateMQTTInsPublicEndpointRequest& request, const CreateMQTTInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMQTTInsPublicEndpointRequest&;
    using Resp = CreateMQTTInsPublicEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMQTTInsPublicEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::CreateMQTTInsPublicEndpointOutcomeCallable TrocketClient::CreateMQTTInsPublicEndpointCallable(const CreateMQTTInsPublicEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMQTTInsPublicEndpointOutcome>>();
    CreateMQTTInsPublicEndpointAsync(
    request,
    [prom](
        const TrocketClient*,
        const CreateMQTTInsPublicEndpointRequest&,
        CreateMQTTInsPublicEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::CreateMQTTInstanceOutcome TrocketClient::CreateMQTTInstance(const CreateMQTTInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMQTTInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMQTTInstanceResponse rsp = CreateMQTTInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMQTTInstanceOutcome(rsp);
        else
            return CreateMQTTInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateMQTTInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateMQTTInstanceAsync(const CreateMQTTInstanceRequest& request, const CreateMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMQTTInstanceRequest&;
    using Resp = CreateMQTTInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMQTTInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::CreateMQTTInstanceOutcomeCallable TrocketClient::CreateMQTTInstanceCallable(const CreateMQTTInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMQTTInstanceOutcome>>();
    CreateMQTTInstanceAsync(
    request,
    [prom](
        const TrocketClient*,
        const CreateMQTTInstanceRequest&,
        CreateMQTTInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::CreateMQTTTopicOutcome TrocketClient::CreateMQTTTopic(const CreateMQTTTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMQTTTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMQTTTopicResponse rsp = CreateMQTTTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMQTTTopicOutcome(rsp);
        else
            return CreateMQTTTopicOutcome(o.GetError());
    }
    else
    {
        return CreateMQTTTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateMQTTTopicAsync(const CreateMQTTTopicRequest& request, const CreateMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMQTTTopicRequest&;
    using Resp = CreateMQTTTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMQTTTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::CreateMQTTTopicOutcomeCallable TrocketClient::CreateMQTTTopicCallable(const CreateMQTTTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMQTTTopicOutcome>>();
    CreateMQTTTopicAsync(
    request,
    [prom](
        const TrocketClient*,
        const CreateMQTTTopicRequest&,
        CreateMQTTTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::CreateMQTTUserOutcome TrocketClient::CreateMQTTUser(const CreateMQTTUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMQTTUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMQTTUserResponse rsp = CreateMQTTUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMQTTUserOutcome(rsp);
        else
            return CreateMQTTUserOutcome(o.GetError());
    }
    else
    {
        return CreateMQTTUserOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateMQTTUserAsync(const CreateMQTTUserRequest& request, const CreateMQTTUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMQTTUserRequest&;
    using Resp = CreateMQTTUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMQTTUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::CreateMQTTUserOutcomeCallable TrocketClient::CreateMQTTUserCallable(const CreateMQTTUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMQTTUserOutcome>>();
    CreateMQTTUserAsync(
    request,
    [prom](
        const TrocketClient*,
        const CreateMQTTUserRequest&,
        CreateMQTTUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::CreateRoleOutcome TrocketClient::CreateRole(const CreateRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoleResponse rsp = CreateRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoleOutcome(rsp);
        else
            return CreateRoleOutcome(o.GetError());
    }
    else
    {
        return CreateRoleOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateRoleAsync(const CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoleRequest&;
    using Resp = CreateRoleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::CreateRoleOutcomeCallable TrocketClient::CreateRoleCallable(const CreateRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoleOutcome>>();
    CreateRoleAsync(
    request,
    [prom](
        const TrocketClient*,
        const CreateRoleRequest&,
        CreateRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::CreateTopicOutcome TrocketClient::CreateTopic(const CreateTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicResponse rsp = CreateTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicOutcome(rsp);
        else
            return CreateTopicOutcome(o.GetError());
    }
    else
    {
        return CreateTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTopicRequest&;
    using Resp = CreateTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::CreateTopicOutcomeCallable TrocketClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicOutcome>>();
    CreateTopicAsync(
    request,
    [prom](
        const TrocketClient*,
        const CreateTopicRequest&,
        CreateTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DeleteConsumerGroupOutcome TrocketClient::DeleteConsumerGroup(const DeleteConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsumerGroupResponse rsp = DeleteConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsumerGroupOutcome(rsp);
        else
            return DeleteConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteConsumerGroupAsync(const DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConsumerGroupRequest&;
    using Resp = DeleteConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DeleteConsumerGroupOutcomeCallable TrocketClient::DeleteConsumerGroupCallable(const DeleteConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConsumerGroupOutcome>>();
    DeleteConsumerGroupAsync(
    request,
    [prom](
        const TrocketClient*,
        const DeleteConsumerGroupRequest&,
        DeleteConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DeleteInstanceOutcome TrocketClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstanceRequest&;
    using Resp = DeleteInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DeleteInstanceOutcomeCallable TrocketClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceOutcome>>();
    DeleteInstanceAsync(
    request,
    [prom](
        const TrocketClient*,
        const DeleteInstanceRequest&,
        DeleteInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DeleteMQTTInsPublicEndpointOutcome TrocketClient::DeleteMQTTInsPublicEndpoint(const DeleteMQTTInsPublicEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMQTTInsPublicEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMQTTInsPublicEndpointResponse rsp = DeleteMQTTInsPublicEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMQTTInsPublicEndpointOutcome(rsp);
        else
            return DeleteMQTTInsPublicEndpointOutcome(o.GetError());
    }
    else
    {
        return DeleteMQTTInsPublicEndpointOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteMQTTInsPublicEndpointAsync(const DeleteMQTTInsPublicEndpointRequest& request, const DeleteMQTTInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMQTTInsPublicEndpointRequest&;
    using Resp = DeleteMQTTInsPublicEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMQTTInsPublicEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DeleteMQTTInsPublicEndpointOutcomeCallable TrocketClient::DeleteMQTTInsPublicEndpointCallable(const DeleteMQTTInsPublicEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMQTTInsPublicEndpointOutcome>>();
    DeleteMQTTInsPublicEndpointAsync(
    request,
    [prom](
        const TrocketClient*,
        const DeleteMQTTInsPublicEndpointRequest&,
        DeleteMQTTInsPublicEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DeleteMQTTInstanceOutcome TrocketClient::DeleteMQTTInstance(const DeleteMQTTInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMQTTInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMQTTInstanceResponse rsp = DeleteMQTTInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMQTTInstanceOutcome(rsp);
        else
            return DeleteMQTTInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteMQTTInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteMQTTInstanceAsync(const DeleteMQTTInstanceRequest& request, const DeleteMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMQTTInstanceRequest&;
    using Resp = DeleteMQTTInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMQTTInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DeleteMQTTInstanceOutcomeCallable TrocketClient::DeleteMQTTInstanceCallable(const DeleteMQTTInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMQTTInstanceOutcome>>();
    DeleteMQTTInstanceAsync(
    request,
    [prom](
        const TrocketClient*,
        const DeleteMQTTInstanceRequest&,
        DeleteMQTTInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DeleteMQTTTopicOutcome TrocketClient::DeleteMQTTTopic(const DeleteMQTTTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMQTTTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMQTTTopicResponse rsp = DeleteMQTTTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMQTTTopicOutcome(rsp);
        else
            return DeleteMQTTTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteMQTTTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteMQTTTopicAsync(const DeleteMQTTTopicRequest& request, const DeleteMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMQTTTopicRequest&;
    using Resp = DeleteMQTTTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMQTTTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DeleteMQTTTopicOutcomeCallable TrocketClient::DeleteMQTTTopicCallable(const DeleteMQTTTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMQTTTopicOutcome>>();
    DeleteMQTTTopicAsync(
    request,
    [prom](
        const TrocketClient*,
        const DeleteMQTTTopicRequest&,
        DeleteMQTTTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DeleteMQTTUserOutcome TrocketClient::DeleteMQTTUser(const DeleteMQTTUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMQTTUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMQTTUserResponse rsp = DeleteMQTTUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMQTTUserOutcome(rsp);
        else
            return DeleteMQTTUserOutcome(o.GetError());
    }
    else
    {
        return DeleteMQTTUserOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteMQTTUserAsync(const DeleteMQTTUserRequest& request, const DeleteMQTTUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMQTTUserRequest&;
    using Resp = DeleteMQTTUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMQTTUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DeleteMQTTUserOutcomeCallable TrocketClient::DeleteMQTTUserCallable(const DeleteMQTTUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMQTTUserOutcome>>();
    DeleteMQTTUserAsync(
    request,
    [prom](
        const TrocketClient*,
        const DeleteMQTTUserRequest&,
        DeleteMQTTUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DeleteRoleOutcome TrocketClient::DeleteRole(const DeleteRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoleResponse rsp = DeleteRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoleOutcome(rsp);
        else
            return DeleteRoleOutcome(o.GetError());
    }
    else
    {
        return DeleteRoleOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoleRequest&;
    using Resp = DeleteRoleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DeleteRoleOutcomeCallable TrocketClient::DeleteRoleCallable(const DeleteRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoleOutcome>>();
    DeleteRoleAsync(
    request,
    [prom](
        const TrocketClient*,
        const DeleteRoleRequest&,
        DeleteRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DeleteSmoothMigrationTaskOutcome TrocketClient::DeleteSmoothMigrationTask(const DeleteSmoothMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSmoothMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSmoothMigrationTaskResponse rsp = DeleteSmoothMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSmoothMigrationTaskOutcome(rsp);
        else
            return DeleteSmoothMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteSmoothMigrationTaskOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteSmoothMigrationTaskAsync(const DeleteSmoothMigrationTaskRequest& request, const DeleteSmoothMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSmoothMigrationTaskRequest&;
    using Resp = DeleteSmoothMigrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSmoothMigrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DeleteSmoothMigrationTaskOutcomeCallable TrocketClient::DeleteSmoothMigrationTaskCallable(const DeleteSmoothMigrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSmoothMigrationTaskOutcome>>();
    DeleteSmoothMigrationTaskAsync(
    request,
    [prom](
        const TrocketClient*,
        const DeleteSmoothMigrationTaskRequest&,
        DeleteSmoothMigrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DeleteTopicOutcome TrocketClient::DeleteTopic(const DeleteTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicResponse rsp = DeleteTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicOutcome(rsp);
        else
            return DeleteTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTopicRequest&;
    using Resp = DeleteTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DeleteTopicOutcomeCallable TrocketClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicOutcome>>();
    DeleteTopicAsync(
    request,
    [prom](
        const TrocketClient*,
        const DeleteTopicRequest&,
        DeleteTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeConsumerClientOutcome TrocketClient::DescribeConsumerClient(const DescribeConsumerClientRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerClientResponse rsp = DescribeConsumerClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerClientOutcome(rsp);
        else
            return DescribeConsumerClientOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerClientOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerClientAsync(const DescribeConsumerClientRequest& request, const DescribeConsumerClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConsumerClientRequest&;
    using Resp = DescribeConsumerClientResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsumerClient", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeConsumerClientOutcomeCallable TrocketClient::DescribeConsumerClientCallable(const DescribeConsumerClientRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsumerClientOutcome>>();
    DescribeConsumerClientAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeConsumerClientRequest&,
        DescribeConsumerClientOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeConsumerClientListOutcome TrocketClient::DescribeConsumerClientList(const DescribeConsumerClientListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerClientList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerClientListResponse rsp = DescribeConsumerClientListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerClientListOutcome(rsp);
        else
            return DescribeConsumerClientListOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerClientListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerClientListAsync(const DescribeConsumerClientListRequest& request, const DescribeConsumerClientListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConsumerClientListRequest&;
    using Resp = DescribeConsumerClientListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsumerClientList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeConsumerClientListOutcomeCallable TrocketClient::DescribeConsumerClientListCallable(const DescribeConsumerClientListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsumerClientListOutcome>>();
    DescribeConsumerClientListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeConsumerClientListRequest&,
        DescribeConsumerClientListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeConsumerGroupOutcome TrocketClient::DescribeConsumerGroup(const DescribeConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerGroupResponse rsp = DescribeConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerGroupOutcome(rsp);
        else
            return DescribeConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerGroupAsync(const DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConsumerGroupRequest&;
    using Resp = DescribeConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeConsumerGroupOutcomeCallable TrocketClient::DescribeConsumerGroupCallable(const DescribeConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsumerGroupOutcome>>();
    DescribeConsumerGroupAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeConsumerGroupRequest&,
        DescribeConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeConsumerGroupListOutcome TrocketClient::DescribeConsumerGroupList(const DescribeConsumerGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerGroupListResponse rsp = DescribeConsumerGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerGroupListOutcome(rsp);
        else
            return DescribeConsumerGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerGroupListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerGroupListAsync(const DescribeConsumerGroupListRequest& request, const DescribeConsumerGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConsumerGroupListRequest&;
    using Resp = DescribeConsumerGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsumerGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeConsumerGroupListOutcomeCallable TrocketClient::DescribeConsumerGroupListCallable(const DescribeConsumerGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsumerGroupListOutcome>>();
    DescribeConsumerGroupListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeConsumerGroupListRequest&,
        DescribeConsumerGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeConsumerLagOutcome TrocketClient::DescribeConsumerLag(const DescribeConsumerLagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerLag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerLagResponse rsp = DescribeConsumerLagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerLagOutcome(rsp);
        else
            return DescribeConsumerLagOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerLagOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerLagAsync(const DescribeConsumerLagRequest& request, const DescribeConsumerLagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConsumerLagRequest&;
    using Resp = DescribeConsumerLagResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsumerLag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeConsumerLagOutcomeCallable TrocketClient::DescribeConsumerLagCallable(const DescribeConsumerLagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsumerLagOutcome>>();
    DescribeConsumerLagAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeConsumerLagRequest&,
        DescribeConsumerLagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeFusionInstanceListOutcome TrocketClient::DescribeFusionInstanceList(const DescribeFusionInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFusionInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFusionInstanceListResponse rsp = DescribeFusionInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFusionInstanceListOutcome(rsp);
        else
            return DescribeFusionInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeFusionInstanceListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeFusionInstanceListAsync(const DescribeFusionInstanceListRequest& request, const DescribeFusionInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFusionInstanceListRequest&;
    using Resp = DescribeFusionInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFusionInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeFusionInstanceListOutcomeCallable TrocketClient::DescribeFusionInstanceListCallable(const DescribeFusionInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFusionInstanceListOutcome>>();
    DescribeFusionInstanceListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeFusionInstanceListRequest&,
        DescribeFusionInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeInstanceOutcome TrocketClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceRequest&;
    using Resp = DescribeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeInstanceOutcomeCallable TrocketClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOutcome>>();
    DescribeInstanceAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeInstanceRequest&,
        DescribeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeInstanceListOutcome TrocketClient::DescribeInstanceList(const DescribeInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceListResponse rsp = DescribeInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceListOutcome(rsp);
        else
            return DescribeInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeInstanceListAsync(const DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceListRequest&;
    using Resp = DescribeInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeInstanceListOutcomeCallable TrocketClient::DescribeInstanceListCallable(const DescribeInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceListOutcome>>();
    DescribeInstanceListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeInstanceListRequest&,
        DescribeInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTClientOutcome TrocketClient::DescribeMQTTClient(const DescribeMQTTClientRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTClientResponse rsp = DescribeMQTTClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTClientOutcome(rsp);
        else
            return DescribeMQTTClientOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTClientOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTClientAsync(const DescribeMQTTClientRequest& request, const DescribeMQTTClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTClientRequest&;
    using Resp = DescribeMQTTClientResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTClient", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTClientOutcomeCallable TrocketClient::DescribeMQTTClientCallable(const DescribeMQTTClientRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTClientOutcome>>();
    DescribeMQTTClientAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTClientRequest&,
        DescribeMQTTClientOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTInsPublicEndpointsOutcome TrocketClient::DescribeMQTTInsPublicEndpoints(const DescribeMQTTInsPublicEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTInsPublicEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTInsPublicEndpointsResponse rsp = DescribeMQTTInsPublicEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTInsPublicEndpointsOutcome(rsp);
        else
            return DescribeMQTTInsPublicEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTInsPublicEndpointsOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTInsPublicEndpointsAsync(const DescribeMQTTInsPublicEndpointsRequest& request, const DescribeMQTTInsPublicEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTInsPublicEndpointsRequest&;
    using Resp = DescribeMQTTInsPublicEndpointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTInsPublicEndpoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTInsPublicEndpointsOutcomeCallable TrocketClient::DescribeMQTTInsPublicEndpointsCallable(const DescribeMQTTInsPublicEndpointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTInsPublicEndpointsOutcome>>();
    DescribeMQTTInsPublicEndpointsAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTInsPublicEndpointsRequest&,
        DescribeMQTTInsPublicEndpointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTInsVPCEndpointsOutcome TrocketClient::DescribeMQTTInsVPCEndpoints(const DescribeMQTTInsVPCEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTInsVPCEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTInsVPCEndpointsResponse rsp = DescribeMQTTInsVPCEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTInsVPCEndpointsOutcome(rsp);
        else
            return DescribeMQTTInsVPCEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTInsVPCEndpointsOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTInsVPCEndpointsAsync(const DescribeMQTTInsVPCEndpointsRequest& request, const DescribeMQTTInsVPCEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTInsVPCEndpointsRequest&;
    using Resp = DescribeMQTTInsVPCEndpointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTInsVPCEndpoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTInsVPCEndpointsOutcomeCallable TrocketClient::DescribeMQTTInsVPCEndpointsCallable(const DescribeMQTTInsVPCEndpointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTInsVPCEndpointsOutcome>>();
    DescribeMQTTInsVPCEndpointsAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTInsVPCEndpointsRequest&,
        DescribeMQTTInsVPCEndpointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTInstanceOutcome TrocketClient::DescribeMQTTInstance(const DescribeMQTTInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTInstanceResponse rsp = DescribeMQTTInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTInstanceOutcome(rsp);
        else
            return DescribeMQTTInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTInstanceAsync(const DescribeMQTTInstanceRequest& request, const DescribeMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTInstanceRequest&;
    using Resp = DescribeMQTTInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTInstanceOutcomeCallable TrocketClient::DescribeMQTTInstanceCallable(const DescribeMQTTInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTInstanceOutcome>>();
    DescribeMQTTInstanceAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTInstanceRequest&,
        DescribeMQTTInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTInstanceCertOutcome TrocketClient::DescribeMQTTInstanceCert(const DescribeMQTTInstanceCertRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTInstanceCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTInstanceCertResponse rsp = DescribeMQTTInstanceCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTInstanceCertOutcome(rsp);
        else
            return DescribeMQTTInstanceCertOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTInstanceCertOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTInstanceCertAsync(const DescribeMQTTInstanceCertRequest& request, const DescribeMQTTInstanceCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTInstanceCertRequest&;
    using Resp = DescribeMQTTInstanceCertResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTInstanceCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTInstanceCertOutcomeCallable TrocketClient::DescribeMQTTInstanceCertCallable(const DescribeMQTTInstanceCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTInstanceCertOutcome>>();
    DescribeMQTTInstanceCertAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTInstanceCertRequest&,
        DescribeMQTTInstanceCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTInstanceListOutcome TrocketClient::DescribeMQTTInstanceList(const DescribeMQTTInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTInstanceListResponse rsp = DescribeMQTTInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTInstanceListOutcome(rsp);
        else
            return DescribeMQTTInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTInstanceListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTInstanceListAsync(const DescribeMQTTInstanceListRequest& request, const DescribeMQTTInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTInstanceListRequest&;
    using Resp = DescribeMQTTInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTInstanceListOutcomeCallable TrocketClient::DescribeMQTTInstanceListCallable(const DescribeMQTTInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTInstanceListOutcome>>();
    DescribeMQTTInstanceListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTInstanceListRequest&,
        DescribeMQTTInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTMessageOutcome TrocketClient::DescribeMQTTMessage(const DescribeMQTTMessageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTMessageResponse rsp = DescribeMQTTMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTMessageOutcome(rsp);
        else
            return DescribeMQTTMessageOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTMessageOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTMessageAsync(const DescribeMQTTMessageRequest& request, const DescribeMQTTMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTMessageRequest&;
    using Resp = DescribeMQTTMessageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTMessageOutcomeCallable TrocketClient::DescribeMQTTMessageCallable(const DescribeMQTTMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTMessageOutcome>>();
    DescribeMQTTMessageAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTMessageRequest&,
        DescribeMQTTMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTMessageListOutcome TrocketClient::DescribeMQTTMessageList(const DescribeMQTTMessageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTMessageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTMessageListResponse rsp = DescribeMQTTMessageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTMessageListOutcome(rsp);
        else
            return DescribeMQTTMessageListOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTMessageListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTMessageListAsync(const DescribeMQTTMessageListRequest& request, const DescribeMQTTMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTMessageListRequest&;
    using Resp = DescribeMQTTMessageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTMessageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTMessageListOutcomeCallable TrocketClient::DescribeMQTTMessageListCallable(const DescribeMQTTMessageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTMessageListOutcome>>();
    DescribeMQTTMessageListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTMessageListRequest&,
        DescribeMQTTMessageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTProductSKUListOutcome TrocketClient::DescribeMQTTProductSKUList(const DescribeMQTTProductSKUListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTProductSKUList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTProductSKUListResponse rsp = DescribeMQTTProductSKUListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTProductSKUListOutcome(rsp);
        else
            return DescribeMQTTProductSKUListOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTProductSKUListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTProductSKUListAsync(const DescribeMQTTProductSKUListRequest& request, const DescribeMQTTProductSKUListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTProductSKUListRequest&;
    using Resp = DescribeMQTTProductSKUListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTProductSKUList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTProductSKUListOutcomeCallable TrocketClient::DescribeMQTTProductSKUListCallable(const DescribeMQTTProductSKUListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTProductSKUListOutcome>>();
    DescribeMQTTProductSKUListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTProductSKUListRequest&,
        DescribeMQTTProductSKUListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTTopicOutcome TrocketClient::DescribeMQTTTopic(const DescribeMQTTTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTTopicResponse rsp = DescribeMQTTTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTTopicOutcome(rsp);
        else
            return DescribeMQTTTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTTopicAsync(const DescribeMQTTTopicRequest& request, const DescribeMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTTopicRequest&;
    using Resp = DescribeMQTTTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTTopicOutcomeCallable TrocketClient::DescribeMQTTTopicCallable(const DescribeMQTTTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTTopicOutcome>>();
    DescribeMQTTTopicAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTTopicRequest&,
        DescribeMQTTTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTTopicListOutcome TrocketClient::DescribeMQTTTopicList(const DescribeMQTTTopicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTTopicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTTopicListResponse rsp = DescribeMQTTTopicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTTopicListOutcome(rsp);
        else
            return DescribeMQTTTopicListOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTTopicListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTTopicListAsync(const DescribeMQTTTopicListRequest& request, const DescribeMQTTTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTTopicListRequest&;
    using Resp = DescribeMQTTTopicListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTTopicList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTTopicListOutcomeCallable TrocketClient::DescribeMQTTTopicListCallable(const DescribeMQTTTopicListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTTopicListOutcome>>();
    DescribeMQTTTopicListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTTopicListRequest&,
        DescribeMQTTTopicListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMQTTUserListOutcome TrocketClient::DescribeMQTTUserList(const DescribeMQTTUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTUserListResponse rsp = DescribeMQTTUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTUserListOutcome(rsp);
        else
            return DescribeMQTTUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTUserListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTUserListAsync(const DescribeMQTTUserListRequest& request, const DescribeMQTTUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMQTTUserListRequest&;
    using Resp = DescribeMQTTUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMQTTUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMQTTUserListOutcomeCallable TrocketClient::DescribeMQTTUserListCallable(const DescribeMQTTUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMQTTUserListOutcome>>();
    DescribeMQTTUserListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMQTTUserListRequest&,
        DescribeMQTTUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMessageOutcome TrocketClient::DescribeMessage(const DescribeMessageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageResponse rsp = DescribeMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageOutcome(rsp);
        else
            return DescribeMessageOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMessageAsync(const DescribeMessageRequest& request, const DescribeMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageRequest&;
    using Resp = DescribeMessageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMessageOutcomeCallable TrocketClient::DescribeMessageCallable(const DescribeMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageOutcome>>();
    DescribeMessageAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMessageRequest&,
        DescribeMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMessageListOutcome TrocketClient::DescribeMessageList(const DescribeMessageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageListResponse rsp = DescribeMessageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageListOutcome(rsp);
        else
            return DescribeMessageListOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMessageListAsync(const DescribeMessageListRequest& request, const DescribeMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageListRequest&;
    using Resp = DescribeMessageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMessageListOutcomeCallable TrocketClient::DescribeMessageListCallable(const DescribeMessageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageListOutcome>>();
    DescribeMessageListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMessageListRequest&,
        DescribeMessageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMessageTraceOutcome TrocketClient::DescribeMessageTrace(const DescribeMessageTraceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageTrace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageTraceResponse rsp = DescribeMessageTraceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageTraceOutcome(rsp);
        else
            return DescribeMessageTraceOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageTraceOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMessageTraceAsync(const DescribeMessageTraceRequest& request, const DescribeMessageTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageTraceRequest&;
    using Resp = DescribeMessageTraceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageTrace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMessageTraceOutcomeCallable TrocketClient::DescribeMessageTraceCallable(const DescribeMessageTraceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageTraceOutcome>>();
    DescribeMessageTraceAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMessageTraceRequest&,
        DescribeMessageTraceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMigratingGroupStatsOutcome TrocketClient::DescribeMigratingGroupStats(const DescribeMigratingGroupStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigratingGroupStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigratingGroupStatsResponse rsp = DescribeMigratingGroupStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigratingGroupStatsOutcome(rsp);
        else
            return DescribeMigratingGroupStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigratingGroupStatsOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMigratingGroupStatsAsync(const DescribeMigratingGroupStatsRequest& request, const DescribeMigratingGroupStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigratingGroupStatsRequest&;
    using Resp = DescribeMigratingGroupStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigratingGroupStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMigratingGroupStatsOutcomeCallable TrocketClient::DescribeMigratingGroupStatsCallable(const DescribeMigratingGroupStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigratingGroupStatsOutcome>>();
    DescribeMigratingGroupStatsAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMigratingGroupStatsRequest&,
        DescribeMigratingGroupStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMigratingTopicListOutcome TrocketClient::DescribeMigratingTopicList(const DescribeMigratingTopicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigratingTopicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigratingTopicListResponse rsp = DescribeMigratingTopicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigratingTopicListOutcome(rsp);
        else
            return DescribeMigratingTopicListOutcome(o.GetError());
    }
    else
    {
        return DescribeMigratingTopicListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMigratingTopicListAsync(const DescribeMigratingTopicListRequest& request, const DescribeMigratingTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigratingTopicListRequest&;
    using Resp = DescribeMigratingTopicListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigratingTopicList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMigratingTopicListOutcomeCallable TrocketClient::DescribeMigratingTopicListCallable(const DescribeMigratingTopicListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigratingTopicListOutcome>>();
    DescribeMigratingTopicListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMigratingTopicListRequest&,
        DescribeMigratingTopicListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMigratingTopicStatsOutcome TrocketClient::DescribeMigratingTopicStats(const DescribeMigratingTopicStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigratingTopicStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigratingTopicStatsResponse rsp = DescribeMigratingTopicStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigratingTopicStatsOutcome(rsp);
        else
            return DescribeMigratingTopicStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigratingTopicStatsOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMigratingTopicStatsAsync(const DescribeMigratingTopicStatsRequest& request, const DescribeMigratingTopicStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigratingTopicStatsRequest&;
    using Resp = DescribeMigratingTopicStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigratingTopicStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMigratingTopicStatsOutcomeCallable TrocketClient::DescribeMigratingTopicStatsCallable(const DescribeMigratingTopicStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigratingTopicStatsOutcome>>();
    DescribeMigratingTopicStatsAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMigratingTopicStatsRequest&,
        DescribeMigratingTopicStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeMigrationTaskListOutcome TrocketClient::DescribeMigrationTaskList(const DescribeMigrationTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationTaskListResponse rsp = DescribeMigrationTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationTaskListOutcome(rsp);
        else
            return DescribeMigrationTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationTaskListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMigrationTaskListAsync(const DescribeMigrationTaskListRequest& request, const DescribeMigrationTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrationTaskListRequest&;
    using Resp = DescribeMigrationTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrationTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeMigrationTaskListOutcomeCallable TrocketClient::DescribeMigrationTaskListCallable(const DescribeMigrationTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrationTaskListOutcome>>();
    DescribeMigrationTaskListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeMigrationTaskListRequest&,
        DescribeMigrationTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeProducerListOutcome TrocketClient::DescribeProducerList(const DescribeProducerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProducerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProducerListResponse rsp = DescribeProducerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProducerListOutcome(rsp);
        else
            return DescribeProducerListOutcome(o.GetError());
    }
    else
    {
        return DescribeProducerListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeProducerListAsync(const DescribeProducerListRequest& request, const DescribeProducerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProducerListRequest&;
    using Resp = DescribeProducerListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProducerList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeProducerListOutcomeCallable TrocketClient::DescribeProducerListCallable(const DescribeProducerListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProducerListOutcome>>();
    DescribeProducerListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeProducerListRequest&,
        DescribeProducerListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeProductSKUsOutcome TrocketClient::DescribeProductSKUs(const DescribeProductSKUsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductSKUs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductSKUsResponse rsp = DescribeProductSKUsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductSKUsOutcome(rsp);
        else
            return DescribeProductSKUsOutcome(o.GetError());
    }
    else
    {
        return DescribeProductSKUsOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeProductSKUsAsync(const DescribeProductSKUsRequest& request, const DescribeProductSKUsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductSKUsRequest&;
    using Resp = DescribeProductSKUsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductSKUs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeProductSKUsOutcomeCallable TrocketClient::DescribeProductSKUsCallable(const DescribeProductSKUsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductSKUsOutcome>>();
    DescribeProductSKUsAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeProductSKUsRequest&,
        DescribeProductSKUsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeRoleListOutcome TrocketClient::DescribeRoleList(const DescribeRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoleListResponse rsp = DescribeRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoleListOutcome(rsp);
        else
            return DescribeRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeRoleListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeRoleListAsync(const DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoleListRequest&;
    using Resp = DescribeRoleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeRoleListOutcomeCallable TrocketClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoleListOutcome>>();
    DescribeRoleListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeRoleListRequest&,
        DescribeRoleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeSmoothMigrationTaskListOutcome TrocketClient::DescribeSmoothMigrationTaskList(const DescribeSmoothMigrationTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmoothMigrationTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmoothMigrationTaskListResponse rsp = DescribeSmoothMigrationTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmoothMigrationTaskListOutcome(rsp);
        else
            return DescribeSmoothMigrationTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeSmoothMigrationTaskListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeSmoothMigrationTaskListAsync(const DescribeSmoothMigrationTaskListRequest& request, const DescribeSmoothMigrationTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSmoothMigrationTaskListRequest&;
    using Resp = DescribeSmoothMigrationTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSmoothMigrationTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeSmoothMigrationTaskListOutcomeCallable TrocketClient::DescribeSmoothMigrationTaskListCallable(const DescribeSmoothMigrationTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSmoothMigrationTaskListOutcome>>();
    DescribeSmoothMigrationTaskListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeSmoothMigrationTaskListRequest&,
        DescribeSmoothMigrationTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeSourceClusterGroupListOutcome TrocketClient::DescribeSourceClusterGroupList(const DescribeSourceClusterGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSourceClusterGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSourceClusterGroupListResponse rsp = DescribeSourceClusterGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSourceClusterGroupListOutcome(rsp);
        else
            return DescribeSourceClusterGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeSourceClusterGroupListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeSourceClusterGroupListAsync(const DescribeSourceClusterGroupListRequest& request, const DescribeSourceClusterGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSourceClusterGroupListRequest&;
    using Resp = DescribeSourceClusterGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSourceClusterGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeSourceClusterGroupListOutcomeCallable TrocketClient::DescribeSourceClusterGroupListCallable(const DescribeSourceClusterGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSourceClusterGroupListOutcome>>();
    DescribeSourceClusterGroupListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeSourceClusterGroupListRequest&,
        DescribeSourceClusterGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeTopicOutcome TrocketClient::DescribeTopic(const DescribeTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicResponse rsp = DescribeTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicOutcome(rsp);
        else
            return DescribeTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeTopicAsync(const DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicRequest&;
    using Resp = DescribeTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeTopicOutcomeCallable TrocketClient::DescribeTopicCallable(const DescribeTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicOutcome>>();
    DescribeTopicAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeTopicRequest&,
        DescribeTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeTopicListOutcome TrocketClient::DescribeTopicList(const DescribeTopicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicListResponse rsp = DescribeTopicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicListOutcome(rsp);
        else
            return DescribeTopicListOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeTopicListAsync(const DescribeTopicListRequest& request, const DescribeTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicListRequest&;
    using Resp = DescribeTopicListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeTopicListOutcomeCallable TrocketClient::DescribeTopicListCallable(const DescribeTopicListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicListOutcome>>();
    DescribeTopicListAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeTopicListRequest&,
        DescribeTopicListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DescribeTopicListByGroupOutcome TrocketClient::DescribeTopicListByGroup(const DescribeTopicListByGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicListByGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicListByGroupResponse rsp = DescribeTopicListByGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicListByGroupOutcome(rsp);
        else
            return DescribeTopicListByGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicListByGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeTopicListByGroupAsync(const DescribeTopicListByGroupRequest& request, const DescribeTopicListByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicListByGroupRequest&;
    using Resp = DescribeTopicListByGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicListByGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DescribeTopicListByGroupOutcomeCallable TrocketClient::DescribeTopicListByGroupCallable(const DescribeTopicListByGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicListByGroupOutcome>>();
    DescribeTopicListByGroupAsync(
    request,
    [prom](
        const TrocketClient*,
        const DescribeTopicListByGroupRequest&,
        DescribeTopicListByGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::DoHealthCheckOnMigratingTopicOutcome TrocketClient::DoHealthCheckOnMigratingTopic(const DoHealthCheckOnMigratingTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DoHealthCheckOnMigratingTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DoHealthCheckOnMigratingTopicResponse rsp = DoHealthCheckOnMigratingTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DoHealthCheckOnMigratingTopicOutcome(rsp);
        else
            return DoHealthCheckOnMigratingTopicOutcome(o.GetError());
    }
    else
    {
        return DoHealthCheckOnMigratingTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DoHealthCheckOnMigratingTopicAsync(const DoHealthCheckOnMigratingTopicRequest& request, const DoHealthCheckOnMigratingTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DoHealthCheckOnMigratingTopicRequest&;
    using Resp = DoHealthCheckOnMigratingTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DoHealthCheckOnMigratingTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::DoHealthCheckOnMigratingTopicOutcomeCallable TrocketClient::DoHealthCheckOnMigratingTopicCallable(const DoHealthCheckOnMigratingTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DoHealthCheckOnMigratingTopicOutcome>>();
    DoHealthCheckOnMigratingTopicAsync(
    request,
    [prom](
        const TrocketClient*,
        const DoHealthCheckOnMigratingTopicRequest&,
        DoHealthCheckOnMigratingTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ImportSourceClusterConsumerGroupsOutcome TrocketClient::ImportSourceClusterConsumerGroups(const ImportSourceClusterConsumerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportSourceClusterConsumerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportSourceClusterConsumerGroupsResponse rsp = ImportSourceClusterConsumerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportSourceClusterConsumerGroupsOutcome(rsp);
        else
            return ImportSourceClusterConsumerGroupsOutcome(o.GetError());
    }
    else
    {
        return ImportSourceClusterConsumerGroupsOutcome(outcome.GetError());
    }
}

void TrocketClient::ImportSourceClusterConsumerGroupsAsync(const ImportSourceClusterConsumerGroupsRequest& request, const ImportSourceClusterConsumerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportSourceClusterConsumerGroupsRequest&;
    using Resp = ImportSourceClusterConsumerGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ImportSourceClusterConsumerGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ImportSourceClusterConsumerGroupsOutcomeCallable TrocketClient::ImportSourceClusterConsumerGroupsCallable(const ImportSourceClusterConsumerGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportSourceClusterConsumerGroupsOutcome>>();
    ImportSourceClusterConsumerGroupsAsync(
    request,
    [prom](
        const TrocketClient*,
        const ImportSourceClusterConsumerGroupsRequest&,
        ImportSourceClusterConsumerGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ImportSourceClusterTopicsOutcome TrocketClient::ImportSourceClusterTopics(const ImportSourceClusterTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportSourceClusterTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportSourceClusterTopicsResponse rsp = ImportSourceClusterTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportSourceClusterTopicsOutcome(rsp);
        else
            return ImportSourceClusterTopicsOutcome(o.GetError());
    }
    else
    {
        return ImportSourceClusterTopicsOutcome(outcome.GetError());
    }
}

void TrocketClient::ImportSourceClusterTopicsAsync(const ImportSourceClusterTopicsRequest& request, const ImportSourceClusterTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportSourceClusterTopicsRequest&;
    using Resp = ImportSourceClusterTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "ImportSourceClusterTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ImportSourceClusterTopicsOutcomeCallable TrocketClient::ImportSourceClusterTopicsCallable(const ImportSourceClusterTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportSourceClusterTopicsOutcome>>();
    ImportSourceClusterTopicsAsync(
    request,
    [prom](
        const TrocketClient*,
        const ImportSourceClusterTopicsRequest&,
        ImportSourceClusterTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ModifyConsumerGroupOutcome TrocketClient::ModifyConsumerGroup(const ModifyConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsumerGroupResponse rsp = ModifyConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsumerGroupOutcome(rsp);
        else
            return ModifyConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyConsumerGroupAsync(const ModifyConsumerGroupRequest& request, const ModifyConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConsumerGroupRequest&;
    using Resp = ModifyConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ModifyConsumerGroupOutcomeCallable TrocketClient::ModifyConsumerGroupCallable(const ModifyConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConsumerGroupOutcome>>();
    ModifyConsumerGroupAsync(
    request,
    [prom](
        const TrocketClient*,
        const ModifyConsumerGroupRequest&,
        ModifyConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ModifyInstanceOutcome TrocketClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceRequest&;
    using Resp = ModifyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ModifyInstanceOutcomeCallable TrocketClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceOutcome>>();
    ModifyInstanceAsync(
    request,
    [prom](
        const TrocketClient*,
        const ModifyInstanceRequest&,
        ModifyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ModifyInstanceEndpointOutcome TrocketClient::ModifyInstanceEndpoint(const ModifyInstanceEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceEndpointResponse rsp = ModifyInstanceEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceEndpointOutcome(rsp);
        else
            return ModifyInstanceEndpointOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceEndpointOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyInstanceEndpointAsync(const ModifyInstanceEndpointRequest& request, const ModifyInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceEndpointRequest&;
    using Resp = ModifyInstanceEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ModifyInstanceEndpointOutcomeCallable TrocketClient::ModifyInstanceEndpointCallable(const ModifyInstanceEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceEndpointOutcome>>();
    ModifyInstanceEndpointAsync(
    request,
    [prom](
        const TrocketClient*,
        const ModifyInstanceEndpointRequest&,
        ModifyInstanceEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ModifyMQTTInsPublicEndpointOutcome TrocketClient::ModifyMQTTInsPublicEndpoint(const ModifyMQTTInsPublicEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMQTTInsPublicEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMQTTInsPublicEndpointResponse rsp = ModifyMQTTInsPublicEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMQTTInsPublicEndpointOutcome(rsp);
        else
            return ModifyMQTTInsPublicEndpointOutcome(o.GetError());
    }
    else
    {
        return ModifyMQTTInsPublicEndpointOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyMQTTInsPublicEndpointAsync(const ModifyMQTTInsPublicEndpointRequest& request, const ModifyMQTTInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMQTTInsPublicEndpointRequest&;
    using Resp = ModifyMQTTInsPublicEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMQTTInsPublicEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ModifyMQTTInsPublicEndpointOutcomeCallable TrocketClient::ModifyMQTTInsPublicEndpointCallable(const ModifyMQTTInsPublicEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMQTTInsPublicEndpointOutcome>>();
    ModifyMQTTInsPublicEndpointAsync(
    request,
    [prom](
        const TrocketClient*,
        const ModifyMQTTInsPublicEndpointRequest&,
        ModifyMQTTInsPublicEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ModifyMQTTInstanceOutcome TrocketClient::ModifyMQTTInstance(const ModifyMQTTInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMQTTInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMQTTInstanceResponse rsp = ModifyMQTTInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMQTTInstanceOutcome(rsp);
        else
            return ModifyMQTTInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyMQTTInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyMQTTInstanceAsync(const ModifyMQTTInstanceRequest& request, const ModifyMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMQTTInstanceRequest&;
    using Resp = ModifyMQTTInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMQTTInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ModifyMQTTInstanceOutcomeCallable TrocketClient::ModifyMQTTInstanceCallable(const ModifyMQTTInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMQTTInstanceOutcome>>();
    ModifyMQTTInstanceAsync(
    request,
    [prom](
        const TrocketClient*,
        const ModifyMQTTInstanceRequest&,
        ModifyMQTTInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ModifyMQTTInstanceCertBindingOutcome TrocketClient::ModifyMQTTInstanceCertBinding(const ModifyMQTTInstanceCertBindingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMQTTInstanceCertBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMQTTInstanceCertBindingResponse rsp = ModifyMQTTInstanceCertBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMQTTInstanceCertBindingOutcome(rsp);
        else
            return ModifyMQTTInstanceCertBindingOutcome(o.GetError());
    }
    else
    {
        return ModifyMQTTInstanceCertBindingOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyMQTTInstanceCertBindingAsync(const ModifyMQTTInstanceCertBindingRequest& request, const ModifyMQTTInstanceCertBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMQTTInstanceCertBindingRequest&;
    using Resp = ModifyMQTTInstanceCertBindingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMQTTInstanceCertBinding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ModifyMQTTInstanceCertBindingOutcomeCallable TrocketClient::ModifyMQTTInstanceCertBindingCallable(const ModifyMQTTInstanceCertBindingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMQTTInstanceCertBindingOutcome>>();
    ModifyMQTTInstanceCertBindingAsync(
    request,
    [prom](
        const TrocketClient*,
        const ModifyMQTTInstanceCertBindingRequest&,
        ModifyMQTTInstanceCertBindingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ModifyMQTTTopicOutcome TrocketClient::ModifyMQTTTopic(const ModifyMQTTTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMQTTTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMQTTTopicResponse rsp = ModifyMQTTTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMQTTTopicOutcome(rsp);
        else
            return ModifyMQTTTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyMQTTTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyMQTTTopicAsync(const ModifyMQTTTopicRequest& request, const ModifyMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMQTTTopicRequest&;
    using Resp = ModifyMQTTTopicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMQTTTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ModifyMQTTTopicOutcomeCallable TrocketClient::ModifyMQTTTopicCallable(const ModifyMQTTTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMQTTTopicOutcome>>();
    ModifyMQTTTopicAsync(
    request,
    [prom](
        const TrocketClient*,
        const ModifyMQTTTopicRequest&,
        ModifyMQTTTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ModifyMQTTUserOutcome TrocketClient::ModifyMQTTUser(const ModifyMQTTUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMQTTUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMQTTUserResponse rsp = ModifyMQTTUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMQTTUserOutcome(rsp);
        else
            return ModifyMQTTUserOutcome(o.GetError());
    }
    else
    {
        return ModifyMQTTUserOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyMQTTUserAsync(const ModifyMQTTUserRequest& request, const ModifyMQTTUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMQTTUserRequest&;
    using Resp = ModifyMQTTUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMQTTUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ModifyMQTTUserOutcomeCallable TrocketClient::ModifyMQTTUserCallable(const ModifyMQTTUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMQTTUserOutcome>>();
    ModifyMQTTUserAsync(
    request,
    [prom](
        const TrocketClient*,
        const ModifyMQTTUserRequest&,
        ModifyMQTTUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ModifyRoleOutcome TrocketClient::ModifyRole(const ModifyRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoleResponse rsp = ModifyRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoleOutcome(rsp);
        else
            return ModifyRoleOutcome(o.GetError());
    }
    else
    {
        return ModifyRoleOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyRoleAsync(const ModifyRoleRequest& request, const ModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRoleRequest&;
    using Resp = ModifyRoleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ModifyRoleOutcomeCallable TrocketClient::ModifyRoleCallable(const ModifyRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRoleOutcome>>();
    ModifyRoleAsync(
    request,
    [prom](
        const TrocketClient*,
        const ModifyRoleRequest&,
        ModifyRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ModifyTopicOutcome TrocketClient::ModifyTopic(const ModifyTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicResponse rsp = ModifyTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicOutcome(rsp);
        else
            return ModifyTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyTopicAsync(const ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTopicRequest&;
    using Resp = ModifyTopicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ModifyTopicOutcomeCallable TrocketClient::ModifyTopicCallable(const ModifyTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTopicOutcome>>();
    ModifyTopicAsync(
    request,
    [prom](
        const TrocketClient*,
        const ModifyTopicRequest&,
        ModifyTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::RemoveMigratingTopicOutcome TrocketClient::RemoveMigratingTopic(const RemoveMigratingTopicRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveMigratingTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveMigratingTopicResponse rsp = RemoveMigratingTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveMigratingTopicOutcome(rsp);
        else
            return RemoveMigratingTopicOutcome(o.GetError());
    }
    else
    {
        return RemoveMigratingTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::RemoveMigratingTopicAsync(const RemoveMigratingTopicRequest& request, const RemoveMigratingTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveMigratingTopicRequest&;
    using Resp = RemoveMigratingTopicResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveMigratingTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::RemoveMigratingTopicOutcomeCallable TrocketClient::RemoveMigratingTopicCallable(const RemoveMigratingTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveMigratingTopicOutcome>>();
    RemoveMigratingTopicAsync(
    request,
    [prom](
        const TrocketClient*,
        const RemoveMigratingTopicRequest&,
        RemoveMigratingTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ResendDeadLetterMessageOutcome TrocketClient::ResendDeadLetterMessage(const ResendDeadLetterMessageRequest &request)
{
    auto outcome = MakeRequest(request, "ResendDeadLetterMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResendDeadLetterMessageResponse rsp = ResendDeadLetterMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResendDeadLetterMessageOutcome(rsp);
        else
            return ResendDeadLetterMessageOutcome(o.GetError());
    }
    else
    {
        return ResendDeadLetterMessageOutcome(outcome.GetError());
    }
}

void TrocketClient::ResendDeadLetterMessageAsync(const ResendDeadLetterMessageRequest& request, const ResendDeadLetterMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResendDeadLetterMessageRequest&;
    using Resp = ResendDeadLetterMessageResponse;

    DoRequestAsync<Req, Resp>(
        "ResendDeadLetterMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ResendDeadLetterMessageOutcomeCallable TrocketClient::ResendDeadLetterMessageCallable(const ResendDeadLetterMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResendDeadLetterMessageOutcome>>();
    ResendDeadLetterMessageAsync(
    request,
    [prom](
        const TrocketClient*,
        const ResendDeadLetterMessageRequest&,
        ResendDeadLetterMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::ResetConsumerGroupOffsetOutcome TrocketClient::ResetConsumerGroupOffset(const ResetConsumerGroupOffsetRequest &request)
{
    auto outcome = MakeRequest(request, "ResetConsumerGroupOffset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetConsumerGroupOffsetResponse rsp = ResetConsumerGroupOffsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetConsumerGroupOffsetOutcome(rsp);
        else
            return ResetConsumerGroupOffsetOutcome(o.GetError());
    }
    else
    {
        return ResetConsumerGroupOffsetOutcome(outcome.GetError());
    }
}

void TrocketClient::ResetConsumerGroupOffsetAsync(const ResetConsumerGroupOffsetRequest& request, const ResetConsumerGroupOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetConsumerGroupOffsetRequest&;
    using Resp = ResetConsumerGroupOffsetResponse;

    DoRequestAsync<Req, Resp>(
        "ResetConsumerGroupOffset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::ResetConsumerGroupOffsetOutcomeCallable TrocketClient::ResetConsumerGroupOffsetCallable(const ResetConsumerGroupOffsetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetConsumerGroupOffsetOutcome>>();
    ResetConsumerGroupOffsetAsync(
    request,
    [prom](
        const TrocketClient*,
        const ResetConsumerGroupOffsetRequest&,
        ResetConsumerGroupOffsetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::RollbackMigratingTopicStageOutcome TrocketClient::RollbackMigratingTopicStage(const RollbackMigratingTopicStageRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackMigratingTopicStage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackMigratingTopicStageResponse rsp = RollbackMigratingTopicStageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackMigratingTopicStageOutcome(rsp);
        else
            return RollbackMigratingTopicStageOutcome(o.GetError());
    }
    else
    {
        return RollbackMigratingTopicStageOutcome(outcome.GetError());
    }
}

void TrocketClient::RollbackMigratingTopicStageAsync(const RollbackMigratingTopicStageRequest& request, const RollbackMigratingTopicStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollbackMigratingTopicStageRequest&;
    using Resp = RollbackMigratingTopicStageResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackMigratingTopicStage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::RollbackMigratingTopicStageOutcomeCallable TrocketClient::RollbackMigratingTopicStageCallable(const RollbackMigratingTopicStageRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackMigratingTopicStageOutcome>>();
    RollbackMigratingTopicStageAsync(
    request,
    [prom](
        const TrocketClient*,
        const RollbackMigratingTopicStageRequest&,
        RollbackMigratingTopicStageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::SendMessageOutcome TrocketClient::SendMessage(const SendMessageRequest &request)
{
    auto outcome = MakeRequest(request, "SendMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendMessageResponse rsp = SendMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendMessageOutcome(rsp);
        else
            return SendMessageOutcome(o.GetError());
    }
    else
    {
        return SendMessageOutcome(outcome.GetError());
    }
}

void TrocketClient::SendMessageAsync(const SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendMessageRequest&;
    using Resp = SendMessageResponse;

    DoRequestAsync<Req, Resp>(
        "SendMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::SendMessageOutcomeCallable TrocketClient::SendMessageCallable(const SendMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendMessageOutcome>>();
    SendMessageAsync(
    request,
    [prom](
        const TrocketClient*,
        const SendMessageRequest&,
        SendMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrocketClient::VerifyMessageConsumptionOutcome TrocketClient::VerifyMessageConsumption(const VerifyMessageConsumptionRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyMessageConsumption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyMessageConsumptionResponse rsp = VerifyMessageConsumptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyMessageConsumptionOutcome(rsp);
        else
            return VerifyMessageConsumptionOutcome(o.GetError());
    }
    else
    {
        return VerifyMessageConsumptionOutcome(outcome.GetError());
    }
}

void TrocketClient::VerifyMessageConsumptionAsync(const VerifyMessageConsumptionRequest& request, const VerifyMessageConsumptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyMessageConsumptionRequest&;
    using Resp = VerifyMessageConsumptionResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyMessageConsumption", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrocketClient::VerifyMessageConsumptionOutcomeCallable TrocketClient::VerifyMessageConsumptionCallable(const VerifyMessageConsumptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyMessageConsumptionOutcome>>();
    VerifyMessageConsumptionAsync(
    request,
    [prom](
        const TrocketClient*,
        const VerifyMessageConsumptionRequest&,
        VerifyMessageConsumptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


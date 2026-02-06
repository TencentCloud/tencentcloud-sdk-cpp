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

#include <tencentcloud/tdmq/v20200217/TdmqClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdmq::V20200217;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-17";
    const string ENDPOINT = "tdmq.tencentcloudapi.com";
}

TdmqClient::TdmqClient(const Credential &credential, const string &region) :
    TdmqClient(credential, region, ClientProfile())
{
}

TdmqClient::TdmqClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdmqClient::AcknowledgeMessageOutcome TdmqClient::AcknowledgeMessage(const AcknowledgeMessageRequest &request)
{
    auto outcome = MakeRequest(request, "AcknowledgeMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcknowledgeMessageResponse rsp = AcknowledgeMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcknowledgeMessageOutcome(rsp);
        else
            return AcknowledgeMessageOutcome(o.GetError());
    }
    else
    {
        return AcknowledgeMessageOutcome(outcome.GetError());
    }
}

void TdmqClient::AcknowledgeMessageAsync(const AcknowledgeMessageRequest& request, const AcknowledgeMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AcknowledgeMessageRequest&;
    using Resp = AcknowledgeMessageResponse;

    DoRequestAsync<Req, Resp>(
        "AcknowledgeMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::AcknowledgeMessageOutcomeCallable TdmqClient::AcknowledgeMessageCallable(const AcknowledgeMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<AcknowledgeMessageOutcome>>();
    AcknowledgeMessageAsync(
    request,
    [prom](
        const TdmqClient*,
        const AcknowledgeMessageRequest&,
        AcknowledgeMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ClearCmqQueueOutcome TdmqClient::ClearCmqQueue(const ClearCmqQueueRequest &request)
{
    auto outcome = MakeRequest(request, "ClearCmqQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearCmqQueueResponse rsp = ClearCmqQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearCmqQueueOutcome(rsp);
        else
            return ClearCmqQueueOutcome(o.GetError());
    }
    else
    {
        return ClearCmqQueueOutcome(outcome.GetError());
    }
}

void TdmqClient::ClearCmqQueueAsync(const ClearCmqQueueRequest& request, const ClearCmqQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClearCmqQueueRequest&;
    using Resp = ClearCmqQueueResponse;

    DoRequestAsync<Req, Resp>(
        "ClearCmqQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ClearCmqQueueOutcomeCallable TdmqClient::ClearCmqQueueCallable(const ClearCmqQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClearCmqQueueOutcome>>();
    ClearCmqQueueAsync(
    request,
    [prom](
        const TdmqClient*,
        const ClearCmqQueueRequest&,
        ClearCmqQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ClearCmqSubscriptionFilterTagsOutcome TdmqClient::ClearCmqSubscriptionFilterTags(const ClearCmqSubscriptionFilterTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ClearCmqSubscriptionFilterTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearCmqSubscriptionFilterTagsResponse rsp = ClearCmqSubscriptionFilterTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearCmqSubscriptionFilterTagsOutcome(rsp);
        else
            return ClearCmqSubscriptionFilterTagsOutcome(o.GetError());
    }
    else
    {
        return ClearCmqSubscriptionFilterTagsOutcome(outcome.GetError());
    }
}

void TdmqClient::ClearCmqSubscriptionFilterTagsAsync(const ClearCmqSubscriptionFilterTagsRequest& request, const ClearCmqSubscriptionFilterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClearCmqSubscriptionFilterTagsRequest&;
    using Resp = ClearCmqSubscriptionFilterTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ClearCmqSubscriptionFilterTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ClearCmqSubscriptionFilterTagsOutcomeCallable TdmqClient::ClearCmqSubscriptionFilterTagsCallable(const ClearCmqSubscriptionFilterTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClearCmqSubscriptionFilterTagsOutcome>>();
    ClearCmqSubscriptionFilterTagsAsync(
    request,
    [prom](
        const TdmqClient*,
        const ClearCmqSubscriptionFilterTagsRequest&,
        ClearCmqSubscriptionFilterTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateClusterOutcome TdmqClient::CreateCluster(const CreateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterResponse rsp = CreateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterOutcome(rsp);
        else
            return CreateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterRequest&;
    using Resp = CreateClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateClusterOutcomeCallable TdmqClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterOutcome>>();
    CreateClusterAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateClusterRequest&,
        CreateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateCmqQueueOutcome TdmqClient::CreateCmqQueue(const CreateCmqQueueRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCmqQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCmqQueueResponse rsp = CreateCmqQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCmqQueueOutcome(rsp);
        else
            return CreateCmqQueueOutcome(o.GetError());
    }
    else
    {
        return CreateCmqQueueOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateCmqQueueAsync(const CreateCmqQueueRequest& request, const CreateCmqQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCmqQueueRequest&;
    using Resp = CreateCmqQueueResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCmqQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateCmqQueueOutcomeCallable TdmqClient::CreateCmqQueueCallable(const CreateCmqQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCmqQueueOutcome>>();
    CreateCmqQueueAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateCmqQueueRequest&,
        CreateCmqQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateCmqSubscribeOutcome TdmqClient::CreateCmqSubscribe(const CreateCmqSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCmqSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCmqSubscribeResponse rsp = CreateCmqSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCmqSubscribeOutcome(rsp);
        else
            return CreateCmqSubscribeOutcome(o.GetError());
    }
    else
    {
        return CreateCmqSubscribeOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateCmqSubscribeAsync(const CreateCmqSubscribeRequest& request, const CreateCmqSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCmqSubscribeRequest&;
    using Resp = CreateCmqSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCmqSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateCmqSubscribeOutcomeCallable TdmqClient::CreateCmqSubscribeCallable(const CreateCmqSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCmqSubscribeOutcome>>();
    CreateCmqSubscribeAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateCmqSubscribeRequest&,
        CreateCmqSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateCmqTopicOutcome TdmqClient::CreateCmqTopic(const CreateCmqTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCmqTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCmqTopicResponse rsp = CreateCmqTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCmqTopicOutcome(rsp);
        else
            return CreateCmqTopicOutcome(o.GetError());
    }
    else
    {
        return CreateCmqTopicOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateCmqTopicAsync(const CreateCmqTopicRequest& request, const CreateCmqTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCmqTopicRequest&;
    using Resp = CreateCmqTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCmqTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateCmqTopicOutcomeCallable TdmqClient::CreateCmqTopicCallable(const CreateCmqTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCmqTopicOutcome>>();
    CreateCmqTopicAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateCmqTopicRequest&,
        CreateCmqTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateEnvironmentOutcome TdmqClient::CreateEnvironment(const CreateEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnvironmentResponse rsp = CreateEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnvironmentOutcome(rsp);
        else
            return CreateEnvironmentOutcome(o.GetError());
    }
    else
    {
        return CreateEnvironmentOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEnvironmentRequest&;
    using Resp = CreateEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateEnvironmentOutcomeCallable TdmqClient::CreateEnvironmentCallable(const CreateEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEnvironmentOutcome>>();
    CreateEnvironmentAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateEnvironmentRequest&,
        CreateEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateEnvironmentRoleOutcome TdmqClient::CreateEnvironmentRole(const CreateEnvironmentRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnvironmentRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnvironmentRoleResponse rsp = CreateEnvironmentRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnvironmentRoleOutcome(rsp);
        else
            return CreateEnvironmentRoleOutcome(o.GetError());
    }
    else
    {
        return CreateEnvironmentRoleOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateEnvironmentRoleAsync(const CreateEnvironmentRoleRequest& request, const CreateEnvironmentRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEnvironmentRoleRequest&;
    using Resp = CreateEnvironmentRoleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEnvironmentRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateEnvironmentRoleOutcomeCallable TdmqClient::CreateEnvironmentRoleCallable(const CreateEnvironmentRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEnvironmentRoleOutcome>>();
    CreateEnvironmentRoleAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateEnvironmentRoleRequest&,
        CreateEnvironmentRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateProClusterOutcome TdmqClient::CreateProCluster(const CreateProClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProClusterResponse rsp = CreateProClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProClusterOutcome(rsp);
        else
            return CreateProClusterOutcome(o.GetError());
    }
    else
    {
        return CreateProClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateProClusterAsync(const CreateProClusterRequest& request, const CreateProClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProClusterRequest&;
    using Resp = CreateProClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateProClusterOutcomeCallable TdmqClient::CreateProClusterCallable(const CreateProClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProClusterOutcome>>();
    CreateProClusterAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateProClusterRequest&,
        CreateProClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRabbitMQBindingOutcome TdmqClient::CreateRabbitMQBinding(const CreateRabbitMQBindingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRabbitMQBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRabbitMQBindingResponse rsp = CreateRabbitMQBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRabbitMQBindingOutcome(rsp);
        else
            return CreateRabbitMQBindingOutcome(o.GetError());
    }
    else
    {
        return CreateRabbitMQBindingOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRabbitMQBindingAsync(const CreateRabbitMQBindingRequest& request, const CreateRabbitMQBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRabbitMQBindingRequest&;
    using Resp = CreateRabbitMQBindingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRabbitMQBinding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRabbitMQBindingOutcomeCallable TdmqClient::CreateRabbitMQBindingCallable(const CreateRabbitMQBindingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRabbitMQBindingOutcome>>();
    CreateRabbitMQBindingAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRabbitMQBindingRequest&,
        CreateRabbitMQBindingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRabbitMQUserOutcome TdmqClient::CreateRabbitMQUser(const CreateRabbitMQUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRabbitMQUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRabbitMQUserResponse rsp = CreateRabbitMQUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRabbitMQUserOutcome(rsp);
        else
            return CreateRabbitMQUserOutcome(o.GetError());
    }
    else
    {
        return CreateRabbitMQUserOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRabbitMQUserAsync(const CreateRabbitMQUserRequest& request, const CreateRabbitMQUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRabbitMQUserRequest&;
    using Resp = CreateRabbitMQUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRabbitMQUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRabbitMQUserOutcomeCallable TdmqClient::CreateRabbitMQUserCallable(const CreateRabbitMQUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRabbitMQUserOutcome>>();
    CreateRabbitMQUserAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRabbitMQUserRequest&,
        CreateRabbitMQUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRabbitMQVipInstanceOutcome TdmqClient::CreateRabbitMQVipInstance(const CreateRabbitMQVipInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRabbitMQVipInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRabbitMQVipInstanceResponse rsp = CreateRabbitMQVipInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRabbitMQVipInstanceOutcome(rsp);
        else
            return CreateRabbitMQVipInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateRabbitMQVipInstanceOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRabbitMQVipInstanceAsync(const CreateRabbitMQVipInstanceRequest& request, const CreateRabbitMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRabbitMQVipInstanceRequest&;
    using Resp = CreateRabbitMQVipInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRabbitMQVipInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRabbitMQVipInstanceOutcomeCallable TdmqClient::CreateRabbitMQVipInstanceCallable(const CreateRabbitMQVipInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRabbitMQVipInstanceOutcome>>();
    CreateRabbitMQVipInstanceAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRabbitMQVipInstanceRequest&,
        CreateRabbitMQVipInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRabbitMQVirtualHostOutcome TdmqClient::CreateRabbitMQVirtualHost(const CreateRabbitMQVirtualHostRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRabbitMQVirtualHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRabbitMQVirtualHostResponse rsp = CreateRabbitMQVirtualHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRabbitMQVirtualHostOutcome(rsp);
        else
            return CreateRabbitMQVirtualHostOutcome(o.GetError());
    }
    else
    {
        return CreateRabbitMQVirtualHostOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRabbitMQVirtualHostAsync(const CreateRabbitMQVirtualHostRequest& request, const CreateRabbitMQVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRabbitMQVirtualHostRequest&;
    using Resp = CreateRabbitMQVirtualHostResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRabbitMQVirtualHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRabbitMQVirtualHostOutcomeCallable TdmqClient::CreateRabbitMQVirtualHostCallable(const CreateRabbitMQVirtualHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRabbitMQVirtualHostOutcome>>();
    CreateRabbitMQVirtualHostAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRabbitMQVirtualHostRequest&,
        CreateRabbitMQVirtualHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRocketMQClusterOutcome TdmqClient::CreateRocketMQCluster(const CreateRocketMQClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRocketMQCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRocketMQClusterResponse rsp = CreateRocketMQClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRocketMQClusterOutcome(rsp);
        else
            return CreateRocketMQClusterOutcome(o.GetError());
    }
    else
    {
        return CreateRocketMQClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRocketMQClusterAsync(const CreateRocketMQClusterRequest& request, const CreateRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRocketMQClusterRequest&;
    using Resp = CreateRocketMQClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRocketMQCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRocketMQClusterOutcomeCallable TdmqClient::CreateRocketMQClusterCallable(const CreateRocketMQClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRocketMQClusterOutcome>>();
    CreateRocketMQClusterAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRocketMQClusterRequest&,
        CreateRocketMQClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRocketMQEnvironmentRoleOutcome TdmqClient::CreateRocketMQEnvironmentRole(const CreateRocketMQEnvironmentRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRocketMQEnvironmentRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRocketMQEnvironmentRoleResponse rsp = CreateRocketMQEnvironmentRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRocketMQEnvironmentRoleOutcome(rsp);
        else
            return CreateRocketMQEnvironmentRoleOutcome(o.GetError());
    }
    else
    {
        return CreateRocketMQEnvironmentRoleOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRocketMQEnvironmentRoleAsync(const CreateRocketMQEnvironmentRoleRequest& request, const CreateRocketMQEnvironmentRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRocketMQEnvironmentRoleRequest&;
    using Resp = CreateRocketMQEnvironmentRoleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRocketMQEnvironmentRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRocketMQEnvironmentRoleOutcomeCallable TdmqClient::CreateRocketMQEnvironmentRoleCallable(const CreateRocketMQEnvironmentRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRocketMQEnvironmentRoleOutcome>>();
    CreateRocketMQEnvironmentRoleAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRocketMQEnvironmentRoleRequest&,
        CreateRocketMQEnvironmentRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRocketMQGroupOutcome TdmqClient::CreateRocketMQGroup(const CreateRocketMQGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRocketMQGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRocketMQGroupResponse rsp = CreateRocketMQGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRocketMQGroupOutcome(rsp);
        else
            return CreateRocketMQGroupOutcome(o.GetError());
    }
    else
    {
        return CreateRocketMQGroupOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRocketMQGroupAsync(const CreateRocketMQGroupRequest& request, const CreateRocketMQGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRocketMQGroupRequest&;
    using Resp = CreateRocketMQGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRocketMQGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRocketMQGroupOutcomeCallable TdmqClient::CreateRocketMQGroupCallable(const CreateRocketMQGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRocketMQGroupOutcome>>();
    CreateRocketMQGroupAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRocketMQGroupRequest&,
        CreateRocketMQGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRocketMQGroupV2Outcome TdmqClient::CreateRocketMQGroupV2(const CreateRocketMQGroupV2Request &request)
{
    auto outcome = MakeRequest(request, "CreateRocketMQGroupV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRocketMQGroupV2Response rsp = CreateRocketMQGroupV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRocketMQGroupV2Outcome(rsp);
        else
            return CreateRocketMQGroupV2Outcome(o.GetError());
    }
    else
    {
        return CreateRocketMQGroupV2Outcome(outcome.GetError());
    }
}

void TdmqClient::CreateRocketMQGroupV2Async(const CreateRocketMQGroupV2Request& request, const CreateRocketMQGroupV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRocketMQGroupV2Request&;
    using Resp = CreateRocketMQGroupV2Response;

    DoRequestAsync<Req, Resp>(
        "CreateRocketMQGroupV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRocketMQGroupV2OutcomeCallable TdmqClient::CreateRocketMQGroupV2Callable(const CreateRocketMQGroupV2Request &request)
{
    const auto prom = std::make_shared<std::promise<CreateRocketMQGroupV2Outcome>>();
    CreateRocketMQGroupV2Async(
    request,
    [prom](
        const TdmqClient*,
        const CreateRocketMQGroupV2Request&,
        CreateRocketMQGroupV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRocketMQNamespaceOutcome TdmqClient::CreateRocketMQNamespace(const CreateRocketMQNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRocketMQNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRocketMQNamespaceResponse rsp = CreateRocketMQNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRocketMQNamespaceOutcome(rsp);
        else
            return CreateRocketMQNamespaceOutcome(o.GetError());
    }
    else
    {
        return CreateRocketMQNamespaceOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRocketMQNamespaceAsync(const CreateRocketMQNamespaceRequest& request, const CreateRocketMQNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRocketMQNamespaceRequest&;
    using Resp = CreateRocketMQNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRocketMQNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRocketMQNamespaceOutcomeCallable TdmqClient::CreateRocketMQNamespaceCallable(const CreateRocketMQNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRocketMQNamespaceOutcome>>();
    CreateRocketMQNamespaceAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRocketMQNamespaceRequest&,
        CreateRocketMQNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRocketMQRoleOutcome TdmqClient::CreateRocketMQRole(const CreateRocketMQRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRocketMQRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRocketMQRoleResponse rsp = CreateRocketMQRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRocketMQRoleOutcome(rsp);
        else
            return CreateRocketMQRoleOutcome(o.GetError());
    }
    else
    {
        return CreateRocketMQRoleOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRocketMQRoleAsync(const CreateRocketMQRoleRequest& request, const CreateRocketMQRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRocketMQRoleRequest&;
    using Resp = CreateRocketMQRoleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRocketMQRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRocketMQRoleOutcomeCallable TdmqClient::CreateRocketMQRoleCallable(const CreateRocketMQRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRocketMQRoleOutcome>>();
    CreateRocketMQRoleAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRocketMQRoleRequest&,
        CreateRocketMQRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRocketMQTopicOutcome TdmqClient::CreateRocketMQTopic(const CreateRocketMQTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRocketMQTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRocketMQTopicResponse rsp = CreateRocketMQTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRocketMQTopicOutcome(rsp);
        else
            return CreateRocketMQTopicOutcome(o.GetError());
    }
    else
    {
        return CreateRocketMQTopicOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRocketMQTopicAsync(const CreateRocketMQTopicRequest& request, const CreateRocketMQTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRocketMQTopicRequest&;
    using Resp = CreateRocketMQTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRocketMQTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRocketMQTopicOutcomeCallable TdmqClient::CreateRocketMQTopicCallable(const CreateRocketMQTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRocketMQTopicOutcome>>();
    CreateRocketMQTopicAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRocketMQTopicRequest&,
        CreateRocketMQTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRocketMQTopicV2Outcome TdmqClient::CreateRocketMQTopicV2(const CreateRocketMQTopicV2Request &request)
{
    auto outcome = MakeRequest(request, "CreateRocketMQTopicV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRocketMQTopicV2Response rsp = CreateRocketMQTopicV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRocketMQTopicV2Outcome(rsp);
        else
            return CreateRocketMQTopicV2Outcome(o.GetError());
    }
    else
    {
        return CreateRocketMQTopicV2Outcome(outcome.GetError());
    }
}

void TdmqClient::CreateRocketMQTopicV2Async(const CreateRocketMQTopicV2Request& request, const CreateRocketMQTopicV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRocketMQTopicV2Request&;
    using Resp = CreateRocketMQTopicV2Response;

    DoRequestAsync<Req, Resp>(
        "CreateRocketMQTopicV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRocketMQTopicV2OutcomeCallable TdmqClient::CreateRocketMQTopicV2Callable(const CreateRocketMQTopicV2Request &request)
{
    const auto prom = std::make_shared<std::promise<CreateRocketMQTopicV2Outcome>>();
    CreateRocketMQTopicV2Async(
    request,
    [prom](
        const TdmqClient*,
        const CreateRocketMQTopicV2Request&,
        CreateRocketMQTopicV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRocketMQVipInstanceOutcome TdmqClient::CreateRocketMQVipInstance(const CreateRocketMQVipInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRocketMQVipInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRocketMQVipInstanceResponse rsp = CreateRocketMQVipInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRocketMQVipInstanceOutcome(rsp);
        else
            return CreateRocketMQVipInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateRocketMQVipInstanceOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateRocketMQVipInstanceAsync(const CreateRocketMQVipInstanceRequest& request, const CreateRocketMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRocketMQVipInstanceRequest&;
    using Resp = CreateRocketMQVipInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRocketMQVipInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateRocketMQVipInstanceOutcomeCallable TdmqClient::CreateRocketMQVipInstanceCallable(const CreateRocketMQVipInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRocketMQVipInstanceOutcome>>();
    CreateRocketMQVipInstanceAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRocketMQVipInstanceRequest&,
        CreateRocketMQVipInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateRoleOutcome TdmqClient::CreateRole(const CreateRoleRequest &request)
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

void TdmqClient::CreateRoleAsync(const CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmqClient::CreateRoleOutcomeCallable TdmqClient::CreateRoleCallable(const CreateRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoleOutcome>>();
    CreateRoleAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateRoleRequest&,
        CreateRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateSubscriptionOutcome TdmqClient::CreateSubscription(const CreateSubscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubscriptionResponse rsp = CreateSubscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubscriptionOutcome(rsp);
        else
            return CreateSubscriptionOutcome(o.GetError());
    }
    else
    {
        return CreateSubscriptionOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateSubscriptionAsync(const CreateSubscriptionRequest& request, const CreateSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubscriptionRequest&;
    using Resp = CreateSubscriptionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubscription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::CreateSubscriptionOutcomeCallable TdmqClient::CreateSubscriptionCallable(const CreateSubscriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubscriptionOutcome>>();
    CreateSubscriptionAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateSubscriptionRequest&,
        CreateSubscriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::CreateTopicOutcome TdmqClient::CreateTopic(const CreateTopicRequest &request)
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

void TdmqClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmqClient::CreateTopicOutcomeCallable TdmqClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicOutcome>>();
    CreateTopicAsync(
    request,
    [prom](
        const TdmqClient*,
        const CreateTopicRequest&,
        CreateTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteClusterOutcome TdmqClient::DeleteCluster(const DeleteClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterResponse rsp = DeleteClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterOutcome(rsp);
        else
            return DeleteClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterRequest&;
    using Resp = DeleteClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteClusterOutcomeCallable TdmqClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterOutcome>>();
    DeleteClusterAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteClusterRequest&,
        DeleteClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteCmqQueueOutcome TdmqClient::DeleteCmqQueue(const DeleteCmqQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCmqQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCmqQueueResponse rsp = DeleteCmqQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCmqQueueOutcome(rsp);
        else
            return DeleteCmqQueueOutcome(o.GetError());
    }
    else
    {
        return DeleteCmqQueueOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteCmqQueueAsync(const DeleteCmqQueueRequest& request, const DeleteCmqQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCmqQueueRequest&;
    using Resp = DeleteCmqQueueResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCmqQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteCmqQueueOutcomeCallable TdmqClient::DeleteCmqQueueCallable(const DeleteCmqQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCmqQueueOutcome>>();
    DeleteCmqQueueAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteCmqQueueRequest&,
        DeleteCmqQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteCmqSubscribeOutcome TdmqClient::DeleteCmqSubscribe(const DeleteCmqSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCmqSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCmqSubscribeResponse rsp = DeleteCmqSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCmqSubscribeOutcome(rsp);
        else
            return DeleteCmqSubscribeOutcome(o.GetError());
    }
    else
    {
        return DeleteCmqSubscribeOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteCmqSubscribeAsync(const DeleteCmqSubscribeRequest& request, const DeleteCmqSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCmqSubscribeRequest&;
    using Resp = DeleteCmqSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCmqSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteCmqSubscribeOutcomeCallable TdmqClient::DeleteCmqSubscribeCallable(const DeleteCmqSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCmqSubscribeOutcome>>();
    DeleteCmqSubscribeAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteCmqSubscribeRequest&,
        DeleteCmqSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteCmqTopicOutcome TdmqClient::DeleteCmqTopic(const DeleteCmqTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCmqTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCmqTopicResponse rsp = DeleteCmqTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCmqTopicOutcome(rsp);
        else
            return DeleteCmqTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteCmqTopicOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteCmqTopicAsync(const DeleteCmqTopicRequest& request, const DeleteCmqTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCmqTopicRequest&;
    using Resp = DeleteCmqTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCmqTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteCmqTopicOutcomeCallable TdmqClient::DeleteCmqTopicCallable(const DeleteCmqTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCmqTopicOutcome>>();
    DeleteCmqTopicAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteCmqTopicRequest&,
        DeleteCmqTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteEnvironmentRolesOutcome TdmqClient::DeleteEnvironmentRoles(const DeleteEnvironmentRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEnvironmentRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEnvironmentRolesResponse rsp = DeleteEnvironmentRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEnvironmentRolesOutcome(rsp);
        else
            return DeleteEnvironmentRolesOutcome(o.GetError());
    }
    else
    {
        return DeleteEnvironmentRolesOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteEnvironmentRolesAsync(const DeleteEnvironmentRolesRequest& request, const DeleteEnvironmentRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEnvironmentRolesRequest&;
    using Resp = DeleteEnvironmentRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEnvironmentRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteEnvironmentRolesOutcomeCallable TdmqClient::DeleteEnvironmentRolesCallable(const DeleteEnvironmentRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEnvironmentRolesOutcome>>();
    DeleteEnvironmentRolesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteEnvironmentRolesRequest&,
        DeleteEnvironmentRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteEnvironmentsOutcome TdmqClient::DeleteEnvironments(const DeleteEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEnvironmentsResponse rsp = DeleteEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEnvironmentsOutcome(rsp);
        else
            return DeleteEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DeleteEnvironmentsOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteEnvironmentsAsync(const DeleteEnvironmentsRequest& request, const DeleteEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEnvironmentsRequest&;
    using Resp = DeleteEnvironmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEnvironments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteEnvironmentsOutcomeCallable TdmqClient::DeleteEnvironmentsCallable(const DeleteEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEnvironmentsOutcome>>();
    DeleteEnvironmentsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteEnvironmentsRequest&,
        DeleteEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteProClusterOutcome TdmqClient::DeleteProCluster(const DeleteProClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProClusterResponse rsp = DeleteProClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProClusterOutcome(rsp);
        else
            return DeleteProClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteProClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteProClusterAsync(const DeleteProClusterRequest& request, const DeleteProClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProClusterRequest&;
    using Resp = DeleteProClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteProClusterOutcomeCallable TdmqClient::DeleteProClusterCallable(const DeleteProClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProClusterOutcome>>();
    DeleteProClusterAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteProClusterRequest&,
        DeleteProClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRabbitMQBindingOutcome TdmqClient::DeleteRabbitMQBinding(const DeleteRabbitMQBindingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQBindingResponse rsp = DeleteRabbitMQBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQBindingOutcome(rsp);
        else
            return DeleteRabbitMQBindingOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQBindingOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRabbitMQBindingAsync(const DeleteRabbitMQBindingRequest& request, const DeleteRabbitMQBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRabbitMQBindingRequest&;
    using Resp = DeleteRabbitMQBindingResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQBinding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRabbitMQBindingOutcomeCallable TdmqClient::DeleteRabbitMQBindingCallable(const DeleteRabbitMQBindingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQBindingOutcome>>();
    DeleteRabbitMQBindingAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRabbitMQBindingRequest&,
        DeleteRabbitMQBindingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRabbitMQPermissionOutcome TdmqClient::DeleteRabbitMQPermission(const DeleteRabbitMQPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQPermissionResponse rsp = DeleteRabbitMQPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQPermissionOutcome(rsp);
        else
            return DeleteRabbitMQPermissionOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQPermissionOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRabbitMQPermissionAsync(const DeleteRabbitMQPermissionRequest& request, const DeleteRabbitMQPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRabbitMQPermissionRequest&;
    using Resp = DeleteRabbitMQPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRabbitMQPermissionOutcomeCallable TdmqClient::DeleteRabbitMQPermissionCallable(const DeleteRabbitMQPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQPermissionOutcome>>();
    DeleteRabbitMQPermissionAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRabbitMQPermissionRequest&,
        DeleteRabbitMQPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRabbitMQUserOutcome TdmqClient::DeleteRabbitMQUser(const DeleteRabbitMQUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQUserResponse rsp = DeleteRabbitMQUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQUserOutcome(rsp);
        else
            return DeleteRabbitMQUserOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQUserOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRabbitMQUserAsync(const DeleteRabbitMQUserRequest& request, const DeleteRabbitMQUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRabbitMQUserRequest&;
    using Resp = DeleteRabbitMQUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRabbitMQUserOutcomeCallable TdmqClient::DeleteRabbitMQUserCallable(const DeleteRabbitMQUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQUserOutcome>>();
    DeleteRabbitMQUserAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRabbitMQUserRequest&,
        DeleteRabbitMQUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRabbitMQVipInstanceOutcome TdmqClient::DeleteRabbitMQVipInstance(const DeleteRabbitMQVipInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQVipInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQVipInstanceResponse rsp = DeleteRabbitMQVipInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQVipInstanceOutcome(rsp);
        else
            return DeleteRabbitMQVipInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQVipInstanceOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRabbitMQVipInstanceAsync(const DeleteRabbitMQVipInstanceRequest& request, const DeleteRabbitMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRabbitMQVipInstanceRequest&;
    using Resp = DeleteRabbitMQVipInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQVipInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRabbitMQVipInstanceOutcomeCallable TdmqClient::DeleteRabbitMQVipInstanceCallable(const DeleteRabbitMQVipInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQVipInstanceOutcome>>();
    DeleteRabbitMQVipInstanceAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRabbitMQVipInstanceRequest&,
        DeleteRabbitMQVipInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRabbitMQVirtualHostOutcome TdmqClient::DeleteRabbitMQVirtualHost(const DeleteRabbitMQVirtualHostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQVirtualHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQVirtualHostResponse rsp = DeleteRabbitMQVirtualHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQVirtualHostOutcome(rsp);
        else
            return DeleteRabbitMQVirtualHostOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQVirtualHostOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRabbitMQVirtualHostAsync(const DeleteRabbitMQVirtualHostRequest& request, const DeleteRabbitMQVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRabbitMQVirtualHostRequest&;
    using Resp = DeleteRabbitMQVirtualHostResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQVirtualHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRabbitMQVirtualHostOutcomeCallable TdmqClient::DeleteRabbitMQVirtualHostCallable(const DeleteRabbitMQVirtualHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQVirtualHostOutcome>>();
    DeleteRabbitMQVirtualHostAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRabbitMQVirtualHostRequest&,
        DeleteRabbitMQVirtualHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRocketMQClusterOutcome TdmqClient::DeleteRocketMQCluster(const DeleteRocketMQClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRocketMQCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRocketMQClusterResponse rsp = DeleteRocketMQClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRocketMQClusterOutcome(rsp);
        else
            return DeleteRocketMQClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteRocketMQClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRocketMQClusterAsync(const DeleteRocketMQClusterRequest& request, const DeleteRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRocketMQClusterRequest&;
    using Resp = DeleteRocketMQClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRocketMQCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRocketMQClusterOutcomeCallable TdmqClient::DeleteRocketMQClusterCallable(const DeleteRocketMQClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRocketMQClusterOutcome>>();
    DeleteRocketMQClusterAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRocketMQClusterRequest&,
        DeleteRocketMQClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRocketMQEnvironmentRolesOutcome TdmqClient::DeleteRocketMQEnvironmentRoles(const DeleteRocketMQEnvironmentRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRocketMQEnvironmentRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRocketMQEnvironmentRolesResponse rsp = DeleteRocketMQEnvironmentRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRocketMQEnvironmentRolesOutcome(rsp);
        else
            return DeleteRocketMQEnvironmentRolesOutcome(o.GetError());
    }
    else
    {
        return DeleteRocketMQEnvironmentRolesOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRocketMQEnvironmentRolesAsync(const DeleteRocketMQEnvironmentRolesRequest& request, const DeleteRocketMQEnvironmentRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRocketMQEnvironmentRolesRequest&;
    using Resp = DeleteRocketMQEnvironmentRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRocketMQEnvironmentRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRocketMQEnvironmentRolesOutcomeCallable TdmqClient::DeleteRocketMQEnvironmentRolesCallable(const DeleteRocketMQEnvironmentRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRocketMQEnvironmentRolesOutcome>>();
    DeleteRocketMQEnvironmentRolesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRocketMQEnvironmentRolesRequest&,
        DeleteRocketMQEnvironmentRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRocketMQGroupOutcome TdmqClient::DeleteRocketMQGroup(const DeleteRocketMQGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRocketMQGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRocketMQGroupResponse rsp = DeleteRocketMQGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRocketMQGroupOutcome(rsp);
        else
            return DeleteRocketMQGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteRocketMQGroupOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRocketMQGroupAsync(const DeleteRocketMQGroupRequest& request, const DeleteRocketMQGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRocketMQGroupRequest&;
    using Resp = DeleteRocketMQGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRocketMQGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRocketMQGroupOutcomeCallable TdmqClient::DeleteRocketMQGroupCallable(const DeleteRocketMQGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRocketMQGroupOutcome>>();
    DeleteRocketMQGroupAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRocketMQGroupRequest&,
        DeleteRocketMQGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRocketMQNamespaceOutcome TdmqClient::DeleteRocketMQNamespace(const DeleteRocketMQNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRocketMQNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRocketMQNamespaceResponse rsp = DeleteRocketMQNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRocketMQNamespaceOutcome(rsp);
        else
            return DeleteRocketMQNamespaceOutcome(o.GetError());
    }
    else
    {
        return DeleteRocketMQNamespaceOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRocketMQNamespaceAsync(const DeleteRocketMQNamespaceRequest& request, const DeleteRocketMQNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRocketMQNamespaceRequest&;
    using Resp = DeleteRocketMQNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRocketMQNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRocketMQNamespaceOutcomeCallable TdmqClient::DeleteRocketMQNamespaceCallable(const DeleteRocketMQNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRocketMQNamespaceOutcome>>();
    DeleteRocketMQNamespaceAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRocketMQNamespaceRequest&,
        DeleteRocketMQNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRocketMQRolesOutcome TdmqClient::DeleteRocketMQRoles(const DeleteRocketMQRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRocketMQRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRocketMQRolesResponse rsp = DeleteRocketMQRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRocketMQRolesOutcome(rsp);
        else
            return DeleteRocketMQRolesOutcome(o.GetError());
    }
    else
    {
        return DeleteRocketMQRolesOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRocketMQRolesAsync(const DeleteRocketMQRolesRequest& request, const DeleteRocketMQRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRocketMQRolesRequest&;
    using Resp = DeleteRocketMQRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRocketMQRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRocketMQRolesOutcomeCallable TdmqClient::DeleteRocketMQRolesCallable(const DeleteRocketMQRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRocketMQRolesOutcome>>();
    DeleteRocketMQRolesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRocketMQRolesRequest&,
        DeleteRocketMQRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRocketMQTopicOutcome TdmqClient::DeleteRocketMQTopic(const DeleteRocketMQTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRocketMQTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRocketMQTopicResponse rsp = DeleteRocketMQTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRocketMQTopicOutcome(rsp);
        else
            return DeleteRocketMQTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteRocketMQTopicOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRocketMQTopicAsync(const DeleteRocketMQTopicRequest& request, const DeleteRocketMQTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRocketMQTopicRequest&;
    using Resp = DeleteRocketMQTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRocketMQTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRocketMQTopicOutcomeCallable TdmqClient::DeleteRocketMQTopicCallable(const DeleteRocketMQTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRocketMQTopicOutcome>>();
    DeleteRocketMQTopicAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRocketMQTopicRequest&,
        DeleteRocketMQTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRocketMQVipInstanceOutcome TdmqClient::DeleteRocketMQVipInstance(const DeleteRocketMQVipInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRocketMQVipInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRocketMQVipInstanceResponse rsp = DeleteRocketMQVipInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRocketMQVipInstanceOutcome(rsp);
        else
            return DeleteRocketMQVipInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteRocketMQVipInstanceOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRocketMQVipInstanceAsync(const DeleteRocketMQVipInstanceRequest& request, const DeleteRocketMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRocketMQVipInstanceRequest&;
    using Resp = DeleteRocketMQVipInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRocketMQVipInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRocketMQVipInstanceOutcomeCallable TdmqClient::DeleteRocketMQVipInstanceCallable(const DeleteRocketMQVipInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRocketMQVipInstanceOutcome>>();
    DeleteRocketMQVipInstanceAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRocketMQVipInstanceRequest&,
        DeleteRocketMQVipInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteRolesOutcome TdmqClient::DeleteRoles(const DeleteRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRolesResponse rsp = DeleteRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRolesOutcome(rsp);
        else
            return DeleteRolesOutcome(o.GetError());
    }
    else
    {
        return DeleteRolesOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteRolesAsync(const DeleteRolesRequest& request, const DeleteRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRolesRequest&;
    using Resp = DeleteRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteRolesOutcomeCallable TdmqClient::DeleteRolesCallable(const DeleteRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRolesOutcome>>();
    DeleteRolesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteRolesRequest&,
        DeleteRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteSubscriptionsOutcome TdmqClient::DeleteSubscriptions(const DeleteSubscriptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSubscriptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSubscriptionsResponse rsp = DeleteSubscriptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSubscriptionsOutcome(rsp);
        else
            return DeleteSubscriptionsOutcome(o.GetError());
    }
    else
    {
        return DeleteSubscriptionsOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteSubscriptionsAsync(const DeleteSubscriptionsRequest& request, const DeleteSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSubscriptionsRequest&;
    using Resp = DeleteSubscriptionsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSubscriptions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteSubscriptionsOutcomeCallable TdmqClient::DeleteSubscriptionsCallable(const DeleteSubscriptionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSubscriptionsOutcome>>();
    DeleteSubscriptionsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteSubscriptionsRequest&,
        DeleteSubscriptionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DeleteTopicsOutcome TdmqClient::DeleteTopics(const DeleteTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicsResponse rsp = DeleteTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicsOutcome(rsp);
        else
            return DeleteTopicsOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicsOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteTopicsAsync(const DeleteTopicsRequest& request, const DeleteTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTopicsRequest&;
    using Resp = DeleteTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DeleteTopicsOutcomeCallable TdmqClient::DeleteTopicsCallable(const DeleteTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicsOutcome>>();
    DeleteTopicsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DeleteTopicsRequest&,
        DeleteTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeAMQPClustersOutcome TdmqClient::DescribeAMQPClusters(const DescribeAMQPClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAMQPClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAMQPClustersResponse rsp = DescribeAMQPClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAMQPClustersOutcome(rsp);
        else
            return DescribeAMQPClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeAMQPClustersOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeAMQPClustersAsync(const DescribeAMQPClustersRequest& request, const DescribeAMQPClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAMQPClustersRequest&;
    using Resp = DescribeAMQPClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAMQPClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeAMQPClustersOutcomeCallable TdmqClient::DescribeAMQPClustersCallable(const DescribeAMQPClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAMQPClustersOutcome>>();
    DescribeAMQPClustersAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeAMQPClustersRequest&,
        DescribeAMQPClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeAllTenantsOutcome TdmqClient::DescribeAllTenants(const DescribeAllTenantsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllTenants");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllTenantsResponse rsp = DescribeAllTenantsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllTenantsOutcome(rsp);
        else
            return DescribeAllTenantsOutcome(o.GetError());
    }
    else
    {
        return DescribeAllTenantsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeAllTenantsAsync(const DescribeAllTenantsRequest& request, const DescribeAllTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllTenantsRequest&;
    using Resp = DescribeAllTenantsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllTenants", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeAllTenantsOutcomeCallable TdmqClient::DescribeAllTenantsCallable(const DescribeAllTenantsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllTenantsOutcome>>();
    DescribeAllTenantsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeAllTenantsRequest&,
        DescribeAllTenantsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeBindClustersOutcome TdmqClient::DescribeBindClusters(const DescribeBindClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindClustersResponse rsp = DescribeBindClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindClustersOutcome(rsp);
        else
            return DescribeBindClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeBindClustersOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeBindClustersAsync(const DescribeBindClustersRequest& request, const DescribeBindClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBindClustersRequest&;
    using Resp = DescribeBindClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBindClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeBindClustersOutcomeCallable TdmqClient::DescribeBindClustersCallable(const DescribeBindClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBindClustersOutcome>>();
    DescribeBindClustersAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeBindClustersRequest&,
        DescribeBindClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeBindVpcsOutcome TdmqClient::DescribeBindVpcs(const DescribeBindVpcsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindVpcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindVpcsResponse rsp = DescribeBindVpcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindVpcsOutcome(rsp);
        else
            return DescribeBindVpcsOutcome(o.GetError());
    }
    else
    {
        return DescribeBindVpcsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeBindVpcsAsync(const DescribeBindVpcsRequest& request, const DescribeBindVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBindVpcsRequest&;
    using Resp = DescribeBindVpcsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBindVpcs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeBindVpcsOutcomeCallable TdmqClient::DescribeBindVpcsCallable(const DescribeBindVpcsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBindVpcsOutcome>>();
    DescribeBindVpcsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeBindVpcsRequest&,
        DescribeBindVpcsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeClusterDetailOutcome TdmqClient::DescribeClusterDetail(const DescribeClusterDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDetailResponse rsp = DescribeClusterDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDetailOutcome(rsp);
        else
            return DescribeClusterDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDetailOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeClusterDetailAsync(const DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterDetailRequest&;
    using Resp = DescribeClusterDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeClusterDetailOutcomeCallable TdmqClient::DescribeClusterDetailCallable(const DescribeClusterDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterDetailOutcome>>();
    DescribeClusterDetailAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeClusterDetailRequest&,
        DescribeClusterDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeClustersOutcome TdmqClient::DescribeClusters(const DescribeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClustersResponse rsp = DescribeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClustersOutcome(rsp);
        else
            return DescribeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClustersOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClustersRequest&;
    using Resp = DescribeClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeClustersOutcomeCallable TdmqClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClustersOutcome>>();
    DescribeClustersAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeClustersRequest&,
        DescribeClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeCmqQueueDetailOutcome TdmqClient::DescribeCmqQueueDetail(const DescribeCmqQueueDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCmqQueueDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCmqQueueDetailResponse rsp = DescribeCmqQueueDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCmqQueueDetailOutcome(rsp);
        else
            return DescribeCmqQueueDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCmqQueueDetailOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeCmqQueueDetailAsync(const DescribeCmqQueueDetailRequest& request, const DescribeCmqQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCmqQueueDetailRequest&;
    using Resp = DescribeCmqQueueDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCmqQueueDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeCmqQueueDetailOutcomeCallable TdmqClient::DescribeCmqQueueDetailCallable(const DescribeCmqQueueDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCmqQueueDetailOutcome>>();
    DescribeCmqQueueDetailAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeCmqQueueDetailRequest&,
        DescribeCmqQueueDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeCmqQueuesOutcome TdmqClient::DescribeCmqQueues(const DescribeCmqQueuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCmqQueues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCmqQueuesResponse rsp = DescribeCmqQueuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCmqQueuesOutcome(rsp);
        else
            return DescribeCmqQueuesOutcome(o.GetError());
    }
    else
    {
        return DescribeCmqQueuesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeCmqQueuesAsync(const DescribeCmqQueuesRequest& request, const DescribeCmqQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCmqQueuesRequest&;
    using Resp = DescribeCmqQueuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCmqQueues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeCmqQueuesOutcomeCallable TdmqClient::DescribeCmqQueuesCallable(const DescribeCmqQueuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCmqQueuesOutcome>>();
    DescribeCmqQueuesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeCmqQueuesRequest&,
        DescribeCmqQueuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeCmqSubscriptionDetailOutcome TdmqClient::DescribeCmqSubscriptionDetail(const DescribeCmqSubscriptionDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCmqSubscriptionDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCmqSubscriptionDetailResponse rsp = DescribeCmqSubscriptionDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCmqSubscriptionDetailOutcome(rsp);
        else
            return DescribeCmqSubscriptionDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCmqSubscriptionDetailOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeCmqSubscriptionDetailAsync(const DescribeCmqSubscriptionDetailRequest& request, const DescribeCmqSubscriptionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCmqSubscriptionDetailRequest&;
    using Resp = DescribeCmqSubscriptionDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCmqSubscriptionDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeCmqSubscriptionDetailOutcomeCallable TdmqClient::DescribeCmqSubscriptionDetailCallable(const DescribeCmqSubscriptionDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCmqSubscriptionDetailOutcome>>();
    DescribeCmqSubscriptionDetailAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeCmqSubscriptionDetailRequest&,
        DescribeCmqSubscriptionDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeCmqTopicDetailOutcome TdmqClient::DescribeCmqTopicDetail(const DescribeCmqTopicDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCmqTopicDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCmqTopicDetailResponse rsp = DescribeCmqTopicDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCmqTopicDetailOutcome(rsp);
        else
            return DescribeCmqTopicDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCmqTopicDetailOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeCmqTopicDetailAsync(const DescribeCmqTopicDetailRequest& request, const DescribeCmqTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCmqTopicDetailRequest&;
    using Resp = DescribeCmqTopicDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCmqTopicDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeCmqTopicDetailOutcomeCallable TdmqClient::DescribeCmqTopicDetailCallable(const DescribeCmqTopicDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCmqTopicDetailOutcome>>();
    DescribeCmqTopicDetailAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeCmqTopicDetailRequest&,
        DescribeCmqTopicDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeCmqTopicsOutcome TdmqClient::DescribeCmqTopics(const DescribeCmqTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCmqTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCmqTopicsResponse rsp = DescribeCmqTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCmqTopicsOutcome(rsp);
        else
            return DescribeCmqTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeCmqTopicsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeCmqTopicsAsync(const DescribeCmqTopicsRequest& request, const DescribeCmqTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCmqTopicsRequest&;
    using Resp = DescribeCmqTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCmqTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeCmqTopicsOutcomeCallable TdmqClient::DescribeCmqTopicsCallable(const DescribeCmqTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCmqTopicsOutcome>>();
    DescribeCmqTopicsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeCmqTopicsRequest&,
        DescribeCmqTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeEnvironmentAttributesOutcome TdmqClient::DescribeEnvironmentAttributes(const DescribeEnvironmentAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironmentAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentAttributesResponse rsp = DescribeEnvironmentAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentAttributesOutcome(rsp);
        else
            return DescribeEnvironmentAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentAttributesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeEnvironmentAttributesAsync(const DescribeEnvironmentAttributesRequest& request, const DescribeEnvironmentAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvironmentAttributesRequest&;
    using Resp = DescribeEnvironmentAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvironmentAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeEnvironmentAttributesOutcomeCallable TdmqClient::DescribeEnvironmentAttributesCallable(const DescribeEnvironmentAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvironmentAttributesOutcome>>();
    DescribeEnvironmentAttributesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeEnvironmentAttributesRequest&,
        DescribeEnvironmentAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeEnvironmentRolesOutcome TdmqClient::DescribeEnvironmentRoles(const DescribeEnvironmentRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironmentRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentRolesResponse rsp = DescribeEnvironmentRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentRolesOutcome(rsp);
        else
            return DescribeEnvironmentRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentRolesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeEnvironmentRolesAsync(const DescribeEnvironmentRolesRequest& request, const DescribeEnvironmentRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvironmentRolesRequest&;
    using Resp = DescribeEnvironmentRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvironmentRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeEnvironmentRolesOutcomeCallable TdmqClient::DescribeEnvironmentRolesCallable(const DescribeEnvironmentRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvironmentRolesOutcome>>();
    DescribeEnvironmentRolesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeEnvironmentRolesRequest&,
        DescribeEnvironmentRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeEnvironmentsOutcome TdmqClient::DescribeEnvironments(const DescribeEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentsResponse rsp = DescribeEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentsOutcome(rsp);
        else
            return DescribeEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvironmentsRequest&;
    using Resp = DescribeEnvironmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvironments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeEnvironmentsOutcomeCallable TdmqClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvironmentsOutcome>>();
    DescribeEnvironmentsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeEnvironmentsRequest&,
        DescribeEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeMqMsgTraceOutcome TdmqClient::DescribeMqMsgTrace(const DescribeMqMsgTraceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMqMsgTrace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMqMsgTraceResponse rsp = DescribeMqMsgTraceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMqMsgTraceOutcome(rsp);
        else
            return DescribeMqMsgTraceOutcome(o.GetError());
    }
    else
    {
        return DescribeMqMsgTraceOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeMqMsgTraceAsync(const DescribeMqMsgTraceRequest& request, const DescribeMqMsgTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMqMsgTraceRequest&;
    using Resp = DescribeMqMsgTraceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMqMsgTrace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeMqMsgTraceOutcomeCallable TdmqClient::DescribeMqMsgTraceCallable(const DescribeMqMsgTraceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMqMsgTraceOutcome>>();
    DescribeMqMsgTraceAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeMqMsgTraceRequest&,
        DescribeMqMsgTraceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeMsgOutcome TdmqClient::DescribeMsg(const DescribeMsgRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMsgResponse rsp = DescribeMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMsgOutcome(rsp);
        else
            return DescribeMsgOutcome(o.GetError());
    }
    else
    {
        return DescribeMsgOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeMsgAsync(const DescribeMsgRequest& request, const DescribeMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMsgRequest&;
    using Resp = DescribeMsgResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeMsgOutcomeCallable TdmqClient::DescribeMsgCallable(const DescribeMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMsgOutcome>>();
    DescribeMsgAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeMsgRequest&,
        DescribeMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeMsgTraceOutcome TdmqClient::DescribeMsgTrace(const DescribeMsgTraceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMsgTrace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMsgTraceResponse rsp = DescribeMsgTraceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMsgTraceOutcome(rsp);
        else
            return DescribeMsgTraceOutcome(o.GetError());
    }
    else
    {
        return DescribeMsgTraceOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeMsgTraceAsync(const DescribeMsgTraceRequest& request, const DescribeMsgTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMsgTraceRequest&;
    using Resp = DescribeMsgTraceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMsgTrace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeMsgTraceOutcomeCallable TdmqClient::DescribeMsgTraceCallable(const DescribeMsgTraceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMsgTraceOutcome>>();
    DescribeMsgTraceAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeMsgTraceRequest&,
        DescribeMsgTraceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeNamespaceBundlesOptOutcome TdmqClient::DescribeNamespaceBundlesOpt(const DescribeNamespaceBundlesOptRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNamespaceBundlesOpt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNamespaceBundlesOptResponse rsp = DescribeNamespaceBundlesOptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNamespaceBundlesOptOutcome(rsp);
        else
            return DescribeNamespaceBundlesOptOutcome(o.GetError());
    }
    else
    {
        return DescribeNamespaceBundlesOptOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeNamespaceBundlesOptAsync(const DescribeNamespaceBundlesOptRequest& request, const DescribeNamespaceBundlesOptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNamespaceBundlesOptRequest&;
    using Resp = DescribeNamespaceBundlesOptResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNamespaceBundlesOpt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeNamespaceBundlesOptOutcomeCallable TdmqClient::DescribeNamespaceBundlesOptCallable(const DescribeNamespaceBundlesOptRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNamespaceBundlesOptOutcome>>();
    DescribeNamespaceBundlesOptAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeNamespaceBundlesOptRequest&,
        DescribeNamespaceBundlesOptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeNodeHealthOptOutcome TdmqClient::DescribeNodeHealthOpt(const DescribeNodeHealthOptRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodeHealthOpt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeHealthOptResponse rsp = DescribeNodeHealthOptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeHealthOptOutcome(rsp);
        else
            return DescribeNodeHealthOptOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeHealthOptOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeNodeHealthOptAsync(const DescribeNodeHealthOptRequest& request, const DescribeNodeHealthOptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNodeHealthOptRequest&;
    using Resp = DescribeNodeHealthOptResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNodeHealthOpt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeNodeHealthOptOutcomeCallable TdmqClient::DescribeNodeHealthOptCallable(const DescribeNodeHealthOptRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNodeHealthOptOutcome>>();
    DescribeNodeHealthOptAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeNodeHealthOptRequest&,
        DescribeNodeHealthOptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribePublisherSummaryOutcome TdmqClient::DescribePublisherSummary(const DescribePublisherSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublisherSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublisherSummaryResponse rsp = DescribePublisherSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublisherSummaryOutcome(rsp);
        else
            return DescribePublisherSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribePublisherSummaryOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribePublisherSummaryAsync(const DescribePublisherSummaryRequest& request, const DescribePublisherSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublisherSummaryRequest&;
    using Resp = DescribePublisherSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublisherSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribePublisherSummaryOutcomeCallable TdmqClient::DescribePublisherSummaryCallable(const DescribePublisherSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublisherSummaryOutcome>>();
    DescribePublisherSummaryAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribePublisherSummaryRequest&,
        DescribePublisherSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribePublishersOutcome TdmqClient::DescribePublishers(const DescribePublishersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublishers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublishersResponse rsp = DescribePublishersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublishersOutcome(rsp);
        else
            return DescribePublishersOutcome(o.GetError());
    }
    else
    {
        return DescribePublishersOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribePublishersAsync(const DescribePublishersRequest& request, const DescribePublishersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublishersRequest&;
    using Resp = DescribePublishersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublishers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribePublishersOutcomeCallable TdmqClient::DescribePublishersCallable(const DescribePublishersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublishersOutcome>>();
    DescribePublishersAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribePublishersRequest&,
        DescribePublishersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribePulsarProInstanceDetailOutcome TdmqClient::DescribePulsarProInstanceDetail(const DescribePulsarProInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePulsarProInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePulsarProInstanceDetailResponse rsp = DescribePulsarProInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePulsarProInstanceDetailOutcome(rsp);
        else
            return DescribePulsarProInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePulsarProInstanceDetailOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribePulsarProInstanceDetailAsync(const DescribePulsarProInstanceDetailRequest& request, const DescribePulsarProInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePulsarProInstanceDetailRequest&;
    using Resp = DescribePulsarProInstanceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePulsarProInstanceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribePulsarProInstanceDetailOutcomeCallable TdmqClient::DescribePulsarProInstanceDetailCallable(const DescribePulsarProInstanceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePulsarProInstanceDetailOutcome>>();
    DescribePulsarProInstanceDetailAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribePulsarProInstanceDetailRequest&,
        DescribePulsarProInstanceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribePulsarProInstancesOutcome TdmqClient::DescribePulsarProInstances(const DescribePulsarProInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePulsarProInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePulsarProInstancesResponse rsp = DescribePulsarProInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePulsarProInstancesOutcome(rsp);
        else
            return DescribePulsarProInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribePulsarProInstancesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribePulsarProInstancesAsync(const DescribePulsarProInstancesRequest& request, const DescribePulsarProInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePulsarProInstancesRequest&;
    using Resp = DescribePulsarProInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePulsarProInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribePulsarProInstancesOutcomeCallable TdmqClient::DescribePulsarProInstancesCallable(const DescribePulsarProInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePulsarProInstancesOutcome>>();
    DescribePulsarProInstancesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribePulsarProInstancesRequest&,
        DescribePulsarProInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRabbitMQBindingsOutcome TdmqClient::DescribeRabbitMQBindings(const DescribeRabbitMQBindingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQBindings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQBindingsResponse rsp = DescribeRabbitMQBindingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQBindingsOutcome(rsp);
        else
            return DescribeRabbitMQBindingsOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQBindingsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRabbitMQBindingsAsync(const DescribeRabbitMQBindingsRequest& request, const DescribeRabbitMQBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRabbitMQBindingsRequest&;
    using Resp = DescribeRabbitMQBindingsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQBindings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRabbitMQBindingsOutcomeCallable TdmqClient::DescribeRabbitMQBindingsCallable(const DescribeRabbitMQBindingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQBindingsOutcome>>();
    DescribeRabbitMQBindingsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRabbitMQBindingsRequest&,
        DescribeRabbitMQBindingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRabbitMQExchangesOutcome TdmqClient::DescribeRabbitMQExchanges(const DescribeRabbitMQExchangesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQExchanges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQExchangesResponse rsp = DescribeRabbitMQExchangesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQExchangesOutcome(rsp);
        else
            return DescribeRabbitMQExchangesOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQExchangesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRabbitMQExchangesAsync(const DescribeRabbitMQExchangesRequest& request, const DescribeRabbitMQExchangesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRabbitMQExchangesRequest&;
    using Resp = DescribeRabbitMQExchangesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQExchanges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRabbitMQExchangesOutcomeCallable TdmqClient::DescribeRabbitMQExchangesCallable(const DescribeRabbitMQExchangesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQExchangesOutcome>>();
    DescribeRabbitMQExchangesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRabbitMQExchangesRequest&,
        DescribeRabbitMQExchangesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRabbitMQNodeListOutcome TdmqClient::DescribeRabbitMQNodeList(const DescribeRabbitMQNodeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQNodeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQNodeListResponse rsp = DescribeRabbitMQNodeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQNodeListOutcome(rsp);
        else
            return DescribeRabbitMQNodeListOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQNodeListOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRabbitMQNodeListAsync(const DescribeRabbitMQNodeListRequest& request, const DescribeRabbitMQNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRabbitMQNodeListRequest&;
    using Resp = DescribeRabbitMQNodeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQNodeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRabbitMQNodeListOutcomeCallable TdmqClient::DescribeRabbitMQNodeListCallable(const DescribeRabbitMQNodeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQNodeListOutcome>>();
    DescribeRabbitMQNodeListAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRabbitMQNodeListRequest&,
        DescribeRabbitMQNodeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRabbitMQPermissionOutcome TdmqClient::DescribeRabbitMQPermission(const DescribeRabbitMQPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQPermissionResponse rsp = DescribeRabbitMQPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQPermissionOutcome(rsp);
        else
            return DescribeRabbitMQPermissionOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQPermissionOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRabbitMQPermissionAsync(const DescribeRabbitMQPermissionRequest& request, const DescribeRabbitMQPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRabbitMQPermissionRequest&;
    using Resp = DescribeRabbitMQPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRabbitMQPermissionOutcomeCallable TdmqClient::DescribeRabbitMQPermissionCallable(const DescribeRabbitMQPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQPermissionOutcome>>();
    DescribeRabbitMQPermissionAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRabbitMQPermissionRequest&,
        DescribeRabbitMQPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRabbitMQQueueDetailOutcome TdmqClient::DescribeRabbitMQQueueDetail(const DescribeRabbitMQQueueDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQQueueDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQQueueDetailResponse rsp = DescribeRabbitMQQueueDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQQueueDetailOutcome(rsp);
        else
            return DescribeRabbitMQQueueDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQQueueDetailOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRabbitMQQueueDetailAsync(const DescribeRabbitMQQueueDetailRequest& request, const DescribeRabbitMQQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRabbitMQQueueDetailRequest&;
    using Resp = DescribeRabbitMQQueueDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQQueueDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRabbitMQQueueDetailOutcomeCallable TdmqClient::DescribeRabbitMQQueueDetailCallable(const DescribeRabbitMQQueueDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQQueueDetailOutcome>>();
    DescribeRabbitMQQueueDetailAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRabbitMQQueueDetailRequest&,
        DescribeRabbitMQQueueDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRabbitMQQueuesOutcome TdmqClient::DescribeRabbitMQQueues(const DescribeRabbitMQQueuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQQueues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQQueuesResponse rsp = DescribeRabbitMQQueuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQQueuesOutcome(rsp);
        else
            return DescribeRabbitMQQueuesOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQQueuesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRabbitMQQueuesAsync(const DescribeRabbitMQQueuesRequest& request, const DescribeRabbitMQQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRabbitMQQueuesRequest&;
    using Resp = DescribeRabbitMQQueuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQQueues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRabbitMQQueuesOutcomeCallable TdmqClient::DescribeRabbitMQQueuesCallable(const DescribeRabbitMQQueuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQQueuesOutcome>>();
    DescribeRabbitMQQueuesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRabbitMQQueuesRequest&,
        DescribeRabbitMQQueuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRabbitMQUserOutcome TdmqClient::DescribeRabbitMQUser(const DescribeRabbitMQUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQUserResponse rsp = DescribeRabbitMQUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQUserOutcome(rsp);
        else
            return DescribeRabbitMQUserOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQUserOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRabbitMQUserAsync(const DescribeRabbitMQUserRequest& request, const DescribeRabbitMQUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRabbitMQUserRequest&;
    using Resp = DescribeRabbitMQUserResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRabbitMQUserOutcomeCallable TdmqClient::DescribeRabbitMQUserCallable(const DescribeRabbitMQUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQUserOutcome>>();
    DescribeRabbitMQUserAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRabbitMQUserRequest&,
        DescribeRabbitMQUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRabbitMQVipInstanceOutcome TdmqClient::DescribeRabbitMQVipInstance(const DescribeRabbitMQVipInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQVipInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQVipInstanceResponse rsp = DescribeRabbitMQVipInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQVipInstanceOutcome(rsp);
        else
            return DescribeRabbitMQVipInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQVipInstanceOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRabbitMQVipInstanceAsync(const DescribeRabbitMQVipInstanceRequest& request, const DescribeRabbitMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRabbitMQVipInstanceRequest&;
    using Resp = DescribeRabbitMQVipInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQVipInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRabbitMQVipInstanceOutcomeCallable TdmqClient::DescribeRabbitMQVipInstanceCallable(const DescribeRabbitMQVipInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQVipInstanceOutcome>>();
    DescribeRabbitMQVipInstanceAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRabbitMQVipInstanceRequest&,
        DescribeRabbitMQVipInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRabbitMQVipInstancesOutcome TdmqClient::DescribeRabbitMQVipInstances(const DescribeRabbitMQVipInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQVipInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQVipInstancesResponse rsp = DescribeRabbitMQVipInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQVipInstancesOutcome(rsp);
        else
            return DescribeRabbitMQVipInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQVipInstancesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRabbitMQVipInstancesAsync(const DescribeRabbitMQVipInstancesRequest& request, const DescribeRabbitMQVipInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRabbitMQVipInstancesRequest&;
    using Resp = DescribeRabbitMQVipInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQVipInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRabbitMQVipInstancesOutcomeCallable TdmqClient::DescribeRabbitMQVipInstancesCallable(const DescribeRabbitMQVipInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQVipInstancesOutcome>>();
    DescribeRabbitMQVipInstancesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRabbitMQVipInstancesRequest&,
        DescribeRabbitMQVipInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRabbitMQVirtualHostOutcome TdmqClient::DescribeRabbitMQVirtualHost(const DescribeRabbitMQVirtualHostRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQVirtualHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQVirtualHostResponse rsp = DescribeRabbitMQVirtualHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQVirtualHostOutcome(rsp);
        else
            return DescribeRabbitMQVirtualHostOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQVirtualHostOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRabbitMQVirtualHostAsync(const DescribeRabbitMQVirtualHostRequest& request, const DescribeRabbitMQVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRabbitMQVirtualHostRequest&;
    using Resp = DescribeRabbitMQVirtualHostResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQVirtualHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRabbitMQVirtualHostOutcomeCallable TdmqClient::DescribeRabbitMQVirtualHostCallable(const DescribeRabbitMQVirtualHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQVirtualHostOutcome>>();
    DescribeRabbitMQVirtualHostAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRabbitMQVirtualHostRequest&,
        DescribeRabbitMQVirtualHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQClusterOutcome TdmqClient::DescribeRocketMQCluster(const DescribeRocketMQClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQClusterResponse rsp = DescribeRocketMQClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQClusterOutcome(rsp);
        else
            return DescribeRocketMQClusterOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQClusterAsync(const DescribeRocketMQClusterRequest& request, const DescribeRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQClusterRequest&;
    using Resp = DescribeRocketMQClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQClusterOutcomeCallable TdmqClient::DescribeRocketMQClusterCallable(const DescribeRocketMQClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQClusterOutcome>>();
    DescribeRocketMQClusterAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQClusterRequest&,
        DescribeRocketMQClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQClustersOutcome TdmqClient::DescribeRocketMQClusters(const DescribeRocketMQClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQClustersResponse rsp = DescribeRocketMQClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQClustersOutcome(rsp);
        else
            return DescribeRocketMQClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQClustersOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQClustersAsync(const DescribeRocketMQClustersRequest& request, const DescribeRocketMQClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQClustersRequest&;
    using Resp = DescribeRocketMQClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQClustersOutcomeCallable TdmqClient::DescribeRocketMQClustersCallable(const DescribeRocketMQClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQClustersOutcome>>();
    DescribeRocketMQClustersAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQClustersRequest&,
        DescribeRocketMQClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQConsumeStatsOutcome TdmqClient::DescribeRocketMQConsumeStats(const DescribeRocketMQConsumeStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQConsumeStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQConsumeStatsResponse rsp = DescribeRocketMQConsumeStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQConsumeStatsOutcome(rsp);
        else
            return DescribeRocketMQConsumeStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQConsumeStatsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQConsumeStatsAsync(const DescribeRocketMQConsumeStatsRequest& request, const DescribeRocketMQConsumeStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQConsumeStatsRequest&;
    using Resp = DescribeRocketMQConsumeStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQConsumeStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQConsumeStatsOutcomeCallable TdmqClient::DescribeRocketMQConsumeStatsCallable(const DescribeRocketMQConsumeStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQConsumeStatsOutcome>>();
    DescribeRocketMQConsumeStatsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQConsumeStatsRequest&,
        DescribeRocketMQConsumeStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQConsumerConnectionDetailOutcome TdmqClient::DescribeRocketMQConsumerConnectionDetail(const DescribeRocketMQConsumerConnectionDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQConsumerConnectionDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQConsumerConnectionDetailResponse rsp = DescribeRocketMQConsumerConnectionDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQConsumerConnectionDetailOutcome(rsp);
        else
            return DescribeRocketMQConsumerConnectionDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQConsumerConnectionDetailOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQConsumerConnectionDetailAsync(const DescribeRocketMQConsumerConnectionDetailRequest& request, const DescribeRocketMQConsumerConnectionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQConsumerConnectionDetailRequest&;
    using Resp = DescribeRocketMQConsumerConnectionDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQConsumerConnectionDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQConsumerConnectionDetailOutcomeCallable TdmqClient::DescribeRocketMQConsumerConnectionDetailCallable(const DescribeRocketMQConsumerConnectionDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQConsumerConnectionDetailOutcome>>();
    DescribeRocketMQConsumerConnectionDetailAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQConsumerConnectionDetailRequest&,
        DescribeRocketMQConsumerConnectionDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQConsumerConnectionsOutcome TdmqClient::DescribeRocketMQConsumerConnections(const DescribeRocketMQConsumerConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQConsumerConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQConsumerConnectionsResponse rsp = DescribeRocketMQConsumerConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQConsumerConnectionsOutcome(rsp);
        else
            return DescribeRocketMQConsumerConnectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQConsumerConnectionsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQConsumerConnectionsAsync(const DescribeRocketMQConsumerConnectionsRequest& request, const DescribeRocketMQConsumerConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQConsumerConnectionsRequest&;
    using Resp = DescribeRocketMQConsumerConnectionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQConsumerConnections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQConsumerConnectionsOutcomeCallable TdmqClient::DescribeRocketMQConsumerConnectionsCallable(const DescribeRocketMQConsumerConnectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQConsumerConnectionsOutcome>>();
    DescribeRocketMQConsumerConnectionsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQConsumerConnectionsRequest&,
        DescribeRocketMQConsumerConnectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQEnvironmentRolesOutcome TdmqClient::DescribeRocketMQEnvironmentRoles(const DescribeRocketMQEnvironmentRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQEnvironmentRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQEnvironmentRolesResponse rsp = DescribeRocketMQEnvironmentRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQEnvironmentRolesOutcome(rsp);
        else
            return DescribeRocketMQEnvironmentRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQEnvironmentRolesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQEnvironmentRolesAsync(const DescribeRocketMQEnvironmentRolesRequest& request, const DescribeRocketMQEnvironmentRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQEnvironmentRolesRequest&;
    using Resp = DescribeRocketMQEnvironmentRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQEnvironmentRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQEnvironmentRolesOutcomeCallable TdmqClient::DescribeRocketMQEnvironmentRolesCallable(const DescribeRocketMQEnvironmentRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQEnvironmentRolesOutcome>>();
    DescribeRocketMQEnvironmentRolesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQEnvironmentRolesRequest&,
        DescribeRocketMQEnvironmentRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQGeneralSKUsOutcome TdmqClient::DescribeRocketMQGeneralSKUs(const DescribeRocketMQGeneralSKUsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQGeneralSKUs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQGeneralSKUsResponse rsp = DescribeRocketMQGeneralSKUsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQGeneralSKUsOutcome(rsp);
        else
            return DescribeRocketMQGeneralSKUsOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQGeneralSKUsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQGeneralSKUsAsync(const DescribeRocketMQGeneralSKUsRequest& request, const DescribeRocketMQGeneralSKUsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQGeneralSKUsRequest&;
    using Resp = DescribeRocketMQGeneralSKUsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQGeneralSKUs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQGeneralSKUsOutcomeCallable TdmqClient::DescribeRocketMQGeneralSKUsCallable(const DescribeRocketMQGeneralSKUsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQGeneralSKUsOutcome>>();
    DescribeRocketMQGeneralSKUsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQGeneralSKUsRequest&,
        DescribeRocketMQGeneralSKUsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQGroupsOutcome TdmqClient::DescribeRocketMQGroups(const DescribeRocketMQGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQGroupsResponse rsp = DescribeRocketMQGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQGroupsOutcome(rsp);
        else
            return DescribeRocketMQGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQGroupsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQGroupsAsync(const DescribeRocketMQGroupsRequest& request, const DescribeRocketMQGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQGroupsRequest&;
    using Resp = DescribeRocketMQGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQGroupsOutcomeCallable TdmqClient::DescribeRocketMQGroupsCallable(const DescribeRocketMQGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQGroupsOutcome>>();
    DescribeRocketMQGroupsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQGroupsRequest&,
        DescribeRocketMQGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQMigratingTopicListOutcome TdmqClient::DescribeRocketMQMigratingTopicList(const DescribeRocketMQMigratingTopicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQMigratingTopicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQMigratingTopicListResponse rsp = DescribeRocketMQMigratingTopicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQMigratingTopicListOutcome(rsp);
        else
            return DescribeRocketMQMigratingTopicListOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQMigratingTopicListOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQMigratingTopicListAsync(const DescribeRocketMQMigratingTopicListRequest& request, const DescribeRocketMQMigratingTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQMigratingTopicListRequest&;
    using Resp = DescribeRocketMQMigratingTopicListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQMigratingTopicList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQMigratingTopicListOutcomeCallable TdmqClient::DescribeRocketMQMigratingTopicListCallable(const DescribeRocketMQMigratingTopicListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQMigratingTopicListOutcome>>();
    DescribeRocketMQMigratingTopicListAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQMigratingTopicListRequest&,
        DescribeRocketMQMigratingTopicListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQMsgOutcome TdmqClient::DescribeRocketMQMsg(const DescribeRocketMQMsgRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQMsgResponse rsp = DescribeRocketMQMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQMsgOutcome(rsp);
        else
            return DescribeRocketMQMsgOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQMsgOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQMsgAsync(const DescribeRocketMQMsgRequest& request, const DescribeRocketMQMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQMsgRequest&;
    using Resp = DescribeRocketMQMsgResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQMsgOutcomeCallable TdmqClient::DescribeRocketMQMsgCallable(const DescribeRocketMQMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQMsgOutcome>>();
    DescribeRocketMQMsgAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQMsgRequest&,
        DescribeRocketMQMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQMsgTraceOutcome TdmqClient::DescribeRocketMQMsgTrace(const DescribeRocketMQMsgTraceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQMsgTrace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQMsgTraceResponse rsp = DescribeRocketMQMsgTraceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQMsgTraceOutcome(rsp);
        else
            return DescribeRocketMQMsgTraceOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQMsgTraceOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQMsgTraceAsync(const DescribeRocketMQMsgTraceRequest& request, const DescribeRocketMQMsgTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQMsgTraceRequest&;
    using Resp = DescribeRocketMQMsgTraceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQMsgTrace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQMsgTraceOutcomeCallable TdmqClient::DescribeRocketMQMsgTraceCallable(const DescribeRocketMQMsgTraceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQMsgTraceOutcome>>();
    DescribeRocketMQMsgTraceAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQMsgTraceRequest&,
        DescribeRocketMQMsgTraceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQNamespacesOutcome TdmqClient::DescribeRocketMQNamespaces(const DescribeRocketMQNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQNamespacesResponse rsp = DescribeRocketMQNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQNamespacesOutcome(rsp);
        else
            return DescribeRocketMQNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQNamespacesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQNamespacesAsync(const DescribeRocketMQNamespacesRequest& request, const DescribeRocketMQNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQNamespacesRequest&;
    using Resp = DescribeRocketMQNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQNamespacesOutcomeCallable TdmqClient::DescribeRocketMQNamespacesCallable(const DescribeRocketMQNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQNamespacesOutcome>>();
    DescribeRocketMQNamespacesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQNamespacesRequest&,
        DescribeRocketMQNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQProducersOutcome TdmqClient::DescribeRocketMQProducers(const DescribeRocketMQProducersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQProducers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQProducersResponse rsp = DescribeRocketMQProducersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQProducersOutcome(rsp);
        else
            return DescribeRocketMQProducersOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQProducersOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQProducersAsync(const DescribeRocketMQProducersRequest& request, const DescribeRocketMQProducersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQProducersRequest&;
    using Resp = DescribeRocketMQProducersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQProducers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQProducersOutcomeCallable TdmqClient::DescribeRocketMQProducersCallable(const DescribeRocketMQProducersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQProducersOutcome>>();
    DescribeRocketMQProducersAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQProducersRequest&,
        DescribeRocketMQProducersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQPublicAccessMonitorDataOutcome TdmqClient::DescribeRocketMQPublicAccessMonitorData(const DescribeRocketMQPublicAccessMonitorDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQPublicAccessMonitorData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQPublicAccessMonitorDataResponse rsp = DescribeRocketMQPublicAccessMonitorDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQPublicAccessMonitorDataOutcome(rsp);
        else
            return DescribeRocketMQPublicAccessMonitorDataOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQPublicAccessMonitorDataOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQPublicAccessMonitorDataAsync(const DescribeRocketMQPublicAccessMonitorDataRequest& request, const DescribeRocketMQPublicAccessMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQPublicAccessMonitorDataRequest&;
    using Resp = DescribeRocketMQPublicAccessMonitorDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQPublicAccessMonitorData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQPublicAccessMonitorDataOutcomeCallable TdmqClient::DescribeRocketMQPublicAccessMonitorDataCallable(const DescribeRocketMQPublicAccessMonitorDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQPublicAccessMonitorDataOutcome>>();
    DescribeRocketMQPublicAccessMonitorDataAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQPublicAccessMonitorDataRequest&,
        DescribeRocketMQPublicAccessMonitorDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQPublicAccessPointOutcome TdmqClient::DescribeRocketMQPublicAccessPoint(const DescribeRocketMQPublicAccessPointRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQPublicAccessPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQPublicAccessPointResponse rsp = DescribeRocketMQPublicAccessPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQPublicAccessPointOutcome(rsp);
        else
            return DescribeRocketMQPublicAccessPointOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQPublicAccessPointOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQPublicAccessPointAsync(const DescribeRocketMQPublicAccessPointRequest& request, const DescribeRocketMQPublicAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQPublicAccessPointRequest&;
    using Resp = DescribeRocketMQPublicAccessPointResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQPublicAccessPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQPublicAccessPointOutcomeCallable TdmqClient::DescribeRocketMQPublicAccessPointCallable(const DescribeRocketMQPublicAccessPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQPublicAccessPointOutcome>>();
    DescribeRocketMQPublicAccessPointAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQPublicAccessPointRequest&,
        DescribeRocketMQPublicAccessPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQRolesOutcome TdmqClient::DescribeRocketMQRoles(const DescribeRocketMQRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQRolesResponse rsp = DescribeRocketMQRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQRolesOutcome(rsp);
        else
            return DescribeRocketMQRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQRolesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQRolesAsync(const DescribeRocketMQRolesRequest& request, const DescribeRocketMQRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQRolesRequest&;
    using Resp = DescribeRocketMQRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQRolesOutcomeCallable TdmqClient::DescribeRocketMQRolesCallable(const DescribeRocketMQRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQRolesOutcome>>();
    DescribeRocketMQRolesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQRolesRequest&,
        DescribeRocketMQRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQSmoothMigrationTaskOutcome TdmqClient::DescribeRocketMQSmoothMigrationTask(const DescribeRocketMQSmoothMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQSmoothMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQSmoothMigrationTaskResponse rsp = DescribeRocketMQSmoothMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQSmoothMigrationTaskOutcome(rsp);
        else
            return DescribeRocketMQSmoothMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQSmoothMigrationTaskOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQSmoothMigrationTaskAsync(const DescribeRocketMQSmoothMigrationTaskRequest& request, const DescribeRocketMQSmoothMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQSmoothMigrationTaskRequest&;
    using Resp = DescribeRocketMQSmoothMigrationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQSmoothMigrationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQSmoothMigrationTaskOutcomeCallable TdmqClient::DescribeRocketMQSmoothMigrationTaskCallable(const DescribeRocketMQSmoothMigrationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQSmoothMigrationTaskOutcome>>();
    DescribeRocketMQSmoothMigrationTaskAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQSmoothMigrationTaskRequest&,
        DescribeRocketMQSmoothMigrationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQSubscriptionsOutcome TdmqClient::DescribeRocketMQSubscriptions(const DescribeRocketMQSubscriptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQSubscriptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQSubscriptionsResponse rsp = DescribeRocketMQSubscriptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQSubscriptionsOutcome(rsp);
        else
            return DescribeRocketMQSubscriptionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQSubscriptionsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQSubscriptionsAsync(const DescribeRocketMQSubscriptionsRequest& request, const DescribeRocketMQSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQSubscriptionsRequest&;
    using Resp = DescribeRocketMQSubscriptionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQSubscriptions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQSubscriptionsOutcomeCallable TdmqClient::DescribeRocketMQSubscriptionsCallable(const DescribeRocketMQSubscriptionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQSubscriptionsOutcome>>();
    DescribeRocketMQSubscriptionsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQSubscriptionsRequest&,
        DescribeRocketMQSubscriptionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQTopUsagesOutcome TdmqClient::DescribeRocketMQTopUsages(const DescribeRocketMQTopUsagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQTopUsages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQTopUsagesResponse rsp = DescribeRocketMQTopUsagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQTopUsagesOutcome(rsp);
        else
            return DescribeRocketMQTopUsagesOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQTopUsagesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQTopUsagesAsync(const DescribeRocketMQTopUsagesRequest& request, const DescribeRocketMQTopUsagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQTopUsagesRequest&;
    using Resp = DescribeRocketMQTopUsagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQTopUsages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQTopUsagesOutcomeCallable TdmqClient::DescribeRocketMQTopUsagesCallable(const DescribeRocketMQTopUsagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQTopUsagesOutcome>>();
    DescribeRocketMQTopUsagesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQTopUsagesRequest&,
        DescribeRocketMQTopUsagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQTopicOutcome TdmqClient::DescribeRocketMQTopic(const DescribeRocketMQTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQTopicResponse rsp = DescribeRocketMQTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQTopicOutcome(rsp);
        else
            return DescribeRocketMQTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQTopicOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQTopicAsync(const DescribeRocketMQTopicRequest& request, const DescribeRocketMQTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQTopicRequest&;
    using Resp = DescribeRocketMQTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQTopicOutcomeCallable TdmqClient::DescribeRocketMQTopicCallable(const DescribeRocketMQTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQTopicOutcome>>();
    DescribeRocketMQTopicAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQTopicRequest&,
        DescribeRocketMQTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQTopicMsgsOutcome TdmqClient::DescribeRocketMQTopicMsgs(const DescribeRocketMQTopicMsgsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQTopicMsgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQTopicMsgsResponse rsp = DescribeRocketMQTopicMsgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQTopicMsgsOutcome(rsp);
        else
            return DescribeRocketMQTopicMsgsOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQTopicMsgsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQTopicMsgsAsync(const DescribeRocketMQTopicMsgsRequest& request, const DescribeRocketMQTopicMsgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQTopicMsgsRequest&;
    using Resp = DescribeRocketMQTopicMsgsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQTopicMsgs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQTopicMsgsOutcomeCallable TdmqClient::DescribeRocketMQTopicMsgsCallable(const DescribeRocketMQTopicMsgsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQTopicMsgsOutcome>>();
    DescribeRocketMQTopicMsgsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQTopicMsgsRequest&,
        DescribeRocketMQTopicMsgsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQTopicStatsOutcome TdmqClient::DescribeRocketMQTopicStats(const DescribeRocketMQTopicStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQTopicStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQTopicStatsResponse rsp = DescribeRocketMQTopicStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQTopicStatsOutcome(rsp);
        else
            return DescribeRocketMQTopicStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQTopicStatsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQTopicStatsAsync(const DescribeRocketMQTopicStatsRequest& request, const DescribeRocketMQTopicStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQTopicStatsRequest&;
    using Resp = DescribeRocketMQTopicStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQTopicStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQTopicStatsOutcomeCallable TdmqClient::DescribeRocketMQTopicStatsCallable(const DescribeRocketMQTopicStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQTopicStatsOutcome>>();
    DescribeRocketMQTopicStatsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQTopicStatsRequest&,
        DescribeRocketMQTopicStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQTopicsOutcome TdmqClient::DescribeRocketMQTopics(const DescribeRocketMQTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQTopicsResponse rsp = DescribeRocketMQTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQTopicsOutcome(rsp);
        else
            return DescribeRocketMQTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQTopicsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQTopicsAsync(const DescribeRocketMQTopicsRequest& request, const DescribeRocketMQTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQTopicsRequest&;
    using Resp = DescribeRocketMQTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQTopicsOutcomeCallable TdmqClient::DescribeRocketMQTopicsCallable(const DescribeRocketMQTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQTopicsOutcome>>();
    DescribeRocketMQTopicsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQTopicsRequest&,
        DescribeRocketMQTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQTopicsByGroupOutcome TdmqClient::DescribeRocketMQTopicsByGroup(const DescribeRocketMQTopicsByGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQTopicsByGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQTopicsByGroupResponse rsp = DescribeRocketMQTopicsByGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQTopicsByGroupOutcome(rsp);
        else
            return DescribeRocketMQTopicsByGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQTopicsByGroupOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQTopicsByGroupAsync(const DescribeRocketMQTopicsByGroupRequest& request, const DescribeRocketMQTopicsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQTopicsByGroupRequest&;
    using Resp = DescribeRocketMQTopicsByGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQTopicsByGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQTopicsByGroupOutcomeCallable TdmqClient::DescribeRocketMQTopicsByGroupCallable(const DescribeRocketMQTopicsByGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQTopicsByGroupOutcome>>();
    DescribeRocketMQTopicsByGroupAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQTopicsByGroupRequest&,
        DescribeRocketMQTopicsByGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQVipInstanceDetailOutcome TdmqClient::DescribeRocketMQVipInstanceDetail(const DescribeRocketMQVipInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQVipInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQVipInstanceDetailResponse rsp = DescribeRocketMQVipInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQVipInstanceDetailOutcome(rsp);
        else
            return DescribeRocketMQVipInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQVipInstanceDetailOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQVipInstanceDetailAsync(const DescribeRocketMQVipInstanceDetailRequest& request, const DescribeRocketMQVipInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQVipInstanceDetailRequest&;
    using Resp = DescribeRocketMQVipInstanceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQVipInstanceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQVipInstanceDetailOutcomeCallable TdmqClient::DescribeRocketMQVipInstanceDetailCallable(const DescribeRocketMQVipInstanceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQVipInstanceDetailOutcome>>();
    DescribeRocketMQVipInstanceDetailAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQVipInstanceDetailRequest&,
        DescribeRocketMQVipInstanceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRocketMQVipInstancesOutcome TdmqClient::DescribeRocketMQVipInstances(const DescribeRocketMQVipInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQVipInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQVipInstancesResponse rsp = DescribeRocketMQVipInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQVipInstancesOutcome(rsp);
        else
            return DescribeRocketMQVipInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQVipInstancesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQVipInstancesAsync(const DescribeRocketMQVipInstancesRequest& request, const DescribeRocketMQVipInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRocketMQVipInstancesRequest&;
    using Resp = DescribeRocketMQVipInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRocketMQVipInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRocketMQVipInstancesOutcomeCallable TdmqClient::DescribeRocketMQVipInstancesCallable(const DescribeRocketMQVipInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRocketMQVipInstancesOutcome>>();
    DescribeRocketMQVipInstancesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRocketMQVipInstancesRequest&,
        DescribeRocketMQVipInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeRolesOutcome TdmqClient::DescribeRoles(const DescribeRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRolesResponse rsp = DescribeRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRolesOutcome(rsp);
        else
            return DescribeRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeRolesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRolesAsync(const DescribeRolesRequest& request, const DescribeRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRolesRequest&;
    using Resp = DescribeRolesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeRolesOutcomeCallable TdmqClient::DescribeRolesCallable(const DescribeRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRolesOutcome>>();
    DescribeRolesAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeRolesRequest&,
        DescribeRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeSubscriptionsOutcome TdmqClient::DescribeSubscriptions(const DescribeSubscriptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscriptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscriptionsResponse rsp = DescribeSubscriptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscriptionsOutcome(rsp);
        else
            return DescribeSubscriptionsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscriptionsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeSubscriptionsAsync(const DescribeSubscriptionsRequest& request, const DescribeSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubscriptionsRequest&;
    using Resp = DescribeSubscriptionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubscriptions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeSubscriptionsOutcomeCallable TdmqClient::DescribeSubscriptionsCallable(const DescribeSubscriptionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubscriptionsOutcome>>();
    DescribeSubscriptionsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeSubscriptionsRequest&,
        DescribeSubscriptionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeTopicMsgsOutcome TdmqClient::DescribeTopicMsgs(const DescribeTopicMsgsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicMsgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicMsgsResponse rsp = DescribeTopicMsgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicMsgsOutcome(rsp);
        else
            return DescribeTopicMsgsOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicMsgsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeTopicMsgsAsync(const DescribeTopicMsgsRequest& request, const DescribeTopicMsgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicMsgsRequest&;
    using Resp = DescribeTopicMsgsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicMsgs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeTopicMsgsOutcomeCallable TdmqClient::DescribeTopicMsgsCallable(const DescribeTopicMsgsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicMsgsOutcome>>();
    DescribeTopicMsgsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeTopicMsgsRequest&,
        DescribeTopicMsgsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::DescribeTopicsOutcome TdmqClient::DescribeTopics(const DescribeTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicsResponse rsp = DescribeTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicsOutcome(rsp);
        else
            return DescribeTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeTopicsAsync(const DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicsRequest&;
    using Resp = DescribeTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::DescribeTopicsOutcomeCallable TdmqClient::DescribeTopicsCallable(const DescribeTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicsOutcome>>();
    DescribeTopicsAsync(
    request,
    [prom](
        const TdmqClient*,
        const DescribeTopicsRequest&,
        DescribeTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ExecuteDisasterRecoveryOutcome TdmqClient::ExecuteDisasterRecovery(const ExecuteDisasterRecoveryRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteDisasterRecovery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteDisasterRecoveryResponse rsp = ExecuteDisasterRecoveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteDisasterRecoveryOutcome(rsp);
        else
            return ExecuteDisasterRecoveryOutcome(o.GetError());
    }
    else
    {
        return ExecuteDisasterRecoveryOutcome(outcome.GetError());
    }
}

void TdmqClient::ExecuteDisasterRecoveryAsync(const ExecuteDisasterRecoveryRequest& request, const ExecuteDisasterRecoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExecuteDisasterRecoveryRequest&;
    using Resp = ExecuteDisasterRecoveryResponse;

    DoRequestAsync<Req, Resp>(
        "ExecuteDisasterRecovery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ExecuteDisasterRecoveryOutcomeCallable TdmqClient::ExecuteDisasterRecoveryCallable(const ExecuteDisasterRecoveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExecuteDisasterRecoveryOutcome>>();
    ExecuteDisasterRecoveryAsync(
    request,
    [prom](
        const TdmqClient*,
        const ExecuteDisasterRecoveryRequest&,
        ExecuteDisasterRecoveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ExportRocketMQMessageDetailOutcome TdmqClient::ExportRocketMQMessageDetail(const ExportRocketMQMessageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRocketMQMessageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRocketMQMessageDetailResponse rsp = ExportRocketMQMessageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRocketMQMessageDetailOutcome(rsp);
        else
            return ExportRocketMQMessageDetailOutcome(o.GetError());
    }
    else
    {
        return ExportRocketMQMessageDetailOutcome(outcome.GetError());
    }
}

void TdmqClient::ExportRocketMQMessageDetailAsync(const ExportRocketMQMessageDetailRequest& request, const ExportRocketMQMessageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportRocketMQMessageDetailRequest&;
    using Resp = ExportRocketMQMessageDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ExportRocketMQMessageDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ExportRocketMQMessageDetailOutcomeCallable TdmqClient::ExportRocketMQMessageDetailCallable(const ExportRocketMQMessageDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportRocketMQMessageDetailOutcome>>();
    ExportRocketMQMessageDetailAsync(
    request,
    [prom](
        const TdmqClient*,
        const ExportRocketMQMessageDetailRequest&,
        ExportRocketMQMessageDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::GetTopicListOutcome TdmqClient::GetTopicList(const GetTopicListRequest &request)
{
    auto outcome = MakeRequest(request, "GetTopicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTopicListResponse rsp = GetTopicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTopicListOutcome(rsp);
        else
            return GetTopicListOutcome(o.GetError());
    }
    else
    {
        return GetTopicListOutcome(outcome.GetError());
    }
}

void TdmqClient::GetTopicListAsync(const GetTopicListRequest& request, const GetTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTopicListRequest&;
    using Resp = GetTopicListResponse;

    DoRequestAsync<Req, Resp>(
        "GetTopicList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::GetTopicListOutcomeCallable TdmqClient::GetTopicListCallable(const GetTopicListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTopicListOutcome>>();
    GetTopicListAsync(
    request,
    [prom](
        const TdmqClient*,
        const GetTopicListRequest&,
        GetTopicListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ImportRocketMQConsumerGroupsOutcome TdmqClient::ImportRocketMQConsumerGroups(const ImportRocketMQConsumerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportRocketMQConsumerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportRocketMQConsumerGroupsResponse rsp = ImportRocketMQConsumerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportRocketMQConsumerGroupsOutcome(rsp);
        else
            return ImportRocketMQConsumerGroupsOutcome(o.GetError());
    }
    else
    {
        return ImportRocketMQConsumerGroupsOutcome(outcome.GetError());
    }
}

void TdmqClient::ImportRocketMQConsumerGroupsAsync(const ImportRocketMQConsumerGroupsRequest& request, const ImportRocketMQConsumerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportRocketMQConsumerGroupsRequest&;
    using Resp = ImportRocketMQConsumerGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ImportRocketMQConsumerGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ImportRocketMQConsumerGroupsOutcomeCallable TdmqClient::ImportRocketMQConsumerGroupsCallable(const ImportRocketMQConsumerGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportRocketMQConsumerGroupsOutcome>>();
    ImportRocketMQConsumerGroupsAsync(
    request,
    [prom](
        const TdmqClient*,
        const ImportRocketMQConsumerGroupsRequest&,
        ImportRocketMQConsumerGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ImportRocketMQTopicsOutcome TdmqClient::ImportRocketMQTopics(const ImportRocketMQTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportRocketMQTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportRocketMQTopicsResponse rsp = ImportRocketMQTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportRocketMQTopicsOutcome(rsp);
        else
            return ImportRocketMQTopicsOutcome(o.GetError());
    }
    else
    {
        return ImportRocketMQTopicsOutcome(outcome.GetError());
    }
}

void TdmqClient::ImportRocketMQTopicsAsync(const ImportRocketMQTopicsRequest& request, const ImportRocketMQTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportRocketMQTopicsRequest&;
    using Resp = ImportRocketMQTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "ImportRocketMQTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ImportRocketMQTopicsOutcomeCallable TdmqClient::ImportRocketMQTopicsCallable(const ImportRocketMQTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportRocketMQTopicsOutcome>>();
    ImportRocketMQTopicsAsync(
    request,
    [prom](
        const TdmqClient*,
        const ImportRocketMQTopicsRequest&,
        ImportRocketMQTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyClusterOutcome TdmqClient::ModifyCluster(const ModifyClusterRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterResponse rsp = ModifyClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterOutcome(rsp);
        else
            return ModifyClusterOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyClusterAsync(const ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterRequest&;
    using Resp = ModifyClusterResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyClusterOutcomeCallable TdmqClient::ModifyClusterCallable(const ModifyClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterOutcome>>();
    ModifyClusterAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyClusterRequest&,
        ModifyClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyCmqQueueAttributeOutcome TdmqClient::ModifyCmqQueueAttribute(const ModifyCmqQueueAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCmqQueueAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCmqQueueAttributeResponse rsp = ModifyCmqQueueAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCmqQueueAttributeOutcome(rsp);
        else
            return ModifyCmqQueueAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCmqQueueAttributeOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyCmqQueueAttributeAsync(const ModifyCmqQueueAttributeRequest& request, const ModifyCmqQueueAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCmqQueueAttributeRequest&;
    using Resp = ModifyCmqQueueAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCmqQueueAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyCmqQueueAttributeOutcomeCallable TdmqClient::ModifyCmqQueueAttributeCallable(const ModifyCmqQueueAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCmqQueueAttributeOutcome>>();
    ModifyCmqQueueAttributeAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyCmqQueueAttributeRequest&,
        ModifyCmqQueueAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyCmqSubscriptionAttributeOutcome TdmqClient::ModifyCmqSubscriptionAttribute(const ModifyCmqSubscriptionAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCmqSubscriptionAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCmqSubscriptionAttributeResponse rsp = ModifyCmqSubscriptionAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCmqSubscriptionAttributeOutcome(rsp);
        else
            return ModifyCmqSubscriptionAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCmqSubscriptionAttributeOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyCmqSubscriptionAttributeAsync(const ModifyCmqSubscriptionAttributeRequest& request, const ModifyCmqSubscriptionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCmqSubscriptionAttributeRequest&;
    using Resp = ModifyCmqSubscriptionAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCmqSubscriptionAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyCmqSubscriptionAttributeOutcomeCallable TdmqClient::ModifyCmqSubscriptionAttributeCallable(const ModifyCmqSubscriptionAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCmqSubscriptionAttributeOutcome>>();
    ModifyCmqSubscriptionAttributeAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyCmqSubscriptionAttributeRequest&,
        ModifyCmqSubscriptionAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyCmqTopicAttributeOutcome TdmqClient::ModifyCmqTopicAttribute(const ModifyCmqTopicAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCmqTopicAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCmqTopicAttributeResponse rsp = ModifyCmqTopicAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCmqTopicAttributeOutcome(rsp);
        else
            return ModifyCmqTopicAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyCmqTopicAttributeOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyCmqTopicAttributeAsync(const ModifyCmqTopicAttributeRequest& request, const ModifyCmqTopicAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCmqTopicAttributeRequest&;
    using Resp = ModifyCmqTopicAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCmqTopicAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyCmqTopicAttributeOutcomeCallable TdmqClient::ModifyCmqTopicAttributeCallable(const ModifyCmqTopicAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCmqTopicAttributeOutcome>>();
    ModifyCmqTopicAttributeAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyCmqTopicAttributeRequest&,
        ModifyCmqTopicAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyEnvironmentAttributesOutcome TdmqClient::ModifyEnvironmentAttributes(const ModifyEnvironmentAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnvironmentAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnvironmentAttributesResponse rsp = ModifyEnvironmentAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnvironmentAttributesOutcome(rsp);
        else
            return ModifyEnvironmentAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyEnvironmentAttributesOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyEnvironmentAttributesAsync(const ModifyEnvironmentAttributesRequest& request, const ModifyEnvironmentAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEnvironmentAttributesRequest&;
    using Resp = ModifyEnvironmentAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnvironmentAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyEnvironmentAttributesOutcomeCallable TdmqClient::ModifyEnvironmentAttributesCallable(const ModifyEnvironmentAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnvironmentAttributesOutcome>>();
    ModifyEnvironmentAttributesAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyEnvironmentAttributesRequest&,
        ModifyEnvironmentAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyEnvironmentRoleOutcome TdmqClient::ModifyEnvironmentRole(const ModifyEnvironmentRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnvironmentRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnvironmentRoleResponse rsp = ModifyEnvironmentRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnvironmentRoleOutcome(rsp);
        else
            return ModifyEnvironmentRoleOutcome(o.GetError());
    }
    else
    {
        return ModifyEnvironmentRoleOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyEnvironmentRoleAsync(const ModifyEnvironmentRoleRequest& request, const ModifyEnvironmentRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEnvironmentRoleRequest&;
    using Resp = ModifyEnvironmentRoleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnvironmentRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyEnvironmentRoleOutcomeCallable TdmqClient::ModifyEnvironmentRoleCallable(const ModifyEnvironmentRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnvironmentRoleOutcome>>();
    ModifyEnvironmentRoleAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyEnvironmentRoleRequest&,
        ModifyEnvironmentRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyPublicNetworkSecurityPolicyOutcome TdmqClient::ModifyPublicNetworkSecurityPolicy(const ModifyPublicNetworkSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPublicNetworkSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPublicNetworkSecurityPolicyResponse rsp = ModifyPublicNetworkSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPublicNetworkSecurityPolicyOutcome(rsp);
        else
            return ModifyPublicNetworkSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyPublicNetworkSecurityPolicyOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyPublicNetworkSecurityPolicyAsync(const ModifyPublicNetworkSecurityPolicyRequest& request, const ModifyPublicNetworkSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPublicNetworkSecurityPolicyRequest&;
    using Resp = ModifyPublicNetworkSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPublicNetworkSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyPublicNetworkSecurityPolicyOutcomeCallable TdmqClient::ModifyPublicNetworkSecurityPolicyCallable(const ModifyPublicNetworkSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPublicNetworkSecurityPolicyOutcome>>();
    ModifyPublicNetworkSecurityPolicyAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyPublicNetworkSecurityPolicyRequest&,
        ModifyPublicNetworkSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRabbitMQPermissionOutcome TdmqClient::ModifyRabbitMQPermission(const ModifyRabbitMQPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRabbitMQPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRabbitMQPermissionResponse rsp = ModifyRabbitMQPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRabbitMQPermissionOutcome(rsp);
        else
            return ModifyRabbitMQPermissionOutcome(o.GetError());
    }
    else
    {
        return ModifyRabbitMQPermissionOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRabbitMQPermissionAsync(const ModifyRabbitMQPermissionRequest& request, const ModifyRabbitMQPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRabbitMQPermissionRequest&;
    using Resp = ModifyRabbitMQPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRabbitMQPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRabbitMQPermissionOutcomeCallable TdmqClient::ModifyRabbitMQPermissionCallable(const ModifyRabbitMQPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRabbitMQPermissionOutcome>>();
    ModifyRabbitMQPermissionAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRabbitMQPermissionRequest&,
        ModifyRabbitMQPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRabbitMQUserOutcome TdmqClient::ModifyRabbitMQUser(const ModifyRabbitMQUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRabbitMQUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRabbitMQUserResponse rsp = ModifyRabbitMQUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRabbitMQUserOutcome(rsp);
        else
            return ModifyRabbitMQUserOutcome(o.GetError());
    }
    else
    {
        return ModifyRabbitMQUserOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRabbitMQUserAsync(const ModifyRabbitMQUserRequest& request, const ModifyRabbitMQUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRabbitMQUserRequest&;
    using Resp = ModifyRabbitMQUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRabbitMQUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRabbitMQUserOutcomeCallable TdmqClient::ModifyRabbitMQUserCallable(const ModifyRabbitMQUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRabbitMQUserOutcome>>();
    ModifyRabbitMQUserAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRabbitMQUserRequest&,
        ModifyRabbitMQUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRabbitMQVipInstanceOutcome TdmqClient::ModifyRabbitMQVipInstance(const ModifyRabbitMQVipInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRabbitMQVipInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRabbitMQVipInstanceResponse rsp = ModifyRabbitMQVipInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRabbitMQVipInstanceOutcome(rsp);
        else
            return ModifyRabbitMQVipInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyRabbitMQVipInstanceOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRabbitMQVipInstanceAsync(const ModifyRabbitMQVipInstanceRequest& request, const ModifyRabbitMQVipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRabbitMQVipInstanceRequest&;
    using Resp = ModifyRabbitMQVipInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRabbitMQVipInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRabbitMQVipInstanceOutcomeCallable TdmqClient::ModifyRabbitMQVipInstanceCallable(const ModifyRabbitMQVipInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRabbitMQVipInstanceOutcome>>();
    ModifyRabbitMQVipInstanceAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRabbitMQVipInstanceRequest&,
        ModifyRabbitMQVipInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRabbitMQVirtualHostOutcome TdmqClient::ModifyRabbitMQVirtualHost(const ModifyRabbitMQVirtualHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRabbitMQVirtualHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRabbitMQVirtualHostResponse rsp = ModifyRabbitMQVirtualHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRabbitMQVirtualHostOutcome(rsp);
        else
            return ModifyRabbitMQVirtualHostOutcome(o.GetError());
    }
    else
    {
        return ModifyRabbitMQVirtualHostOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRabbitMQVirtualHostAsync(const ModifyRabbitMQVirtualHostRequest& request, const ModifyRabbitMQVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRabbitMQVirtualHostRequest&;
    using Resp = ModifyRabbitMQVirtualHostResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRabbitMQVirtualHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRabbitMQVirtualHostOutcomeCallable TdmqClient::ModifyRabbitMQVirtualHostCallable(const ModifyRabbitMQVirtualHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRabbitMQVirtualHostOutcome>>();
    ModifyRabbitMQVirtualHostAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRabbitMQVirtualHostRequest&,
        ModifyRabbitMQVirtualHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRocketMQClusterOutcome TdmqClient::ModifyRocketMQCluster(const ModifyRocketMQClusterRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRocketMQCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRocketMQClusterResponse rsp = ModifyRocketMQClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRocketMQClusterOutcome(rsp);
        else
            return ModifyRocketMQClusterOutcome(o.GetError());
    }
    else
    {
        return ModifyRocketMQClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRocketMQClusterAsync(const ModifyRocketMQClusterRequest& request, const ModifyRocketMQClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRocketMQClusterRequest&;
    using Resp = ModifyRocketMQClusterResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRocketMQCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRocketMQClusterOutcomeCallable TdmqClient::ModifyRocketMQClusterCallable(const ModifyRocketMQClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRocketMQClusterOutcome>>();
    ModifyRocketMQClusterAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRocketMQClusterRequest&,
        ModifyRocketMQClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRocketMQEnvironmentRoleOutcome TdmqClient::ModifyRocketMQEnvironmentRole(const ModifyRocketMQEnvironmentRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRocketMQEnvironmentRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRocketMQEnvironmentRoleResponse rsp = ModifyRocketMQEnvironmentRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRocketMQEnvironmentRoleOutcome(rsp);
        else
            return ModifyRocketMQEnvironmentRoleOutcome(o.GetError());
    }
    else
    {
        return ModifyRocketMQEnvironmentRoleOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRocketMQEnvironmentRoleAsync(const ModifyRocketMQEnvironmentRoleRequest& request, const ModifyRocketMQEnvironmentRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRocketMQEnvironmentRoleRequest&;
    using Resp = ModifyRocketMQEnvironmentRoleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRocketMQEnvironmentRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRocketMQEnvironmentRoleOutcomeCallable TdmqClient::ModifyRocketMQEnvironmentRoleCallable(const ModifyRocketMQEnvironmentRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRocketMQEnvironmentRoleOutcome>>();
    ModifyRocketMQEnvironmentRoleAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRocketMQEnvironmentRoleRequest&,
        ModifyRocketMQEnvironmentRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRocketMQGroupOutcome TdmqClient::ModifyRocketMQGroup(const ModifyRocketMQGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRocketMQGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRocketMQGroupResponse rsp = ModifyRocketMQGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRocketMQGroupOutcome(rsp);
        else
            return ModifyRocketMQGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyRocketMQGroupOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRocketMQGroupAsync(const ModifyRocketMQGroupRequest& request, const ModifyRocketMQGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRocketMQGroupRequest&;
    using Resp = ModifyRocketMQGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRocketMQGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRocketMQGroupOutcomeCallable TdmqClient::ModifyRocketMQGroupCallable(const ModifyRocketMQGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRocketMQGroupOutcome>>();
    ModifyRocketMQGroupAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRocketMQGroupRequest&,
        ModifyRocketMQGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRocketMQInstanceOutcome TdmqClient::ModifyRocketMQInstance(const ModifyRocketMQInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRocketMQInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRocketMQInstanceResponse rsp = ModifyRocketMQInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRocketMQInstanceOutcome(rsp);
        else
            return ModifyRocketMQInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyRocketMQInstanceOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRocketMQInstanceAsync(const ModifyRocketMQInstanceRequest& request, const ModifyRocketMQInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRocketMQInstanceRequest&;
    using Resp = ModifyRocketMQInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRocketMQInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRocketMQInstanceOutcomeCallable TdmqClient::ModifyRocketMQInstanceCallable(const ModifyRocketMQInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRocketMQInstanceOutcome>>();
    ModifyRocketMQInstanceAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRocketMQInstanceRequest&,
        ModifyRocketMQInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRocketMQInstanceSpecOutcome TdmqClient::ModifyRocketMQInstanceSpec(const ModifyRocketMQInstanceSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRocketMQInstanceSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRocketMQInstanceSpecResponse rsp = ModifyRocketMQInstanceSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRocketMQInstanceSpecOutcome(rsp);
        else
            return ModifyRocketMQInstanceSpecOutcome(o.GetError());
    }
    else
    {
        return ModifyRocketMQInstanceSpecOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRocketMQInstanceSpecAsync(const ModifyRocketMQInstanceSpecRequest& request, const ModifyRocketMQInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRocketMQInstanceSpecRequest&;
    using Resp = ModifyRocketMQInstanceSpecResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRocketMQInstanceSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRocketMQInstanceSpecOutcomeCallable TdmqClient::ModifyRocketMQInstanceSpecCallable(const ModifyRocketMQInstanceSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRocketMQInstanceSpecOutcome>>();
    ModifyRocketMQInstanceSpecAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRocketMQInstanceSpecRequest&,
        ModifyRocketMQInstanceSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRocketMQNamespaceOutcome TdmqClient::ModifyRocketMQNamespace(const ModifyRocketMQNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRocketMQNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRocketMQNamespaceResponse rsp = ModifyRocketMQNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRocketMQNamespaceOutcome(rsp);
        else
            return ModifyRocketMQNamespaceOutcome(o.GetError());
    }
    else
    {
        return ModifyRocketMQNamespaceOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRocketMQNamespaceAsync(const ModifyRocketMQNamespaceRequest& request, const ModifyRocketMQNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRocketMQNamespaceRequest&;
    using Resp = ModifyRocketMQNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRocketMQNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRocketMQNamespaceOutcomeCallable TdmqClient::ModifyRocketMQNamespaceCallable(const ModifyRocketMQNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRocketMQNamespaceOutcome>>();
    ModifyRocketMQNamespaceAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRocketMQNamespaceRequest&,
        ModifyRocketMQNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRocketMQRoleOutcome TdmqClient::ModifyRocketMQRole(const ModifyRocketMQRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRocketMQRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRocketMQRoleResponse rsp = ModifyRocketMQRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRocketMQRoleOutcome(rsp);
        else
            return ModifyRocketMQRoleOutcome(o.GetError());
    }
    else
    {
        return ModifyRocketMQRoleOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRocketMQRoleAsync(const ModifyRocketMQRoleRequest& request, const ModifyRocketMQRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRocketMQRoleRequest&;
    using Resp = ModifyRocketMQRoleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRocketMQRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRocketMQRoleOutcomeCallable TdmqClient::ModifyRocketMQRoleCallable(const ModifyRocketMQRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRocketMQRoleOutcome>>();
    ModifyRocketMQRoleAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRocketMQRoleRequest&,
        ModifyRocketMQRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRocketMQTopicOutcome TdmqClient::ModifyRocketMQTopic(const ModifyRocketMQTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRocketMQTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRocketMQTopicResponse rsp = ModifyRocketMQTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRocketMQTopicOutcome(rsp);
        else
            return ModifyRocketMQTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyRocketMQTopicOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyRocketMQTopicAsync(const ModifyRocketMQTopicRequest& request, const ModifyRocketMQTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRocketMQTopicRequest&;
    using Resp = ModifyRocketMQTopicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRocketMQTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ModifyRocketMQTopicOutcomeCallable TdmqClient::ModifyRocketMQTopicCallable(const ModifyRocketMQTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRocketMQTopicOutcome>>();
    ModifyRocketMQTopicAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRocketMQTopicRequest&,
        ModifyRocketMQTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyRoleOutcome TdmqClient::ModifyRole(const ModifyRoleRequest &request)
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

void TdmqClient::ModifyRoleAsync(const ModifyRoleRequest& request, const ModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmqClient::ModifyRoleOutcomeCallable TdmqClient::ModifyRoleCallable(const ModifyRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRoleOutcome>>();
    ModifyRoleAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyRoleRequest&,
        ModifyRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ModifyTopicOutcome TdmqClient::ModifyTopic(const ModifyTopicRequest &request)
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

void TdmqClient::ModifyTopicAsync(const ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmqClient::ModifyTopicOutcomeCallable TdmqClient::ModifyTopicCallable(const ModifyTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTopicOutcome>>();
    ModifyTopicAsync(
    request,
    [prom](
        const TdmqClient*,
        const ModifyTopicRequest&,
        ModifyTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::PublishCmqMsgOutcome TdmqClient::PublishCmqMsg(const PublishCmqMsgRequest &request)
{
    auto outcome = MakeRequest(request, "PublishCmqMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishCmqMsgResponse rsp = PublishCmqMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishCmqMsgOutcome(rsp);
        else
            return PublishCmqMsgOutcome(o.GetError());
    }
    else
    {
        return PublishCmqMsgOutcome(outcome.GetError());
    }
}

void TdmqClient::PublishCmqMsgAsync(const PublishCmqMsgRequest& request, const PublishCmqMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishCmqMsgRequest&;
    using Resp = PublishCmqMsgResponse;

    DoRequestAsync<Req, Resp>(
        "PublishCmqMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::PublishCmqMsgOutcomeCallable TdmqClient::PublishCmqMsgCallable(const PublishCmqMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishCmqMsgOutcome>>();
    PublishCmqMsgAsync(
    request,
    [prom](
        const TdmqClient*,
        const PublishCmqMsgRequest&,
        PublishCmqMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ReceiveMessageOutcome TdmqClient::ReceiveMessage(const ReceiveMessageRequest &request)
{
    auto outcome = MakeRequest(request, "ReceiveMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReceiveMessageResponse rsp = ReceiveMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReceiveMessageOutcome(rsp);
        else
            return ReceiveMessageOutcome(o.GetError());
    }
    else
    {
        return ReceiveMessageOutcome(outcome.GetError());
    }
}

void TdmqClient::ReceiveMessageAsync(const ReceiveMessageRequest& request, const ReceiveMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReceiveMessageRequest&;
    using Resp = ReceiveMessageResponse;

    DoRequestAsync<Req, Resp>(
        "ReceiveMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ReceiveMessageOutcomeCallable TdmqClient::ReceiveMessageCallable(const ReceiveMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReceiveMessageOutcome>>();
    ReceiveMessageAsync(
    request,
    [prom](
        const TdmqClient*,
        const ReceiveMessageRequest&,
        ReceiveMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ResetMsgSubOffsetByTimestampOutcome TdmqClient::ResetMsgSubOffsetByTimestamp(const ResetMsgSubOffsetByTimestampRequest &request)
{
    auto outcome = MakeRequest(request, "ResetMsgSubOffsetByTimestamp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetMsgSubOffsetByTimestampResponse rsp = ResetMsgSubOffsetByTimestampResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetMsgSubOffsetByTimestampOutcome(rsp);
        else
            return ResetMsgSubOffsetByTimestampOutcome(o.GetError());
    }
    else
    {
        return ResetMsgSubOffsetByTimestampOutcome(outcome.GetError());
    }
}

void TdmqClient::ResetMsgSubOffsetByTimestampAsync(const ResetMsgSubOffsetByTimestampRequest& request, const ResetMsgSubOffsetByTimestampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetMsgSubOffsetByTimestampRequest&;
    using Resp = ResetMsgSubOffsetByTimestampResponse;

    DoRequestAsync<Req, Resp>(
        "ResetMsgSubOffsetByTimestamp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ResetMsgSubOffsetByTimestampOutcomeCallable TdmqClient::ResetMsgSubOffsetByTimestampCallable(const ResetMsgSubOffsetByTimestampRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetMsgSubOffsetByTimestampOutcome>>();
    ResetMsgSubOffsetByTimestampAsync(
    request,
    [prom](
        const TdmqClient*,
        const ResetMsgSubOffsetByTimestampRequest&,
        ResetMsgSubOffsetByTimestampOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::ResetRocketMQConsumerOffSetOutcome TdmqClient::ResetRocketMQConsumerOffSet(const ResetRocketMQConsumerOffSetRequest &request)
{
    auto outcome = MakeRequest(request, "ResetRocketMQConsumerOffSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetRocketMQConsumerOffSetResponse rsp = ResetRocketMQConsumerOffSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetRocketMQConsumerOffSetOutcome(rsp);
        else
            return ResetRocketMQConsumerOffSetOutcome(o.GetError());
    }
    else
    {
        return ResetRocketMQConsumerOffSetOutcome(outcome.GetError());
    }
}

void TdmqClient::ResetRocketMQConsumerOffSetAsync(const ResetRocketMQConsumerOffSetRequest& request, const ResetRocketMQConsumerOffSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetRocketMQConsumerOffSetRequest&;
    using Resp = ResetRocketMQConsumerOffSetResponse;

    DoRequestAsync<Req, Resp>(
        "ResetRocketMQConsumerOffSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::ResetRocketMQConsumerOffSetOutcomeCallable TdmqClient::ResetRocketMQConsumerOffSetCallable(const ResetRocketMQConsumerOffSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetRocketMQConsumerOffSetOutcome>>();
    ResetRocketMQConsumerOffSetAsync(
    request,
    [prom](
        const TdmqClient*,
        const ResetRocketMQConsumerOffSetRequest&,
        ResetRocketMQConsumerOffSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::RetryRocketMQDlqMessageOutcome TdmqClient::RetryRocketMQDlqMessage(const RetryRocketMQDlqMessageRequest &request)
{
    auto outcome = MakeRequest(request, "RetryRocketMQDlqMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryRocketMQDlqMessageResponse rsp = RetryRocketMQDlqMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryRocketMQDlqMessageOutcome(rsp);
        else
            return RetryRocketMQDlqMessageOutcome(o.GetError());
    }
    else
    {
        return RetryRocketMQDlqMessageOutcome(outcome.GetError());
    }
}

void TdmqClient::RetryRocketMQDlqMessageAsync(const RetryRocketMQDlqMessageRequest& request, const RetryRocketMQDlqMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryRocketMQDlqMessageRequest&;
    using Resp = RetryRocketMQDlqMessageResponse;

    DoRequestAsync<Req, Resp>(
        "RetryRocketMQDlqMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::RetryRocketMQDlqMessageOutcomeCallable TdmqClient::RetryRocketMQDlqMessageCallable(const RetryRocketMQDlqMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryRocketMQDlqMessageOutcome>>();
    RetryRocketMQDlqMessageAsync(
    request,
    [prom](
        const TdmqClient*,
        const RetryRocketMQDlqMessageRequest&,
        RetryRocketMQDlqMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::RewindCmqQueueOutcome TdmqClient::RewindCmqQueue(const RewindCmqQueueRequest &request)
{
    auto outcome = MakeRequest(request, "RewindCmqQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RewindCmqQueueResponse rsp = RewindCmqQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RewindCmqQueueOutcome(rsp);
        else
            return RewindCmqQueueOutcome(o.GetError());
    }
    else
    {
        return RewindCmqQueueOutcome(outcome.GetError());
    }
}

void TdmqClient::RewindCmqQueueAsync(const RewindCmqQueueRequest& request, const RewindCmqQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RewindCmqQueueRequest&;
    using Resp = RewindCmqQueueResponse;

    DoRequestAsync<Req, Resp>(
        "RewindCmqQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::RewindCmqQueueOutcomeCallable TdmqClient::RewindCmqQueueCallable(const RewindCmqQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<RewindCmqQueueOutcome>>();
    RewindCmqQueueAsync(
    request,
    [prom](
        const TdmqClient*,
        const RewindCmqQueueRequest&,
        RewindCmqQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::SendBatchMessagesOutcome TdmqClient::SendBatchMessages(const SendBatchMessagesRequest &request)
{
    auto outcome = MakeRequest(request, "SendBatchMessages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendBatchMessagesResponse rsp = SendBatchMessagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendBatchMessagesOutcome(rsp);
        else
            return SendBatchMessagesOutcome(o.GetError());
    }
    else
    {
        return SendBatchMessagesOutcome(outcome.GetError());
    }
}

void TdmqClient::SendBatchMessagesAsync(const SendBatchMessagesRequest& request, const SendBatchMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendBatchMessagesRequest&;
    using Resp = SendBatchMessagesResponse;

    DoRequestAsync<Req, Resp>(
        "SendBatchMessages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::SendBatchMessagesOutcomeCallable TdmqClient::SendBatchMessagesCallable(const SendBatchMessagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendBatchMessagesOutcome>>();
    SendBatchMessagesAsync(
    request,
    [prom](
        const TdmqClient*,
        const SendBatchMessagesRequest&,
        SendBatchMessagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::SendCmqMsgOutcome TdmqClient::SendCmqMsg(const SendCmqMsgRequest &request)
{
    auto outcome = MakeRequest(request, "SendCmqMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendCmqMsgResponse rsp = SendCmqMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendCmqMsgOutcome(rsp);
        else
            return SendCmqMsgOutcome(o.GetError());
    }
    else
    {
        return SendCmqMsgOutcome(outcome.GetError());
    }
}

void TdmqClient::SendCmqMsgAsync(const SendCmqMsgRequest& request, const SendCmqMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendCmqMsgRequest&;
    using Resp = SendCmqMsgResponse;

    DoRequestAsync<Req, Resp>(
        "SendCmqMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::SendCmqMsgOutcomeCallable TdmqClient::SendCmqMsgCallable(const SendCmqMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendCmqMsgOutcome>>();
    SendCmqMsgAsync(
    request,
    [prom](
        const TdmqClient*,
        const SendCmqMsgRequest&,
        SendCmqMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::SendMessagesOutcome TdmqClient::SendMessages(const SendMessagesRequest &request)
{
    auto outcome = MakeRequest(request, "SendMessages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendMessagesResponse rsp = SendMessagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendMessagesOutcome(rsp);
        else
            return SendMessagesOutcome(o.GetError());
    }
    else
    {
        return SendMessagesOutcome(outcome.GetError());
    }
}

void TdmqClient::SendMessagesAsync(const SendMessagesRequest& request, const SendMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendMessagesRequest&;
    using Resp = SendMessagesResponse;

    DoRequestAsync<Req, Resp>(
        "SendMessages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::SendMessagesOutcomeCallable TdmqClient::SendMessagesCallable(const SendMessagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendMessagesOutcome>>();
    SendMessagesAsync(
    request,
    [prom](
        const TdmqClient*,
        const SendMessagesRequest&,
        SendMessagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::SendMsgOutcome TdmqClient::SendMsg(const SendMsgRequest &request)
{
    auto outcome = MakeRequest(request, "SendMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendMsgResponse rsp = SendMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendMsgOutcome(rsp);
        else
            return SendMsgOutcome(o.GetError());
    }
    else
    {
        return SendMsgOutcome(outcome.GetError());
    }
}

void TdmqClient::SendMsgAsync(const SendMsgRequest& request, const SendMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendMsgRequest&;
    using Resp = SendMsgResponse;

    DoRequestAsync<Req, Resp>(
        "SendMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::SendMsgOutcomeCallable TdmqClient::SendMsgCallable(const SendMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendMsgOutcome>>();
    SendMsgAsync(
    request,
    [prom](
        const TdmqClient*,
        const SendMsgRequest&,
        SendMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::SendRocketMQMessageOutcome TdmqClient::SendRocketMQMessage(const SendRocketMQMessageRequest &request)
{
    auto outcome = MakeRequest(request, "SendRocketMQMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendRocketMQMessageResponse rsp = SendRocketMQMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendRocketMQMessageOutcome(rsp);
        else
            return SendRocketMQMessageOutcome(o.GetError());
    }
    else
    {
        return SendRocketMQMessageOutcome(outcome.GetError());
    }
}

void TdmqClient::SendRocketMQMessageAsync(const SendRocketMQMessageRequest& request, const SendRocketMQMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendRocketMQMessageRequest&;
    using Resp = SendRocketMQMessageResponse;

    DoRequestAsync<Req, Resp>(
        "SendRocketMQMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::SendRocketMQMessageOutcomeCallable TdmqClient::SendRocketMQMessageCallable(const SendRocketMQMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendRocketMQMessageOutcome>>();
    SendRocketMQMessageAsync(
    request,
    [prom](
        const TdmqClient*,
        const SendRocketMQMessageRequest&,
        SendRocketMQMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::SetRocketMQPublicAccessPointOutcome TdmqClient::SetRocketMQPublicAccessPoint(const SetRocketMQPublicAccessPointRequest &request)
{
    auto outcome = MakeRequest(request, "SetRocketMQPublicAccessPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetRocketMQPublicAccessPointResponse rsp = SetRocketMQPublicAccessPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetRocketMQPublicAccessPointOutcome(rsp);
        else
            return SetRocketMQPublicAccessPointOutcome(o.GetError());
    }
    else
    {
        return SetRocketMQPublicAccessPointOutcome(outcome.GetError());
    }
}

void TdmqClient::SetRocketMQPublicAccessPointAsync(const SetRocketMQPublicAccessPointRequest& request, const SetRocketMQPublicAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetRocketMQPublicAccessPointRequest&;
    using Resp = SetRocketMQPublicAccessPointResponse;

    DoRequestAsync<Req, Resp>(
        "SetRocketMQPublicAccessPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::SetRocketMQPublicAccessPointOutcomeCallable TdmqClient::SetRocketMQPublicAccessPointCallable(const SetRocketMQPublicAccessPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetRocketMQPublicAccessPointOutcome>>();
    SetRocketMQPublicAccessPointAsync(
    request,
    [prom](
        const TdmqClient*,
        const SetRocketMQPublicAccessPointRequest&,
        SetRocketMQPublicAccessPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::UnbindCmqDeadLetterOutcome TdmqClient::UnbindCmqDeadLetter(const UnbindCmqDeadLetterRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindCmqDeadLetter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindCmqDeadLetterResponse rsp = UnbindCmqDeadLetterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindCmqDeadLetterOutcome(rsp);
        else
            return UnbindCmqDeadLetterOutcome(o.GetError());
    }
    else
    {
        return UnbindCmqDeadLetterOutcome(outcome.GetError());
    }
}

void TdmqClient::UnbindCmqDeadLetterAsync(const UnbindCmqDeadLetterRequest& request, const UnbindCmqDeadLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindCmqDeadLetterRequest&;
    using Resp = UnbindCmqDeadLetterResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindCmqDeadLetter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::UnbindCmqDeadLetterOutcomeCallable TdmqClient::UnbindCmqDeadLetterCallable(const UnbindCmqDeadLetterRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindCmqDeadLetterOutcome>>();
    UnbindCmqDeadLetterAsync(
    request,
    [prom](
        const TdmqClient*,
        const UnbindCmqDeadLetterRequest&,
        UnbindCmqDeadLetterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmqClient::VerifyRocketMQConsumeOutcome TdmqClient::VerifyRocketMQConsume(const VerifyRocketMQConsumeRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyRocketMQConsume");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyRocketMQConsumeResponse rsp = VerifyRocketMQConsumeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyRocketMQConsumeOutcome(rsp);
        else
            return VerifyRocketMQConsumeOutcome(o.GetError());
    }
    else
    {
        return VerifyRocketMQConsumeOutcome(outcome.GetError());
    }
}

void TdmqClient::VerifyRocketMQConsumeAsync(const VerifyRocketMQConsumeRequest& request, const VerifyRocketMQConsumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyRocketMQConsumeRequest&;
    using Resp = VerifyRocketMQConsumeResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyRocketMQConsume", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmqClient::VerifyRocketMQConsumeOutcomeCallable TdmqClient::VerifyRocketMQConsumeCallable(const VerifyRocketMQConsumeRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyRocketMQConsumeOutcome>>();
    VerifyRocketMQConsumeAsync(
    request,
    [prom](
        const TdmqClient*,
        const VerifyRocketMQConsumeRequest&,
        VerifyRocketMQConsumeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


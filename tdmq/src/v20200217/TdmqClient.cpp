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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AcknowledgeMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::AcknowledgeMessageOutcomeCallable TdmqClient::AcknowledgeMessageCallable(const AcknowledgeMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AcknowledgeMessageOutcome()>>(
        [this, request]()
        {
            return this->AcknowledgeMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClearCmqQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ClearCmqQueueOutcomeCallable TdmqClient::ClearCmqQueueCallable(const ClearCmqQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClearCmqQueueOutcome()>>(
        [this, request]()
        {
            return this->ClearCmqQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClearCmqSubscriptionFilterTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ClearCmqSubscriptionFilterTagsOutcomeCallable TdmqClient::ClearCmqSubscriptionFilterTagsCallable(const ClearCmqSubscriptionFilterTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClearCmqSubscriptionFilterTagsOutcome()>>(
        [this, request]()
        {
            return this->ClearCmqSubscriptionFilterTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::CreateAMQPClusterOutcome TdmqClient::CreateAMQPCluster(const CreateAMQPClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAMQPCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAMQPClusterResponse rsp = CreateAMQPClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAMQPClusterOutcome(rsp);
        else
            return CreateAMQPClusterOutcome(o.GetError());
    }
    else
    {
        return CreateAMQPClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateAMQPClusterAsync(const CreateAMQPClusterRequest& request, const CreateAMQPClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAMQPCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateAMQPClusterOutcomeCallable TdmqClient::CreateAMQPClusterCallable(const CreateAMQPClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAMQPClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateAMQPCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::CreateAMQPExchangeOutcome TdmqClient::CreateAMQPExchange(const CreateAMQPExchangeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAMQPExchange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAMQPExchangeResponse rsp = CreateAMQPExchangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAMQPExchangeOutcome(rsp);
        else
            return CreateAMQPExchangeOutcome(o.GetError());
    }
    else
    {
        return CreateAMQPExchangeOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateAMQPExchangeAsync(const CreateAMQPExchangeRequest& request, const CreateAMQPExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAMQPExchange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateAMQPExchangeOutcomeCallable TdmqClient::CreateAMQPExchangeCallable(const CreateAMQPExchangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAMQPExchangeOutcome()>>(
        [this, request]()
        {
            return this->CreateAMQPExchange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::CreateAMQPQueueOutcome TdmqClient::CreateAMQPQueue(const CreateAMQPQueueRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAMQPQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAMQPQueueResponse rsp = CreateAMQPQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAMQPQueueOutcome(rsp);
        else
            return CreateAMQPQueueOutcome(o.GetError());
    }
    else
    {
        return CreateAMQPQueueOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateAMQPQueueAsync(const CreateAMQPQueueRequest& request, const CreateAMQPQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAMQPQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateAMQPQueueOutcomeCallable TdmqClient::CreateAMQPQueueCallable(const CreateAMQPQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAMQPQueueOutcome()>>(
        [this, request]()
        {
            return this->CreateAMQPQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::CreateAMQPRouteRelationOutcome TdmqClient::CreateAMQPRouteRelation(const CreateAMQPRouteRelationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAMQPRouteRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAMQPRouteRelationResponse rsp = CreateAMQPRouteRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAMQPRouteRelationOutcome(rsp);
        else
            return CreateAMQPRouteRelationOutcome(o.GetError());
    }
    else
    {
        return CreateAMQPRouteRelationOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateAMQPRouteRelationAsync(const CreateAMQPRouteRelationRequest& request, const CreateAMQPRouteRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAMQPRouteRelation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateAMQPRouteRelationOutcomeCallable TdmqClient::CreateAMQPRouteRelationCallable(const CreateAMQPRouteRelationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAMQPRouteRelationOutcome()>>(
        [this, request]()
        {
            return this->CreateAMQPRouteRelation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::CreateAMQPVHostOutcome TdmqClient::CreateAMQPVHost(const CreateAMQPVHostRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAMQPVHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAMQPVHostResponse rsp = CreateAMQPVHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAMQPVHostOutcome(rsp);
        else
            return CreateAMQPVHostOutcome(o.GetError());
    }
    else
    {
        return CreateAMQPVHostOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateAMQPVHostAsync(const CreateAMQPVHostRequest& request, const CreateAMQPVHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAMQPVHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateAMQPVHostOutcomeCallable TdmqClient::CreateAMQPVHostCallable(const CreateAMQPVHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAMQPVHostOutcome()>>(
        [this, request]()
        {
            return this->CreateAMQPVHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateClusterOutcomeCallable TdmqClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCmqQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateCmqQueueOutcomeCallable TdmqClient::CreateCmqQueueCallable(const CreateCmqQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCmqQueueOutcome()>>(
        [this, request]()
        {
            return this->CreateCmqQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCmqSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateCmqSubscribeOutcomeCallable TdmqClient::CreateCmqSubscribeCallable(const CreateCmqSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCmqSubscribeOutcome()>>(
        [this, request]()
        {
            return this->CreateCmqSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCmqTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateCmqTopicOutcomeCallable TdmqClient::CreateCmqTopicCallable(const CreateCmqTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCmqTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateCmqTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateEnvironmentOutcomeCallable TdmqClient::CreateEnvironmentCallable(const CreateEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->CreateEnvironment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEnvironmentRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateEnvironmentRoleOutcomeCallable TdmqClient::CreateEnvironmentRoleCallable(const CreateEnvironmentRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEnvironmentRoleOutcome()>>(
        [this, request]()
        {
            return this->CreateEnvironmentRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRocketMQCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRocketMQClusterOutcomeCallable TdmqClient::CreateRocketMQClusterCallable(const CreateRocketMQClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRocketMQClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateRocketMQCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRocketMQGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRocketMQGroupOutcomeCallable TdmqClient::CreateRocketMQGroupCallable(const CreateRocketMQGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRocketMQGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateRocketMQGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRocketMQNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRocketMQNamespaceOutcomeCallable TdmqClient::CreateRocketMQNamespaceCallable(const CreateRocketMQNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRocketMQNamespaceOutcome()>>(
        [this, request]()
        {
            return this->CreateRocketMQNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRocketMQTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRocketMQTopicOutcomeCallable TdmqClient::CreateRocketMQTopicCallable(const CreateRocketMQTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRocketMQTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateRocketMQTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRoleOutcomeCallable TdmqClient::CreateRoleCallable(const CreateRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoleOutcome()>>(
        [this, request]()
        {
            return this->CreateRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubscription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateSubscriptionOutcomeCallable TdmqClient::CreateSubscriptionCallable(const CreateSubscriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubscriptionOutcome()>>(
        [this, request]()
        {
            return this->CreateSubscription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateTopicOutcomeCallable TdmqClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DeleteAMQPClusterOutcome TdmqClient::DeleteAMQPCluster(const DeleteAMQPClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAMQPCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAMQPClusterResponse rsp = DeleteAMQPClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAMQPClusterOutcome(rsp);
        else
            return DeleteAMQPClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteAMQPClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteAMQPClusterAsync(const DeleteAMQPClusterRequest& request, const DeleteAMQPClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAMQPCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteAMQPClusterOutcomeCallable TdmqClient::DeleteAMQPClusterCallable(const DeleteAMQPClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAMQPClusterOutcome()>>(
        [this, request]()
        {
            return this->DeleteAMQPCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DeleteAMQPExchangeOutcome TdmqClient::DeleteAMQPExchange(const DeleteAMQPExchangeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAMQPExchange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAMQPExchangeResponse rsp = DeleteAMQPExchangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAMQPExchangeOutcome(rsp);
        else
            return DeleteAMQPExchangeOutcome(o.GetError());
    }
    else
    {
        return DeleteAMQPExchangeOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteAMQPExchangeAsync(const DeleteAMQPExchangeRequest& request, const DeleteAMQPExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAMQPExchange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteAMQPExchangeOutcomeCallable TdmqClient::DeleteAMQPExchangeCallable(const DeleteAMQPExchangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAMQPExchangeOutcome()>>(
        [this, request]()
        {
            return this->DeleteAMQPExchange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DeleteAMQPQueueOutcome TdmqClient::DeleteAMQPQueue(const DeleteAMQPQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAMQPQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAMQPQueueResponse rsp = DeleteAMQPQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAMQPQueueOutcome(rsp);
        else
            return DeleteAMQPQueueOutcome(o.GetError());
    }
    else
    {
        return DeleteAMQPQueueOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteAMQPQueueAsync(const DeleteAMQPQueueRequest& request, const DeleteAMQPQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAMQPQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteAMQPQueueOutcomeCallable TdmqClient::DeleteAMQPQueueCallable(const DeleteAMQPQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAMQPQueueOutcome()>>(
        [this, request]()
        {
            return this->DeleteAMQPQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DeleteAMQPRouteRelationOutcome TdmqClient::DeleteAMQPRouteRelation(const DeleteAMQPRouteRelationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAMQPRouteRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAMQPRouteRelationResponse rsp = DeleteAMQPRouteRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAMQPRouteRelationOutcome(rsp);
        else
            return DeleteAMQPRouteRelationOutcome(o.GetError());
    }
    else
    {
        return DeleteAMQPRouteRelationOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteAMQPRouteRelationAsync(const DeleteAMQPRouteRelationRequest& request, const DeleteAMQPRouteRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAMQPRouteRelation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteAMQPRouteRelationOutcomeCallable TdmqClient::DeleteAMQPRouteRelationCallable(const DeleteAMQPRouteRelationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAMQPRouteRelationOutcome()>>(
        [this, request]()
        {
            return this->DeleteAMQPRouteRelation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DeleteAMQPVHostOutcome TdmqClient::DeleteAMQPVHost(const DeleteAMQPVHostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAMQPVHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAMQPVHostResponse rsp = DeleteAMQPVHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAMQPVHostOutcome(rsp);
        else
            return DeleteAMQPVHostOutcome(o.GetError());
    }
    else
    {
        return DeleteAMQPVHostOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteAMQPVHostAsync(const DeleteAMQPVHostRequest& request, const DeleteAMQPVHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAMQPVHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteAMQPVHostOutcomeCallable TdmqClient::DeleteAMQPVHostCallable(const DeleteAMQPVHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAMQPVHostOutcome()>>(
        [this, request]()
        {
            return this->DeleteAMQPVHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteClusterOutcomeCallable TdmqClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
        [this, request]()
        {
            return this->DeleteCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCmqQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteCmqQueueOutcomeCallable TdmqClient::DeleteCmqQueueCallable(const DeleteCmqQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCmqQueueOutcome()>>(
        [this, request]()
        {
            return this->DeleteCmqQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCmqSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteCmqSubscribeOutcomeCallable TdmqClient::DeleteCmqSubscribeCallable(const DeleteCmqSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCmqSubscribeOutcome()>>(
        [this, request]()
        {
            return this->DeleteCmqSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCmqTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteCmqTopicOutcomeCallable TdmqClient::DeleteCmqTopicCallable(const DeleteCmqTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCmqTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteCmqTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEnvironmentRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteEnvironmentRolesOutcomeCallable TdmqClient::DeleteEnvironmentRolesCallable(const DeleteEnvironmentRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEnvironmentRolesOutcome()>>(
        [this, request]()
        {
            return this->DeleteEnvironmentRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteEnvironmentsOutcomeCallable TdmqClient::DeleteEnvironmentsCallable(const DeleteEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->DeleteEnvironments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRocketMQCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRocketMQClusterOutcomeCallable TdmqClient::DeleteRocketMQClusterCallable(const DeleteRocketMQClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRocketMQClusterOutcome()>>(
        [this, request]()
        {
            return this->DeleteRocketMQCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRocketMQGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRocketMQGroupOutcomeCallable TdmqClient::DeleteRocketMQGroupCallable(const DeleteRocketMQGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRocketMQGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteRocketMQGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRocketMQNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRocketMQNamespaceOutcomeCallable TdmqClient::DeleteRocketMQNamespaceCallable(const DeleteRocketMQNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRocketMQNamespaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteRocketMQNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRocketMQTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRocketMQTopicOutcomeCallable TdmqClient::DeleteRocketMQTopicCallable(const DeleteRocketMQTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRocketMQTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteRocketMQTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRolesOutcomeCallable TdmqClient::DeleteRolesCallable(const DeleteRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRolesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSubscriptions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteSubscriptionsOutcomeCallable TdmqClient::DeleteSubscriptionsCallable(const DeleteSubscriptionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSubscriptionsOutcome()>>(
        [this, request]()
        {
            return this->DeleteSubscriptions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteTopicsOutcomeCallable TdmqClient::DeleteTopicsCallable(const DeleteTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTopicsOutcome()>>(
        [this, request]()
        {
            return this->DeleteTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeAMQPClusterOutcome TdmqClient::DescribeAMQPCluster(const DescribeAMQPClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAMQPCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAMQPClusterResponse rsp = DescribeAMQPClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAMQPClusterOutcome(rsp);
        else
            return DescribeAMQPClusterOutcome(o.GetError());
    }
    else
    {
        return DescribeAMQPClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeAMQPClusterAsync(const DescribeAMQPClusterRequest& request, const DescribeAMQPClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAMQPCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeAMQPClusterOutcomeCallable TdmqClient::DescribeAMQPClusterCallable(const DescribeAMQPClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAMQPClusterOutcome()>>(
        [this, request]()
        {
            return this->DescribeAMQPCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAMQPClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeAMQPClustersOutcomeCallable TdmqClient::DescribeAMQPClustersCallable(const DescribeAMQPClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAMQPClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeAMQPClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeAMQPCreateQuotaOutcome TdmqClient::DescribeAMQPCreateQuota(const DescribeAMQPCreateQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAMQPCreateQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAMQPCreateQuotaResponse rsp = DescribeAMQPCreateQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAMQPCreateQuotaOutcome(rsp);
        else
            return DescribeAMQPCreateQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeAMQPCreateQuotaOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeAMQPCreateQuotaAsync(const DescribeAMQPCreateQuotaRequest& request, const DescribeAMQPCreateQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAMQPCreateQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeAMQPCreateQuotaOutcomeCallable TdmqClient::DescribeAMQPCreateQuotaCallable(const DescribeAMQPCreateQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAMQPCreateQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeAMQPCreateQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeAMQPExchangesOutcome TdmqClient::DescribeAMQPExchanges(const DescribeAMQPExchangesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAMQPExchanges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAMQPExchangesResponse rsp = DescribeAMQPExchangesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAMQPExchangesOutcome(rsp);
        else
            return DescribeAMQPExchangesOutcome(o.GetError());
    }
    else
    {
        return DescribeAMQPExchangesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeAMQPExchangesAsync(const DescribeAMQPExchangesRequest& request, const DescribeAMQPExchangesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAMQPExchanges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeAMQPExchangesOutcomeCallable TdmqClient::DescribeAMQPExchangesCallable(const DescribeAMQPExchangesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAMQPExchangesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAMQPExchanges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeAMQPQueuesOutcome TdmqClient::DescribeAMQPQueues(const DescribeAMQPQueuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAMQPQueues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAMQPQueuesResponse rsp = DescribeAMQPQueuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAMQPQueuesOutcome(rsp);
        else
            return DescribeAMQPQueuesOutcome(o.GetError());
    }
    else
    {
        return DescribeAMQPQueuesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeAMQPQueuesAsync(const DescribeAMQPQueuesRequest& request, const DescribeAMQPQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAMQPQueues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeAMQPQueuesOutcomeCallable TdmqClient::DescribeAMQPQueuesCallable(const DescribeAMQPQueuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAMQPQueuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAMQPQueues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeAMQPRouteRelationsOutcome TdmqClient::DescribeAMQPRouteRelations(const DescribeAMQPRouteRelationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAMQPRouteRelations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAMQPRouteRelationsResponse rsp = DescribeAMQPRouteRelationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAMQPRouteRelationsOutcome(rsp);
        else
            return DescribeAMQPRouteRelationsOutcome(o.GetError());
    }
    else
    {
        return DescribeAMQPRouteRelationsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeAMQPRouteRelationsAsync(const DescribeAMQPRouteRelationsRequest& request, const DescribeAMQPRouteRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAMQPRouteRelations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeAMQPRouteRelationsOutcomeCallable TdmqClient::DescribeAMQPRouteRelationsCallable(const DescribeAMQPRouteRelationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAMQPRouteRelationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAMQPRouteRelations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeAMQPVHostsOutcome TdmqClient::DescribeAMQPVHosts(const DescribeAMQPVHostsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAMQPVHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAMQPVHostsResponse rsp = DescribeAMQPVHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAMQPVHostsOutcome(rsp);
        else
            return DescribeAMQPVHostsOutcome(o.GetError());
    }
    else
    {
        return DescribeAMQPVHostsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeAMQPVHostsAsync(const DescribeAMQPVHostsRequest& request, const DescribeAMQPVHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAMQPVHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeAMQPVHostsOutcomeCallable TdmqClient::DescribeAMQPVHostsCallable(const DescribeAMQPVHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAMQPVHostsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAMQPVHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllTenants(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeAllTenantsOutcomeCallable TdmqClient::DescribeAllTenantsCallable(const DescribeAllTenantsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllTenantsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllTenants(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeBindClustersOutcomeCallable TdmqClient::DescribeBindClustersCallable(const DescribeBindClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindVpcs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeBindVpcsOutcomeCallable TdmqClient::DescribeBindVpcsCallable(const DescribeBindVpcsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindVpcsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindVpcs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeClusterDetailOutcomeCallable TdmqClient::DescribeClusterDetailCallable(const DescribeClusterDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeClustersOutcomeCallable TdmqClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeCmqDeadLetterSourceQueuesOutcome TdmqClient::DescribeCmqDeadLetterSourceQueues(const DescribeCmqDeadLetterSourceQueuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCmqDeadLetterSourceQueues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCmqDeadLetterSourceQueuesResponse rsp = DescribeCmqDeadLetterSourceQueuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCmqDeadLetterSourceQueuesOutcome(rsp);
        else
            return DescribeCmqDeadLetterSourceQueuesOutcome(o.GetError());
    }
    else
    {
        return DescribeCmqDeadLetterSourceQueuesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeCmqDeadLetterSourceQueuesAsync(const DescribeCmqDeadLetterSourceQueuesRequest& request, const DescribeCmqDeadLetterSourceQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCmqDeadLetterSourceQueues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeCmqDeadLetterSourceQueuesOutcomeCallable TdmqClient::DescribeCmqDeadLetterSourceQueuesCallable(const DescribeCmqDeadLetterSourceQueuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCmqDeadLetterSourceQueuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCmqDeadLetterSourceQueues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCmqQueueDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeCmqQueueDetailOutcomeCallable TdmqClient::DescribeCmqQueueDetailCallable(const DescribeCmqQueueDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCmqQueueDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCmqQueueDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCmqQueues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeCmqQueuesOutcomeCallable TdmqClient::DescribeCmqQueuesCallable(const DescribeCmqQueuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCmqQueuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCmqQueues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCmqSubscriptionDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeCmqSubscriptionDetailOutcomeCallable TdmqClient::DescribeCmqSubscriptionDetailCallable(const DescribeCmqSubscriptionDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCmqSubscriptionDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCmqSubscriptionDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCmqTopicDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeCmqTopicDetailOutcomeCallable TdmqClient::DescribeCmqTopicDetailCallable(const DescribeCmqTopicDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCmqTopicDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCmqTopicDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCmqTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeCmqTopicsOutcomeCallable TdmqClient::DescribeCmqTopicsCallable(const DescribeCmqTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCmqTopicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCmqTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvironmentAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeEnvironmentAttributesOutcomeCallable TdmqClient::DescribeEnvironmentAttributesCallable(const DescribeEnvironmentAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvironmentAttributesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvironmentAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvironmentRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeEnvironmentRolesOutcomeCallable TdmqClient::DescribeEnvironmentRolesCallable(const DescribeEnvironmentRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvironmentRolesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvironmentRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeEnvironmentsOutcomeCallable TdmqClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvironments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNamespaceBundlesOpt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeNamespaceBundlesOptOutcomeCallable TdmqClient::DescribeNamespaceBundlesOptCallable(const DescribeNamespaceBundlesOptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNamespaceBundlesOptOutcome()>>(
        [this, request]()
        {
            return this->DescribeNamespaceBundlesOpt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNodeHealthOpt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeNodeHealthOptOutcomeCallable TdmqClient::DescribeNodeHealthOptCallable(const DescribeNodeHealthOptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodeHealthOptOutcome()>>(
        [this, request]()
        {
            return this->DescribeNodeHealthOpt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublisherSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribePublisherSummaryOutcomeCallable TdmqClient::DescribePublisherSummaryCallable(const DescribePublisherSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublisherSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribePublisherSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublishers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribePublishersOutcomeCallable TdmqClient::DescribePublishersCallable(const DescribePublishersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublishersOutcome()>>(
        [this, request]()
        {
            return this->DescribePublishers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQClusterOutcomeCallable TdmqClient::DescribeRocketMQClusterCallable(const DescribeRocketMQClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQClusterOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQClustersOutcomeCallable TdmqClient::DescribeRocketMQClustersCallable(const DescribeRocketMQClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQGroupsOutcomeCallable TdmqClient::DescribeRocketMQGroupsCallable(const DescribeRocketMQGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQNamespacesOutcomeCallable TdmqClient::DescribeRocketMQNamespacesCallable(const DescribeRocketMQNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQTopicsOutcomeCallable TdmqClient::DescribeRocketMQTopicsCallable(const DescribeRocketMQTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQTopicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRolesOutcomeCallable TdmqClient::DescribeRolesCallable(const DescribeRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRolesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubscriptions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeSubscriptionsOutcomeCallable TdmqClient::DescribeSubscriptionsCallable(const DescribeSubscriptionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubscriptionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubscriptions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeTopicsOutcomeCallable TdmqClient::DescribeTopicsCallable(const DescribeTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::ModifyAMQPClusterOutcome TdmqClient::ModifyAMQPCluster(const ModifyAMQPClusterRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAMQPCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAMQPClusterResponse rsp = ModifyAMQPClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAMQPClusterOutcome(rsp);
        else
            return ModifyAMQPClusterOutcome(o.GetError());
    }
    else
    {
        return ModifyAMQPClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyAMQPClusterAsync(const ModifyAMQPClusterRequest& request, const ModifyAMQPClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAMQPCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyAMQPClusterOutcomeCallable TdmqClient::ModifyAMQPClusterCallable(const ModifyAMQPClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAMQPClusterOutcome()>>(
        [this, request]()
        {
            return this->ModifyAMQPCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::ModifyAMQPExchangeOutcome TdmqClient::ModifyAMQPExchange(const ModifyAMQPExchangeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAMQPExchange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAMQPExchangeResponse rsp = ModifyAMQPExchangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAMQPExchangeOutcome(rsp);
        else
            return ModifyAMQPExchangeOutcome(o.GetError());
    }
    else
    {
        return ModifyAMQPExchangeOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyAMQPExchangeAsync(const ModifyAMQPExchangeRequest& request, const ModifyAMQPExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAMQPExchange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyAMQPExchangeOutcomeCallable TdmqClient::ModifyAMQPExchangeCallable(const ModifyAMQPExchangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAMQPExchangeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAMQPExchange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::ModifyAMQPQueueOutcome TdmqClient::ModifyAMQPQueue(const ModifyAMQPQueueRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAMQPQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAMQPQueueResponse rsp = ModifyAMQPQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAMQPQueueOutcome(rsp);
        else
            return ModifyAMQPQueueOutcome(o.GetError());
    }
    else
    {
        return ModifyAMQPQueueOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyAMQPQueueAsync(const ModifyAMQPQueueRequest& request, const ModifyAMQPQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAMQPQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyAMQPQueueOutcomeCallable TdmqClient::ModifyAMQPQueueCallable(const ModifyAMQPQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAMQPQueueOutcome()>>(
        [this, request]()
        {
            return this->ModifyAMQPQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::ModifyAMQPVHostOutcome TdmqClient::ModifyAMQPVHost(const ModifyAMQPVHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAMQPVHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAMQPVHostResponse rsp = ModifyAMQPVHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAMQPVHostOutcome(rsp);
        else
            return ModifyAMQPVHostOutcome(o.GetError());
    }
    else
    {
        return ModifyAMQPVHostOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyAMQPVHostAsync(const ModifyAMQPVHostRequest& request, const ModifyAMQPVHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAMQPVHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyAMQPVHostOutcomeCallable TdmqClient::ModifyAMQPVHostCallable(const ModifyAMQPVHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAMQPVHostOutcome()>>(
        [this, request]()
        {
            return this->ModifyAMQPVHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyClusterOutcomeCallable TdmqClient::ModifyClusterCallable(const ModifyClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterOutcome()>>(
        [this, request]()
        {
            return this->ModifyCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCmqQueueAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyCmqQueueAttributeOutcomeCallable TdmqClient::ModifyCmqQueueAttributeCallable(const ModifyCmqQueueAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCmqQueueAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyCmqQueueAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCmqSubscriptionAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyCmqSubscriptionAttributeOutcomeCallable TdmqClient::ModifyCmqSubscriptionAttributeCallable(const ModifyCmqSubscriptionAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCmqSubscriptionAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyCmqSubscriptionAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCmqTopicAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyCmqTopicAttributeOutcomeCallable TdmqClient::ModifyCmqTopicAttributeCallable(const ModifyCmqTopicAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCmqTopicAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyCmqTopicAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnvironmentAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyEnvironmentAttributesOutcomeCallable TdmqClient::ModifyEnvironmentAttributesCallable(const ModifyEnvironmentAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnvironmentAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnvironmentAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnvironmentRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyEnvironmentRoleOutcomeCallable TdmqClient::ModifyEnvironmentRoleCallable(const ModifyEnvironmentRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnvironmentRoleOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnvironmentRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRocketMQCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRocketMQClusterOutcomeCallable TdmqClient::ModifyRocketMQClusterCallable(const ModifyRocketMQClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRocketMQClusterOutcome()>>(
        [this, request]()
        {
            return this->ModifyRocketMQCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRocketMQGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRocketMQGroupOutcomeCallable TdmqClient::ModifyRocketMQGroupCallable(const ModifyRocketMQGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRocketMQGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyRocketMQGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRocketMQNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRocketMQNamespaceOutcomeCallable TdmqClient::ModifyRocketMQNamespaceCallable(const ModifyRocketMQNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRocketMQNamespaceOutcome()>>(
        [this, request]()
        {
            return this->ModifyRocketMQNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRocketMQTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRocketMQTopicOutcomeCallable TdmqClient::ModifyRocketMQTopicCallable(const ModifyRocketMQTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRocketMQTopicOutcome()>>(
        [this, request]()
        {
            return this->ModifyRocketMQTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRoleOutcomeCallable TdmqClient::ModifyRoleCallable(const ModifyRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRoleOutcome()>>(
        [this, request]()
        {
            return this->ModifyRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyTopicOutcomeCallable TdmqClient::ModifyTopicCallable(const ModifyTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTopicOutcome()>>(
        [this, request]()
        {
            return this->ModifyTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishCmqMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::PublishCmqMsgOutcomeCallable TdmqClient::PublishCmqMsgCallable(const PublishCmqMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishCmqMsgOutcome()>>(
        [this, request]()
        {
            return this->PublishCmqMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReceiveMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ReceiveMessageOutcomeCallable TdmqClient::ReceiveMessageCallable(const ReceiveMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReceiveMessageOutcome()>>(
        [this, request]()
        {
            return this->ReceiveMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetMsgSubOffsetByTimestamp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ResetMsgSubOffsetByTimestampOutcomeCallable TdmqClient::ResetMsgSubOffsetByTimestampCallable(const ResetMsgSubOffsetByTimestampRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetMsgSubOffsetByTimestampOutcome()>>(
        [this, request]()
        {
            return this->ResetMsgSubOffsetByTimestamp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RewindCmqQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::RewindCmqQueueOutcomeCallable TdmqClient::RewindCmqQueueCallable(const RewindCmqQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RewindCmqQueueOutcome()>>(
        [this, request]()
        {
            return this->RewindCmqQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendBatchMessages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::SendBatchMessagesOutcomeCallable TdmqClient::SendBatchMessagesCallable(const SendBatchMessagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendBatchMessagesOutcome()>>(
        [this, request]()
        {
            return this->SendBatchMessages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendCmqMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::SendCmqMsgOutcomeCallable TdmqClient::SendCmqMsgCallable(const SendCmqMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendCmqMsgOutcome()>>(
        [this, request]()
        {
            return this->SendCmqMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendMessages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::SendMessagesOutcomeCallable TdmqClient::SendMessagesCallable(const SendMessagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendMessagesOutcome()>>(
        [this, request]()
        {
            return this->SendMessages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::SendMsgOutcomeCallable TdmqClient::SendMsgCallable(const SendMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendMsgOutcome()>>(
        [this, request]()
        {
            return this->SendMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindCmqDeadLetter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::UnbindCmqDeadLetterOutcomeCallable TdmqClient::UnbindCmqDeadLetterCallable(const UnbindCmqDeadLetterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindCmqDeadLetterOutcome()>>(
        [this, request]()
        {
            return this->UnbindCmqDeadLetter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


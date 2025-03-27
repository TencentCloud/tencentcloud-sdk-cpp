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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateProClusterOutcomeCallable TdmqClient::CreateProClusterCallable(const CreateProClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateProCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRabbitMQBinding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRabbitMQBindingOutcomeCallable TdmqClient::CreateRabbitMQBindingCallable(const CreateRabbitMQBindingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRabbitMQBindingOutcome()>>(
        [this, request]()
        {
            return this->CreateRabbitMQBinding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRabbitMQUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRabbitMQUserOutcomeCallable TdmqClient::CreateRabbitMQUserCallable(const CreateRabbitMQUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRabbitMQUserOutcome()>>(
        [this, request]()
        {
            return this->CreateRabbitMQUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRabbitMQVipInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRabbitMQVipInstanceOutcomeCallable TdmqClient::CreateRabbitMQVipInstanceCallable(const CreateRabbitMQVipInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRabbitMQVipInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateRabbitMQVipInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRabbitMQVirtualHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRabbitMQVirtualHostOutcomeCallable TdmqClient::CreateRabbitMQVirtualHostCallable(const CreateRabbitMQVirtualHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRabbitMQVirtualHostOutcome()>>(
        [this, request]()
        {
            return this->CreateRabbitMQVirtualHost(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRocketMQEnvironmentRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRocketMQEnvironmentRoleOutcomeCallable TdmqClient::CreateRocketMQEnvironmentRoleCallable(const CreateRocketMQEnvironmentRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRocketMQEnvironmentRoleOutcome()>>(
        [this, request]()
        {
            return this->CreateRocketMQEnvironmentRole(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRocketMQRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRocketMQRoleOutcomeCallable TdmqClient::CreateRocketMQRoleCallable(const CreateRocketMQRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRocketMQRoleOutcome()>>(
        [this, request]()
        {
            return this->CreateRocketMQRole(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRocketMQVipInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateRocketMQVipInstanceOutcomeCallable TdmqClient::CreateRocketMQVipInstanceCallable(const CreateRocketMQVipInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRocketMQVipInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateRocketMQVipInstance(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteProClusterOutcomeCallable TdmqClient::DeleteProClusterCallable(const DeleteProClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProClusterOutcome()>>(
        [this, request]()
        {
            return this->DeleteProCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQBinding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRabbitMQBindingOutcomeCallable TdmqClient::DeleteRabbitMQBindingCallable(const DeleteRabbitMQBindingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQBindingOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQBinding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQPermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRabbitMQPermissionOutcomeCallable TdmqClient::DeleteRabbitMQPermissionCallable(const DeleteRabbitMQPermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQPermissionOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQPermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRabbitMQUserOutcomeCallable TdmqClient::DeleteRabbitMQUserCallable(const DeleteRabbitMQUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQVipInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRabbitMQVipInstanceOutcomeCallable TdmqClient::DeleteRabbitMQVipInstanceCallable(const DeleteRabbitMQVipInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQVipInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQVipInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQVirtualHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRabbitMQVirtualHostOutcomeCallable TdmqClient::DeleteRabbitMQVirtualHostCallable(const DeleteRabbitMQVirtualHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQVirtualHostOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQVirtualHost(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRocketMQEnvironmentRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRocketMQEnvironmentRolesOutcomeCallable TdmqClient::DeleteRocketMQEnvironmentRolesCallable(const DeleteRocketMQEnvironmentRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRocketMQEnvironmentRolesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRocketMQEnvironmentRoles(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRocketMQRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRocketMQRolesOutcomeCallable TdmqClient::DeleteRocketMQRolesCallable(const DeleteRocketMQRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRocketMQRolesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRocketMQRoles(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRocketMQVipInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteRocketMQVipInstanceOutcomeCallable TdmqClient::DeleteRocketMQVipInstanceCallable(const DeleteRocketMQVipInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRocketMQVipInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteRocketMQVipInstance(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMqMsgTrace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeMqMsgTraceOutcomeCallable TdmqClient::DescribeMqMsgTraceCallable(const DescribeMqMsgTraceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMqMsgTraceOutcome()>>(
        [this, request]()
        {
            return this->DescribeMqMsgTrace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeMsgOutcomeCallable TdmqClient::DescribeMsgCallable(const DescribeMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMsgOutcome()>>(
        [this, request]()
        {
            return this->DescribeMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMsgTrace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeMsgTraceOutcomeCallable TdmqClient::DescribeMsgTraceCallable(const DescribeMsgTraceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMsgTraceOutcome()>>(
        [this, request]()
        {
            return this->DescribeMsgTrace(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePulsarProInstanceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribePulsarProInstanceDetailOutcomeCallable TdmqClient::DescribePulsarProInstanceDetailCallable(const DescribePulsarProInstanceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePulsarProInstanceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribePulsarProInstanceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePulsarProInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribePulsarProInstancesOutcomeCallable TdmqClient::DescribePulsarProInstancesCallable(const DescribePulsarProInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePulsarProInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribePulsarProInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQBindings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRabbitMQBindingsOutcomeCallable TdmqClient::DescribeRabbitMQBindingsCallable(const DescribeRabbitMQBindingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQBindingsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQBindings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQExchanges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRabbitMQExchangesOutcomeCallable TdmqClient::DescribeRabbitMQExchangesCallable(const DescribeRabbitMQExchangesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQExchangesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQExchanges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQNodeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRabbitMQNodeListOutcomeCallable TdmqClient::DescribeRabbitMQNodeListCallable(const DescribeRabbitMQNodeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQNodeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQNodeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQPermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRabbitMQPermissionOutcomeCallable TdmqClient::DescribeRabbitMQPermissionCallable(const DescribeRabbitMQPermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQPermissionOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQPermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQQueueDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRabbitMQQueueDetailOutcomeCallable TdmqClient::DescribeRabbitMQQueueDetailCallable(const DescribeRabbitMQQueueDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQQueueDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQQueueDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQQueues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRabbitMQQueuesOutcomeCallable TdmqClient::DescribeRabbitMQQueuesCallable(const DescribeRabbitMQQueuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQQueuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQQueues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRabbitMQUserOutcomeCallable TdmqClient::DescribeRabbitMQUserCallable(const DescribeRabbitMQUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQUserOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQVipInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRabbitMQVipInstanceOutcomeCallable TdmqClient::DescribeRabbitMQVipInstanceCallable(const DescribeRabbitMQVipInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQVipInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQVipInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQVipInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRabbitMQVipInstancesOutcomeCallable TdmqClient::DescribeRabbitMQVipInstancesCallable(const DescribeRabbitMQVipInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQVipInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQVipInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQVirtualHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRabbitMQVirtualHostOutcomeCallable TdmqClient::DescribeRabbitMQVirtualHostCallable(const DescribeRabbitMQVirtualHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQVirtualHostOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQVirtualHost(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQConsumeStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQConsumeStatsOutcomeCallable TdmqClient::DescribeRocketMQConsumeStatsCallable(const DescribeRocketMQConsumeStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQConsumeStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQConsumeStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQConsumerConnectionDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQConsumerConnectionDetailOutcomeCallable TdmqClient::DescribeRocketMQConsumerConnectionDetailCallable(const DescribeRocketMQConsumerConnectionDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQConsumerConnectionDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQConsumerConnectionDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQConsumerConnections(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQConsumerConnectionsOutcomeCallable TdmqClient::DescribeRocketMQConsumerConnectionsCallable(const DescribeRocketMQConsumerConnectionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQConsumerConnectionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQConsumerConnections(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQEnvironmentRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQEnvironmentRolesOutcomeCallable TdmqClient::DescribeRocketMQEnvironmentRolesCallable(const DescribeRocketMQEnvironmentRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQEnvironmentRolesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQEnvironmentRoles(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQMigratingTopicList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQMigratingTopicListOutcomeCallable TdmqClient::DescribeRocketMQMigratingTopicListCallable(const DescribeRocketMQMigratingTopicListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQMigratingTopicListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQMigratingTopicList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQMsgOutcomeCallable TdmqClient::DescribeRocketMQMsgCallable(const DescribeRocketMQMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQMsgOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQMsgTrace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQMsgTraceOutcomeCallable TdmqClient::DescribeRocketMQMsgTraceCallable(const DescribeRocketMQMsgTraceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQMsgTraceOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQMsgTrace(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQPublicAccessMonitorData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQPublicAccessMonitorDataOutcomeCallable TdmqClient::DescribeRocketMQPublicAccessMonitorDataCallable(const DescribeRocketMQPublicAccessMonitorDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQPublicAccessMonitorDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQPublicAccessMonitorData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQPublicAccessPoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQPublicAccessPointOutcomeCallable TdmqClient::DescribeRocketMQPublicAccessPointCallable(const DescribeRocketMQPublicAccessPointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQPublicAccessPointOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQPublicAccessPoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQRolesOutcomeCallable TdmqClient::DescribeRocketMQRolesCallable(const DescribeRocketMQRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQRolesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQSmoothMigrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQSmoothMigrationTaskOutcomeCallable TdmqClient::DescribeRocketMQSmoothMigrationTaskCallable(const DescribeRocketMQSmoothMigrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQSmoothMigrationTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQSmoothMigrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeRocketMQSmoothMigrationTaskListOutcome TdmqClient::DescribeRocketMQSmoothMigrationTaskList(const DescribeRocketMQSmoothMigrationTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQSmoothMigrationTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQSmoothMigrationTaskListResponse rsp = DescribeRocketMQSmoothMigrationTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQSmoothMigrationTaskListOutcome(rsp);
        else
            return DescribeRocketMQSmoothMigrationTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQSmoothMigrationTaskListOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQSmoothMigrationTaskListAsync(const DescribeRocketMQSmoothMigrationTaskListRequest& request, const DescribeRocketMQSmoothMigrationTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQSmoothMigrationTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQSmoothMigrationTaskListOutcomeCallable TdmqClient::DescribeRocketMQSmoothMigrationTaskListCallable(const DescribeRocketMQSmoothMigrationTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQSmoothMigrationTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQSmoothMigrationTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeRocketMQSourceClusterGroupListOutcome TdmqClient::DescribeRocketMQSourceClusterGroupList(const DescribeRocketMQSourceClusterGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQSourceClusterGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQSourceClusterGroupListResponse rsp = DescribeRocketMQSourceClusterGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQSourceClusterGroupListOutcome(rsp);
        else
            return DescribeRocketMQSourceClusterGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQSourceClusterGroupListOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQSourceClusterGroupListAsync(const DescribeRocketMQSourceClusterGroupListRequest& request, const DescribeRocketMQSourceClusterGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQSourceClusterGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQSourceClusterGroupListOutcomeCallable TdmqClient::DescribeRocketMQSourceClusterGroupListCallable(const DescribeRocketMQSourceClusterGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQSourceClusterGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQSourceClusterGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeRocketMQSourceClusterTopicListOutcome TdmqClient::DescribeRocketMQSourceClusterTopicList(const DescribeRocketMQSourceClusterTopicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRocketMQSourceClusterTopicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRocketMQSourceClusterTopicListResponse rsp = DescribeRocketMQSourceClusterTopicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRocketMQSourceClusterTopicListOutcome(rsp);
        else
            return DescribeRocketMQSourceClusterTopicListOutcome(o.GetError());
    }
    else
    {
        return DescribeRocketMQSourceClusterTopicListOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeRocketMQSourceClusterTopicListAsync(const DescribeRocketMQSourceClusterTopicListRequest& request, const DescribeRocketMQSourceClusterTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQSourceClusterTopicList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQSourceClusterTopicListOutcomeCallable TdmqClient::DescribeRocketMQSourceClusterTopicListCallable(const DescribeRocketMQSourceClusterTopicListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQSourceClusterTopicListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQSourceClusterTopicList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQSubscriptions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQSubscriptionsOutcomeCallable TdmqClient::DescribeRocketMQSubscriptionsCallable(const DescribeRocketMQSubscriptionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQSubscriptionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQSubscriptions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQTopUsages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQTopUsagesOutcomeCallable TdmqClient::DescribeRocketMQTopUsagesCallable(const DescribeRocketMQTopUsagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQTopUsagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQTopUsages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQTopicMsgs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQTopicMsgsOutcomeCallable TdmqClient::DescribeRocketMQTopicMsgsCallable(const DescribeRocketMQTopicMsgsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQTopicMsgsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQTopicMsgs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQTopicStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQTopicStatsOutcomeCallable TdmqClient::DescribeRocketMQTopicStatsCallable(const DescribeRocketMQTopicStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQTopicStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQTopicStats(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQTopicsByGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQTopicsByGroupOutcomeCallable TdmqClient::DescribeRocketMQTopicsByGroupCallable(const DescribeRocketMQTopicsByGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQTopicsByGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQTopicsByGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQVipInstanceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQVipInstanceDetailOutcomeCallable TdmqClient::DescribeRocketMQVipInstanceDetailCallable(const DescribeRocketMQVipInstanceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQVipInstanceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQVipInstanceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRocketMQVipInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeRocketMQVipInstancesOutcomeCallable TdmqClient::DescribeRocketMQVipInstancesCallable(const DescribeRocketMQVipInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRocketMQVipInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRocketMQVipInstances(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicMsgs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeTopicMsgsOutcomeCallable TdmqClient::DescribeTopicMsgsCallable(const DescribeTopicMsgsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicMsgsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicMsgs(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportRocketMQMessageDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ExportRocketMQMessageDetailOutcomeCallable TdmqClient::ExportRocketMQMessageDetailCallable(const ExportRocketMQMessageDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportRocketMQMessageDetailOutcome()>>(
        [this, request]()
        {
            return this->ExportRocketMQMessageDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTopicList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::GetTopicListOutcomeCallable TdmqClient::GetTopicListCallable(const GetTopicListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTopicListOutcome()>>(
        [this, request]()
        {
            return this->GetTopicList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportRocketMQConsumerGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ImportRocketMQConsumerGroupsOutcomeCallable TdmqClient::ImportRocketMQConsumerGroupsCallable(const ImportRocketMQConsumerGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportRocketMQConsumerGroupsOutcome()>>(
        [this, request]()
        {
            return this->ImportRocketMQConsumerGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportRocketMQTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ImportRocketMQTopicsOutcomeCallable TdmqClient::ImportRocketMQTopicsCallable(const ImportRocketMQTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportRocketMQTopicsOutcome()>>(
        [this, request]()
        {
            return this->ImportRocketMQTopics(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPublicNetworkSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyPublicNetworkSecurityPolicyOutcomeCallable TdmqClient::ModifyPublicNetworkSecurityPolicyCallable(const ModifyPublicNetworkSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPublicNetworkSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyPublicNetworkSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRabbitMQPermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRabbitMQPermissionOutcomeCallable TdmqClient::ModifyRabbitMQPermissionCallable(const ModifyRabbitMQPermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRabbitMQPermissionOutcome()>>(
        [this, request]()
        {
            return this->ModifyRabbitMQPermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRabbitMQUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRabbitMQUserOutcomeCallable TdmqClient::ModifyRabbitMQUserCallable(const ModifyRabbitMQUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRabbitMQUserOutcome()>>(
        [this, request]()
        {
            return this->ModifyRabbitMQUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRabbitMQVipInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRabbitMQVipInstanceOutcomeCallable TdmqClient::ModifyRabbitMQVipInstanceCallable(const ModifyRabbitMQVipInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRabbitMQVipInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyRabbitMQVipInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRabbitMQVirtualHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRabbitMQVirtualHostOutcomeCallable TdmqClient::ModifyRabbitMQVirtualHostCallable(const ModifyRabbitMQVirtualHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRabbitMQVirtualHostOutcome()>>(
        [this, request]()
        {
            return this->ModifyRabbitMQVirtualHost(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRocketMQEnvironmentRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRocketMQEnvironmentRoleOutcomeCallable TdmqClient::ModifyRocketMQEnvironmentRoleCallable(const ModifyRocketMQEnvironmentRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRocketMQEnvironmentRoleOutcome()>>(
        [this, request]()
        {
            return this->ModifyRocketMQEnvironmentRole(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRocketMQInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRocketMQInstanceOutcomeCallable TdmqClient::ModifyRocketMQInstanceCallable(const ModifyRocketMQInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRocketMQInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyRocketMQInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRocketMQInstanceSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRocketMQInstanceSpecOutcomeCallable TdmqClient::ModifyRocketMQInstanceSpecCallable(const ModifyRocketMQInstanceSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRocketMQInstanceSpecOutcome()>>(
        [this, request]()
        {
            return this->ModifyRocketMQInstanceSpec(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRocketMQRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyRocketMQRoleOutcomeCallable TdmqClient::ModifyRocketMQRoleCallable(const ModifyRocketMQRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRocketMQRoleOutcome()>>(
        [this, request]()
        {
            return this->ModifyRocketMQRole(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetRocketMQConsumerOffSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ResetRocketMQConsumerOffSetOutcomeCallable TdmqClient::ResetRocketMQConsumerOffSetCallable(const ResetRocketMQConsumerOffSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetRocketMQConsumerOffSetOutcome()>>(
        [this, request]()
        {
            return this->ResetRocketMQConsumerOffSet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryRocketMQDlqMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::RetryRocketMQDlqMessageOutcomeCallable TdmqClient::RetryRocketMQDlqMessageCallable(const RetryRocketMQDlqMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryRocketMQDlqMessageOutcome()>>(
        [this, request]()
        {
            return this->RetryRocketMQDlqMessage(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendRocketMQMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::SendRocketMQMessageOutcomeCallable TdmqClient::SendRocketMQMessageCallable(const SendRocketMQMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendRocketMQMessageOutcome()>>(
        [this, request]()
        {
            return this->SendRocketMQMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetRocketMQPublicAccessPoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::SetRocketMQPublicAccessPointOutcomeCallable TdmqClient::SetRocketMQPublicAccessPointCallable(const SetRocketMQPublicAccessPointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetRocketMQPublicAccessPointOutcome()>>(
        [this, request]()
        {
            return this->SetRocketMQPublicAccessPoint(request);
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyRocketMQConsume(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::VerifyRocketMQConsumeOutcomeCallable TdmqClient::VerifyRocketMQConsumeCallable(const VerifyRocketMQConsumeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyRocketMQConsumeOutcome()>>(
        [this, request]()
        {
            return this->VerifyRocketMQConsume(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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

#include <tencentcloud/cmq/v20190304/CmqClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cmq::V20190304;
using namespace TencentCloud::Cmq::V20190304::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-04";
    const string ENDPOINT = "cmq.tencentcloudapi.com";
}

CmqClient::CmqClient(const Credential &credential, const string &region) :
    CmqClient(credential, region, ClientProfile())
{
}

CmqClient::CmqClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CmqClient::ClearQueueOutcome CmqClient::ClearQueue(const ClearQueueRequest &request)
{
    auto outcome = MakeRequest(request, "ClearQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearQueueResponse rsp = ClearQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearQueueOutcome(rsp);
        else
            return ClearQueueOutcome(o.GetError());
    }
    else
    {
        return ClearQueueOutcome(outcome.GetError());
    }
}

void CmqClient::ClearQueueAsync(const ClearQueueRequest& request, const ClearQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClearQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::ClearQueueOutcomeCallable CmqClient::ClearQueueCallable(const ClearQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClearQueueOutcome()>>(
        [this, request]()
        {
            return this->ClearQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::ClearSubscriptionFilterTagsOutcome CmqClient::ClearSubscriptionFilterTags(const ClearSubscriptionFilterTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ClearSubscriptionFilterTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearSubscriptionFilterTagsResponse rsp = ClearSubscriptionFilterTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearSubscriptionFilterTagsOutcome(rsp);
        else
            return ClearSubscriptionFilterTagsOutcome(o.GetError());
    }
    else
    {
        return ClearSubscriptionFilterTagsOutcome(outcome.GetError());
    }
}

void CmqClient::ClearSubscriptionFilterTagsAsync(const ClearSubscriptionFilterTagsRequest& request, const ClearSubscriptionFilterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClearSubscriptionFilterTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::ClearSubscriptionFilterTagsOutcomeCallable CmqClient::ClearSubscriptionFilterTagsCallable(const ClearSubscriptionFilterTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClearSubscriptionFilterTagsOutcome()>>(
        [this, request]()
        {
            return this->ClearSubscriptionFilterTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::CreateQueueOutcome CmqClient::CreateQueue(const CreateQueueRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQueueResponse rsp = CreateQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQueueOutcome(rsp);
        else
            return CreateQueueOutcome(o.GetError());
    }
    else
    {
        return CreateQueueOutcome(outcome.GetError());
    }
}

void CmqClient::CreateQueueAsync(const CreateQueueRequest& request, const CreateQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::CreateQueueOutcomeCallable CmqClient::CreateQueueCallable(const CreateQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateQueueOutcome()>>(
        [this, request]()
        {
            return this->CreateQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::CreateSubscribeOutcome CmqClient::CreateSubscribe(const CreateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubscribeResponse rsp = CreateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubscribeOutcome(rsp);
        else
            return CreateSubscribeOutcome(o.GetError());
    }
    else
    {
        return CreateSubscribeOutcome(outcome.GetError());
    }
}

void CmqClient::CreateSubscribeAsync(const CreateSubscribeRequest& request, const CreateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::CreateSubscribeOutcomeCallable CmqClient::CreateSubscribeCallable(const CreateSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubscribeOutcome()>>(
        [this, request]()
        {
            return this->CreateSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::CreateTopicOutcome CmqClient::CreateTopic(const CreateTopicRequest &request)
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

void CmqClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::CreateTopicOutcomeCallable CmqClient::CreateTopicCallable(const CreateTopicRequest &request)
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

CmqClient::DeleteQueueOutcome CmqClient::DeleteQueue(const DeleteQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQueueResponse rsp = DeleteQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQueueOutcome(rsp);
        else
            return DeleteQueueOutcome(o.GetError());
    }
    else
    {
        return DeleteQueueOutcome(outcome.GetError());
    }
}

void CmqClient::DeleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::DeleteQueueOutcomeCallable CmqClient::DeleteQueueCallable(const DeleteQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQueueOutcome()>>(
        [this, request]()
        {
            return this->DeleteQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::DeleteSubscribeOutcome CmqClient::DeleteSubscribe(const DeleteSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSubscribeResponse rsp = DeleteSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSubscribeOutcome(rsp);
        else
            return DeleteSubscribeOutcome(o.GetError());
    }
    else
    {
        return DeleteSubscribeOutcome(outcome.GetError());
    }
}

void CmqClient::DeleteSubscribeAsync(const DeleteSubscribeRequest& request, const DeleteSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::DeleteSubscribeOutcomeCallable CmqClient::DeleteSubscribeCallable(const DeleteSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSubscribeOutcome()>>(
        [this, request]()
        {
            return this->DeleteSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::DeleteTopicOutcome CmqClient::DeleteTopic(const DeleteTopicRequest &request)
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

void CmqClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::DeleteTopicOutcomeCallable CmqClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::DescribeDeadLetterSourceQueuesOutcome CmqClient::DescribeDeadLetterSourceQueues(const DescribeDeadLetterSourceQueuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeadLetterSourceQueues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeadLetterSourceQueuesResponse rsp = DescribeDeadLetterSourceQueuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeadLetterSourceQueuesOutcome(rsp);
        else
            return DescribeDeadLetterSourceQueuesOutcome(o.GetError());
    }
    else
    {
        return DescribeDeadLetterSourceQueuesOutcome(outcome.GetError());
    }
}

void CmqClient::DescribeDeadLetterSourceQueuesAsync(const DescribeDeadLetterSourceQueuesRequest& request, const DescribeDeadLetterSourceQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeadLetterSourceQueues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::DescribeDeadLetterSourceQueuesOutcomeCallable CmqClient::DescribeDeadLetterSourceQueuesCallable(const DescribeDeadLetterSourceQueuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeadLetterSourceQueuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeadLetterSourceQueues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::DescribeQueueDetailOutcome CmqClient::DescribeQueueDetail(const DescribeQueueDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQueueDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQueueDetailResponse rsp = DescribeQueueDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQueueDetailOutcome(rsp);
        else
            return DescribeQueueDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeQueueDetailOutcome(outcome.GetError());
    }
}

void CmqClient::DescribeQueueDetailAsync(const DescribeQueueDetailRequest& request, const DescribeQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQueueDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::DescribeQueueDetailOutcomeCallable CmqClient::DescribeQueueDetailCallable(const DescribeQueueDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQueueDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeQueueDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::DescribeSubscriptionDetailOutcome CmqClient::DescribeSubscriptionDetail(const DescribeSubscriptionDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscriptionDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscriptionDetailResponse rsp = DescribeSubscriptionDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscriptionDetailOutcome(rsp);
        else
            return DescribeSubscriptionDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscriptionDetailOutcome(outcome.GetError());
    }
}

void CmqClient::DescribeSubscriptionDetailAsync(const DescribeSubscriptionDetailRequest& request, const DescribeSubscriptionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubscriptionDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::DescribeSubscriptionDetailOutcomeCallable CmqClient::DescribeSubscriptionDetailCallable(const DescribeSubscriptionDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubscriptionDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubscriptionDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::DescribeTopicDetailOutcome CmqClient::DescribeTopicDetail(const DescribeTopicDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicDetailResponse rsp = DescribeTopicDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicDetailOutcome(rsp);
        else
            return DescribeTopicDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicDetailOutcome(outcome.GetError());
    }
}

void CmqClient::DescribeTopicDetailAsync(const DescribeTopicDetailRequest& request, const DescribeTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::DescribeTopicDetailOutcomeCallable CmqClient::DescribeTopicDetailCallable(const DescribeTopicDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::ModifyQueueAttributeOutcome CmqClient::ModifyQueueAttribute(const ModifyQueueAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQueueAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQueueAttributeResponse rsp = ModifyQueueAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQueueAttributeOutcome(rsp);
        else
            return ModifyQueueAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyQueueAttributeOutcome(outcome.GetError());
    }
}

void CmqClient::ModifyQueueAttributeAsync(const ModifyQueueAttributeRequest& request, const ModifyQueueAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQueueAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::ModifyQueueAttributeOutcomeCallable CmqClient::ModifyQueueAttributeCallable(const ModifyQueueAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQueueAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyQueueAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::ModifySubscriptionAttributeOutcome CmqClient::ModifySubscriptionAttribute(const ModifySubscriptionAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscriptionAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscriptionAttributeResponse rsp = ModifySubscriptionAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscriptionAttributeOutcome(rsp);
        else
            return ModifySubscriptionAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySubscriptionAttributeOutcome(outcome.GetError());
    }
}

void CmqClient::ModifySubscriptionAttributeAsync(const ModifySubscriptionAttributeRequest& request, const ModifySubscriptionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubscriptionAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::ModifySubscriptionAttributeOutcomeCallable CmqClient::ModifySubscriptionAttributeCallable(const ModifySubscriptionAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubscriptionAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifySubscriptionAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::ModifyTopicAttributeOutcome CmqClient::ModifyTopicAttribute(const ModifyTopicAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopicAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicAttributeResponse rsp = ModifyTopicAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicAttributeOutcome(rsp);
        else
            return ModifyTopicAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicAttributeOutcome(outcome.GetError());
    }
}

void CmqClient::ModifyTopicAttributeAsync(const ModifyTopicAttributeRequest& request, const ModifyTopicAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopicAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::ModifyTopicAttributeOutcomeCallable CmqClient::ModifyTopicAttributeCallable(const ModifyTopicAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTopicAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyTopicAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::RewindQueueOutcome CmqClient::RewindQueue(const RewindQueueRequest &request)
{
    auto outcome = MakeRequest(request, "RewindQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RewindQueueResponse rsp = RewindQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RewindQueueOutcome(rsp);
        else
            return RewindQueueOutcome(o.GetError());
    }
    else
    {
        return RewindQueueOutcome(outcome.GetError());
    }
}

void CmqClient::RewindQueueAsync(const RewindQueueRequest& request, const RewindQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RewindQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::RewindQueueOutcomeCallable CmqClient::RewindQueueCallable(const RewindQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RewindQueueOutcome()>>(
        [this, request]()
        {
            return this->RewindQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::UnbindDeadLetterOutcome CmqClient::UnbindDeadLetter(const UnbindDeadLetterRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindDeadLetter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindDeadLetterResponse rsp = UnbindDeadLetterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindDeadLetterOutcome(rsp);
        else
            return UnbindDeadLetterOutcome(o.GetError());
    }
    else
    {
        return UnbindDeadLetterOutcome(outcome.GetError());
    }
}

void CmqClient::UnbindDeadLetterAsync(const UnbindDeadLetterRequest& request, const UnbindDeadLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindDeadLetter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::UnbindDeadLetterOutcomeCallable CmqClient::UnbindDeadLetterCallable(const UnbindDeadLetterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindDeadLetterOutcome()>>(
        [this, request]()
        {
            return this->UnbindDeadLetter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


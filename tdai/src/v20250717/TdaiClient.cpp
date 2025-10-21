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

#include <tencentcloud/tdai/v20250717/TdaiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdai::V20250717;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-07-17";
    const string ENDPOINT = "tdai.tencentcloudapi.com";
}

TdaiClient::TdaiClient(const Credential &credential, const string &region) :
    TdaiClient(credential, region, ClientProfile())
{
}

TdaiClient::TdaiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdaiClient::ContinueAgentWorkOutcome TdaiClient::ContinueAgentWork(const ContinueAgentWorkRequest &request)
{
    auto outcome = MakeRequest(request, "ContinueAgentWork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ContinueAgentWorkResponse rsp = ContinueAgentWorkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ContinueAgentWorkOutcome(rsp);
        else
            return ContinueAgentWorkOutcome(o.GetError());
    }
    else
    {
        return ContinueAgentWorkOutcome(outcome.GetError());
    }
}

void TdaiClient::ContinueAgentWorkAsync(const ContinueAgentWorkRequest& request, const ContinueAgentWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ContinueAgentWork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::ContinueAgentWorkOutcomeCallable TdaiClient::ContinueAgentWorkCallable(const ContinueAgentWorkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ContinueAgentWorkOutcome()>>(
        [this, request]()
        {
            return this->ContinueAgentWork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::CreateAgentInstanceOutcome TdaiClient::CreateAgentInstance(const CreateAgentInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentInstanceResponse rsp = CreateAgentInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentInstanceOutcome(rsp);
        else
            return CreateAgentInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateAgentInstanceOutcome(outcome.GetError());
    }
}

void TdaiClient::CreateAgentInstanceAsync(const CreateAgentInstanceRequest& request, const CreateAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAgentInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::CreateAgentInstanceOutcomeCallable TdaiClient::CreateAgentInstanceCallable(const CreateAgentInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAgentInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateAgentInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::CreateChatCompletionOutcome TdaiClient::CreateChatCompletion(const CreateChatCompletionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChatCompletion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChatCompletionResponse rsp = CreateChatCompletionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChatCompletionOutcome(rsp);
        else
            return CreateChatCompletionOutcome(o.GetError());
    }
    else
    {
        return CreateChatCompletionOutcome(outcome.GetError());
    }
}

void TdaiClient::CreateChatCompletionAsync(const CreateChatCompletionRequest& request, const CreateChatCompletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateChatCompletion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::CreateChatCompletionOutcomeCallable TdaiClient::CreateChatCompletionCallable(const CreateChatCompletionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateChatCompletionOutcome()>>(
        [this, request]()
        {
            return this->CreateChatCompletion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::DescribeAgentDutyTaskDetailOutcome TdaiClient::DescribeAgentDutyTaskDetail(const DescribeAgentDutyTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentDutyTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentDutyTaskDetailResponse rsp = DescribeAgentDutyTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentDutyTaskDetailOutcome(rsp);
        else
            return DescribeAgentDutyTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentDutyTaskDetailOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeAgentDutyTaskDetailAsync(const DescribeAgentDutyTaskDetailRequest& request, const DescribeAgentDutyTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentDutyTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::DescribeAgentDutyTaskDetailOutcomeCallable TdaiClient::DescribeAgentDutyTaskDetailCallable(const DescribeAgentDutyTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentDutyTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentDutyTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::DescribeAgentDutyTasksOutcome TdaiClient::DescribeAgentDutyTasks(const DescribeAgentDutyTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentDutyTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentDutyTasksResponse rsp = DescribeAgentDutyTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentDutyTasksOutcome(rsp);
        else
            return DescribeAgentDutyTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentDutyTasksOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeAgentDutyTasksAsync(const DescribeAgentDutyTasksRequest& request, const DescribeAgentDutyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentDutyTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::DescribeAgentDutyTasksOutcomeCallable TdaiClient::DescribeAgentDutyTasksCallable(const DescribeAgentDutyTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentDutyTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentDutyTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::DescribeAgentInstanceOutcome TdaiClient::DescribeAgentInstance(const DescribeAgentInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentInstanceResponse rsp = DescribeAgentInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentInstanceOutcome(rsp);
        else
            return DescribeAgentInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentInstanceOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeAgentInstanceAsync(const DescribeAgentInstanceRequest& request, const DescribeAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::DescribeAgentInstanceOutcomeCallable TdaiClient::DescribeAgentInstanceCallable(const DescribeAgentInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::DescribeAgentInstancesOutcome TdaiClient::DescribeAgentInstances(const DescribeAgentInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentInstancesResponse rsp = DescribeAgentInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentInstancesOutcome(rsp);
        else
            return DescribeAgentInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentInstancesOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeAgentInstancesAsync(const DescribeAgentInstancesRequest& request, const DescribeAgentInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::DescribeAgentInstancesOutcomeCallable TdaiClient::DescribeAgentInstancesCallable(const DescribeAgentInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::DescribeAgentsOutcome TdaiClient::DescribeAgents(const DescribeAgentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentsResponse rsp = DescribeAgentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentsOutcome(rsp);
        else
            return DescribeAgentsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentsOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeAgentsAsync(const DescribeAgentsRequest& request, const DescribeAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::DescribeAgentsOutcomeCallable TdaiClient::DescribeAgentsCallable(const DescribeAgentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::DescribeChatDetailOutcome TdaiClient::DescribeChatDetail(const DescribeChatDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChatDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChatDetailResponse rsp = DescribeChatDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChatDetailOutcome(rsp);
        else
            return DescribeChatDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeChatDetailOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeChatDetailAsync(const DescribeChatDetailRequest& request, const DescribeChatDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChatDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::DescribeChatDetailOutcomeCallable TdaiClient::DescribeChatDetailCallable(const DescribeChatDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChatDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeChatDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::DescribeChatsOutcome TdaiClient::DescribeChats(const DescribeChatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChatsResponse rsp = DescribeChatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChatsOutcome(rsp);
        else
            return DescribeChatsOutcome(o.GetError());
    }
    else
    {
        return DescribeChatsOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeChatsAsync(const DescribeChatsRequest& request, const DescribeChatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::DescribeChatsOutcomeCallable TdaiClient::DescribeChatsCallable(const DescribeChatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeChats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::DescribeReportUrlOutcome TdaiClient::DescribeReportUrl(const DescribeReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportUrlResponse rsp = DescribeReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportUrlOutcome(rsp);
        else
            return DescribeReportUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeReportUrlOutcome(outcome.GetError());
    }
}

void TdaiClient::DescribeReportUrlAsync(const DescribeReportUrlRequest& request, const DescribeReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReportUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::DescribeReportUrlOutcomeCallable TdaiClient::DescribeReportUrlCallable(const DescribeReportUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReportUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeReportUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::IsolateAgentInstanceOutcome TdaiClient::IsolateAgentInstance(const IsolateAgentInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateAgentInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateAgentInstanceResponse rsp = IsolateAgentInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateAgentInstanceOutcome(rsp);
        else
            return IsolateAgentInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateAgentInstanceOutcome(outcome.GetError());
    }
}

void TdaiClient::IsolateAgentInstanceAsync(const IsolateAgentInstanceRequest& request, const IsolateAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateAgentInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::IsolateAgentInstanceOutcomeCallable TdaiClient::IsolateAgentInstanceCallable(const IsolateAgentInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateAgentInstanceOutcome()>>(
        [this, request]()
        {
            return this->IsolateAgentInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::ModifyAgentInstanceParametersOutcome TdaiClient::ModifyAgentInstanceParameters(const ModifyAgentInstanceParametersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgentInstanceParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentInstanceParametersResponse rsp = ModifyAgentInstanceParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentInstanceParametersOutcome(rsp);
        else
            return ModifyAgentInstanceParametersOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentInstanceParametersOutcome(outcome.GetError());
    }
}

void TdaiClient::ModifyAgentInstanceParametersAsync(const ModifyAgentInstanceParametersRequest& request, const ModifyAgentInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAgentInstanceParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::ModifyAgentInstanceParametersOutcomeCallable TdaiClient::ModifyAgentInstanceParametersCallable(const ModifyAgentInstanceParametersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAgentInstanceParametersOutcome()>>(
        [this, request]()
        {
            return this->ModifyAgentInstanceParameters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::ModifyChatTitleOutcome TdaiClient::ModifyChatTitle(const ModifyChatTitleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyChatTitle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyChatTitleResponse rsp = ModifyChatTitleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyChatTitleOutcome(rsp);
        else
            return ModifyChatTitleOutcome(o.GetError());
    }
    else
    {
        return ModifyChatTitleOutcome(outcome.GetError());
    }
}

void TdaiClient::ModifyChatTitleAsync(const ModifyChatTitleRequest& request, const ModifyChatTitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyChatTitle(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::ModifyChatTitleOutcomeCallable TdaiClient::ModifyChatTitleCallable(const ModifyChatTitleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyChatTitleOutcome()>>(
        [this, request]()
        {
            return this->ModifyChatTitle(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::PauseAgentWorkOutcome TdaiClient::PauseAgentWork(const PauseAgentWorkRequest &request)
{
    auto outcome = MakeRequest(request, "PauseAgentWork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseAgentWorkResponse rsp = PauseAgentWorkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseAgentWorkOutcome(rsp);
        else
            return PauseAgentWorkOutcome(o.GetError());
    }
    else
    {
        return PauseAgentWorkOutcome(outcome.GetError());
    }
}

void TdaiClient::PauseAgentWorkAsync(const PauseAgentWorkRequest& request, const PauseAgentWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PauseAgentWork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::PauseAgentWorkOutcomeCallable TdaiClient::PauseAgentWorkCallable(const PauseAgentWorkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PauseAgentWorkOutcome()>>(
        [this, request]()
        {
            return this->PauseAgentWork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::RecoverAgentInstanceOutcome TdaiClient::RecoverAgentInstance(const RecoverAgentInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverAgentInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverAgentInstanceResponse rsp = RecoverAgentInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverAgentInstanceOutcome(rsp);
        else
            return RecoverAgentInstanceOutcome(o.GetError());
    }
    else
    {
        return RecoverAgentInstanceOutcome(outcome.GetError());
    }
}

void TdaiClient::RecoverAgentInstanceAsync(const RecoverAgentInstanceRequest& request, const RecoverAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverAgentInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::RecoverAgentInstanceOutcomeCallable TdaiClient::RecoverAgentInstanceCallable(const RecoverAgentInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverAgentInstanceOutcome()>>(
        [this, request]()
        {
            return this->RecoverAgentInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::RemoveChatOutcome TdaiClient::RemoveChat(const RemoveChatRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveChat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveChatResponse rsp = RemoveChatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveChatOutcome(rsp);
        else
            return RemoveChatOutcome(o.GetError());
    }
    else
    {
        return RemoveChatOutcome(outcome.GetError());
    }
}

void TdaiClient::RemoveChatAsync(const RemoveChatRequest& request, const RemoveChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveChat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::RemoveChatOutcomeCallable TdaiClient::RemoveChatCallable(const RemoveChatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveChatOutcome()>>(
        [this, request]()
        {
            return this->RemoveChat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdaiClient::TerminateAgentInstanceOutcome TdaiClient::TerminateAgentInstance(const TerminateAgentInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateAgentInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateAgentInstanceResponse rsp = TerminateAgentInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateAgentInstanceOutcome(rsp);
        else
            return TerminateAgentInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateAgentInstanceOutcome(outcome.GetError());
    }
}

void TdaiClient::TerminateAgentInstanceAsync(const TerminateAgentInstanceRequest& request, const TerminateAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateAgentInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdaiClient::TerminateAgentInstanceOutcomeCallable TdaiClient::TerminateAgentInstanceCallable(const TerminateAgentInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateAgentInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateAgentInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


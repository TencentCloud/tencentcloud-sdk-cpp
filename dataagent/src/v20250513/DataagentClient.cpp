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

#include <tencentcloud/dataagent/v20250513/DataagentClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dataagent::V20250513;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-05-13";
    const string ENDPOINT = "dataagent.tencentcloudapi.com";
}

DataagentClient::DataagentClient(const Credential &credential, const string &region) :
    DataagentClient(credential, region, ClientProfile())
{
}

DataagentClient::DataagentClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DataagentClient::AddChunkOutcome DataagentClient::AddChunk(const AddChunkRequest &request)
{
    auto outcome = MakeRequest(request, "AddChunk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddChunkResponse rsp = AddChunkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddChunkOutcome(rsp);
        else
            return AddChunkOutcome(o.GetError());
    }
    else
    {
        return AddChunkOutcome(outcome.GetError());
    }
}

void DataagentClient::AddChunkAsync(const AddChunkRequest& request, const AddChunkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddChunk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::AddChunkOutcomeCallable DataagentClient::AddChunkCallable(const AddChunkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddChunkOutcome()>>(
        [this, request]()
        {
            return this->AddChunk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DataagentClient::ChatAIOutcome DataagentClient::ChatAI(const ChatAIRequest &request)
{
    auto outcome = MakeRequest(request, "ChatAI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChatAIResponse rsp = ChatAIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChatAIOutcome(rsp);
        else
            return ChatAIOutcome(o.GetError());
    }
    else
    {
        return ChatAIOutcome(outcome.GetError());
    }
}

void DataagentClient::ChatAIAsync(const ChatAIRequest& request, const ChatAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChatAI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::ChatAIOutcomeCallable DataagentClient::ChatAICallable(const ChatAIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChatAIOutcome()>>(
        [this, request]()
        {
            return this->ChatAI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DataagentClient::CreateDataAgentSessionOutcome DataagentClient::CreateDataAgentSession(const CreateDataAgentSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataAgentSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataAgentSessionResponse rsp = CreateDataAgentSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataAgentSessionOutcome(rsp);
        else
            return CreateDataAgentSessionOutcome(o.GetError());
    }
    else
    {
        return CreateDataAgentSessionOutcome(outcome.GetError());
    }
}

void DataagentClient::CreateDataAgentSessionAsync(const CreateDataAgentSessionRequest& request, const CreateDataAgentSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataAgentSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::CreateDataAgentSessionOutcomeCallable DataagentClient::CreateDataAgentSessionCallable(const CreateDataAgentSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataAgentSessionOutcome()>>(
        [this, request]()
        {
            return this->CreateDataAgentSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DataagentClient::DeleteChunkOutcome DataagentClient::DeleteChunk(const DeleteChunkRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteChunk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteChunkResponse rsp = DeleteChunkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteChunkOutcome(rsp);
        else
            return DeleteChunkOutcome(o.GetError());
    }
    else
    {
        return DeleteChunkOutcome(outcome.GetError());
    }
}

void DataagentClient::DeleteChunkAsync(const DeleteChunkRequest& request, const DeleteChunkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteChunk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::DeleteChunkOutcomeCallable DataagentClient::DeleteChunkCallable(const DeleteChunkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteChunkOutcome()>>(
        [this, request]()
        {
            return this->DeleteChunk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DataagentClient::DeleteDataAgentSessionOutcome DataagentClient::DeleteDataAgentSession(const DeleteDataAgentSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataAgentSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataAgentSessionResponse rsp = DeleteDataAgentSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataAgentSessionOutcome(rsp);
        else
            return DeleteDataAgentSessionOutcome(o.GetError());
    }
    else
    {
        return DeleteDataAgentSessionOutcome(outcome.GetError());
    }
}

void DataagentClient::DeleteDataAgentSessionAsync(const DeleteDataAgentSessionRequest& request, const DeleteDataAgentSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDataAgentSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::DeleteDataAgentSessionOutcomeCallable DataagentClient::DeleteDataAgentSessionCallable(const DeleteDataAgentSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDataAgentSessionOutcome()>>(
        [this, request]()
        {
            return this->DeleteDataAgentSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DataagentClient::GetKnowledgeBaseListOutcome DataagentClient::GetKnowledgeBaseList(const GetKnowledgeBaseListRequest &request)
{
    auto outcome = MakeRequest(request, "GetKnowledgeBaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetKnowledgeBaseListResponse rsp = GetKnowledgeBaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetKnowledgeBaseListOutcome(rsp);
        else
            return GetKnowledgeBaseListOutcome(o.GetError());
    }
    else
    {
        return GetKnowledgeBaseListOutcome(outcome.GetError());
    }
}

void DataagentClient::GetKnowledgeBaseListAsync(const GetKnowledgeBaseListRequest& request, const GetKnowledgeBaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetKnowledgeBaseList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::GetKnowledgeBaseListOutcomeCallable DataagentClient::GetKnowledgeBaseListCallable(const GetKnowledgeBaseListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetKnowledgeBaseListOutcome()>>(
        [this, request]()
        {
            return this->GetKnowledgeBaseList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DataagentClient::GetSessionDetailsOutcome DataagentClient::GetSessionDetails(const GetSessionDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "GetSessionDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSessionDetailsResponse rsp = GetSessionDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSessionDetailsOutcome(rsp);
        else
            return GetSessionDetailsOutcome(o.GetError());
    }
    else
    {
        return GetSessionDetailsOutcome(outcome.GetError());
    }
}

void DataagentClient::GetSessionDetailsAsync(const GetSessionDetailsRequest& request, const GetSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSessionDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::GetSessionDetailsOutcomeCallable DataagentClient::GetSessionDetailsCallable(const GetSessionDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSessionDetailsOutcome()>>(
        [this, request]()
        {
            return this->GetSessionDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DataagentClient::ModifyChunkOutcome DataagentClient::ModifyChunk(const ModifyChunkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyChunk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyChunkResponse rsp = ModifyChunkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyChunkOutcome(rsp);
        else
            return ModifyChunkOutcome(o.GetError());
    }
    else
    {
        return ModifyChunkOutcome(outcome.GetError());
    }
}

void DataagentClient::ModifyChunkAsync(const ModifyChunkRequest& request, const ModifyChunkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyChunk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::ModifyChunkOutcomeCallable DataagentClient::ModifyChunkCallable(const ModifyChunkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyChunkOutcome()>>(
        [this, request]()
        {
            return this->ModifyChunk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DataagentClient::ModifyKnowledgeBaseOutcome DataagentClient::ModifyKnowledgeBase(const ModifyKnowledgeBaseRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyKnowledgeBase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyKnowledgeBaseResponse rsp = ModifyKnowledgeBaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyKnowledgeBaseOutcome(rsp);
        else
            return ModifyKnowledgeBaseOutcome(o.GetError());
    }
    else
    {
        return ModifyKnowledgeBaseOutcome(outcome.GetError());
    }
}

void DataagentClient::ModifyKnowledgeBaseAsync(const ModifyKnowledgeBaseRequest& request, const ModifyKnowledgeBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyKnowledgeBase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::ModifyKnowledgeBaseOutcomeCallable DataagentClient::ModifyKnowledgeBaseCallable(const ModifyKnowledgeBaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyKnowledgeBaseOutcome()>>(
        [this, request]()
        {
            return this->ModifyKnowledgeBase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DataagentClient::QueryChunkListOutcome DataagentClient::QueryChunkList(const QueryChunkListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChunkList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChunkListResponse rsp = QueryChunkListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChunkListOutcome(rsp);
        else
            return QueryChunkListOutcome(o.GetError());
    }
    else
    {
        return QueryChunkListOutcome(outcome.GetError());
    }
}

void DataagentClient::QueryChunkListAsync(const QueryChunkListRequest& request, const QueryChunkListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryChunkList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::QueryChunkListOutcomeCallable DataagentClient::QueryChunkListCallable(const QueryChunkListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryChunkListOutcome()>>(
        [this, request]()
        {
            return this->QueryChunkList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DataagentClient::StopChatAIOutcome DataagentClient::StopChatAI(const StopChatAIRequest &request)
{
    auto outcome = MakeRequest(request, "StopChatAI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopChatAIResponse rsp = StopChatAIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopChatAIOutcome(rsp);
        else
            return StopChatAIOutcome(o.GetError());
    }
    else
    {
        return StopChatAIOutcome(outcome.GetError());
    }
}

void DataagentClient::StopChatAIAsync(const StopChatAIRequest& request, const StopChatAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopChatAI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DataagentClient::StopChatAIOutcomeCallable DataagentClient::StopChatAICallable(const StopChatAIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopChatAIOutcome()>>(
        [this, request]()
        {
            return this->StopChatAI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


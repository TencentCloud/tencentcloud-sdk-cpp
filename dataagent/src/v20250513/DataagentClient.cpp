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
    using Req = const AddChunkRequest&;
    using Resp = AddChunkResponse;

    DoRequestAsync<Req, Resp>(
        "AddChunk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::AddChunkOutcomeCallable DataagentClient::AddChunkCallable(const AddChunkRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddChunkOutcome>>();
    AddChunkAsync(
    request,
    [prom](
        const DataagentClient*,
        const AddChunkRequest&,
        AddChunkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ChatAIRequest&;
    using Resp = ChatAIResponse;

    DoRequestAsync<Req, Resp>(
        "ChatAI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::ChatAIOutcomeCallable DataagentClient::ChatAICallable(const ChatAIRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChatAIOutcome>>();
    ChatAIAsync(
    request,
    [prom](
        const DataagentClient*,
        const ChatAIRequest&,
        ChatAIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDataAgentSessionRequest&;
    using Resp = CreateDataAgentSessionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataAgentSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::CreateDataAgentSessionOutcomeCallable DataagentClient::CreateDataAgentSessionCallable(const CreateDataAgentSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataAgentSessionOutcome>>();
    CreateDataAgentSessionAsync(
    request,
    [prom](
        const DataagentClient*,
        const CreateDataAgentSessionRequest&,
        CreateDataAgentSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteChunkRequest&;
    using Resp = DeleteChunkResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteChunk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::DeleteChunkOutcomeCallable DataagentClient::DeleteChunkCallable(const DeleteChunkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteChunkOutcome>>();
    DeleteChunkAsync(
    request,
    [prom](
        const DataagentClient*,
        const DeleteChunkRequest&,
        DeleteChunkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDataAgentSessionRequest&;
    using Resp = DeleteDataAgentSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataAgentSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::DeleteDataAgentSessionOutcomeCallable DataagentClient::DeleteDataAgentSessionCallable(const DeleteDataAgentSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDataAgentSessionOutcome>>();
    DeleteDataAgentSessionAsync(
    request,
    [prom](
        const DataagentClient*,
        const DeleteDataAgentSessionRequest&,
        DeleteDataAgentSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DataagentClient::GetJobsByKnowledgeBaseIdOutcome DataagentClient::GetJobsByKnowledgeBaseId(const GetJobsByKnowledgeBaseIdRequest &request)
{
    auto outcome = MakeRequest(request, "GetJobsByKnowledgeBaseId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetJobsByKnowledgeBaseIdResponse rsp = GetJobsByKnowledgeBaseIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetJobsByKnowledgeBaseIdOutcome(rsp);
        else
            return GetJobsByKnowledgeBaseIdOutcome(o.GetError());
    }
    else
    {
        return GetJobsByKnowledgeBaseIdOutcome(outcome.GetError());
    }
}

void DataagentClient::GetJobsByKnowledgeBaseIdAsync(const GetJobsByKnowledgeBaseIdRequest& request, const GetJobsByKnowledgeBaseIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetJobsByKnowledgeBaseIdRequest&;
    using Resp = GetJobsByKnowledgeBaseIdResponse;

    DoRequestAsync<Req, Resp>(
        "GetJobsByKnowledgeBaseId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::GetJobsByKnowledgeBaseIdOutcomeCallable DataagentClient::GetJobsByKnowledgeBaseIdCallable(const GetJobsByKnowledgeBaseIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetJobsByKnowledgeBaseIdOutcome>>();
    GetJobsByKnowledgeBaseIdAsync(
    request,
    [prom](
        const DataagentClient*,
        const GetJobsByKnowledgeBaseIdRequest&,
        GetJobsByKnowledgeBaseIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DataagentClient::GetKnowledgeBaseFileListOutcome DataagentClient::GetKnowledgeBaseFileList(const GetKnowledgeBaseFileListRequest &request)
{
    auto outcome = MakeRequest(request, "GetKnowledgeBaseFileList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetKnowledgeBaseFileListResponse rsp = GetKnowledgeBaseFileListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetKnowledgeBaseFileListOutcome(rsp);
        else
            return GetKnowledgeBaseFileListOutcome(o.GetError());
    }
    else
    {
        return GetKnowledgeBaseFileListOutcome(outcome.GetError());
    }
}

void DataagentClient::GetKnowledgeBaseFileListAsync(const GetKnowledgeBaseFileListRequest& request, const GetKnowledgeBaseFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetKnowledgeBaseFileListRequest&;
    using Resp = GetKnowledgeBaseFileListResponse;

    DoRequestAsync<Req, Resp>(
        "GetKnowledgeBaseFileList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::GetKnowledgeBaseFileListOutcomeCallable DataagentClient::GetKnowledgeBaseFileListCallable(const GetKnowledgeBaseFileListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetKnowledgeBaseFileListOutcome>>();
    GetKnowledgeBaseFileListAsync(
    request,
    [prom](
        const DataagentClient*,
        const GetKnowledgeBaseFileListRequest&,
        GetKnowledgeBaseFileListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetKnowledgeBaseListRequest&;
    using Resp = GetKnowledgeBaseListResponse;

    DoRequestAsync<Req, Resp>(
        "GetKnowledgeBaseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::GetKnowledgeBaseListOutcomeCallable DataagentClient::GetKnowledgeBaseListCallable(const GetKnowledgeBaseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetKnowledgeBaseListOutcome>>();
    GetKnowledgeBaseListAsync(
    request,
    [prom](
        const DataagentClient*,
        const GetKnowledgeBaseListRequest&,
        GetKnowledgeBaseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetSessionDetailsRequest&;
    using Resp = GetSessionDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "GetSessionDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::GetSessionDetailsOutcomeCallable DataagentClient::GetSessionDetailsCallable(const GetSessionDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSessionDetailsOutcome>>();
    GetSessionDetailsAsync(
    request,
    [prom](
        const DataagentClient*,
        const GetSessionDetailsRequest&,
        GetSessionDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DataagentClient::GetUploadJobDetailsOutcome DataagentClient::GetUploadJobDetails(const GetUploadJobDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "GetUploadJobDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUploadJobDetailsResponse rsp = GetUploadJobDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUploadJobDetailsOutcome(rsp);
        else
            return GetUploadJobDetailsOutcome(o.GetError());
    }
    else
    {
        return GetUploadJobDetailsOutcome(outcome.GetError());
    }
}

void DataagentClient::GetUploadJobDetailsAsync(const GetUploadJobDetailsRequest& request, const GetUploadJobDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUploadJobDetailsRequest&;
    using Resp = GetUploadJobDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "GetUploadJobDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::GetUploadJobDetailsOutcomeCallable DataagentClient::GetUploadJobDetailsCallable(const GetUploadJobDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUploadJobDetailsOutcome>>();
    GetUploadJobDetailsAsync(
    request,
    [prom](
        const DataagentClient*,
        const GetUploadJobDetailsRequest&,
        GetUploadJobDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyChunkRequest&;
    using Resp = ModifyChunkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyChunk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::ModifyChunkOutcomeCallable DataagentClient::ModifyChunkCallable(const ModifyChunkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyChunkOutcome>>();
    ModifyChunkAsync(
    request,
    [prom](
        const DataagentClient*,
        const ModifyChunkRequest&,
        ModifyChunkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyKnowledgeBaseRequest&;
    using Resp = ModifyKnowledgeBaseResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyKnowledgeBase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::ModifyKnowledgeBaseOutcomeCallable DataagentClient::ModifyKnowledgeBaseCallable(const ModifyKnowledgeBaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyKnowledgeBaseOutcome>>();
    ModifyKnowledgeBaseAsync(
    request,
    [prom](
        const DataagentClient*,
        const ModifyKnowledgeBaseRequest&,
        ModifyKnowledgeBaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QueryChunkListRequest&;
    using Resp = QueryChunkListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryChunkList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::QueryChunkListOutcomeCallable DataagentClient::QueryChunkListCallable(const QueryChunkListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryChunkListOutcome>>();
    QueryChunkListAsync(
    request,
    [prom](
        const DataagentClient*,
        const QueryChunkListRequest&,
        QueryChunkListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StopChatAIRequest&;
    using Resp = StopChatAIResponse;

    DoRequestAsync<Req, Resp>(
        "StopChatAI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::StopChatAIOutcomeCallable DataagentClient::StopChatAICallable(const StopChatAIRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopChatAIOutcome>>();
    StopChatAIAsync(
    request,
    [prom](
        const DataagentClient*,
        const StopChatAIRequest&,
        StopChatAIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DataagentClient::UploadAndCommitFileOutcome DataagentClient::UploadAndCommitFile(const UploadAndCommitFileRequest &request)
{
    auto outcome = MakeRequest(request, "UploadAndCommitFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadAndCommitFileResponse rsp = UploadAndCommitFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadAndCommitFileOutcome(rsp);
        else
            return UploadAndCommitFileOutcome(o.GetError());
    }
    else
    {
        return UploadAndCommitFileOutcome(outcome.GetError());
    }
}

void DataagentClient::UploadAndCommitFileAsync(const UploadAndCommitFileRequest& request, const UploadAndCommitFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadAndCommitFileRequest&;
    using Resp = UploadAndCommitFileResponse;

    DoRequestAsync<Req, Resp>(
        "UploadAndCommitFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataagentClient::UploadAndCommitFileOutcomeCallable DataagentClient::UploadAndCommitFileCallable(const UploadAndCommitFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadAndCommitFileOutcome>>();
    UploadAndCommitFileAsync(
    request,
    [prom](
        const DataagentClient*,
        const UploadAndCommitFileRequest&,
        UploadAndCommitFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


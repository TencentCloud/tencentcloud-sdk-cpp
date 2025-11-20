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

#include <tencentcloud/hunyuan/v20230901/HunyuanClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Hunyuan::V20230901;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-09-01";
    const string ENDPOINT = "hunyuan.tencentcloudapi.com";
}

HunyuanClient::HunyuanClient(const Credential &credential, const string &region) :
    HunyuanClient(credential, region, ClientProfile())
{
}

HunyuanClient::HunyuanClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


HunyuanClient::ActivateServiceOutcome HunyuanClient::ActivateService(const ActivateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateServiceResponse rsp = ActivateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateServiceOutcome(rsp);
        else
            return ActivateServiceOutcome(o.GetError());
    }
    else
    {
        return ActivateServiceOutcome(outcome.GetError());
    }
}

void HunyuanClient::ActivateServiceAsync(const ActivateServiceRequest& request, const ActivateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ActivateServiceRequest&;
    using Resp = ActivateServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ActivateService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::ActivateServiceOutcomeCallable HunyuanClient::ActivateServiceCallable(const ActivateServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActivateServiceOutcome>>();
    ActivateServiceAsync(
    request,
    [prom](
        const HunyuanClient*,
        const ActivateServiceRequest&,
        ActivateServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::ChatCompletionsOutcome HunyuanClient::ChatCompletions(const ChatCompletionsRequest &request)
{
    auto outcome = MakeRequest(request, "ChatCompletions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChatCompletionsResponse rsp = ChatCompletionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChatCompletionsOutcome(rsp);
        else
            return ChatCompletionsOutcome(o.GetError());
    }
    else
    {
        return ChatCompletionsOutcome(outcome.GetError());
    }
}

void HunyuanClient::ChatCompletionsAsync(const ChatCompletionsRequest& request, const ChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChatCompletionsRequest&;
    using Resp = ChatCompletionsResponse;

    DoRequestAsync<Req, Resp>(
        "ChatCompletions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::ChatCompletionsOutcomeCallable HunyuanClient::ChatCompletionsCallable(const ChatCompletionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChatCompletionsOutcome>>();
    ChatCompletionsAsync(
    request,
    [prom](
        const HunyuanClient*,
        const ChatCompletionsRequest&,
        ChatCompletionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::ChatTranslationsOutcome HunyuanClient::ChatTranslations(const ChatTranslationsRequest &request)
{
    auto outcome = MakeRequest(request, "ChatTranslations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChatTranslationsResponse rsp = ChatTranslationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChatTranslationsOutcome(rsp);
        else
            return ChatTranslationsOutcome(o.GetError());
    }
    else
    {
        return ChatTranslationsOutcome(outcome.GetError());
    }
}

void HunyuanClient::ChatTranslationsAsync(const ChatTranslationsRequest& request, const ChatTranslationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChatTranslationsRequest&;
    using Resp = ChatTranslationsResponse;

    DoRequestAsync<Req, Resp>(
        "ChatTranslations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::ChatTranslationsOutcomeCallable HunyuanClient::ChatTranslationsCallable(const ChatTranslationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChatTranslationsOutcome>>();
    ChatTranslationsAsync(
    request,
    [prom](
        const HunyuanClient*,
        const ChatTranslationsRequest&,
        ChatTranslationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::CreateThreadOutcome HunyuanClient::CreateThread(const CreateThreadRequest &request)
{
    auto outcome = MakeRequest(request, "CreateThread");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateThreadResponse rsp = CreateThreadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateThreadOutcome(rsp);
        else
            return CreateThreadOutcome(o.GetError());
    }
    else
    {
        return CreateThreadOutcome(outcome.GetError());
    }
}

void HunyuanClient::CreateThreadAsync(const CreateThreadRequest& request, const CreateThreadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateThreadRequest&;
    using Resp = CreateThreadResponse;

    DoRequestAsync<Req, Resp>(
        "CreateThread", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::CreateThreadOutcomeCallable HunyuanClient::CreateThreadCallable(const CreateThreadRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateThreadOutcome>>();
    CreateThreadAsync(
    request,
    [prom](
        const HunyuanClient*,
        const CreateThreadRequest&,
        CreateThreadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::FilesDeletionsOutcome HunyuanClient::FilesDeletions(const FilesDeletionsRequest &request)
{
    auto outcome = MakeRequest(request, "FilesDeletions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FilesDeletionsResponse rsp = FilesDeletionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FilesDeletionsOutcome(rsp);
        else
            return FilesDeletionsOutcome(o.GetError());
    }
    else
    {
        return FilesDeletionsOutcome(outcome.GetError());
    }
}

void HunyuanClient::FilesDeletionsAsync(const FilesDeletionsRequest& request, const FilesDeletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FilesDeletionsRequest&;
    using Resp = FilesDeletionsResponse;

    DoRequestAsync<Req, Resp>(
        "FilesDeletions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::FilesDeletionsOutcomeCallable HunyuanClient::FilesDeletionsCallable(const FilesDeletionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<FilesDeletionsOutcome>>();
    FilesDeletionsAsync(
    request,
    [prom](
        const HunyuanClient*,
        const FilesDeletionsRequest&,
        FilesDeletionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::FilesListOutcome HunyuanClient::FilesList(const FilesListRequest &request)
{
    auto outcome = MakeRequest(request, "FilesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FilesListResponse rsp = FilesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FilesListOutcome(rsp);
        else
            return FilesListOutcome(o.GetError());
    }
    else
    {
        return FilesListOutcome(outcome.GetError());
    }
}

void HunyuanClient::FilesListAsync(const FilesListRequest& request, const FilesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FilesListRequest&;
    using Resp = FilesListResponse;

    DoRequestAsync<Req, Resp>(
        "FilesList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::FilesListOutcomeCallable HunyuanClient::FilesListCallable(const FilesListRequest &request)
{
    const auto prom = std::make_shared<std::promise<FilesListOutcome>>();
    FilesListAsync(
    request,
    [prom](
        const HunyuanClient*,
        const FilesListRequest&,
        FilesListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::FilesUploadsOutcome HunyuanClient::FilesUploads(const FilesUploadsRequest &request)
{
    auto outcome = MakeRequest(request, "FilesUploads");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FilesUploadsResponse rsp = FilesUploadsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FilesUploadsOutcome(rsp);
        else
            return FilesUploadsOutcome(o.GetError());
    }
    else
    {
        return FilesUploadsOutcome(outcome.GetError());
    }
}

void HunyuanClient::FilesUploadsAsync(const FilesUploadsRequest& request, const FilesUploadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FilesUploadsRequest&;
    using Resp = FilesUploadsResponse;

    DoRequestAsync<Req, Resp>(
        "FilesUploads", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::FilesUploadsOutcomeCallable HunyuanClient::FilesUploadsCallable(const FilesUploadsRequest &request)
{
    const auto prom = std::make_shared<std::promise<FilesUploadsOutcome>>();
    FilesUploadsAsync(
    request,
    [prom](
        const HunyuanClient*,
        const FilesUploadsRequest&,
        FilesUploadsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::GetEmbeddingOutcome HunyuanClient::GetEmbedding(const GetEmbeddingRequest &request)
{
    auto outcome = MakeRequest(request, "GetEmbedding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetEmbeddingResponse rsp = GetEmbeddingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetEmbeddingOutcome(rsp);
        else
            return GetEmbeddingOutcome(o.GetError());
    }
    else
    {
        return GetEmbeddingOutcome(outcome.GetError());
    }
}

void HunyuanClient::GetEmbeddingAsync(const GetEmbeddingRequest& request, const GetEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetEmbeddingRequest&;
    using Resp = GetEmbeddingResponse;

    DoRequestAsync<Req, Resp>(
        "GetEmbedding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::GetEmbeddingOutcomeCallable HunyuanClient::GetEmbeddingCallable(const GetEmbeddingRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetEmbeddingOutcome>>();
    GetEmbeddingAsync(
    request,
    [prom](
        const HunyuanClient*,
        const GetEmbeddingRequest&,
        GetEmbeddingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::GetThreadOutcome HunyuanClient::GetThread(const GetThreadRequest &request)
{
    auto outcome = MakeRequest(request, "GetThread");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetThreadResponse rsp = GetThreadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetThreadOutcome(rsp);
        else
            return GetThreadOutcome(o.GetError());
    }
    else
    {
        return GetThreadOutcome(outcome.GetError());
    }
}

void HunyuanClient::GetThreadAsync(const GetThreadRequest& request, const GetThreadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetThreadRequest&;
    using Resp = GetThreadResponse;

    DoRequestAsync<Req, Resp>(
        "GetThread", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::GetThreadOutcomeCallable HunyuanClient::GetThreadCallable(const GetThreadRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetThreadOutcome>>();
    GetThreadAsync(
    request,
    [prom](
        const HunyuanClient*,
        const GetThreadRequest&,
        GetThreadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::GetThreadMessageOutcome HunyuanClient::GetThreadMessage(const GetThreadMessageRequest &request)
{
    auto outcome = MakeRequest(request, "GetThreadMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetThreadMessageResponse rsp = GetThreadMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetThreadMessageOutcome(rsp);
        else
            return GetThreadMessageOutcome(o.GetError());
    }
    else
    {
        return GetThreadMessageOutcome(outcome.GetError());
    }
}

void HunyuanClient::GetThreadMessageAsync(const GetThreadMessageRequest& request, const GetThreadMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetThreadMessageRequest&;
    using Resp = GetThreadMessageResponse;

    DoRequestAsync<Req, Resp>(
        "GetThreadMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::GetThreadMessageOutcomeCallable HunyuanClient::GetThreadMessageCallable(const GetThreadMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetThreadMessageOutcome>>();
    GetThreadMessageAsync(
    request,
    [prom](
        const HunyuanClient*,
        const GetThreadMessageRequest&,
        GetThreadMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::GetThreadMessageListOutcome HunyuanClient::GetThreadMessageList(const GetThreadMessageListRequest &request)
{
    auto outcome = MakeRequest(request, "GetThreadMessageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetThreadMessageListResponse rsp = GetThreadMessageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetThreadMessageListOutcome(rsp);
        else
            return GetThreadMessageListOutcome(o.GetError());
    }
    else
    {
        return GetThreadMessageListOutcome(outcome.GetError());
    }
}

void HunyuanClient::GetThreadMessageListAsync(const GetThreadMessageListRequest& request, const GetThreadMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetThreadMessageListRequest&;
    using Resp = GetThreadMessageListResponse;

    DoRequestAsync<Req, Resp>(
        "GetThreadMessageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::GetThreadMessageListOutcomeCallable HunyuanClient::GetThreadMessageListCallable(const GetThreadMessageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetThreadMessageListOutcome>>();
    GetThreadMessageListAsync(
    request,
    [prom](
        const HunyuanClient*,
        const GetThreadMessageListRequest&,
        GetThreadMessageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::GetTokenCountOutcome HunyuanClient::GetTokenCount(const GetTokenCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetTokenCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTokenCountResponse rsp = GetTokenCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTokenCountOutcome(rsp);
        else
            return GetTokenCountOutcome(o.GetError());
    }
    else
    {
        return GetTokenCountOutcome(outcome.GetError());
    }
}

void HunyuanClient::GetTokenCountAsync(const GetTokenCountRequest& request, const GetTokenCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTokenCountRequest&;
    using Resp = GetTokenCountResponse;

    DoRequestAsync<Req, Resp>(
        "GetTokenCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::GetTokenCountOutcomeCallable HunyuanClient::GetTokenCountCallable(const GetTokenCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTokenCountOutcome>>();
    GetTokenCountAsync(
    request,
    [prom](
        const HunyuanClient*,
        const GetTokenCountRequest&,
        GetTokenCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::GroupChatCompletionsOutcome HunyuanClient::GroupChatCompletions(const GroupChatCompletionsRequest &request)
{
    auto outcome = MakeRequest(request, "GroupChatCompletions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GroupChatCompletionsResponse rsp = GroupChatCompletionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GroupChatCompletionsOutcome(rsp);
        else
            return GroupChatCompletionsOutcome(o.GetError());
    }
    else
    {
        return GroupChatCompletionsOutcome(outcome.GetError());
    }
}

void HunyuanClient::GroupChatCompletionsAsync(const GroupChatCompletionsRequest& request, const GroupChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GroupChatCompletionsRequest&;
    using Resp = GroupChatCompletionsResponse;

    DoRequestAsync<Req, Resp>(
        "GroupChatCompletions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::GroupChatCompletionsOutcomeCallable HunyuanClient::GroupChatCompletionsCallable(const GroupChatCompletionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GroupChatCompletionsOutcome>>();
    GroupChatCompletionsAsync(
    request,
    [prom](
        const HunyuanClient*,
        const GroupChatCompletionsRequest&,
        GroupChatCompletionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::ImageQuestionOutcome HunyuanClient::ImageQuestion(const ImageQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "ImageQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageQuestionResponse rsp = ImageQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageQuestionOutcome(rsp);
        else
            return ImageQuestionOutcome(o.GetError());
    }
    else
    {
        return ImageQuestionOutcome(outcome.GetError());
    }
}

void HunyuanClient::ImageQuestionAsync(const ImageQuestionRequest& request, const ImageQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImageQuestionRequest&;
    using Resp = ImageQuestionResponse;

    DoRequestAsync<Req, Resp>(
        "ImageQuestion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::ImageQuestionOutcomeCallable HunyuanClient::ImageQuestionCallable(const ImageQuestionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageQuestionOutcome>>();
    ImageQuestionAsync(
    request,
    [prom](
        const HunyuanClient*,
        const ImageQuestionRequest&,
        ImageQuestionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::QueryHunyuanImageChatJobOutcome HunyuanClient::QueryHunyuanImageChatJob(const QueryHunyuanImageChatJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuanImageChatJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuanImageChatJobResponse rsp = QueryHunyuanImageChatJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuanImageChatJobOutcome(rsp);
        else
            return QueryHunyuanImageChatJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuanImageChatJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::QueryHunyuanImageChatJobAsync(const QueryHunyuanImageChatJobRequest& request, const QueryHunyuanImageChatJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryHunyuanImageChatJobRequest&;
    using Resp = QueryHunyuanImageChatJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryHunyuanImageChatJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::QueryHunyuanImageChatJobOutcomeCallable HunyuanClient::QueryHunyuanImageChatJobCallable(const QueryHunyuanImageChatJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryHunyuanImageChatJobOutcome>>();
    QueryHunyuanImageChatJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const QueryHunyuanImageChatJobRequest&,
        QueryHunyuanImageChatJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::QueryHunyuanImageJobOutcome HunyuanClient::QueryHunyuanImageJob(const QueryHunyuanImageJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuanImageJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuanImageJobResponse rsp = QueryHunyuanImageJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuanImageJobOutcome(rsp);
        else
            return QueryHunyuanImageJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuanImageJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::QueryHunyuanImageJobAsync(const QueryHunyuanImageJobRequest& request, const QueryHunyuanImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryHunyuanImageJobRequest&;
    using Resp = QueryHunyuanImageJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryHunyuanImageJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::QueryHunyuanImageJobOutcomeCallable HunyuanClient::QueryHunyuanImageJobCallable(const QueryHunyuanImageJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryHunyuanImageJobOutcome>>();
    QueryHunyuanImageJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const QueryHunyuanImageJobRequest&,
        QueryHunyuanImageJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::RunThreadOutcome HunyuanClient::RunThread(const RunThreadRequest &request)
{
    auto outcome = MakeRequest(request, "RunThread");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunThreadResponse rsp = RunThreadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunThreadOutcome(rsp);
        else
            return RunThreadOutcome(o.GetError());
    }
    else
    {
        return RunThreadOutcome(outcome.GetError());
    }
}

void HunyuanClient::RunThreadAsync(const RunThreadRequest& request, const RunThreadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunThreadRequest&;
    using Resp = RunThreadResponse;

    DoRequestAsync<Req, Resp>(
        "RunThread", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::RunThreadOutcomeCallable HunyuanClient::RunThreadCallable(const RunThreadRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunThreadOutcome>>();
    RunThreadAsync(
    request,
    [prom](
        const HunyuanClient*,
        const RunThreadRequest&,
        RunThreadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::SetPayModeOutcome HunyuanClient::SetPayMode(const SetPayModeRequest &request)
{
    auto outcome = MakeRequest(request, "SetPayMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetPayModeResponse rsp = SetPayModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetPayModeOutcome(rsp);
        else
            return SetPayModeOutcome(o.GetError());
    }
    else
    {
        return SetPayModeOutcome(outcome.GetError());
    }
}

void HunyuanClient::SetPayModeAsync(const SetPayModeRequest& request, const SetPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetPayModeRequest&;
    using Resp = SetPayModeResponse;

    DoRequestAsync<Req, Resp>(
        "SetPayMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::SetPayModeOutcomeCallable HunyuanClient::SetPayModeCallable(const SetPayModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetPayModeOutcome>>();
    SetPayModeAsync(
    request,
    [prom](
        const HunyuanClient*,
        const SetPayModeRequest&,
        SetPayModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::SubmitHunyuanImageChatJobOutcome HunyuanClient::SubmitHunyuanImageChatJob(const SubmitHunyuanImageChatJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanImageChatJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanImageChatJobResponse rsp = SubmitHunyuanImageChatJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanImageChatJobOutcome(rsp);
        else
            return SubmitHunyuanImageChatJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanImageChatJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::SubmitHunyuanImageChatJobAsync(const SubmitHunyuanImageChatJobRequest& request, const SubmitHunyuanImageChatJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHunyuanImageChatJobRequest&;
    using Resp = SubmitHunyuanImageChatJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHunyuanImageChatJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::SubmitHunyuanImageChatJobOutcomeCallable HunyuanClient::SubmitHunyuanImageChatJobCallable(const SubmitHunyuanImageChatJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHunyuanImageChatJobOutcome>>();
    SubmitHunyuanImageChatJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const SubmitHunyuanImageChatJobRequest&,
        SubmitHunyuanImageChatJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::SubmitHunyuanImageJobOutcome HunyuanClient::SubmitHunyuanImageJob(const SubmitHunyuanImageJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanImageJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanImageJobResponse rsp = SubmitHunyuanImageJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanImageJobOutcome(rsp);
        else
            return SubmitHunyuanImageJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanImageJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::SubmitHunyuanImageJobAsync(const SubmitHunyuanImageJobRequest& request, const SubmitHunyuanImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHunyuanImageJobRequest&;
    using Resp = SubmitHunyuanImageJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHunyuanImageJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::SubmitHunyuanImageJobOutcomeCallable HunyuanClient::SubmitHunyuanImageJobCallable(const SubmitHunyuanImageJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHunyuanImageJobOutcome>>();
    SubmitHunyuanImageJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const SubmitHunyuanImageJobRequest&,
        SubmitHunyuanImageJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::TextToImageLiteOutcome HunyuanClient::TextToImageLite(const TextToImageLiteRequest &request)
{
    auto outcome = MakeRequest(request, "TextToImageLite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextToImageLiteResponse rsp = TextToImageLiteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextToImageLiteOutcome(rsp);
        else
            return TextToImageLiteOutcome(o.GetError());
    }
    else
    {
        return TextToImageLiteOutcome(outcome.GetError());
    }
}

void HunyuanClient::TextToImageLiteAsync(const TextToImageLiteRequest& request, const TextToImageLiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextToImageLiteRequest&;
    using Resp = TextToImageLiteResponse;

    DoRequestAsync<Req, Resp>(
        "TextToImageLite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::TextToImageLiteOutcomeCallable HunyuanClient::TextToImageLiteCallable(const TextToImageLiteRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextToImageLiteOutcome>>();
    TextToImageLiteAsync(
    request,
    [prom](
        const HunyuanClient*,
        const TextToImageLiteRequest&,
        TextToImageLiteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


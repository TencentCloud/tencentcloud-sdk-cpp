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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ActivateService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::ActivateServiceOutcomeCallable HunyuanClient::ActivateServiceCallable(const ActivateServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ActivateServiceOutcome()>>(
        [this, request]()
        {
            return this->ActivateService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChatCompletions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::ChatCompletionsOutcomeCallable HunyuanClient::ChatCompletionsCallable(const ChatCompletionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChatCompletionsOutcome()>>(
        [this, request]()
        {
            return this->ChatCompletions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChatTranslations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::ChatTranslationsOutcomeCallable HunyuanClient::ChatTranslationsCallable(const ChatTranslationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChatTranslationsOutcome()>>(
        [this, request]()
        {
            return this->ChatTranslations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateThread(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::CreateThreadOutcomeCallable HunyuanClient::CreateThreadCallable(const CreateThreadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateThreadOutcome()>>(
        [this, request]()
        {
            return this->CreateThread(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FilesDeletions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::FilesDeletionsOutcomeCallable HunyuanClient::FilesDeletionsCallable(const FilesDeletionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FilesDeletionsOutcome()>>(
        [this, request]()
        {
            return this->FilesDeletions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FilesList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::FilesListOutcomeCallable HunyuanClient::FilesListCallable(const FilesListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FilesListOutcome()>>(
        [this, request]()
        {
            return this->FilesList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FilesUploads(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::FilesUploadsOutcomeCallable HunyuanClient::FilesUploadsCallable(const FilesUploadsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FilesUploadsOutcome()>>(
        [this, request]()
        {
            return this->FilesUploads(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetEmbedding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::GetEmbeddingOutcomeCallable HunyuanClient::GetEmbeddingCallable(const GetEmbeddingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetEmbeddingOutcome()>>(
        [this, request]()
        {
            return this->GetEmbedding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetThread(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::GetThreadOutcomeCallable HunyuanClient::GetThreadCallable(const GetThreadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetThreadOutcome()>>(
        [this, request]()
        {
            return this->GetThread(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetThreadMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::GetThreadMessageOutcomeCallable HunyuanClient::GetThreadMessageCallable(const GetThreadMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetThreadMessageOutcome()>>(
        [this, request]()
        {
            return this->GetThreadMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetThreadMessageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::GetThreadMessageListOutcomeCallable HunyuanClient::GetThreadMessageListCallable(const GetThreadMessageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetThreadMessageListOutcome()>>(
        [this, request]()
        {
            return this->GetThreadMessageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTokenCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::GetTokenCountOutcomeCallable HunyuanClient::GetTokenCountCallable(const GetTokenCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTokenCountOutcome()>>(
        [this, request]()
        {
            return this->GetTokenCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GroupChatCompletions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::GroupChatCompletionsOutcomeCallable HunyuanClient::GroupChatCompletionsCallable(const GroupChatCompletionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GroupChatCompletionsOutcome()>>(
        [this, request]()
        {
            return this->GroupChatCompletions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageQuestion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::ImageQuestionOutcomeCallable HunyuanClient::ImageQuestionCallable(const ImageQuestionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageQuestionOutcome()>>(
        [this, request]()
        {
            return this->ImageQuestion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryHunyuanImageChatJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::QueryHunyuanImageChatJobOutcomeCallable HunyuanClient::QueryHunyuanImageChatJobCallable(const QueryHunyuanImageChatJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryHunyuanImageChatJobOutcome()>>(
        [this, request]()
        {
            return this->QueryHunyuanImageChatJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryHunyuanImageJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::QueryHunyuanImageJobOutcomeCallable HunyuanClient::QueryHunyuanImageJobCallable(const QueryHunyuanImageJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryHunyuanImageJobOutcome()>>(
        [this, request]()
        {
            return this->QueryHunyuanImageJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HunyuanClient::QueryHunyuanTo3DJobOutcome HunyuanClient::QueryHunyuanTo3DJob(const QueryHunyuanTo3DJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuanTo3DJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuanTo3DJobResponse rsp = QueryHunyuanTo3DJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuanTo3DJobOutcome(rsp);
        else
            return QueryHunyuanTo3DJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuanTo3DJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::QueryHunyuanTo3DJobAsync(const QueryHunyuanTo3DJobRequest& request, const QueryHunyuanTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryHunyuanTo3DJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::QueryHunyuanTo3DJobOutcomeCallable HunyuanClient::QueryHunyuanTo3DJobCallable(const QueryHunyuanTo3DJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryHunyuanTo3DJobOutcome()>>(
        [this, request]()
        {
            return this->QueryHunyuanTo3DJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunThread(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::RunThreadOutcomeCallable HunyuanClient::RunThreadCallable(const RunThreadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunThreadOutcome()>>(
        [this, request]()
        {
            return this->RunThread(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetPayMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::SetPayModeOutcomeCallable HunyuanClient::SetPayModeCallable(const SetPayModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetPayModeOutcome()>>(
        [this, request]()
        {
            return this->SetPayMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitHunyuanImageChatJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::SubmitHunyuanImageChatJobOutcomeCallable HunyuanClient::SubmitHunyuanImageChatJobCallable(const SubmitHunyuanImageChatJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitHunyuanImageChatJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitHunyuanImageChatJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitHunyuanImageJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::SubmitHunyuanImageJobOutcomeCallable HunyuanClient::SubmitHunyuanImageJobCallable(const SubmitHunyuanImageJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitHunyuanImageJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitHunyuanImageJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HunyuanClient::SubmitHunyuanTo3DJobOutcome HunyuanClient::SubmitHunyuanTo3DJob(const SubmitHunyuanTo3DJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanTo3DJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanTo3DJobResponse rsp = SubmitHunyuanTo3DJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanTo3DJobOutcome(rsp);
        else
            return SubmitHunyuanTo3DJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanTo3DJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::SubmitHunyuanTo3DJobAsync(const SubmitHunyuanTo3DJobRequest& request, const SubmitHunyuanTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitHunyuanTo3DJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::SubmitHunyuanTo3DJobOutcomeCallable HunyuanClient::SubmitHunyuanTo3DJobCallable(const SubmitHunyuanTo3DJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitHunyuanTo3DJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitHunyuanTo3DJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextToImageLite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::TextToImageLiteOutcomeCallable HunyuanClient::TextToImageLiteCallable(const TextToImageLiteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextToImageLiteOutcome()>>(
        [this, request]()
        {
            return this->TextToImageLite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


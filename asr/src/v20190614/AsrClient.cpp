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

#include <tencentcloud/asr/v20190614/AsrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Asr::V20190614;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-06-14";
    const string ENDPOINT = "asr.tencentcloudapi.com";
}

AsrClient::AsrClient(const Credential &credential, const string &region) :
    AsrClient(credential, region, ClientProfile())
{
}

AsrClient::AsrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AsrClient::CreateAsrVocabOutcome AsrClient::CreateAsrVocab(const CreateAsrVocabRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsrVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAsrVocabResponse rsp = CreateAsrVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAsrVocabOutcome(rsp);
        else
            return CreateAsrVocabOutcome(o.GetError());
    }
    else
    {
        return CreateAsrVocabOutcome(outcome.GetError());
    }
}

void AsrClient::CreateAsrVocabAsync(const CreateAsrVocabRequest& request, const CreateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAsrVocab(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::CreateAsrVocabOutcomeCallable AsrClient::CreateAsrVocabCallable(const CreateAsrVocabRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAsrVocabOutcome()>>(
        [this, request]()
        {
            return this->CreateAsrVocab(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::CreateRecTaskOutcome AsrClient::CreateRecTask(const CreateRecTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecTaskResponse rsp = CreateRecTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecTaskOutcome(rsp);
        else
            return CreateRecTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRecTaskOutcome(outcome.GetError());
    }
}

void AsrClient::CreateRecTaskAsync(const CreateRecTaskRequest& request, const CreateRecTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::CreateRecTaskOutcomeCallable AsrClient::CreateRecTaskCallable(const CreateRecTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRecTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::DeleteAsrVocabOutcome AsrClient::DeleteAsrVocab(const DeleteAsrVocabRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAsrVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAsrVocabResponse rsp = DeleteAsrVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAsrVocabOutcome(rsp);
        else
            return DeleteAsrVocabOutcome(o.GetError());
    }
    else
    {
        return DeleteAsrVocabOutcome(outcome.GetError());
    }
}

void AsrClient::DeleteAsrVocabAsync(const DeleteAsrVocabRequest& request, const DeleteAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAsrVocab(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::DeleteAsrVocabOutcomeCallable AsrClient::DeleteAsrVocabCallable(const DeleteAsrVocabRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAsrVocabOutcome()>>(
        [this, request]()
        {
            return this->DeleteAsrVocab(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::DescribeTaskStatusOutcome AsrClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void AsrClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::DescribeTaskStatusOutcomeCallable AsrClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::DownloadAsrVocabOutcome AsrClient::DownloadAsrVocab(const DownloadAsrVocabRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadAsrVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadAsrVocabResponse rsp = DownloadAsrVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadAsrVocabOutcome(rsp);
        else
            return DownloadAsrVocabOutcome(o.GetError());
    }
    else
    {
        return DownloadAsrVocabOutcome(outcome.GetError());
    }
}

void AsrClient::DownloadAsrVocabAsync(const DownloadAsrVocabRequest& request, const DownloadAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadAsrVocab(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::DownloadAsrVocabOutcomeCallable AsrClient::DownloadAsrVocabCallable(const DownloadAsrVocabRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadAsrVocabOutcome()>>(
        [this, request]()
        {
            return this->DownloadAsrVocab(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::GetAsrVocabOutcome AsrClient::GetAsrVocab(const GetAsrVocabRequest &request)
{
    auto outcome = MakeRequest(request, "GetAsrVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAsrVocabResponse rsp = GetAsrVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAsrVocabOutcome(rsp);
        else
            return GetAsrVocabOutcome(o.GetError());
    }
    else
    {
        return GetAsrVocabOutcome(outcome.GetError());
    }
}

void AsrClient::GetAsrVocabAsync(const GetAsrVocabRequest& request, const GetAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAsrVocab(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::GetAsrVocabOutcomeCallable AsrClient::GetAsrVocabCallable(const GetAsrVocabRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAsrVocabOutcome()>>(
        [this, request]()
        {
            return this->GetAsrVocab(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::GetAsrVocabListOutcome AsrClient::GetAsrVocabList(const GetAsrVocabListRequest &request)
{
    auto outcome = MakeRequest(request, "GetAsrVocabList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAsrVocabListResponse rsp = GetAsrVocabListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAsrVocabListOutcome(rsp);
        else
            return GetAsrVocabListOutcome(o.GetError());
    }
    else
    {
        return GetAsrVocabListOutcome(outcome.GetError());
    }
}

void AsrClient::GetAsrVocabListAsync(const GetAsrVocabListRequest& request, const GetAsrVocabListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAsrVocabList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::GetAsrVocabListOutcomeCallable AsrClient::GetAsrVocabListCallable(const GetAsrVocabListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAsrVocabListOutcome()>>(
        [this, request]()
        {
            return this->GetAsrVocabList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::GetCustomizationListOutcome AsrClient::GetCustomizationList(const GetCustomizationListRequest &request)
{
    auto outcome = MakeRequest(request, "GetCustomizationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCustomizationListResponse rsp = GetCustomizationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCustomizationListOutcome(rsp);
        else
            return GetCustomizationListOutcome(o.GetError());
    }
    else
    {
        return GetCustomizationListOutcome(outcome.GetError());
    }
}

void AsrClient::GetCustomizationListAsync(const GetCustomizationListRequest& request, const GetCustomizationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCustomizationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::GetCustomizationListOutcomeCallable AsrClient::GetCustomizationListCallable(const GetCustomizationListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCustomizationListOutcome()>>(
        [this, request]()
        {
            return this->GetCustomizationList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::SentenceRecognitionOutcome AsrClient::SentenceRecognition(const SentenceRecognitionRequest &request)
{
    auto outcome = MakeRequest(request, "SentenceRecognition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SentenceRecognitionResponse rsp = SentenceRecognitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SentenceRecognitionOutcome(rsp);
        else
            return SentenceRecognitionOutcome(o.GetError());
    }
    else
    {
        return SentenceRecognitionOutcome(outcome.GetError());
    }
}

void AsrClient::SentenceRecognitionAsync(const SentenceRecognitionRequest& request, const SentenceRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SentenceRecognition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::SentenceRecognitionOutcomeCallable AsrClient::SentenceRecognitionCallable(const SentenceRecognitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SentenceRecognitionOutcome()>>(
        [this, request]()
        {
            return this->SentenceRecognition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::SetVocabStateOutcome AsrClient::SetVocabState(const SetVocabStateRequest &request)
{
    auto outcome = MakeRequest(request, "SetVocabState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetVocabStateResponse rsp = SetVocabStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetVocabStateOutcome(rsp);
        else
            return SetVocabStateOutcome(o.GetError());
    }
    else
    {
        return SetVocabStateOutcome(outcome.GetError());
    }
}

void AsrClient::SetVocabStateAsync(const SetVocabStateRequest& request, const SetVocabStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetVocabState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::SetVocabStateOutcomeCallable AsrClient::SetVocabStateCallable(const SetVocabStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetVocabStateOutcome()>>(
        [this, request]()
        {
            return this->SetVocabState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::UpdateAsrVocabOutcome AsrClient::UpdateAsrVocab(const UpdateAsrVocabRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAsrVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAsrVocabResponse rsp = UpdateAsrVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAsrVocabOutcome(rsp);
        else
            return UpdateAsrVocabOutcome(o.GetError());
    }
    else
    {
        return UpdateAsrVocabOutcome(outcome.GetError());
    }
}

void AsrClient::UpdateAsrVocabAsync(const UpdateAsrVocabRequest& request, const UpdateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAsrVocab(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::UpdateAsrVocabOutcomeCallable AsrClient::UpdateAsrVocabCallable(const UpdateAsrVocabRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAsrVocabOutcome()>>(
        [this, request]()
        {
            return this->UpdateAsrVocab(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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


AsrClient::CloseAsyncRecognitionTaskOutcome AsrClient::CloseAsyncRecognitionTask(const CloseAsyncRecognitionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CloseAsyncRecognitionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseAsyncRecognitionTaskResponse rsp = CloseAsyncRecognitionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseAsyncRecognitionTaskOutcome(rsp);
        else
            return CloseAsyncRecognitionTaskOutcome(o.GetError());
    }
    else
    {
        return CloseAsyncRecognitionTaskOutcome(outcome.GetError());
    }
}

void AsrClient::CloseAsyncRecognitionTaskAsync(const CloseAsyncRecognitionTaskRequest& request, const CloseAsyncRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseAsyncRecognitionTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::CloseAsyncRecognitionTaskOutcomeCallable AsrClient::CloseAsyncRecognitionTaskCallable(const CloseAsyncRecognitionTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseAsyncRecognitionTaskOutcome()>>(
        [this, request]()
        {
            return this->CloseAsyncRecognitionTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::CreateAsrKeyWordLibOutcome AsrClient::CreateAsrKeyWordLib(const CreateAsrKeyWordLibRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsrKeyWordLib");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAsrKeyWordLibResponse rsp = CreateAsrKeyWordLibResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAsrKeyWordLibOutcome(rsp);
        else
            return CreateAsrKeyWordLibOutcome(o.GetError());
    }
    else
    {
        return CreateAsrKeyWordLibOutcome(outcome.GetError());
    }
}

void AsrClient::CreateAsrKeyWordLibAsync(const CreateAsrKeyWordLibRequest& request, const CreateAsrKeyWordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAsrKeyWordLib(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::CreateAsrKeyWordLibOutcomeCallable AsrClient::CreateAsrKeyWordLibCallable(const CreateAsrKeyWordLibRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAsrKeyWordLibOutcome()>>(
        [this, request]()
        {
            return this->CreateAsrKeyWordLib(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

AsrClient::CreateAsyncRecognitionTaskOutcome AsrClient::CreateAsyncRecognitionTask(const CreateAsyncRecognitionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsyncRecognitionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAsyncRecognitionTaskResponse rsp = CreateAsyncRecognitionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAsyncRecognitionTaskOutcome(rsp);
        else
            return CreateAsyncRecognitionTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAsyncRecognitionTaskOutcome(outcome.GetError());
    }
}

void AsrClient::CreateAsyncRecognitionTaskAsync(const CreateAsyncRecognitionTaskRequest& request, const CreateAsyncRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAsyncRecognitionTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::CreateAsyncRecognitionTaskOutcomeCallable AsrClient::CreateAsyncRecognitionTaskCallable(const CreateAsyncRecognitionTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAsyncRecognitionTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAsyncRecognitionTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::CreateCustomizationOutcome AsrClient::CreateCustomization(const CreateCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomizationResponse rsp = CreateCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomizationOutcome(rsp);
        else
            return CreateCustomizationOutcome(o.GetError());
    }
    else
    {
        return CreateCustomizationOutcome(outcome.GetError());
    }
}

void AsrClient::CreateCustomizationAsync(const CreateCustomizationRequest& request, const CreateCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::CreateCustomizationOutcomeCallable AsrClient::CreateCustomizationCallable(const CreateCustomizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomizationOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomization(request);
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

AsrClient::DeleteAsrKeyWordLibOutcome AsrClient::DeleteAsrKeyWordLib(const DeleteAsrKeyWordLibRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAsrKeyWordLib");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAsrKeyWordLibResponse rsp = DeleteAsrKeyWordLibResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAsrKeyWordLibOutcome(rsp);
        else
            return DeleteAsrKeyWordLibOutcome(o.GetError());
    }
    else
    {
        return DeleteAsrKeyWordLibOutcome(outcome.GetError());
    }
}

void AsrClient::DeleteAsrKeyWordLibAsync(const DeleteAsrKeyWordLibRequest& request, const DeleteAsrKeyWordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAsrKeyWordLib(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::DeleteAsrKeyWordLibOutcomeCallable AsrClient::DeleteAsrKeyWordLibCallable(const DeleteAsrKeyWordLibRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAsrKeyWordLibOutcome()>>(
        [this, request]()
        {
            return this->DeleteAsrKeyWordLib(request);
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

AsrClient::DeleteCustomizationOutcome AsrClient::DeleteCustomization(const DeleteCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomizationResponse rsp = DeleteCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomizationOutcome(rsp);
        else
            return DeleteCustomizationOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomizationOutcome(outcome.GetError());
    }
}

void AsrClient::DeleteCustomizationAsync(const DeleteCustomizationRequest& request, const DeleteCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::DeleteCustomizationOutcomeCallable AsrClient::DeleteCustomizationCallable(const DeleteCustomizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomizationOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::DescribeAsyncRecognitionTasksOutcome AsrClient::DescribeAsyncRecognitionTasks(const DescribeAsyncRecognitionTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncRecognitionTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncRecognitionTasksResponse rsp = DescribeAsyncRecognitionTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncRecognitionTasksOutcome(rsp);
        else
            return DescribeAsyncRecognitionTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncRecognitionTasksOutcome(outcome.GetError());
    }
}

void AsrClient::DescribeAsyncRecognitionTasksAsync(const DescribeAsyncRecognitionTasksRequest& request, const DescribeAsyncRecognitionTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsyncRecognitionTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::DescribeAsyncRecognitionTasksOutcomeCallable AsrClient::DescribeAsyncRecognitionTasksCallable(const DescribeAsyncRecognitionTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsyncRecognitionTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsyncRecognitionTasks(request);
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

AsrClient::DownloadCustomizationOutcome AsrClient::DownloadCustomization(const DownloadCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadCustomizationResponse rsp = DownloadCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadCustomizationOutcome(rsp);
        else
            return DownloadCustomizationOutcome(o.GetError());
    }
    else
    {
        return DownloadCustomizationOutcome(outcome.GetError());
    }
}

void AsrClient::DownloadCustomizationAsync(const DownloadCustomizationRequest& request, const DownloadCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadCustomization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::DownloadCustomizationOutcomeCallable AsrClient::DownloadCustomizationCallable(const DownloadCustomizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadCustomizationOutcome()>>(
        [this, request]()
        {
            return this->DownloadCustomization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::GetAsrKeyWordLibListOutcome AsrClient::GetAsrKeyWordLibList(const GetAsrKeyWordLibListRequest &request)
{
    auto outcome = MakeRequest(request, "GetAsrKeyWordLibList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAsrKeyWordLibListResponse rsp = GetAsrKeyWordLibListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAsrKeyWordLibListOutcome(rsp);
        else
            return GetAsrKeyWordLibListOutcome(o.GetError());
    }
    else
    {
        return GetAsrKeyWordLibListOutcome(outcome.GetError());
    }
}

void AsrClient::GetAsrKeyWordLibListAsync(const GetAsrKeyWordLibListRequest& request, const GetAsrKeyWordLibListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAsrKeyWordLibList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::GetAsrKeyWordLibListOutcomeCallable AsrClient::GetAsrKeyWordLibListCallable(const GetAsrKeyWordLibListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAsrKeyWordLibListOutcome()>>(
        [this, request]()
        {
            return this->GetAsrKeyWordLibList(request);
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

AsrClient::GetModelInfoOutcome AsrClient::GetModelInfo(const GetModelInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetModelInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetModelInfoResponse rsp = GetModelInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetModelInfoOutcome(rsp);
        else
            return GetModelInfoOutcome(o.GetError());
    }
    else
    {
        return GetModelInfoOutcome(outcome.GetError());
    }
}

void AsrClient::GetModelInfoAsync(const GetModelInfoRequest& request, const GetModelInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetModelInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::GetModelInfoOutcomeCallable AsrClient::GetModelInfoCallable(const GetModelInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetModelInfoOutcome()>>(
        [this, request]()
        {
            return this->GetModelInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::GetUsageByDateOutcome AsrClient::GetUsageByDate(const GetUsageByDateRequest &request)
{
    auto outcome = MakeRequest(request, "GetUsageByDate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUsageByDateResponse rsp = GetUsageByDateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUsageByDateOutcome(rsp);
        else
            return GetUsageByDateOutcome(o.GetError());
    }
    else
    {
        return GetUsageByDateOutcome(outcome.GetError());
    }
}

void AsrClient::GetUsageByDateAsync(const GetUsageByDateRequest& request, const GetUsageByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetUsageByDate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::GetUsageByDateOutcomeCallable AsrClient::GetUsageByDateCallable(const GetUsageByDateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetUsageByDateOutcome()>>(
        [this, request]()
        {
            return this->GetUsageByDate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::ModifyCustomizationOutcome AsrClient::ModifyCustomization(const ModifyCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizationResponse rsp = ModifyCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizationOutcome(rsp);
        else
            return ModifyCustomizationOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizationOutcome(outcome.GetError());
    }
}

void AsrClient::ModifyCustomizationAsync(const ModifyCustomizationRequest& request, const ModifyCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::ModifyCustomizationOutcomeCallable AsrClient::ModifyCustomizationCallable(const ModifyCustomizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomizationOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::ModifyCustomizationStateOutcome AsrClient::ModifyCustomizationState(const ModifyCustomizationStateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomizationState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizationStateResponse rsp = ModifyCustomizationStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizationStateOutcome(rsp);
        else
            return ModifyCustomizationStateOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizationStateOutcome(outcome.GetError());
    }
}

void AsrClient::ModifyCustomizationStateAsync(const ModifyCustomizationStateRequest& request, const ModifyCustomizationStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomizationState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::ModifyCustomizationStateOutcomeCallable AsrClient::ModifyCustomizationStateCallable(const ModifyCustomizationStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomizationStateOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomizationState(request);
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

AsrClient::UpdateAsrKeyWordLibOutcome AsrClient::UpdateAsrKeyWordLib(const UpdateAsrKeyWordLibRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAsrKeyWordLib");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAsrKeyWordLibResponse rsp = UpdateAsrKeyWordLibResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAsrKeyWordLibOutcome(rsp);
        else
            return UpdateAsrKeyWordLibOutcome(o.GetError());
    }
    else
    {
        return UpdateAsrKeyWordLibOutcome(outcome.GetError());
    }
}

void AsrClient::UpdateAsrKeyWordLibAsync(const UpdateAsrKeyWordLibRequest& request, const UpdateAsrKeyWordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAsrKeyWordLib(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::UpdateAsrKeyWordLibOutcomeCallable AsrClient::UpdateAsrKeyWordLibCallable(const UpdateAsrKeyWordLibRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAsrKeyWordLibOutcome()>>(
        [this, request]()
        {
            return this->UpdateAsrKeyWordLib(request);
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

AsrClient::VoicePrintCompareOutcome AsrClient::VoicePrintCompare(const VoicePrintCompareRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintCompareResponse rsp = VoicePrintCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintCompareOutcome(rsp);
        else
            return VoicePrintCompareOutcome(o.GetError());
    }
    else
    {
        return VoicePrintCompareOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintCompareAsync(const VoicePrintCompareRequest& request, const VoicePrintCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VoicePrintCompare(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::VoicePrintCompareOutcomeCallable AsrClient::VoicePrintCompareCallable(const VoicePrintCompareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VoicePrintCompareOutcome()>>(
        [this, request]()
        {
            return this->VoicePrintCompare(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::VoicePrintCountOutcome AsrClient::VoicePrintCount(const VoicePrintCountRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintCountResponse rsp = VoicePrintCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintCountOutcome(rsp);
        else
            return VoicePrintCountOutcome(o.GetError());
    }
    else
    {
        return VoicePrintCountOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintCountAsync(const VoicePrintCountRequest& request, const VoicePrintCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VoicePrintCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::VoicePrintCountOutcomeCallable AsrClient::VoicePrintCountCallable(const VoicePrintCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VoicePrintCountOutcome()>>(
        [this, request]()
        {
            return this->VoicePrintCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::VoicePrintDeleteOutcome AsrClient::VoicePrintDelete(const VoicePrintDeleteRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintDelete");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintDeleteResponse rsp = VoicePrintDeleteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintDeleteOutcome(rsp);
        else
            return VoicePrintDeleteOutcome(o.GetError());
    }
    else
    {
        return VoicePrintDeleteOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintDeleteAsync(const VoicePrintDeleteRequest& request, const VoicePrintDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VoicePrintDelete(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::VoicePrintDeleteOutcomeCallable AsrClient::VoicePrintDeleteCallable(const VoicePrintDeleteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VoicePrintDeleteOutcome()>>(
        [this, request]()
        {
            return this->VoicePrintDelete(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::VoicePrintEnrollOutcome AsrClient::VoicePrintEnroll(const VoicePrintEnrollRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintEnroll");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintEnrollResponse rsp = VoicePrintEnrollResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintEnrollOutcome(rsp);
        else
            return VoicePrintEnrollOutcome(o.GetError());
    }
    else
    {
        return VoicePrintEnrollOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintEnrollAsync(const VoicePrintEnrollRequest& request, const VoicePrintEnrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VoicePrintEnroll(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::VoicePrintEnrollOutcomeCallable AsrClient::VoicePrintEnrollCallable(const VoicePrintEnrollRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VoicePrintEnrollOutcome()>>(
        [this, request]()
        {
            return this->VoicePrintEnroll(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::VoicePrintGroupVerifyOutcome AsrClient::VoicePrintGroupVerify(const VoicePrintGroupVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintGroupVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintGroupVerifyResponse rsp = VoicePrintGroupVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintGroupVerifyOutcome(rsp);
        else
            return VoicePrintGroupVerifyOutcome(o.GetError());
    }
    else
    {
        return VoicePrintGroupVerifyOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintGroupVerifyAsync(const VoicePrintGroupVerifyRequest& request, const VoicePrintGroupVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VoicePrintGroupVerify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::VoicePrintGroupVerifyOutcomeCallable AsrClient::VoicePrintGroupVerifyCallable(const VoicePrintGroupVerifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VoicePrintGroupVerifyOutcome()>>(
        [this, request]()
        {
            return this->VoicePrintGroupVerify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::VoicePrintUpdateOutcome AsrClient::VoicePrintUpdate(const VoicePrintUpdateRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintUpdate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintUpdateResponse rsp = VoicePrintUpdateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintUpdateOutcome(rsp);
        else
            return VoicePrintUpdateOutcome(o.GetError());
    }
    else
    {
        return VoicePrintUpdateOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintUpdateAsync(const VoicePrintUpdateRequest& request, const VoicePrintUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VoicePrintUpdate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::VoicePrintUpdateOutcomeCallable AsrClient::VoicePrintUpdateCallable(const VoicePrintUpdateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VoicePrintUpdateOutcome()>>(
        [this, request]()
        {
            return this->VoicePrintUpdate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::VoicePrintVerifyOutcome AsrClient::VoicePrintVerify(const VoicePrintVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintVerifyResponse rsp = VoicePrintVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintVerifyOutcome(rsp);
        else
            return VoicePrintVerifyOutcome(o.GetError());
    }
    else
    {
        return VoicePrintVerifyOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintVerifyAsync(const VoicePrintVerifyRequest& request, const VoicePrintVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VoicePrintVerify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::VoicePrintVerifyOutcomeCallable AsrClient::VoicePrintVerifyCallable(const VoicePrintVerifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VoicePrintVerifyOutcome()>>(
        [this, request]()
        {
            return this->VoicePrintVerify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


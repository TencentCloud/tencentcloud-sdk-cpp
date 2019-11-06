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

#include <tencentcloud/tci/v20190318/TciClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tci::V20190318;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-18";
    const string ENDPOINT = "tci.tencentcloudapi.com";
}

TciClient::TciClient(const Credential &credential, const string &region) :
    TciClient(credential, region, ClientProfile())
{
}

TciClient::TciClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TciClient::AIAssistantOutcome TciClient::AIAssistant(const AIAssistantRequest &request)
{
    auto outcome = MakeRequest(request, "AIAssistant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AIAssistantResponse rsp = AIAssistantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AIAssistantOutcome(rsp);
        else
            return AIAssistantOutcome(o.GetError());
    }
    else
    {
        return AIAssistantOutcome(outcome.GetError());
    }
}

void TciClient::AIAssistantAsync(const AIAssistantRequest& request, const AIAssistantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AIAssistant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::AIAssistantOutcomeCallable TciClient::AIAssistantCallable(const AIAssistantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AIAssistantOutcome()>>(
        [this, request]()
        {
            return this->AIAssistant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::CancelTaskOutcome TciClient::CancelTask(const CancelTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelTaskResponse rsp = CancelTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelTaskOutcome(rsp);
        else
            return CancelTaskOutcome(o.GetError());
    }
    else
    {
        return CancelTaskOutcome(outcome.GetError());
    }
}

void TciClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::CancelTaskOutcomeCallable TciClient::CancelTaskCallable(const CancelTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelTaskOutcome()>>(
        [this, request]()
        {
            return this->CancelTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::CheckFacePhotoOutcome TciClient::CheckFacePhoto(const CheckFacePhotoRequest &request)
{
    auto outcome = MakeRequest(request, "CheckFacePhoto");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckFacePhotoResponse rsp = CheckFacePhotoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckFacePhotoOutcome(rsp);
        else
            return CheckFacePhotoOutcome(o.GetError());
    }
    else
    {
        return CheckFacePhotoOutcome(outcome.GetError());
    }
}

void TciClient::CheckFacePhotoAsync(const CheckFacePhotoRequest& request, const CheckFacePhotoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckFacePhoto(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::CheckFacePhotoOutcomeCallable TciClient::CheckFacePhotoCallable(const CheckFacePhotoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckFacePhotoOutcome()>>(
        [this, request]()
        {
            return this->CheckFacePhoto(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::CreateFaceOutcome TciClient::CreateFace(const CreateFaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFaceResponse rsp = CreateFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFaceOutcome(rsp);
        else
            return CreateFaceOutcome(o.GetError());
    }
    else
    {
        return CreateFaceOutcome(outcome.GetError());
    }
}

void TciClient::CreateFaceAsync(const CreateFaceRequest& request, const CreateFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::CreateFaceOutcomeCallable TciClient::CreateFaceCallable(const CreateFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFaceOutcome()>>(
        [this, request]()
        {
            return this->CreateFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::CreateLibraryOutcome TciClient::CreateLibrary(const CreateLibraryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLibrary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLibraryResponse rsp = CreateLibraryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLibraryOutcome(rsp);
        else
            return CreateLibraryOutcome(o.GetError());
    }
    else
    {
        return CreateLibraryOutcome(outcome.GetError());
    }
}

void TciClient::CreateLibraryAsync(const CreateLibraryRequest& request, const CreateLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLibrary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::CreateLibraryOutcomeCallable TciClient::CreateLibraryCallable(const CreateLibraryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLibraryOutcome()>>(
        [this, request]()
        {
            return this->CreateLibrary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::CreatePersonOutcome TciClient::CreatePerson(const CreatePersonRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonResponse rsp = CreatePersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonOutcome(rsp);
        else
            return CreatePersonOutcome(o.GetError());
    }
    else
    {
        return CreatePersonOutcome(outcome.GetError());
    }
}

void TciClient::CreatePersonAsync(const CreatePersonRequest& request, const CreatePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::CreatePersonOutcomeCallable TciClient::CreatePersonCallable(const CreatePersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePersonOutcome()>>(
        [this, request]()
        {
            return this->CreatePerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::CreateVocabOutcome TciClient::CreateVocab(const CreateVocabRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVocabResponse rsp = CreateVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVocabOutcome(rsp);
        else
            return CreateVocabOutcome(o.GetError());
    }
    else
    {
        return CreateVocabOutcome(outcome.GetError());
    }
}

void TciClient::CreateVocabAsync(const CreateVocabRequest& request, const CreateVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVocab(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::CreateVocabOutcomeCallable TciClient::CreateVocabCallable(const CreateVocabRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVocabOutcome()>>(
        [this, request]()
        {
            return this->CreateVocab(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::CreateVocabLibOutcome TciClient::CreateVocabLib(const CreateVocabLibRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVocabLib");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVocabLibResponse rsp = CreateVocabLibResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVocabLibOutcome(rsp);
        else
            return CreateVocabLibOutcome(o.GetError());
    }
    else
    {
        return CreateVocabLibOutcome(outcome.GetError());
    }
}

void TciClient::CreateVocabLibAsync(const CreateVocabLibRequest& request, const CreateVocabLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVocabLib(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::CreateVocabLibOutcomeCallable TciClient::CreateVocabLibCallable(const CreateVocabLibRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVocabLibOutcome()>>(
        [this, request]()
        {
            return this->CreateVocabLib(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DeleteFaceOutcome TciClient::DeleteFace(const DeleteFaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFaceResponse rsp = DeleteFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFaceOutcome(rsp);
        else
            return DeleteFaceOutcome(o.GetError());
    }
    else
    {
        return DeleteFaceOutcome(outcome.GetError());
    }
}

void TciClient::DeleteFaceAsync(const DeleteFaceRequest& request, const DeleteFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DeleteFaceOutcomeCallable TciClient::DeleteFaceCallable(const DeleteFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DeleteLibraryOutcome TciClient::DeleteLibrary(const DeleteLibraryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLibrary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLibraryResponse rsp = DeleteLibraryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLibraryOutcome(rsp);
        else
            return DeleteLibraryOutcome(o.GetError());
    }
    else
    {
        return DeleteLibraryOutcome(outcome.GetError());
    }
}

void TciClient::DeleteLibraryAsync(const DeleteLibraryRequest& request, const DeleteLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLibrary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DeleteLibraryOutcomeCallable TciClient::DeleteLibraryCallable(const DeleteLibraryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLibraryOutcome()>>(
        [this, request]()
        {
            return this->DeleteLibrary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DeletePersonOutcome TciClient::DeletePerson(const DeletePersonRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePersonResponse rsp = DeletePersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePersonOutcome(rsp);
        else
            return DeletePersonOutcome(o.GetError());
    }
    else
    {
        return DeletePersonOutcome(outcome.GetError());
    }
}

void TciClient::DeletePersonAsync(const DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DeletePersonOutcomeCallable TciClient::DeletePersonCallable(const DeletePersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePersonOutcome()>>(
        [this, request]()
        {
            return this->DeletePerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DeleteVocabOutcome TciClient::DeleteVocab(const DeleteVocabRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVocabResponse rsp = DeleteVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVocabOutcome(rsp);
        else
            return DeleteVocabOutcome(o.GetError());
    }
    else
    {
        return DeleteVocabOutcome(outcome.GetError());
    }
}

void TciClient::DeleteVocabAsync(const DeleteVocabRequest& request, const DeleteVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVocab(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DeleteVocabOutcomeCallable TciClient::DeleteVocabCallable(const DeleteVocabRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVocabOutcome()>>(
        [this, request]()
        {
            return this->DeleteVocab(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DeleteVocabLibOutcome TciClient::DeleteVocabLib(const DeleteVocabLibRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVocabLib");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVocabLibResponse rsp = DeleteVocabLibResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVocabLibOutcome(rsp);
        else
            return DeleteVocabLibOutcome(o.GetError());
    }
    else
    {
        return DeleteVocabLibOutcome(outcome.GetError());
    }
}

void TciClient::DeleteVocabLibAsync(const DeleteVocabLibRequest& request, const DeleteVocabLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVocabLib(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DeleteVocabLibOutcomeCallable TciClient::DeleteVocabLibCallable(const DeleteVocabLibRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVocabLibOutcome()>>(
        [this, request]()
        {
            return this->DeleteVocabLib(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribeAITaskResultOutcome TciClient::DescribeAITaskResult(const DescribeAITaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAITaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAITaskResultResponse rsp = DescribeAITaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAITaskResultOutcome(rsp);
        else
            return DescribeAITaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeAITaskResultOutcome(outcome.GetError());
    }
}

void TciClient::DescribeAITaskResultAsync(const DescribeAITaskResultRequest& request, const DescribeAITaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAITaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribeAITaskResultOutcomeCallable TciClient::DescribeAITaskResultCallable(const DescribeAITaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAITaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeAITaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribeAttendanceResultOutcome TciClient::DescribeAttendanceResult(const DescribeAttendanceResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttendanceResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttendanceResultResponse rsp = DescribeAttendanceResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttendanceResultOutcome(rsp);
        else
            return DescribeAttendanceResultOutcome(o.GetError());
    }
    else
    {
        return DescribeAttendanceResultOutcome(outcome.GetError());
    }
}

void TciClient::DescribeAttendanceResultAsync(const DescribeAttendanceResultRequest& request, const DescribeAttendanceResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttendanceResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribeAttendanceResultOutcomeCallable TciClient::DescribeAttendanceResultCallable(const DescribeAttendanceResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttendanceResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttendanceResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribeAudioTaskOutcome TciClient::DescribeAudioTask(const DescribeAudioTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAudioTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAudioTaskResponse rsp = DescribeAudioTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAudioTaskOutcome(rsp);
        else
            return DescribeAudioTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeAudioTaskOutcome(outcome.GetError());
    }
}

void TciClient::DescribeAudioTaskAsync(const DescribeAudioTaskRequest& request, const DescribeAudioTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAudioTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribeAudioTaskOutcomeCallable TciClient::DescribeAudioTaskCallable(const DescribeAudioTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAudioTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeAudioTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribeConversationTaskOutcome TciClient::DescribeConversationTask(const DescribeConversationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConversationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConversationTaskResponse rsp = DescribeConversationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConversationTaskOutcome(rsp);
        else
            return DescribeConversationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeConversationTaskOutcome(outcome.GetError());
    }
}

void TciClient::DescribeConversationTaskAsync(const DescribeConversationTaskRequest& request, const DescribeConversationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConversationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribeConversationTaskOutcomeCallable TciClient::DescribeConversationTaskCallable(const DescribeConversationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConversationTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeConversationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribeHighlightResultOutcome TciClient::DescribeHighlightResult(const DescribeHighlightResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHighlightResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHighlightResultResponse rsp = DescribeHighlightResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHighlightResultOutcome(rsp);
        else
            return DescribeHighlightResultOutcome(o.GetError());
    }
    else
    {
        return DescribeHighlightResultOutcome(outcome.GetError());
    }
}

void TciClient::DescribeHighlightResultAsync(const DescribeHighlightResultRequest& request, const DescribeHighlightResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHighlightResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribeHighlightResultOutcomeCallable TciClient::DescribeHighlightResultCallable(const DescribeHighlightResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHighlightResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeHighlightResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribeImageTaskOutcome TciClient::DescribeImageTask(const DescribeImageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageTaskResponse rsp = DescribeImageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageTaskOutcome(rsp);
        else
            return DescribeImageTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeImageTaskOutcome(outcome.GetError());
    }
}

void TciClient::DescribeImageTaskAsync(const DescribeImageTaskRequest& request, const DescribeImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribeImageTaskOutcomeCallable TciClient::DescribeImageTaskCallable(const DescribeImageTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribeImageTaskStatisticOutcome TciClient::DescribeImageTaskStatistic(const DescribeImageTaskStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageTaskStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageTaskStatisticResponse rsp = DescribeImageTaskStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageTaskStatisticOutcome(rsp);
        else
            return DescribeImageTaskStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeImageTaskStatisticOutcome(outcome.GetError());
    }
}

void TciClient::DescribeImageTaskStatisticAsync(const DescribeImageTaskStatisticRequest& request, const DescribeImageTaskStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageTaskStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribeImageTaskStatisticOutcomeCallable TciClient::DescribeImageTaskStatisticCallable(const DescribeImageTaskStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageTaskStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageTaskStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribeLibrariesOutcome TciClient::DescribeLibraries(const DescribeLibrariesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLibraries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLibrariesResponse rsp = DescribeLibrariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLibrariesOutcome(rsp);
        else
            return DescribeLibrariesOutcome(o.GetError());
    }
    else
    {
        return DescribeLibrariesOutcome(outcome.GetError());
    }
}

void TciClient::DescribeLibrariesAsync(const DescribeLibrariesRequest& request, const DescribeLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLibraries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribeLibrariesOutcomeCallable TciClient::DescribeLibrariesCallable(const DescribeLibrariesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLibrariesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLibraries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribePersonOutcome TciClient::DescribePerson(const DescribePersonRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonResponse rsp = DescribePersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonOutcome(rsp);
        else
            return DescribePersonOutcome(o.GetError());
    }
    else
    {
        return DescribePersonOutcome(outcome.GetError());
    }
}

void TciClient::DescribePersonAsync(const DescribePersonRequest& request, const DescribePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribePersonOutcomeCallable TciClient::DescribePersonCallable(const DescribePersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonOutcome()>>(
        [this, request]()
        {
            return this->DescribePerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribePersonsOutcome TciClient::DescribePersons(const DescribePersonsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersons");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonsResponse rsp = DescribePersonsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonsOutcome(rsp);
        else
            return DescribePersonsOutcome(o.GetError());
    }
    else
    {
        return DescribePersonsOutcome(outcome.GetError());
    }
}

void TciClient::DescribePersonsAsync(const DescribePersonsRequest& request, const DescribePersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersons(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribePersonsOutcomeCallable TciClient::DescribePersonsCallable(const DescribePersonsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonsOutcome()>>(
        [this, request]()
        {
            return this->DescribePersons(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribeVocabOutcome TciClient::DescribeVocab(const DescribeVocabRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVocabResponse rsp = DescribeVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVocabOutcome(rsp);
        else
            return DescribeVocabOutcome(o.GetError());
    }
    else
    {
        return DescribeVocabOutcome(outcome.GetError());
    }
}

void TciClient::DescribeVocabAsync(const DescribeVocabRequest& request, const DescribeVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVocab(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribeVocabOutcomeCallable TciClient::DescribeVocabCallable(const DescribeVocabRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVocabOutcome()>>(
        [this, request]()
        {
            return this->DescribeVocab(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::DescribeVocabLibOutcome TciClient::DescribeVocabLib(const DescribeVocabLibRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVocabLib");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVocabLibResponse rsp = DescribeVocabLibResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVocabLibOutcome(rsp);
        else
            return DescribeVocabLibOutcome(o.GetError());
    }
    else
    {
        return DescribeVocabLibOutcome(outcome.GetError());
    }
}

void TciClient::DescribeVocabLibAsync(const DescribeVocabLibRequest& request, const DescribeVocabLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVocabLib(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::DescribeVocabLibOutcomeCallable TciClient::DescribeVocabLibCallable(const DescribeVocabLibRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVocabLibOutcome()>>(
        [this, request]()
        {
            return this->DescribeVocabLib(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::ModifyLibraryOutcome TciClient::ModifyLibrary(const ModifyLibraryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLibrary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLibraryResponse rsp = ModifyLibraryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLibraryOutcome(rsp);
        else
            return ModifyLibraryOutcome(o.GetError());
    }
    else
    {
        return ModifyLibraryOutcome(outcome.GetError());
    }
}

void TciClient::ModifyLibraryAsync(const ModifyLibraryRequest& request, const ModifyLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLibrary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::ModifyLibraryOutcomeCallable TciClient::ModifyLibraryCallable(const ModifyLibraryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLibraryOutcome()>>(
        [this, request]()
        {
            return this->ModifyLibrary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::ModifyPersonOutcome TciClient::ModifyPerson(const ModifyPersonRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonResponse rsp = ModifyPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonOutcome(rsp);
        else
            return ModifyPersonOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonOutcome(outcome.GetError());
    }
}

void TciClient::ModifyPersonAsync(const ModifyPersonRequest& request, const ModifyPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::ModifyPersonOutcomeCallable TciClient::ModifyPersonCallable(const ModifyPersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPersonOutcome()>>(
        [this, request]()
        {
            return this->ModifyPerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitAudioTaskOutcome TciClient::SubmitAudioTask(const SubmitAudioTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitAudioTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitAudioTaskResponse rsp = SubmitAudioTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitAudioTaskOutcome(rsp);
        else
            return SubmitAudioTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitAudioTaskOutcome(outcome.GetError());
    }
}

void TciClient::SubmitAudioTaskAsync(const SubmitAudioTaskRequest& request, const SubmitAudioTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitAudioTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitAudioTaskOutcomeCallable TciClient::SubmitAudioTaskCallable(const SubmitAudioTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitAudioTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitAudioTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitCheckAttendanceTaskOutcome TciClient::SubmitCheckAttendanceTask(const SubmitCheckAttendanceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitCheckAttendanceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitCheckAttendanceTaskResponse rsp = SubmitCheckAttendanceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitCheckAttendanceTaskOutcome(rsp);
        else
            return SubmitCheckAttendanceTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitCheckAttendanceTaskOutcome(outcome.GetError());
    }
}

void TciClient::SubmitCheckAttendanceTaskAsync(const SubmitCheckAttendanceTaskRequest& request, const SubmitCheckAttendanceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitCheckAttendanceTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitCheckAttendanceTaskOutcomeCallable TciClient::SubmitCheckAttendanceTaskCallable(const SubmitCheckAttendanceTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitCheckAttendanceTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitCheckAttendanceTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitCheckAttendanceTaskPlusOutcome TciClient::SubmitCheckAttendanceTaskPlus(const SubmitCheckAttendanceTaskPlusRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitCheckAttendanceTaskPlus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitCheckAttendanceTaskPlusResponse rsp = SubmitCheckAttendanceTaskPlusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitCheckAttendanceTaskPlusOutcome(rsp);
        else
            return SubmitCheckAttendanceTaskPlusOutcome(o.GetError());
    }
    else
    {
        return SubmitCheckAttendanceTaskPlusOutcome(outcome.GetError());
    }
}

void TciClient::SubmitCheckAttendanceTaskPlusAsync(const SubmitCheckAttendanceTaskPlusRequest& request, const SubmitCheckAttendanceTaskPlusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitCheckAttendanceTaskPlus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitCheckAttendanceTaskPlusOutcomeCallable TciClient::SubmitCheckAttendanceTaskPlusCallable(const SubmitCheckAttendanceTaskPlusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitCheckAttendanceTaskPlusOutcome()>>(
        [this, request]()
        {
            return this->SubmitCheckAttendanceTaskPlus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitConversationTaskOutcome TciClient::SubmitConversationTask(const SubmitConversationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitConversationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitConversationTaskResponse rsp = SubmitConversationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitConversationTaskOutcome(rsp);
        else
            return SubmitConversationTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitConversationTaskOutcome(outcome.GetError());
    }
}

void TciClient::SubmitConversationTaskAsync(const SubmitConversationTaskRequest& request, const SubmitConversationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitConversationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitConversationTaskOutcomeCallable TciClient::SubmitConversationTaskCallable(const SubmitConversationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitConversationTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitConversationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitDoubleVideoHighlightsOutcome TciClient::SubmitDoubleVideoHighlights(const SubmitDoubleVideoHighlightsRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitDoubleVideoHighlights");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitDoubleVideoHighlightsResponse rsp = SubmitDoubleVideoHighlightsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitDoubleVideoHighlightsOutcome(rsp);
        else
            return SubmitDoubleVideoHighlightsOutcome(o.GetError());
    }
    else
    {
        return SubmitDoubleVideoHighlightsOutcome(outcome.GetError());
    }
}

void TciClient::SubmitDoubleVideoHighlightsAsync(const SubmitDoubleVideoHighlightsRequest& request, const SubmitDoubleVideoHighlightsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitDoubleVideoHighlights(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitDoubleVideoHighlightsOutcomeCallable TciClient::SubmitDoubleVideoHighlightsCallable(const SubmitDoubleVideoHighlightsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitDoubleVideoHighlightsOutcome()>>(
        [this, request]()
        {
            return this->SubmitDoubleVideoHighlights(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitFullBodyClassTaskOutcome TciClient::SubmitFullBodyClassTask(const SubmitFullBodyClassTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitFullBodyClassTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitFullBodyClassTaskResponse rsp = SubmitFullBodyClassTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitFullBodyClassTaskOutcome(rsp);
        else
            return SubmitFullBodyClassTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitFullBodyClassTaskOutcome(outcome.GetError());
    }
}

void TciClient::SubmitFullBodyClassTaskAsync(const SubmitFullBodyClassTaskRequest& request, const SubmitFullBodyClassTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitFullBodyClassTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitFullBodyClassTaskOutcomeCallable TciClient::SubmitFullBodyClassTaskCallable(const SubmitFullBodyClassTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitFullBodyClassTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitFullBodyClassTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitHighlightsOutcome TciClient::SubmitHighlights(const SubmitHighlightsRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHighlights");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHighlightsResponse rsp = SubmitHighlightsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHighlightsOutcome(rsp);
        else
            return SubmitHighlightsOutcome(o.GetError());
    }
    else
    {
        return SubmitHighlightsOutcome(outcome.GetError());
    }
}

void TciClient::SubmitHighlightsAsync(const SubmitHighlightsRequest& request, const SubmitHighlightsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitHighlights(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitHighlightsOutcomeCallable TciClient::SubmitHighlightsCallable(const SubmitHighlightsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitHighlightsOutcome()>>(
        [this, request]()
        {
            return this->SubmitHighlights(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitImageTaskOutcome TciClient::SubmitImageTask(const SubmitImageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitImageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitImageTaskResponse rsp = SubmitImageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitImageTaskOutcome(rsp);
        else
            return SubmitImageTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitImageTaskOutcome(outcome.GetError());
    }
}

void TciClient::SubmitImageTaskAsync(const SubmitImageTaskRequest& request, const SubmitImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitImageTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitImageTaskOutcomeCallable TciClient::SubmitImageTaskCallable(const SubmitImageTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitImageTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitImageTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitImageTaskPlusOutcome TciClient::SubmitImageTaskPlus(const SubmitImageTaskPlusRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitImageTaskPlus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitImageTaskPlusResponse rsp = SubmitImageTaskPlusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitImageTaskPlusOutcome(rsp);
        else
            return SubmitImageTaskPlusOutcome(o.GetError());
    }
    else
    {
        return SubmitImageTaskPlusOutcome(outcome.GetError());
    }
}

void TciClient::SubmitImageTaskPlusAsync(const SubmitImageTaskPlusRequest& request, const SubmitImageTaskPlusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitImageTaskPlus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitImageTaskPlusOutcomeCallable TciClient::SubmitImageTaskPlusCallable(const SubmitImageTaskPlusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitImageTaskPlusOutcome()>>(
        [this, request]()
        {
            return this->SubmitImageTaskPlus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitOneByOneClassTaskOutcome TciClient::SubmitOneByOneClassTask(const SubmitOneByOneClassTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitOneByOneClassTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitOneByOneClassTaskResponse rsp = SubmitOneByOneClassTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitOneByOneClassTaskOutcome(rsp);
        else
            return SubmitOneByOneClassTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitOneByOneClassTaskOutcome(outcome.GetError());
    }
}

void TciClient::SubmitOneByOneClassTaskAsync(const SubmitOneByOneClassTaskRequest& request, const SubmitOneByOneClassTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitOneByOneClassTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitOneByOneClassTaskOutcomeCallable TciClient::SubmitOneByOneClassTaskCallable(const SubmitOneByOneClassTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitOneByOneClassTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitOneByOneClassTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitOpenClassTaskOutcome TciClient::SubmitOpenClassTask(const SubmitOpenClassTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitOpenClassTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitOpenClassTaskResponse rsp = SubmitOpenClassTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitOpenClassTaskOutcome(rsp);
        else
            return SubmitOpenClassTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitOpenClassTaskOutcome(outcome.GetError());
    }
}

void TciClient::SubmitOpenClassTaskAsync(const SubmitOpenClassTaskRequest& request, const SubmitOpenClassTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitOpenClassTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitOpenClassTaskOutcomeCallable TciClient::SubmitOpenClassTaskCallable(const SubmitOpenClassTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitOpenClassTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitOpenClassTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitPartialBodyClassTaskOutcome TciClient::SubmitPartialBodyClassTask(const SubmitPartialBodyClassTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitPartialBodyClassTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitPartialBodyClassTaskResponse rsp = SubmitPartialBodyClassTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitPartialBodyClassTaskOutcome(rsp);
        else
            return SubmitPartialBodyClassTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitPartialBodyClassTaskOutcome(outcome.GetError());
    }
}

void TciClient::SubmitPartialBodyClassTaskAsync(const SubmitPartialBodyClassTaskRequest& request, const SubmitPartialBodyClassTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitPartialBodyClassTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitPartialBodyClassTaskOutcomeCallable TciClient::SubmitPartialBodyClassTaskCallable(const SubmitPartialBodyClassTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitPartialBodyClassTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitPartialBodyClassTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::SubmitTraditionalClassTaskOutcome TciClient::SubmitTraditionalClassTask(const SubmitTraditionalClassTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTraditionalClassTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTraditionalClassTaskResponse rsp = SubmitTraditionalClassTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTraditionalClassTaskOutcome(rsp);
        else
            return SubmitTraditionalClassTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitTraditionalClassTaskOutcome(outcome.GetError());
    }
}

void TciClient::SubmitTraditionalClassTaskAsync(const SubmitTraditionalClassTaskRequest& request, const SubmitTraditionalClassTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitTraditionalClassTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::SubmitTraditionalClassTaskOutcomeCallable TciClient::SubmitTraditionalClassTaskCallable(const SubmitTraditionalClassTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitTraditionalClassTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitTraditionalClassTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TciClient::TransmitAudioStreamOutcome TciClient::TransmitAudioStream(const TransmitAudioStreamRequest &request)
{
    auto outcome = MakeRequest(request, "TransmitAudioStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransmitAudioStreamResponse rsp = TransmitAudioStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransmitAudioStreamOutcome(rsp);
        else
            return TransmitAudioStreamOutcome(o.GetError());
    }
    else
    {
        return TransmitAudioStreamOutcome(outcome.GetError());
    }
}

void TciClient::TransmitAudioStreamAsync(const TransmitAudioStreamRequest& request, const TransmitAudioStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TransmitAudioStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TciClient::TransmitAudioStreamOutcomeCallable TciClient::TransmitAudioStreamCallable(const TransmitAudioStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TransmitAudioStreamOutcome()>>(
        [this, request]()
        {
            return this->TransmitAudioStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


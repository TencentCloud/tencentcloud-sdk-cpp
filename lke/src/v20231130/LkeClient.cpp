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

#include <tencentcloud/lke/v20231130/LkeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lke::V20231130;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-11-30";
    const string ENDPOINT = "lke.tencentcloudapi.com";
}

LkeClient::LkeClient(const Credential &credential, const string &region) :
    LkeClient(credential, region, ClientProfile())
{
}

LkeClient::LkeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LkeClient::CheckAttributeLabelExistOutcome LkeClient::CheckAttributeLabelExist(const CheckAttributeLabelExistRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAttributeLabelExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAttributeLabelExistResponse rsp = CheckAttributeLabelExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAttributeLabelExistOutcome(rsp);
        else
            return CheckAttributeLabelExistOutcome(o.GetError());
    }
    else
    {
        return CheckAttributeLabelExistOutcome(outcome.GetError());
    }
}

void LkeClient::CheckAttributeLabelExistAsync(const CheckAttributeLabelExistRequest& request, const CheckAttributeLabelExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckAttributeLabelExist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CheckAttributeLabelExistOutcomeCallable LkeClient::CheckAttributeLabelExistCallable(const CheckAttributeLabelExistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckAttributeLabelExistOutcome()>>(
        [this, request]()
        {
            return this->CheckAttributeLabelExist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CheckAttributeLabelReferOutcome LkeClient::CheckAttributeLabelRefer(const CheckAttributeLabelReferRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAttributeLabelRefer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAttributeLabelReferResponse rsp = CheckAttributeLabelReferResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAttributeLabelReferOutcome(rsp);
        else
            return CheckAttributeLabelReferOutcome(o.GetError());
    }
    else
    {
        return CheckAttributeLabelReferOutcome(outcome.GetError());
    }
}

void LkeClient::CheckAttributeLabelReferAsync(const CheckAttributeLabelReferRequest& request, const CheckAttributeLabelReferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckAttributeLabelRefer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CheckAttributeLabelReferOutcomeCallable LkeClient::CheckAttributeLabelReferCallable(const CheckAttributeLabelReferRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckAttributeLabelReferOutcome()>>(
        [this, request]()
        {
            return this->CheckAttributeLabelRefer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ConvertDocumentOutcome LkeClient::ConvertDocument(const ConvertDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "ConvertDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConvertDocumentResponse rsp = ConvertDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConvertDocumentOutcome(rsp);
        else
            return ConvertDocumentOutcome(o.GetError());
    }
    else
    {
        return ConvertDocumentOutcome(outcome.GetError());
    }
}

void LkeClient::ConvertDocumentAsync(const ConvertDocumentRequest& request, const ConvertDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConvertDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ConvertDocumentOutcomeCallable LkeClient::ConvertDocumentCallable(const ConvertDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConvertDocumentOutcome()>>(
        [this, request]()
        {
            return this->ConvertDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateAppOutcome LkeClient::CreateApp(const CreateAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppResponse rsp = CreateAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppOutcome(rsp);
        else
            return CreateAppOutcome(o.GetError());
    }
    else
    {
        return CreateAppOutcome(outcome.GetError());
    }
}

void LkeClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateAppOutcomeCallable LkeClient::CreateAppCallable(const CreateAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
        [this, request]()
        {
            return this->CreateApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateAttributeLabelOutcome LkeClient::CreateAttributeLabel(const CreateAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAttributeLabelResponse rsp = CreateAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAttributeLabelOutcome(rsp);
        else
            return CreateAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return CreateAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::CreateAttributeLabelAsync(const CreateAttributeLabelRequest& request, const CreateAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateAttributeLabelOutcomeCallable LkeClient::CreateAttributeLabelCallable(const CreateAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->CreateAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateCorpOutcome LkeClient::CreateCorp(const CreateCorpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCorp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCorpResponse rsp = CreateCorpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCorpOutcome(rsp);
        else
            return CreateCorpOutcome(o.GetError());
    }
    else
    {
        return CreateCorpOutcome(outcome.GetError());
    }
}

void LkeClient::CreateCorpAsync(const CreateCorpRequest& request, const CreateCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCorp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateCorpOutcomeCallable LkeClient::CreateCorpCallable(const CreateCorpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCorpOutcome()>>(
        [this, request]()
        {
            return this->CreateCorp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateDocCateOutcome LkeClient::CreateDocCate(const CreateDocCateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDocCate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDocCateResponse rsp = CreateDocCateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDocCateOutcome(rsp);
        else
            return CreateDocCateOutcome(o.GetError());
    }
    else
    {
        return CreateDocCateOutcome(outcome.GetError());
    }
}

void LkeClient::CreateDocCateAsync(const CreateDocCateRequest& request, const CreateDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDocCate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateDocCateOutcomeCallable LkeClient::CreateDocCateCallable(const CreateDocCateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDocCateOutcome()>>(
        [this, request]()
        {
            return this->CreateDocCate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateQAOutcome LkeClient::CreateQA(const CreateQARequest &request)
{
    auto outcome = MakeRequest(request, "CreateQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQAResponse rsp = CreateQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQAOutcome(rsp);
        else
            return CreateQAOutcome(o.GetError());
    }
    else
    {
        return CreateQAOutcome(outcome.GetError());
    }
}

void LkeClient::CreateQAAsync(const CreateQARequest& request, const CreateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateQAOutcomeCallable LkeClient::CreateQACallable(const CreateQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateQAOutcome()>>(
        [this, request]()
        {
            return this->CreateQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateQACateOutcome LkeClient::CreateQACate(const CreateQACateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQACateResponse rsp = CreateQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQACateOutcome(rsp);
        else
            return CreateQACateOutcome(o.GetError());
    }
    else
    {
        return CreateQACateOutcome(outcome.GetError());
    }
}

void LkeClient::CreateQACateAsync(const CreateQACateRequest& request, const CreateQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateQACate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateQACateOutcomeCallable LkeClient::CreateQACateCallable(const CreateQACateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateQACateOutcome()>>(
        [this, request]()
        {
            return this->CreateQACate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateRejectedQuestionOutcome LkeClient::CreateRejectedQuestion(const CreateRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRejectedQuestionResponse rsp = CreateRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRejectedQuestionOutcome(rsp);
        else
            return CreateRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return CreateRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::CreateRejectedQuestionAsync(const CreateRejectedQuestionRequest& request, const CreateRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRejectedQuestion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateRejectedQuestionOutcomeCallable LkeClient::CreateRejectedQuestionCallable(const CreateRejectedQuestionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRejectedQuestionOutcome()>>(
        [this, request]()
        {
            return this->CreateRejectedQuestion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateReleaseOutcome LkeClient::CreateRelease(const CreateReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReleaseResponse rsp = CreateReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReleaseOutcome(rsp);
        else
            return CreateReleaseOutcome(o.GetError());
    }
    else
    {
        return CreateReleaseOutcome(outcome.GetError());
    }
}

void LkeClient::CreateReleaseAsync(const CreateReleaseRequest& request, const CreateReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateReleaseOutcomeCallable LkeClient::CreateReleaseCallable(const CreateReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReleaseOutcome()>>(
        [this, request]()
        {
            return this->CreateRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateSharedKnowledgeOutcome LkeClient::CreateSharedKnowledge(const CreateSharedKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSharedKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSharedKnowledgeResponse rsp = CreateSharedKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSharedKnowledgeOutcome(rsp);
        else
            return CreateSharedKnowledgeOutcome(o.GetError());
    }
    else
    {
        return CreateSharedKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::CreateSharedKnowledgeAsync(const CreateSharedKnowledgeRequest& request, const CreateSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSharedKnowledge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateSharedKnowledgeOutcomeCallable LkeClient::CreateSharedKnowledgeCallable(const CreateSharedKnowledgeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSharedKnowledgeOutcome()>>(
        [this, request]()
        {
            return this->CreateSharedKnowledge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateVarOutcome LkeClient::CreateVar(const CreateVarRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVar");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVarResponse rsp = CreateVarResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVarOutcome(rsp);
        else
            return CreateVarOutcome(o.GetError());
    }
    else
    {
        return CreateVarOutcome(outcome.GetError());
    }
}

void LkeClient::CreateVarAsync(const CreateVarRequest& request, const CreateVarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVar(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateVarOutcomeCallable LkeClient::CreateVarCallable(const CreateVarRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVarOutcome()>>(
        [this, request]()
        {
            return this->CreateVar(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::CreateWorkflowRunOutcome LkeClient::CreateWorkflowRun(const CreateWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowRunResponse rsp = CreateWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowRunOutcome(rsp);
        else
            return CreateWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowRunOutcome(outcome.GetError());
    }
}

void LkeClient::CreateWorkflowRunAsync(const CreateWorkflowRunRequest& request, const CreateWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkflowRun(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::CreateWorkflowRunOutcomeCallable LkeClient::CreateWorkflowRunCallable(const CreateWorkflowRunRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkflowRunOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkflowRun(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteAppOutcome LkeClient::DeleteApp(const DeleteAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppResponse rsp = DeleteAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppOutcome(rsp);
        else
            return DeleteAppOutcome(o.GetError());
    }
    else
    {
        return DeleteAppOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteAppOutcomeCallable LkeClient::DeleteAppCallable(const DeleteAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAppOutcome()>>(
        [this, request]()
        {
            return this->DeleteApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteAttributeLabelOutcome LkeClient::DeleteAttributeLabel(const DeleteAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAttributeLabelResponse rsp = DeleteAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAttributeLabelOutcome(rsp);
        else
            return DeleteAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return DeleteAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteAttributeLabelAsync(const DeleteAttributeLabelRequest& request, const DeleteAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteAttributeLabelOutcomeCallable LkeClient::DeleteAttributeLabelCallable(const DeleteAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->DeleteAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteDocOutcome LkeClient::DeleteDoc(const DeleteDocRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDocResponse rsp = DeleteDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDocOutcome(rsp);
        else
            return DeleteDocOutcome(o.GetError());
    }
    else
    {
        return DeleteDocOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteDocAsync(const DeleteDocRequest& request, const DeleteDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteDocOutcomeCallable LkeClient::DeleteDocCallable(const DeleteDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDocOutcome()>>(
        [this, request]()
        {
            return this->DeleteDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteDocCateOutcome LkeClient::DeleteDocCate(const DeleteDocCateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDocCate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDocCateResponse rsp = DeleteDocCateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDocCateOutcome(rsp);
        else
            return DeleteDocCateOutcome(o.GetError());
    }
    else
    {
        return DeleteDocCateOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteDocCateAsync(const DeleteDocCateRequest& request, const DeleteDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDocCate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteDocCateOutcomeCallable LkeClient::DeleteDocCateCallable(const DeleteDocCateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDocCateOutcome()>>(
        [this, request]()
        {
            return this->DeleteDocCate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteQAOutcome LkeClient::DeleteQA(const DeleteQARequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQAResponse rsp = DeleteQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQAOutcome(rsp);
        else
            return DeleteQAOutcome(o.GetError());
    }
    else
    {
        return DeleteQAOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteQAAsync(const DeleteQARequest& request, const DeleteQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteQAOutcomeCallable LkeClient::DeleteQACallable(const DeleteQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQAOutcome()>>(
        [this, request]()
        {
            return this->DeleteQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteQACateOutcome LkeClient::DeleteQACate(const DeleteQACateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQACateResponse rsp = DeleteQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQACateOutcome(rsp);
        else
            return DeleteQACateOutcome(o.GetError());
    }
    else
    {
        return DeleteQACateOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteQACateAsync(const DeleteQACateRequest& request, const DeleteQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQACate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteQACateOutcomeCallable LkeClient::DeleteQACateCallable(const DeleteQACateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQACateOutcome()>>(
        [this, request]()
        {
            return this->DeleteQACate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteRejectedQuestionOutcome LkeClient::DeleteRejectedQuestion(const DeleteRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRejectedQuestionResponse rsp = DeleteRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRejectedQuestionOutcome(rsp);
        else
            return DeleteRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return DeleteRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteRejectedQuestionAsync(const DeleteRejectedQuestionRequest& request, const DeleteRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRejectedQuestion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteRejectedQuestionOutcomeCallable LkeClient::DeleteRejectedQuestionCallable(const DeleteRejectedQuestionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRejectedQuestionOutcome()>>(
        [this, request]()
        {
            return this->DeleteRejectedQuestion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteSharedKnowledgeOutcome LkeClient::DeleteSharedKnowledge(const DeleteSharedKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSharedKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSharedKnowledgeResponse rsp = DeleteSharedKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSharedKnowledgeOutcome(rsp);
        else
            return DeleteSharedKnowledgeOutcome(o.GetError());
    }
    else
    {
        return DeleteSharedKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteSharedKnowledgeAsync(const DeleteSharedKnowledgeRequest& request, const DeleteSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSharedKnowledge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteSharedKnowledgeOutcomeCallable LkeClient::DeleteSharedKnowledgeCallable(const DeleteSharedKnowledgeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSharedKnowledgeOutcome()>>(
        [this, request]()
        {
            return this->DeleteSharedKnowledge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DeleteVarOutcome LkeClient::DeleteVar(const DeleteVarRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVar");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVarResponse rsp = DeleteVarResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVarOutcome(rsp);
        else
            return DeleteVarOutcome(o.GetError());
    }
    else
    {
        return DeleteVarOutcome(outcome.GetError());
    }
}

void LkeClient::DeleteVarAsync(const DeleteVarRequest& request, const DeleteVarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVar(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DeleteVarOutcomeCallable LkeClient::DeleteVarCallable(const DeleteVarRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVarOutcome()>>(
        [this, request]()
        {
            return this->DeleteVar(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeAppOutcome LkeClient::DescribeApp(const DescribeAppRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppResponse rsp = DescribeAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppOutcome(rsp);
        else
            return DescribeAppOutcome(o.GetError());
    }
    else
    {
        return DescribeAppOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeAppAsync(const DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeAppOutcomeCallable LkeClient::DescribeAppCallable(const DescribeAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAppOutcome()>>(
        [this, request]()
        {
            return this->DescribeApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeAttributeLabelOutcome LkeClient::DescribeAttributeLabel(const DescribeAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttributeLabelResponse rsp = DescribeAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttributeLabelOutcome(rsp);
        else
            return DescribeAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return DescribeAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeAttributeLabelAsync(const DescribeAttributeLabelRequest& request, const DescribeAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeAttributeLabelOutcomeCallable LkeClient::DescribeAttributeLabelCallable(const DescribeAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->DescribeAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeCallStatsGraphOutcome LkeClient::DescribeCallStatsGraph(const DescribeCallStatsGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallStatsGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallStatsGraphResponse rsp = DescribeCallStatsGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallStatsGraphOutcome(rsp);
        else
            return DescribeCallStatsGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeCallStatsGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeCallStatsGraphAsync(const DescribeCallStatsGraphRequest& request, const DescribeCallStatsGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallStatsGraph(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeCallStatsGraphOutcomeCallable LkeClient::DescribeCallStatsGraphCallable(const DescribeCallStatsGraphRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallStatsGraphOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallStatsGraph(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeConcurrencyUsageOutcome LkeClient::DescribeConcurrencyUsage(const DescribeConcurrencyUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrencyUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrencyUsageResponse rsp = DescribeConcurrencyUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrencyUsageOutcome(rsp);
        else
            return DescribeConcurrencyUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrencyUsageOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeConcurrencyUsageAsync(const DescribeConcurrencyUsageRequest& request, const DescribeConcurrencyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConcurrencyUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeConcurrencyUsageOutcomeCallable LkeClient::DescribeConcurrencyUsageCallable(const DescribeConcurrencyUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConcurrencyUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeConcurrencyUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeConcurrencyUsageGraphOutcome LkeClient::DescribeConcurrencyUsageGraph(const DescribeConcurrencyUsageGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrencyUsageGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrencyUsageGraphResponse rsp = DescribeConcurrencyUsageGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrencyUsageGraphOutcome(rsp);
        else
            return DescribeConcurrencyUsageGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrencyUsageGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeConcurrencyUsageGraphAsync(const DescribeConcurrencyUsageGraphRequest& request, const DescribeConcurrencyUsageGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConcurrencyUsageGraph(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeConcurrencyUsageGraphOutcomeCallable LkeClient::DescribeConcurrencyUsageGraphCallable(const DescribeConcurrencyUsageGraphRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConcurrencyUsageGraphOutcome()>>(
        [this, request]()
        {
            return this->DescribeConcurrencyUsageGraph(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeCorpOutcome LkeClient::DescribeCorp(const DescribeCorpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCorp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCorpResponse rsp = DescribeCorpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCorpOutcome(rsp);
        else
            return DescribeCorpOutcome(o.GetError());
    }
    else
    {
        return DescribeCorpOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeCorpAsync(const DescribeCorpRequest& request, const DescribeCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCorp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeCorpOutcomeCallable LkeClient::DescribeCorpCallable(const DescribeCorpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCorpOutcome()>>(
        [this, request]()
        {
            return this->DescribeCorp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeDocOutcome LkeClient::DescribeDoc(const DescribeDocRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocResponse rsp = DescribeDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocOutcome(rsp);
        else
            return DescribeDocOutcome(o.GetError());
    }
    else
    {
        return DescribeDocOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeDocAsync(const DescribeDocRequest& request, const DescribeDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeDocOutcomeCallable LkeClient::DescribeDocCallable(const DescribeDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDocOutcome()>>(
        [this, request]()
        {
            return this->DescribeDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeKnowledgeUsageOutcome LkeClient::DescribeKnowledgeUsage(const DescribeKnowledgeUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeUsageResponse rsp = DescribeKnowledgeUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeUsageOutcome(rsp);
        else
            return DescribeKnowledgeUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeUsageOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeKnowledgeUsageAsync(const DescribeKnowledgeUsageRequest& request, const DescribeKnowledgeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKnowledgeUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeKnowledgeUsageOutcomeCallable LkeClient::DescribeKnowledgeUsageCallable(const DescribeKnowledgeUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKnowledgeUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeKnowledgeUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeKnowledgeUsagePieGraphOutcome LkeClient::DescribeKnowledgeUsagePieGraph(const DescribeKnowledgeUsagePieGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeUsagePieGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeUsagePieGraphResponse rsp = DescribeKnowledgeUsagePieGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeUsagePieGraphOutcome(rsp);
        else
            return DescribeKnowledgeUsagePieGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeUsagePieGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeKnowledgeUsagePieGraphAsync(const DescribeKnowledgeUsagePieGraphRequest& request, const DescribeKnowledgeUsagePieGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKnowledgeUsagePieGraph(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeKnowledgeUsagePieGraphOutcomeCallable LkeClient::DescribeKnowledgeUsagePieGraphCallable(const DescribeKnowledgeUsagePieGraphRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKnowledgeUsagePieGraphOutcome()>>(
        [this, request]()
        {
            return this->DescribeKnowledgeUsagePieGraph(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeNodeRunOutcome LkeClient::DescribeNodeRun(const DescribeNodeRunRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodeRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeRunResponse rsp = DescribeNodeRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeRunOutcome(rsp);
        else
            return DescribeNodeRunOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeRunOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeNodeRunAsync(const DescribeNodeRunRequest& request, const DescribeNodeRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNodeRun(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeNodeRunOutcomeCallable LkeClient::DescribeNodeRunCallable(const DescribeNodeRunRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodeRunOutcome()>>(
        [this, request]()
        {
            return this->DescribeNodeRun(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeQAOutcome LkeClient::DescribeQA(const DescribeQARequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQAResponse rsp = DescribeQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQAOutcome(rsp);
        else
            return DescribeQAOutcome(o.GetError());
    }
    else
    {
        return DescribeQAOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeQAAsync(const DescribeQARequest& request, const DescribeQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeQAOutcomeCallable LkeClient::DescribeQACallable(const DescribeQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQAOutcome()>>(
        [this, request]()
        {
            return this->DescribeQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeReferOutcome LkeClient::DescribeRefer(const DescribeReferRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRefer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReferResponse rsp = DescribeReferResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReferOutcome(rsp);
        else
            return DescribeReferOutcome(o.GetError());
    }
    else
    {
        return DescribeReferOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeReferAsync(const DescribeReferRequest& request, const DescribeReferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRefer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeReferOutcomeCallable LkeClient::DescribeReferCallable(const DescribeReferRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReferOutcome()>>(
        [this, request]()
        {
            return this->DescribeRefer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeReleaseOutcome LkeClient::DescribeRelease(const DescribeReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseResponse rsp = DescribeReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseOutcome(rsp);
        else
            return DescribeReleaseOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeReleaseAsync(const DescribeReleaseRequest& request, const DescribeReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeReleaseOutcomeCallable LkeClient::DescribeReleaseCallable(const DescribeReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReleaseOutcome()>>(
        [this, request]()
        {
            return this->DescribeRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeReleaseInfoOutcome LkeClient::DescribeReleaseInfo(const DescribeReleaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseInfoResponse rsp = DescribeReleaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseInfoOutcome(rsp);
        else
            return DescribeReleaseInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseInfoOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeReleaseInfoAsync(const DescribeReleaseInfoRequest& request, const DescribeReleaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReleaseInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeReleaseInfoOutcomeCallable LkeClient::DescribeReleaseInfoCallable(const DescribeReleaseInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReleaseInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeReleaseInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeRobotBizIDByAppKeyOutcome LkeClient::DescribeRobotBizIDByAppKey(const DescribeRobotBizIDByAppKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRobotBizIDByAppKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRobotBizIDByAppKeyResponse rsp = DescribeRobotBizIDByAppKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRobotBizIDByAppKeyOutcome(rsp);
        else
            return DescribeRobotBizIDByAppKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeRobotBizIDByAppKeyOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeRobotBizIDByAppKeyAsync(const DescribeRobotBizIDByAppKeyRequest& request, const DescribeRobotBizIDByAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRobotBizIDByAppKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeRobotBizIDByAppKeyOutcomeCallable LkeClient::DescribeRobotBizIDByAppKeyCallable(const DescribeRobotBizIDByAppKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRobotBizIDByAppKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeRobotBizIDByAppKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeSearchStatsGraphOutcome LkeClient::DescribeSearchStatsGraph(const DescribeSearchStatsGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchStatsGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchStatsGraphResponse rsp = DescribeSearchStatsGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchStatsGraphOutcome(rsp);
        else
            return DescribeSearchStatsGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchStatsGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeSearchStatsGraphAsync(const DescribeSearchStatsGraphRequest& request, const DescribeSearchStatsGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSearchStatsGraph(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeSearchStatsGraphOutcomeCallable LkeClient::DescribeSearchStatsGraphCallable(const DescribeSearchStatsGraphRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSearchStatsGraphOutcome()>>(
        [this, request]()
        {
            return this->DescribeSearchStatsGraph(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeSegmentsOutcome LkeClient::DescribeSegments(const DescribeSegmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSegments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSegmentsResponse rsp = DescribeSegmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSegmentsOutcome(rsp);
        else
            return DescribeSegmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeSegmentsOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeSegmentsAsync(const DescribeSegmentsRequest& request, const DescribeSegmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSegments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeSegmentsOutcomeCallable LkeClient::DescribeSegmentsCallable(const DescribeSegmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSegmentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSegments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeSharedKnowledgeOutcome LkeClient::DescribeSharedKnowledge(const DescribeSharedKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSharedKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSharedKnowledgeResponse rsp = DescribeSharedKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSharedKnowledgeOutcome(rsp);
        else
            return DescribeSharedKnowledgeOutcome(o.GetError());
    }
    else
    {
        return DescribeSharedKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeSharedKnowledgeAsync(const DescribeSharedKnowledgeRequest& request, const DescribeSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSharedKnowledge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeSharedKnowledgeOutcomeCallable LkeClient::DescribeSharedKnowledgeCallable(const DescribeSharedKnowledgeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSharedKnowledgeOutcome()>>(
        [this, request]()
        {
            return this->DescribeSharedKnowledge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeStorageCredentialOutcome LkeClient::DescribeStorageCredential(const DescribeStorageCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStorageCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStorageCredentialResponse rsp = DescribeStorageCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStorageCredentialOutcome(rsp);
        else
            return DescribeStorageCredentialOutcome(o.GetError());
    }
    else
    {
        return DescribeStorageCredentialOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeStorageCredentialAsync(const DescribeStorageCredentialRequest& request, const DescribeStorageCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStorageCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeStorageCredentialOutcomeCallable LkeClient::DescribeStorageCredentialCallable(const DescribeStorageCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStorageCredentialOutcome()>>(
        [this, request]()
        {
            return this->DescribeStorageCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeTokenUsageOutcome LkeClient::DescribeTokenUsage(const DescribeTokenUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenUsageResponse rsp = DescribeTokenUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenUsageOutcome(rsp);
        else
            return DescribeTokenUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenUsageOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeTokenUsageAsync(const DescribeTokenUsageRequest& request, const DescribeTokenUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTokenUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeTokenUsageOutcomeCallable LkeClient::DescribeTokenUsageCallable(const DescribeTokenUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTokenUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTokenUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeTokenUsageGraphOutcome LkeClient::DescribeTokenUsageGraph(const DescribeTokenUsageGraphRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTokenUsageGraph");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenUsageGraphResponse rsp = DescribeTokenUsageGraphResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenUsageGraphOutcome(rsp);
        else
            return DescribeTokenUsageGraphOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenUsageGraphOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeTokenUsageGraphAsync(const DescribeTokenUsageGraphRequest& request, const DescribeTokenUsageGraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTokenUsageGraph(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeTokenUsageGraphOutcomeCallable LkeClient::DescribeTokenUsageGraphCallable(const DescribeTokenUsageGraphRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTokenUsageGraphOutcome()>>(
        [this, request]()
        {
            return this->DescribeTokenUsageGraph(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeUnsatisfiedReplyContextOutcome LkeClient::DescribeUnsatisfiedReplyContext(const DescribeUnsatisfiedReplyContextRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnsatisfiedReplyContext");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnsatisfiedReplyContextResponse rsp = DescribeUnsatisfiedReplyContextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnsatisfiedReplyContextOutcome(rsp);
        else
            return DescribeUnsatisfiedReplyContextOutcome(o.GetError());
    }
    else
    {
        return DescribeUnsatisfiedReplyContextOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeUnsatisfiedReplyContextAsync(const DescribeUnsatisfiedReplyContextRequest& request, const DescribeUnsatisfiedReplyContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnsatisfiedReplyContext(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeUnsatisfiedReplyContextOutcomeCallable LkeClient::DescribeUnsatisfiedReplyContextCallable(const DescribeUnsatisfiedReplyContextRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnsatisfiedReplyContextOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnsatisfiedReplyContext(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::DescribeWorkflowRunOutcome LkeClient::DescribeWorkflowRun(const DescribeWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowRunResponse rsp = DescribeWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowRunOutcome(rsp);
        else
            return DescribeWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowRunOutcome(outcome.GetError());
    }
}

void LkeClient::DescribeWorkflowRunAsync(const DescribeWorkflowRunRequest& request, const DescribeWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowRun(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::DescribeWorkflowRunOutcomeCallable LkeClient::DescribeWorkflowRunCallable(const DescribeWorkflowRunRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowRunOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowRun(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ExportAttributeLabelOutcome LkeClient::ExportAttributeLabel(const ExportAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAttributeLabelResponse rsp = ExportAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAttributeLabelOutcome(rsp);
        else
            return ExportAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return ExportAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::ExportAttributeLabelAsync(const ExportAttributeLabelRequest& request, const ExportAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ExportAttributeLabelOutcomeCallable LkeClient::ExportAttributeLabelCallable(const ExportAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->ExportAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ExportQAListOutcome LkeClient::ExportQAList(const ExportQAListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportQAList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportQAListResponse rsp = ExportQAListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportQAListOutcome(rsp);
        else
            return ExportQAListOutcome(o.GetError());
    }
    else
    {
        return ExportQAListOutcome(outcome.GetError());
    }
}

void LkeClient::ExportQAListAsync(const ExportQAListRequest& request, const ExportQAListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportQAList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ExportQAListOutcomeCallable LkeClient::ExportQAListCallable(const ExportQAListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportQAListOutcome()>>(
        [this, request]()
        {
            return this->ExportQAList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ExportUnsatisfiedReplyOutcome LkeClient::ExportUnsatisfiedReply(const ExportUnsatisfiedReplyRequest &request)
{
    auto outcome = MakeRequest(request, "ExportUnsatisfiedReply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportUnsatisfiedReplyResponse rsp = ExportUnsatisfiedReplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportUnsatisfiedReplyOutcome(rsp);
        else
            return ExportUnsatisfiedReplyOutcome(o.GetError());
    }
    else
    {
        return ExportUnsatisfiedReplyOutcome(outcome.GetError());
    }
}

void LkeClient::ExportUnsatisfiedReplyAsync(const ExportUnsatisfiedReplyRequest& request, const ExportUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportUnsatisfiedReply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ExportUnsatisfiedReplyOutcomeCallable LkeClient::ExportUnsatisfiedReplyCallable(const ExportUnsatisfiedReplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportUnsatisfiedReplyOutcome()>>(
        [this, request]()
        {
            return this->ExportUnsatisfiedReply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GenerateQAOutcome LkeClient::GenerateQA(const GenerateQARequest &request)
{
    auto outcome = MakeRequest(request, "GenerateQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateQAResponse rsp = GenerateQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateQAOutcome(rsp);
        else
            return GenerateQAOutcome(o.GetError());
    }
    else
    {
        return GenerateQAOutcome(outcome.GetError());
    }
}

void LkeClient::GenerateQAAsync(const GenerateQARequest& request, const GenerateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GenerateQAOutcomeCallable LkeClient::GenerateQACallable(const GenerateQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateQAOutcome()>>(
        [this, request]()
        {
            return this->GenerateQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetAnswerTypeDataCountOutcome LkeClient::GetAnswerTypeDataCount(const GetAnswerTypeDataCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetAnswerTypeDataCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAnswerTypeDataCountResponse rsp = GetAnswerTypeDataCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAnswerTypeDataCountOutcome(rsp);
        else
            return GetAnswerTypeDataCountOutcome(o.GetError());
    }
    else
    {
        return GetAnswerTypeDataCountOutcome(outcome.GetError());
    }
}

void LkeClient::GetAnswerTypeDataCountAsync(const GetAnswerTypeDataCountRequest& request, const GetAnswerTypeDataCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAnswerTypeDataCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetAnswerTypeDataCountOutcomeCallable LkeClient::GetAnswerTypeDataCountCallable(const GetAnswerTypeDataCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAnswerTypeDataCountOutcome()>>(
        [this, request]()
        {
            return this->GetAnswerTypeDataCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetAppKnowledgeCountOutcome LkeClient::GetAppKnowledgeCount(const GetAppKnowledgeCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetAppKnowledgeCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAppKnowledgeCountResponse rsp = GetAppKnowledgeCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAppKnowledgeCountOutcome(rsp);
        else
            return GetAppKnowledgeCountOutcome(o.GetError());
    }
    else
    {
        return GetAppKnowledgeCountOutcome(outcome.GetError());
    }
}

void LkeClient::GetAppKnowledgeCountAsync(const GetAppKnowledgeCountRequest& request, const GetAppKnowledgeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAppKnowledgeCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetAppKnowledgeCountOutcomeCallable LkeClient::GetAppKnowledgeCountCallable(const GetAppKnowledgeCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAppKnowledgeCountOutcome()>>(
        [this, request]()
        {
            return this->GetAppKnowledgeCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetAppSecretOutcome LkeClient::GetAppSecret(const GetAppSecretRequest &request)
{
    auto outcome = MakeRequest(request, "GetAppSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAppSecretResponse rsp = GetAppSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAppSecretOutcome(rsp);
        else
            return GetAppSecretOutcome(o.GetError());
    }
    else
    {
        return GetAppSecretOutcome(outcome.GetError());
    }
}

void LkeClient::GetAppSecretAsync(const GetAppSecretRequest& request, const GetAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAppSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetAppSecretOutcomeCallable LkeClient::GetAppSecretCallable(const GetAppSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAppSecretOutcome()>>(
        [this, request]()
        {
            return this->GetAppSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetDocPreviewOutcome LkeClient::GetDocPreview(const GetDocPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "GetDocPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDocPreviewResponse rsp = GetDocPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDocPreviewOutcome(rsp);
        else
            return GetDocPreviewOutcome(o.GetError());
    }
    else
    {
        return GetDocPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::GetDocPreviewAsync(const GetDocPreviewRequest& request, const GetDocPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDocPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetDocPreviewOutcomeCallable LkeClient::GetDocPreviewCallable(const GetDocPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDocPreviewOutcome()>>(
        [this, request]()
        {
            return this->GetDocPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetEmbeddingOutcome LkeClient::GetEmbedding(const GetEmbeddingRequest &request)
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

void LkeClient::GetEmbeddingAsync(const GetEmbeddingRequest& request, const GetEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetEmbedding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetEmbeddingOutcomeCallable LkeClient::GetEmbeddingCallable(const GetEmbeddingRequest &request)
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

LkeClient::GetLikeDataCountOutcome LkeClient::GetLikeDataCount(const GetLikeDataCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetLikeDataCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLikeDataCountResponse rsp = GetLikeDataCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLikeDataCountOutcome(rsp);
        else
            return GetLikeDataCountOutcome(o.GetError());
    }
    else
    {
        return GetLikeDataCountOutcome(outcome.GetError());
    }
}

void LkeClient::GetLikeDataCountAsync(const GetLikeDataCountRequest& request, const GetLikeDataCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLikeDataCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetLikeDataCountOutcomeCallable LkeClient::GetLikeDataCountCallable(const GetLikeDataCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLikeDataCountOutcome()>>(
        [this, request]()
        {
            return this->GetLikeDataCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetMsgRecordOutcome LkeClient::GetMsgRecord(const GetMsgRecordRequest &request)
{
    auto outcome = MakeRequest(request, "GetMsgRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMsgRecordResponse rsp = GetMsgRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMsgRecordOutcome(rsp);
        else
            return GetMsgRecordOutcome(o.GetError());
    }
    else
    {
        return GetMsgRecordOutcome(outcome.GetError());
    }
}

void LkeClient::GetMsgRecordAsync(const GetMsgRecordRequest& request, const GetMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetMsgRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetMsgRecordOutcomeCallable LkeClient::GetMsgRecordCallable(const GetMsgRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetMsgRecordOutcome()>>(
        [this, request]()
        {
            return this->GetMsgRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetReconstructDocumentResultOutcome LkeClient::GetReconstructDocumentResult(const GetReconstructDocumentResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetReconstructDocumentResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetReconstructDocumentResultResponse rsp = GetReconstructDocumentResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetReconstructDocumentResultOutcome(rsp);
        else
            return GetReconstructDocumentResultOutcome(o.GetError());
    }
    else
    {
        return GetReconstructDocumentResultOutcome(outcome.GetError());
    }
}

void LkeClient::GetReconstructDocumentResultAsync(const GetReconstructDocumentResultRequest& request, const GetReconstructDocumentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetReconstructDocumentResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetReconstructDocumentResultOutcomeCallable LkeClient::GetReconstructDocumentResultCallable(const GetReconstructDocumentResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetReconstructDocumentResultOutcome()>>(
        [this, request]()
        {
            return this->GetReconstructDocumentResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetTaskStatusOutcome LkeClient::GetTaskStatus(const GetTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskStatusResponse rsp = GetTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskStatusOutcome(rsp);
        else
            return GetTaskStatusOutcome(o.GetError());
    }
    else
    {
        return GetTaskStatusOutcome(outcome.GetError());
    }
}

void LkeClient::GetTaskStatusAsync(const GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetTaskStatusOutcomeCallable LkeClient::GetTaskStatusCallable(const GetTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->GetTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetVarListOutcome LkeClient::GetVarList(const GetVarListRequest &request)
{
    auto outcome = MakeRequest(request, "GetVarList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetVarListResponse rsp = GetVarListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetVarListOutcome(rsp);
        else
            return GetVarListOutcome(o.GetError());
    }
    else
    {
        return GetVarListOutcome(outcome.GetError());
    }
}

void LkeClient::GetVarListAsync(const GetVarListRequest& request, const GetVarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetVarList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetVarListOutcomeCallable LkeClient::GetVarListCallable(const GetVarListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetVarListOutcome()>>(
        [this, request]()
        {
            return this->GetVarList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GetWsTokenOutcome LkeClient::GetWsToken(const GetWsTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetWsToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWsTokenResponse rsp = GetWsTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWsTokenOutcome(rsp);
        else
            return GetWsTokenOutcome(o.GetError());
    }
    else
    {
        return GetWsTokenOutcome(outcome.GetError());
    }
}

void LkeClient::GetWsTokenAsync(const GetWsTokenRequest& request, const GetWsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetWsToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GetWsTokenOutcomeCallable LkeClient::GetWsTokenCallable(const GetWsTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetWsTokenOutcome()>>(
        [this, request]()
        {
            return this->GetWsToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GroupDocOutcome LkeClient::GroupDoc(const GroupDocRequest &request)
{
    auto outcome = MakeRequest(request, "GroupDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GroupDocResponse rsp = GroupDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GroupDocOutcome(rsp);
        else
            return GroupDocOutcome(o.GetError());
    }
    else
    {
        return GroupDocOutcome(outcome.GetError());
    }
}

void LkeClient::GroupDocAsync(const GroupDocRequest& request, const GroupDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GroupDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GroupDocOutcomeCallable LkeClient::GroupDocCallable(const GroupDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GroupDocOutcome()>>(
        [this, request]()
        {
            return this->GroupDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::GroupQAOutcome LkeClient::GroupQA(const GroupQARequest &request)
{
    auto outcome = MakeRequest(request, "GroupQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GroupQAResponse rsp = GroupQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GroupQAOutcome(rsp);
        else
            return GroupQAOutcome(o.GetError());
    }
    else
    {
        return GroupQAOutcome(outcome.GetError());
    }
}

void LkeClient::GroupQAAsync(const GroupQARequest& request, const GroupQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GroupQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::GroupQAOutcomeCallable LkeClient::GroupQACallable(const GroupQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<GroupQAOutcome()>>(
        [this, request]()
        {
            return this->GroupQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::IgnoreUnsatisfiedReplyOutcome LkeClient::IgnoreUnsatisfiedReply(const IgnoreUnsatisfiedReplyRequest &request)
{
    auto outcome = MakeRequest(request, "IgnoreUnsatisfiedReply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IgnoreUnsatisfiedReplyResponse rsp = IgnoreUnsatisfiedReplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IgnoreUnsatisfiedReplyOutcome(rsp);
        else
            return IgnoreUnsatisfiedReplyOutcome(o.GetError());
    }
    else
    {
        return IgnoreUnsatisfiedReplyOutcome(outcome.GetError());
    }
}

void LkeClient::IgnoreUnsatisfiedReplyAsync(const IgnoreUnsatisfiedReplyRequest& request, const IgnoreUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IgnoreUnsatisfiedReply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::IgnoreUnsatisfiedReplyOutcomeCallable LkeClient::IgnoreUnsatisfiedReplyCallable(const IgnoreUnsatisfiedReplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IgnoreUnsatisfiedReplyOutcome()>>(
        [this, request]()
        {
            return this->IgnoreUnsatisfiedReply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::IsTransferIntentOutcome LkeClient::IsTransferIntent(const IsTransferIntentRequest &request)
{
    auto outcome = MakeRequest(request, "IsTransferIntent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsTransferIntentResponse rsp = IsTransferIntentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsTransferIntentOutcome(rsp);
        else
            return IsTransferIntentOutcome(o.GetError());
    }
    else
    {
        return IsTransferIntentOutcome(outcome.GetError());
    }
}

void LkeClient::IsTransferIntentAsync(const IsTransferIntentRequest& request, const IsTransferIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsTransferIntent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::IsTransferIntentOutcomeCallable LkeClient::IsTransferIntentCallable(const IsTransferIntentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsTransferIntentOutcome()>>(
        [this, request]()
        {
            return this->IsTransferIntent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListAppOutcome LkeClient::ListApp(const ListAppRequest &request)
{
    auto outcome = MakeRequest(request, "ListApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAppResponse rsp = ListAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAppOutcome(rsp);
        else
            return ListAppOutcome(o.GetError());
    }
    else
    {
        return ListAppOutcome(outcome.GetError());
    }
}

void LkeClient::ListAppAsync(const ListAppRequest& request, const ListAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListAppOutcomeCallable LkeClient::ListAppCallable(const ListAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAppOutcome()>>(
        [this, request]()
        {
            return this->ListApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListAppCategoryOutcome LkeClient::ListAppCategory(const ListAppCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "ListAppCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAppCategoryResponse rsp = ListAppCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAppCategoryOutcome(rsp);
        else
            return ListAppCategoryOutcome(o.GetError());
    }
    else
    {
        return ListAppCategoryOutcome(outcome.GetError());
    }
}

void LkeClient::ListAppCategoryAsync(const ListAppCategoryRequest& request, const ListAppCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAppCategory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListAppCategoryOutcomeCallable LkeClient::ListAppCategoryCallable(const ListAppCategoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAppCategoryOutcome()>>(
        [this, request]()
        {
            return this->ListAppCategory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListAppKnowledgeDetailOutcome LkeClient::ListAppKnowledgeDetail(const ListAppKnowledgeDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListAppKnowledgeDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAppKnowledgeDetailResponse rsp = ListAppKnowledgeDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAppKnowledgeDetailOutcome(rsp);
        else
            return ListAppKnowledgeDetailOutcome(o.GetError());
    }
    else
    {
        return ListAppKnowledgeDetailOutcome(outcome.GetError());
    }
}

void LkeClient::ListAppKnowledgeDetailAsync(const ListAppKnowledgeDetailRequest& request, const ListAppKnowledgeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAppKnowledgeDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListAppKnowledgeDetailOutcomeCallable LkeClient::ListAppKnowledgeDetailCallable(const ListAppKnowledgeDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAppKnowledgeDetailOutcome()>>(
        [this, request]()
        {
            return this->ListAppKnowledgeDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListAttributeLabelOutcome LkeClient::ListAttributeLabel(const ListAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttributeLabelResponse rsp = ListAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttributeLabelOutcome(rsp);
        else
            return ListAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return ListAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::ListAttributeLabelAsync(const ListAttributeLabelRequest& request, const ListAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListAttributeLabelOutcomeCallable LkeClient::ListAttributeLabelCallable(const ListAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->ListAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListDocOutcome LkeClient::ListDoc(const ListDocRequest &request)
{
    auto outcome = MakeRequest(request, "ListDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDocResponse rsp = ListDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDocOutcome(rsp);
        else
            return ListDocOutcome(o.GetError());
    }
    else
    {
        return ListDocOutcome(outcome.GetError());
    }
}

void LkeClient::ListDocAsync(const ListDocRequest& request, const ListDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListDocOutcomeCallable LkeClient::ListDocCallable(const ListDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDocOutcome()>>(
        [this, request]()
        {
            return this->ListDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListDocCateOutcome LkeClient::ListDocCate(const ListDocCateRequest &request)
{
    auto outcome = MakeRequest(request, "ListDocCate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDocCateResponse rsp = ListDocCateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDocCateOutcome(rsp);
        else
            return ListDocCateOutcome(o.GetError());
    }
    else
    {
        return ListDocCateOutcome(outcome.GetError());
    }
}

void LkeClient::ListDocCateAsync(const ListDocCateRequest& request, const ListDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDocCate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListDocCateOutcomeCallable LkeClient::ListDocCateCallable(const ListDocCateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDocCateOutcome()>>(
        [this, request]()
        {
            return this->ListDocCate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListModelOutcome LkeClient::ListModel(const ListModelRequest &request)
{
    auto outcome = MakeRequest(request, "ListModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListModelResponse rsp = ListModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListModelOutcome(rsp);
        else
            return ListModelOutcome(o.GetError());
    }
    else
    {
        return ListModelOutcome(outcome.GetError());
    }
}

void LkeClient::ListModelAsync(const ListModelRequest& request, const ListModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListModelOutcomeCallable LkeClient::ListModelCallable(const ListModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListModelOutcome()>>(
        [this, request]()
        {
            return this->ListModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListQAOutcome LkeClient::ListQA(const ListQARequest &request)
{
    auto outcome = MakeRequest(request, "ListQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQAResponse rsp = ListQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQAOutcome(rsp);
        else
            return ListQAOutcome(o.GetError());
    }
    else
    {
        return ListQAOutcome(outcome.GetError());
    }
}

void LkeClient::ListQAAsync(const ListQARequest& request, const ListQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListQAOutcomeCallable LkeClient::ListQACallable(const ListQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListQAOutcome()>>(
        [this, request]()
        {
            return this->ListQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListQACateOutcome LkeClient::ListQACate(const ListQACateRequest &request)
{
    auto outcome = MakeRequest(request, "ListQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQACateResponse rsp = ListQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQACateOutcome(rsp);
        else
            return ListQACateOutcome(o.GetError());
    }
    else
    {
        return ListQACateOutcome(outcome.GetError());
    }
}

void LkeClient::ListQACateAsync(const ListQACateRequest& request, const ListQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListQACate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListQACateOutcomeCallable LkeClient::ListQACateCallable(const ListQACateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListQACateOutcome()>>(
        [this, request]()
        {
            return this->ListQACate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListReferShareKnowledgeOutcome LkeClient::ListReferShareKnowledge(const ListReferShareKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "ListReferShareKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReferShareKnowledgeResponse rsp = ListReferShareKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReferShareKnowledgeOutcome(rsp);
        else
            return ListReferShareKnowledgeOutcome(o.GetError());
    }
    else
    {
        return ListReferShareKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::ListReferShareKnowledgeAsync(const ListReferShareKnowledgeRequest& request, const ListReferShareKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListReferShareKnowledge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListReferShareKnowledgeOutcomeCallable LkeClient::ListReferShareKnowledgeCallable(const ListReferShareKnowledgeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListReferShareKnowledgeOutcome()>>(
        [this, request]()
        {
            return this->ListReferShareKnowledge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListRejectedQuestionOutcome LkeClient::ListRejectedQuestion(const ListRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "ListRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRejectedQuestionResponse rsp = ListRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRejectedQuestionOutcome(rsp);
        else
            return ListRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return ListRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::ListRejectedQuestionAsync(const ListRejectedQuestionRequest& request, const ListRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRejectedQuestion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListRejectedQuestionOutcomeCallable LkeClient::ListRejectedQuestionCallable(const ListRejectedQuestionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRejectedQuestionOutcome()>>(
        [this, request]()
        {
            return this->ListRejectedQuestion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListRejectedQuestionPreviewOutcome LkeClient::ListRejectedQuestionPreview(const ListRejectedQuestionPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ListRejectedQuestionPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRejectedQuestionPreviewResponse rsp = ListRejectedQuestionPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRejectedQuestionPreviewOutcome(rsp);
        else
            return ListRejectedQuestionPreviewOutcome(o.GetError());
    }
    else
    {
        return ListRejectedQuestionPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::ListRejectedQuestionPreviewAsync(const ListRejectedQuestionPreviewRequest& request, const ListRejectedQuestionPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRejectedQuestionPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListRejectedQuestionPreviewOutcomeCallable LkeClient::ListRejectedQuestionPreviewCallable(const ListRejectedQuestionPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRejectedQuestionPreviewOutcome()>>(
        [this, request]()
        {
            return this->ListRejectedQuestionPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListReleaseOutcome LkeClient::ListRelease(const ListReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "ListRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReleaseResponse rsp = ListReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReleaseOutcome(rsp);
        else
            return ListReleaseOutcome(o.GetError());
    }
    else
    {
        return ListReleaseOutcome(outcome.GetError());
    }
}

void LkeClient::ListReleaseAsync(const ListReleaseRequest& request, const ListReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListReleaseOutcomeCallable LkeClient::ListReleaseCallable(const ListReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListReleaseOutcome()>>(
        [this, request]()
        {
            return this->ListRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListReleaseConfigPreviewOutcome LkeClient::ListReleaseConfigPreview(const ListReleaseConfigPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ListReleaseConfigPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReleaseConfigPreviewResponse rsp = ListReleaseConfigPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReleaseConfigPreviewOutcome(rsp);
        else
            return ListReleaseConfigPreviewOutcome(o.GetError());
    }
    else
    {
        return ListReleaseConfigPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::ListReleaseConfigPreviewAsync(const ListReleaseConfigPreviewRequest& request, const ListReleaseConfigPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListReleaseConfigPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListReleaseConfigPreviewOutcomeCallable LkeClient::ListReleaseConfigPreviewCallable(const ListReleaseConfigPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListReleaseConfigPreviewOutcome()>>(
        [this, request]()
        {
            return this->ListReleaseConfigPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListReleaseDocPreviewOutcome LkeClient::ListReleaseDocPreview(const ListReleaseDocPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ListReleaseDocPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReleaseDocPreviewResponse rsp = ListReleaseDocPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReleaseDocPreviewOutcome(rsp);
        else
            return ListReleaseDocPreviewOutcome(o.GetError());
    }
    else
    {
        return ListReleaseDocPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::ListReleaseDocPreviewAsync(const ListReleaseDocPreviewRequest& request, const ListReleaseDocPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListReleaseDocPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListReleaseDocPreviewOutcomeCallable LkeClient::ListReleaseDocPreviewCallable(const ListReleaseDocPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListReleaseDocPreviewOutcome()>>(
        [this, request]()
        {
            return this->ListReleaseDocPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListReleaseQAPreviewOutcome LkeClient::ListReleaseQAPreview(const ListReleaseQAPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "ListReleaseQAPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReleaseQAPreviewResponse rsp = ListReleaseQAPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReleaseQAPreviewOutcome(rsp);
        else
            return ListReleaseQAPreviewOutcome(o.GetError());
    }
    else
    {
        return ListReleaseQAPreviewOutcome(outcome.GetError());
    }
}

void LkeClient::ListReleaseQAPreviewAsync(const ListReleaseQAPreviewRequest& request, const ListReleaseQAPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListReleaseQAPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListReleaseQAPreviewOutcomeCallable LkeClient::ListReleaseQAPreviewCallable(const ListReleaseQAPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListReleaseQAPreviewOutcome()>>(
        [this, request]()
        {
            return this->ListReleaseQAPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListSelectDocOutcome LkeClient::ListSelectDoc(const ListSelectDocRequest &request)
{
    auto outcome = MakeRequest(request, "ListSelectDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSelectDocResponse rsp = ListSelectDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSelectDocOutcome(rsp);
        else
            return ListSelectDocOutcome(o.GetError());
    }
    else
    {
        return ListSelectDocOutcome(outcome.GetError());
    }
}

void LkeClient::ListSelectDocAsync(const ListSelectDocRequest& request, const ListSelectDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSelectDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListSelectDocOutcomeCallable LkeClient::ListSelectDocCallable(const ListSelectDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSelectDocOutcome()>>(
        [this, request]()
        {
            return this->ListSelectDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListSharedKnowledgeOutcome LkeClient::ListSharedKnowledge(const ListSharedKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "ListSharedKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSharedKnowledgeResponse rsp = ListSharedKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSharedKnowledgeOutcome(rsp);
        else
            return ListSharedKnowledgeOutcome(o.GetError());
    }
    else
    {
        return ListSharedKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::ListSharedKnowledgeAsync(const ListSharedKnowledgeRequest& request, const ListSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSharedKnowledge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListSharedKnowledgeOutcomeCallable LkeClient::ListSharedKnowledgeCallable(const ListSharedKnowledgeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSharedKnowledgeOutcome()>>(
        [this, request]()
        {
            return this->ListSharedKnowledge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListUnsatisfiedReplyOutcome LkeClient::ListUnsatisfiedReply(const ListUnsatisfiedReplyRequest &request)
{
    auto outcome = MakeRequest(request, "ListUnsatisfiedReply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUnsatisfiedReplyResponse rsp = ListUnsatisfiedReplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUnsatisfiedReplyOutcome(rsp);
        else
            return ListUnsatisfiedReplyOutcome(o.GetError());
    }
    else
    {
        return ListUnsatisfiedReplyOutcome(outcome.GetError());
    }
}

void LkeClient::ListUnsatisfiedReplyAsync(const ListUnsatisfiedReplyRequest& request, const ListUnsatisfiedReplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUnsatisfiedReply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListUnsatisfiedReplyOutcomeCallable LkeClient::ListUnsatisfiedReplyCallable(const ListUnsatisfiedReplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUnsatisfiedReplyOutcome()>>(
        [this, request]()
        {
            return this->ListUnsatisfiedReply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListUsageCallDetailOutcome LkeClient::ListUsageCallDetail(const ListUsageCallDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsageCallDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsageCallDetailResponse rsp = ListUsageCallDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsageCallDetailOutcome(rsp);
        else
            return ListUsageCallDetailOutcome(o.GetError());
    }
    else
    {
        return ListUsageCallDetailOutcome(outcome.GetError());
    }
}

void LkeClient::ListUsageCallDetailAsync(const ListUsageCallDetailRequest& request, const ListUsageCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUsageCallDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListUsageCallDetailOutcomeCallable LkeClient::ListUsageCallDetailCallable(const ListUsageCallDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUsageCallDetailOutcome()>>(
        [this, request]()
        {
            return this->ListUsageCallDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ListWorkflowRunsOutcome LkeClient::ListWorkflowRuns(const ListWorkflowRunsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflowRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowRunsResponse rsp = ListWorkflowRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowRunsOutcome(rsp);
        else
            return ListWorkflowRunsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowRunsOutcome(outcome.GetError());
    }
}

void LkeClient::ListWorkflowRunsAsync(const ListWorkflowRunsRequest& request, const ListWorkflowRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListWorkflowRuns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ListWorkflowRunsOutcomeCallable LkeClient::ListWorkflowRunsCallable(const ListWorkflowRunsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListWorkflowRunsOutcome()>>(
        [this, request]()
        {
            return this->ListWorkflowRuns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyAppOutcome LkeClient::ModifyApp(const ModifyAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppResponse rsp = ModifyAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppOutcome(rsp);
        else
            return ModifyAppOutcome(o.GetError());
    }
    else
    {
        return ModifyAppOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyAppAsync(const ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyAppOutcomeCallable LkeClient::ModifyAppCallable(const ModifyAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAppOutcome()>>(
        [this, request]()
        {
            return this->ModifyApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyAttributeLabelOutcome LkeClient::ModifyAttributeLabel(const ModifyAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAttributeLabelResponse rsp = ModifyAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAttributeLabelOutcome(rsp);
        else
            return ModifyAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return ModifyAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyAttributeLabelAsync(const ModifyAttributeLabelRequest& request, const ModifyAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyAttributeLabelOutcomeCallable LkeClient::ModifyAttributeLabelCallable(const ModifyAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->ModifyAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyDocOutcome LkeClient::ModifyDoc(const ModifyDocRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDocResponse rsp = ModifyDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDocOutcome(rsp);
        else
            return ModifyDocOutcome(o.GetError());
    }
    else
    {
        return ModifyDocOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyDocAsync(const ModifyDocRequest& request, const ModifyDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyDocOutcomeCallable LkeClient::ModifyDocCallable(const ModifyDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDocOutcome()>>(
        [this, request]()
        {
            return this->ModifyDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyDocAttrRangeOutcome LkeClient::ModifyDocAttrRange(const ModifyDocAttrRangeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDocAttrRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDocAttrRangeResponse rsp = ModifyDocAttrRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDocAttrRangeOutcome(rsp);
        else
            return ModifyDocAttrRangeOutcome(o.GetError());
    }
    else
    {
        return ModifyDocAttrRangeOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyDocAttrRangeAsync(const ModifyDocAttrRangeRequest& request, const ModifyDocAttrRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDocAttrRange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyDocAttrRangeOutcomeCallable LkeClient::ModifyDocAttrRangeCallable(const ModifyDocAttrRangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDocAttrRangeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDocAttrRange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyDocCateOutcome LkeClient::ModifyDocCate(const ModifyDocCateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDocCate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDocCateResponse rsp = ModifyDocCateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDocCateOutcome(rsp);
        else
            return ModifyDocCateOutcome(o.GetError());
    }
    else
    {
        return ModifyDocCateOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyDocCateAsync(const ModifyDocCateRequest& request, const ModifyDocCateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDocCate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyDocCateOutcomeCallable LkeClient::ModifyDocCateCallable(const ModifyDocCateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDocCateOutcome()>>(
        [this, request]()
        {
            return this->ModifyDocCate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyQAOutcome LkeClient::ModifyQA(const ModifyQARequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQAResponse rsp = ModifyQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQAOutcome(rsp);
        else
            return ModifyQAOutcome(o.GetError());
    }
    else
    {
        return ModifyQAOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyQAAsync(const ModifyQARequest& request, const ModifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyQAOutcomeCallable LkeClient::ModifyQACallable(const ModifyQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQAOutcome()>>(
        [this, request]()
        {
            return this->ModifyQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyQAAttrRangeOutcome LkeClient::ModifyQAAttrRange(const ModifyQAAttrRangeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQAAttrRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQAAttrRangeResponse rsp = ModifyQAAttrRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQAAttrRangeOutcome(rsp);
        else
            return ModifyQAAttrRangeOutcome(o.GetError());
    }
    else
    {
        return ModifyQAAttrRangeOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyQAAttrRangeAsync(const ModifyQAAttrRangeRequest& request, const ModifyQAAttrRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQAAttrRange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyQAAttrRangeOutcomeCallable LkeClient::ModifyQAAttrRangeCallable(const ModifyQAAttrRangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQAAttrRangeOutcome()>>(
        [this, request]()
        {
            return this->ModifyQAAttrRange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyQACateOutcome LkeClient::ModifyQACate(const ModifyQACateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQACate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQACateResponse rsp = ModifyQACateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQACateOutcome(rsp);
        else
            return ModifyQACateOutcome(o.GetError());
    }
    else
    {
        return ModifyQACateOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyQACateAsync(const ModifyQACateRequest& request, const ModifyQACateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQACate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyQACateOutcomeCallable LkeClient::ModifyQACateCallable(const ModifyQACateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQACateOutcome()>>(
        [this, request]()
        {
            return this->ModifyQACate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ModifyRejectedQuestionOutcome LkeClient::ModifyRejectedQuestion(const ModifyRejectedQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRejectedQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRejectedQuestionResponse rsp = ModifyRejectedQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRejectedQuestionOutcome(rsp);
        else
            return ModifyRejectedQuestionOutcome(o.GetError());
    }
    else
    {
        return ModifyRejectedQuestionOutcome(outcome.GetError());
    }
}

void LkeClient::ModifyRejectedQuestionAsync(const ModifyRejectedQuestionRequest& request, const ModifyRejectedQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRejectedQuestion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ModifyRejectedQuestionOutcomeCallable LkeClient::ModifyRejectedQuestionCallable(const ModifyRejectedQuestionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRejectedQuestionOutcome()>>(
        [this, request]()
        {
            return this->ModifyRejectedQuestion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::QueryRewriteOutcome LkeClient::QueryRewrite(const QueryRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "QueryRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryRewriteResponse rsp = QueryRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryRewriteOutcome(rsp);
        else
            return QueryRewriteOutcome(o.GetError());
    }
    else
    {
        return QueryRewriteOutcome(outcome.GetError());
    }
}

void LkeClient::QueryRewriteAsync(const QueryRewriteRequest& request, const QueryRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryRewrite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::QueryRewriteOutcomeCallable LkeClient::QueryRewriteCallable(const QueryRewriteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryRewriteOutcome()>>(
        [this, request]()
        {
            return this->QueryRewrite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::RateMsgRecordOutcome LkeClient::RateMsgRecord(const RateMsgRecordRequest &request)
{
    auto outcome = MakeRequest(request, "RateMsgRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RateMsgRecordResponse rsp = RateMsgRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RateMsgRecordOutcome(rsp);
        else
            return RateMsgRecordOutcome(o.GetError());
    }
    else
    {
        return RateMsgRecordOutcome(outcome.GetError());
    }
}

void LkeClient::RateMsgRecordAsync(const RateMsgRecordRequest& request, const RateMsgRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RateMsgRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::RateMsgRecordOutcomeCallable LkeClient::RateMsgRecordCallable(const RateMsgRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RateMsgRecordOutcome()>>(
        [this, request]()
        {
            return this->RateMsgRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ReconstructDocumentOutcome LkeClient::ReconstructDocument(const ReconstructDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "ReconstructDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReconstructDocumentResponse rsp = ReconstructDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReconstructDocumentOutcome(rsp);
        else
            return ReconstructDocumentOutcome(o.GetError());
    }
    else
    {
        return ReconstructDocumentOutcome(outcome.GetError());
    }
}

void LkeClient::ReconstructDocumentAsync(const ReconstructDocumentRequest& request, const ReconstructDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReconstructDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ReconstructDocumentOutcomeCallable LkeClient::ReconstructDocumentCallable(const ReconstructDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReconstructDocumentOutcome()>>(
        [this, request]()
        {
            return this->ReconstructDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::ReferShareKnowledgeOutcome LkeClient::ReferShareKnowledge(const ReferShareKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "ReferShareKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReferShareKnowledgeResponse rsp = ReferShareKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReferShareKnowledgeOutcome(rsp);
        else
            return ReferShareKnowledgeOutcome(o.GetError());
    }
    else
    {
        return ReferShareKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::ReferShareKnowledgeAsync(const ReferShareKnowledgeRequest& request, const ReferShareKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReferShareKnowledge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::ReferShareKnowledgeOutcomeCallable LkeClient::ReferShareKnowledgeCallable(const ReferShareKnowledgeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReferShareKnowledgeOutcome()>>(
        [this, request]()
        {
            return this->ReferShareKnowledge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::RenameDocOutcome LkeClient::RenameDoc(const RenameDocRequest &request)
{
    auto outcome = MakeRequest(request, "RenameDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenameDocResponse rsp = RenameDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenameDocOutcome(rsp);
        else
            return RenameDocOutcome(o.GetError());
    }
    else
    {
        return RenameDocOutcome(outcome.GetError());
    }
}

void LkeClient::RenameDocAsync(const RenameDocRequest& request, const RenameDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenameDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::RenameDocOutcomeCallable LkeClient::RenameDocCallable(const RenameDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenameDocOutcome()>>(
        [this, request]()
        {
            return this->RenameDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::RetryDocAuditOutcome LkeClient::RetryDocAudit(const RetryDocAuditRequest &request)
{
    auto outcome = MakeRequest(request, "RetryDocAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryDocAuditResponse rsp = RetryDocAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryDocAuditOutcome(rsp);
        else
            return RetryDocAuditOutcome(o.GetError());
    }
    else
    {
        return RetryDocAuditOutcome(outcome.GetError());
    }
}

void LkeClient::RetryDocAuditAsync(const RetryDocAuditRequest& request, const RetryDocAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryDocAudit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::RetryDocAuditOutcomeCallable LkeClient::RetryDocAuditCallable(const RetryDocAuditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryDocAuditOutcome()>>(
        [this, request]()
        {
            return this->RetryDocAudit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::RetryDocParseOutcome LkeClient::RetryDocParse(const RetryDocParseRequest &request)
{
    auto outcome = MakeRequest(request, "RetryDocParse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryDocParseResponse rsp = RetryDocParseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryDocParseOutcome(rsp);
        else
            return RetryDocParseOutcome(o.GetError());
    }
    else
    {
        return RetryDocParseOutcome(outcome.GetError());
    }
}

void LkeClient::RetryDocParseAsync(const RetryDocParseRequest& request, const RetryDocParseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryDocParse(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::RetryDocParseOutcomeCallable LkeClient::RetryDocParseCallable(const RetryDocParseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryDocParseOutcome()>>(
        [this, request]()
        {
            return this->RetryDocParse(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::RetryReleaseOutcome LkeClient::RetryRelease(const RetryReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "RetryRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryReleaseResponse rsp = RetryReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryReleaseOutcome(rsp);
        else
            return RetryReleaseOutcome(o.GetError());
    }
    else
    {
        return RetryReleaseOutcome(outcome.GetError());
    }
}

void LkeClient::RetryReleaseAsync(const RetryReleaseRequest& request, const RetryReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::RetryReleaseOutcomeCallable LkeClient::RetryReleaseCallable(const RetryReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryReleaseOutcome()>>(
        [this, request]()
        {
            return this->RetryRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::RunReRankOutcome LkeClient::RunReRank(const RunReRankRequest &request)
{
    auto outcome = MakeRequest(request, "RunReRank");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunReRankResponse rsp = RunReRankResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunReRankOutcome(rsp);
        else
            return RunReRankOutcome(o.GetError());
    }
    else
    {
        return RunReRankOutcome(outcome.GetError());
    }
}

void LkeClient::RunReRankAsync(const RunReRankRequest& request, const RunReRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunReRank(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::RunReRankOutcomeCallable LkeClient::RunReRankCallable(const RunReRankRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunReRankOutcome()>>(
        [this, request]()
        {
            return this->RunReRank(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::SaveDocOutcome LkeClient::SaveDoc(const SaveDocRequest &request)
{
    auto outcome = MakeRequest(request, "SaveDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveDocResponse rsp = SaveDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveDocOutcome(rsp);
        else
            return SaveDocOutcome(o.GetError());
    }
    else
    {
        return SaveDocOutcome(outcome.GetError());
    }
}

void LkeClient::SaveDocAsync(const SaveDocRequest& request, const SaveDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SaveDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::SaveDocOutcomeCallable LkeClient::SaveDocCallable(const SaveDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SaveDocOutcome()>>(
        [this, request]()
        {
            return this->SaveDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::StopDocParseOutcome LkeClient::StopDocParse(const StopDocParseRequest &request)
{
    auto outcome = MakeRequest(request, "StopDocParse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopDocParseResponse rsp = StopDocParseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopDocParseOutcome(rsp);
        else
            return StopDocParseOutcome(o.GetError());
    }
    else
    {
        return StopDocParseOutcome(outcome.GetError());
    }
}

void LkeClient::StopDocParseAsync(const StopDocParseRequest& request, const StopDocParseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopDocParse(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::StopDocParseOutcomeCallable LkeClient::StopDocParseCallable(const StopDocParseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopDocParseOutcome()>>(
        [this, request]()
        {
            return this->StopDocParse(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::StopWorkflowRunOutcome LkeClient::StopWorkflowRun(const StopWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "StopWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopWorkflowRunResponse rsp = StopWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopWorkflowRunOutcome(rsp);
        else
            return StopWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return StopWorkflowRunOutcome(outcome.GetError());
    }
}

void LkeClient::StopWorkflowRunAsync(const StopWorkflowRunRequest& request, const StopWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopWorkflowRun(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::StopWorkflowRunOutcomeCallable LkeClient::StopWorkflowRunCallable(const StopWorkflowRunRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopWorkflowRunOutcome()>>(
        [this, request]()
        {
            return this->StopWorkflowRun(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::UpdateSharedKnowledgeOutcome LkeClient::UpdateSharedKnowledge(const UpdateSharedKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSharedKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSharedKnowledgeResponse rsp = UpdateSharedKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSharedKnowledgeOutcome(rsp);
        else
            return UpdateSharedKnowledgeOutcome(o.GetError());
    }
    else
    {
        return UpdateSharedKnowledgeOutcome(outcome.GetError());
    }
}

void LkeClient::UpdateSharedKnowledgeAsync(const UpdateSharedKnowledgeRequest& request, const UpdateSharedKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateSharedKnowledge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::UpdateSharedKnowledgeOutcomeCallable LkeClient::UpdateSharedKnowledgeCallable(const UpdateSharedKnowledgeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateSharedKnowledgeOutcome()>>(
        [this, request]()
        {
            return this->UpdateSharedKnowledge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::UpdateVarOutcome LkeClient::UpdateVar(const UpdateVarRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateVar");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateVarResponse rsp = UpdateVarResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateVarOutcome(rsp);
        else
            return UpdateVarOutcome(o.GetError());
    }
    else
    {
        return UpdateVarOutcome(outcome.GetError());
    }
}

void LkeClient::UpdateVarAsync(const UpdateVarRequest& request, const UpdateVarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateVar(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::UpdateVarOutcomeCallable LkeClient::UpdateVarCallable(const UpdateVarRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateVarOutcome()>>(
        [this, request]()
        {
            return this->UpdateVar(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::UploadAttributeLabelOutcome LkeClient::UploadAttributeLabel(const UploadAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "UploadAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadAttributeLabelResponse rsp = UploadAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadAttributeLabelOutcome(rsp);
        else
            return UploadAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return UploadAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeClient::UploadAttributeLabelAsync(const UploadAttributeLabelRequest& request, const UploadAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::UploadAttributeLabelOutcomeCallable LkeClient::UploadAttributeLabelCallable(const UploadAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->UploadAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LkeClient::VerifyQAOutcome LkeClient::VerifyQA(const VerifyQARequest &request)
{
    auto outcome = MakeRequest(request, "VerifyQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyQAResponse rsp = VerifyQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyQAOutcome(rsp);
        else
            return VerifyQAOutcome(o.GetError());
    }
    else
    {
        return VerifyQAOutcome(outcome.GetError());
    }
}

void LkeClient::VerifyQAAsync(const VerifyQARequest& request, const VerifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeClient::VerifyQAOutcomeCallable LkeClient::VerifyQACallable(const VerifyQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyQAOutcome()>>(
        [this, request]()
        {
            return this->VerifyQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


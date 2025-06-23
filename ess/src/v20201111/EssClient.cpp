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

#include <tencentcloud/ess/v20201111/EssClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ess::V20201111;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-11";
    const string ENDPOINT = "ess.tencentcloudapi.com";
}

EssClient::EssClient(const Credential &credential, const string &region) :
    EssClient(credential, region, ClientProfile())
{
}

EssClient::EssClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EssClient::ArchiveDynamicFlowOutcome EssClient::ArchiveDynamicFlow(const ArchiveDynamicFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ArchiveDynamicFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ArchiveDynamicFlowResponse rsp = ArchiveDynamicFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ArchiveDynamicFlowOutcome(rsp);
        else
            return ArchiveDynamicFlowOutcome(o.GetError());
    }
    else
    {
        return ArchiveDynamicFlowOutcome(outcome.GetError());
    }
}

void EssClient::ArchiveDynamicFlowAsync(const ArchiveDynamicFlowRequest& request, const ArchiveDynamicFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ArchiveDynamicFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::ArchiveDynamicFlowOutcomeCallable EssClient::ArchiveDynamicFlowCallable(const ArchiveDynamicFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ArchiveDynamicFlowOutcome()>>(
        [this, request]()
        {
            return this->ArchiveDynamicFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::BindEmployeeUserIdWithClientOpenIdOutcome EssClient::BindEmployeeUserIdWithClientOpenId(const BindEmployeeUserIdWithClientOpenIdRequest &request)
{
    auto outcome = MakeRequest(request, "BindEmployeeUserIdWithClientOpenId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindEmployeeUserIdWithClientOpenIdResponse rsp = BindEmployeeUserIdWithClientOpenIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindEmployeeUserIdWithClientOpenIdOutcome(rsp);
        else
            return BindEmployeeUserIdWithClientOpenIdOutcome(o.GetError());
    }
    else
    {
        return BindEmployeeUserIdWithClientOpenIdOutcome(outcome.GetError());
    }
}

void EssClient::BindEmployeeUserIdWithClientOpenIdAsync(const BindEmployeeUserIdWithClientOpenIdRequest& request, const BindEmployeeUserIdWithClientOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindEmployeeUserIdWithClientOpenId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::BindEmployeeUserIdWithClientOpenIdOutcomeCallable EssClient::BindEmployeeUserIdWithClientOpenIdCallable(const BindEmployeeUserIdWithClientOpenIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindEmployeeUserIdWithClientOpenIdOutcome()>>(
        [this, request]()
        {
            return this->BindEmployeeUserIdWithClientOpenId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CancelFlowOutcome EssClient::CancelFlow(const CancelFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CancelFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelFlowResponse rsp = CancelFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelFlowOutcome(rsp);
        else
            return CancelFlowOutcome(o.GetError());
    }
    else
    {
        return CancelFlowOutcome(outcome.GetError());
    }
}

void EssClient::CancelFlowAsync(const CancelFlowRequest& request, const CancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CancelFlowOutcomeCallable EssClient::CancelFlowCallable(const CancelFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelFlowOutcome()>>(
        [this, request]()
        {
            return this->CancelFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CancelMultiFlowSignQRCodeOutcome EssClient::CancelMultiFlowSignQRCode(const CancelMultiFlowSignQRCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CancelMultiFlowSignQRCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelMultiFlowSignQRCodeResponse rsp = CancelMultiFlowSignQRCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelMultiFlowSignQRCodeOutcome(rsp);
        else
            return CancelMultiFlowSignQRCodeOutcome(o.GetError());
    }
    else
    {
        return CancelMultiFlowSignQRCodeOutcome(outcome.GetError());
    }
}

void EssClient::CancelMultiFlowSignQRCodeAsync(const CancelMultiFlowSignQRCodeRequest& request, const CancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelMultiFlowSignQRCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CancelMultiFlowSignQRCodeOutcomeCallable EssClient::CancelMultiFlowSignQRCodeCallable(const CancelMultiFlowSignQRCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelMultiFlowSignQRCodeOutcome()>>(
        [this, request]()
        {
            return this->CancelMultiFlowSignQRCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CancelUserAutoSignEnableUrlOutcome EssClient::CancelUserAutoSignEnableUrl(const CancelUserAutoSignEnableUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CancelUserAutoSignEnableUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelUserAutoSignEnableUrlResponse rsp = CancelUserAutoSignEnableUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelUserAutoSignEnableUrlOutcome(rsp);
        else
            return CancelUserAutoSignEnableUrlOutcome(o.GetError());
    }
    else
    {
        return CancelUserAutoSignEnableUrlOutcome(outcome.GetError());
    }
}

void EssClient::CancelUserAutoSignEnableUrlAsync(const CancelUserAutoSignEnableUrlRequest& request, const CancelUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelUserAutoSignEnableUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CancelUserAutoSignEnableUrlOutcomeCallable EssClient::CancelUserAutoSignEnableUrlCallable(const CancelUserAutoSignEnableUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelUserAutoSignEnableUrlOutcome()>>(
        [this, request]()
        {
            return this->CancelUserAutoSignEnableUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateBatchCancelFlowUrlOutcome EssClient::CreateBatchCancelFlowUrl(const CreateBatchCancelFlowUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchCancelFlowUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchCancelFlowUrlResponse rsp = CreateBatchCancelFlowUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchCancelFlowUrlOutcome(rsp);
        else
            return CreateBatchCancelFlowUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchCancelFlowUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchCancelFlowUrlAsync(const CreateBatchCancelFlowUrlRequest& request, const CreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchCancelFlowUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateBatchCancelFlowUrlOutcomeCallable EssClient::CreateBatchCancelFlowUrlCallable(const CreateBatchCancelFlowUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchCancelFlowUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchCancelFlowUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateBatchInitOrganizationUrlOutcome EssClient::CreateBatchInitOrganizationUrl(const CreateBatchInitOrganizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchInitOrganizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchInitOrganizationUrlResponse rsp = CreateBatchInitOrganizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchInitOrganizationUrlOutcome(rsp);
        else
            return CreateBatchInitOrganizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchInitOrganizationUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchInitOrganizationUrlAsync(const CreateBatchInitOrganizationUrlRequest& request, const CreateBatchInitOrganizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchInitOrganizationUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateBatchInitOrganizationUrlOutcomeCallable EssClient::CreateBatchInitOrganizationUrlCallable(const CreateBatchInitOrganizationUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchInitOrganizationUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchInitOrganizationUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateBatchOrganizationAuthorizationUrlOutcome EssClient::CreateBatchOrganizationAuthorizationUrl(const CreateBatchOrganizationAuthorizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchOrganizationAuthorizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchOrganizationAuthorizationUrlResponse rsp = CreateBatchOrganizationAuthorizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchOrganizationAuthorizationUrlOutcome(rsp);
        else
            return CreateBatchOrganizationAuthorizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchOrganizationAuthorizationUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchOrganizationAuthorizationUrlAsync(const CreateBatchOrganizationAuthorizationUrlRequest& request, const CreateBatchOrganizationAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchOrganizationAuthorizationUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateBatchOrganizationAuthorizationUrlOutcomeCallable EssClient::CreateBatchOrganizationAuthorizationUrlCallable(const CreateBatchOrganizationAuthorizationUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchOrganizationAuthorizationUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchOrganizationAuthorizationUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateBatchOrganizationRegistrationTasksOutcome EssClient::CreateBatchOrganizationRegistrationTasks(const CreateBatchOrganizationRegistrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchOrganizationRegistrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchOrganizationRegistrationTasksResponse rsp = CreateBatchOrganizationRegistrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchOrganizationRegistrationTasksOutcome(rsp);
        else
            return CreateBatchOrganizationRegistrationTasksOutcome(o.GetError());
    }
    else
    {
        return CreateBatchOrganizationRegistrationTasksOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchOrganizationRegistrationTasksAsync(const CreateBatchOrganizationRegistrationTasksRequest& request, const CreateBatchOrganizationRegistrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchOrganizationRegistrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateBatchOrganizationRegistrationTasksOutcomeCallable EssClient::CreateBatchOrganizationRegistrationTasksCallable(const CreateBatchOrganizationRegistrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchOrganizationRegistrationTasksOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchOrganizationRegistrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateBatchQuickSignUrlOutcome EssClient::CreateBatchQuickSignUrl(const CreateBatchQuickSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchQuickSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchQuickSignUrlResponse rsp = CreateBatchQuickSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchQuickSignUrlOutcome(rsp);
        else
            return CreateBatchQuickSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchQuickSignUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchQuickSignUrlAsync(const CreateBatchQuickSignUrlRequest& request, const CreateBatchQuickSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchQuickSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateBatchQuickSignUrlOutcomeCallable EssClient::CreateBatchQuickSignUrlCallable(const CreateBatchQuickSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchQuickSignUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchQuickSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateBatchSignUrlOutcome EssClient::CreateBatchSignUrl(const CreateBatchSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchSignUrlResponse rsp = CreateBatchSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchSignUrlOutcome(rsp);
        else
            return CreateBatchSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreateBatchSignUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateBatchSignUrlAsync(const CreateBatchSignUrlRequest& request, const CreateBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateBatchSignUrlOutcomeCallable EssClient::CreateBatchSignUrlCallable(const CreateBatchSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchSignUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateContractDiffTaskWebUrlOutcome EssClient::CreateContractDiffTaskWebUrl(const CreateContractDiffTaskWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContractDiffTaskWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContractDiffTaskWebUrlResponse rsp = CreateContractDiffTaskWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContractDiffTaskWebUrlOutcome(rsp);
        else
            return CreateContractDiffTaskWebUrlOutcome(o.GetError());
    }
    else
    {
        return CreateContractDiffTaskWebUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateContractDiffTaskWebUrlAsync(const CreateContractDiffTaskWebUrlRequest& request, const CreateContractDiffTaskWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateContractDiffTaskWebUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateContractDiffTaskWebUrlOutcomeCallable EssClient::CreateContractDiffTaskWebUrlCallable(const CreateContractDiffTaskWebUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateContractDiffTaskWebUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateContractDiffTaskWebUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateConvertTaskApiOutcome EssClient::CreateConvertTaskApi(const CreateConvertTaskApiRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConvertTaskApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConvertTaskApiResponse rsp = CreateConvertTaskApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConvertTaskApiOutcome(rsp);
        else
            return CreateConvertTaskApiOutcome(o.GetError());
    }
    else
    {
        return CreateConvertTaskApiOutcome(outcome.GetError());
    }
}

void EssClient::CreateConvertTaskApiAsync(const CreateConvertTaskApiRequest& request, const CreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConvertTaskApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateConvertTaskApiOutcomeCallable EssClient::CreateConvertTaskApiCallable(const CreateConvertTaskApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConvertTaskApiOutcome()>>(
        [this, request]()
        {
            return this->CreateConvertTaskApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateDocumentOutcome EssClient::CreateDocument(const CreateDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDocumentResponse rsp = CreateDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDocumentOutcome(rsp);
        else
            return CreateDocumentOutcome(o.GetError());
    }
    else
    {
        return CreateDocumentOutcome(outcome.GetError());
    }
}

void EssClient::CreateDocumentAsync(const CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateDocumentOutcomeCallable EssClient::CreateDocumentCallable(const CreateDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDocumentOutcome()>>(
        [this, request]()
        {
            return this->CreateDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateDynamicFlowApproverOutcome EssClient::CreateDynamicFlowApprover(const CreateDynamicFlowApproverRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDynamicFlowApprover");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDynamicFlowApproverResponse rsp = CreateDynamicFlowApproverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDynamicFlowApproverOutcome(rsp);
        else
            return CreateDynamicFlowApproverOutcome(o.GetError());
    }
    else
    {
        return CreateDynamicFlowApproverOutcome(outcome.GetError());
    }
}

void EssClient::CreateDynamicFlowApproverAsync(const CreateDynamicFlowApproverRequest& request, const CreateDynamicFlowApproverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDynamicFlowApprover(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateDynamicFlowApproverOutcomeCallable EssClient::CreateDynamicFlowApproverCallable(const CreateDynamicFlowApproverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDynamicFlowApproverOutcome()>>(
        [this, request]()
        {
            return this->CreateDynamicFlowApprover(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateEmbedWebUrlOutcome EssClient::CreateEmbedWebUrl(const CreateEmbedWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmbedWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmbedWebUrlResponse rsp = CreateEmbedWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmbedWebUrlOutcome(rsp);
        else
            return CreateEmbedWebUrlOutcome(o.GetError());
    }
    else
    {
        return CreateEmbedWebUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateEmbedWebUrlAsync(const CreateEmbedWebUrlRequest& request, const CreateEmbedWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmbedWebUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateEmbedWebUrlOutcomeCallable EssClient::CreateEmbedWebUrlCallable(const CreateEmbedWebUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmbedWebUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateEmbedWebUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateEmployeeChangeUrlOutcome EssClient::CreateEmployeeChangeUrl(const CreateEmployeeChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmployeeChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmployeeChangeUrlResponse rsp = CreateEmployeeChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmployeeChangeUrlOutcome(rsp);
        else
            return CreateEmployeeChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateEmployeeChangeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateEmployeeChangeUrlAsync(const CreateEmployeeChangeUrlRequest& request, const CreateEmployeeChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmployeeChangeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateEmployeeChangeUrlOutcomeCallable EssClient::CreateEmployeeChangeUrlCallable(const CreateEmployeeChangeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmployeeChangeUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateEmployeeChangeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateEmployeeQualificationSealQrCodeOutcome EssClient::CreateEmployeeQualificationSealQrCode(const CreateEmployeeQualificationSealQrCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmployeeQualificationSealQrCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmployeeQualificationSealQrCodeResponse rsp = CreateEmployeeQualificationSealQrCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmployeeQualificationSealQrCodeOutcome(rsp);
        else
            return CreateEmployeeQualificationSealQrCodeOutcome(o.GetError());
    }
    else
    {
        return CreateEmployeeQualificationSealQrCodeOutcome(outcome.GetError());
    }
}

void EssClient::CreateEmployeeQualificationSealQrCodeAsync(const CreateEmployeeQualificationSealQrCodeRequest& request, const CreateEmployeeQualificationSealQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmployeeQualificationSealQrCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateEmployeeQualificationSealQrCodeOutcomeCallable EssClient::CreateEmployeeQualificationSealQrCodeCallable(const CreateEmployeeQualificationSealQrCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmployeeQualificationSealQrCodeOutcome()>>(
        [this, request]()
        {
            return this->CreateEmployeeQualificationSealQrCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateExtendedServiceAuthInfosOutcome EssClient::CreateExtendedServiceAuthInfos(const CreateExtendedServiceAuthInfosRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExtendedServiceAuthInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExtendedServiceAuthInfosResponse rsp = CreateExtendedServiceAuthInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExtendedServiceAuthInfosOutcome(rsp);
        else
            return CreateExtendedServiceAuthInfosOutcome(o.GetError());
    }
    else
    {
        return CreateExtendedServiceAuthInfosOutcome(outcome.GetError());
    }
}

void EssClient::CreateExtendedServiceAuthInfosAsync(const CreateExtendedServiceAuthInfosRequest& request, const CreateExtendedServiceAuthInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExtendedServiceAuthInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateExtendedServiceAuthInfosOutcomeCallable EssClient::CreateExtendedServiceAuthInfosCallable(const CreateExtendedServiceAuthInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExtendedServiceAuthInfosOutcome()>>(
        [this, request]()
        {
            return this->CreateExtendedServiceAuthInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFileCounterSignOutcome EssClient::CreateFileCounterSign(const CreateFileCounterSignRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileCounterSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileCounterSignResponse rsp = CreateFileCounterSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileCounterSignOutcome(rsp);
        else
            return CreateFileCounterSignOutcome(o.GetError());
    }
    else
    {
        return CreateFileCounterSignOutcome(outcome.GetError());
    }
}

void EssClient::CreateFileCounterSignAsync(const CreateFileCounterSignRequest& request, const CreateFileCounterSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFileCounterSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFileCounterSignOutcomeCallable EssClient::CreateFileCounterSignCallable(const CreateFileCounterSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFileCounterSignOutcome()>>(
        [this, request]()
        {
            return this->CreateFileCounterSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowOutcome EssClient::CreateFlow(const CreateFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowResponse rsp = CreateFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowOutcome(rsp);
        else
            return CreateFlowOutcome(o.GetError());
    }
    else
    {
        return CreateFlowOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowAsync(const CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowOutcomeCallable EssClient::CreateFlowCallable(const CreateFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowApproversOutcome EssClient::CreateFlowApprovers(const CreateFlowApproversRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowApprovers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowApproversResponse rsp = CreateFlowApproversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowApproversOutcome(rsp);
        else
            return CreateFlowApproversOutcome(o.GetError());
    }
    else
    {
        return CreateFlowApproversOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowApproversAsync(const CreateFlowApproversRequest& request, const CreateFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowApprovers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowApproversOutcomeCallable EssClient::CreateFlowApproversCallable(const CreateFlowApproversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowApproversOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowApprovers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowBlockchainEvidenceUrlOutcome EssClient::CreateFlowBlockchainEvidenceUrl(const CreateFlowBlockchainEvidenceUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowBlockchainEvidenceUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowBlockchainEvidenceUrlResponse rsp = CreateFlowBlockchainEvidenceUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowBlockchainEvidenceUrlOutcome(rsp);
        else
            return CreateFlowBlockchainEvidenceUrlOutcome(o.GetError());
    }
    else
    {
        return CreateFlowBlockchainEvidenceUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowBlockchainEvidenceUrlAsync(const CreateFlowBlockchainEvidenceUrlRequest& request, const CreateFlowBlockchainEvidenceUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowBlockchainEvidenceUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowBlockchainEvidenceUrlOutcomeCallable EssClient::CreateFlowBlockchainEvidenceUrlCallable(const CreateFlowBlockchainEvidenceUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowBlockchainEvidenceUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowBlockchainEvidenceUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowByFilesOutcome EssClient::CreateFlowByFiles(const CreateFlowByFilesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowByFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowByFilesResponse rsp = CreateFlowByFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowByFilesOutcome(rsp);
        else
            return CreateFlowByFilesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowByFilesOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowByFilesAsync(const CreateFlowByFilesRequest& request, const CreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowByFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowByFilesOutcomeCallable EssClient::CreateFlowByFilesCallable(const CreateFlowByFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowByFilesOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowByFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowEvidenceReportOutcome EssClient::CreateFlowEvidenceReport(const CreateFlowEvidenceReportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowEvidenceReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowEvidenceReportResponse rsp = CreateFlowEvidenceReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowEvidenceReportOutcome(rsp);
        else
            return CreateFlowEvidenceReportOutcome(o.GetError());
    }
    else
    {
        return CreateFlowEvidenceReportOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowEvidenceReportAsync(const CreateFlowEvidenceReportRequest& request, const CreateFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowEvidenceReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowEvidenceReportOutcomeCallable EssClient::CreateFlowEvidenceReportCallable(const CreateFlowEvidenceReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowEvidenceReportOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowEvidenceReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowForwardsOutcome EssClient::CreateFlowForwards(const CreateFlowForwardsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowForwards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowForwardsResponse rsp = CreateFlowForwardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowForwardsOutcome(rsp);
        else
            return CreateFlowForwardsOutcome(o.GetError());
    }
    else
    {
        return CreateFlowForwardsOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowForwardsAsync(const CreateFlowForwardsRequest& request, const CreateFlowForwardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowForwards(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowForwardsOutcomeCallable EssClient::CreateFlowForwardsCallable(const CreateFlowForwardsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowForwardsOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowForwards(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowGroupByFilesOutcome EssClient::CreateFlowGroupByFiles(const CreateFlowGroupByFilesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowGroupByFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowGroupByFilesResponse rsp = CreateFlowGroupByFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowGroupByFilesOutcome(rsp);
        else
            return CreateFlowGroupByFilesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowGroupByFilesOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowGroupByFilesAsync(const CreateFlowGroupByFilesRequest& request, const CreateFlowGroupByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowGroupByFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowGroupByFilesOutcomeCallable EssClient::CreateFlowGroupByFilesCallable(const CreateFlowGroupByFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowGroupByFilesOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowGroupByFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowGroupByTemplatesOutcome EssClient::CreateFlowGroupByTemplates(const CreateFlowGroupByTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowGroupByTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowGroupByTemplatesResponse rsp = CreateFlowGroupByTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowGroupByTemplatesOutcome(rsp);
        else
            return CreateFlowGroupByTemplatesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowGroupByTemplatesOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowGroupByTemplatesAsync(const CreateFlowGroupByTemplatesRequest& request, const CreateFlowGroupByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowGroupByTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowGroupByTemplatesOutcomeCallable EssClient::CreateFlowGroupByTemplatesCallable(const CreateFlowGroupByTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowGroupByTemplatesOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowGroupByTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowGroupSignReviewOutcome EssClient::CreateFlowGroupSignReview(const CreateFlowGroupSignReviewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowGroupSignReview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowGroupSignReviewResponse rsp = CreateFlowGroupSignReviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowGroupSignReviewOutcome(rsp);
        else
            return CreateFlowGroupSignReviewOutcome(o.GetError());
    }
    else
    {
        return CreateFlowGroupSignReviewOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowGroupSignReviewAsync(const CreateFlowGroupSignReviewRequest& request, const CreateFlowGroupSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowGroupSignReview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowGroupSignReviewOutcomeCallable EssClient::CreateFlowGroupSignReviewCallable(const CreateFlowGroupSignReviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowGroupSignReviewOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowGroupSignReview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowRemindsOutcome EssClient::CreateFlowReminds(const CreateFlowRemindsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowReminds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowRemindsResponse rsp = CreateFlowRemindsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowRemindsOutcome(rsp);
        else
            return CreateFlowRemindsOutcome(o.GetError());
    }
    else
    {
        return CreateFlowRemindsOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowRemindsAsync(const CreateFlowRemindsRequest& request, const CreateFlowRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowReminds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowRemindsOutcomeCallable EssClient::CreateFlowRemindsCallable(const CreateFlowRemindsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowRemindsOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowReminds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowSignReviewOutcome EssClient::CreateFlowSignReview(const CreateFlowSignReviewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowSignReview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowSignReviewResponse rsp = CreateFlowSignReviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowSignReviewOutcome(rsp);
        else
            return CreateFlowSignReviewOutcome(o.GetError());
    }
    else
    {
        return CreateFlowSignReviewOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowSignReviewAsync(const CreateFlowSignReviewRequest& request, const CreateFlowSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowSignReview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowSignReviewOutcomeCallable EssClient::CreateFlowSignReviewCallable(const CreateFlowSignReviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowSignReviewOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowSignReview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateFlowSignUrlOutcome EssClient::CreateFlowSignUrl(const CreateFlowSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowSignUrlResponse rsp = CreateFlowSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowSignUrlOutcome(rsp);
        else
            return CreateFlowSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreateFlowSignUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateFlowSignUrlAsync(const CreateFlowSignUrlRequest& request, const CreateFlowSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateFlowSignUrlOutcomeCallable EssClient::CreateFlowSignUrlCallable(const CreateFlowSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowSignUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateIntegrationDepartmentOutcome EssClient::CreateIntegrationDepartment(const CreateIntegrationDepartmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationDepartment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationDepartmentResponse rsp = CreateIntegrationDepartmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationDepartmentOutcome(rsp);
        else
            return CreateIntegrationDepartmentOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationDepartmentOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationDepartmentAsync(const CreateIntegrationDepartmentRequest& request, const CreateIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIntegrationDepartment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateIntegrationDepartmentOutcomeCallable EssClient::CreateIntegrationDepartmentCallable(const CreateIntegrationDepartmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIntegrationDepartmentOutcome()>>(
        [this, request]()
        {
            return this->CreateIntegrationDepartment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateIntegrationEmployeesOutcome EssClient::CreateIntegrationEmployees(const CreateIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationEmployeesResponse rsp = CreateIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationEmployeesOutcome(rsp);
        else
            return CreateIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationEmployeesAsync(const CreateIntegrationEmployeesRequest& request, const CreateIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIntegrationEmployees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateIntegrationEmployeesOutcomeCallable EssClient::CreateIntegrationEmployeesCallable(const CreateIntegrationEmployeesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIntegrationEmployeesOutcome()>>(
        [this, request]()
        {
            return this->CreateIntegrationEmployees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateIntegrationRoleOutcome EssClient::CreateIntegrationRole(const CreateIntegrationRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationRoleResponse rsp = CreateIntegrationRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationRoleOutcome(rsp);
        else
            return CreateIntegrationRoleOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationRoleOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationRoleAsync(const CreateIntegrationRoleRequest& request, const CreateIntegrationRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIntegrationRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateIntegrationRoleOutcomeCallable EssClient::CreateIntegrationRoleCallable(const CreateIntegrationRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIntegrationRoleOutcome()>>(
        [this, request]()
        {
            return this->CreateIntegrationRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateIntegrationSubOrganizationActiveRecordOutcome EssClient::CreateIntegrationSubOrganizationActiveRecord(const CreateIntegrationSubOrganizationActiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationSubOrganizationActiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationSubOrganizationActiveRecordResponse rsp = CreateIntegrationSubOrganizationActiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationSubOrganizationActiveRecordOutcome(rsp);
        else
            return CreateIntegrationSubOrganizationActiveRecordOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationSubOrganizationActiveRecordOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationSubOrganizationActiveRecordAsync(const CreateIntegrationSubOrganizationActiveRecordRequest& request, const CreateIntegrationSubOrganizationActiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIntegrationSubOrganizationActiveRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateIntegrationSubOrganizationActiveRecordOutcomeCallable EssClient::CreateIntegrationSubOrganizationActiveRecordCallable(const CreateIntegrationSubOrganizationActiveRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIntegrationSubOrganizationActiveRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateIntegrationSubOrganizationActiveRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateIntegrationUserRolesOutcome EssClient::CreateIntegrationUserRoles(const CreateIntegrationUserRolesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationUserRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationUserRolesResponse rsp = CreateIntegrationUserRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationUserRolesOutcome(rsp);
        else
            return CreateIntegrationUserRolesOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationUserRolesOutcome(outcome.GetError());
    }
}

void EssClient::CreateIntegrationUserRolesAsync(const CreateIntegrationUserRolesRequest& request, const CreateIntegrationUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIntegrationUserRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateIntegrationUserRolesOutcomeCallable EssClient::CreateIntegrationUserRolesCallable(const CreateIntegrationUserRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIntegrationUserRolesOutcome()>>(
        [this, request]()
        {
            return this->CreateIntegrationUserRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateLegalSealQrCodeOutcome EssClient::CreateLegalSealQrCode(const CreateLegalSealQrCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLegalSealQrCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLegalSealQrCodeResponse rsp = CreateLegalSealQrCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLegalSealQrCodeOutcome(rsp);
        else
            return CreateLegalSealQrCodeOutcome(o.GetError());
    }
    else
    {
        return CreateLegalSealQrCodeOutcome(outcome.GetError());
    }
}

void EssClient::CreateLegalSealQrCodeAsync(const CreateLegalSealQrCodeRequest& request, const CreateLegalSealQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLegalSealQrCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateLegalSealQrCodeOutcomeCallable EssClient::CreateLegalSealQrCodeCallable(const CreateLegalSealQrCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLegalSealQrCodeOutcome()>>(
        [this, request]()
        {
            return this->CreateLegalSealQrCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateModifyAdminAuthorizationUrlOutcome EssClient::CreateModifyAdminAuthorizationUrl(const CreateModifyAdminAuthorizationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModifyAdminAuthorizationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModifyAdminAuthorizationUrlResponse rsp = CreateModifyAdminAuthorizationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModifyAdminAuthorizationUrlOutcome(rsp);
        else
            return CreateModifyAdminAuthorizationUrlOutcome(o.GetError());
    }
    else
    {
        return CreateModifyAdminAuthorizationUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateModifyAdminAuthorizationUrlAsync(const CreateModifyAdminAuthorizationUrlRequest& request, const CreateModifyAdminAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateModifyAdminAuthorizationUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateModifyAdminAuthorizationUrlOutcomeCallable EssClient::CreateModifyAdminAuthorizationUrlCallable(const CreateModifyAdminAuthorizationUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateModifyAdminAuthorizationUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateModifyAdminAuthorizationUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateMultiFlowSignQRCodeOutcome EssClient::CreateMultiFlowSignQRCode(const CreateMultiFlowSignQRCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultiFlowSignQRCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultiFlowSignQRCodeResponse rsp = CreateMultiFlowSignQRCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultiFlowSignQRCodeOutcome(rsp);
        else
            return CreateMultiFlowSignQRCodeOutcome(o.GetError());
    }
    else
    {
        return CreateMultiFlowSignQRCodeOutcome(outcome.GetError());
    }
}

void EssClient::CreateMultiFlowSignQRCodeAsync(const CreateMultiFlowSignQRCodeRequest& request, const CreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMultiFlowSignQRCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateMultiFlowSignQRCodeOutcomeCallable EssClient::CreateMultiFlowSignQRCodeCallable(const CreateMultiFlowSignQRCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMultiFlowSignQRCodeOutcome()>>(
        [this, request]()
        {
            return this->CreateMultiFlowSignQRCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateOrganizationAuthFileOutcome EssClient::CreateOrganizationAuthFile(const CreateOrganizationAuthFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationAuthFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationAuthFileResponse rsp = CreateOrganizationAuthFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationAuthFileOutcome(rsp);
        else
            return CreateOrganizationAuthFileOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationAuthFileOutcome(outcome.GetError());
    }
}

void EssClient::CreateOrganizationAuthFileAsync(const CreateOrganizationAuthFileRequest& request, const CreateOrganizationAuthFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationAuthFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateOrganizationAuthFileOutcomeCallable EssClient::CreateOrganizationAuthFileCallable(const CreateOrganizationAuthFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationAuthFileOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationAuthFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateOrganizationAuthUrlOutcome EssClient::CreateOrganizationAuthUrl(const CreateOrganizationAuthUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationAuthUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationAuthUrlResponse rsp = CreateOrganizationAuthUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationAuthUrlOutcome(rsp);
        else
            return CreateOrganizationAuthUrlOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationAuthUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateOrganizationAuthUrlAsync(const CreateOrganizationAuthUrlRequest& request, const CreateOrganizationAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationAuthUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateOrganizationAuthUrlOutcomeCallable EssClient::CreateOrganizationAuthUrlCallable(const CreateOrganizationAuthUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationAuthUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationAuthUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateOrganizationBatchSignUrlOutcome EssClient::CreateOrganizationBatchSignUrl(const CreateOrganizationBatchSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationBatchSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationBatchSignUrlResponse rsp = CreateOrganizationBatchSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationBatchSignUrlOutcome(rsp);
        else
            return CreateOrganizationBatchSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationBatchSignUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateOrganizationBatchSignUrlAsync(const CreateOrganizationBatchSignUrlRequest& request, const CreateOrganizationBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationBatchSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateOrganizationBatchSignUrlOutcomeCallable EssClient::CreateOrganizationBatchSignUrlCallable(const CreateOrganizationBatchSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationBatchSignUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationBatchSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateOrganizationGroupInvitationLinkOutcome EssClient::CreateOrganizationGroupInvitationLink(const CreateOrganizationGroupInvitationLinkRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationGroupInvitationLink");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationGroupInvitationLinkResponse rsp = CreateOrganizationGroupInvitationLinkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationGroupInvitationLinkOutcome(rsp);
        else
            return CreateOrganizationGroupInvitationLinkOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationGroupInvitationLinkOutcome(outcome.GetError());
    }
}

void EssClient::CreateOrganizationGroupInvitationLinkAsync(const CreateOrganizationGroupInvitationLinkRequest& request, const CreateOrganizationGroupInvitationLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationGroupInvitationLink(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateOrganizationGroupInvitationLinkOutcomeCallable EssClient::CreateOrganizationGroupInvitationLinkCallable(const CreateOrganizationGroupInvitationLinkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationGroupInvitationLinkOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationGroupInvitationLink(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateOrganizationInfoChangeUrlOutcome EssClient::CreateOrganizationInfoChangeUrl(const CreateOrganizationInfoChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationInfoChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationInfoChangeUrlResponse rsp = CreateOrganizationInfoChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationInfoChangeUrlOutcome(rsp);
        else
            return CreateOrganizationInfoChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationInfoChangeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateOrganizationInfoChangeUrlAsync(const CreateOrganizationInfoChangeUrlRequest& request, const CreateOrganizationInfoChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationInfoChangeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateOrganizationInfoChangeUrlOutcomeCallable EssClient::CreateOrganizationInfoChangeUrlCallable(const CreateOrganizationInfoChangeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationInfoChangeUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationInfoChangeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreatePartnerAutoSignAuthUrlOutcome EssClient::CreatePartnerAutoSignAuthUrl(const CreatePartnerAutoSignAuthUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePartnerAutoSignAuthUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePartnerAutoSignAuthUrlResponse rsp = CreatePartnerAutoSignAuthUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePartnerAutoSignAuthUrlOutcome(rsp);
        else
            return CreatePartnerAutoSignAuthUrlOutcome(o.GetError());
    }
    else
    {
        return CreatePartnerAutoSignAuthUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreatePartnerAutoSignAuthUrlAsync(const CreatePartnerAutoSignAuthUrlRequest& request, const CreatePartnerAutoSignAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePartnerAutoSignAuthUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreatePartnerAutoSignAuthUrlOutcomeCallable EssClient::CreatePartnerAutoSignAuthUrlCallable(const CreatePartnerAutoSignAuthUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePartnerAutoSignAuthUrlOutcome()>>(
        [this, request]()
        {
            return this->CreatePartnerAutoSignAuthUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreatePersonAuthCertificateImageOutcome EssClient::CreatePersonAuthCertificateImage(const CreatePersonAuthCertificateImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePersonAuthCertificateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonAuthCertificateImageResponse rsp = CreatePersonAuthCertificateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonAuthCertificateImageOutcome(rsp);
        else
            return CreatePersonAuthCertificateImageOutcome(o.GetError());
    }
    else
    {
        return CreatePersonAuthCertificateImageOutcome(outcome.GetError());
    }
}

void EssClient::CreatePersonAuthCertificateImageAsync(const CreatePersonAuthCertificateImageRequest& request, const CreatePersonAuthCertificateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePersonAuthCertificateImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreatePersonAuthCertificateImageOutcomeCallable EssClient::CreatePersonAuthCertificateImageCallable(const CreatePersonAuthCertificateImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePersonAuthCertificateImageOutcome()>>(
        [this, request]()
        {
            return this->CreatePersonAuthCertificateImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreatePrepareFlowOutcome EssClient::CreatePrepareFlow(const CreatePrepareFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrepareFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrepareFlowResponse rsp = CreatePrepareFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrepareFlowOutcome(rsp);
        else
            return CreatePrepareFlowOutcome(o.GetError());
    }
    else
    {
        return CreatePrepareFlowOutcome(outcome.GetError());
    }
}

void EssClient::CreatePrepareFlowAsync(const CreatePrepareFlowRequest& request, const CreatePrepareFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrepareFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreatePrepareFlowOutcomeCallable EssClient::CreatePrepareFlowCallable(const CreatePrepareFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrepareFlowOutcome()>>(
        [this, request]()
        {
            return this->CreatePrepareFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreatePrepareFlowGroupOutcome EssClient::CreatePrepareFlowGroup(const CreatePrepareFlowGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrepareFlowGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrepareFlowGroupResponse rsp = CreatePrepareFlowGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrepareFlowGroupOutcome(rsp);
        else
            return CreatePrepareFlowGroupOutcome(o.GetError());
    }
    else
    {
        return CreatePrepareFlowGroupOutcome(outcome.GetError());
    }
}

void EssClient::CreatePrepareFlowGroupAsync(const CreatePrepareFlowGroupRequest& request, const CreatePrepareFlowGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrepareFlowGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreatePrepareFlowGroupOutcomeCallable EssClient::CreatePrepareFlowGroupCallable(const CreatePrepareFlowGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrepareFlowGroupOutcome()>>(
        [this, request]()
        {
            return this->CreatePrepareFlowGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreatePreparedPersonalEsignOutcome EssClient::CreatePreparedPersonalEsign(const CreatePreparedPersonalEsignRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePreparedPersonalEsign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePreparedPersonalEsignResponse rsp = CreatePreparedPersonalEsignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePreparedPersonalEsignOutcome(rsp);
        else
            return CreatePreparedPersonalEsignOutcome(o.GetError());
    }
    else
    {
        return CreatePreparedPersonalEsignOutcome(outcome.GetError());
    }
}

void EssClient::CreatePreparedPersonalEsignAsync(const CreatePreparedPersonalEsignRequest& request, const CreatePreparedPersonalEsignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePreparedPersonalEsign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreatePreparedPersonalEsignOutcomeCallable EssClient::CreatePreparedPersonalEsignCallable(const CreatePreparedPersonalEsignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePreparedPersonalEsignOutcome()>>(
        [this, request]()
        {
            return this->CreatePreparedPersonalEsign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateReleaseFlowOutcome EssClient::CreateReleaseFlow(const CreateReleaseFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReleaseFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReleaseFlowResponse rsp = CreateReleaseFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReleaseFlowOutcome(rsp);
        else
            return CreateReleaseFlowOutcome(o.GetError());
    }
    else
    {
        return CreateReleaseFlowOutcome(outcome.GetError());
    }
}

void EssClient::CreateReleaseFlowAsync(const CreateReleaseFlowRequest& request, const CreateReleaseFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReleaseFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateReleaseFlowOutcomeCallable EssClient::CreateReleaseFlowCallable(const CreateReleaseFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReleaseFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateReleaseFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateSchemeUrlOutcome EssClient::CreateSchemeUrl(const CreateSchemeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSchemeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSchemeUrlResponse rsp = CreateSchemeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSchemeUrlOutcome(rsp);
        else
            return CreateSchemeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateSchemeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateSchemeUrlAsync(const CreateSchemeUrlRequest& request, const CreateSchemeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSchemeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateSchemeUrlOutcomeCallable EssClient::CreateSchemeUrlCallable(const CreateSchemeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSchemeUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateSchemeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateSealOutcome EssClient::CreateSeal(const CreateSealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSealResponse rsp = CreateSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSealOutcome(rsp);
        else
            return CreateSealOutcome(o.GetError());
    }
    else
    {
        return CreateSealOutcome(outcome.GetError());
    }
}

void EssClient::CreateSealAsync(const CreateSealRequest& request, const CreateSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateSealOutcomeCallable EssClient::CreateSealCallable(const CreateSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSealOutcome()>>(
        [this, request]()
        {
            return this->CreateSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateSealPolicyOutcome EssClient::CreateSealPolicy(const CreateSealPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSealPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSealPolicyResponse rsp = CreateSealPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSealPolicyOutcome(rsp);
        else
            return CreateSealPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateSealPolicyOutcome(outcome.GetError());
    }
}

void EssClient::CreateSealPolicyAsync(const CreateSealPolicyRequest& request, const CreateSealPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSealPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateSealPolicyOutcomeCallable EssClient::CreateSealPolicyCallable(const CreateSealPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSealPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateSealPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateUserAutoSignEnableUrlOutcome EssClient::CreateUserAutoSignEnableUrl(const CreateUserAutoSignEnableUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserAutoSignEnableUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserAutoSignEnableUrlResponse rsp = CreateUserAutoSignEnableUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserAutoSignEnableUrlOutcome(rsp);
        else
            return CreateUserAutoSignEnableUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUserAutoSignEnableUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateUserAutoSignEnableUrlAsync(const CreateUserAutoSignEnableUrlRequest& request, const CreateUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserAutoSignEnableUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateUserAutoSignEnableUrlOutcomeCallable EssClient::CreateUserAutoSignEnableUrlCallable(const CreateUserAutoSignEnableUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserAutoSignEnableUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateUserAutoSignEnableUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateUserAutoSignSealUrlOutcome EssClient::CreateUserAutoSignSealUrl(const CreateUserAutoSignSealUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserAutoSignSealUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserAutoSignSealUrlResponse rsp = CreateUserAutoSignSealUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserAutoSignSealUrlOutcome(rsp);
        else
            return CreateUserAutoSignSealUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUserAutoSignSealUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateUserAutoSignSealUrlAsync(const CreateUserAutoSignSealUrlRequest& request, const CreateUserAutoSignSealUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserAutoSignSealUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateUserAutoSignSealUrlOutcomeCallable EssClient::CreateUserAutoSignSealUrlCallable(const CreateUserAutoSignSealUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserAutoSignSealUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateUserAutoSignSealUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateUserMobileChangeUrlOutcome EssClient::CreateUserMobileChangeUrl(const CreateUserMobileChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserMobileChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserMobileChangeUrlResponse rsp = CreateUserMobileChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserMobileChangeUrlOutcome(rsp);
        else
            return CreateUserMobileChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUserMobileChangeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateUserMobileChangeUrlAsync(const CreateUserMobileChangeUrlRequest& request, const CreateUserMobileChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserMobileChangeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateUserMobileChangeUrlOutcomeCallable EssClient::CreateUserMobileChangeUrlCallable(const CreateUserMobileChangeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserMobileChangeUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateUserMobileChangeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateUserNameChangeUrlOutcome EssClient::CreateUserNameChangeUrl(const CreateUserNameChangeUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserNameChangeUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserNameChangeUrlResponse rsp = CreateUserNameChangeUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserNameChangeUrlOutcome(rsp);
        else
            return CreateUserNameChangeUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUserNameChangeUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateUserNameChangeUrlAsync(const CreateUserNameChangeUrlRequest& request, const CreateUserNameChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserNameChangeUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateUserNameChangeUrlOutcomeCallable EssClient::CreateUserNameChangeUrlCallable(const CreateUserNameChangeUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserNameChangeUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateUserNameChangeUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateUserVerifyUrlOutcome EssClient::CreateUserVerifyUrl(const CreateUserVerifyUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserVerifyUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserVerifyUrlResponse rsp = CreateUserVerifyUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserVerifyUrlOutcome(rsp);
        else
            return CreateUserVerifyUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUserVerifyUrlOutcome(outcome.GetError());
    }
}

void EssClient::CreateUserVerifyUrlAsync(const CreateUserVerifyUrlRequest& request, const CreateUserVerifyUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserVerifyUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateUserVerifyUrlOutcomeCallable EssClient::CreateUserVerifyUrlCallable(const CreateUserVerifyUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserVerifyUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateUserVerifyUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::CreateWebThemeConfigOutcome EssClient::CreateWebThemeConfig(const CreateWebThemeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWebThemeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWebThemeConfigResponse rsp = CreateWebThemeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWebThemeConfigOutcome(rsp);
        else
            return CreateWebThemeConfigOutcome(o.GetError());
    }
    else
    {
        return CreateWebThemeConfigOutcome(outcome.GetError());
    }
}

void EssClient::CreateWebThemeConfigAsync(const CreateWebThemeConfigRequest& request, const CreateWebThemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWebThemeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::CreateWebThemeConfigOutcomeCallable EssClient::CreateWebThemeConfigCallable(const CreateWebThemeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWebThemeConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateWebThemeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DeleteExtendedServiceAuthInfosOutcome EssClient::DeleteExtendedServiceAuthInfos(const DeleteExtendedServiceAuthInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteExtendedServiceAuthInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteExtendedServiceAuthInfosResponse rsp = DeleteExtendedServiceAuthInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteExtendedServiceAuthInfosOutcome(rsp);
        else
            return DeleteExtendedServiceAuthInfosOutcome(o.GetError());
    }
    else
    {
        return DeleteExtendedServiceAuthInfosOutcome(outcome.GetError());
    }
}

void EssClient::DeleteExtendedServiceAuthInfosAsync(const DeleteExtendedServiceAuthInfosRequest& request, const DeleteExtendedServiceAuthInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteExtendedServiceAuthInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DeleteExtendedServiceAuthInfosOutcomeCallable EssClient::DeleteExtendedServiceAuthInfosCallable(const DeleteExtendedServiceAuthInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteExtendedServiceAuthInfosOutcome()>>(
        [this, request]()
        {
            return this->DeleteExtendedServiceAuthInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DeleteIntegrationDepartmentOutcome EssClient::DeleteIntegrationDepartment(const DeleteIntegrationDepartmentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationDepartment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationDepartmentResponse rsp = DeleteIntegrationDepartmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationDepartmentOutcome(rsp);
        else
            return DeleteIntegrationDepartmentOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationDepartmentOutcome(outcome.GetError());
    }
}

void EssClient::DeleteIntegrationDepartmentAsync(const DeleteIntegrationDepartmentRequest& request, const DeleteIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIntegrationDepartment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DeleteIntegrationDepartmentOutcomeCallable EssClient::DeleteIntegrationDepartmentCallable(const DeleteIntegrationDepartmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIntegrationDepartmentOutcome()>>(
        [this, request]()
        {
            return this->DeleteIntegrationDepartment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DeleteIntegrationEmployeesOutcome EssClient::DeleteIntegrationEmployees(const DeleteIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationEmployeesResponse rsp = DeleteIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationEmployeesOutcome(rsp);
        else
            return DeleteIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::DeleteIntegrationEmployeesAsync(const DeleteIntegrationEmployeesRequest& request, const DeleteIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIntegrationEmployees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DeleteIntegrationEmployeesOutcomeCallable EssClient::DeleteIntegrationEmployeesCallable(const DeleteIntegrationEmployeesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIntegrationEmployeesOutcome()>>(
        [this, request]()
        {
            return this->DeleteIntegrationEmployees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DeleteIntegrationRoleUsersOutcome EssClient::DeleteIntegrationRoleUsers(const DeleteIntegrationRoleUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationRoleUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationRoleUsersResponse rsp = DeleteIntegrationRoleUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationRoleUsersOutcome(rsp);
        else
            return DeleteIntegrationRoleUsersOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationRoleUsersOutcome(outcome.GetError());
    }
}

void EssClient::DeleteIntegrationRoleUsersAsync(const DeleteIntegrationRoleUsersRequest& request, const DeleteIntegrationRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIntegrationRoleUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DeleteIntegrationRoleUsersOutcomeCallable EssClient::DeleteIntegrationRoleUsersCallable(const DeleteIntegrationRoleUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIntegrationRoleUsersOutcome()>>(
        [this, request]()
        {
            return this->DeleteIntegrationRoleUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DeleteOrganizationAuthorizationsOutcome EssClient::DeleteOrganizationAuthorizations(const DeleteOrganizationAuthorizationsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationAuthorizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationAuthorizationsResponse rsp = DeleteOrganizationAuthorizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationAuthorizationsOutcome(rsp);
        else
            return DeleteOrganizationAuthorizationsOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationAuthorizationsOutcome(outcome.GetError());
    }
}

void EssClient::DeleteOrganizationAuthorizationsAsync(const DeleteOrganizationAuthorizationsRequest& request, const DeleteOrganizationAuthorizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganizationAuthorizations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DeleteOrganizationAuthorizationsOutcomeCallable EssClient::DeleteOrganizationAuthorizationsCallable(const DeleteOrganizationAuthorizationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationAuthorizationsOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganizationAuthorizations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DeleteSealPoliciesOutcome EssClient::DeleteSealPolicies(const DeleteSealPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSealPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSealPoliciesResponse rsp = DeleteSealPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSealPoliciesOutcome(rsp);
        else
            return DeleteSealPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteSealPoliciesOutcome(outcome.GetError());
    }
}

void EssClient::DeleteSealPoliciesAsync(const DeleteSealPoliciesRequest& request, const DeleteSealPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSealPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DeleteSealPoliciesOutcomeCallable EssClient::DeleteSealPoliciesCallable(const DeleteSealPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSealPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DeleteSealPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeBatchOrganizationRegistrationTasksOutcome EssClient::DescribeBatchOrganizationRegistrationTasks(const DescribeBatchOrganizationRegistrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOrganizationRegistrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOrganizationRegistrationTasksResponse rsp = DescribeBatchOrganizationRegistrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOrganizationRegistrationTasksOutcome(rsp);
        else
            return DescribeBatchOrganizationRegistrationTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOrganizationRegistrationTasksOutcome(outcome.GetError());
    }
}

void EssClient::DescribeBatchOrganizationRegistrationTasksAsync(const DescribeBatchOrganizationRegistrationTasksRequest& request, const DescribeBatchOrganizationRegistrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchOrganizationRegistrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeBatchOrganizationRegistrationTasksOutcomeCallable EssClient::DescribeBatchOrganizationRegistrationTasksCallable(const DescribeBatchOrganizationRegistrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchOrganizationRegistrationTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchOrganizationRegistrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeBatchOrganizationRegistrationUrlsOutcome EssClient::DescribeBatchOrganizationRegistrationUrls(const DescribeBatchOrganizationRegistrationUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOrganizationRegistrationUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOrganizationRegistrationUrlsResponse rsp = DescribeBatchOrganizationRegistrationUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOrganizationRegistrationUrlsOutcome(rsp);
        else
            return DescribeBatchOrganizationRegistrationUrlsOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOrganizationRegistrationUrlsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeBatchOrganizationRegistrationUrlsAsync(const DescribeBatchOrganizationRegistrationUrlsRequest& request, const DescribeBatchOrganizationRegistrationUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchOrganizationRegistrationUrls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeBatchOrganizationRegistrationUrlsOutcomeCallable EssClient::DescribeBatchOrganizationRegistrationUrlsCallable(const DescribeBatchOrganizationRegistrationUrlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchOrganizationRegistrationUrlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchOrganizationRegistrationUrls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeBillUsageOutcome EssClient::DescribeBillUsage(const DescribeBillUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillUsageResponse rsp = DescribeBillUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillUsageOutcome(rsp);
        else
            return DescribeBillUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeBillUsageOutcome(outcome.GetError());
    }
}

void EssClient::DescribeBillUsageAsync(const DescribeBillUsageRequest& request, const DescribeBillUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeBillUsageOutcomeCallable EssClient::DescribeBillUsageCallable(const DescribeBillUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeBillUsageDetailOutcome EssClient::DescribeBillUsageDetail(const DescribeBillUsageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillUsageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillUsageDetailResponse rsp = DescribeBillUsageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillUsageDetailOutcome(rsp);
        else
            return DescribeBillUsageDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBillUsageDetailOutcome(outcome.GetError());
    }
}

void EssClient::DescribeBillUsageDetailAsync(const DescribeBillUsageDetailRequest& request, const DescribeBillUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillUsageDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeBillUsageDetailOutcomeCallable EssClient::DescribeBillUsageDetailCallable(const DescribeBillUsageDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillUsageDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillUsageDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeCancelFlowsTaskOutcome EssClient::DescribeCancelFlowsTask(const DescribeCancelFlowsTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCancelFlowsTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCancelFlowsTaskResponse rsp = DescribeCancelFlowsTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCancelFlowsTaskOutcome(rsp);
        else
            return DescribeCancelFlowsTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCancelFlowsTaskOutcome(outcome.GetError());
    }
}

void EssClient::DescribeCancelFlowsTaskAsync(const DescribeCancelFlowsTaskRequest& request, const DescribeCancelFlowsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCancelFlowsTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeCancelFlowsTaskOutcomeCallable EssClient::DescribeCancelFlowsTaskCallable(const DescribeCancelFlowsTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCancelFlowsTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeCancelFlowsTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeContractDiffTaskWebUrlOutcome EssClient::DescribeContractDiffTaskWebUrl(const DescribeContractDiffTaskWebUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContractDiffTaskWebUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContractDiffTaskWebUrlResponse rsp = DescribeContractDiffTaskWebUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContractDiffTaskWebUrlOutcome(rsp);
        else
            return DescribeContractDiffTaskWebUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeContractDiffTaskWebUrlOutcome(outcome.GetError());
    }
}

void EssClient::DescribeContractDiffTaskWebUrlAsync(const DescribeContractDiffTaskWebUrlRequest& request, const DescribeContractDiffTaskWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContractDiffTaskWebUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeContractDiffTaskWebUrlOutcomeCallable EssClient::DescribeContractDiffTaskWebUrlCallable(const DescribeContractDiffTaskWebUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContractDiffTaskWebUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeContractDiffTaskWebUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeExtendedServiceAuthDetailOutcome EssClient::DescribeExtendedServiceAuthDetail(const DescribeExtendedServiceAuthDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtendedServiceAuthDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtendedServiceAuthDetailResponse rsp = DescribeExtendedServiceAuthDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtendedServiceAuthDetailOutcome(rsp);
        else
            return DescribeExtendedServiceAuthDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeExtendedServiceAuthDetailOutcome(outcome.GetError());
    }
}

void EssClient::DescribeExtendedServiceAuthDetailAsync(const DescribeExtendedServiceAuthDetailRequest& request, const DescribeExtendedServiceAuthDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExtendedServiceAuthDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeExtendedServiceAuthDetailOutcomeCallable EssClient::DescribeExtendedServiceAuthDetailCallable(const DescribeExtendedServiceAuthDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExtendedServiceAuthDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeExtendedServiceAuthDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeExtendedServiceAuthInfosOutcome EssClient::DescribeExtendedServiceAuthInfos(const DescribeExtendedServiceAuthInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtendedServiceAuthInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtendedServiceAuthInfosResponse rsp = DescribeExtendedServiceAuthInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtendedServiceAuthInfosOutcome(rsp);
        else
            return DescribeExtendedServiceAuthInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeExtendedServiceAuthInfosOutcome(outcome.GetError());
    }
}

void EssClient::DescribeExtendedServiceAuthInfosAsync(const DescribeExtendedServiceAuthInfosRequest& request, const DescribeExtendedServiceAuthInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExtendedServiceAuthInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeExtendedServiceAuthInfosOutcomeCallable EssClient::DescribeExtendedServiceAuthInfosCallable(const DescribeExtendedServiceAuthInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExtendedServiceAuthInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeExtendedServiceAuthInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFileCounterSignResultOutcome EssClient::DescribeFileCounterSignResult(const DescribeFileCounterSignResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileCounterSignResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileCounterSignResultResponse rsp = DescribeFileCounterSignResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileCounterSignResultOutcome(rsp);
        else
            return DescribeFileCounterSignResultOutcome(o.GetError());
    }
    else
    {
        return DescribeFileCounterSignResultOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFileCounterSignResultAsync(const DescribeFileCounterSignResultRequest& request, const DescribeFileCounterSignResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileCounterSignResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFileCounterSignResultOutcomeCallable EssClient::DescribeFileCounterSignResultCallable(const DescribeFileCounterSignResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileCounterSignResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileCounterSignResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFileUrlsOutcome EssClient::DescribeFileUrls(const DescribeFileUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileUrlsResponse rsp = DescribeFileUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileUrlsOutcome(rsp);
        else
            return DescribeFileUrlsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileUrlsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFileUrlsAsync(const DescribeFileUrlsRequest& request, const DescribeFileUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileUrls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFileUrlsOutcomeCallable EssClient::DescribeFileUrlsCallable(const DescribeFileUrlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileUrlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileUrls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFlowBriefsOutcome EssClient::DescribeFlowBriefs(const DescribeFlowBriefsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowBriefs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowBriefsResponse rsp = DescribeFlowBriefsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowBriefsOutcome(rsp);
        else
            return DescribeFlowBriefsOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowBriefsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowBriefsAsync(const DescribeFlowBriefsRequest& request, const DescribeFlowBriefsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowBriefs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFlowBriefsOutcomeCallable EssClient::DescribeFlowBriefsCallable(const DescribeFlowBriefsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowBriefsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowBriefs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFlowComponentsOutcome EssClient::DescribeFlowComponents(const DescribeFlowComponentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowComponents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowComponentsResponse rsp = DescribeFlowComponentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowComponentsOutcome(rsp);
        else
            return DescribeFlowComponentsOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowComponentsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowComponentsAsync(const DescribeFlowComponentsRequest& request, const DescribeFlowComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowComponents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFlowComponentsOutcomeCallable EssClient::DescribeFlowComponentsCallable(const DescribeFlowComponentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowComponentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowComponents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFlowEvidenceReportOutcome EssClient::DescribeFlowEvidenceReport(const DescribeFlowEvidenceReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowEvidenceReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowEvidenceReportResponse rsp = DescribeFlowEvidenceReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowEvidenceReportOutcome(rsp);
        else
            return DescribeFlowEvidenceReportOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowEvidenceReportOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowEvidenceReportAsync(const DescribeFlowEvidenceReportRequest& request, const DescribeFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowEvidenceReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFlowEvidenceReportOutcomeCallable EssClient::DescribeFlowEvidenceReportCallable(const DescribeFlowEvidenceReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowEvidenceReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowEvidenceReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFlowInfoOutcome EssClient::DescribeFlowInfo(const DescribeFlowInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowInfoResponse rsp = DescribeFlowInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowInfoOutcome(rsp);
        else
            return DescribeFlowInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowInfoOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowInfoAsync(const DescribeFlowInfoRequest& request, const DescribeFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFlowInfoOutcomeCallable EssClient::DescribeFlowInfoCallable(const DescribeFlowInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeFlowTemplatesOutcome EssClient::DescribeFlowTemplates(const DescribeFlowTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowTemplatesResponse rsp = DescribeFlowTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowTemplatesOutcome(rsp);
        else
            return DescribeFlowTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowTemplatesOutcome(outcome.GetError());
    }
}

void EssClient::DescribeFlowTemplatesAsync(const DescribeFlowTemplatesRequest& request, const DescribeFlowTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeFlowTemplatesOutcomeCallable EssClient::DescribeFlowTemplatesCallable(const DescribeFlowTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeIntegrationDepartmentsOutcome EssClient::DescribeIntegrationDepartments(const DescribeIntegrationDepartmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationDepartments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationDepartmentsResponse rsp = DescribeIntegrationDepartmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationDepartmentsOutcome(rsp);
        else
            return DescribeIntegrationDepartmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationDepartmentsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeIntegrationDepartmentsAsync(const DescribeIntegrationDepartmentsRequest& request, const DescribeIntegrationDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationDepartments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeIntegrationDepartmentsOutcomeCallable EssClient::DescribeIntegrationDepartmentsCallable(const DescribeIntegrationDepartmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationDepartmentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationDepartments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeIntegrationEmployeesOutcome EssClient::DescribeIntegrationEmployees(const DescribeIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationEmployeesResponse rsp = DescribeIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationEmployeesOutcome(rsp);
        else
            return DescribeIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::DescribeIntegrationEmployeesAsync(const DescribeIntegrationEmployeesRequest& request, const DescribeIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationEmployees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeIntegrationEmployeesOutcomeCallable EssClient::DescribeIntegrationEmployeesCallable(const DescribeIntegrationEmployeesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationEmployeesOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationEmployees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeIntegrationRolesOutcome EssClient::DescribeIntegrationRoles(const DescribeIntegrationRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationRolesResponse rsp = DescribeIntegrationRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationRolesOutcome(rsp);
        else
            return DescribeIntegrationRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationRolesOutcome(outcome.GetError());
    }
}

void EssClient::DescribeIntegrationRolesAsync(const DescribeIntegrationRolesRequest& request, const DescribeIntegrationRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeIntegrationRolesOutcomeCallable EssClient::DescribeIntegrationRolesCallable(const DescribeIntegrationRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationRolesOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeOrganizationAuthStatusOutcome EssClient::DescribeOrganizationAuthStatus(const DescribeOrganizationAuthStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationAuthStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationAuthStatusResponse rsp = DescribeOrganizationAuthStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationAuthStatusOutcome(rsp);
        else
            return DescribeOrganizationAuthStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationAuthStatusOutcome(outcome.GetError());
    }
}

void EssClient::DescribeOrganizationAuthStatusAsync(const DescribeOrganizationAuthStatusRequest& request, const DescribeOrganizationAuthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationAuthStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeOrganizationAuthStatusOutcomeCallable EssClient::DescribeOrganizationAuthStatusCallable(const DescribeOrganizationAuthStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationAuthStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationAuthStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeOrganizationGroupOrganizationsOutcome EssClient::DescribeOrganizationGroupOrganizations(const DescribeOrganizationGroupOrganizationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationGroupOrganizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationGroupOrganizationsResponse rsp = DescribeOrganizationGroupOrganizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationGroupOrganizationsOutcome(rsp);
        else
            return DescribeOrganizationGroupOrganizationsOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationGroupOrganizationsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeOrganizationGroupOrganizationsAsync(const DescribeOrganizationGroupOrganizationsRequest& request, const DescribeOrganizationGroupOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationGroupOrganizations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeOrganizationGroupOrganizationsOutcomeCallable EssClient::DescribeOrganizationGroupOrganizationsCallable(const DescribeOrganizationGroupOrganizationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationGroupOrganizationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationGroupOrganizations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeOrganizationSealsOutcome EssClient::DescribeOrganizationSeals(const DescribeOrganizationSealsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationSeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationSealsResponse rsp = DescribeOrganizationSealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationSealsOutcome(rsp);
        else
            return DescribeOrganizationSealsOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationSealsOutcome(outcome.GetError());
    }
}

void EssClient::DescribeOrganizationSealsAsync(const DescribeOrganizationSealsRequest& request, const DescribeOrganizationSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationSeals(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeOrganizationSealsOutcomeCallable EssClient::DescribeOrganizationSealsCallable(const DescribeOrganizationSealsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationSealsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationSeals(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeOrganizationVerifyStatusOutcome EssClient::DescribeOrganizationVerifyStatus(const DescribeOrganizationVerifyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationVerifyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationVerifyStatusResponse rsp = DescribeOrganizationVerifyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationVerifyStatusOutcome(rsp);
        else
            return DescribeOrganizationVerifyStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationVerifyStatusOutcome(outcome.GetError());
    }
}

void EssClient::DescribeOrganizationVerifyStatusAsync(const DescribeOrganizationVerifyStatusRequest& request, const DescribeOrganizationVerifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationVerifyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeOrganizationVerifyStatusOutcomeCallable EssClient::DescribeOrganizationVerifyStatusCallable(const DescribeOrganizationVerifyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationVerifyStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationVerifyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribePersonCertificateOutcome EssClient::DescribePersonCertificate(const DescribePersonCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonCertificateResponse rsp = DescribePersonCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonCertificateOutcome(rsp);
        else
            return DescribePersonCertificateOutcome(o.GetError());
    }
    else
    {
        return DescribePersonCertificateOutcome(outcome.GetError());
    }
}

void EssClient::DescribePersonCertificateAsync(const DescribePersonCertificateRequest& request, const DescribePersonCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribePersonCertificateOutcomeCallable EssClient::DescribePersonCertificateCallable(const DescribePersonCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonCertificateOutcome()>>(
        [this, request]()
        {
            return this->DescribePersonCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeSignFaceVideoOutcome EssClient::DescribeSignFaceVideo(const DescribeSignFaceVideoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSignFaceVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSignFaceVideoResponse rsp = DescribeSignFaceVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSignFaceVideoOutcome(rsp);
        else
            return DescribeSignFaceVideoOutcome(o.GetError());
    }
    else
    {
        return DescribeSignFaceVideoOutcome(outcome.GetError());
    }
}

void EssClient::DescribeSignFaceVideoAsync(const DescribeSignFaceVideoRequest& request, const DescribeSignFaceVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSignFaceVideo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeSignFaceVideoOutcomeCallable EssClient::DescribeSignFaceVideoCallable(const DescribeSignFaceVideoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSignFaceVideoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSignFaceVideo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeThirdPartyAuthCodeOutcome EssClient::DescribeThirdPartyAuthCode(const DescribeThirdPartyAuthCodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeThirdPartyAuthCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeThirdPartyAuthCodeResponse rsp = DescribeThirdPartyAuthCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeThirdPartyAuthCodeOutcome(rsp);
        else
            return DescribeThirdPartyAuthCodeOutcome(o.GetError());
    }
    else
    {
        return DescribeThirdPartyAuthCodeOutcome(outcome.GetError());
    }
}

void EssClient::DescribeThirdPartyAuthCodeAsync(const DescribeThirdPartyAuthCodeRequest& request, const DescribeThirdPartyAuthCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeThirdPartyAuthCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeThirdPartyAuthCodeOutcomeCallable EssClient::DescribeThirdPartyAuthCodeCallable(const DescribeThirdPartyAuthCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeThirdPartyAuthCodeOutcome()>>(
        [this, request]()
        {
            return this->DescribeThirdPartyAuthCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeUserAutoSignStatusOutcome EssClient::DescribeUserAutoSignStatus(const DescribeUserAutoSignStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserAutoSignStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserAutoSignStatusResponse rsp = DescribeUserAutoSignStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserAutoSignStatusOutcome(rsp);
        else
            return DescribeUserAutoSignStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeUserAutoSignStatusOutcome(outcome.GetError());
    }
}

void EssClient::DescribeUserAutoSignStatusAsync(const DescribeUserAutoSignStatusRequest& request, const DescribeUserAutoSignStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserAutoSignStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeUserAutoSignStatusOutcomeCallable EssClient::DescribeUserAutoSignStatusCallable(const DescribeUserAutoSignStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserAutoSignStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserAutoSignStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeUserFlowTypeOutcome EssClient::DescribeUserFlowType(const DescribeUserFlowTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserFlowType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserFlowTypeResponse rsp = DescribeUserFlowTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserFlowTypeOutcome(rsp);
        else
            return DescribeUserFlowTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeUserFlowTypeOutcome(outcome.GetError());
    }
}

void EssClient::DescribeUserFlowTypeAsync(const DescribeUserFlowTypeRequest& request, const DescribeUserFlowTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserFlowType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeUserFlowTypeOutcomeCallable EssClient::DescribeUserFlowTypeCallable(const DescribeUserFlowTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserFlowTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserFlowType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DescribeUserVerifyStatusOutcome EssClient::DescribeUserVerifyStatus(const DescribeUserVerifyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserVerifyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserVerifyStatusResponse rsp = DescribeUserVerifyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserVerifyStatusOutcome(rsp);
        else
            return DescribeUserVerifyStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeUserVerifyStatusOutcome(outcome.GetError());
    }
}

void EssClient::DescribeUserVerifyStatusAsync(const DescribeUserVerifyStatusRequest& request, const DescribeUserVerifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserVerifyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DescribeUserVerifyStatusOutcomeCallable EssClient::DescribeUserVerifyStatusCallable(const DescribeUserVerifyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserVerifyStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserVerifyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::DisableUserAutoSignOutcome EssClient::DisableUserAutoSign(const DisableUserAutoSignRequest &request)
{
    auto outcome = MakeRequest(request, "DisableUserAutoSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableUserAutoSignResponse rsp = DisableUserAutoSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableUserAutoSignOutcome(rsp);
        else
            return DisableUserAutoSignOutcome(o.GetError());
    }
    else
    {
        return DisableUserAutoSignOutcome(outcome.GetError());
    }
}

void EssClient::DisableUserAutoSignAsync(const DisableUserAutoSignRequest& request, const DisableUserAutoSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableUserAutoSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::DisableUserAutoSignOutcomeCallable EssClient::DisableUserAutoSignCallable(const DisableUserAutoSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableUserAutoSignOutcome()>>(
        [this, request]()
        {
            return this->DisableUserAutoSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::GetTaskResultApiOutcome EssClient::GetTaskResultApi(const GetTaskResultApiRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskResultApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskResultApiResponse rsp = GetTaskResultApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskResultApiOutcome(rsp);
        else
            return GetTaskResultApiOutcome(o.GetError());
    }
    else
    {
        return GetTaskResultApiOutcome(outcome.GetError());
    }
}

void EssClient::GetTaskResultApiAsync(const GetTaskResultApiRequest& request, const GetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskResultApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::GetTaskResultApiOutcomeCallable EssClient::GetTaskResultApiCallable(const GetTaskResultApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskResultApiOutcome()>>(
        [this, request]()
        {
            return this->GetTaskResultApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::ModifyApplicationCallbackInfoOutcome EssClient::ModifyApplicationCallbackInfo(const ModifyApplicationCallbackInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationCallbackInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationCallbackInfoResponse rsp = ModifyApplicationCallbackInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationCallbackInfoOutcome(rsp);
        else
            return ModifyApplicationCallbackInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationCallbackInfoOutcome(outcome.GetError());
    }
}

void EssClient::ModifyApplicationCallbackInfoAsync(const ModifyApplicationCallbackInfoRequest& request, const ModifyApplicationCallbackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationCallbackInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::ModifyApplicationCallbackInfoOutcomeCallable EssClient::ModifyApplicationCallbackInfoCallable(const ModifyApplicationCallbackInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationCallbackInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationCallbackInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::ModifyExtendedServiceOutcome EssClient::ModifyExtendedService(const ModifyExtendedServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyExtendedService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyExtendedServiceResponse rsp = ModifyExtendedServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyExtendedServiceOutcome(rsp);
        else
            return ModifyExtendedServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyExtendedServiceOutcome(outcome.GetError());
    }
}

void EssClient::ModifyExtendedServiceAsync(const ModifyExtendedServiceRequest& request, const ModifyExtendedServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyExtendedService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::ModifyExtendedServiceOutcomeCallable EssClient::ModifyExtendedServiceCallable(const ModifyExtendedServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyExtendedServiceOutcome()>>(
        [this, request]()
        {
            return this->ModifyExtendedService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::ModifyFlowDeadlineOutcome EssClient::ModifyFlowDeadline(const ModifyFlowDeadlineRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFlowDeadline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFlowDeadlineResponse rsp = ModifyFlowDeadlineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFlowDeadlineOutcome(rsp);
        else
            return ModifyFlowDeadlineOutcome(o.GetError());
    }
    else
    {
        return ModifyFlowDeadlineOutcome(outcome.GetError());
    }
}

void EssClient::ModifyFlowDeadlineAsync(const ModifyFlowDeadlineRequest& request, const ModifyFlowDeadlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFlowDeadline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::ModifyFlowDeadlineOutcomeCallable EssClient::ModifyFlowDeadlineCallable(const ModifyFlowDeadlineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFlowDeadlineOutcome()>>(
        [this, request]()
        {
            return this->ModifyFlowDeadline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::ModifyIntegrationDepartmentOutcome EssClient::ModifyIntegrationDepartment(const ModifyIntegrationDepartmentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIntegrationDepartment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIntegrationDepartmentResponse rsp = ModifyIntegrationDepartmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIntegrationDepartmentOutcome(rsp);
        else
            return ModifyIntegrationDepartmentOutcome(o.GetError());
    }
    else
    {
        return ModifyIntegrationDepartmentOutcome(outcome.GetError());
    }
}

void EssClient::ModifyIntegrationDepartmentAsync(const ModifyIntegrationDepartmentRequest& request, const ModifyIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIntegrationDepartment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::ModifyIntegrationDepartmentOutcomeCallable EssClient::ModifyIntegrationDepartmentCallable(const ModifyIntegrationDepartmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIntegrationDepartmentOutcome()>>(
        [this, request]()
        {
            return this->ModifyIntegrationDepartment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::ModifyIntegrationRoleOutcome EssClient::ModifyIntegrationRole(const ModifyIntegrationRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIntegrationRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIntegrationRoleResponse rsp = ModifyIntegrationRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIntegrationRoleOutcome(rsp);
        else
            return ModifyIntegrationRoleOutcome(o.GetError());
    }
    else
    {
        return ModifyIntegrationRoleOutcome(outcome.GetError());
    }
}

void EssClient::ModifyIntegrationRoleAsync(const ModifyIntegrationRoleRequest& request, const ModifyIntegrationRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIntegrationRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::ModifyIntegrationRoleOutcomeCallable EssClient::ModifyIntegrationRoleCallable(const ModifyIntegrationRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIntegrationRoleOutcome()>>(
        [this, request]()
        {
            return this->ModifyIntegrationRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::ModifyPartnerAutoSignAuthUrlOutcome EssClient::ModifyPartnerAutoSignAuthUrl(const ModifyPartnerAutoSignAuthUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPartnerAutoSignAuthUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPartnerAutoSignAuthUrlResponse rsp = ModifyPartnerAutoSignAuthUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPartnerAutoSignAuthUrlOutcome(rsp);
        else
            return ModifyPartnerAutoSignAuthUrlOutcome(o.GetError());
    }
    else
    {
        return ModifyPartnerAutoSignAuthUrlOutcome(outcome.GetError());
    }
}

void EssClient::ModifyPartnerAutoSignAuthUrlAsync(const ModifyPartnerAutoSignAuthUrlRequest& request, const ModifyPartnerAutoSignAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPartnerAutoSignAuthUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::ModifyPartnerAutoSignAuthUrlOutcomeCallable EssClient::ModifyPartnerAutoSignAuthUrlCallable(const ModifyPartnerAutoSignAuthUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPartnerAutoSignAuthUrlOutcome()>>(
        [this, request]()
        {
            return this->ModifyPartnerAutoSignAuthUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::OperateSealsOutcome EssClient::OperateSeals(const OperateSealsRequest &request)
{
    auto outcome = MakeRequest(request, "OperateSeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateSealsResponse rsp = OperateSealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateSealsOutcome(rsp);
        else
            return OperateSealsOutcome(o.GetError());
    }
    else
    {
        return OperateSealsOutcome(outcome.GetError());
    }
}

void EssClient::OperateSealsAsync(const OperateSealsRequest& request, const OperateSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OperateSeals(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::OperateSealsOutcomeCallable EssClient::OperateSealsCallable(const OperateSealsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OperateSealsOutcome()>>(
        [this, request]()
        {
            return this->OperateSeals(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::OperateTemplateOutcome EssClient::OperateTemplate(const OperateTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "OperateTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateTemplateResponse rsp = OperateTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateTemplateOutcome(rsp);
        else
            return OperateTemplateOutcome(o.GetError());
    }
    else
    {
        return OperateTemplateOutcome(outcome.GetError());
    }
}

void EssClient::OperateTemplateAsync(const OperateTemplateRequest& request, const OperateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OperateTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::OperateTemplateOutcomeCallable EssClient::OperateTemplateCallable(const OperateTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OperateTemplateOutcome()>>(
        [this, request]()
        {
            return this->OperateTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::RenewAutoSignLicenseOutcome EssClient::RenewAutoSignLicense(const RenewAutoSignLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "RenewAutoSignLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewAutoSignLicenseResponse rsp = RenewAutoSignLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewAutoSignLicenseOutcome(rsp);
        else
            return RenewAutoSignLicenseOutcome(o.GetError());
    }
    else
    {
        return RenewAutoSignLicenseOutcome(outcome.GetError());
    }
}

void EssClient::RenewAutoSignLicenseAsync(const RenewAutoSignLicenseRequest& request, const RenewAutoSignLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewAutoSignLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::RenewAutoSignLicenseOutcomeCallable EssClient::RenewAutoSignLicenseCallable(const RenewAutoSignLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewAutoSignLicenseOutcome()>>(
        [this, request]()
        {
            return this->RenewAutoSignLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::StartFlowOutcome EssClient::StartFlow(const StartFlowRequest &request)
{
    auto outcome = MakeRequest(request, "StartFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartFlowResponse rsp = StartFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartFlowOutcome(rsp);
        else
            return StartFlowOutcome(o.GetError());
    }
    else
    {
        return StartFlowOutcome(outcome.GetError());
    }
}

void EssClient::StartFlowAsync(const StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::StartFlowOutcomeCallable EssClient::StartFlowCallable(const StartFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartFlowOutcome()>>(
        [this, request]()
        {
            return this->StartFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::UnbindEmployeeUserIdWithClientOpenIdOutcome EssClient::UnbindEmployeeUserIdWithClientOpenId(const UnbindEmployeeUserIdWithClientOpenIdRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindEmployeeUserIdWithClientOpenId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindEmployeeUserIdWithClientOpenIdResponse rsp = UnbindEmployeeUserIdWithClientOpenIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindEmployeeUserIdWithClientOpenIdOutcome(rsp);
        else
            return UnbindEmployeeUserIdWithClientOpenIdOutcome(o.GetError());
    }
    else
    {
        return UnbindEmployeeUserIdWithClientOpenIdOutcome(outcome.GetError());
    }
}

void EssClient::UnbindEmployeeUserIdWithClientOpenIdAsync(const UnbindEmployeeUserIdWithClientOpenIdRequest& request, const UnbindEmployeeUserIdWithClientOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindEmployeeUserIdWithClientOpenId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::UnbindEmployeeUserIdWithClientOpenIdOutcomeCallable EssClient::UnbindEmployeeUserIdWithClientOpenIdCallable(const UnbindEmployeeUserIdWithClientOpenIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindEmployeeUserIdWithClientOpenIdOutcome()>>(
        [this, request]()
        {
            return this->UnbindEmployeeUserIdWithClientOpenId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::UpdateIntegrationEmployeesOutcome EssClient::UpdateIntegrationEmployees(const UpdateIntegrationEmployeesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateIntegrationEmployees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateIntegrationEmployeesResponse rsp = UpdateIntegrationEmployeesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateIntegrationEmployeesOutcome(rsp);
        else
            return UpdateIntegrationEmployeesOutcome(o.GetError());
    }
    else
    {
        return UpdateIntegrationEmployeesOutcome(outcome.GetError());
    }
}

void EssClient::UpdateIntegrationEmployeesAsync(const UpdateIntegrationEmployeesRequest& request, const UpdateIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateIntegrationEmployees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::UpdateIntegrationEmployeesOutcomeCallable EssClient::UpdateIntegrationEmployeesCallable(const UpdateIntegrationEmployeesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateIntegrationEmployeesOutcome()>>(
        [this, request]()
        {
            return this->UpdateIntegrationEmployees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::UploadFilesOutcome EssClient::UploadFiles(const UploadFilesRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFilesResponse rsp = UploadFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFilesOutcome(rsp);
        else
            return UploadFilesOutcome(o.GetError());
    }
    else
    {
        return UploadFilesOutcome(outcome.GetError());
    }
}

void EssClient::UploadFilesAsync(const UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::UploadFilesOutcomeCallable EssClient::UploadFilesCallable(const UploadFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadFilesOutcome()>>(
        [this, request]()
        {
            return this->UploadFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::VerifyDigitFileOutcome EssClient::VerifyDigitFile(const VerifyDigitFileRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyDigitFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyDigitFileResponse rsp = VerifyDigitFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyDigitFileOutcome(rsp);
        else
            return VerifyDigitFileOutcome(o.GetError());
    }
    else
    {
        return VerifyDigitFileOutcome(outcome.GetError());
    }
}

void EssClient::VerifyDigitFileAsync(const VerifyDigitFileRequest& request, const VerifyDigitFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyDigitFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::VerifyDigitFileOutcomeCallable EssClient::VerifyDigitFileCallable(const VerifyDigitFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyDigitFileOutcome()>>(
        [this, request]()
        {
            return this->VerifyDigitFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssClient::VerifyPdfOutcome EssClient::VerifyPdf(const VerifyPdfRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyPdf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyPdfResponse rsp = VerifyPdfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyPdfOutcome(rsp);
        else
            return VerifyPdfOutcome(o.GetError());
    }
    else
    {
        return VerifyPdfOutcome(outcome.GetError());
    }
}

void EssClient::VerifyPdfAsync(const VerifyPdfRequest& request, const VerifyPdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyPdf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssClient::VerifyPdfOutcomeCallable EssClient::VerifyPdfCallable(const VerifyPdfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyPdfOutcome()>>(
        [this, request]()
        {
            return this->VerifyPdf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


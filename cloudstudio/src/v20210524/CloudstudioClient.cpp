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

#include <tencentcloud/cloudstudio/v20210524/CloudstudioClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cloudstudio::V20210524;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-24";
    const string ENDPOINT = "cloudstudio.tencentcloudapi.com";
}

CloudstudioClient::CloudstudioClient(const Credential &credential, const string &region) :
    CloudstudioClient(credential, region, ClientProfile())
{
}

CloudstudioClient::CloudstudioClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CloudstudioClient::CreateCustomizeTemplatesOutcome CloudstudioClient::CreateCustomizeTemplates(const CreateCustomizeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomizeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomizeTemplatesResponse rsp = CreateCustomizeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomizeTemplatesOutcome(rsp);
        else
            return CreateCustomizeTemplatesOutcome(o.GetError());
    }
    else
    {
        return CreateCustomizeTemplatesOutcome(outcome.GetError());
    }
}

void CloudstudioClient::CreateCustomizeTemplatesAsync(const CreateCustomizeTemplatesRequest& request, const CreateCustomizeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomizeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::CreateCustomizeTemplatesOutcomeCallable CloudstudioClient::CreateCustomizeTemplatesCallable(const CreateCustomizeTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomizeTemplatesOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomizeTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::CreateWorkspaceByAgentOutcome CloudstudioClient::CreateWorkspaceByAgent(const CreateWorkspaceByAgentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkspaceByAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkspaceByAgentResponse rsp = CreateWorkspaceByAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkspaceByAgentOutcome(rsp);
        else
            return CreateWorkspaceByAgentOutcome(o.GetError());
    }
    else
    {
        return CreateWorkspaceByAgentOutcome(outcome.GetError());
    }
}

void CloudstudioClient::CreateWorkspaceByAgentAsync(const CreateWorkspaceByAgentRequest& request, const CreateWorkspaceByAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkspaceByAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::CreateWorkspaceByAgentOutcomeCallable CloudstudioClient::CreateWorkspaceByAgentCallable(const CreateWorkspaceByAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkspaceByAgentOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkspaceByAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::CreateWorkspaceByTemplateOutcome CloudstudioClient::CreateWorkspaceByTemplate(const CreateWorkspaceByTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkspaceByTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkspaceByTemplateResponse rsp = CreateWorkspaceByTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkspaceByTemplateOutcome(rsp);
        else
            return CreateWorkspaceByTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateWorkspaceByTemplateOutcome(outcome.GetError());
    }
}

void CloudstudioClient::CreateWorkspaceByTemplateAsync(const CreateWorkspaceByTemplateRequest& request, const CreateWorkspaceByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkspaceByTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::CreateWorkspaceByTemplateOutcomeCallable CloudstudioClient::CreateWorkspaceByTemplateCallable(const CreateWorkspaceByTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkspaceByTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkspaceByTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::CreateWorkspaceByVersionControlOutcome CloudstudioClient::CreateWorkspaceByVersionControl(const CreateWorkspaceByVersionControlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkspaceByVersionControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkspaceByVersionControlResponse rsp = CreateWorkspaceByVersionControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkspaceByVersionControlOutcome(rsp);
        else
            return CreateWorkspaceByVersionControlOutcome(o.GetError());
    }
    else
    {
        return CreateWorkspaceByVersionControlOutcome(outcome.GetError());
    }
}

void CloudstudioClient::CreateWorkspaceByVersionControlAsync(const CreateWorkspaceByVersionControlRequest& request, const CreateWorkspaceByVersionControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkspaceByVersionControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::CreateWorkspaceByVersionControlOutcomeCallable CloudstudioClient::CreateWorkspaceByVersionControlCallable(const CreateWorkspaceByVersionControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkspaceByVersionControlOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkspaceByVersionControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::CreateWorkspaceTemporaryTokenOutcome CloudstudioClient::CreateWorkspaceTemporaryToken(const CreateWorkspaceTemporaryTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkspaceTemporaryToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkspaceTemporaryTokenResponse rsp = CreateWorkspaceTemporaryTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkspaceTemporaryTokenOutcome(rsp);
        else
            return CreateWorkspaceTemporaryTokenOutcome(o.GetError());
    }
    else
    {
        return CreateWorkspaceTemporaryTokenOutcome(outcome.GetError());
    }
}

void CloudstudioClient::CreateWorkspaceTemporaryTokenAsync(const CreateWorkspaceTemporaryTokenRequest& request, const CreateWorkspaceTemporaryTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkspaceTemporaryToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::CreateWorkspaceTemporaryTokenOutcomeCallable CloudstudioClient::CreateWorkspaceTemporaryTokenCallable(const CreateWorkspaceTemporaryTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkspaceTemporaryTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkspaceTemporaryToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DeleteCustomizeTemplatesByIdOutcome CloudstudioClient::DeleteCustomizeTemplatesById(const DeleteCustomizeTemplatesByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomizeTemplatesById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomizeTemplatesByIdResponse rsp = DeleteCustomizeTemplatesByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomizeTemplatesByIdOutcome(rsp);
        else
            return DeleteCustomizeTemplatesByIdOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomizeTemplatesByIdOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DeleteCustomizeTemplatesByIdAsync(const DeleteCustomizeTemplatesByIdRequest& request, const DeleteCustomizeTemplatesByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomizeTemplatesById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DeleteCustomizeTemplatesByIdOutcomeCallable CloudstudioClient::DeleteCustomizeTemplatesByIdCallable(const DeleteCustomizeTemplatesByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomizeTemplatesByIdOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomizeTemplatesById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeCustomizeTemplatesOutcome CloudstudioClient::DescribeCustomizeTemplates(const DescribeCustomizeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomizeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomizeTemplatesResponse rsp = DescribeCustomizeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomizeTemplatesOutcome(rsp);
        else
            return DescribeCustomizeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomizeTemplatesOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeCustomizeTemplatesAsync(const DescribeCustomizeTemplatesRequest& request, const DescribeCustomizeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomizeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeCustomizeTemplatesOutcomeCallable CloudstudioClient::DescribeCustomizeTemplatesCallable(const DescribeCustomizeTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomizeTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomizeTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeCustomizeTemplatesByIdOutcome CloudstudioClient::DescribeCustomizeTemplatesById(const DescribeCustomizeTemplatesByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomizeTemplatesById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomizeTemplatesByIdResponse rsp = DescribeCustomizeTemplatesByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomizeTemplatesByIdOutcome(rsp);
        else
            return DescribeCustomizeTemplatesByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomizeTemplatesByIdOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeCustomizeTemplatesByIdAsync(const DescribeCustomizeTemplatesByIdRequest& request, const DescribeCustomizeTemplatesByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomizeTemplatesById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeCustomizeTemplatesByIdOutcomeCallable CloudstudioClient::DescribeCustomizeTemplatesByIdCallable(const DescribeCustomizeTemplatesByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomizeTemplatesByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomizeTemplatesById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeCustomizeTemplatesPresetsOutcome CloudstudioClient::DescribeCustomizeTemplatesPresets(const DescribeCustomizeTemplatesPresetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomizeTemplatesPresets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomizeTemplatesPresetsResponse rsp = DescribeCustomizeTemplatesPresetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomizeTemplatesPresetsOutcome(rsp);
        else
            return DescribeCustomizeTemplatesPresetsOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomizeTemplatesPresetsOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeCustomizeTemplatesPresetsAsync(const DescribeCustomizeTemplatesPresetsRequest& request, const DescribeCustomizeTemplatesPresetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomizeTemplatesPresets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeCustomizeTemplatesPresetsOutcomeCallable CloudstudioClient::DescribeCustomizeTemplatesPresetsCallable(const DescribeCustomizeTemplatesPresetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomizeTemplatesPresetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomizeTemplatesPresets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeWorkspaceEnvListOutcome CloudstudioClient::DescribeWorkspaceEnvList(const DescribeWorkspaceEnvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceEnvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceEnvListResponse rsp = DescribeWorkspaceEnvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceEnvListOutcome(rsp);
        else
            return DescribeWorkspaceEnvListOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceEnvListOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeWorkspaceEnvListAsync(const DescribeWorkspaceEnvListRequest& request, const DescribeWorkspaceEnvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkspaceEnvList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeWorkspaceEnvListOutcomeCallable CloudstudioClient::DescribeWorkspaceEnvListCallable(const DescribeWorkspaceEnvListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkspaceEnvListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkspaceEnvList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeWorkspaceIsReadyOutcome CloudstudioClient::DescribeWorkspaceIsReady(const DescribeWorkspaceIsReadyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceIsReady");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceIsReadyResponse rsp = DescribeWorkspaceIsReadyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceIsReadyOutcome(rsp);
        else
            return DescribeWorkspaceIsReadyOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceIsReadyOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeWorkspaceIsReadyAsync(const DescribeWorkspaceIsReadyRequest& request, const DescribeWorkspaceIsReadyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkspaceIsReady(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeWorkspaceIsReadyOutcomeCallable CloudstudioClient::DescribeWorkspaceIsReadyCallable(const DescribeWorkspaceIsReadyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkspaceIsReadyOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkspaceIsReady(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeWorkspaceNameExistOutcome CloudstudioClient::DescribeWorkspaceNameExist(const DescribeWorkspaceNameExistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceNameExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceNameExistResponse rsp = DescribeWorkspaceNameExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceNameExistOutcome(rsp);
        else
            return DescribeWorkspaceNameExistOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceNameExistOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeWorkspaceNameExistAsync(const DescribeWorkspaceNameExistRequest& request, const DescribeWorkspaceNameExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkspaceNameExist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeWorkspaceNameExistOutcomeCallable CloudstudioClient::DescribeWorkspaceNameExistCallable(const DescribeWorkspaceNameExistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkspaceNameExistOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkspaceNameExist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeWorkspaceStatusOutcome CloudstudioClient::DescribeWorkspaceStatus(const DescribeWorkspaceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceStatusResponse rsp = DescribeWorkspaceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceStatusOutcome(rsp);
        else
            return DescribeWorkspaceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceStatusOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeWorkspaceStatusAsync(const DescribeWorkspaceStatusRequest& request, const DescribeWorkspaceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkspaceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeWorkspaceStatusOutcomeCallable CloudstudioClient::DescribeWorkspaceStatusCallable(const DescribeWorkspaceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkspaceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkspaceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeWorkspaceStatusListOutcome CloudstudioClient::DescribeWorkspaceStatusList(const DescribeWorkspaceStatusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceStatusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceStatusListResponse rsp = DescribeWorkspaceStatusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceStatusListOutcome(rsp);
        else
            return DescribeWorkspaceStatusListOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceStatusListOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeWorkspaceStatusListAsync(const DescribeWorkspaceStatusListRequest& request, const DescribeWorkspaceStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkspaceStatusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeWorkspaceStatusListOutcomeCallable CloudstudioClient::DescribeWorkspaceStatusListCallable(const DescribeWorkspaceStatusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkspaceStatusListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkspaceStatusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::ModifyCustomizeTemplateVersionControlOutcome CloudstudioClient::ModifyCustomizeTemplateVersionControl(const ModifyCustomizeTemplateVersionControlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomizeTemplateVersionControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizeTemplateVersionControlResponse rsp = ModifyCustomizeTemplateVersionControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizeTemplateVersionControlOutcome(rsp);
        else
            return ModifyCustomizeTemplateVersionControlOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizeTemplateVersionControlOutcome(outcome.GetError());
    }
}

void CloudstudioClient::ModifyCustomizeTemplateVersionControlAsync(const ModifyCustomizeTemplateVersionControlRequest& request, const ModifyCustomizeTemplateVersionControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomizeTemplateVersionControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::ModifyCustomizeTemplateVersionControlOutcomeCallable CloudstudioClient::ModifyCustomizeTemplateVersionControlCallable(const ModifyCustomizeTemplateVersionControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomizeTemplateVersionControlOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomizeTemplateVersionControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::ModifyCustomizeTemplatesFullByIdOutcome CloudstudioClient::ModifyCustomizeTemplatesFullById(const ModifyCustomizeTemplatesFullByIdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomizeTemplatesFullById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizeTemplatesFullByIdResponse rsp = ModifyCustomizeTemplatesFullByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizeTemplatesFullByIdOutcome(rsp);
        else
            return ModifyCustomizeTemplatesFullByIdOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizeTemplatesFullByIdOutcome(outcome.GetError());
    }
}

void CloudstudioClient::ModifyCustomizeTemplatesFullByIdAsync(const ModifyCustomizeTemplatesFullByIdRequest& request, const ModifyCustomizeTemplatesFullByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomizeTemplatesFullById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::ModifyCustomizeTemplatesFullByIdOutcomeCallable CloudstudioClient::ModifyCustomizeTemplatesFullByIdCallable(const ModifyCustomizeTemplatesFullByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomizeTemplatesFullByIdOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomizeTemplatesFullById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::ModifyCustomizeTemplatesPartByIdOutcome CloudstudioClient::ModifyCustomizeTemplatesPartById(const ModifyCustomizeTemplatesPartByIdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomizeTemplatesPartById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizeTemplatesPartByIdResponse rsp = ModifyCustomizeTemplatesPartByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizeTemplatesPartByIdOutcome(rsp);
        else
            return ModifyCustomizeTemplatesPartByIdOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizeTemplatesPartByIdOutcome(outcome.GetError());
    }
}

void CloudstudioClient::ModifyCustomizeTemplatesPartByIdAsync(const ModifyCustomizeTemplatesPartByIdRequest& request, const ModifyCustomizeTemplatesPartByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomizeTemplatesPartById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::ModifyCustomizeTemplatesPartByIdOutcomeCallable CloudstudioClient::ModifyCustomizeTemplatesPartByIdCallable(const ModifyCustomizeTemplatesPartByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomizeTemplatesPartByIdOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomizeTemplatesPartById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::ModifyWorkspaceAttributesOutcome CloudstudioClient::ModifyWorkspaceAttributes(const ModifyWorkspaceAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkspaceAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkspaceAttributesResponse rsp = ModifyWorkspaceAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkspaceAttributesOutcome(rsp);
        else
            return ModifyWorkspaceAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkspaceAttributesOutcome(outcome.GetError());
    }
}

void CloudstudioClient::ModifyWorkspaceAttributesAsync(const ModifyWorkspaceAttributesRequest& request, const ModifyWorkspaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkspaceAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::ModifyWorkspaceAttributesOutcomeCallable CloudstudioClient::ModifyWorkspaceAttributesCallable(const ModifyWorkspaceAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkspaceAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkspaceAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::RecoverWorkspaceOutcome CloudstudioClient::RecoverWorkspace(const RecoverWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverWorkspaceResponse rsp = RecoverWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverWorkspaceOutcome(rsp);
        else
            return RecoverWorkspaceOutcome(o.GetError());
    }
    else
    {
        return RecoverWorkspaceOutcome(outcome.GetError());
    }
}

void CloudstudioClient::RecoverWorkspaceAsync(const RecoverWorkspaceRequest& request, const RecoverWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverWorkspace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::RecoverWorkspaceOutcomeCallable CloudstudioClient::RecoverWorkspaceCallable(const RecoverWorkspaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverWorkspaceOutcome()>>(
        [this, request]()
        {
            return this->RecoverWorkspace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::RemoveWorkspaceOutcome CloudstudioClient::RemoveWorkspace(const RemoveWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveWorkspaceResponse rsp = RemoveWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveWorkspaceOutcome(rsp);
        else
            return RemoveWorkspaceOutcome(o.GetError());
    }
    else
    {
        return RemoveWorkspaceOutcome(outcome.GetError());
    }
}

void CloudstudioClient::RemoveWorkspaceAsync(const RemoveWorkspaceRequest& request, const RemoveWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveWorkspace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::RemoveWorkspaceOutcomeCallable CloudstudioClient::RemoveWorkspaceCallable(const RemoveWorkspaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveWorkspaceOutcome()>>(
        [this, request]()
        {
            return this->RemoveWorkspace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::RunWorkspaceOutcome CloudstudioClient::RunWorkspace(const RunWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "RunWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunWorkspaceResponse rsp = RunWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunWorkspaceOutcome(rsp);
        else
            return RunWorkspaceOutcome(o.GetError());
    }
    else
    {
        return RunWorkspaceOutcome(outcome.GetError());
    }
}

void CloudstudioClient::RunWorkspaceAsync(const RunWorkspaceRequest& request, const RunWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunWorkspace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::RunWorkspaceOutcomeCallable CloudstudioClient::RunWorkspaceCallable(const RunWorkspaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunWorkspaceOutcome()>>(
        [this, request]()
        {
            return this->RunWorkspace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::StopWorkspaceOutcome CloudstudioClient::StopWorkspace(const StopWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "StopWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopWorkspaceResponse rsp = StopWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopWorkspaceOutcome(rsp);
        else
            return StopWorkspaceOutcome(o.GetError());
    }
    else
    {
        return StopWorkspaceOutcome(outcome.GetError());
    }
}

void CloudstudioClient::StopWorkspaceAsync(const StopWorkspaceRequest& request, const StopWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopWorkspace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::StopWorkspaceOutcomeCallable CloudstudioClient::StopWorkspaceCallable(const StopWorkspaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopWorkspaceOutcome()>>(
        [this, request]()
        {
            return this->StopWorkspace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


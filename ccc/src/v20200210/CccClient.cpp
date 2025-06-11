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

#include <tencentcloud/ccc/v20200210/CccClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ccc::V20200210;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-10";
    const string ENDPOINT = "ccc.tencentcloudapi.com";
}

CccClient::CccClient(const Credential &credential, const string &region) :
    CccClient(credential, region, ClientProfile())
{
}

CccClient::CccClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CccClient::AbortAgentCruiseDialingCampaignOutcome CccClient::AbortAgentCruiseDialingCampaign(const AbortAgentCruiseDialingCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "AbortAgentCruiseDialingCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AbortAgentCruiseDialingCampaignResponse rsp = AbortAgentCruiseDialingCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AbortAgentCruiseDialingCampaignOutcome(rsp);
        else
            return AbortAgentCruiseDialingCampaignOutcome(o.GetError());
    }
    else
    {
        return AbortAgentCruiseDialingCampaignOutcome(outcome.GetError());
    }
}

void CccClient::AbortAgentCruiseDialingCampaignAsync(const AbortAgentCruiseDialingCampaignRequest& request, const AbortAgentCruiseDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AbortAgentCruiseDialingCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::AbortAgentCruiseDialingCampaignOutcomeCallable CccClient::AbortAgentCruiseDialingCampaignCallable(const AbortAgentCruiseDialingCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AbortAgentCruiseDialingCampaignOutcome()>>(
        [this, request]()
        {
            return this->AbortAgentCruiseDialingCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::AbortPredictiveDialingCampaignOutcome CccClient::AbortPredictiveDialingCampaign(const AbortPredictiveDialingCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "AbortPredictiveDialingCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AbortPredictiveDialingCampaignResponse rsp = AbortPredictiveDialingCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AbortPredictiveDialingCampaignOutcome(rsp);
        else
            return AbortPredictiveDialingCampaignOutcome(o.GetError());
    }
    else
    {
        return AbortPredictiveDialingCampaignOutcome(outcome.GetError());
    }
}

void CccClient::AbortPredictiveDialingCampaignAsync(const AbortPredictiveDialingCampaignRequest& request, const AbortPredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AbortPredictiveDialingCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::AbortPredictiveDialingCampaignOutcomeCallable CccClient::AbortPredictiveDialingCampaignCallable(const AbortPredictiveDialingCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AbortPredictiveDialingCampaignOutcome()>>(
        [this, request]()
        {
            return this->AbortPredictiveDialingCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::BindNumberCallInInterfaceOutcome CccClient::BindNumberCallInInterface(const BindNumberCallInInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "BindNumberCallInInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindNumberCallInInterfaceResponse rsp = BindNumberCallInInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindNumberCallInInterfaceOutcome(rsp);
        else
            return BindNumberCallInInterfaceOutcome(o.GetError());
    }
    else
    {
        return BindNumberCallInInterfaceOutcome(outcome.GetError());
    }
}

void CccClient::BindNumberCallInInterfaceAsync(const BindNumberCallInInterfaceRequest& request, const BindNumberCallInInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindNumberCallInInterface(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::BindNumberCallInInterfaceOutcomeCallable CccClient::BindNumberCallInInterfaceCallable(const BindNumberCallInInterfaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindNumberCallInInterfaceOutcome()>>(
        [this, request]()
        {
            return this->BindNumberCallInInterface(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::BindNumberCallOutSkillGroupOutcome CccClient::BindNumberCallOutSkillGroup(const BindNumberCallOutSkillGroupRequest &request)
{
    auto outcome = MakeRequest(request, "BindNumberCallOutSkillGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindNumberCallOutSkillGroupResponse rsp = BindNumberCallOutSkillGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindNumberCallOutSkillGroupOutcome(rsp);
        else
            return BindNumberCallOutSkillGroupOutcome(o.GetError());
    }
    else
    {
        return BindNumberCallOutSkillGroupOutcome(outcome.GetError());
    }
}

void CccClient::BindNumberCallOutSkillGroupAsync(const BindNumberCallOutSkillGroupRequest& request, const BindNumberCallOutSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindNumberCallOutSkillGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::BindNumberCallOutSkillGroupOutcomeCallable CccClient::BindNumberCallOutSkillGroupCallable(const BindNumberCallOutSkillGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindNumberCallOutSkillGroupOutcome()>>(
        [this, request]()
        {
            return this->BindNumberCallOutSkillGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::BindStaffSkillGroupListOutcome CccClient::BindStaffSkillGroupList(const BindStaffSkillGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "BindStaffSkillGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindStaffSkillGroupListResponse rsp = BindStaffSkillGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindStaffSkillGroupListOutcome(rsp);
        else
            return BindStaffSkillGroupListOutcome(o.GetError());
    }
    else
    {
        return BindStaffSkillGroupListOutcome(outcome.GetError());
    }
}

void CccClient::BindStaffSkillGroupListAsync(const BindStaffSkillGroupListRequest& request, const BindStaffSkillGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindStaffSkillGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::BindStaffSkillGroupListOutcomeCallable CccClient::BindStaffSkillGroupListCallable(const BindStaffSkillGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindStaffSkillGroupListOutcome()>>(
        [this, request]()
        {
            return this->BindStaffSkillGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateAIAgentCallOutcome CccClient::CreateAIAgentCall(const CreateAIAgentCallRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAIAgentCall");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAIAgentCallResponse rsp = CreateAIAgentCallResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAIAgentCallOutcome(rsp);
        else
            return CreateAIAgentCallOutcome(o.GetError());
    }
    else
    {
        return CreateAIAgentCallOutcome(outcome.GetError());
    }
}

void CccClient::CreateAIAgentCallAsync(const CreateAIAgentCallRequest& request, const CreateAIAgentCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAIAgentCall(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateAIAgentCallOutcomeCallable CccClient::CreateAIAgentCallCallable(const CreateAIAgentCallRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAIAgentCallOutcome()>>(
        [this, request]()
        {
            return this->CreateAIAgentCall(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateAICallOutcome CccClient::CreateAICall(const CreateAICallRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAICall");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAICallResponse rsp = CreateAICallResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAICallOutcome(rsp);
        else
            return CreateAICallOutcome(o.GetError());
    }
    else
    {
        return CreateAICallOutcome(outcome.GetError());
    }
}

void CccClient::CreateAICallAsync(const CreateAICallRequest& request, const CreateAICallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAICall(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateAICallOutcomeCallable CccClient::CreateAICallCallable(const CreateAICallRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAICallOutcome()>>(
        [this, request]()
        {
            return this->CreateAICall(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateAdminURLOutcome CccClient::CreateAdminURL(const CreateAdminURLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAdminURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAdminURLResponse rsp = CreateAdminURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAdminURLOutcome(rsp);
        else
            return CreateAdminURLOutcome(o.GetError());
    }
    else
    {
        return CreateAdminURLOutcome(outcome.GetError());
    }
}

void CccClient::CreateAdminURLAsync(const CreateAdminURLRequest& request, const CreateAdminURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAdminURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateAdminURLOutcomeCallable CccClient::CreateAdminURLCallable(const CreateAdminURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAdminURLOutcome()>>(
        [this, request]()
        {
            return this->CreateAdminURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateAgentCruiseDialingCampaignOutcome CccClient::CreateAgentCruiseDialingCampaign(const CreateAgentCruiseDialingCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentCruiseDialingCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentCruiseDialingCampaignResponse rsp = CreateAgentCruiseDialingCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentCruiseDialingCampaignOutcome(rsp);
        else
            return CreateAgentCruiseDialingCampaignOutcome(o.GetError());
    }
    else
    {
        return CreateAgentCruiseDialingCampaignOutcome(outcome.GetError());
    }
}

void CccClient::CreateAgentCruiseDialingCampaignAsync(const CreateAgentCruiseDialingCampaignRequest& request, const CreateAgentCruiseDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAgentCruiseDialingCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateAgentCruiseDialingCampaignOutcomeCallable CccClient::CreateAgentCruiseDialingCampaignCallable(const CreateAgentCruiseDialingCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAgentCruiseDialingCampaignOutcome()>>(
        [this, request]()
        {
            return this->CreateAgentCruiseDialingCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateAutoCalloutTaskOutcome CccClient::CreateAutoCalloutTask(const CreateAutoCalloutTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoCalloutTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoCalloutTaskResponse rsp = CreateAutoCalloutTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoCalloutTaskOutcome(rsp);
        else
            return CreateAutoCalloutTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAutoCalloutTaskOutcome(outcome.GetError());
    }
}

void CccClient::CreateAutoCalloutTaskAsync(const CreateAutoCalloutTaskRequest& request, const CreateAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAutoCalloutTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateAutoCalloutTaskOutcomeCallable CccClient::CreateAutoCalloutTaskCallable(const CreateAutoCalloutTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAutoCalloutTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAutoCalloutTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateCCCSkillGroupOutcome CccClient::CreateCCCSkillGroup(const CreateCCCSkillGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCCCSkillGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCCCSkillGroupResponse rsp = CreateCCCSkillGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCCCSkillGroupOutcome(rsp);
        else
            return CreateCCCSkillGroupOutcome(o.GetError());
    }
    else
    {
        return CreateCCCSkillGroupOutcome(outcome.GetError());
    }
}

void CccClient::CreateCCCSkillGroupAsync(const CreateCCCSkillGroupRequest& request, const CreateCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCCCSkillGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateCCCSkillGroupOutcomeCallable CccClient::CreateCCCSkillGroupCallable(const CreateCCCSkillGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCCCSkillGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateCCCSkillGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateCallOutSessionOutcome CccClient::CreateCallOutSession(const CreateCallOutSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCallOutSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCallOutSessionResponse rsp = CreateCallOutSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCallOutSessionOutcome(rsp);
        else
            return CreateCallOutSessionOutcome(o.GetError());
    }
    else
    {
        return CreateCallOutSessionOutcome(outcome.GetError());
    }
}

void CccClient::CreateCallOutSessionAsync(const CreateCallOutSessionRequest& request, const CreateCallOutSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCallOutSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateCallOutSessionOutcomeCallable CccClient::CreateCallOutSessionCallable(const CreateCallOutSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCallOutSessionOutcome()>>(
        [this, request]()
        {
            return this->CreateCallOutSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateCarrierPrivilegeNumberApplicantOutcome CccClient::CreateCarrierPrivilegeNumberApplicant(const CreateCarrierPrivilegeNumberApplicantRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCarrierPrivilegeNumberApplicant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCarrierPrivilegeNumberApplicantResponse rsp = CreateCarrierPrivilegeNumberApplicantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCarrierPrivilegeNumberApplicantOutcome(rsp);
        else
            return CreateCarrierPrivilegeNumberApplicantOutcome(o.GetError());
    }
    else
    {
        return CreateCarrierPrivilegeNumberApplicantOutcome(outcome.GetError());
    }
}

void CccClient::CreateCarrierPrivilegeNumberApplicantAsync(const CreateCarrierPrivilegeNumberApplicantRequest& request, const CreateCarrierPrivilegeNumberApplicantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCarrierPrivilegeNumberApplicant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateCarrierPrivilegeNumberApplicantOutcomeCallable CccClient::CreateCarrierPrivilegeNumberApplicantCallable(const CreateCarrierPrivilegeNumberApplicantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCarrierPrivilegeNumberApplicantOutcome()>>(
        [this, request]()
        {
            return this->CreateCarrierPrivilegeNumberApplicant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateCompanyApplyOutcome CccClient::CreateCompanyApply(const CreateCompanyApplyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCompanyApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCompanyApplyResponse rsp = CreateCompanyApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCompanyApplyOutcome(rsp);
        else
            return CreateCompanyApplyOutcome(o.GetError());
    }
    else
    {
        return CreateCompanyApplyOutcome(outcome.GetError());
    }
}

void CccClient::CreateCompanyApplyAsync(const CreateCompanyApplyRequest& request, const CreateCompanyApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCompanyApply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateCompanyApplyOutcomeCallable CccClient::CreateCompanyApplyCallable(const CreateCompanyApplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCompanyApplyOutcome()>>(
        [this, request]()
        {
            return this->CreateCompanyApply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateExtensionOutcome CccClient::CreateExtension(const CreateExtensionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExtension");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExtensionResponse rsp = CreateExtensionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExtensionOutcome(rsp);
        else
            return CreateExtensionOutcome(o.GetError());
    }
    else
    {
        return CreateExtensionOutcome(outcome.GetError());
    }
}

void CccClient::CreateExtensionAsync(const CreateExtensionRequest& request, const CreateExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExtension(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateExtensionOutcomeCallable CccClient::CreateExtensionCallable(const CreateExtensionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExtensionOutcome()>>(
        [this, request]()
        {
            return this->CreateExtension(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateIVRSessionOutcome CccClient::CreateIVRSession(const CreateIVRSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIVRSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIVRSessionResponse rsp = CreateIVRSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIVRSessionOutcome(rsp);
        else
            return CreateIVRSessionOutcome(o.GetError());
    }
    else
    {
        return CreateIVRSessionOutcome(outcome.GetError());
    }
}

void CccClient::CreateIVRSessionAsync(const CreateIVRSessionRequest& request, const CreateIVRSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIVRSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateIVRSessionOutcomeCallable CccClient::CreateIVRSessionCallable(const CreateIVRSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIVRSessionOutcome()>>(
        [this, request]()
        {
            return this->CreateIVRSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateOwnNumberApplyOutcome CccClient::CreateOwnNumberApply(const CreateOwnNumberApplyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOwnNumberApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOwnNumberApplyResponse rsp = CreateOwnNumberApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOwnNumberApplyOutcome(rsp);
        else
            return CreateOwnNumberApplyOutcome(o.GetError());
    }
    else
    {
        return CreateOwnNumberApplyOutcome(outcome.GetError());
    }
}

void CccClient::CreateOwnNumberApplyAsync(const CreateOwnNumberApplyRequest& request, const CreateOwnNumberApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOwnNumberApply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateOwnNumberApplyOutcomeCallable CccClient::CreateOwnNumberApplyCallable(const CreateOwnNumberApplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOwnNumberApplyOutcome()>>(
        [this, request]()
        {
            return this->CreateOwnNumberApply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreatePredictiveDialingCampaignOutcome CccClient::CreatePredictiveDialingCampaign(const CreatePredictiveDialingCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePredictiveDialingCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePredictiveDialingCampaignResponse rsp = CreatePredictiveDialingCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePredictiveDialingCampaignOutcome(rsp);
        else
            return CreatePredictiveDialingCampaignOutcome(o.GetError());
    }
    else
    {
        return CreatePredictiveDialingCampaignOutcome(outcome.GetError());
    }
}

void CccClient::CreatePredictiveDialingCampaignAsync(const CreatePredictiveDialingCampaignRequest& request, const CreatePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePredictiveDialingCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreatePredictiveDialingCampaignOutcomeCallable CccClient::CreatePredictiveDialingCampaignCallable(const CreatePredictiveDialingCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePredictiveDialingCampaignOutcome()>>(
        [this, request]()
        {
            return this->CreatePredictiveDialingCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateSDKLoginTokenOutcome CccClient::CreateSDKLoginToken(const CreateSDKLoginTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSDKLoginToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSDKLoginTokenResponse rsp = CreateSDKLoginTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSDKLoginTokenOutcome(rsp);
        else
            return CreateSDKLoginTokenOutcome(o.GetError());
    }
    else
    {
        return CreateSDKLoginTokenOutcome(outcome.GetError());
    }
}

void CccClient::CreateSDKLoginTokenAsync(const CreateSDKLoginTokenRequest& request, const CreateSDKLoginTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSDKLoginToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateSDKLoginTokenOutcomeCallable CccClient::CreateSDKLoginTokenCallable(const CreateSDKLoginTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSDKLoginTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateSDKLoginToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateStaffOutcome CccClient::CreateStaff(const CreateStaffRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStaff");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStaffResponse rsp = CreateStaffResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStaffOutcome(rsp);
        else
            return CreateStaffOutcome(o.GetError());
    }
    else
    {
        return CreateStaffOutcome(outcome.GetError());
    }
}

void CccClient::CreateStaffAsync(const CreateStaffRequest& request, const CreateStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStaff(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateStaffOutcomeCallable CccClient::CreateStaffCallable(const CreateStaffRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStaffOutcome()>>(
        [this, request]()
        {
            return this->CreateStaff(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateUserSigOutcome CccClient::CreateUserSig(const CreateUserSigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserSig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserSigResponse rsp = CreateUserSigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserSigOutcome(rsp);
        else
            return CreateUserSigOutcome(o.GetError());
    }
    else
    {
        return CreateUserSigOutcome(outcome.GetError());
    }
}

void CccClient::CreateUserSigAsync(const CreateUserSigRequest& request, const CreateUserSigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserSig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateUserSigOutcomeCallable CccClient::CreateUserSigCallable(const CreateUserSigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserSigOutcome()>>(
        [this, request]()
        {
            return this->CreateUserSig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DeleteCCCSkillGroupOutcome CccClient::DeleteCCCSkillGroup(const DeleteCCCSkillGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCCSkillGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCCSkillGroupResponse rsp = DeleteCCCSkillGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCCSkillGroupOutcome(rsp);
        else
            return DeleteCCCSkillGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteCCCSkillGroupOutcome(outcome.GetError());
    }
}

void CccClient::DeleteCCCSkillGroupAsync(const DeleteCCCSkillGroupRequest& request, const DeleteCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCCCSkillGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DeleteCCCSkillGroupOutcomeCallable CccClient::DeleteCCCSkillGroupCallable(const DeleteCCCSkillGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCCCSkillGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteCCCSkillGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DeleteExtensionOutcome CccClient::DeleteExtension(const DeleteExtensionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteExtension");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteExtensionResponse rsp = DeleteExtensionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteExtensionOutcome(rsp);
        else
            return DeleteExtensionOutcome(o.GetError());
    }
    else
    {
        return DeleteExtensionOutcome(outcome.GetError());
    }
}

void CccClient::DeleteExtensionAsync(const DeleteExtensionRequest& request, const DeleteExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteExtension(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DeleteExtensionOutcomeCallable CccClient::DeleteExtensionCallable(const DeleteExtensionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteExtensionOutcome()>>(
        [this, request]()
        {
            return this->DeleteExtension(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DeletePredictiveDialingCampaignOutcome CccClient::DeletePredictiveDialingCampaign(const DeletePredictiveDialingCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePredictiveDialingCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePredictiveDialingCampaignResponse rsp = DeletePredictiveDialingCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePredictiveDialingCampaignOutcome(rsp);
        else
            return DeletePredictiveDialingCampaignOutcome(o.GetError());
    }
    else
    {
        return DeletePredictiveDialingCampaignOutcome(outcome.GetError());
    }
}

void CccClient::DeletePredictiveDialingCampaignAsync(const DeletePredictiveDialingCampaignRequest& request, const DeletePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePredictiveDialingCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DeletePredictiveDialingCampaignOutcomeCallable CccClient::DeletePredictiveDialingCampaignCallable(const DeletePredictiveDialingCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePredictiveDialingCampaignOutcome()>>(
        [this, request]()
        {
            return this->DeletePredictiveDialingCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DeleteStaffOutcome CccClient::DeleteStaff(const DeleteStaffRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStaff");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStaffResponse rsp = DeleteStaffResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStaffOutcome(rsp);
        else
            return DeleteStaffOutcome(o.GetError());
    }
    else
    {
        return DeleteStaffOutcome(outcome.GetError());
    }
}

void CccClient::DeleteStaffAsync(const DeleteStaffRequest& request, const DeleteStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStaff(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DeleteStaffOutcomeCallable CccClient::DeleteStaffCallable(const DeleteStaffRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStaffOutcome()>>(
        [this, request]()
        {
            return this->DeleteStaff(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeAICallExtractResultOutcome CccClient::DescribeAICallExtractResult(const DescribeAICallExtractResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAICallExtractResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAICallExtractResultResponse rsp = DescribeAICallExtractResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAICallExtractResultOutcome(rsp);
        else
            return DescribeAICallExtractResultOutcome(o.GetError());
    }
    else
    {
        return DescribeAICallExtractResultOutcome(outcome.GetError());
    }
}

void CccClient::DescribeAICallExtractResultAsync(const DescribeAICallExtractResultRequest& request, const DescribeAICallExtractResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAICallExtractResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeAICallExtractResultOutcomeCallable CccClient::DescribeAICallExtractResultCallable(const DescribeAICallExtractResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAICallExtractResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeAICallExtractResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeAILatencyOutcome CccClient::DescribeAILatency(const DescribeAILatencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAILatency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAILatencyResponse rsp = DescribeAILatencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAILatencyOutcome(rsp);
        else
            return DescribeAILatencyOutcome(o.GetError());
    }
    else
    {
        return DescribeAILatencyOutcome(outcome.GetError());
    }
}

void CccClient::DescribeAILatencyAsync(const DescribeAILatencyRequest& request, const DescribeAILatencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAILatency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeAILatencyOutcomeCallable CccClient::DescribeAILatencyCallable(const DescribeAILatencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAILatencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeAILatency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeActiveCarrierPrivilegeNumberOutcome CccClient::DescribeActiveCarrierPrivilegeNumber(const DescribeActiveCarrierPrivilegeNumberRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeActiveCarrierPrivilegeNumber");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeActiveCarrierPrivilegeNumberResponse rsp = DescribeActiveCarrierPrivilegeNumberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeActiveCarrierPrivilegeNumberOutcome(rsp);
        else
            return DescribeActiveCarrierPrivilegeNumberOutcome(o.GetError());
    }
    else
    {
        return DescribeActiveCarrierPrivilegeNumberOutcome(outcome.GetError());
    }
}

void CccClient::DescribeActiveCarrierPrivilegeNumberAsync(const DescribeActiveCarrierPrivilegeNumberRequest& request, const DescribeActiveCarrierPrivilegeNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeActiveCarrierPrivilegeNumber(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeActiveCarrierPrivilegeNumberOutcomeCallable CccClient::DescribeActiveCarrierPrivilegeNumberCallable(const DescribeActiveCarrierPrivilegeNumberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeActiveCarrierPrivilegeNumberOutcome()>>(
        [this, request]()
        {
            return this->DescribeActiveCarrierPrivilegeNumber(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeAgentCruiseDialingCampaignOutcome CccClient::DescribeAgentCruiseDialingCampaign(const DescribeAgentCruiseDialingCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentCruiseDialingCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentCruiseDialingCampaignResponse rsp = DescribeAgentCruiseDialingCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentCruiseDialingCampaignOutcome(rsp);
        else
            return DescribeAgentCruiseDialingCampaignOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentCruiseDialingCampaignOutcome(outcome.GetError());
    }
}

void CccClient::DescribeAgentCruiseDialingCampaignAsync(const DescribeAgentCruiseDialingCampaignRequest& request, const DescribeAgentCruiseDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentCruiseDialingCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeAgentCruiseDialingCampaignOutcomeCallable CccClient::DescribeAgentCruiseDialingCampaignCallable(const DescribeAgentCruiseDialingCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentCruiseDialingCampaignOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentCruiseDialingCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeAutoCalloutTaskOutcome CccClient::DescribeAutoCalloutTask(const DescribeAutoCalloutTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoCalloutTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoCalloutTaskResponse rsp = DescribeAutoCalloutTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoCalloutTaskOutcome(rsp);
        else
            return DescribeAutoCalloutTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoCalloutTaskOutcome(outcome.GetError());
    }
}

void CccClient::DescribeAutoCalloutTaskAsync(const DescribeAutoCalloutTaskRequest& request, const DescribeAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoCalloutTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeAutoCalloutTaskOutcomeCallable CccClient::DescribeAutoCalloutTaskCallable(const DescribeAutoCalloutTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoCalloutTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoCalloutTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeAutoCalloutTasksOutcome CccClient::DescribeAutoCalloutTasks(const DescribeAutoCalloutTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoCalloutTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoCalloutTasksResponse rsp = DescribeAutoCalloutTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoCalloutTasksOutcome(rsp);
        else
            return DescribeAutoCalloutTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoCalloutTasksOutcome(outcome.GetError());
    }
}

void CccClient::DescribeAutoCalloutTasksAsync(const DescribeAutoCalloutTasksRequest& request, const DescribeAutoCalloutTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoCalloutTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeAutoCalloutTasksOutcomeCallable CccClient::DescribeAutoCalloutTasksCallable(const DescribeAutoCalloutTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoCalloutTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoCalloutTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeCCCBuyInfoListOutcome CccClient::DescribeCCCBuyInfoList(const DescribeCCCBuyInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCCBuyInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCCBuyInfoListResponse rsp = DescribeCCCBuyInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCCBuyInfoListOutcome(rsp);
        else
            return DescribeCCCBuyInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCCBuyInfoListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeCCCBuyInfoListAsync(const DescribeCCCBuyInfoListRequest& request, const DescribeCCCBuyInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCCBuyInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeCCCBuyInfoListOutcomeCallable CccClient::DescribeCCCBuyInfoListCallable(const DescribeCCCBuyInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCCBuyInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCCBuyInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeCallInMetricsOutcome CccClient::DescribeCallInMetrics(const DescribeCallInMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallInMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallInMetricsResponse rsp = DescribeCallInMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallInMetricsOutcome(rsp);
        else
            return DescribeCallInMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeCallInMetricsOutcome(outcome.GetError());
    }
}

void CccClient::DescribeCallInMetricsAsync(const DescribeCallInMetricsRequest& request, const DescribeCallInMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallInMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeCallInMetricsOutcomeCallable CccClient::DescribeCallInMetricsCallable(const DescribeCallInMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallInMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallInMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeCarrierPrivilegeNumberApplicantsOutcome CccClient::DescribeCarrierPrivilegeNumberApplicants(const DescribeCarrierPrivilegeNumberApplicantsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCarrierPrivilegeNumberApplicants");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCarrierPrivilegeNumberApplicantsResponse rsp = DescribeCarrierPrivilegeNumberApplicantsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCarrierPrivilegeNumberApplicantsOutcome(rsp);
        else
            return DescribeCarrierPrivilegeNumberApplicantsOutcome(o.GetError());
    }
    else
    {
        return DescribeCarrierPrivilegeNumberApplicantsOutcome(outcome.GetError());
    }
}

void CccClient::DescribeCarrierPrivilegeNumberApplicantsAsync(const DescribeCarrierPrivilegeNumberApplicantsRequest& request, const DescribeCarrierPrivilegeNumberApplicantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCarrierPrivilegeNumberApplicants(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeCarrierPrivilegeNumberApplicantsOutcomeCallable CccClient::DescribeCarrierPrivilegeNumberApplicantsCallable(const DescribeCarrierPrivilegeNumberApplicantsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCarrierPrivilegeNumberApplicantsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCarrierPrivilegeNumberApplicants(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeChatMessagesOutcome CccClient::DescribeChatMessages(const DescribeChatMessagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChatMessages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChatMessagesResponse rsp = DescribeChatMessagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChatMessagesOutcome(rsp);
        else
            return DescribeChatMessagesOutcome(o.GetError());
    }
    else
    {
        return DescribeChatMessagesOutcome(outcome.GetError());
    }
}

void CccClient::DescribeChatMessagesAsync(const DescribeChatMessagesRequest& request, const DescribeChatMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChatMessages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeChatMessagesOutcomeCallable CccClient::DescribeChatMessagesCallable(const DescribeChatMessagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChatMessagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeChatMessages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeCompanyListOutcome CccClient::DescribeCompanyList(const DescribeCompanyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompanyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompanyListResponse rsp = DescribeCompanyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompanyListOutcome(rsp);
        else
            return DescribeCompanyListOutcome(o.GetError());
    }
    else
    {
        return DescribeCompanyListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeCompanyListAsync(const DescribeCompanyListRequest& request, const DescribeCompanyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCompanyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeCompanyListOutcomeCallable CccClient::DescribeCompanyListCallable(const DescribeCompanyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCompanyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCompanyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeExtensionOutcome CccClient::DescribeExtension(const DescribeExtensionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtension");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtensionResponse rsp = DescribeExtensionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtensionOutcome(rsp);
        else
            return DescribeExtensionOutcome(o.GetError());
    }
    else
    {
        return DescribeExtensionOutcome(outcome.GetError());
    }
}

void CccClient::DescribeExtensionAsync(const DescribeExtensionRequest& request, const DescribeExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExtension(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeExtensionOutcomeCallable CccClient::DescribeExtensionCallable(const DescribeExtensionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExtensionOutcome()>>(
        [this, request]()
        {
            return this->DescribeExtension(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeExtensionsOutcome CccClient::DescribeExtensions(const DescribeExtensionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtensions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtensionsResponse rsp = DescribeExtensionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtensionsOutcome(rsp);
        else
            return DescribeExtensionsOutcome(o.GetError());
    }
    else
    {
        return DescribeExtensionsOutcome(outcome.GetError());
    }
}

void CccClient::DescribeExtensionsAsync(const DescribeExtensionsRequest& request, const DescribeExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExtensions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeExtensionsOutcomeCallable CccClient::DescribeExtensionsCallable(const DescribeExtensionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExtensionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeExtensions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeIMCdrListOutcome CccClient::DescribeIMCdrList(const DescribeIMCdrListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIMCdrList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIMCdrListResponse rsp = DescribeIMCdrListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIMCdrListOutcome(rsp);
        else
            return DescribeIMCdrListOutcome(o.GetError());
    }
    else
    {
        return DescribeIMCdrListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeIMCdrListAsync(const DescribeIMCdrListRequest& request, const DescribeIMCdrListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIMCdrList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeIMCdrListOutcomeCallable CccClient::DescribeIMCdrListCallable(const DescribeIMCdrListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIMCdrListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIMCdrList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeIMCdrsOutcome CccClient::DescribeIMCdrs(const DescribeIMCdrsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIMCdrs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIMCdrsResponse rsp = DescribeIMCdrsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIMCdrsOutcome(rsp);
        else
            return DescribeIMCdrsOutcome(o.GetError());
    }
    else
    {
        return DescribeIMCdrsOutcome(outcome.GetError());
    }
}

void CccClient::DescribeIMCdrsAsync(const DescribeIMCdrsRequest& request, const DescribeIMCdrsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIMCdrs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeIMCdrsOutcomeCallable CccClient::DescribeIMCdrsCallable(const DescribeIMCdrsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIMCdrsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIMCdrs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeIvrAudioListOutcome CccClient::DescribeIvrAudioList(const DescribeIvrAudioListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIvrAudioList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIvrAudioListResponse rsp = DescribeIvrAudioListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIvrAudioListOutcome(rsp);
        else
            return DescribeIvrAudioListOutcome(o.GetError());
    }
    else
    {
        return DescribeIvrAudioListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeIvrAudioListAsync(const DescribeIvrAudioListRequest& request, const DescribeIvrAudioListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIvrAudioList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeIvrAudioListOutcomeCallable CccClient::DescribeIvrAudioListCallable(const DescribeIvrAudioListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIvrAudioListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIvrAudioList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeNumbersOutcome CccClient::DescribeNumbers(const DescribeNumbersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNumbers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNumbersResponse rsp = DescribeNumbersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNumbersOutcome(rsp);
        else
            return DescribeNumbersOutcome(o.GetError());
    }
    else
    {
        return DescribeNumbersOutcome(outcome.GetError());
    }
}

void CccClient::DescribeNumbersAsync(const DescribeNumbersRequest& request, const DescribeNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNumbers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeNumbersOutcomeCallable CccClient::DescribeNumbersCallable(const DescribeNumbersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNumbersOutcome()>>(
        [this, request]()
        {
            return this->DescribeNumbers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribePSTNActiveSessionListOutcome CccClient::DescribePSTNActiveSessionList(const DescribePSTNActiveSessionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePSTNActiveSessionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePSTNActiveSessionListResponse rsp = DescribePSTNActiveSessionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePSTNActiveSessionListOutcome(rsp);
        else
            return DescribePSTNActiveSessionListOutcome(o.GetError());
    }
    else
    {
        return DescribePSTNActiveSessionListOutcome(outcome.GetError());
    }
}

void CccClient::DescribePSTNActiveSessionListAsync(const DescribePSTNActiveSessionListRequest& request, const DescribePSTNActiveSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePSTNActiveSessionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribePSTNActiveSessionListOutcomeCallable CccClient::DescribePSTNActiveSessionListCallable(const DescribePSTNActiveSessionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePSTNActiveSessionListOutcome()>>(
        [this, request]()
        {
            return this->DescribePSTNActiveSessionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribePredictiveDialingCampaignOutcome CccClient::DescribePredictiveDialingCampaign(const DescribePredictiveDialingCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePredictiveDialingCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePredictiveDialingCampaignResponse rsp = DescribePredictiveDialingCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePredictiveDialingCampaignOutcome(rsp);
        else
            return DescribePredictiveDialingCampaignOutcome(o.GetError());
    }
    else
    {
        return DescribePredictiveDialingCampaignOutcome(outcome.GetError());
    }
}

void CccClient::DescribePredictiveDialingCampaignAsync(const DescribePredictiveDialingCampaignRequest& request, const DescribePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePredictiveDialingCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribePredictiveDialingCampaignOutcomeCallable CccClient::DescribePredictiveDialingCampaignCallable(const DescribePredictiveDialingCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePredictiveDialingCampaignOutcome()>>(
        [this, request]()
        {
            return this->DescribePredictiveDialingCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribePredictiveDialingCampaignsOutcome CccClient::DescribePredictiveDialingCampaigns(const DescribePredictiveDialingCampaignsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePredictiveDialingCampaigns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePredictiveDialingCampaignsResponse rsp = DescribePredictiveDialingCampaignsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePredictiveDialingCampaignsOutcome(rsp);
        else
            return DescribePredictiveDialingCampaignsOutcome(o.GetError());
    }
    else
    {
        return DescribePredictiveDialingCampaignsOutcome(outcome.GetError());
    }
}

void CccClient::DescribePredictiveDialingCampaignsAsync(const DescribePredictiveDialingCampaignsRequest& request, const DescribePredictiveDialingCampaignsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePredictiveDialingCampaigns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribePredictiveDialingCampaignsOutcomeCallable CccClient::DescribePredictiveDialingCampaignsCallable(const DescribePredictiveDialingCampaignsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePredictiveDialingCampaignsOutcome()>>(
        [this, request]()
        {
            return this->DescribePredictiveDialingCampaigns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribePredictiveDialingSessionsOutcome CccClient::DescribePredictiveDialingSessions(const DescribePredictiveDialingSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePredictiveDialingSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePredictiveDialingSessionsResponse rsp = DescribePredictiveDialingSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePredictiveDialingSessionsOutcome(rsp);
        else
            return DescribePredictiveDialingSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribePredictiveDialingSessionsOutcome(outcome.GetError());
    }
}

void CccClient::DescribePredictiveDialingSessionsAsync(const DescribePredictiveDialingSessionsRequest& request, const DescribePredictiveDialingSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePredictiveDialingSessions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribePredictiveDialingSessionsOutcomeCallable CccClient::DescribePredictiveDialingSessionsCallable(const DescribePredictiveDialingSessionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePredictiveDialingSessionsOutcome()>>(
        [this, request]()
        {
            return this->DescribePredictiveDialingSessions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeProtectedTelCdrOutcome CccClient::DescribeProtectedTelCdr(const DescribeProtectedTelCdrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtectedTelCdr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectedTelCdrResponse rsp = DescribeProtectedTelCdrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectedTelCdrOutcome(rsp);
        else
            return DescribeProtectedTelCdrOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectedTelCdrOutcome(outcome.GetError());
    }
}

void CccClient::DescribeProtectedTelCdrAsync(const DescribeProtectedTelCdrRequest& request, const DescribeProtectedTelCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProtectedTelCdr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeProtectedTelCdrOutcomeCallable CccClient::DescribeProtectedTelCdrCallable(const DescribeProtectedTelCdrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProtectedTelCdrOutcome()>>(
        [this, request]()
        {
            return this->DescribeProtectedTelCdr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeSkillGroupInfoListOutcome CccClient::DescribeSkillGroupInfoList(const DescribeSkillGroupInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSkillGroupInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSkillGroupInfoListResponse rsp = DescribeSkillGroupInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSkillGroupInfoListOutcome(rsp);
        else
            return DescribeSkillGroupInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeSkillGroupInfoListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeSkillGroupInfoListAsync(const DescribeSkillGroupInfoListRequest& request, const DescribeSkillGroupInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSkillGroupInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeSkillGroupInfoListOutcomeCallable CccClient::DescribeSkillGroupInfoListCallable(const DescribeSkillGroupInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSkillGroupInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSkillGroupInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeStaffInfoListOutcome CccClient::DescribeStaffInfoList(const DescribeStaffInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStaffInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStaffInfoListResponse rsp = DescribeStaffInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStaffInfoListOutcome(rsp);
        else
            return DescribeStaffInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStaffInfoListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeStaffInfoListAsync(const DescribeStaffInfoListRequest& request, const DescribeStaffInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStaffInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeStaffInfoListOutcomeCallable CccClient::DescribeStaffInfoListCallable(const DescribeStaffInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStaffInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStaffInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeStaffStatusMetricsOutcome CccClient::DescribeStaffStatusMetrics(const DescribeStaffStatusMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStaffStatusMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStaffStatusMetricsResponse rsp = DescribeStaffStatusMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStaffStatusMetricsOutcome(rsp);
        else
            return DescribeStaffStatusMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeStaffStatusMetricsOutcome(outcome.GetError());
    }
}

void CccClient::DescribeStaffStatusMetricsAsync(const DescribeStaffStatusMetricsRequest& request, const DescribeStaffStatusMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStaffStatusMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeStaffStatusMetricsOutcomeCallable CccClient::DescribeStaffStatusMetricsCallable(const DescribeStaffStatusMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStaffStatusMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStaffStatusMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeTelCallInfoOutcome CccClient::DescribeTelCallInfo(const DescribeTelCallInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTelCallInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTelCallInfoResponse rsp = DescribeTelCallInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTelCallInfoOutcome(rsp);
        else
            return DescribeTelCallInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTelCallInfoOutcome(outcome.GetError());
    }
}

void CccClient::DescribeTelCallInfoAsync(const DescribeTelCallInfoRequest& request, const DescribeTelCallInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTelCallInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeTelCallInfoOutcomeCallable CccClient::DescribeTelCallInfoCallable(const DescribeTelCallInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTelCallInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTelCallInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeTelCdrOutcome CccClient::DescribeTelCdr(const DescribeTelCdrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTelCdr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTelCdrResponse rsp = DescribeTelCdrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTelCdrOutcome(rsp);
        else
            return DescribeTelCdrOutcome(o.GetError());
    }
    else
    {
        return DescribeTelCdrOutcome(outcome.GetError());
    }
}

void CccClient::DescribeTelCdrAsync(const DescribeTelCdrRequest& request, const DescribeTelCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTelCdr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeTelCdrOutcomeCallable CccClient::DescribeTelCdrCallable(const DescribeTelCdrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTelCdrOutcome()>>(
        [this, request]()
        {
            return this->DescribeTelCdr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeTelRecordAsrOutcome CccClient::DescribeTelRecordAsr(const DescribeTelRecordAsrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTelRecordAsr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTelRecordAsrResponse rsp = DescribeTelRecordAsrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTelRecordAsrOutcome(rsp);
        else
            return DescribeTelRecordAsrOutcome(o.GetError());
    }
    else
    {
        return DescribeTelRecordAsrOutcome(outcome.GetError());
    }
}

void CccClient::DescribeTelRecordAsrAsync(const DescribeTelRecordAsrRequest& request, const DescribeTelRecordAsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTelRecordAsr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeTelRecordAsrOutcomeCallable CccClient::DescribeTelRecordAsrCallable(const DescribeTelRecordAsrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTelRecordAsrOutcome()>>(
        [this, request]()
        {
            return this->DescribeTelRecordAsr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeTelSessionOutcome CccClient::DescribeTelSession(const DescribeTelSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTelSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTelSessionResponse rsp = DescribeTelSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTelSessionOutcome(rsp);
        else
            return DescribeTelSessionOutcome(o.GetError());
    }
    else
    {
        return DescribeTelSessionOutcome(outcome.GetError());
    }
}

void CccClient::DescribeTelSessionAsync(const DescribeTelSessionRequest& request, const DescribeTelSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTelSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeTelSessionOutcomeCallable CccClient::DescribeTelSessionCallable(const DescribeTelSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTelSessionOutcome()>>(
        [this, request]()
        {
            return this->DescribeTelSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DisableCCCPhoneNumberOutcome CccClient::DisableCCCPhoneNumber(const DisableCCCPhoneNumberRequest &request)
{
    auto outcome = MakeRequest(request, "DisableCCCPhoneNumber");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableCCCPhoneNumberResponse rsp = DisableCCCPhoneNumberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableCCCPhoneNumberOutcome(rsp);
        else
            return DisableCCCPhoneNumberOutcome(o.GetError());
    }
    else
    {
        return DisableCCCPhoneNumberOutcome(outcome.GetError());
    }
}

void CccClient::DisableCCCPhoneNumberAsync(const DisableCCCPhoneNumberRequest& request, const DisableCCCPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableCCCPhoneNumber(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DisableCCCPhoneNumberOutcomeCallable CccClient::DisableCCCPhoneNumberCallable(const DisableCCCPhoneNumberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableCCCPhoneNumberOutcome()>>(
        [this, request]()
        {
            return this->DisableCCCPhoneNumber(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::ForceMemberOfflineOutcome CccClient::ForceMemberOffline(const ForceMemberOfflineRequest &request)
{
    auto outcome = MakeRequest(request, "ForceMemberOffline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForceMemberOfflineResponse rsp = ForceMemberOfflineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForceMemberOfflineOutcome(rsp);
        else
            return ForceMemberOfflineOutcome(o.GetError());
    }
    else
    {
        return ForceMemberOfflineOutcome(outcome.GetError());
    }
}

void CccClient::ForceMemberOfflineAsync(const ForceMemberOfflineRequest& request, const ForceMemberOfflineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForceMemberOffline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::ForceMemberOfflineOutcomeCallable CccClient::ForceMemberOfflineCallable(const ForceMemberOfflineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForceMemberOfflineOutcome()>>(
        [this, request]()
        {
            return this->ForceMemberOffline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::HangUpCallOutcome CccClient::HangUpCall(const HangUpCallRequest &request)
{
    auto outcome = MakeRequest(request, "HangUpCall");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HangUpCallResponse rsp = HangUpCallResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HangUpCallOutcome(rsp);
        else
            return HangUpCallOutcome(o.GetError());
    }
    else
    {
        return HangUpCallOutcome(outcome.GetError());
    }
}

void CccClient::HangUpCallAsync(const HangUpCallRequest& request, const HangUpCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->HangUpCall(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::HangUpCallOutcomeCallable CccClient::HangUpCallCallable(const HangUpCallRequest &request)
{
    auto task = std::make_shared<std::packaged_task<HangUpCallOutcome()>>(
        [this, request]()
        {
            return this->HangUpCall(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::ModifyCompanyApplyOutcome CccClient::ModifyCompanyApply(const ModifyCompanyApplyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCompanyApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCompanyApplyResponse rsp = ModifyCompanyApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCompanyApplyOutcome(rsp);
        else
            return ModifyCompanyApplyOutcome(o.GetError());
    }
    else
    {
        return ModifyCompanyApplyOutcome(outcome.GetError());
    }
}

void CccClient::ModifyCompanyApplyAsync(const ModifyCompanyApplyRequest& request, const ModifyCompanyApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCompanyApply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::ModifyCompanyApplyOutcomeCallable CccClient::ModifyCompanyApplyCallable(const ModifyCompanyApplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCompanyApplyOutcome()>>(
        [this, request]()
        {
            return this->ModifyCompanyApply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::ModifyExtensionOutcome CccClient::ModifyExtension(const ModifyExtensionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyExtension");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyExtensionResponse rsp = ModifyExtensionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyExtensionOutcome(rsp);
        else
            return ModifyExtensionOutcome(o.GetError());
    }
    else
    {
        return ModifyExtensionOutcome(outcome.GetError());
    }
}

void CccClient::ModifyExtensionAsync(const ModifyExtensionRequest& request, const ModifyExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyExtension(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::ModifyExtensionOutcomeCallable CccClient::ModifyExtensionCallable(const ModifyExtensionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyExtensionOutcome()>>(
        [this, request]()
        {
            return this->ModifyExtension(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::ModifyOwnNumberApplyOutcome CccClient::ModifyOwnNumberApply(const ModifyOwnNumberApplyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOwnNumberApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOwnNumberApplyResponse rsp = ModifyOwnNumberApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOwnNumberApplyOutcome(rsp);
        else
            return ModifyOwnNumberApplyOutcome(o.GetError());
    }
    else
    {
        return ModifyOwnNumberApplyOutcome(outcome.GetError());
    }
}

void CccClient::ModifyOwnNumberApplyAsync(const ModifyOwnNumberApplyRequest& request, const ModifyOwnNumberApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyOwnNumberApply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::ModifyOwnNumberApplyOutcomeCallable CccClient::ModifyOwnNumberApplyCallable(const ModifyOwnNumberApplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyOwnNumberApplyOutcome()>>(
        [this, request]()
        {
            return this->ModifyOwnNumberApply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::ModifyStaffOutcome CccClient::ModifyStaff(const ModifyStaffRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStaff");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStaffResponse rsp = ModifyStaffResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStaffOutcome(rsp);
        else
            return ModifyStaffOutcome(o.GetError());
    }
    else
    {
        return ModifyStaffOutcome(outcome.GetError());
    }
}

void CccClient::ModifyStaffAsync(const ModifyStaffRequest& request, const ModifyStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStaff(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::ModifyStaffOutcomeCallable CccClient::ModifyStaffCallable(const ModifyStaffRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStaffOutcome()>>(
        [this, request]()
        {
            return this->ModifyStaff(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::ModifyStaffPasswordOutcome CccClient::ModifyStaffPassword(const ModifyStaffPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStaffPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStaffPasswordResponse rsp = ModifyStaffPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStaffPasswordOutcome(rsp);
        else
            return ModifyStaffPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyStaffPasswordOutcome(outcome.GetError());
    }
}

void CccClient::ModifyStaffPasswordAsync(const ModifyStaffPasswordRequest& request, const ModifyStaffPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStaffPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::ModifyStaffPasswordOutcomeCallable CccClient::ModifyStaffPasswordCallable(const ModifyStaffPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStaffPasswordOutcome()>>(
        [this, request]()
        {
            return this->ModifyStaffPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::PausePredictiveDialingCampaignOutcome CccClient::PausePredictiveDialingCampaign(const PausePredictiveDialingCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "PausePredictiveDialingCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PausePredictiveDialingCampaignResponse rsp = PausePredictiveDialingCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PausePredictiveDialingCampaignOutcome(rsp);
        else
            return PausePredictiveDialingCampaignOutcome(o.GetError());
    }
    else
    {
        return PausePredictiveDialingCampaignOutcome(outcome.GetError());
    }
}

void CccClient::PausePredictiveDialingCampaignAsync(const PausePredictiveDialingCampaignRequest& request, const PausePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PausePredictiveDialingCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::PausePredictiveDialingCampaignOutcomeCallable CccClient::PausePredictiveDialingCampaignCallable(const PausePredictiveDialingCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PausePredictiveDialingCampaignOutcome()>>(
        [this, request]()
        {
            return this->PausePredictiveDialingCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::ResetExtensionPasswordOutcome CccClient::ResetExtensionPassword(const ResetExtensionPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetExtensionPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetExtensionPasswordResponse rsp = ResetExtensionPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetExtensionPasswordOutcome(rsp);
        else
            return ResetExtensionPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetExtensionPasswordOutcome(outcome.GetError());
    }
}

void CccClient::ResetExtensionPasswordAsync(const ResetExtensionPasswordRequest& request, const ResetExtensionPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetExtensionPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::ResetExtensionPasswordOutcomeCallable CccClient::ResetExtensionPasswordCallable(const ResetExtensionPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetExtensionPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetExtensionPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::RestoreMemberOnlineOutcome CccClient::RestoreMemberOnline(const RestoreMemberOnlineRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreMemberOnline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreMemberOnlineResponse rsp = RestoreMemberOnlineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreMemberOnlineOutcome(rsp);
        else
            return RestoreMemberOnlineOutcome(o.GetError());
    }
    else
    {
        return RestoreMemberOnlineOutcome(outcome.GetError());
    }
}

void CccClient::RestoreMemberOnlineAsync(const RestoreMemberOnlineRequest& request, const RestoreMemberOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestoreMemberOnline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::RestoreMemberOnlineOutcomeCallable CccClient::RestoreMemberOnlineCallable(const RestoreMemberOnlineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestoreMemberOnlineOutcome()>>(
        [this, request]()
        {
            return this->RestoreMemberOnline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::ResumePredictiveDialingCampaignOutcome CccClient::ResumePredictiveDialingCampaign(const ResumePredictiveDialingCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "ResumePredictiveDialingCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumePredictiveDialingCampaignResponse rsp = ResumePredictiveDialingCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumePredictiveDialingCampaignOutcome(rsp);
        else
            return ResumePredictiveDialingCampaignOutcome(o.GetError());
    }
    else
    {
        return ResumePredictiveDialingCampaignOutcome(outcome.GetError());
    }
}

void CccClient::ResumePredictiveDialingCampaignAsync(const ResumePredictiveDialingCampaignRequest& request, const ResumePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumePredictiveDialingCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::ResumePredictiveDialingCampaignOutcomeCallable CccClient::ResumePredictiveDialingCampaignCallable(const ResumePredictiveDialingCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumePredictiveDialingCampaignOutcome()>>(
        [this, request]()
        {
            return this->ResumePredictiveDialingCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::StopAutoCalloutTaskOutcome CccClient::StopAutoCalloutTask(const StopAutoCalloutTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopAutoCalloutTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAutoCalloutTaskResponse rsp = StopAutoCalloutTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAutoCalloutTaskOutcome(rsp);
        else
            return StopAutoCalloutTaskOutcome(o.GetError());
    }
    else
    {
        return StopAutoCalloutTaskOutcome(outcome.GetError());
    }
}

void CccClient::StopAutoCalloutTaskAsync(const StopAutoCalloutTaskRequest& request, const StopAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopAutoCalloutTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::StopAutoCalloutTaskOutcomeCallable CccClient::StopAutoCalloutTaskCallable(const StopAutoCalloutTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopAutoCalloutTaskOutcome()>>(
        [this, request]()
        {
            return this->StopAutoCalloutTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::TransferToManualOutcome CccClient::TransferToManual(const TransferToManualRequest &request)
{
    auto outcome = MakeRequest(request, "TransferToManual");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransferToManualResponse rsp = TransferToManualResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransferToManualOutcome(rsp);
        else
            return TransferToManualOutcome(o.GetError());
    }
    else
    {
        return TransferToManualOutcome(outcome.GetError());
    }
}

void CccClient::TransferToManualAsync(const TransferToManualRequest& request, const TransferToManualAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TransferToManual(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::TransferToManualOutcomeCallable CccClient::TransferToManualCallable(const TransferToManualRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TransferToManualOutcome()>>(
        [this, request]()
        {
            return this->TransferToManual(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::UnbindNumberCallOutSkillGroupOutcome CccClient::UnbindNumberCallOutSkillGroup(const UnbindNumberCallOutSkillGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindNumberCallOutSkillGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindNumberCallOutSkillGroupResponse rsp = UnbindNumberCallOutSkillGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindNumberCallOutSkillGroupOutcome(rsp);
        else
            return UnbindNumberCallOutSkillGroupOutcome(o.GetError());
    }
    else
    {
        return UnbindNumberCallOutSkillGroupOutcome(outcome.GetError());
    }
}

void CccClient::UnbindNumberCallOutSkillGroupAsync(const UnbindNumberCallOutSkillGroupRequest& request, const UnbindNumberCallOutSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindNumberCallOutSkillGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::UnbindNumberCallOutSkillGroupOutcomeCallable CccClient::UnbindNumberCallOutSkillGroupCallable(const UnbindNumberCallOutSkillGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindNumberCallOutSkillGroupOutcome()>>(
        [this, request]()
        {
            return this->UnbindNumberCallOutSkillGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::UnbindStaffSkillGroupListOutcome CccClient::UnbindStaffSkillGroupList(const UnbindStaffSkillGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindStaffSkillGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindStaffSkillGroupListResponse rsp = UnbindStaffSkillGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindStaffSkillGroupListOutcome(rsp);
        else
            return UnbindStaffSkillGroupListOutcome(o.GetError());
    }
    else
    {
        return UnbindStaffSkillGroupListOutcome(outcome.GetError());
    }
}

void CccClient::UnbindStaffSkillGroupListAsync(const UnbindStaffSkillGroupListRequest& request, const UnbindStaffSkillGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindStaffSkillGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::UnbindStaffSkillGroupListOutcomeCallable CccClient::UnbindStaffSkillGroupListCallable(const UnbindStaffSkillGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindStaffSkillGroupListOutcome()>>(
        [this, request]()
        {
            return this->UnbindStaffSkillGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::UpdateCCCSkillGroupOutcome CccClient::UpdateCCCSkillGroup(const UpdateCCCSkillGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCCCSkillGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCCCSkillGroupResponse rsp = UpdateCCCSkillGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCCCSkillGroupOutcome(rsp);
        else
            return UpdateCCCSkillGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateCCCSkillGroupOutcome(outcome.GetError());
    }
}

void CccClient::UpdateCCCSkillGroupAsync(const UpdateCCCSkillGroupRequest& request, const UpdateCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCCCSkillGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::UpdateCCCSkillGroupOutcomeCallable CccClient::UpdateCCCSkillGroupCallable(const UpdateCCCSkillGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCCCSkillGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateCCCSkillGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::UpdatePredictiveDialingCampaignOutcome CccClient::UpdatePredictiveDialingCampaign(const UpdatePredictiveDialingCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePredictiveDialingCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePredictiveDialingCampaignResponse rsp = UpdatePredictiveDialingCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePredictiveDialingCampaignOutcome(rsp);
        else
            return UpdatePredictiveDialingCampaignOutcome(o.GetError());
    }
    else
    {
        return UpdatePredictiveDialingCampaignOutcome(outcome.GetError());
    }
}

void CccClient::UpdatePredictiveDialingCampaignAsync(const UpdatePredictiveDialingCampaignRequest& request, const UpdatePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePredictiveDialingCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::UpdatePredictiveDialingCampaignOutcomeCallable CccClient::UpdatePredictiveDialingCampaignCallable(const UpdatePredictiveDialingCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePredictiveDialingCampaignOutcome()>>(
        [this, request]()
        {
            return this->UpdatePredictiveDialingCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::UploadIvrAudioOutcome CccClient::UploadIvrAudio(const UploadIvrAudioRequest &request)
{
    auto outcome = MakeRequest(request, "UploadIvrAudio");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadIvrAudioResponse rsp = UploadIvrAudioResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadIvrAudioOutcome(rsp);
        else
            return UploadIvrAudioOutcome(o.GetError());
    }
    else
    {
        return UploadIvrAudioOutcome(outcome.GetError());
    }
}

void CccClient::UploadIvrAudioAsync(const UploadIvrAudioRequest& request, const UploadIvrAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadIvrAudio(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::UploadIvrAudioOutcomeCallable CccClient::UploadIvrAudioCallable(const UploadIvrAudioRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadIvrAudioOutcome()>>(
        [this, request]()
        {
            return this->UploadIvrAudio(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


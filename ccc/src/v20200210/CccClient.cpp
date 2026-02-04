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
    using Req = const AbortAgentCruiseDialingCampaignRequest&;
    using Resp = AbortAgentCruiseDialingCampaignResponse;

    DoRequestAsync<Req, Resp>(
        "AbortAgentCruiseDialingCampaign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::AbortAgentCruiseDialingCampaignOutcomeCallable CccClient::AbortAgentCruiseDialingCampaignCallable(const AbortAgentCruiseDialingCampaignRequest &request)
{
    const auto prom = std::make_shared<std::promise<AbortAgentCruiseDialingCampaignOutcome>>();
    AbortAgentCruiseDialingCampaignAsync(
    request,
    [prom](
        const CccClient*,
        const AbortAgentCruiseDialingCampaignRequest&,
        AbortAgentCruiseDialingCampaignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AbortPredictiveDialingCampaignRequest&;
    using Resp = AbortPredictiveDialingCampaignResponse;

    DoRequestAsync<Req, Resp>(
        "AbortPredictiveDialingCampaign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::AbortPredictiveDialingCampaignOutcomeCallable CccClient::AbortPredictiveDialingCampaignCallable(const AbortPredictiveDialingCampaignRequest &request)
{
    const auto prom = std::make_shared<std::promise<AbortPredictiveDialingCampaignOutcome>>();
    AbortPredictiveDialingCampaignAsync(
    request,
    [prom](
        const CccClient*,
        const AbortPredictiveDialingCampaignRequest&,
        AbortPredictiveDialingCampaignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindNumberCallInInterfaceRequest&;
    using Resp = BindNumberCallInInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "BindNumberCallInInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::BindNumberCallInInterfaceOutcomeCallable CccClient::BindNumberCallInInterfaceCallable(const BindNumberCallInInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindNumberCallInInterfaceOutcome>>();
    BindNumberCallInInterfaceAsync(
    request,
    [prom](
        const CccClient*,
        const BindNumberCallInInterfaceRequest&,
        BindNumberCallInInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindNumberCallOutSkillGroupRequest&;
    using Resp = BindNumberCallOutSkillGroupResponse;

    DoRequestAsync<Req, Resp>(
        "BindNumberCallOutSkillGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::BindNumberCallOutSkillGroupOutcomeCallable CccClient::BindNumberCallOutSkillGroupCallable(const BindNumberCallOutSkillGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindNumberCallOutSkillGroupOutcome>>();
    BindNumberCallOutSkillGroupAsync(
    request,
    [prom](
        const CccClient*,
        const BindNumberCallOutSkillGroupRequest&,
        BindNumberCallOutSkillGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindStaffSkillGroupListRequest&;
    using Resp = BindStaffSkillGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "BindStaffSkillGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::BindStaffSkillGroupListOutcomeCallable CccClient::BindStaffSkillGroupListCallable(const BindStaffSkillGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindStaffSkillGroupListOutcome>>();
    BindStaffSkillGroupListAsync(
    request,
    [prom](
        const CccClient*,
        const BindStaffSkillGroupListRequest&,
        BindStaffSkillGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CccClient::ControlAIConversationOutcome CccClient::ControlAIConversation(const ControlAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "ControlAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlAIConversationResponse rsp = ControlAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlAIConversationOutcome(rsp);
        else
            return ControlAIConversationOutcome(o.GetError());
    }
    else
    {
        return ControlAIConversationOutcome(outcome.GetError());
    }
}

void CccClient::ControlAIConversationAsync(const ControlAIConversationRequest& request, const ControlAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlAIConversationRequest&;
    using Resp = ControlAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "ControlAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::ControlAIConversationOutcomeCallable CccClient::ControlAIConversationCallable(const ControlAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlAIConversationOutcome>>();
    ControlAIConversationAsync(
    request,
    [prom](
        const CccClient*,
        const ControlAIConversationRequest&,
        ControlAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAIAgentCallRequest&;
    using Resp = CreateAIAgentCallResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAIAgentCall", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateAIAgentCallOutcomeCallable CccClient::CreateAIAgentCallCallable(const CreateAIAgentCallRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAIAgentCallOutcome>>();
    CreateAIAgentCallAsync(
    request,
    [prom](
        const CccClient*,
        const CreateAIAgentCallRequest&,
        CreateAIAgentCallOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAICallRequest&;
    using Resp = CreateAICallResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAICall", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateAICallOutcomeCallable CccClient::CreateAICallCallable(const CreateAICallRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAICallOutcome>>();
    CreateAICallAsync(
    request,
    [prom](
        const CccClient*,
        const CreateAICallRequest&,
        CreateAICallOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAdminURLRequest&;
    using Resp = CreateAdminURLResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAdminURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateAdminURLOutcomeCallable CccClient::CreateAdminURLCallable(const CreateAdminURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAdminURLOutcome>>();
    CreateAdminURLAsync(
    request,
    [prom](
        const CccClient*,
        const CreateAdminURLRequest&,
        CreateAdminURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAgentCruiseDialingCampaignRequest&;
    using Resp = CreateAgentCruiseDialingCampaignResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgentCruiseDialingCampaign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateAgentCruiseDialingCampaignOutcomeCallable CccClient::CreateAgentCruiseDialingCampaignCallable(const CreateAgentCruiseDialingCampaignRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentCruiseDialingCampaignOutcome>>();
    CreateAgentCruiseDialingCampaignAsync(
    request,
    [prom](
        const CccClient*,
        const CreateAgentCruiseDialingCampaignRequest&,
        CreateAgentCruiseDialingCampaignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAutoCalloutTaskRequest&;
    using Resp = CreateAutoCalloutTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAutoCalloutTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateAutoCalloutTaskOutcomeCallable CccClient::CreateAutoCalloutTaskCallable(const CreateAutoCalloutTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAutoCalloutTaskOutcome>>();
    CreateAutoCalloutTaskAsync(
    request,
    [prom](
        const CccClient*,
        const CreateAutoCalloutTaskRequest&,
        CreateAutoCalloutTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCCCSkillGroupRequest&;
    using Resp = CreateCCCSkillGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCCCSkillGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateCCCSkillGroupOutcomeCallable CccClient::CreateCCCSkillGroupCallable(const CreateCCCSkillGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCCCSkillGroupOutcome>>();
    CreateCCCSkillGroupAsync(
    request,
    [prom](
        const CccClient*,
        const CreateCCCSkillGroupRequest&,
        CreateCCCSkillGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCallOutSessionRequest&;
    using Resp = CreateCallOutSessionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCallOutSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateCallOutSessionOutcomeCallable CccClient::CreateCallOutSessionCallable(const CreateCallOutSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCallOutSessionOutcome>>();
    CreateCallOutSessionAsync(
    request,
    [prom](
        const CccClient*,
        const CreateCallOutSessionRequest&,
        CreateCallOutSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCarrierPrivilegeNumberApplicantRequest&;
    using Resp = CreateCarrierPrivilegeNumberApplicantResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCarrierPrivilegeNumberApplicant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateCarrierPrivilegeNumberApplicantOutcomeCallable CccClient::CreateCarrierPrivilegeNumberApplicantCallable(const CreateCarrierPrivilegeNumberApplicantRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCarrierPrivilegeNumberApplicantOutcome>>();
    CreateCarrierPrivilegeNumberApplicantAsync(
    request,
    [prom](
        const CccClient*,
        const CreateCarrierPrivilegeNumberApplicantRequest&,
        CreateCarrierPrivilegeNumberApplicantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCompanyApplyRequest&;
    using Resp = CreateCompanyApplyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCompanyApply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateCompanyApplyOutcomeCallable CccClient::CreateCompanyApplyCallable(const CreateCompanyApplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCompanyApplyOutcome>>();
    CreateCompanyApplyAsync(
    request,
    [prom](
        const CccClient*,
        const CreateCompanyApplyRequest&,
        CreateCompanyApplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateExtensionRequest&;
    using Resp = CreateExtensionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExtension", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateExtensionOutcomeCallable CccClient::CreateExtensionCallable(const CreateExtensionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExtensionOutcome>>();
    CreateExtensionAsync(
    request,
    [prom](
        const CccClient*,
        const CreateExtensionRequest&,
        CreateExtensionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateIVRSessionRequest&;
    using Resp = CreateIVRSessionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIVRSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateIVRSessionOutcomeCallable CccClient::CreateIVRSessionCallable(const CreateIVRSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIVRSessionOutcome>>();
    CreateIVRSessionAsync(
    request,
    [prom](
        const CccClient*,
        const CreateIVRSessionRequest&,
        CreateIVRSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateOwnNumberApplyRequest&;
    using Resp = CreateOwnNumberApplyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOwnNumberApply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateOwnNumberApplyOutcomeCallable CccClient::CreateOwnNumberApplyCallable(const CreateOwnNumberApplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOwnNumberApplyOutcome>>();
    CreateOwnNumberApplyAsync(
    request,
    [prom](
        const CccClient*,
        const CreateOwnNumberApplyRequest&,
        CreateOwnNumberApplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePredictiveDialingCampaignRequest&;
    using Resp = CreatePredictiveDialingCampaignResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePredictiveDialingCampaign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreatePredictiveDialingCampaignOutcomeCallable CccClient::CreatePredictiveDialingCampaignCallable(const CreatePredictiveDialingCampaignRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePredictiveDialingCampaignOutcome>>();
    CreatePredictiveDialingCampaignAsync(
    request,
    [prom](
        const CccClient*,
        const CreatePredictiveDialingCampaignRequest&,
        CreatePredictiveDialingCampaignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSDKLoginTokenRequest&;
    using Resp = CreateSDKLoginTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSDKLoginToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateSDKLoginTokenOutcomeCallable CccClient::CreateSDKLoginTokenCallable(const CreateSDKLoginTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSDKLoginTokenOutcome>>();
    CreateSDKLoginTokenAsync(
    request,
    [prom](
        const CccClient*,
        const CreateSDKLoginTokenRequest&,
        CreateSDKLoginTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateStaffRequest&;
    using Resp = CreateStaffResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStaff", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateStaffOutcomeCallable CccClient::CreateStaffCallable(const CreateStaffRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStaffOutcome>>();
    CreateStaffAsync(
    request,
    [prom](
        const CccClient*,
        const CreateStaffRequest&,
        CreateStaffOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateUserSigRequest&;
    using Resp = CreateUserSigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserSig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::CreateUserSigOutcomeCallable CccClient::CreateUserSigCallable(const CreateUserSigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserSigOutcome>>();
    CreateUserSigAsync(
    request,
    [prom](
        const CccClient*,
        const CreateUserSigRequest&,
        CreateUserSigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCCCSkillGroupRequest&;
    using Resp = DeleteCCCSkillGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCCCSkillGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DeleteCCCSkillGroupOutcomeCallable CccClient::DeleteCCCSkillGroupCallable(const DeleteCCCSkillGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCCCSkillGroupOutcome>>();
    DeleteCCCSkillGroupAsync(
    request,
    [prom](
        const CccClient*,
        const DeleteCCCSkillGroupRequest&,
        DeleteCCCSkillGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteExtensionRequest&;
    using Resp = DeleteExtensionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteExtension", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DeleteExtensionOutcomeCallable CccClient::DeleteExtensionCallable(const DeleteExtensionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteExtensionOutcome>>();
    DeleteExtensionAsync(
    request,
    [prom](
        const CccClient*,
        const DeleteExtensionRequest&,
        DeleteExtensionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeletePredictiveDialingCampaignRequest&;
    using Resp = DeletePredictiveDialingCampaignResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePredictiveDialingCampaign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DeletePredictiveDialingCampaignOutcomeCallable CccClient::DeletePredictiveDialingCampaignCallable(const DeletePredictiveDialingCampaignRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePredictiveDialingCampaignOutcome>>();
    DeletePredictiveDialingCampaignAsync(
    request,
    [prom](
        const CccClient*,
        const DeletePredictiveDialingCampaignRequest&,
        DeletePredictiveDialingCampaignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteStaffRequest&;
    using Resp = DeleteStaffResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStaff", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DeleteStaffOutcomeCallable CccClient::DeleteStaffCallable(const DeleteStaffRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStaffOutcome>>();
    DeleteStaffAsync(
    request,
    [prom](
        const CccClient*,
        const DeleteStaffRequest&,
        DeleteStaffOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CccClient::DescribeAIAgentInfoListOutcome CccClient::DescribeAIAgentInfoList(const DescribeAIAgentInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIAgentInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIAgentInfoListResponse rsp = DescribeAIAgentInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIAgentInfoListOutcome(rsp);
        else
            return DescribeAIAgentInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeAIAgentInfoListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeAIAgentInfoListAsync(const DescribeAIAgentInfoListRequest& request, const DescribeAIAgentInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIAgentInfoListRequest&;
    using Resp = DescribeAIAgentInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIAgentInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeAIAgentInfoListOutcomeCallable CccClient::DescribeAIAgentInfoListCallable(const DescribeAIAgentInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIAgentInfoListOutcome>>();
    DescribeAIAgentInfoListAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeAIAgentInfoListRequest&,
        DescribeAIAgentInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CccClient::DescribeAIAnalysisResultOutcome CccClient::DescribeAIAnalysisResult(const DescribeAIAnalysisResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIAnalysisResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIAnalysisResultResponse rsp = DescribeAIAnalysisResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIAnalysisResultOutcome(rsp);
        else
            return DescribeAIAnalysisResultOutcome(o.GetError());
    }
    else
    {
        return DescribeAIAnalysisResultOutcome(outcome.GetError());
    }
}

void CccClient::DescribeAIAnalysisResultAsync(const DescribeAIAnalysisResultRequest& request, const DescribeAIAnalysisResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIAnalysisResultRequest&;
    using Resp = DescribeAIAnalysisResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIAnalysisResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeAIAnalysisResultOutcomeCallable CccClient::DescribeAIAnalysisResultCallable(const DescribeAIAnalysisResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIAnalysisResultOutcome>>();
    DescribeAIAnalysisResultAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeAIAnalysisResultRequest&,
        DescribeAIAnalysisResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAICallExtractResultRequest&;
    using Resp = DescribeAICallExtractResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAICallExtractResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeAICallExtractResultOutcomeCallable CccClient::DescribeAICallExtractResultCallable(const DescribeAICallExtractResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAICallExtractResultOutcome>>();
    DescribeAICallExtractResultAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeAICallExtractResultRequest&,
        DescribeAICallExtractResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAILatencyRequest&;
    using Resp = DescribeAILatencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAILatency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeAILatencyOutcomeCallable CccClient::DescribeAILatencyCallable(const DescribeAILatencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAILatencyOutcome>>();
    DescribeAILatencyAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeAILatencyRequest&,
        DescribeAILatencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeActiveCarrierPrivilegeNumberRequest&;
    using Resp = DescribeActiveCarrierPrivilegeNumberResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeActiveCarrierPrivilegeNumber", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeActiveCarrierPrivilegeNumberOutcomeCallable CccClient::DescribeActiveCarrierPrivilegeNumberCallable(const DescribeActiveCarrierPrivilegeNumberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeActiveCarrierPrivilegeNumberOutcome>>();
    DescribeActiveCarrierPrivilegeNumberAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeActiveCarrierPrivilegeNumberRequest&,
        DescribeActiveCarrierPrivilegeNumberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAgentCruiseDialingCampaignRequest&;
    using Resp = DescribeAgentCruiseDialingCampaignResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentCruiseDialingCampaign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeAgentCruiseDialingCampaignOutcomeCallable CccClient::DescribeAgentCruiseDialingCampaignCallable(const DescribeAgentCruiseDialingCampaignRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentCruiseDialingCampaignOutcome>>();
    DescribeAgentCruiseDialingCampaignAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeAgentCruiseDialingCampaignRequest&,
        DescribeAgentCruiseDialingCampaignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutoCalloutTaskRequest&;
    using Resp = DescribeAutoCalloutTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoCalloutTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeAutoCalloutTaskOutcomeCallable CccClient::DescribeAutoCalloutTaskCallable(const DescribeAutoCalloutTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoCalloutTaskOutcome>>();
    DescribeAutoCalloutTaskAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeAutoCalloutTaskRequest&,
        DescribeAutoCalloutTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutoCalloutTasksRequest&;
    using Resp = DescribeAutoCalloutTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoCalloutTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeAutoCalloutTasksOutcomeCallable CccClient::DescribeAutoCalloutTasksCallable(const DescribeAutoCalloutTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoCalloutTasksOutcome>>();
    DescribeAutoCalloutTasksAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeAutoCalloutTasksRequest&,
        DescribeAutoCalloutTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCCCBuyInfoListRequest&;
    using Resp = DescribeCCCBuyInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCCBuyInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeCCCBuyInfoListOutcomeCallable CccClient::DescribeCCCBuyInfoListCallable(const DescribeCCCBuyInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCCBuyInfoListOutcome>>();
    DescribeCCCBuyInfoListAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeCCCBuyInfoListRequest&,
        DescribeCCCBuyInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCallInMetricsRequest&;
    using Resp = DescribeCallInMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCallInMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeCallInMetricsOutcomeCallable CccClient::DescribeCallInMetricsCallable(const DescribeCallInMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCallInMetricsOutcome>>();
    DescribeCallInMetricsAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeCallInMetricsRequest&,
        DescribeCallInMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCarrierPrivilegeNumberApplicantsRequest&;
    using Resp = DescribeCarrierPrivilegeNumberApplicantsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCarrierPrivilegeNumberApplicants", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeCarrierPrivilegeNumberApplicantsOutcomeCallable CccClient::DescribeCarrierPrivilegeNumberApplicantsCallable(const DescribeCarrierPrivilegeNumberApplicantsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCarrierPrivilegeNumberApplicantsOutcome>>();
    DescribeCarrierPrivilegeNumberApplicantsAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeCarrierPrivilegeNumberApplicantsRequest&,
        DescribeCarrierPrivilegeNumberApplicantsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeChatMessagesRequest&;
    using Resp = DescribeChatMessagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChatMessages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeChatMessagesOutcomeCallable CccClient::DescribeChatMessagesCallable(const DescribeChatMessagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChatMessagesOutcome>>();
    DescribeChatMessagesAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeChatMessagesRequest&,
        DescribeChatMessagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCompanyListRequest&;
    using Resp = DescribeCompanyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCompanyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeCompanyListOutcomeCallable CccClient::DescribeCompanyListCallable(const DescribeCompanyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCompanyListOutcome>>();
    DescribeCompanyListAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeCompanyListRequest&,
        DescribeCompanyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeExtensionRequest&;
    using Resp = DescribeExtensionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtension", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeExtensionOutcomeCallable CccClient::DescribeExtensionCallable(const DescribeExtensionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtensionOutcome>>();
    DescribeExtensionAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeExtensionRequest&,
        DescribeExtensionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeExtensionsRequest&;
    using Resp = DescribeExtensionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtensions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeExtensionsOutcomeCallable CccClient::DescribeExtensionsCallable(const DescribeExtensionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtensionsOutcome>>();
    DescribeExtensionsAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeExtensionsRequest&,
        DescribeExtensionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CccClient::DescribeFlashSMSListOutcome CccClient::DescribeFlashSMSList(const DescribeFlashSMSListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlashSMSList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlashSMSListResponse rsp = DescribeFlashSMSListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlashSMSListOutcome(rsp);
        else
            return DescribeFlashSMSListOutcome(o.GetError());
    }
    else
    {
        return DescribeFlashSMSListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeFlashSMSListAsync(const DescribeFlashSMSListRequest& request, const DescribeFlashSMSListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlashSMSListRequest&;
    using Resp = DescribeFlashSMSListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlashSMSList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeFlashSMSListOutcomeCallable CccClient::DescribeFlashSMSListCallable(const DescribeFlashSMSListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlashSMSListOutcome>>();
    DescribeFlashSMSListAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeFlashSMSListRequest&,
        DescribeFlashSMSListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeIMCdrListRequest&;
    using Resp = DescribeIMCdrListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIMCdrList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeIMCdrListOutcomeCallable CccClient::DescribeIMCdrListCallable(const DescribeIMCdrListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIMCdrListOutcome>>();
    DescribeIMCdrListAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeIMCdrListRequest&,
        DescribeIMCdrListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeIMCdrsRequest&;
    using Resp = DescribeIMCdrsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIMCdrs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeIMCdrsOutcomeCallable CccClient::DescribeIMCdrsCallable(const DescribeIMCdrsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIMCdrsOutcome>>();
    DescribeIMCdrsAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeIMCdrsRequest&,
        DescribeIMCdrsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeIvrAudioListRequest&;
    using Resp = DescribeIvrAudioListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIvrAudioList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeIvrAudioListOutcomeCallable CccClient::DescribeIvrAudioListCallable(const DescribeIvrAudioListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIvrAudioListOutcome>>();
    DescribeIvrAudioListAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeIvrAudioListRequest&,
        DescribeIvrAudioListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeNumbersRequest&;
    using Resp = DescribeNumbersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNumbers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeNumbersOutcomeCallable CccClient::DescribeNumbersCallable(const DescribeNumbersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNumbersOutcome>>();
    DescribeNumbersAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeNumbersRequest&,
        DescribeNumbersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePSTNActiveSessionListRequest&;
    using Resp = DescribePSTNActiveSessionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePSTNActiveSessionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribePSTNActiveSessionListOutcomeCallable CccClient::DescribePSTNActiveSessionListCallable(const DescribePSTNActiveSessionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePSTNActiveSessionListOutcome>>();
    DescribePSTNActiveSessionListAsync(
    request,
    [prom](
        const CccClient*,
        const DescribePSTNActiveSessionListRequest&,
        DescribePSTNActiveSessionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePredictiveDialingCampaignRequest&;
    using Resp = DescribePredictiveDialingCampaignResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePredictiveDialingCampaign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribePredictiveDialingCampaignOutcomeCallable CccClient::DescribePredictiveDialingCampaignCallable(const DescribePredictiveDialingCampaignRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePredictiveDialingCampaignOutcome>>();
    DescribePredictiveDialingCampaignAsync(
    request,
    [prom](
        const CccClient*,
        const DescribePredictiveDialingCampaignRequest&,
        DescribePredictiveDialingCampaignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePredictiveDialingCampaignsRequest&;
    using Resp = DescribePredictiveDialingCampaignsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePredictiveDialingCampaigns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribePredictiveDialingCampaignsOutcomeCallable CccClient::DescribePredictiveDialingCampaignsCallable(const DescribePredictiveDialingCampaignsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePredictiveDialingCampaignsOutcome>>();
    DescribePredictiveDialingCampaignsAsync(
    request,
    [prom](
        const CccClient*,
        const DescribePredictiveDialingCampaignsRequest&,
        DescribePredictiveDialingCampaignsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePredictiveDialingSessionsRequest&;
    using Resp = DescribePredictiveDialingSessionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePredictiveDialingSessions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribePredictiveDialingSessionsOutcomeCallable CccClient::DescribePredictiveDialingSessionsCallable(const DescribePredictiveDialingSessionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePredictiveDialingSessionsOutcome>>();
    DescribePredictiveDialingSessionsAsync(
    request,
    [prom](
        const CccClient*,
        const DescribePredictiveDialingSessionsRequest&,
        DescribePredictiveDialingSessionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProtectedTelCdrRequest&;
    using Resp = DescribeProtectedTelCdrResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProtectedTelCdr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeProtectedTelCdrOutcomeCallable CccClient::DescribeProtectedTelCdrCallable(const DescribeProtectedTelCdrRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProtectedTelCdrOutcome>>();
    DescribeProtectedTelCdrAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeProtectedTelCdrRequest&,
        DescribeProtectedTelCdrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CccClient::DescribeSessionDetailOutcome CccClient::DescribeSessionDetail(const DescribeSessionDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSessionDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSessionDetailResponse rsp = DescribeSessionDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSessionDetailOutcome(rsp);
        else
            return DescribeSessionDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeSessionDetailOutcome(outcome.GetError());
    }
}

void CccClient::DescribeSessionDetailAsync(const DescribeSessionDetailRequest& request, const DescribeSessionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSessionDetailRequest&;
    using Resp = DescribeSessionDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSessionDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeSessionDetailOutcomeCallable CccClient::DescribeSessionDetailCallable(const DescribeSessionDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSessionDetailOutcome>>();
    DescribeSessionDetailAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeSessionDetailRequest&,
        DescribeSessionDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSkillGroupInfoListRequest&;
    using Resp = DescribeSkillGroupInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSkillGroupInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeSkillGroupInfoListOutcomeCallable CccClient::DescribeSkillGroupInfoListCallable(const DescribeSkillGroupInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSkillGroupInfoListOutcome>>();
    DescribeSkillGroupInfoListAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeSkillGroupInfoListRequest&,
        DescribeSkillGroupInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStaffInfoListRequest&;
    using Resp = DescribeStaffInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStaffInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeStaffInfoListOutcomeCallable CccClient::DescribeStaffInfoListCallable(const DescribeStaffInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStaffInfoListOutcome>>();
    DescribeStaffInfoListAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeStaffInfoListRequest&,
        DescribeStaffInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CccClient::DescribeStaffStatusHistoryOutcome CccClient::DescribeStaffStatusHistory(const DescribeStaffStatusHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStaffStatusHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStaffStatusHistoryResponse rsp = DescribeStaffStatusHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStaffStatusHistoryOutcome(rsp);
        else
            return DescribeStaffStatusHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeStaffStatusHistoryOutcome(outcome.GetError());
    }
}

void CccClient::DescribeStaffStatusHistoryAsync(const DescribeStaffStatusHistoryRequest& request, const DescribeStaffStatusHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStaffStatusHistoryRequest&;
    using Resp = DescribeStaffStatusHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStaffStatusHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeStaffStatusHistoryOutcomeCallable CccClient::DescribeStaffStatusHistoryCallable(const DescribeStaffStatusHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStaffStatusHistoryOutcome>>();
    DescribeStaffStatusHistoryAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeStaffStatusHistoryRequest&,
        DescribeStaffStatusHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStaffStatusMetricsRequest&;
    using Resp = DescribeStaffStatusMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStaffStatusMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeStaffStatusMetricsOutcomeCallable CccClient::DescribeStaffStatusMetricsCallable(const DescribeStaffStatusMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStaffStatusMetricsOutcome>>();
    DescribeStaffStatusMetricsAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeStaffStatusMetricsRequest&,
        DescribeStaffStatusMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTelCallInfoRequest&;
    using Resp = DescribeTelCallInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTelCallInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeTelCallInfoOutcomeCallable CccClient::DescribeTelCallInfoCallable(const DescribeTelCallInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTelCallInfoOutcome>>();
    DescribeTelCallInfoAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeTelCallInfoRequest&,
        DescribeTelCallInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTelCdrRequest&;
    using Resp = DescribeTelCdrResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTelCdr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeTelCdrOutcomeCallable CccClient::DescribeTelCdrCallable(const DescribeTelCdrRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTelCdrOutcome>>();
    DescribeTelCdrAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeTelCdrRequest&,
        DescribeTelCdrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTelRecordAsrRequest&;
    using Resp = DescribeTelRecordAsrResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTelRecordAsr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeTelRecordAsrOutcomeCallable CccClient::DescribeTelRecordAsrCallable(const DescribeTelRecordAsrRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTelRecordAsrOutcome>>();
    DescribeTelRecordAsrAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeTelRecordAsrRequest&,
        DescribeTelRecordAsrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTelSessionRequest&;
    using Resp = DescribeTelSessionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTelSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DescribeTelSessionOutcomeCallable CccClient::DescribeTelSessionCallable(const DescribeTelSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTelSessionOutcome>>();
    DescribeTelSessionAsync(
    request,
    [prom](
        const CccClient*,
        const DescribeTelSessionRequest&,
        DescribeTelSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisableCCCPhoneNumberRequest&;
    using Resp = DisableCCCPhoneNumberResponse;

    DoRequestAsync<Req, Resp>(
        "DisableCCCPhoneNumber", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::DisableCCCPhoneNumberOutcomeCallable CccClient::DisableCCCPhoneNumberCallable(const DisableCCCPhoneNumberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableCCCPhoneNumberOutcome>>();
    DisableCCCPhoneNumberAsync(
    request,
    [prom](
        const CccClient*,
        const DisableCCCPhoneNumberRequest&,
        DisableCCCPhoneNumberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ForceMemberOfflineRequest&;
    using Resp = ForceMemberOfflineResponse;

    DoRequestAsync<Req, Resp>(
        "ForceMemberOffline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::ForceMemberOfflineOutcomeCallable CccClient::ForceMemberOfflineCallable(const ForceMemberOfflineRequest &request)
{
    const auto prom = std::make_shared<std::promise<ForceMemberOfflineOutcome>>();
    ForceMemberOfflineAsync(
    request,
    [prom](
        const CccClient*,
        const ForceMemberOfflineRequest&,
        ForceMemberOfflineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const HangUpCallRequest&;
    using Resp = HangUpCallResponse;

    DoRequestAsync<Req, Resp>(
        "HangUpCall", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::HangUpCallOutcomeCallable CccClient::HangUpCallCallable(const HangUpCallRequest &request)
{
    const auto prom = std::make_shared<std::promise<HangUpCallOutcome>>();
    HangUpCallAsync(
    request,
    [prom](
        const CccClient*,
        const HangUpCallRequest&,
        HangUpCallOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyCompanyApplyRequest&;
    using Resp = ModifyCompanyApplyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCompanyApply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::ModifyCompanyApplyOutcomeCallable CccClient::ModifyCompanyApplyCallable(const ModifyCompanyApplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCompanyApplyOutcome>>();
    ModifyCompanyApplyAsync(
    request,
    [prom](
        const CccClient*,
        const ModifyCompanyApplyRequest&,
        ModifyCompanyApplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyExtensionRequest&;
    using Resp = ModifyExtensionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyExtension", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::ModifyExtensionOutcomeCallable CccClient::ModifyExtensionCallable(const ModifyExtensionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyExtensionOutcome>>();
    ModifyExtensionAsync(
    request,
    [prom](
        const CccClient*,
        const ModifyExtensionRequest&,
        ModifyExtensionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyOwnNumberApplyRequest&;
    using Resp = ModifyOwnNumberApplyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOwnNumberApply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::ModifyOwnNumberApplyOutcomeCallable CccClient::ModifyOwnNumberApplyCallable(const ModifyOwnNumberApplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOwnNumberApplyOutcome>>();
    ModifyOwnNumberApplyAsync(
    request,
    [prom](
        const CccClient*,
        const ModifyOwnNumberApplyRequest&,
        ModifyOwnNumberApplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyStaffRequest&;
    using Resp = ModifyStaffResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStaff", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::ModifyStaffOutcomeCallable CccClient::ModifyStaffCallable(const ModifyStaffRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStaffOutcome>>();
    ModifyStaffAsync(
    request,
    [prom](
        const CccClient*,
        const ModifyStaffRequest&,
        ModifyStaffOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyStaffPasswordRequest&;
    using Resp = ModifyStaffPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStaffPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::ModifyStaffPasswordOutcomeCallable CccClient::ModifyStaffPasswordCallable(const ModifyStaffPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStaffPasswordOutcome>>();
    ModifyStaffPasswordAsync(
    request,
    [prom](
        const CccClient*,
        const ModifyStaffPasswordRequest&,
        ModifyStaffPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CccClient::PauseAutoCalloutTaskOutcome CccClient::PauseAutoCalloutTask(const PauseAutoCalloutTaskRequest &request)
{
    auto outcome = MakeRequest(request, "PauseAutoCalloutTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseAutoCalloutTaskResponse rsp = PauseAutoCalloutTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseAutoCalloutTaskOutcome(rsp);
        else
            return PauseAutoCalloutTaskOutcome(o.GetError());
    }
    else
    {
        return PauseAutoCalloutTaskOutcome(outcome.GetError());
    }
}

void CccClient::PauseAutoCalloutTaskAsync(const PauseAutoCalloutTaskRequest& request, const PauseAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseAutoCalloutTaskRequest&;
    using Resp = PauseAutoCalloutTaskResponse;

    DoRequestAsync<Req, Resp>(
        "PauseAutoCalloutTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::PauseAutoCalloutTaskOutcomeCallable CccClient::PauseAutoCalloutTaskCallable(const PauseAutoCalloutTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseAutoCalloutTaskOutcome>>();
    PauseAutoCalloutTaskAsync(
    request,
    [prom](
        const CccClient*,
        const PauseAutoCalloutTaskRequest&,
        PauseAutoCalloutTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PausePredictiveDialingCampaignRequest&;
    using Resp = PausePredictiveDialingCampaignResponse;

    DoRequestAsync<Req, Resp>(
        "PausePredictiveDialingCampaign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::PausePredictiveDialingCampaignOutcomeCallable CccClient::PausePredictiveDialingCampaignCallable(const PausePredictiveDialingCampaignRequest &request)
{
    const auto prom = std::make_shared<std::promise<PausePredictiveDialingCampaignOutcome>>();
    PausePredictiveDialingCampaignAsync(
    request,
    [prom](
        const CccClient*,
        const PausePredictiveDialingCampaignRequest&,
        PausePredictiveDialingCampaignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CccClient::PlaySoundCallOutcome CccClient::PlaySoundCall(const PlaySoundCallRequest &request)
{
    auto outcome = MakeRequest(request, "PlaySoundCall");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PlaySoundCallResponse rsp = PlaySoundCallResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PlaySoundCallOutcome(rsp);
        else
            return PlaySoundCallOutcome(o.GetError());
    }
    else
    {
        return PlaySoundCallOutcome(outcome.GetError());
    }
}

void CccClient::PlaySoundCallAsync(const PlaySoundCallRequest& request, const PlaySoundCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PlaySoundCallRequest&;
    using Resp = PlaySoundCallResponse;

    DoRequestAsync<Req, Resp>(
        "PlaySoundCall", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::PlaySoundCallOutcomeCallable CccClient::PlaySoundCallCallable(const PlaySoundCallRequest &request)
{
    const auto prom = std::make_shared<std::promise<PlaySoundCallOutcome>>();
    PlaySoundCallAsync(
    request,
    [prom](
        const CccClient*,
        const PlaySoundCallRequest&,
        PlaySoundCallOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResetExtensionPasswordRequest&;
    using Resp = ResetExtensionPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetExtensionPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::ResetExtensionPasswordOutcomeCallable CccClient::ResetExtensionPasswordCallable(const ResetExtensionPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetExtensionPasswordOutcome>>();
    ResetExtensionPasswordAsync(
    request,
    [prom](
        const CccClient*,
        const ResetExtensionPasswordRequest&,
        ResetExtensionPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RestoreMemberOnlineRequest&;
    using Resp = RestoreMemberOnlineResponse;

    DoRequestAsync<Req, Resp>(
        "RestoreMemberOnline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::RestoreMemberOnlineOutcomeCallable CccClient::RestoreMemberOnlineCallable(const RestoreMemberOnlineRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestoreMemberOnlineOutcome>>();
    RestoreMemberOnlineAsync(
    request,
    [prom](
        const CccClient*,
        const RestoreMemberOnlineRequest&,
        RestoreMemberOnlineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CccClient::ResumeAutoCalloutTaskOutcome CccClient::ResumeAutoCalloutTask(const ResumeAutoCalloutTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeAutoCalloutTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeAutoCalloutTaskResponse rsp = ResumeAutoCalloutTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeAutoCalloutTaskOutcome(rsp);
        else
            return ResumeAutoCalloutTaskOutcome(o.GetError());
    }
    else
    {
        return ResumeAutoCalloutTaskOutcome(outcome.GetError());
    }
}

void CccClient::ResumeAutoCalloutTaskAsync(const ResumeAutoCalloutTaskRequest& request, const ResumeAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeAutoCalloutTaskRequest&;
    using Resp = ResumeAutoCalloutTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeAutoCalloutTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::ResumeAutoCalloutTaskOutcomeCallable CccClient::ResumeAutoCalloutTaskCallable(const ResumeAutoCalloutTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeAutoCalloutTaskOutcome>>();
    ResumeAutoCalloutTaskAsync(
    request,
    [prom](
        const CccClient*,
        const ResumeAutoCalloutTaskRequest&,
        ResumeAutoCalloutTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResumePredictiveDialingCampaignRequest&;
    using Resp = ResumePredictiveDialingCampaignResponse;

    DoRequestAsync<Req, Resp>(
        "ResumePredictiveDialingCampaign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::ResumePredictiveDialingCampaignOutcomeCallable CccClient::ResumePredictiveDialingCampaignCallable(const ResumePredictiveDialingCampaignRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumePredictiveDialingCampaignOutcome>>();
    ResumePredictiveDialingCampaignAsync(
    request,
    [prom](
        const CccClient*,
        const ResumePredictiveDialingCampaignRequest&,
        ResumePredictiveDialingCampaignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CccClient::SetStaffStatusOutcome CccClient::SetStaffStatus(const SetStaffStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetStaffStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetStaffStatusResponse rsp = SetStaffStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetStaffStatusOutcome(rsp);
        else
            return SetStaffStatusOutcome(o.GetError());
    }
    else
    {
        return SetStaffStatusOutcome(outcome.GetError());
    }
}

void CccClient::SetStaffStatusAsync(const SetStaffStatusRequest& request, const SetStaffStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetStaffStatusRequest&;
    using Resp = SetStaffStatusResponse;

    DoRequestAsync<Req, Resp>(
        "SetStaffStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::SetStaffStatusOutcomeCallable CccClient::SetStaffStatusCallable(const SetStaffStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetStaffStatusOutcome>>();
    SetStaffStatusAsync(
    request,
    [prom](
        const CccClient*,
        const SetStaffStatusRequest&,
        SetStaffStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StopAutoCalloutTaskRequest&;
    using Resp = StopAutoCalloutTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopAutoCalloutTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::StopAutoCalloutTaskOutcomeCallable CccClient::StopAutoCalloutTaskCallable(const StopAutoCalloutTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopAutoCalloutTaskOutcome>>();
    StopAutoCalloutTaskAsync(
    request,
    [prom](
        const CccClient*,
        const StopAutoCalloutTaskRequest&,
        StopAutoCalloutTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TransferToManualRequest&;
    using Resp = TransferToManualResponse;

    DoRequestAsync<Req, Resp>(
        "TransferToManual", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::TransferToManualOutcomeCallable CccClient::TransferToManualCallable(const TransferToManualRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransferToManualOutcome>>();
    TransferToManualAsync(
    request,
    [prom](
        const CccClient*,
        const TransferToManualRequest&,
        TransferToManualOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UnbindNumberCallOutSkillGroupRequest&;
    using Resp = UnbindNumberCallOutSkillGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindNumberCallOutSkillGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::UnbindNumberCallOutSkillGroupOutcomeCallable CccClient::UnbindNumberCallOutSkillGroupCallable(const UnbindNumberCallOutSkillGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindNumberCallOutSkillGroupOutcome>>();
    UnbindNumberCallOutSkillGroupAsync(
    request,
    [prom](
        const CccClient*,
        const UnbindNumberCallOutSkillGroupRequest&,
        UnbindNumberCallOutSkillGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UnbindStaffSkillGroupListRequest&;
    using Resp = UnbindStaffSkillGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindStaffSkillGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::UnbindStaffSkillGroupListOutcomeCallable CccClient::UnbindStaffSkillGroupListCallable(const UnbindStaffSkillGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindStaffSkillGroupListOutcome>>();
    UnbindStaffSkillGroupListAsync(
    request,
    [prom](
        const CccClient*,
        const UnbindStaffSkillGroupListRequest&,
        UnbindStaffSkillGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateCCCSkillGroupRequest&;
    using Resp = UpdateCCCSkillGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCCCSkillGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::UpdateCCCSkillGroupOutcomeCallable CccClient::UpdateCCCSkillGroupCallable(const UpdateCCCSkillGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCCCSkillGroupOutcome>>();
    UpdateCCCSkillGroupAsync(
    request,
    [prom](
        const CccClient*,
        const UpdateCCCSkillGroupRequest&,
        UpdateCCCSkillGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdatePredictiveDialingCampaignRequest&;
    using Resp = UpdatePredictiveDialingCampaignResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePredictiveDialingCampaign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::UpdatePredictiveDialingCampaignOutcomeCallable CccClient::UpdatePredictiveDialingCampaignCallable(const UpdatePredictiveDialingCampaignRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePredictiveDialingCampaignOutcome>>();
    UpdatePredictiveDialingCampaignAsync(
    request,
    [prom](
        const CccClient*,
        const UpdatePredictiveDialingCampaignRequest&,
        UpdatePredictiveDialingCampaignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UploadIvrAudioRequest&;
    using Resp = UploadIvrAudioResponse;

    DoRequestAsync<Req, Resp>(
        "UploadIvrAudio", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CccClient::UploadIvrAudioOutcomeCallable CccClient::UploadIvrAudioCallable(const UploadIvrAudioRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadIvrAudioOutcome>>();
    UploadIvrAudioAsync(
    request,
    [prom](
        const CccClient*,
        const UploadIvrAudioRequest&,
        UploadIvrAudioOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


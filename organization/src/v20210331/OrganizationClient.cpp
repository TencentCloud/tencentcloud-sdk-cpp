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

#include <tencentcloud/organization/v20210331/OrganizationClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Organization::V20210331;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-03-31";
    const string ENDPOINT = "organization.tencentcloudapi.com";
}

OrganizationClient::OrganizationClient(const Credential &credential, const string &region) :
    OrganizationClient(credential, region, ClientProfile())
{
}

OrganizationClient::OrganizationClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OrganizationClient::AcceptJoinShareUnitInvitationOutcome OrganizationClient::AcceptJoinShareUnitInvitation(const AcceptJoinShareUnitInvitationRequest &request)
{
    auto outcome = MakeRequest(request, "AcceptJoinShareUnitInvitation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcceptJoinShareUnitInvitationResponse rsp = AcceptJoinShareUnitInvitationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcceptJoinShareUnitInvitationOutcome(rsp);
        else
            return AcceptJoinShareUnitInvitationOutcome(o.GetError());
    }
    else
    {
        return AcceptJoinShareUnitInvitationOutcome(outcome.GetError());
    }
}

void OrganizationClient::AcceptJoinShareUnitInvitationAsync(const AcceptJoinShareUnitInvitationRequest& request, const AcceptJoinShareUnitInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AcceptJoinShareUnitInvitation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AcceptJoinShareUnitInvitationOutcomeCallable OrganizationClient::AcceptJoinShareUnitInvitationCallable(const AcceptJoinShareUnitInvitationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AcceptJoinShareUnitInvitationOutcome()>>(
        [this, request]()
        {
            return this->AcceptJoinShareUnitInvitation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::AddOrganizationMemberEmailOutcome OrganizationClient::AddOrganizationMemberEmail(const AddOrganizationMemberEmailRequest &request)
{
    auto outcome = MakeRequest(request, "AddOrganizationMemberEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddOrganizationMemberEmailResponse rsp = AddOrganizationMemberEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddOrganizationMemberEmailOutcome(rsp);
        else
            return AddOrganizationMemberEmailOutcome(o.GetError());
    }
    else
    {
        return AddOrganizationMemberEmailOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddOrganizationMemberEmailAsync(const AddOrganizationMemberEmailRequest& request, const AddOrganizationMemberEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddOrganizationMemberEmail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AddOrganizationMemberEmailOutcomeCallable OrganizationClient::AddOrganizationMemberEmailCallable(const AddOrganizationMemberEmailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddOrganizationMemberEmailOutcome()>>(
        [this, request]()
        {
            return this->AddOrganizationMemberEmail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::AddOrganizationNodeOutcome OrganizationClient::AddOrganizationNode(const AddOrganizationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "AddOrganizationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddOrganizationNodeResponse rsp = AddOrganizationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddOrganizationNodeOutcome(rsp);
        else
            return AddOrganizationNodeOutcome(o.GetError());
    }
    else
    {
        return AddOrganizationNodeOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddOrganizationNodeAsync(const AddOrganizationNodeRequest& request, const AddOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddOrganizationNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AddOrganizationNodeOutcomeCallable OrganizationClient::AddOrganizationNodeCallable(const AddOrganizationNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddOrganizationNodeOutcome()>>(
        [this, request]()
        {
            return this->AddOrganizationNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::AddShareUnitOutcome OrganizationClient::AddShareUnit(const AddShareUnitRequest &request)
{
    auto outcome = MakeRequest(request, "AddShareUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddShareUnitResponse rsp = AddShareUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddShareUnitOutcome(rsp);
        else
            return AddShareUnitOutcome(o.GetError());
    }
    else
    {
        return AddShareUnitOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddShareUnitAsync(const AddShareUnitRequest& request, const AddShareUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddShareUnit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AddShareUnitOutcomeCallable OrganizationClient::AddShareUnitCallable(const AddShareUnitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddShareUnitOutcome()>>(
        [this, request]()
        {
            return this->AddShareUnit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::AddShareUnitMembersOutcome OrganizationClient::AddShareUnitMembers(const AddShareUnitMembersRequest &request)
{
    auto outcome = MakeRequest(request, "AddShareUnitMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddShareUnitMembersResponse rsp = AddShareUnitMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddShareUnitMembersOutcome(rsp);
        else
            return AddShareUnitMembersOutcome(o.GetError());
    }
    else
    {
        return AddShareUnitMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddShareUnitMembersAsync(const AddShareUnitMembersRequest& request, const AddShareUnitMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddShareUnitMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AddShareUnitMembersOutcomeCallable OrganizationClient::AddShareUnitMembersCallable(const AddShareUnitMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddShareUnitMembersOutcome()>>(
        [this, request]()
        {
            return this->AddShareUnitMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::AddShareUnitResourcesOutcome OrganizationClient::AddShareUnitResources(const AddShareUnitResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "AddShareUnitResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddShareUnitResourcesResponse rsp = AddShareUnitResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddShareUnitResourcesOutcome(rsp);
        else
            return AddShareUnitResourcesOutcome(o.GetError());
    }
    else
    {
        return AddShareUnitResourcesOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddShareUnitResourcesAsync(const AddShareUnitResourcesRequest& request, const AddShareUnitResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddShareUnitResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AddShareUnitResourcesOutcomeCallable OrganizationClient::AddShareUnitResourcesCallable(const AddShareUnitResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddShareUnitResourcesOutcome()>>(
        [this, request]()
        {
            return this->AddShareUnitResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::AttachPolicyOutcome OrganizationClient::AttachPolicy(const AttachPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachPolicyResponse rsp = AttachPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachPolicyOutcome(rsp);
        else
            return AttachPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachPolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::AttachPolicyAsync(const AttachPolicyRequest& request, const AttachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AttachPolicyOutcomeCallable OrganizationClient::AttachPolicyCallable(const AttachPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachPolicyOutcome()>>(
        [this, request]()
        {
            return this->AttachPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::BindOrganizationMemberAuthAccountOutcome OrganizationClient::BindOrganizationMemberAuthAccount(const BindOrganizationMemberAuthAccountRequest &request)
{
    auto outcome = MakeRequest(request, "BindOrganizationMemberAuthAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindOrganizationMemberAuthAccountResponse rsp = BindOrganizationMemberAuthAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindOrganizationMemberAuthAccountOutcome(rsp);
        else
            return BindOrganizationMemberAuthAccountOutcome(o.GetError());
    }
    else
    {
        return BindOrganizationMemberAuthAccountOutcome(outcome.GetError());
    }
}

void OrganizationClient::BindOrganizationMemberAuthAccountAsync(const BindOrganizationMemberAuthAccountRequest& request, const BindOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindOrganizationMemberAuthAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::BindOrganizationMemberAuthAccountOutcomeCallable OrganizationClient::BindOrganizationMemberAuthAccountCallable(const BindOrganizationMemberAuthAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindOrganizationMemberAuthAccountOutcome()>>(
        [this, request]()
        {
            return this->BindOrganizationMemberAuthAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CancelOrganizationMemberAuthAccountOutcome OrganizationClient::CancelOrganizationMemberAuthAccount(const CancelOrganizationMemberAuthAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CancelOrganizationMemberAuthAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelOrganizationMemberAuthAccountResponse rsp = CancelOrganizationMemberAuthAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelOrganizationMemberAuthAccountOutcome(rsp);
        else
            return CancelOrganizationMemberAuthAccountOutcome(o.GetError());
    }
    else
    {
        return CancelOrganizationMemberAuthAccountOutcome(outcome.GetError());
    }
}

void OrganizationClient::CancelOrganizationMemberAuthAccountAsync(const CancelOrganizationMemberAuthAccountRequest& request, const CancelOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelOrganizationMemberAuthAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CancelOrganizationMemberAuthAccountOutcomeCallable OrganizationClient::CancelOrganizationMemberAuthAccountCallable(const CancelOrganizationMemberAuthAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelOrganizationMemberAuthAccountOutcome()>>(
        [this, request]()
        {
            return this->CancelOrganizationMemberAuthAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CheckAccountDeleteOutcome OrganizationClient::CheckAccountDelete(const CheckAccountDeleteRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAccountDelete");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAccountDeleteResponse rsp = CheckAccountDeleteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAccountDeleteOutcome(rsp);
        else
            return CheckAccountDeleteOutcome(o.GetError());
    }
    else
    {
        return CheckAccountDeleteOutcome(outcome.GetError());
    }
}

void OrganizationClient::CheckAccountDeleteAsync(const CheckAccountDeleteRequest& request, const CheckAccountDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckAccountDelete(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CheckAccountDeleteOutcomeCallable OrganizationClient::CheckAccountDeleteCallable(const CheckAccountDeleteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckAccountDeleteOutcome()>>(
        [this, request]()
        {
            return this->CheckAccountDelete(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateOrgServiceAssignOutcome OrganizationClient::CreateOrgServiceAssign(const CreateOrgServiceAssignRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrgServiceAssign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrgServiceAssignResponse rsp = CreateOrgServiceAssignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrgServiceAssignOutcome(rsp);
        else
            return CreateOrgServiceAssignOutcome(o.GetError());
    }
    else
    {
        return CreateOrgServiceAssignOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateOrgServiceAssignAsync(const CreateOrgServiceAssignRequest& request, const CreateOrgServiceAssignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrgServiceAssign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateOrgServiceAssignOutcomeCallable OrganizationClient::CreateOrgServiceAssignCallable(const CreateOrgServiceAssignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrgServiceAssignOutcome()>>(
        [this, request]()
        {
            return this->CreateOrgServiceAssign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateOrganizationOutcome OrganizationClient::CreateOrganization(const CreateOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationResponse rsp = CreateOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationOutcome(rsp);
        else
            return CreateOrganizationOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateOrganizationAsync(const CreateOrganizationRequest& request, const CreateOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateOrganizationOutcomeCallable OrganizationClient::CreateOrganizationCallable(const CreateOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateOrganizationIdentityOutcome OrganizationClient::CreateOrganizationIdentity(const CreateOrganizationIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationIdentityResponse rsp = CreateOrganizationIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationIdentityOutcome(rsp);
        else
            return CreateOrganizationIdentityOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationIdentityOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateOrganizationIdentityAsync(const CreateOrganizationIdentityRequest& request, const CreateOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateOrganizationIdentityOutcomeCallable OrganizationClient::CreateOrganizationIdentityCallable(const CreateOrganizationIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationIdentityOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateOrganizationMemberOutcome OrganizationClient::CreateOrganizationMember(const CreateOrganizationMemberRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationMemberResponse rsp = CreateOrganizationMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationMemberOutcome(rsp);
        else
            return CreateOrganizationMemberOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationMemberOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateOrganizationMemberAsync(const CreateOrganizationMemberRequest& request, const CreateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateOrganizationMemberOutcomeCallable OrganizationClient::CreateOrganizationMemberCallable(const CreateOrganizationMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationMemberOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateOrganizationMemberAuthIdentityOutcome OrganizationClient::CreateOrganizationMemberAuthIdentity(const CreateOrganizationMemberAuthIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationMemberAuthIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationMemberAuthIdentityResponse rsp = CreateOrganizationMemberAuthIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationMemberAuthIdentityOutcome(rsp);
        else
            return CreateOrganizationMemberAuthIdentityOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationMemberAuthIdentityOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateOrganizationMemberAuthIdentityAsync(const CreateOrganizationMemberAuthIdentityRequest& request, const CreateOrganizationMemberAuthIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationMemberAuthIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateOrganizationMemberAuthIdentityOutcomeCallable OrganizationClient::CreateOrganizationMemberAuthIdentityCallable(const CreateOrganizationMemberAuthIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationMemberAuthIdentityOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationMemberAuthIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateOrganizationMemberPolicyOutcome OrganizationClient::CreateOrganizationMemberPolicy(const CreateOrganizationMemberPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationMemberPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationMemberPolicyResponse rsp = CreateOrganizationMemberPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationMemberPolicyOutcome(rsp);
        else
            return CreateOrganizationMemberPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationMemberPolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateOrganizationMemberPolicyAsync(const CreateOrganizationMemberPolicyRequest& request, const CreateOrganizationMemberPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationMemberPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateOrganizationMemberPolicyOutcomeCallable OrganizationClient::CreateOrganizationMemberPolicyCallable(const CreateOrganizationMemberPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationMemberPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationMemberPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateOrganizationMembersPolicyOutcome OrganizationClient::CreateOrganizationMembersPolicy(const CreateOrganizationMembersPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationMembersPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationMembersPolicyResponse rsp = CreateOrganizationMembersPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationMembersPolicyOutcome(rsp);
        else
            return CreateOrganizationMembersPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationMembersPolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateOrganizationMembersPolicyAsync(const CreateOrganizationMembersPolicyRequest& request, const CreateOrganizationMembersPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationMembersPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateOrganizationMembersPolicyOutcomeCallable OrganizationClient::CreateOrganizationMembersPolicyCallable(const CreateOrganizationMembersPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationMembersPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationMembersPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreatePolicyOutcome OrganizationClient::CreatePolicy(const CreatePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePolicyResponse rsp = CreatePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePolicyOutcome(rsp);
        else
            return CreatePolicyOutcome(o.GetError());
    }
    else
    {
        return CreatePolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreatePolicyOutcomeCallable OrganizationClient::CreatePolicyCallable(const CreatePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePolicyOutcome()>>(
        [this, request]()
        {
            return this->CreatePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteAccountOutcome OrganizationClient::DeleteAccount(const DeleteAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccountResponse rsp = DeleteAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccountOutcome(rsp);
        else
            return DeleteAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteAccountOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteAccountOutcomeCallable OrganizationClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteOrgServiceAssignOutcome OrganizationClient::DeleteOrgServiceAssign(const DeleteOrgServiceAssignRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrgServiceAssign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrgServiceAssignResponse rsp = DeleteOrgServiceAssignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrgServiceAssignOutcome(rsp);
        else
            return DeleteOrgServiceAssignOutcome(o.GetError());
    }
    else
    {
        return DeleteOrgServiceAssignOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrgServiceAssignAsync(const DeleteOrgServiceAssignRequest& request, const DeleteOrgServiceAssignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrgServiceAssign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrgServiceAssignOutcomeCallable OrganizationClient::DeleteOrgServiceAssignCallable(const DeleteOrgServiceAssignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrgServiceAssignOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrgServiceAssign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteOrganizationOutcome OrganizationClient::DeleteOrganization(const DeleteOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationResponse rsp = DeleteOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationOutcome(rsp);
        else
            return DeleteOrganizationOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrganizationAsync(const DeleteOrganizationRequest& request, const DeleteOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrganizationOutcomeCallable OrganizationClient::DeleteOrganizationCallable(const DeleteOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteOrganizationIdentityOutcome OrganizationClient::DeleteOrganizationIdentity(const DeleteOrganizationIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationIdentityResponse rsp = DeleteOrganizationIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationIdentityOutcome(rsp);
        else
            return DeleteOrganizationIdentityOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationIdentityOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrganizationIdentityAsync(const DeleteOrganizationIdentityRequest& request, const DeleteOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganizationIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrganizationIdentityOutcomeCallable OrganizationClient::DeleteOrganizationIdentityCallable(const DeleteOrganizationIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationIdentityOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganizationIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteOrganizationMemberAuthIdentityOutcome OrganizationClient::DeleteOrganizationMemberAuthIdentity(const DeleteOrganizationMemberAuthIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationMemberAuthIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationMemberAuthIdentityResponse rsp = DeleteOrganizationMemberAuthIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationMemberAuthIdentityOutcome(rsp);
        else
            return DeleteOrganizationMemberAuthIdentityOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationMemberAuthIdentityOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrganizationMemberAuthIdentityAsync(const DeleteOrganizationMemberAuthIdentityRequest& request, const DeleteOrganizationMemberAuthIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganizationMemberAuthIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrganizationMemberAuthIdentityOutcomeCallable OrganizationClient::DeleteOrganizationMemberAuthIdentityCallable(const DeleteOrganizationMemberAuthIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationMemberAuthIdentityOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganizationMemberAuthIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteOrganizationMembersOutcome OrganizationClient::DeleteOrganizationMembers(const DeleteOrganizationMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationMembersResponse rsp = DeleteOrganizationMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationMembersOutcome(rsp);
        else
            return DeleteOrganizationMembersOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrganizationMembersAsync(const DeleteOrganizationMembersRequest& request, const DeleteOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganizationMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrganizationMembersOutcomeCallable OrganizationClient::DeleteOrganizationMembersCallable(const DeleteOrganizationMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationMembersOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganizationMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteOrganizationMembersPolicyOutcome OrganizationClient::DeleteOrganizationMembersPolicy(const DeleteOrganizationMembersPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationMembersPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationMembersPolicyResponse rsp = DeleteOrganizationMembersPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationMembersPolicyOutcome(rsp);
        else
            return DeleteOrganizationMembersPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationMembersPolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrganizationMembersPolicyAsync(const DeleteOrganizationMembersPolicyRequest& request, const DeleteOrganizationMembersPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganizationMembersPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrganizationMembersPolicyOutcomeCallable OrganizationClient::DeleteOrganizationMembersPolicyCallable(const DeleteOrganizationMembersPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationMembersPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganizationMembersPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteOrganizationNodesOutcome OrganizationClient::DeleteOrganizationNodes(const DeleteOrganizationNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationNodesResponse rsp = DeleteOrganizationNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationNodesOutcome(rsp);
        else
            return DeleteOrganizationNodesOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationNodesOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrganizationNodesAsync(const DeleteOrganizationNodesRequest& request, const DeleteOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganizationNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrganizationNodesOutcomeCallable OrganizationClient::DeleteOrganizationNodesCallable(const DeleteOrganizationNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationNodesOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganizationNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeletePolicyOutcome OrganizationClient::DeletePolicy(const DeletePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePolicyResponse rsp = DeletePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePolicyOutcome(rsp);
        else
            return DeletePolicyOutcome(o.GetError());
    }
    else
    {
        return DeletePolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeletePolicyOutcomeCallable OrganizationClient::DeletePolicyCallable(const DeletePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePolicyOutcome()>>(
        [this, request]()
        {
            return this->DeletePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteShareUnitOutcome OrganizationClient::DeleteShareUnit(const DeleteShareUnitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShareUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShareUnitResponse rsp = DeleteShareUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShareUnitOutcome(rsp);
        else
            return DeleteShareUnitOutcome(o.GetError());
    }
    else
    {
        return DeleteShareUnitOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteShareUnitAsync(const DeleteShareUnitRequest& request, const DeleteShareUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteShareUnit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteShareUnitOutcomeCallable OrganizationClient::DeleteShareUnitCallable(const DeleteShareUnitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteShareUnitOutcome()>>(
        [this, request]()
        {
            return this->DeleteShareUnit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteShareUnitMembersOutcome OrganizationClient::DeleteShareUnitMembers(const DeleteShareUnitMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShareUnitMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShareUnitMembersResponse rsp = DeleteShareUnitMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShareUnitMembersOutcome(rsp);
        else
            return DeleteShareUnitMembersOutcome(o.GetError());
    }
    else
    {
        return DeleteShareUnitMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteShareUnitMembersAsync(const DeleteShareUnitMembersRequest& request, const DeleteShareUnitMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteShareUnitMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteShareUnitMembersOutcomeCallable OrganizationClient::DeleteShareUnitMembersCallable(const DeleteShareUnitMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteShareUnitMembersOutcome()>>(
        [this, request]()
        {
            return this->DeleteShareUnitMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteShareUnitResourcesOutcome OrganizationClient::DeleteShareUnitResources(const DeleteShareUnitResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShareUnitResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShareUnitResourcesResponse rsp = DeleteShareUnitResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShareUnitResourcesOutcome(rsp);
        else
            return DeleteShareUnitResourcesOutcome(o.GetError());
    }
    else
    {
        return DeleteShareUnitResourcesOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteShareUnitResourcesAsync(const DeleteShareUnitResourcesRequest& request, const DeleteShareUnitResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteShareUnitResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteShareUnitResourcesOutcomeCallable OrganizationClient::DeleteShareUnitResourcesCallable(const DeleteShareUnitResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteShareUnitResourcesOutcome()>>(
        [this, request]()
        {
            return this->DeleteShareUnitResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeEffectivePolicyOutcome OrganizationClient::DescribeEffectivePolicy(const DescribeEffectivePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEffectivePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEffectivePolicyResponse rsp = DescribeEffectivePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEffectivePolicyOutcome(rsp);
        else
            return DescribeEffectivePolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeEffectivePolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeEffectivePolicyAsync(const DescribeEffectivePolicyRequest& request, const DescribeEffectivePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEffectivePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeEffectivePolicyOutcomeCallable OrganizationClient::DescribeEffectivePolicyCallable(const DescribeEffectivePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEffectivePolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeEffectivePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationOutcome OrganizationClient::DescribeOrganization(const DescribeOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationResponse rsp = DescribeOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationOutcome(rsp);
        else
            return DescribeOrganizationOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationAsync(const DescribeOrganizationRequest& request, const DescribeOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationOutcomeCallable OrganizationClient::DescribeOrganizationCallable(const DescribeOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationAuthNodeOutcome OrganizationClient::DescribeOrganizationAuthNode(const DescribeOrganizationAuthNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationAuthNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationAuthNodeResponse rsp = DescribeOrganizationAuthNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationAuthNodeOutcome(rsp);
        else
            return DescribeOrganizationAuthNodeOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationAuthNodeOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationAuthNodeAsync(const DescribeOrganizationAuthNodeRequest& request, const DescribeOrganizationAuthNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationAuthNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationAuthNodeOutcomeCallable OrganizationClient::DescribeOrganizationAuthNodeCallable(const DescribeOrganizationAuthNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationAuthNodeOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationAuthNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationFinancialByMemberOutcome OrganizationClient::DescribeOrganizationFinancialByMember(const DescribeOrganizationFinancialByMemberRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationFinancialByMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationFinancialByMemberResponse rsp = DescribeOrganizationFinancialByMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationFinancialByMemberOutcome(rsp);
        else
            return DescribeOrganizationFinancialByMemberOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationFinancialByMemberOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationFinancialByMemberAsync(const DescribeOrganizationFinancialByMemberRequest& request, const DescribeOrganizationFinancialByMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationFinancialByMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationFinancialByMemberOutcomeCallable OrganizationClient::DescribeOrganizationFinancialByMemberCallable(const DescribeOrganizationFinancialByMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationFinancialByMemberOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationFinancialByMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationFinancialByMonthOutcome OrganizationClient::DescribeOrganizationFinancialByMonth(const DescribeOrganizationFinancialByMonthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationFinancialByMonth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationFinancialByMonthResponse rsp = DescribeOrganizationFinancialByMonthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationFinancialByMonthOutcome(rsp);
        else
            return DescribeOrganizationFinancialByMonthOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationFinancialByMonthOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationFinancialByMonthAsync(const DescribeOrganizationFinancialByMonthRequest& request, const DescribeOrganizationFinancialByMonthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationFinancialByMonth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationFinancialByMonthOutcomeCallable OrganizationClient::DescribeOrganizationFinancialByMonthCallable(const DescribeOrganizationFinancialByMonthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationFinancialByMonthOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationFinancialByMonth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationFinancialByProductOutcome OrganizationClient::DescribeOrganizationFinancialByProduct(const DescribeOrganizationFinancialByProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationFinancialByProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationFinancialByProductResponse rsp = DescribeOrganizationFinancialByProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationFinancialByProductOutcome(rsp);
        else
            return DescribeOrganizationFinancialByProductOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationFinancialByProductOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationFinancialByProductAsync(const DescribeOrganizationFinancialByProductRequest& request, const DescribeOrganizationFinancialByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationFinancialByProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationFinancialByProductOutcomeCallable OrganizationClient::DescribeOrganizationFinancialByProductCallable(const DescribeOrganizationFinancialByProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationFinancialByProductOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationFinancialByProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationMemberAuthAccountsOutcome OrganizationClient::DescribeOrganizationMemberAuthAccounts(const DescribeOrganizationMemberAuthAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationMemberAuthAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationMemberAuthAccountsResponse rsp = DescribeOrganizationMemberAuthAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationMemberAuthAccountsOutcome(rsp);
        else
            return DescribeOrganizationMemberAuthAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationMemberAuthAccountsOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationMemberAuthAccountsAsync(const DescribeOrganizationMemberAuthAccountsRequest& request, const DescribeOrganizationMemberAuthAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationMemberAuthAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationMemberAuthAccountsOutcomeCallable OrganizationClient::DescribeOrganizationMemberAuthAccountsCallable(const DescribeOrganizationMemberAuthAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationMemberAuthAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationMemberAuthAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationMemberAuthIdentitiesOutcome OrganizationClient::DescribeOrganizationMemberAuthIdentities(const DescribeOrganizationMemberAuthIdentitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationMemberAuthIdentities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationMemberAuthIdentitiesResponse rsp = DescribeOrganizationMemberAuthIdentitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationMemberAuthIdentitiesOutcome(rsp);
        else
            return DescribeOrganizationMemberAuthIdentitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationMemberAuthIdentitiesOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationMemberAuthIdentitiesAsync(const DescribeOrganizationMemberAuthIdentitiesRequest& request, const DescribeOrganizationMemberAuthIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationMemberAuthIdentities(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationMemberAuthIdentitiesOutcomeCallable OrganizationClient::DescribeOrganizationMemberAuthIdentitiesCallable(const DescribeOrganizationMemberAuthIdentitiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationMemberAuthIdentitiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationMemberAuthIdentities(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationMemberEmailBindOutcome OrganizationClient::DescribeOrganizationMemberEmailBind(const DescribeOrganizationMemberEmailBindRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationMemberEmailBind");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationMemberEmailBindResponse rsp = DescribeOrganizationMemberEmailBindResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationMemberEmailBindOutcome(rsp);
        else
            return DescribeOrganizationMemberEmailBindOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationMemberEmailBindOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationMemberEmailBindAsync(const DescribeOrganizationMemberEmailBindRequest& request, const DescribeOrganizationMemberEmailBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationMemberEmailBind(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationMemberEmailBindOutcomeCallable OrganizationClient::DescribeOrganizationMemberEmailBindCallable(const DescribeOrganizationMemberEmailBindRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationMemberEmailBindOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationMemberEmailBind(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationMemberPoliciesOutcome OrganizationClient::DescribeOrganizationMemberPolicies(const DescribeOrganizationMemberPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationMemberPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationMemberPoliciesResponse rsp = DescribeOrganizationMemberPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationMemberPoliciesOutcome(rsp);
        else
            return DescribeOrganizationMemberPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationMemberPoliciesOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationMemberPoliciesAsync(const DescribeOrganizationMemberPoliciesRequest& request, const DescribeOrganizationMemberPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationMemberPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationMemberPoliciesOutcomeCallable OrganizationClient::DescribeOrganizationMemberPoliciesCallable(const DescribeOrganizationMemberPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationMemberPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationMemberPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationMembersOutcome OrganizationClient::DescribeOrganizationMembers(const DescribeOrganizationMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationMembersResponse rsp = DescribeOrganizationMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationMembersOutcome(rsp);
        else
            return DescribeOrganizationMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationMembersAsync(const DescribeOrganizationMembersRequest& request, const DescribeOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationMembersOutcomeCallable OrganizationClient::DescribeOrganizationMembersCallable(const DescribeOrganizationMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationMembersOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationNodesOutcome OrganizationClient::DescribeOrganizationNodes(const DescribeOrganizationNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationNodesResponse rsp = DescribeOrganizationNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationNodesOutcome(rsp);
        else
            return DescribeOrganizationNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationNodesOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationNodesAsync(const DescribeOrganizationNodesRequest& request, const DescribeOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationNodesOutcomeCallable OrganizationClient::DescribeOrganizationNodesCallable(const DescribeOrganizationNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribePolicyOutcome OrganizationClient::DescribePolicy(const DescribePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyResponse rsp = DescribePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyOutcome(rsp);
        else
            return DescribePolicyOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribePolicyAsync(const DescribePolicyRequest& request, const DescribePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribePolicyOutcomeCallable OrganizationClient::DescribePolicyCallable(const DescribePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribePolicyConfigOutcome OrganizationClient::DescribePolicyConfig(const DescribePolicyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyConfigResponse rsp = DescribePolicyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyConfigOutcome(rsp);
        else
            return DescribePolicyConfigOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyConfigOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribePolicyConfigAsync(const DescribePolicyConfigRequest& request, const DescribePolicyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribePolicyConfigOutcomeCallable OrganizationClient::DescribePolicyConfigCallable(const DescribePolicyConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeShareAreasOutcome OrganizationClient::DescribeShareAreas(const DescribeShareAreasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShareAreas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShareAreasResponse rsp = DescribeShareAreasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShareAreasOutcome(rsp);
        else
            return DescribeShareAreasOutcome(o.GetError());
    }
    else
    {
        return DescribeShareAreasOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeShareAreasAsync(const DescribeShareAreasRequest& request, const DescribeShareAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShareAreas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeShareAreasOutcomeCallable OrganizationClient::DescribeShareAreasCallable(const DescribeShareAreasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShareAreasOutcome()>>(
        [this, request]()
        {
            return this->DescribeShareAreas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeShareUnitMembersOutcome OrganizationClient::DescribeShareUnitMembers(const DescribeShareUnitMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShareUnitMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShareUnitMembersResponse rsp = DescribeShareUnitMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShareUnitMembersOutcome(rsp);
        else
            return DescribeShareUnitMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeShareUnitMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeShareUnitMembersAsync(const DescribeShareUnitMembersRequest& request, const DescribeShareUnitMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShareUnitMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeShareUnitMembersOutcomeCallable OrganizationClient::DescribeShareUnitMembersCallable(const DescribeShareUnitMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShareUnitMembersOutcome()>>(
        [this, request]()
        {
            return this->DescribeShareUnitMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeShareUnitResourcesOutcome OrganizationClient::DescribeShareUnitResources(const DescribeShareUnitResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShareUnitResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShareUnitResourcesResponse rsp = DescribeShareUnitResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShareUnitResourcesOutcome(rsp);
        else
            return DescribeShareUnitResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeShareUnitResourcesOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeShareUnitResourcesAsync(const DescribeShareUnitResourcesRequest& request, const DescribeShareUnitResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShareUnitResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeShareUnitResourcesOutcomeCallable OrganizationClient::DescribeShareUnitResourcesCallable(const DescribeShareUnitResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShareUnitResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeShareUnitResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeShareUnitsOutcome OrganizationClient::DescribeShareUnits(const DescribeShareUnitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShareUnits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShareUnitsResponse rsp = DescribeShareUnitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShareUnitsOutcome(rsp);
        else
            return DescribeShareUnitsOutcome(o.GetError());
    }
    else
    {
        return DescribeShareUnitsOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeShareUnitsAsync(const DescribeShareUnitsRequest& request, const DescribeShareUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShareUnits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeShareUnitsOutcomeCallable OrganizationClient::DescribeShareUnitsCallable(const DescribeShareUnitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShareUnitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeShareUnits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DetachPolicyOutcome OrganizationClient::DetachPolicy(const DetachPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachPolicyResponse rsp = DetachPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachPolicyOutcome(rsp);
        else
            return DetachPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachPolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::DetachPolicyAsync(const DetachPolicyRequest& request, const DetachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DetachPolicyOutcomeCallable OrganizationClient::DetachPolicyCallable(const DetachPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachPolicyOutcome()>>(
        [this, request]()
        {
            return this->DetachPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DisablePolicyTypeOutcome OrganizationClient::DisablePolicyType(const DisablePolicyTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DisablePolicyType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisablePolicyTypeResponse rsp = DisablePolicyTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisablePolicyTypeOutcome(rsp);
        else
            return DisablePolicyTypeOutcome(o.GetError());
    }
    else
    {
        return DisablePolicyTypeOutcome(outcome.GetError());
    }
}

void OrganizationClient::DisablePolicyTypeAsync(const DisablePolicyTypeRequest& request, const DisablePolicyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisablePolicyType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DisablePolicyTypeOutcomeCallable OrganizationClient::DisablePolicyTypeCallable(const DisablePolicyTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisablePolicyTypeOutcome()>>(
        [this, request]()
        {
            return this->DisablePolicyType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::EnablePolicyTypeOutcome OrganizationClient::EnablePolicyType(const EnablePolicyTypeRequest &request)
{
    auto outcome = MakeRequest(request, "EnablePolicyType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnablePolicyTypeResponse rsp = EnablePolicyTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnablePolicyTypeOutcome(rsp);
        else
            return EnablePolicyTypeOutcome(o.GetError());
    }
    else
    {
        return EnablePolicyTypeOutcome(outcome.GetError());
    }
}

void OrganizationClient::EnablePolicyTypeAsync(const EnablePolicyTypeRequest& request, const EnablePolicyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnablePolicyType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::EnablePolicyTypeOutcomeCallable OrganizationClient::EnablePolicyTypeCallable(const EnablePolicyTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnablePolicyTypeOutcome()>>(
        [this, request]()
        {
            return this->EnablePolicyType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListNonCompliantResourceOutcome OrganizationClient::ListNonCompliantResource(const ListNonCompliantResourceRequest &request)
{
    auto outcome = MakeRequest(request, "ListNonCompliantResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListNonCompliantResourceResponse rsp = ListNonCompliantResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListNonCompliantResourceOutcome(rsp);
        else
            return ListNonCompliantResourceOutcome(o.GetError());
    }
    else
    {
        return ListNonCompliantResourceOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListNonCompliantResourceAsync(const ListNonCompliantResourceRequest& request, const ListNonCompliantResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListNonCompliantResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListNonCompliantResourceOutcomeCallable OrganizationClient::ListNonCompliantResourceCallable(const ListNonCompliantResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListNonCompliantResourceOutcome()>>(
        [this, request]()
        {
            return this->ListNonCompliantResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListOrgServiceAssignMemberOutcome OrganizationClient::ListOrgServiceAssignMember(const ListOrgServiceAssignMemberRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrgServiceAssignMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrgServiceAssignMemberResponse rsp = ListOrgServiceAssignMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrgServiceAssignMemberOutcome(rsp);
        else
            return ListOrgServiceAssignMemberOutcome(o.GetError());
    }
    else
    {
        return ListOrgServiceAssignMemberOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListOrgServiceAssignMemberAsync(const ListOrgServiceAssignMemberRequest& request, const ListOrgServiceAssignMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrgServiceAssignMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListOrgServiceAssignMemberOutcomeCallable OrganizationClient::ListOrgServiceAssignMemberCallable(const ListOrgServiceAssignMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrgServiceAssignMemberOutcome()>>(
        [this, request]()
        {
            return this->ListOrgServiceAssignMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListOrganizationIdentityOutcome OrganizationClient::ListOrganizationIdentity(const ListOrganizationIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrganizationIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrganizationIdentityResponse rsp = ListOrganizationIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrganizationIdentityOutcome(rsp);
        else
            return ListOrganizationIdentityOutcome(o.GetError());
    }
    else
    {
        return ListOrganizationIdentityOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListOrganizationIdentityAsync(const ListOrganizationIdentityRequest& request, const ListOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrganizationIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListOrganizationIdentityOutcomeCallable OrganizationClient::ListOrganizationIdentityCallable(const ListOrganizationIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrganizationIdentityOutcome()>>(
        [this, request]()
        {
            return this->ListOrganizationIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListOrganizationServiceOutcome OrganizationClient::ListOrganizationService(const ListOrganizationServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrganizationService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrganizationServiceResponse rsp = ListOrganizationServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrganizationServiceOutcome(rsp);
        else
            return ListOrganizationServiceOutcome(o.GetError());
    }
    else
    {
        return ListOrganizationServiceOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListOrganizationServiceAsync(const ListOrganizationServiceRequest& request, const ListOrganizationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrganizationService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListOrganizationServiceOutcomeCallable OrganizationClient::ListOrganizationServiceCallable(const ListOrganizationServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrganizationServiceOutcome()>>(
        [this, request]()
        {
            return this->ListOrganizationService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListPoliciesOutcome OrganizationClient::ListPolicies(const ListPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ListPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPoliciesResponse rsp = ListPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPoliciesOutcome(rsp);
        else
            return ListPoliciesOutcome(o.GetError());
    }
    else
    {
        return ListPoliciesOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListPoliciesOutcomeCallable OrganizationClient::ListPoliciesCallable(const ListPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListPoliciesOutcome()>>(
        [this, request]()
        {
            return this->ListPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListPoliciesForTargetOutcome OrganizationClient::ListPoliciesForTarget(const ListPoliciesForTargetRequest &request)
{
    auto outcome = MakeRequest(request, "ListPoliciesForTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPoliciesForTargetResponse rsp = ListPoliciesForTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPoliciesForTargetOutcome(rsp);
        else
            return ListPoliciesForTargetOutcome(o.GetError());
    }
    else
    {
        return ListPoliciesForTargetOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListPoliciesForTargetAsync(const ListPoliciesForTargetRequest& request, const ListPoliciesForTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListPoliciesForTarget(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListPoliciesForTargetOutcomeCallable OrganizationClient::ListPoliciesForTargetCallable(const ListPoliciesForTargetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListPoliciesForTargetOutcome()>>(
        [this, request]()
        {
            return this->ListPoliciesForTarget(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListTargetsForPolicyOutcome OrganizationClient::ListTargetsForPolicy(const ListTargetsForPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ListTargetsForPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTargetsForPolicyResponse rsp = ListTargetsForPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTargetsForPolicyOutcome(rsp);
        else
            return ListTargetsForPolicyOutcome(o.GetError());
    }
    else
    {
        return ListTargetsForPolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListTargetsForPolicyAsync(const ListTargetsForPolicyRequest& request, const ListTargetsForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTargetsForPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListTargetsForPolicyOutcomeCallable OrganizationClient::ListTargetsForPolicyCallable(const ListTargetsForPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTargetsForPolicyOutcome()>>(
        [this, request]()
        {
            return this->ListTargetsForPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::MoveOrganizationNodeMembersOutcome OrganizationClient::MoveOrganizationNodeMembers(const MoveOrganizationNodeMembersRequest &request)
{
    auto outcome = MakeRequest(request, "MoveOrganizationNodeMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MoveOrganizationNodeMembersResponse rsp = MoveOrganizationNodeMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MoveOrganizationNodeMembersOutcome(rsp);
        else
            return MoveOrganizationNodeMembersOutcome(o.GetError());
    }
    else
    {
        return MoveOrganizationNodeMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::MoveOrganizationNodeMembersAsync(const MoveOrganizationNodeMembersRequest& request, const MoveOrganizationNodeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MoveOrganizationNodeMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::MoveOrganizationNodeMembersOutcomeCallable OrganizationClient::MoveOrganizationNodeMembersCallable(const MoveOrganizationNodeMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MoveOrganizationNodeMembersOutcome()>>(
        [this, request]()
        {
            return this->MoveOrganizationNodeMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::QuitOrganizationOutcome OrganizationClient::QuitOrganization(const QuitOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "QuitOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuitOrganizationResponse rsp = QuitOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuitOrganizationOutcome(rsp);
        else
            return QuitOrganizationOutcome(o.GetError());
    }
    else
    {
        return QuitOrganizationOutcome(outcome.GetError());
    }
}

void OrganizationClient::QuitOrganizationAsync(const QuitOrganizationRequest& request, const QuitOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QuitOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::QuitOrganizationOutcomeCallable OrganizationClient::QuitOrganizationCallable(const QuitOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QuitOrganizationOutcome()>>(
        [this, request]()
        {
            return this->QuitOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::RejectJoinShareUnitInvitationOutcome OrganizationClient::RejectJoinShareUnitInvitation(const RejectJoinShareUnitInvitationRequest &request)
{
    auto outcome = MakeRequest(request, "RejectJoinShareUnitInvitation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RejectJoinShareUnitInvitationResponse rsp = RejectJoinShareUnitInvitationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RejectJoinShareUnitInvitationOutcome(rsp);
        else
            return RejectJoinShareUnitInvitationOutcome(o.GetError());
    }
    else
    {
        return RejectJoinShareUnitInvitationOutcome(outcome.GetError());
    }
}

void OrganizationClient::RejectJoinShareUnitInvitationAsync(const RejectJoinShareUnitInvitationRequest& request, const RejectJoinShareUnitInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RejectJoinShareUnitInvitation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::RejectJoinShareUnitInvitationOutcomeCallable OrganizationClient::RejectJoinShareUnitInvitationCallable(const RejectJoinShareUnitInvitationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RejectJoinShareUnitInvitationOutcome()>>(
        [this, request]()
        {
            return this->RejectJoinShareUnitInvitation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateOrganizationIdentityOutcome OrganizationClient::UpdateOrganizationIdentity(const UpdateOrganizationIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOrganizationIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOrganizationIdentityResponse rsp = UpdateOrganizationIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOrganizationIdentityOutcome(rsp);
        else
            return UpdateOrganizationIdentityOutcome(o.GetError());
    }
    else
    {
        return UpdateOrganizationIdentityOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateOrganizationIdentityAsync(const UpdateOrganizationIdentityRequest& request, const UpdateOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateOrganizationIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateOrganizationIdentityOutcomeCallable OrganizationClient::UpdateOrganizationIdentityCallable(const UpdateOrganizationIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateOrganizationIdentityOutcome()>>(
        [this, request]()
        {
            return this->UpdateOrganizationIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateOrganizationMemberOutcome OrganizationClient::UpdateOrganizationMember(const UpdateOrganizationMemberRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOrganizationMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOrganizationMemberResponse rsp = UpdateOrganizationMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOrganizationMemberOutcome(rsp);
        else
            return UpdateOrganizationMemberOutcome(o.GetError());
    }
    else
    {
        return UpdateOrganizationMemberOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateOrganizationMemberAsync(const UpdateOrganizationMemberRequest& request, const UpdateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateOrganizationMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateOrganizationMemberOutcomeCallable OrganizationClient::UpdateOrganizationMemberCallable(const UpdateOrganizationMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateOrganizationMemberOutcome()>>(
        [this, request]()
        {
            return this->UpdateOrganizationMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateOrganizationMemberEmailBindOutcome OrganizationClient::UpdateOrganizationMemberEmailBind(const UpdateOrganizationMemberEmailBindRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOrganizationMemberEmailBind");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOrganizationMemberEmailBindResponse rsp = UpdateOrganizationMemberEmailBindResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOrganizationMemberEmailBindOutcome(rsp);
        else
            return UpdateOrganizationMemberEmailBindOutcome(o.GetError());
    }
    else
    {
        return UpdateOrganizationMemberEmailBindOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateOrganizationMemberEmailBindAsync(const UpdateOrganizationMemberEmailBindRequest& request, const UpdateOrganizationMemberEmailBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateOrganizationMemberEmailBind(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateOrganizationMemberEmailBindOutcomeCallable OrganizationClient::UpdateOrganizationMemberEmailBindCallable(const UpdateOrganizationMemberEmailBindRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateOrganizationMemberEmailBindOutcome()>>(
        [this, request]()
        {
            return this->UpdateOrganizationMemberEmailBind(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateOrganizationNodeOutcome OrganizationClient::UpdateOrganizationNode(const UpdateOrganizationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOrganizationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOrganizationNodeResponse rsp = UpdateOrganizationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOrganizationNodeOutcome(rsp);
        else
            return UpdateOrganizationNodeOutcome(o.GetError());
    }
    else
    {
        return UpdateOrganizationNodeOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateOrganizationNodeAsync(const UpdateOrganizationNodeRequest& request, const UpdateOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateOrganizationNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateOrganizationNodeOutcomeCallable OrganizationClient::UpdateOrganizationNodeCallable(const UpdateOrganizationNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateOrganizationNodeOutcome()>>(
        [this, request]()
        {
            return this->UpdateOrganizationNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdatePolicyOutcome OrganizationClient::UpdatePolicy(const UpdatePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePolicyResponse rsp = UpdatePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePolicyOutcome(rsp);
        else
            return UpdatePolicyOutcome(o.GetError());
    }
    else
    {
        return UpdatePolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdatePolicyAsync(const UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdatePolicyOutcomeCallable OrganizationClient::UpdatePolicyCallable(const UpdatePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePolicyOutcome()>>(
        [this, request]()
        {
            return this->UpdatePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateShareUnitOutcome OrganizationClient::UpdateShareUnit(const UpdateShareUnitRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateShareUnit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateShareUnitResponse rsp = UpdateShareUnitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateShareUnitOutcome(rsp);
        else
            return UpdateShareUnitOutcome(o.GetError());
    }
    else
    {
        return UpdateShareUnitOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateShareUnitAsync(const UpdateShareUnitRequest& request, const UpdateShareUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateShareUnit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateShareUnitOutcomeCallable OrganizationClient::UpdateShareUnitCallable(const UpdateShareUnitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateShareUnitOutcome()>>(
        [this, request]()
        {
            return this->UpdateShareUnit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


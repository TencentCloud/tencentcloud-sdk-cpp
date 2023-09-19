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


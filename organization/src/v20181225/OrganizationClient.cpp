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

#include <tencentcloud/organization/v20181225/OrganizationClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Organization::V20181225;
using namespace TencentCloud::Organization::V20181225::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-12-25";
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


OrganizationClient::AcceptOrganizationInvitationOutcome OrganizationClient::AcceptOrganizationInvitation(const AcceptOrganizationInvitationRequest &request)
{
    auto outcome = MakeRequest(request, "AcceptOrganizationInvitation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcceptOrganizationInvitationResponse rsp = AcceptOrganizationInvitationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcceptOrganizationInvitationOutcome(rsp);
        else
            return AcceptOrganizationInvitationOutcome(o.GetError());
    }
    else
    {
        return AcceptOrganizationInvitationOutcome(outcome.GetError());
    }
}

void OrganizationClient::AcceptOrganizationInvitationAsync(const AcceptOrganizationInvitationRequest& request, const AcceptOrganizationInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AcceptOrganizationInvitation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AcceptOrganizationInvitationOutcomeCallable OrganizationClient::AcceptOrganizationInvitationCallable(const AcceptOrganizationInvitationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AcceptOrganizationInvitationOutcome()>>(
        [this, request]()
        {
            return this->AcceptOrganizationInvitation(request);
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

OrganizationClient::CancelOrganizationInvitationOutcome OrganizationClient::CancelOrganizationInvitation(const CancelOrganizationInvitationRequest &request)
{
    auto outcome = MakeRequest(request, "CancelOrganizationInvitation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelOrganizationInvitationResponse rsp = CancelOrganizationInvitationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelOrganizationInvitationOutcome(rsp);
        else
            return CancelOrganizationInvitationOutcome(o.GetError());
    }
    else
    {
        return CancelOrganizationInvitationOutcome(outcome.GetError());
    }
}

void OrganizationClient::CancelOrganizationInvitationAsync(const CancelOrganizationInvitationRequest& request, const CancelOrganizationInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelOrganizationInvitation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CancelOrganizationInvitationOutcomeCallable OrganizationClient::CancelOrganizationInvitationCallable(const CancelOrganizationInvitationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelOrganizationInvitationOutcome()>>(
        [this, request]()
        {
            return this->CancelOrganizationInvitation(request);
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

OrganizationClient::DeleteOrganizationMemberFromNodeOutcome OrganizationClient::DeleteOrganizationMemberFromNode(const DeleteOrganizationMemberFromNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationMemberFromNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationMemberFromNodeResponse rsp = DeleteOrganizationMemberFromNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationMemberFromNodeOutcome(rsp);
        else
            return DeleteOrganizationMemberFromNodeOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationMemberFromNodeOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrganizationMemberFromNodeAsync(const DeleteOrganizationMemberFromNodeRequest& request, const DeleteOrganizationMemberFromNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganizationMemberFromNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrganizationMemberFromNodeOutcomeCallable OrganizationClient::DeleteOrganizationMemberFromNodeCallable(const DeleteOrganizationMemberFromNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationMemberFromNodeOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganizationMemberFromNode(request);
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

OrganizationClient::DenyOrganizationInvitationOutcome OrganizationClient::DenyOrganizationInvitation(const DenyOrganizationInvitationRequest &request)
{
    auto outcome = MakeRequest(request, "DenyOrganizationInvitation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DenyOrganizationInvitationResponse rsp = DenyOrganizationInvitationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DenyOrganizationInvitationOutcome(rsp);
        else
            return DenyOrganizationInvitationOutcome(o.GetError());
    }
    else
    {
        return DenyOrganizationInvitationOutcome(outcome.GetError());
    }
}

void OrganizationClient::DenyOrganizationInvitationAsync(const DenyOrganizationInvitationRequest& request, const DenyOrganizationInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DenyOrganizationInvitation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DenyOrganizationInvitationOutcomeCallable OrganizationClient::DenyOrganizationInvitationCallable(const DenyOrganizationInvitationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DenyOrganizationInvitationOutcome()>>(
        [this, request]()
        {
            return this->DenyOrganizationInvitation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetOrganizationOutcome OrganizationClient::GetOrganization(const GetOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "GetOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOrganizationResponse rsp = GetOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOrganizationOutcome(rsp);
        else
            return GetOrganizationOutcome(o.GetError());
    }
    else
    {
        return GetOrganizationOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetOrganizationAsync(const GetOrganizationRequest& request, const GetOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetOrganizationOutcomeCallable OrganizationClient::GetOrganizationCallable(const GetOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOrganizationOutcome()>>(
        [this, request]()
        {
            return this->GetOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetOrganizationMemberOutcome OrganizationClient::GetOrganizationMember(const GetOrganizationMemberRequest &request)
{
    auto outcome = MakeRequest(request, "GetOrganizationMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOrganizationMemberResponse rsp = GetOrganizationMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOrganizationMemberOutcome(rsp);
        else
            return GetOrganizationMemberOutcome(o.GetError());
    }
    else
    {
        return GetOrganizationMemberOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetOrganizationMemberAsync(const GetOrganizationMemberRequest& request, const GetOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOrganizationMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetOrganizationMemberOutcomeCallable OrganizationClient::GetOrganizationMemberCallable(const GetOrganizationMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOrganizationMemberOutcome()>>(
        [this, request]()
        {
            return this->GetOrganizationMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListOrganizationInvitationsOutcome OrganizationClient::ListOrganizationInvitations(const ListOrganizationInvitationsRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrganizationInvitations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrganizationInvitationsResponse rsp = ListOrganizationInvitationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrganizationInvitationsOutcome(rsp);
        else
            return ListOrganizationInvitationsOutcome(o.GetError());
    }
    else
    {
        return ListOrganizationInvitationsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListOrganizationInvitationsAsync(const ListOrganizationInvitationsRequest& request, const ListOrganizationInvitationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrganizationInvitations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListOrganizationInvitationsOutcomeCallable OrganizationClient::ListOrganizationInvitationsCallable(const ListOrganizationInvitationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrganizationInvitationsOutcome()>>(
        [this, request]()
        {
            return this->ListOrganizationInvitations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListOrganizationMembersOutcome OrganizationClient::ListOrganizationMembers(const ListOrganizationMembersRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrganizationMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrganizationMembersResponse rsp = ListOrganizationMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrganizationMembersOutcome(rsp);
        else
            return ListOrganizationMembersOutcome(o.GetError());
    }
    else
    {
        return ListOrganizationMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListOrganizationMembersAsync(const ListOrganizationMembersRequest& request, const ListOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrganizationMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListOrganizationMembersOutcomeCallable OrganizationClient::ListOrganizationMembersCallable(const ListOrganizationMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrganizationMembersOutcome()>>(
        [this, request]()
        {
            return this->ListOrganizationMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListOrganizationNodeMembersOutcome OrganizationClient::ListOrganizationNodeMembers(const ListOrganizationNodeMembersRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrganizationNodeMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrganizationNodeMembersResponse rsp = ListOrganizationNodeMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrganizationNodeMembersOutcome(rsp);
        else
            return ListOrganizationNodeMembersOutcome(o.GetError());
    }
    else
    {
        return ListOrganizationNodeMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListOrganizationNodeMembersAsync(const ListOrganizationNodeMembersRequest& request, const ListOrganizationNodeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrganizationNodeMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListOrganizationNodeMembersOutcomeCallable OrganizationClient::ListOrganizationNodeMembersCallable(const ListOrganizationNodeMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrganizationNodeMembersOutcome()>>(
        [this, request]()
        {
            return this->ListOrganizationNodeMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListOrganizationNodesOutcome OrganizationClient::ListOrganizationNodes(const ListOrganizationNodesRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrganizationNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrganizationNodesResponse rsp = ListOrganizationNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrganizationNodesOutcome(rsp);
        else
            return ListOrganizationNodesOutcome(o.GetError());
    }
    else
    {
        return ListOrganizationNodesOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListOrganizationNodesAsync(const ListOrganizationNodesRequest& request, const ListOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrganizationNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListOrganizationNodesOutcomeCallable OrganizationClient::ListOrganizationNodesCallable(const ListOrganizationNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrganizationNodesOutcome()>>(
        [this, request]()
        {
            return this->ListOrganizationNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::MoveOrganizationMembersToNodeOutcome OrganizationClient::MoveOrganizationMembersToNode(const MoveOrganizationMembersToNodeRequest &request)
{
    auto outcome = MakeRequest(request, "MoveOrganizationMembersToNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MoveOrganizationMembersToNodeResponse rsp = MoveOrganizationMembersToNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MoveOrganizationMembersToNodeOutcome(rsp);
        else
            return MoveOrganizationMembersToNodeOutcome(o.GetError());
    }
    else
    {
        return MoveOrganizationMembersToNodeOutcome(outcome.GetError());
    }
}

void OrganizationClient::MoveOrganizationMembersToNodeAsync(const MoveOrganizationMembersToNodeRequest& request, const MoveOrganizationMembersToNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MoveOrganizationMembersToNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::MoveOrganizationMembersToNodeOutcomeCallable OrganizationClient::MoveOrganizationMembersToNodeCallable(const MoveOrganizationMembersToNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MoveOrganizationMembersToNodeOutcome()>>(
        [this, request]()
        {
            return this->MoveOrganizationMembersToNode(request);
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

OrganizationClient::SendOrganizationInvitationOutcome OrganizationClient::SendOrganizationInvitation(const SendOrganizationInvitationRequest &request)
{
    auto outcome = MakeRequest(request, "SendOrganizationInvitation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendOrganizationInvitationResponse rsp = SendOrganizationInvitationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendOrganizationInvitationOutcome(rsp);
        else
            return SendOrganizationInvitationOutcome(o.GetError());
    }
    else
    {
        return SendOrganizationInvitationOutcome(outcome.GetError());
    }
}

void OrganizationClient::SendOrganizationInvitationAsync(const SendOrganizationInvitationRequest& request, const SendOrganizationInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendOrganizationInvitation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::SendOrganizationInvitationOutcomeCallable OrganizationClient::SendOrganizationInvitationCallable(const SendOrganizationInvitationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendOrganizationInvitationOutcome()>>(
        [this, request]()
        {
            return this->SendOrganizationInvitation(request);
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


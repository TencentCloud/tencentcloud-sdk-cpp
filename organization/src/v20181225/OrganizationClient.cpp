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
    using Req = const AcceptOrganizationInvitationRequest&;
    using Resp = AcceptOrganizationInvitationResponse;

    DoRequestAsync<Req, Resp>(
        "AcceptOrganizationInvitation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AcceptOrganizationInvitationOutcomeCallable OrganizationClient::AcceptOrganizationInvitationCallable(const AcceptOrganizationInvitationRequest &request)
{
    const auto prom = std::make_shared<std::promise<AcceptOrganizationInvitationOutcome>>();
    AcceptOrganizationInvitationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AcceptOrganizationInvitationRequest&,
        AcceptOrganizationInvitationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddOrganizationNodeRequest&;
    using Resp = AddOrganizationNodeResponse;

    DoRequestAsync<Req, Resp>(
        "AddOrganizationNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AddOrganizationNodeOutcomeCallable OrganizationClient::AddOrganizationNodeCallable(const AddOrganizationNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddOrganizationNodeOutcome>>();
    AddOrganizationNodeAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AddOrganizationNodeRequest&,
        AddOrganizationNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelOrganizationInvitationRequest&;
    using Resp = CancelOrganizationInvitationResponse;

    DoRequestAsync<Req, Resp>(
        "CancelOrganizationInvitation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CancelOrganizationInvitationOutcomeCallable OrganizationClient::CancelOrganizationInvitationCallable(const CancelOrganizationInvitationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelOrganizationInvitationOutcome>>();
    CancelOrganizationInvitationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CancelOrganizationInvitationRequest&,
        CancelOrganizationInvitationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateOrganizationRequest&;
    using Resp = CreateOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateOrganizationOutcomeCallable OrganizationClient::CreateOrganizationCallable(const CreateOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationOutcome>>();
    CreateOrganizationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateOrganizationRequest&,
        CreateOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteOrganizationRequest&;
    using Resp = DeleteOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteOrganizationOutcomeCallable OrganizationClient::DeleteOrganizationCallable(const DeleteOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrganizationOutcome>>();
    DeleteOrganizationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteOrganizationRequest&,
        DeleteOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteOrganizationMemberFromNodeRequest&;
    using Resp = DeleteOrganizationMemberFromNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrganizationMemberFromNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteOrganizationMemberFromNodeOutcomeCallable OrganizationClient::DeleteOrganizationMemberFromNodeCallable(const DeleteOrganizationMemberFromNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrganizationMemberFromNodeOutcome>>();
    DeleteOrganizationMemberFromNodeAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteOrganizationMemberFromNodeRequest&,
        DeleteOrganizationMemberFromNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteOrganizationMembersRequest&;
    using Resp = DeleteOrganizationMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrganizationMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteOrganizationMembersOutcomeCallable OrganizationClient::DeleteOrganizationMembersCallable(const DeleteOrganizationMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrganizationMembersOutcome>>();
    DeleteOrganizationMembersAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteOrganizationMembersRequest&,
        DeleteOrganizationMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteOrganizationNodesRequest&;
    using Resp = DeleteOrganizationNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrganizationNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteOrganizationNodesOutcomeCallable OrganizationClient::DeleteOrganizationNodesCallable(const DeleteOrganizationNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrganizationNodesOutcome>>();
    DeleteOrganizationNodesAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteOrganizationNodesRequest&,
        DeleteOrganizationNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DenyOrganizationInvitationRequest&;
    using Resp = DenyOrganizationInvitationResponse;

    DoRequestAsync<Req, Resp>(
        "DenyOrganizationInvitation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DenyOrganizationInvitationOutcomeCallable OrganizationClient::DenyOrganizationInvitationCallable(const DenyOrganizationInvitationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DenyOrganizationInvitationOutcome>>();
    DenyOrganizationInvitationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DenyOrganizationInvitationRequest&,
        DenyOrganizationInvitationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetOrganizationRequest&;
    using Resp = GetOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "GetOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetOrganizationOutcomeCallable OrganizationClient::GetOrganizationCallable(const GetOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOrganizationOutcome>>();
    GetOrganizationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetOrganizationRequest&,
        GetOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetOrganizationMemberRequest&;
    using Resp = GetOrganizationMemberResponse;

    DoRequestAsync<Req, Resp>(
        "GetOrganizationMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetOrganizationMemberOutcomeCallable OrganizationClient::GetOrganizationMemberCallable(const GetOrganizationMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOrganizationMemberOutcome>>();
    GetOrganizationMemberAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetOrganizationMemberRequest&,
        GetOrganizationMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListOrganizationInvitationsRequest&;
    using Resp = ListOrganizationInvitationsResponse;

    DoRequestAsync<Req, Resp>(
        "ListOrganizationInvitations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListOrganizationInvitationsOutcomeCallable OrganizationClient::ListOrganizationInvitationsCallable(const ListOrganizationInvitationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOrganizationInvitationsOutcome>>();
    ListOrganizationInvitationsAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListOrganizationInvitationsRequest&,
        ListOrganizationInvitationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListOrganizationMembersRequest&;
    using Resp = ListOrganizationMembersResponse;

    DoRequestAsync<Req, Resp>(
        "ListOrganizationMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListOrganizationMembersOutcomeCallable OrganizationClient::ListOrganizationMembersCallable(const ListOrganizationMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOrganizationMembersOutcome>>();
    ListOrganizationMembersAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListOrganizationMembersRequest&,
        ListOrganizationMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListOrganizationNodeMembersRequest&;
    using Resp = ListOrganizationNodeMembersResponse;

    DoRequestAsync<Req, Resp>(
        "ListOrganizationNodeMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListOrganizationNodeMembersOutcomeCallable OrganizationClient::ListOrganizationNodeMembersCallable(const ListOrganizationNodeMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOrganizationNodeMembersOutcome>>();
    ListOrganizationNodeMembersAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListOrganizationNodeMembersRequest&,
        ListOrganizationNodeMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListOrganizationNodesRequest&;
    using Resp = ListOrganizationNodesResponse;

    DoRequestAsync<Req, Resp>(
        "ListOrganizationNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListOrganizationNodesOutcomeCallable OrganizationClient::ListOrganizationNodesCallable(const ListOrganizationNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOrganizationNodesOutcome>>();
    ListOrganizationNodesAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListOrganizationNodesRequest&,
        ListOrganizationNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const MoveOrganizationMembersToNodeRequest&;
    using Resp = MoveOrganizationMembersToNodeResponse;

    DoRequestAsync<Req, Resp>(
        "MoveOrganizationMembersToNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::MoveOrganizationMembersToNodeOutcomeCallable OrganizationClient::MoveOrganizationMembersToNodeCallable(const MoveOrganizationMembersToNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<MoveOrganizationMembersToNodeOutcome>>();
    MoveOrganizationMembersToNodeAsync(
    request,
    [prom](
        const OrganizationClient*,
        const MoveOrganizationMembersToNodeRequest&,
        MoveOrganizationMembersToNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QuitOrganizationRequest&;
    using Resp = QuitOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "QuitOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::QuitOrganizationOutcomeCallable OrganizationClient::QuitOrganizationCallable(const QuitOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<QuitOrganizationOutcome>>();
    QuitOrganizationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const QuitOrganizationRequest&,
        QuitOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SendOrganizationInvitationRequest&;
    using Resp = SendOrganizationInvitationResponse;

    DoRequestAsync<Req, Resp>(
        "SendOrganizationInvitation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::SendOrganizationInvitationOutcomeCallable OrganizationClient::SendOrganizationInvitationCallable(const SendOrganizationInvitationRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendOrganizationInvitationOutcome>>();
    SendOrganizationInvitationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const SendOrganizationInvitationRequest&,
        SendOrganizationInvitationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateOrganizationMemberRequest&;
    using Resp = UpdateOrganizationMemberResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOrganizationMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateOrganizationMemberOutcomeCallable OrganizationClient::UpdateOrganizationMemberCallable(const UpdateOrganizationMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOrganizationMemberOutcome>>();
    UpdateOrganizationMemberAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateOrganizationMemberRequest&,
        UpdateOrganizationMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateOrganizationNodeRequest&;
    using Resp = UpdateOrganizationNodeResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOrganizationNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateOrganizationNodeOutcomeCallable OrganizationClient::UpdateOrganizationNodeCallable(const UpdateOrganizationNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOrganizationNodeOutcome>>();
    UpdateOrganizationNodeAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateOrganizationNodeRequest&,
        UpdateOrganizationNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


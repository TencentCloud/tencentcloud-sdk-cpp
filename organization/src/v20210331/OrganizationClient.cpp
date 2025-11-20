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
    using Req = const AcceptJoinShareUnitInvitationRequest&;
    using Resp = AcceptJoinShareUnitInvitationResponse;

    DoRequestAsync<Req, Resp>(
        "AcceptJoinShareUnitInvitation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AcceptJoinShareUnitInvitationOutcomeCallable OrganizationClient::AcceptJoinShareUnitInvitationCallable(const AcceptJoinShareUnitInvitationRequest &request)
{
    const auto prom = std::make_shared<std::promise<AcceptJoinShareUnitInvitationOutcome>>();
    AcceptJoinShareUnitInvitationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AcceptJoinShareUnitInvitationRequest&,
        AcceptJoinShareUnitInvitationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::AddExternalSAMLIdPCertificateOutcome OrganizationClient::AddExternalSAMLIdPCertificate(const AddExternalSAMLIdPCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "AddExternalSAMLIdPCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddExternalSAMLIdPCertificateResponse rsp = AddExternalSAMLIdPCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddExternalSAMLIdPCertificateOutcome(rsp);
        else
            return AddExternalSAMLIdPCertificateOutcome(o.GetError());
    }
    else
    {
        return AddExternalSAMLIdPCertificateOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddExternalSAMLIdPCertificateAsync(const AddExternalSAMLIdPCertificateRequest& request, const AddExternalSAMLIdPCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddExternalSAMLIdPCertificateRequest&;
    using Resp = AddExternalSAMLIdPCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "AddExternalSAMLIdPCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AddExternalSAMLIdPCertificateOutcomeCallable OrganizationClient::AddExternalSAMLIdPCertificateCallable(const AddExternalSAMLIdPCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddExternalSAMLIdPCertificateOutcome>>();
    AddExternalSAMLIdPCertificateAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AddExternalSAMLIdPCertificateRequest&,
        AddExternalSAMLIdPCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddOrganizationMemberEmailRequest&;
    using Resp = AddOrganizationMemberEmailResponse;

    DoRequestAsync<Req, Resp>(
        "AddOrganizationMemberEmail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AddOrganizationMemberEmailOutcomeCallable OrganizationClient::AddOrganizationMemberEmailCallable(const AddOrganizationMemberEmailRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddOrganizationMemberEmailOutcome>>();
    AddOrganizationMemberEmailAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AddOrganizationMemberEmailRequest&,
        AddOrganizationMemberEmailOutcome resp,
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

OrganizationClient::AddPermissionPolicyToRoleConfigurationOutcome OrganizationClient::AddPermissionPolicyToRoleConfiguration(const AddPermissionPolicyToRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "AddPermissionPolicyToRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddPermissionPolicyToRoleConfigurationResponse rsp = AddPermissionPolicyToRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddPermissionPolicyToRoleConfigurationOutcome(rsp);
        else
            return AddPermissionPolicyToRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return AddPermissionPolicyToRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddPermissionPolicyToRoleConfigurationAsync(const AddPermissionPolicyToRoleConfigurationRequest& request, const AddPermissionPolicyToRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddPermissionPolicyToRoleConfigurationRequest&;
    using Resp = AddPermissionPolicyToRoleConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "AddPermissionPolicyToRoleConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AddPermissionPolicyToRoleConfigurationOutcomeCallable OrganizationClient::AddPermissionPolicyToRoleConfigurationCallable(const AddPermissionPolicyToRoleConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddPermissionPolicyToRoleConfigurationOutcome>>();
    AddPermissionPolicyToRoleConfigurationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AddPermissionPolicyToRoleConfigurationRequest&,
        AddPermissionPolicyToRoleConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddShareUnitRequest&;
    using Resp = AddShareUnitResponse;

    DoRequestAsync<Req, Resp>(
        "AddShareUnit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AddShareUnitOutcomeCallable OrganizationClient::AddShareUnitCallable(const AddShareUnitRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddShareUnitOutcome>>();
    AddShareUnitAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AddShareUnitRequest&,
        AddShareUnitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddShareUnitMembersRequest&;
    using Resp = AddShareUnitMembersResponse;

    DoRequestAsync<Req, Resp>(
        "AddShareUnitMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AddShareUnitMembersOutcomeCallable OrganizationClient::AddShareUnitMembersCallable(const AddShareUnitMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddShareUnitMembersOutcome>>();
    AddShareUnitMembersAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AddShareUnitMembersRequest&,
        AddShareUnitMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddShareUnitResourcesRequest&;
    using Resp = AddShareUnitResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "AddShareUnitResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AddShareUnitResourcesOutcomeCallable OrganizationClient::AddShareUnitResourcesCallable(const AddShareUnitResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddShareUnitResourcesOutcome>>();
    AddShareUnitResourcesAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AddShareUnitResourcesRequest&,
        AddShareUnitResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::AddUserToGroupOutcome OrganizationClient::AddUserToGroup(const AddUserToGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddUserToGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserToGroupResponse rsp = AddUserToGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserToGroupOutcome(rsp);
        else
            return AddUserToGroupOutcome(o.GetError());
    }
    else
    {
        return AddUserToGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddUserToGroupAsync(const AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddUserToGroupRequest&;
    using Resp = AddUserToGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AddUserToGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AddUserToGroupOutcomeCallable OrganizationClient::AddUserToGroupCallable(const AddUserToGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUserToGroupOutcome>>();
    AddUserToGroupAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AddUserToGroupRequest&,
        AddUserToGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AttachPolicyRequest&;
    using Resp = AttachPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AttachPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::AttachPolicyOutcomeCallable OrganizationClient::AttachPolicyCallable(const AttachPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachPolicyOutcome>>();
    AttachPolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const AttachPolicyRequest&,
        AttachPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindOrganizationMemberAuthAccountRequest&;
    using Resp = BindOrganizationMemberAuthAccountResponse;

    DoRequestAsync<Req, Resp>(
        "BindOrganizationMemberAuthAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::BindOrganizationMemberAuthAccountOutcomeCallable OrganizationClient::BindOrganizationMemberAuthAccountCallable(const BindOrganizationMemberAuthAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindOrganizationMemberAuthAccountOutcome>>();
    BindOrganizationMemberAuthAccountAsync(
    request,
    [prom](
        const OrganizationClient*,
        const BindOrganizationMemberAuthAccountRequest&,
        BindOrganizationMemberAuthAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::BindOrganizationPolicySubAccountOutcome OrganizationClient::BindOrganizationPolicySubAccount(const BindOrganizationPolicySubAccountRequest &request)
{
    auto outcome = MakeRequest(request, "BindOrganizationPolicySubAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindOrganizationPolicySubAccountResponse rsp = BindOrganizationPolicySubAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindOrganizationPolicySubAccountOutcome(rsp);
        else
            return BindOrganizationPolicySubAccountOutcome(o.GetError());
    }
    else
    {
        return BindOrganizationPolicySubAccountOutcome(outcome.GetError());
    }
}

void OrganizationClient::BindOrganizationPolicySubAccountAsync(const BindOrganizationPolicySubAccountRequest& request, const BindOrganizationPolicySubAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindOrganizationPolicySubAccountRequest&;
    using Resp = BindOrganizationPolicySubAccountResponse;

    DoRequestAsync<Req, Resp>(
        "BindOrganizationPolicySubAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::BindOrganizationPolicySubAccountOutcomeCallable OrganizationClient::BindOrganizationPolicySubAccountCallable(const BindOrganizationPolicySubAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindOrganizationPolicySubAccountOutcome>>();
    BindOrganizationPolicySubAccountAsync(
    request,
    [prom](
        const OrganizationClient*,
        const BindOrganizationPolicySubAccountRequest&,
        BindOrganizationPolicySubAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelOrganizationMemberAuthAccountRequest&;
    using Resp = CancelOrganizationMemberAuthAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CancelOrganizationMemberAuthAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CancelOrganizationMemberAuthAccountOutcomeCallable OrganizationClient::CancelOrganizationMemberAuthAccountCallable(const CancelOrganizationMemberAuthAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelOrganizationMemberAuthAccountOutcome>>();
    CancelOrganizationMemberAuthAccountAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CancelOrganizationMemberAuthAccountRequest&,
        CancelOrganizationMemberAuthAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::CancelOrganizationPolicySubAccountOutcome OrganizationClient::CancelOrganizationPolicySubAccount(const CancelOrganizationPolicySubAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CancelOrganizationPolicySubAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelOrganizationPolicySubAccountResponse rsp = CancelOrganizationPolicySubAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelOrganizationPolicySubAccountOutcome(rsp);
        else
            return CancelOrganizationPolicySubAccountOutcome(o.GetError());
    }
    else
    {
        return CancelOrganizationPolicySubAccountOutcome(outcome.GetError());
    }
}

void OrganizationClient::CancelOrganizationPolicySubAccountAsync(const CancelOrganizationPolicySubAccountRequest& request, const CancelOrganizationPolicySubAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelOrganizationPolicySubAccountRequest&;
    using Resp = CancelOrganizationPolicySubAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CancelOrganizationPolicySubAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CancelOrganizationPolicySubAccountOutcomeCallable OrganizationClient::CancelOrganizationPolicySubAccountCallable(const CancelOrganizationPolicySubAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelOrganizationPolicySubAccountOutcome>>();
    CancelOrganizationPolicySubAccountAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CancelOrganizationPolicySubAccountRequest&,
        CancelOrganizationPolicySubAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CheckAccountDeleteRequest&;
    using Resp = CheckAccountDeleteResponse;

    DoRequestAsync<Req, Resp>(
        "CheckAccountDelete", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CheckAccountDeleteOutcomeCallable OrganizationClient::CheckAccountDeleteCallable(const CheckAccountDeleteRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckAccountDeleteOutcome>>();
    CheckAccountDeleteAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CheckAccountDeleteRequest&,
        CheckAccountDeleteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ClearExternalSAMLIdentityProviderOutcome OrganizationClient::ClearExternalSAMLIdentityProvider(const ClearExternalSAMLIdentityProviderRequest &request)
{
    auto outcome = MakeRequest(request, "ClearExternalSAMLIdentityProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearExternalSAMLIdentityProviderResponse rsp = ClearExternalSAMLIdentityProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearExternalSAMLIdentityProviderOutcome(rsp);
        else
            return ClearExternalSAMLIdentityProviderOutcome(o.GetError());
    }
    else
    {
        return ClearExternalSAMLIdentityProviderOutcome(outcome.GetError());
    }
}

void OrganizationClient::ClearExternalSAMLIdentityProviderAsync(const ClearExternalSAMLIdentityProviderRequest& request, const ClearExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClearExternalSAMLIdentityProviderRequest&;
    using Resp = ClearExternalSAMLIdentityProviderResponse;

    DoRequestAsync<Req, Resp>(
        "ClearExternalSAMLIdentityProvider", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ClearExternalSAMLIdentityProviderOutcomeCallable OrganizationClient::ClearExternalSAMLIdentityProviderCallable(const ClearExternalSAMLIdentityProviderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClearExternalSAMLIdentityProviderOutcome>>();
    ClearExternalSAMLIdentityProviderAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ClearExternalSAMLIdentityProviderRequest&,
        ClearExternalSAMLIdentityProviderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::CreateGroupOutcome OrganizationClient::CreateGroup(const CreateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupResponse rsp = CreateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupOutcome(rsp);
        else
            return CreateGroupOutcome(o.GetError());
    }
    else
    {
        return CreateGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGroupRequest&;
    using Resp = CreateGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateGroupOutcomeCallable OrganizationClient::CreateGroupCallable(const CreateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGroupOutcome>>();
    CreateGroupAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateGroupRequest&,
        CreateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateOrgServiceAssignRequest&;
    using Resp = CreateOrgServiceAssignResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrgServiceAssign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateOrgServiceAssignOutcomeCallable OrganizationClient::CreateOrgServiceAssignCallable(const CreateOrgServiceAssignRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrgServiceAssignOutcome>>();
    CreateOrgServiceAssignAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateOrgServiceAssignRequest&,
        CreateOrgServiceAssignOutcome resp,
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
    using Req = const CreateOrganizationIdentityRequest&;
    using Resp = CreateOrganizationIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateOrganizationIdentityOutcomeCallable OrganizationClient::CreateOrganizationIdentityCallable(const CreateOrganizationIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationIdentityOutcome>>();
    CreateOrganizationIdentityAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateOrganizationIdentityRequest&,
        CreateOrganizationIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateOrganizationMemberRequest&;
    using Resp = CreateOrganizationMemberResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateOrganizationMemberOutcomeCallable OrganizationClient::CreateOrganizationMemberCallable(const CreateOrganizationMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationMemberOutcome>>();
    CreateOrganizationMemberAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateOrganizationMemberRequest&,
        CreateOrganizationMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateOrganizationMemberAuthIdentityRequest&;
    using Resp = CreateOrganizationMemberAuthIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationMemberAuthIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateOrganizationMemberAuthIdentityOutcomeCallable OrganizationClient::CreateOrganizationMemberAuthIdentityCallable(const CreateOrganizationMemberAuthIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationMemberAuthIdentityOutcome>>();
    CreateOrganizationMemberAuthIdentityAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateOrganizationMemberAuthIdentityRequest&,
        CreateOrganizationMemberAuthIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateOrganizationMemberPolicyRequest&;
    using Resp = CreateOrganizationMemberPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationMemberPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateOrganizationMemberPolicyOutcomeCallable OrganizationClient::CreateOrganizationMemberPolicyCallable(const CreateOrganizationMemberPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationMemberPolicyOutcome>>();
    CreateOrganizationMemberPolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateOrganizationMemberPolicyRequest&,
        CreateOrganizationMemberPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateOrganizationMembersPolicyRequest&;
    using Resp = CreateOrganizationMembersPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrganizationMembersPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateOrganizationMembersPolicyOutcomeCallable OrganizationClient::CreateOrganizationMembersPolicyCallable(const CreateOrganizationMembersPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrganizationMembersPolicyOutcome>>();
    CreateOrganizationMembersPolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateOrganizationMembersPolicyRequest&,
        CreateOrganizationMembersPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePolicyRequest&;
    using Resp = CreatePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreatePolicyOutcomeCallable OrganizationClient::CreatePolicyCallable(const CreatePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePolicyOutcome>>();
    CreatePolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreatePolicyRequest&,
        CreatePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::CreateRoleAssignmentOutcome OrganizationClient::CreateRoleAssignment(const CreateRoleAssignmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoleAssignment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoleAssignmentResponse rsp = CreateRoleAssignmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoleAssignmentOutcome(rsp);
        else
            return CreateRoleAssignmentOutcome(o.GetError());
    }
    else
    {
        return CreateRoleAssignmentOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateRoleAssignmentAsync(const CreateRoleAssignmentRequest& request, const CreateRoleAssignmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoleAssignmentRequest&;
    using Resp = CreateRoleAssignmentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoleAssignment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateRoleAssignmentOutcomeCallable OrganizationClient::CreateRoleAssignmentCallable(const CreateRoleAssignmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoleAssignmentOutcome>>();
    CreateRoleAssignmentAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateRoleAssignmentRequest&,
        CreateRoleAssignmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::CreateRoleConfigurationOutcome OrganizationClient::CreateRoleConfiguration(const CreateRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoleConfigurationResponse rsp = CreateRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoleConfigurationOutcome(rsp);
        else
            return CreateRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return CreateRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateRoleConfigurationAsync(const CreateRoleConfigurationRequest& request, const CreateRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoleConfigurationRequest&;
    using Resp = CreateRoleConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoleConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateRoleConfigurationOutcomeCallable OrganizationClient::CreateRoleConfigurationCallable(const CreateRoleConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoleConfigurationOutcome>>();
    CreateRoleConfigurationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateRoleConfigurationRequest&,
        CreateRoleConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::CreateSCIMCredentialOutcome OrganizationClient::CreateSCIMCredential(const CreateSCIMCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSCIMCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSCIMCredentialResponse rsp = CreateSCIMCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSCIMCredentialOutcome(rsp);
        else
            return CreateSCIMCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateSCIMCredentialOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateSCIMCredentialAsync(const CreateSCIMCredentialRequest& request, const CreateSCIMCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSCIMCredentialRequest&;
    using Resp = CreateSCIMCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSCIMCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateSCIMCredentialOutcomeCallable OrganizationClient::CreateSCIMCredentialCallable(const CreateSCIMCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSCIMCredentialOutcome>>();
    CreateSCIMCredentialAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateSCIMCredentialRequest&,
        CreateSCIMCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::CreateUserOutcome OrganizationClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserRequest&;
    using Resp = CreateUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateUserOutcomeCallable OrganizationClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::CreateUserSyncProvisioningOutcome OrganizationClient::CreateUserSyncProvisioning(const CreateUserSyncProvisioningRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserSyncProvisioning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserSyncProvisioningResponse rsp = CreateUserSyncProvisioningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserSyncProvisioningOutcome(rsp);
        else
            return CreateUserSyncProvisioningOutcome(o.GetError());
    }
    else
    {
        return CreateUserSyncProvisioningOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateUserSyncProvisioningAsync(const CreateUserSyncProvisioningRequest& request, const CreateUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserSyncProvisioningRequest&;
    using Resp = CreateUserSyncProvisioningResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserSyncProvisioning", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::CreateUserSyncProvisioningOutcomeCallable OrganizationClient::CreateUserSyncProvisioningCallable(const CreateUserSyncProvisioningRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserSyncProvisioningOutcome>>();
    CreateUserSyncProvisioningAsync(
    request,
    [prom](
        const OrganizationClient*,
        const CreateUserSyncProvisioningRequest&,
        CreateUserSyncProvisioningOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAccountRequest&;
    using Resp = DeleteAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteAccountOutcomeCallable OrganizationClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccountOutcome>>();
    DeleteAccountAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteAccountRequest&,
        DeleteAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::DeleteGroupOutcome OrganizationClient::DeleteGroup(const DeleteGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGroupResponse rsp = DeleteGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGroupOutcome(rsp);
        else
            return DeleteGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGroupRequest&;
    using Resp = DeleteGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteGroupOutcomeCallable OrganizationClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGroupOutcome>>();
    DeleteGroupAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteGroupRequest&,
        DeleteGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteOrgServiceAssignRequest&;
    using Resp = DeleteOrgServiceAssignResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrgServiceAssign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteOrgServiceAssignOutcomeCallable OrganizationClient::DeleteOrgServiceAssignCallable(const DeleteOrgServiceAssignRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrgServiceAssignOutcome>>();
    DeleteOrgServiceAssignAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteOrgServiceAssignRequest&,
        DeleteOrgServiceAssignOutcome resp,
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
    using Req = const DeleteOrganizationIdentityRequest&;
    using Resp = DeleteOrganizationIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrganizationIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteOrganizationIdentityOutcomeCallable OrganizationClient::DeleteOrganizationIdentityCallable(const DeleteOrganizationIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrganizationIdentityOutcome>>();
    DeleteOrganizationIdentityAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteOrganizationIdentityRequest&,
        DeleteOrganizationIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteOrganizationMemberAuthIdentityRequest&;
    using Resp = DeleteOrganizationMemberAuthIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrganizationMemberAuthIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteOrganizationMemberAuthIdentityOutcomeCallable OrganizationClient::DeleteOrganizationMemberAuthIdentityCallable(const DeleteOrganizationMemberAuthIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrganizationMemberAuthIdentityOutcome>>();
    DeleteOrganizationMemberAuthIdentityAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteOrganizationMemberAuthIdentityRequest&,
        DeleteOrganizationMemberAuthIdentityOutcome resp,
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
    using Req = const DeleteOrganizationMembersPolicyRequest&;
    using Resp = DeleteOrganizationMembersPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrganizationMembersPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteOrganizationMembersPolicyOutcomeCallable OrganizationClient::DeleteOrganizationMembersPolicyCallable(const DeleteOrganizationMembersPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrganizationMembersPolicyOutcome>>();
    DeleteOrganizationMembersPolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteOrganizationMembersPolicyRequest&,
        DeleteOrganizationMembersPolicyOutcome resp,
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
    using Req = const DeletePolicyRequest&;
    using Resp = DeletePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeletePolicyOutcomeCallable OrganizationClient::DeletePolicyCallable(const DeletePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePolicyOutcome>>();
    DeletePolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeletePolicyRequest&,
        DeletePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::DeleteRoleAssignmentOutcome OrganizationClient::DeleteRoleAssignment(const DeleteRoleAssignmentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoleAssignment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoleAssignmentResponse rsp = DeleteRoleAssignmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoleAssignmentOutcome(rsp);
        else
            return DeleteRoleAssignmentOutcome(o.GetError());
    }
    else
    {
        return DeleteRoleAssignmentOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteRoleAssignmentAsync(const DeleteRoleAssignmentRequest& request, const DeleteRoleAssignmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoleAssignmentRequest&;
    using Resp = DeleteRoleAssignmentResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoleAssignment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteRoleAssignmentOutcomeCallable OrganizationClient::DeleteRoleAssignmentCallable(const DeleteRoleAssignmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoleAssignmentOutcome>>();
    DeleteRoleAssignmentAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteRoleAssignmentRequest&,
        DeleteRoleAssignmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::DeleteRoleConfigurationOutcome OrganizationClient::DeleteRoleConfiguration(const DeleteRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoleConfigurationResponse rsp = DeleteRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoleConfigurationOutcome(rsp);
        else
            return DeleteRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return DeleteRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteRoleConfigurationAsync(const DeleteRoleConfigurationRequest& request, const DeleteRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoleConfigurationRequest&;
    using Resp = DeleteRoleConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoleConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteRoleConfigurationOutcomeCallable OrganizationClient::DeleteRoleConfigurationCallable(const DeleteRoleConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoleConfigurationOutcome>>();
    DeleteRoleConfigurationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteRoleConfigurationRequest&,
        DeleteRoleConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::DeleteSCIMCredentialOutcome OrganizationClient::DeleteSCIMCredential(const DeleteSCIMCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSCIMCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSCIMCredentialResponse rsp = DeleteSCIMCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSCIMCredentialOutcome(rsp);
        else
            return DeleteSCIMCredentialOutcome(o.GetError());
    }
    else
    {
        return DeleteSCIMCredentialOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteSCIMCredentialAsync(const DeleteSCIMCredentialRequest& request, const DeleteSCIMCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSCIMCredentialRequest&;
    using Resp = DeleteSCIMCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSCIMCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteSCIMCredentialOutcomeCallable OrganizationClient::DeleteSCIMCredentialCallable(const DeleteSCIMCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSCIMCredentialOutcome>>();
    DeleteSCIMCredentialAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteSCIMCredentialRequest&,
        DeleteSCIMCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteShareUnitRequest&;
    using Resp = DeleteShareUnitResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteShareUnit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteShareUnitOutcomeCallable OrganizationClient::DeleteShareUnitCallable(const DeleteShareUnitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteShareUnitOutcome>>();
    DeleteShareUnitAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteShareUnitRequest&,
        DeleteShareUnitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteShareUnitMembersRequest&;
    using Resp = DeleteShareUnitMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteShareUnitMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteShareUnitMembersOutcomeCallable OrganizationClient::DeleteShareUnitMembersCallable(const DeleteShareUnitMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteShareUnitMembersOutcome>>();
    DeleteShareUnitMembersAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteShareUnitMembersRequest&,
        DeleteShareUnitMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteShareUnitResourcesRequest&;
    using Resp = DeleteShareUnitResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteShareUnitResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteShareUnitResourcesOutcomeCallable OrganizationClient::DeleteShareUnitResourcesCallable(const DeleteShareUnitResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteShareUnitResourcesOutcome>>();
    DeleteShareUnitResourcesAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteShareUnitResourcesRequest&,
        DeleteShareUnitResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::DeleteUserOutcome OrganizationClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserRequest&;
    using Resp = DeleteUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteUserOutcomeCallable OrganizationClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::DeleteUserSyncProvisioningOutcome OrganizationClient::DeleteUserSyncProvisioning(const DeleteUserSyncProvisioningRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserSyncProvisioning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserSyncProvisioningResponse rsp = DeleteUserSyncProvisioningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserSyncProvisioningOutcome(rsp);
        else
            return DeleteUserSyncProvisioningOutcome(o.GetError());
    }
    else
    {
        return DeleteUserSyncProvisioningOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteUserSyncProvisioningAsync(const DeleteUserSyncProvisioningRequest& request, const DeleteUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserSyncProvisioningRequest&;
    using Resp = DeleteUserSyncProvisioningResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserSyncProvisioning", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DeleteUserSyncProvisioningOutcomeCallable OrganizationClient::DeleteUserSyncProvisioningCallable(const DeleteUserSyncProvisioningRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserSyncProvisioningOutcome>>();
    DeleteUserSyncProvisioningAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DeleteUserSyncProvisioningRequest&,
        DeleteUserSyncProvisioningOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeEffectivePolicyRequest&;
    using Resp = DescribeEffectivePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEffectivePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeEffectivePolicyOutcomeCallable OrganizationClient::DescribeEffectivePolicyCallable(const DescribeEffectivePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEffectivePolicyOutcome>>();
    DescribeEffectivePolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeEffectivePolicyRequest&,
        DescribeEffectivePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::DescribeIdentityCenterOutcome OrganizationClient::DescribeIdentityCenter(const DescribeIdentityCenterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdentityCenter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdentityCenterResponse rsp = DescribeIdentityCenterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdentityCenterOutcome(rsp);
        else
            return DescribeIdentityCenterOutcome(o.GetError());
    }
    else
    {
        return DescribeIdentityCenterOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeIdentityCenterAsync(const DescribeIdentityCenterRequest& request, const DescribeIdentityCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIdentityCenterRequest&;
    using Resp = DescribeIdentityCenterResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIdentityCenter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeIdentityCenterOutcomeCallable OrganizationClient::DescribeIdentityCenterCallable(const DescribeIdentityCenterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIdentityCenterOutcome>>();
    DescribeIdentityCenterAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeIdentityCenterRequest&,
        DescribeIdentityCenterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationRequest&;
    using Resp = DescribeOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationOutcomeCallable OrganizationClient::DescribeOrganizationCallable(const DescribeOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationOutcome>>();
    DescribeOrganizationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationRequest&,
        DescribeOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationAuthNodeRequest&;
    using Resp = DescribeOrganizationAuthNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationAuthNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationAuthNodeOutcomeCallable OrganizationClient::DescribeOrganizationAuthNodeCallable(const DescribeOrganizationAuthNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationAuthNodeOutcome>>();
    DescribeOrganizationAuthNodeAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationAuthNodeRequest&,
        DescribeOrganizationAuthNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationFinancialByMemberRequest&;
    using Resp = DescribeOrganizationFinancialByMemberResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationFinancialByMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationFinancialByMemberOutcomeCallable OrganizationClient::DescribeOrganizationFinancialByMemberCallable(const DescribeOrganizationFinancialByMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationFinancialByMemberOutcome>>();
    DescribeOrganizationFinancialByMemberAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationFinancialByMemberRequest&,
        DescribeOrganizationFinancialByMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationFinancialByMonthRequest&;
    using Resp = DescribeOrganizationFinancialByMonthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationFinancialByMonth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationFinancialByMonthOutcomeCallable OrganizationClient::DescribeOrganizationFinancialByMonthCallable(const DescribeOrganizationFinancialByMonthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationFinancialByMonthOutcome>>();
    DescribeOrganizationFinancialByMonthAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationFinancialByMonthRequest&,
        DescribeOrganizationFinancialByMonthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationFinancialByProductRequest&;
    using Resp = DescribeOrganizationFinancialByProductResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationFinancialByProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationFinancialByProductOutcomeCallable OrganizationClient::DescribeOrganizationFinancialByProductCallable(const DescribeOrganizationFinancialByProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationFinancialByProductOutcome>>();
    DescribeOrganizationFinancialByProductAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationFinancialByProductRequest&,
        DescribeOrganizationFinancialByProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationMemberAuthAccountsRequest&;
    using Resp = DescribeOrganizationMemberAuthAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationMemberAuthAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationMemberAuthAccountsOutcomeCallable OrganizationClient::DescribeOrganizationMemberAuthAccountsCallable(const DescribeOrganizationMemberAuthAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationMemberAuthAccountsOutcome>>();
    DescribeOrganizationMemberAuthAccountsAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationMemberAuthAccountsRequest&,
        DescribeOrganizationMemberAuthAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationMemberAuthIdentitiesRequest&;
    using Resp = DescribeOrganizationMemberAuthIdentitiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationMemberAuthIdentities", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationMemberAuthIdentitiesOutcomeCallable OrganizationClient::DescribeOrganizationMemberAuthIdentitiesCallable(const DescribeOrganizationMemberAuthIdentitiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationMemberAuthIdentitiesOutcome>>();
    DescribeOrganizationMemberAuthIdentitiesAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationMemberAuthIdentitiesRequest&,
        DescribeOrganizationMemberAuthIdentitiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationMemberEmailBindRequest&;
    using Resp = DescribeOrganizationMemberEmailBindResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationMemberEmailBind", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationMemberEmailBindOutcomeCallable OrganizationClient::DescribeOrganizationMemberEmailBindCallable(const DescribeOrganizationMemberEmailBindRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationMemberEmailBindOutcome>>();
    DescribeOrganizationMemberEmailBindAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationMemberEmailBindRequest&,
        DescribeOrganizationMemberEmailBindOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationMemberPoliciesRequest&;
    using Resp = DescribeOrganizationMemberPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationMemberPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationMemberPoliciesOutcomeCallable OrganizationClient::DescribeOrganizationMemberPoliciesCallable(const DescribeOrganizationMemberPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationMemberPoliciesOutcome>>();
    DescribeOrganizationMemberPoliciesAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationMemberPoliciesRequest&,
        DescribeOrganizationMemberPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationMembersRequest&;
    using Resp = DescribeOrganizationMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationMembersOutcomeCallable OrganizationClient::DescribeOrganizationMembersCallable(const DescribeOrganizationMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationMembersOutcome>>();
    DescribeOrganizationMembersAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationMembersRequest&,
        DescribeOrganizationMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::DescribeOrganizationMembersAuthPolicyOutcome OrganizationClient::DescribeOrganizationMembersAuthPolicy(const DescribeOrganizationMembersAuthPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationMembersAuthPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationMembersAuthPolicyResponse rsp = DescribeOrganizationMembersAuthPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationMembersAuthPolicyOutcome(rsp);
        else
            return DescribeOrganizationMembersAuthPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationMembersAuthPolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationMembersAuthPolicyAsync(const DescribeOrganizationMembersAuthPolicyRequest& request, const DescribeOrganizationMembersAuthPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganizationMembersAuthPolicyRequest&;
    using Resp = DescribeOrganizationMembersAuthPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationMembersAuthPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationMembersAuthPolicyOutcomeCallable OrganizationClient::DescribeOrganizationMembersAuthPolicyCallable(const DescribeOrganizationMembersAuthPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationMembersAuthPolicyOutcome>>();
    DescribeOrganizationMembersAuthPolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationMembersAuthPolicyRequest&,
        DescribeOrganizationMembersAuthPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOrganizationNodesRequest&;
    using Resp = DescribeOrganizationNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeOrganizationNodesOutcomeCallable OrganizationClient::DescribeOrganizationNodesCallable(const DescribeOrganizationNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationNodesOutcome>>();
    DescribeOrganizationNodesAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeOrganizationNodesRequest&,
        DescribeOrganizationNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePolicyRequest&;
    using Resp = DescribePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribePolicyOutcomeCallable OrganizationClient::DescribePolicyCallable(const DescribePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyOutcome>>();
    DescribePolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribePolicyRequest&,
        DescribePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePolicyConfigRequest&;
    using Resp = DescribePolicyConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicyConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribePolicyConfigOutcomeCallable OrganizationClient::DescribePolicyConfigCallable(const DescribePolicyConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyConfigOutcome>>();
    DescribePolicyConfigAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribePolicyConfigRequest&,
        DescribePolicyConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::DescribeResourceToShareMemberOutcome OrganizationClient::DescribeResourceToShareMember(const DescribeResourceToShareMemberRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceToShareMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceToShareMemberResponse rsp = DescribeResourceToShareMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceToShareMemberOutcome(rsp);
        else
            return DescribeResourceToShareMemberOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceToShareMemberOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeResourceToShareMemberAsync(const DescribeResourceToShareMemberRequest& request, const DescribeResourceToShareMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceToShareMemberRequest&;
    using Resp = DescribeResourceToShareMemberResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceToShareMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeResourceToShareMemberOutcomeCallable OrganizationClient::DescribeResourceToShareMemberCallable(const DescribeResourceToShareMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceToShareMemberOutcome>>();
    DescribeResourceToShareMemberAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeResourceToShareMemberRequest&,
        DescribeResourceToShareMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeShareAreasRequest&;
    using Resp = DescribeShareAreasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeShareAreas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeShareAreasOutcomeCallable OrganizationClient::DescribeShareAreasCallable(const DescribeShareAreasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeShareAreasOutcome>>();
    DescribeShareAreasAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeShareAreasRequest&,
        DescribeShareAreasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeShareUnitMembersRequest&;
    using Resp = DescribeShareUnitMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeShareUnitMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeShareUnitMembersOutcomeCallable OrganizationClient::DescribeShareUnitMembersCallable(const DescribeShareUnitMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeShareUnitMembersOutcome>>();
    DescribeShareUnitMembersAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeShareUnitMembersRequest&,
        DescribeShareUnitMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeShareUnitResourcesRequest&;
    using Resp = DescribeShareUnitResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeShareUnitResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeShareUnitResourcesOutcomeCallable OrganizationClient::DescribeShareUnitResourcesCallable(const DescribeShareUnitResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeShareUnitResourcesOutcome>>();
    DescribeShareUnitResourcesAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeShareUnitResourcesRequest&,
        DescribeShareUnitResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeShareUnitsRequest&;
    using Resp = DescribeShareUnitsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeShareUnits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DescribeShareUnitsOutcomeCallable OrganizationClient::DescribeShareUnitsCallable(const DescribeShareUnitsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeShareUnitsOutcome>>();
    DescribeShareUnitsAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DescribeShareUnitsRequest&,
        DescribeShareUnitsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DetachPolicyRequest&;
    using Resp = DetachPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DetachPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DetachPolicyOutcomeCallable OrganizationClient::DetachPolicyCallable(const DetachPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachPolicyOutcome>>();
    DetachPolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DetachPolicyRequest&,
        DetachPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisablePolicyTypeRequest&;
    using Resp = DisablePolicyTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DisablePolicyType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DisablePolicyTypeOutcomeCallable OrganizationClient::DisablePolicyTypeCallable(const DisablePolicyTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisablePolicyTypeOutcome>>();
    DisablePolicyTypeAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DisablePolicyTypeRequest&,
        DisablePolicyTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::DismantleRoleConfigurationOutcome OrganizationClient::DismantleRoleConfiguration(const DismantleRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DismantleRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismantleRoleConfigurationResponse rsp = DismantleRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismantleRoleConfigurationOutcome(rsp);
        else
            return DismantleRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return DismantleRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::DismantleRoleConfigurationAsync(const DismantleRoleConfigurationRequest& request, const DismantleRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DismantleRoleConfigurationRequest&;
    using Resp = DismantleRoleConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "DismantleRoleConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::DismantleRoleConfigurationOutcomeCallable OrganizationClient::DismantleRoleConfigurationCallable(const DismantleRoleConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DismantleRoleConfigurationOutcome>>();
    DismantleRoleConfigurationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const DismantleRoleConfigurationRequest&,
        DismantleRoleConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnablePolicyTypeRequest&;
    using Resp = EnablePolicyTypeResponse;

    DoRequestAsync<Req, Resp>(
        "EnablePolicyType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::EnablePolicyTypeOutcomeCallable OrganizationClient::EnablePolicyTypeCallable(const EnablePolicyTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnablePolicyTypeOutcome>>();
    EnablePolicyTypeAsync(
    request,
    [prom](
        const OrganizationClient*,
        const EnablePolicyTypeRequest&,
        EnablePolicyTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::GetExternalSAMLIdentityProviderOutcome OrganizationClient::GetExternalSAMLIdentityProvider(const GetExternalSAMLIdentityProviderRequest &request)
{
    auto outcome = MakeRequest(request, "GetExternalSAMLIdentityProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetExternalSAMLIdentityProviderResponse rsp = GetExternalSAMLIdentityProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetExternalSAMLIdentityProviderOutcome(rsp);
        else
            return GetExternalSAMLIdentityProviderOutcome(o.GetError());
    }
    else
    {
        return GetExternalSAMLIdentityProviderOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetExternalSAMLIdentityProviderAsync(const GetExternalSAMLIdentityProviderRequest& request, const GetExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetExternalSAMLIdentityProviderRequest&;
    using Resp = GetExternalSAMLIdentityProviderResponse;

    DoRequestAsync<Req, Resp>(
        "GetExternalSAMLIdentityProvider", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetExternalSAMLIdentityProviderOutcomeCallable OrganizationClient::GetExternalSAMLIdentityProviderCallable(const GetExternalSAMLIdentityProviderRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetExternalSAMLIdentityProviderOutcome>>();
    GetExternalSAMLIdentityProviderAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetExternalSAMLIdentityProviderRequest&,
        GetExternalSAMLIdentityProviderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::GetGroupOutcome OrganizationClient::GetGroup(const GetGroupRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupResponse rsp = GetGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupOutcome(rsp);
        else
            return GetGroupOutcome(o.GetError());
    }
    else
    {
        return GetGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetGroupRequest&;
    using Resp = GetGroupResponse;

    DoRequestAsync<Req, Resp>(
        "GetGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetGroupOutcomeCallable OrganizationClient::GetGroupCallable(const GetGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetGroupOutcome>>();
    GetGroupAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetGroupRequest&,
        GetGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::GetProvisioningTaskStatusOutcome OrganizationClient::GetProvisioningTaskStatus(const GetProvisioningTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetProvisioningTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProvisioningTaskStatusResponse rsp = GetProvisioningTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProvisioningTaskStatusOutcome(rsp);
        else
            return GetProvisioningTaskStatusOutcome(o.GetError());
    }
    else
    {
        return GetProvisioningTaskStatusOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetProvisioningTaskStatusAsync(const GetProvisioningTaskStatusRequest& request, const GetProvisioningTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetProvisioningTaskStatusRequest&;
    using Resp = GetProvisioningTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetProvisioningTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetProvisioningTaskStatusOutcomeCallable OrganizationClient::GetProvisioningTaskStatusCallable(const GetProvisioningTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetProvisioningTaskStatusOutcome>>();
    GetProvisioningTaskStatusAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetProvisioningTaskStatusRequest&,
        GetProvisioningTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::GetRoleConfigurationOutcome OrganizationClient::GetRoleConfiguration(const GetRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "GetRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRoleConfigurationResponse rsp = GetRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRoleConfigurationOutcome(rsp);
        else
            return GetRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return GetRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetRoleConfigurationAsync(const GetRoleConfigurationRequest& request, const GetRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRoleConfigurationRequest&;
    using Resp = GetRoleConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "GetRoleConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetRoleConfigurationOutcomeCallable OrganizationClient::GetRoleConfigurationCallable(const GetRoleConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRoleConfigurationOutcome>>();
    GetRoleConfigurationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetRoleConfigurationRequest&,
        GetRoleConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::GetSCIMSynchronizationStatusOutcome OrganizationClient::GetSCIMSynchronizationStatus(const GetSCIMSynchronizationStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetSCIMSynchronizationStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSCIMSynchronizationStatusResponse rsp = GetSCIMSynchronizationStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSCIMSynchronizationStatusOutcome(rsp);
        else
            return GetSCIMSynchronizationStatusOutcome(o.GetError());
    }
    else
    {
        return GetSCIMSynchronizationStatusOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetSCIMSynchronizationStatusAsync(const GetSCIMSynchronizationStatusRequest& request, const GetSCIMSynchronizationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSCIMSynchronizationStatusRequest&;
    using Resp = GetSCIMSynchronizationStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetSCIMSynchronizationStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetSCIMSynchronizationStatusOutcomeCallable OrganizationClient::GetSCIMSynchronizationStatusCallable(const GetSCIMSynchronizationStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSCIMSynchronizationStatusOutcome>>();
    GetSCIMSynchronizationStatusAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetSCIMSynchronizationStatusRequest&,
        GetSCIMSynchronizationStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::GetTaskStatusOutcome OrganizationClient::GetTaskStatus(const GetTaskStatusRequest &request)
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

void OrganizationClient::GetTaskStatusAsync(const GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTaskStatusRequest&;
    using Resp = GetTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetTaskStatusOutcomeCallable OrganizationClient::GetTaskStatusCallable(const GetTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTaskStatusOutcome>>();
    GetTaskStatusAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetTaskStatusRequest&,
        GetTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::GetUserOutcome OrganizationClient::GetUser(const GetUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUserResponse rsp = GetUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUserOutcome(rsp);
        else
            return GetUserOutcome(o.GetError());
    }
    else
    {
        return GetUserOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUserRequest&;
    using Resp = GetUserResponse;

    DoRequestAsync<Req, Resp>(
        "GetUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetUserOutcomeCallable OrganizationClient::GetUserCallable(const GetUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUserOutcome>>();
    GetUserAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetUserRequest&,
        GetUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::GetUserSyncProvisioningOutcome OrganizationClient::GetUserSyncProvisioning(const GetUserSyncProvisioningRequest &request)
{
    auto outcome = MakeRequest(request, "GetUserSyncProvisioning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUserSyncProvisioningResponse rsp = GetUserSyncProvisioningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUserSyncProvisioningOutcome(rsp);
        else
            return GetUserSyncProvisioningOutcome(o.GetError());
    }
    else
    {
        return GetUserSyncProvisioningOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetUserSyncProvisioningAsync(const GetUserSyncProvisioningRequest& request, const GetUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUserSyncProvisioningRequest&;
    using Resp = GetUserSyncProvisioningResponse;

    DoRequestAsync<Req, Resp>(
        "GetUserSyncProvisioning", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetUserSyncProvisioningOutcomeCallable OrganizationClient::GetUserSyncProvisioningCallable(const GetUserSyncProvisioningRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUserSyncProvisioningOutcome>>();
    GetUserSyncProvisioningAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetUserSyncProvisioningRequest&,
        GetUserSyncProvisioningOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::GetZoneSAMLServiceProviderInfoOutcome OrganizationClient::GetZoneSAMLServiceProviderInfo(const GetZoneSAMLServiceProviderInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetZoneSAMLServiceProviderInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetZoneSAMLServiceProviderInfoResponse rsp = GetZoneSAMLServiceProviderInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetZoneSAMLServiceProviderInfoOutcome(rsp);
        else
            return GetZoneSAMLServiceProviderInfoOutcome(o.GetError());
    }
    else
    {
        return GetZoneSAMLServiceProviderInfoOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetZoneSAMLServiceProviderInfoAsync(const GetZoneSAMLServiceProviderInfoRequest& request, const GetZoneSAMLServiceProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetZoneSAMLServiceProviderInfoRequest&;
    using Resp = GetZoneSAMLServiceProviderInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetZoneSAMLServiceProviderInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetZoneSAMLServiceProviderInfoOutcomeCallable OrganizationClient::GetZoneSAMLServiceProviderInfoCallable(const GetZoneSAMLServiceProviderInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetZoneSAMLServiceProviderInfoOutcome>>();
    GetZoneSAMLServiceProviderInfoAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetZoneSAMLServiceProviderInfoRequest&,
        GetZoneSAMLServiceProviderInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::GetZoneStatisticsOutcome OrganizationClient::GetZoneStatistics(const GetZoneStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "GetZoneStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetZoneStatisticsResponse rsp = GetZoneStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetZoneStatisticsOutcome(rsp);
        else
            return GetZoneStatisticsOutcome(o.GetError());
    }
    else
    {
        return GetZoneStatisticsOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetZoneStatisticsAsync(const GetZoneStatisticsRequest& request, const GetZoneStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetZoneStatisticsRequest&;
    using Resp = GetZoneStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "GetZoneStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::GetZoneStatisticsOutcomeCallable OrganizationClient::GetZoneStatisticsCallable(const GetZoneStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetZoneStatisticsOutcome>>();
    GetZoneStatisticsAsync(
    request,
    [prom](
        const OrganizationClient*,
        const GetZoneStatisticsRequest&,
        GetZoneStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::InviteOrganizationMemberOutcome OrganizationClient::InviteOrganizationMember(const InviteOrganizationMemberRequest &request)
{
    auto outcome = MakeRequest(request, "InviteOrganizationMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InviteOrganizationMemberResponse rsp = InviteOrganizationMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InviteOrganizationMemberOutcome(rsp);
        else
            return InviteOrganizationMemberOutcome(o.GetError());
    }
    else
    {
        return InviteOrganizationMemberOutcome(outcome.GetError());
    }
}

void OrganizationClient::InviteOrganizationMemberAsync(const InviteOrganizationMemberRequest& request, const InviteOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InviteOrganizationMemberRequest&;
    using Resp = InviteOrganizationMemberResponse;

    DoRequestAsync<Req, Resp>(
        "InviteOrganizationMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::InviteOrganizationMemberOutcomeCallable OrganizationClient::InviteOrganizationMemberCallable(const InviteOrganizationMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<InviteOrganizationMemberOutcome>>();
    InviteOrganizationMemberAsync(
    request,
    [prom](
        const OrganizationClient*,
        const InviteOrganizationMemberRequest&,
        InviteOrganizationMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListExternalSAMLIdPCertificatesOutcome OrganizationClient::ListExternalSAMLIdPCertificates(const ListExternalSAMLIdPCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "ListExternalSAMLIdPCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListExternalSAMLIdPCertificatesResponse rsp = ListExternalSAMLIdPCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListExternalSAMLIdPCertificatesOutcome(rsp);
        else
            return ListExternalSAMLIdPCertificatesOutcome(o.GetError());
    }
    else
    {
        return ListExternalSAMLIdPCertificatesOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListExternalSAMLIdPCertificatesAsync(const ListExternalSAMLIdPCertificatesRequest& request, const ListExternalSAMLIdPCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListExternalSAMLIdPCertificatesRequest&;
    using Resp = ListExternalSAMLIdPCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "ListExternalSAMLIdPCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListExternalSAMLIdPCertificatesOutcomeCallable OrganizationClient::ListExternalSAMLIdPCertificatesCallable(const ListExternalSAMLIdPCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListExternalSAMLIdPCertificatesOutcome>>();
    ListExternalSAMLIdPCertificatesAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListExternalSAMLIdPCertificatesRequest&,
        ListExternalSAMLIdPCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListGroupMembersOutcome OrganizationClient::ListGroupMembers(const ListGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "ListGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListGroupMembersResponse rsp = ListGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListGroupMembersOutcome(rsp);
        else
            return ListGroupMembersOutcome(o.GetError());
    }
    else
    {
        return ListGroupMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListGroupMembersAsync(const ListGroupMembersRequest& request, const ListGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListGroupMembersRequest&;
    using Resp = ListGroupMembersResponse;

    DoRequestAsync<Req, Resp>(
        "ListGroupMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListGroupMembersOutcomeCallable OrganizationClient::ListGroupMembersCallable(const ListGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListGroupMembersOutcome>>();
    ListGroupMembersAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListGroupMembersRequest&,
        ListGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListGroupsOutcome OrganizationClient::ListGroups(const ListGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListGroupsResponse rsp = ListGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListGroupsOutcome(rsp);
        else
            return ListGroupsOutcome(o.GetError());
    }
    else
    {
        return ListGroupsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListGroupsRequest&;
    using Resp = ListGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ListGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListGroupsOutcomeCallable OrganizationClient::ListGroupsCallable(const ListGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListGroupsOutcome>>();
    ListGroupsAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListGroupsRequest&,
        ListGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListJoinedGroupsForUserOutcome OrganizationClient::ListJoinedGroupsForUser(const ListJoinedGroupsForUserRequest &request)
{
    auto outcome = MakeRequest(request, "ListJoinedGroupsForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListJoinedGroupsForUserResponse rsp = ListJoinedGroupsForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListJoinedGroupsForUserOutcome(rsp);
        else
            return ListJoinedGroupsForUserOutcome(o.GetError());
    }
    else
    {
        return ListJoinedGroupsForUserOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListJoinedGroupsForUserAsync(const ListJoinedGroupsForUserRequest& request, const ListJoinedGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListJoinedGroupsForUserRequest&;
    using Resp = ListJoinedGroupsForUserResponse;

    DoRequestAsync<Req, Resp>(
        "ListJoinedGroupsForUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListJoinedGroupsForUserOutcomeCallable OrganizationClient::ListJoinedGroupsForUserCallable(const ListJoinedGroupsForUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListJoinedGroupsForUserOutcome>>();
    ListJoinedGroupsForUserAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListJoinedGroupsForUserRequest&,
        ListJoinedGroupsForUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListNonCompliantResourceRequest&;
    using Resp = ListNonCompliantResourceResponse;

    DoRequestAsync<Req, Resp>(
        "ListNonCompliantResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListNonCompliantResourceOutcomeCallable OrganizationClient::ListNonCompliantResourceCallable(const ListNonCompliantResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListNonCompliantResourceOutcome>>();
    ListNonCompliantResourceAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListNonCompliantResourceRequest&,
        ListNonCompliantResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListOrgServiceAssignMemberRequest&;
    using Resp = ListOrgServiceAssignMemberResponse;

    DoRequestAsync<Req, Resp>(
        "ListOrgServiceAssignMember", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListOrgServiceAssignMemberOutcomeCallable OrganizationClient::ListOrgServiceAssignMemberCallable(const ListOrgServiceAssignMemberRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOrgServiceAssignMemberOutcome>>();
    ListOrgServiceAssignMemberAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListOrgServiceAssignMemberRequest&,
        ListOrgServiceAssignMemberOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListOrganizationIdentityRequest&;
    using Resp = ListOrganizationIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "ListOrganizationIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListOrganizationIdentityOutcomeCallable OrganizationClient::ListOrganizationIdentityCallable(const ListOrganizationIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOrganizationIdentityOutcome>>();
    ListOrganizationIdentityAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListOrganizationIdentityRequest&,
        ListOrganizationIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListOrganizationServiceRequest&;
    using Resp = ListOrganizationServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ListOrganizationService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListOrganizationServiceOutcomeCallable OrganizationClient::ListOrganizationServiceCallable(const ListOrganizationServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListOrganizationServiceOutcome>>();
    ListOrganizationServiceAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListOrganizationServiceRequest&,
        ListOrganizationServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListPermissionPoliciesInRoleConfigurationOutcome OrganizationClient::ListPermissionPoliciesInRoleConfiguration(const ListPermissionPoliciesInRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "ListPermissionPoliciesInRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPermissionPoliciesInRoleConfigurationResponse rsp = ListPermissionPoliciesInRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPermissionPoliciesInRoleConfigurationOutcome(rsp);
        else
            return ListPermissionPoliciesInRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return ListPermissionPoliciesInRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListPermissionPoliciesInRoleConfigurationAsync(const ListPermissionPoliciesInRoleConfigurationRequest& request, const ListPermissionPoliciesInRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListPermissionPoliciesInRoleConfigurationRequest&;
    using Resp = ListPermissionPoliciesInRoleConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "ListPermissionPoliciesInRoleConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListPermissionPoliciesInRoleConfigurationOutcomeCallable OrganizationClient::ListPermissionPoliciesInRoleConfigurationCallable(const ListPermissionPoliciesInRoleConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListPermissionPoliciesInRoleConfigurationOutcome>>();
    ListPermissionPoliciesInRoleConfigurationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListPermissionPoliciesInRoleConfigurationRequest&,
        ListPermissionPoliciesInRoleConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListPoliciesRequest&;
    using Resp = ListPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ListPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListPoliciesOutcomeCallable OrganizationClient::ListPoliciesCallable(const ListPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListPoliciesOutcome>>();
    ListPoliciesAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListPoliciesRequest&,
        ListPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListPoliciesForTargetRequest&;
    using Resp = ListPoliciesForTargetResponse;

    DoRequestAsync<Req, Resp>(
        "ListPoliciesForTarget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListPoliciesForTargetOutcomeCallable OrganizationClient::ListPoliciesForTargetCallable(const ListPoliciesForTargetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListPoliciesForTargetOutcome>>();
    ListPoliciesForTargetAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListPoliciesForTargetRequest&,
        ListPoliciesForTargetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListRoleAssignmentsOutcome OrganizationClient::ListRoleAssignments(const ListRoleAssignmentsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRoleAssignments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRoleAssignmentsResponse rsp = ListRoleAssignmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRoleAssignmentsOutcome(rsp);
        else
            return ListRoleAssignmentsOutcome(o.GetError());
    }
    else
    {
        return ListRoleAssignmentsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListRoleAssignmentsAsync(const ListRoleAssignmentsRequest& request, const ListRoleAssignmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRoleAssignmentsRequest&;
    using Resp = ListRoleAssignmentsResponse;

    DoRequestAsync<Req, Resp>(
        "ListRoleAssignments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListRoleAssignmentsOutcomeCallable OrganizationClient::ListRoleAssignmentsCallable(const ListRoleAssignmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRoleAssignmentsOutcome>>();
    ListRoleAssignmentsAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListRoleAssignmentsRequest&,
        ListRoleAssignmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListRoleConfigurationProvisioningsOutcome OrganizationClient::ListRoleConfigurationProvisionings(const ListRoleConfigurationProvisioningsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRoleConfigurationProvisionings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRoleConfigurationProvisioningsResponse rsp = ListRoleConfigurationProvisioningsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRoleConfigurationProvisioningsOutcome(rsp);
        else
            return ListRoleConfigurationProvisioningsOutcome(o.GetError());
    }
    else
    {
        return ListRoleConfigurationProvisioningsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListRoleConfigurationProvisioningsAsync(const ListRoleConfigurationProvisioningsRequest& request, const ListRoleConfigurationProvisioningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRoleConfigurationProvisioningsRequest&;
    using Resp = ListRoleConfigurationProvisioningsResponse;

    DoRequestAsync<Req, Resp>(
        "ListRoleConfigurationProvisionings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListRoleConfigurationProvisioningsOutcomeCallable OrganizationClient::ListRoleConfigurationProvisioningsCallable(const ListRoleConfigurationProvisioningsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRoleConfigurationProvisioningsOutcome>>();
    ListRoleConfigurationProvisioningsAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListRoleConfigurationProvisioningsRequest&,
        ListRoleConfigurationProvisioningsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListRoleConfigurationsOutcome OrganizationClient::ListRoleConfigurations(const ListRoleConfigurationsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRoleConfigurations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRoleConfigurationsResponse rsp = ListRoleConfigurationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRoleConfigurationsOutcome(rsp);
        else
            return ListRoleConfigurationsOutcome(o.GetError());
    }
    else
    {
        return ListRoleConfigurationsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListRoleConfigurationsAsync(const ListRoleConfigurationsRequest& request, const ListRoleConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRoleConfigurationsRequest&;
    using Resp = ListRoleConfigurationsResponse;

    DoRequestAsync<Req, Resp>(
        "ListRoleConfigurations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListRoleConfigurationsOutcomeCallable OrganizationClient::ListRoleConfigurationsCallable(const ListRoleConfigurationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRoleConfigurationsOutcome>>();
    ListRoleConfigurationsAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListRoleConfigurationsRequest&,
        ListRoleConfigurationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListSCIMCredentialsOutcome OrganizationClient::ListSCIMCredentials(const ListSCIMCredentialsRequest &request)
{
    auto outcome = MakeRequest(request, "ListSCIMCredentials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSCIMCredentialsResponse rsp = ListSCIMCredentialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSCIMCredentialsOutcome(rsp);
        else
            return ListSCIMCredentialsOutcome(o.GetError());
    }
    else
    {
        return ListSCIMCredentialsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListSCIMCredentialsAsync(const ListSCIMCredentialsRequest& request, const ListSCIMCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSCIMCredentialsRequest&;
    using Resp = ListSCIMCredentialsResponse;

    DoRequestAsync<Req, Resp>(
        "ListSCIMCredentials", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListSCIMCredentialsOutcomeCallable OrganizationClient::ListSCIMCredentialsCallable(const ListSCIMCredentialsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSCIMCredentialsOutcome>>();
    ListSCIMCredentialsAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListSCIMCredentialsRequest&,
        ListSCIMCredentialsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListTargetsForPolicyRequest&;
    using Resp = ListTargetsForPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ListTargetsForPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListTargetsForPolicyOutcomeCallable OrganizationClient::ListTargetsForPolicyCallable(const ListTargetsForPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTargetsForPolicyOutcome>>();
    ListTargetsForPolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListTargetsForPolicyRequest&,
        ListTargetsForPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListTasksOutcome OrganizationClient::ListTasks(const ListTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTasksResponse rsp = ListTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTasksOutcome(rsp);
        else
            return ListTasksOutcome(o.GetError());
    }
    else
    {
        return ListTasksOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTasksRequest&;
    using Resp = ListTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListTasksOutcomeCallable OrganizationClient::ListTasksCallable(const ListTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTasksOutcome>>();
    ListTasksAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListTasksRequest&,
        ListTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListUserSyncProvisioningsOutcome OrganizationClient::ListUserSyncProvisionings(const ListUserSyncProvisioningsRequest &request)
{
    auto outcome = MakeRequest(request, "ListUserSyncProvisionings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserSyncProvisioningsResponse rsp = ListUserSyncProvisioningsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserSyncProvisioningsOutcome(rsp);
        else
            return ListUserSyncProvisioningsOutcome(o.GetError());
    }
    else
    {
        return ListUserSyncProvisioningsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListUserSyncProvisioningsAsync(const ListUserSyncProvisioningsRequest& request, const ListUserSyncProvisioningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUserSyncProvisioningsRequest&;
    using Resp = ListUserSyncProvisioningsResponse;

    DoRequestAsync<Req, Resp>(
        "ListUserSyncProvisionings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListUserSyncProvisioningsOutcomeCallable OrganizationClient::ListUserSyncProvisioningsCallable(const ListUserSyncProvisioningsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUserSyncProvisioningsOutcome>>();
    ListUserSyncProvisioningsAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListUserSyncProvisioningsRequest&,
        ListUserSyncProvisioningsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ListUsersOutcome OrganizationClient::ListUsers(const ListUsersRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsersResponse rsp = ListUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsersOutcome(rsp);
        else
            return ListUsersOutcome(o.GetError());
    }
    else
    {
        return ListUsersOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUsersRequest&;
    using Resp = ListUsersResponse;

    DoRequestAsync<Req, Resp>(
        "ListUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ListUsersOutcomeCallable OrganizationClient::ListUsersCallable(const ListUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUsersOutcome>>();
    ListUsersAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ListUsersRequest&,
        ListUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const MoveOrganizationNodeMembersRequest&;
    using Resp = MoveOrganizationNodeMembersResponse;

    DoRequestAsync<Req, Resp>(
        "MoveOrganizationNodeMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::MoveOrganizationNodeMembersOutcomeCallable OrganizationClient::MoveOrganizationNodeMembersCallable(const MoveOrganizationNodeMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<MoveOrganizationNodeMembersOutcome>>();
    MoveOrganizationNodeMembersAsync(
    request,
    [prom](
        const OrganizationClient*,
        const MoveOrganizationNodeMembersRequest&,
        MoveOrganizationNodeMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::OpenIdentityCenterOutcome OrganizationClient::OpenIdentityCenter(const OpenIdentityCenterRequest &request)
{
    auto outcome = MakeRequest(request, "OpenIdentityCenter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenIdentityCenterResponse rsp = OpenIdentityCenterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenIdentityCenterOutcome(rsp);
        else
            return OpenIdentityCenterOutcome(o.GetError());
    }
    else
    {
        return OpenIdentityCenterOutcome(outcome.GetError());
    }
}

void OrganizationClient::OpenIdentityCenterAsync(const OpenIdentityCenterRequest& request, const OpenIdentityCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenIdentityCenterRequest&;
    using Resp = OpenIdentityCenterResponse;

    DoRequestAsync<Req, Resp>(
        "OpenIdentityCenter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::OpenIdentityCenterOutcomeCallable OrganizationClient::OpenIdentityCenterCallable(const OpenIdentityCenterRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenIdentityCenterOutcome>>();
    OpenIdentityCenterAsync(
    request,
    [prom](
        const OrganizationClient*,
        const OpenIdentityCenterRequest&,
        OpenIdentityCenterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::ProvisionRoleConfigurationOutcome OrganizationClient::ProvisionRoleConfiguration(const ProvisionRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "ProvisionRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProvisionRoleConfigurationResponse rsp = ProvisionRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProvisionRoleConfigurationOutcome(rsp);
        else
            return ProvisionRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return ProvisionRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::ProvisionRoleConfigurationAsync(const ProvisionRoleConfigurationRequest& request, const ProvisionRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ProvisionRoleConfigurationRequest&;
    using Resp = ProvisionRoleConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "ProvisionRoleConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::ProvisionRoleConfigurationOutcomeCallable OrganizationClient::ProvisionRoleConfigurationCallable(const ProvisionRoleConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProvisionRoleConfigurationOutcome>>();
    ProvisionRoleConfigurationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const ProvisionRoleConfigurationRequest&,
        ProvisionRoleConfigurationOutcome resp,
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
    using Req = const RejectJoinShareUnitInvitationRequest&;
    using Resp = RejectJoinShareUnitInvitationResponse;

    DoRequestAsync<Req, Resp>(
        "RejectJoinShareUnitInvitation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::RejectJoinShareUnitInvitationOutcomeCallable OrganizationClient::RejectJoinShareUnitInvitationCallable(const RejectJoinShareUnitInvitationRequest &request)
{
    const auto prom = std::make_shared<std::promise<RejectJoinShareUnitInvitationOutcome>>();
    RejectJoinShareUnitInvitationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const RejectJoinShareUnitInvitationRequest&,
        RejectJoinShareUnitInvitationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::RemoveExternalSAMLIdPCertificateOutcome OrganizationClient::RemoveExternalSAMLIdPCertificate(const RemoveExternalSAMLIdPCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveExternalSAMLIdPCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveExternalSAMLIdPCertificateResponse rsp = RemoveExternalSAMLIdPCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveExternalSAMLIdPCertificateOutcome(rsp);
        else
            return RemoveExternalSAMLIdPCertificateOutcome(o.GetError());
    }
    else
    {
        return RemoveExternalSAMLIdPCertificateOutcome(outcome.GetError());
    }
}

void OrganizationClient::RemoveExternalSAMLIdPCertificateAsync(const RemoveExternalSAMLIdPCertificateRequest& request, const RemoveExternalSAMLIdPCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveExternalSAMLIdPCertificateRequest&;
    using Resp = RemoveExternalSAMLIdPCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveExternalSAMLIdPCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::RemoveExternalSAMLIdPCertificateOutcomeCallable OrganizationClient::RemoveExternalSAMLIdPCertificateCallable(const RemoveExternalSAMLIdPCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveExternalSAMLIdPCertificateOutcome>>();
    RemoveExternalSAMLIdPCertificateAsync(
    request,
    [prom](
        const OrganizationClient*,
        const RemoveExternalSAMLIdPCertificateRequest&,
        RemoveExternalSAMLIdPCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::RemovePermissionPolicyFromRoleConfigurationOutcome OrganizationClient::RemovePermissionPolicyFromRoleConfiguration(const RemovePermissionPolicyFromRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "RemovePermissionPolicyFromRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemovePermissionPolicyFromRoleConfigurationResponse rsp = RemovePermissionPolicyFromRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemovePermissionPolicyFromRoleConfigurationOutcome(rsp);
        else
            return RemovePermissionPolicyFromRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return RemovePermissionPolicyFromRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::RemovePermissionPolicyFromRoleConfigurationAsync(const RemovePermissionPolicyFromRoleConfigurationRequest& request, const RemovePermissionPolicyFromRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemovePermissionPolicyFromRoleConfigurationRequest&;
    using Resp = RemovePermissionPolicyFromRoleConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "RemovePermissionPolicyFromRoleConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::RemovePermissionPolicyFromRoleConfigurationOutcomeCallable OrganizationClient::RemovePermissionPolicyFromRoleConfigurationCallable(const RemovePermissionPolicyFromRoleConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemovePermissionPolicyFromRoleConfigurationOutcome>>();
    RemovePermissionPolicyFromRoleConfigurationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const RemovePermissionPolicyFromRoleConfigurationRequest&,
        RemovePermissionPolicyFromRoleConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::RemoveUserFromGroupOutcome OrganizationClient::RemoveUserFromGroup(const RemoveUserFromGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserFromGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserFromGroupResponse rsp = RemoveUserFromGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserFromGroupOutcome(rsp);
        else
            return RemoveUserFromGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveUserFromGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::RemoveUserFromGroupAsync(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveUserFromGroupRequest&;
    using Resp = RemoveUserFromGroupResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveUserFromGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::RemoveUserFromGroupOutcomeCallable OrganizationClient::RemoveUserFromGroupCallable(const RemoveUserFromGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveUserFromGroupOutcome>>();
    RemoveUserFromGroupAsync(
    request,
    [prom](
        const OrganizationClient*,
        const RemoveUserFromGroupRequest&,
        RemoveUserFromGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::SendOrgMemberAccountBindEmailOutcome OrganizationClient::SendOrgMemberAccountBindEmail(const SendOrgMemberAccountBindEmailRequest &request)
{
    auto outcome = MakeRequest(request, "SendOrgMemberAccountBindEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendOrgMemberAccountBindEmailResponse rsp = SendOrgMemberAccountBindEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendOrgMemberAccountBindEmailOutcome(rsp);
        else
            return SendOrgMemberAccountBindEmailOutcome(o.GetError());
    }
    else
    {
        return SendOrgMemberAccountBindEmailOutcome(outcome.GetError());
    }
}

void OrganizationClient::SendOrgMemberAccountBindEmailAsync(const SendOrgMemberAccountBindEmailRequest& request, const SendOrgMemberAccountBindEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendOrgMemberAccountBindEmailRequest&;
    using Resp = SendOrgMemberAccountBindEmailResponse;

    DoRequestAsync<Req, Resp>(
        "SendOrgMemberAccountBindEmail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::SendOrgMemberAccountBindEmailOutcomeCallable OrganizationClient::SendOrgMemberAccountBindEmailCallable(const SendOrgMemberAccountBindEmailRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendOrgMemberAccountBindEmailOutcome>>();
    SendOrgMemberAccountBindEmailAsync(
    request,
    [prom](
        const OrganizationClient*,
        const SendOrgMemberAccountBindEmailRequest&,
        SendOrgMemberAccountBindEmailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::SetExternalSAMLIdentityProviderOutcome OrganizationClient::SetExternalSAMLIdentityProvider(const SetExternalSAMLIdentityProviderRequest &request)
{
    auto outcome = MakeRequest(request, "SetExternalSAMLIdentityProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetExternalSAMLIdentityProviderResponse rsp = SetExternalSAMLIdentityProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetExternalSAMLIdentityProviderOutcome(rsp);
        else
            return SetExternalSAMLIdentityProviderOutcome(o.GetError());
    }
    else
    {
        return SetExternalSAMLIdentityProviderOutcome(outcome.GetError());
    }
}

void OrganizationClient::SetExternalSAMLIdentityProviderAsync(const SetExternalSAMLIdentityProviderRequest& request, const SetExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetExternalSAMLIdentityProviderRequest&;
    using Resp = SetExternalSAMLIdentityProviderResponse;

    DoRequestAsync<Req, Resp>(
        "SetExternalSAMLIdentityProvider", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::SetExternalSAMLIdentityProviderOutcomeCallable OrganizationClient::SetExternalSAMLIdentityProviderCallable(const SetExternalSAMLIdentityProviderRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetExternalSAMLIdentityProviderOutcome>>();
    SetExternalSAMLIdentityProviderAsync(
    request,
    [prom](
        const OrganizationClient*,
        const SetExternalSAMLIdentityProviderRequest&,
        SetExternalSAMLIdentityProviderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::UpdateCustomPolicyForRoleConfigurationOutcome OrganizationClient::UpdateCustomPolicyForRoleConfiguration(const UpdateCustomPolicyForRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCustomPolicyForRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCustomPolicyForRoleConfigurationResponse rsp = UpdateCustomPolicyForRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCustomPolicyForRoleConfigurationOutcome(rsp);
        else
            return UpdateCustomPolicyForRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return UpdateCustomPolicyForRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateCustomPolicyForRoleConfigurationAsync(const UpdateCustomPolicyForRoleConfigurationRequest& request, const UpdateCustomPolicyForRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCustomPolicyForRoleConfigurationRequest&;
    using Resp = UpdateCustomPolicyForRoleConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCustomPolicyForRoleConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateCustomPolicyForRoleConfigurationOutcomeCallable OrganizationClient::UpdateCustomPolicyForRoleConfigurationCallable(const UpdateCustomPolicyForRoleConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCustomPolicyForRoleConfigurationOutcome>>();
    UpdateCustomPolicyForRoleConfigurationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateCustomPolicyForRoleConfigurationRequest&,
        UpdateCustomPolicyForRoleConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::UpdateGroupOutcome OrganizationClient::UpdateGroup(const UpdateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGroupResponse rsp = UpdateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGroupOutcome(rsp);
        else
            return UpdateGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateGroupRequest&;
    using Resp = UpdateGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateGroupOutcomeCallable OrganizationClient::UpdateGroupCallable(const UpdateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGroupOutcome>>();
    UpdateGroupAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateGroupRequest&,
        UpdateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateOrganizationIdentityRequest&;
    using Resp = UpdateOrganizationIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOrganizationIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateOrganizationIdentityOutcomeCallable OrganizationClient::UpdateOrganizationIdentityCallable(const UpdateOrganizationIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOrganizationIdentityOutcome>>();
    UpdateOrganizationIdentityAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateOrganizationIdentityRequest&,
        UpdateOrganizationIdentityOutcome resp,
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
    using Req = const UpdateOrganizationMemberEmailBindRequest&;
    using Resp = UpdateOrganizationMemberEmailBindResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOrganizationMemberEmailBind", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateOrganizationMemberEmailBindOutcomeCallable OrganizationClient::UpdateOrganizationMemberEmailBindCallable(const UpdateOrganizationMemberEmailBindRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOrganizationMemberEmailBindOutcome>>();
    UpdateOrganizationMemberEmailBindAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateOrganizationMemberEmailBindRequest&,
        UpdateOrganizationMemberEmailBindOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::UpdateOrganizationMembersPolicyOutcome OrganizationClient::UpdateOrganizationMembersPolicy(const UpdateOrganizationMembersPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOrganizationMembersPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOrganizationMembersPolicyResponse rsp = UpdateOrganizationMembersPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOrganizationMembersPolicyOutcome(rsp);
        else
            return UpdateOrganizationMembersPolicyOutcome(o.GetError());
    }
    else
    {
        return UpdateOrganizationMembersPolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateOrganizationMembersPolicyAsync(const UpdateOrganizationMembersPolicyRequest& request, const UpdateOrganizationMembersPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateOrganizationMembersPolicyRequest&;
    using Resp = UpdateOrganizationMembersPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOrganizationMembersPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateOrganizationMembersPolicyOutcomeCallable OrganizationClient::UpdateOrganizationMembersPolicyCallable(const UpdateOrganizationMembersPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOrganizationMembersPolicyOutcome>>();
    UpdateOrganizationMembersPolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateOrganizationMembersPolicyRequest&,
        UpdateOrganizationMembersPolicyOutcome resp,
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
    using Req = const UpdatePolicyRequest&;
    using Resp = UpdatePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdatePolicyOutcomeCallable OrganizationClient::UpdatePolicyCallable(const UpdatePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePolicyOutcome>>();
    UpdatePolicyAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdatePolicyRequest&,
        UpdatePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::UpdateRoleConfigurationOutcome OrganizationClient::UpdateRoleConfiguration(const UpdateRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRoleConfigurationResponse rsp = UpdateRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRoleConfigurationOutcome(rsp);
        else
            return UpdateRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return UpdateRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateRoleConfigurationAsync(const UpdateRoleConfigurationRequest& request, const UpdateRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRoleConfigurationRequest&;
    using Resp = UpdateRoleConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRoleConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateRoleConfigurationOutcomeCallable OrganizationClient::UpdateRoleConfigurationCallable(const UpdateRoleConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRoleConfigurationOutcome>>();
    UpdateRoleConfigurationAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateRoleConfigurationRequest&,
        UpdateRoleConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::UpdateSCIMCredentialStatusOutcome OrganizationClient::UpdateSCIMCredentialStatus(const UpdateSCIMCredentialStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSCIMCredentialStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSCIMCredentialStatusResponse rsp = UpdateSCIMCredentialStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSCIMCredentialStatusOutcome(rsp);
        else
            return UpdateSCIMCredentialStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateSCIMCredentialStatusOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateSCIMCredentialStatusAsync(const UpdateSCIMCredentialStatusRequest& request, const UpdateSCIMCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSCIMCredentialStatusRequest&;
    using Resp = UpdateSCIMCredentialStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSCIMCredentialStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateSCIMCredentialStatusOutcomeCallable OrganizationClient::UpdateSCIMCredentialStatusCallable(const UpdateSCIMCredentialStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSCIMCredentialStatusOutcome>>();
    UpdateSCIMCredentialStatusAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateSCIMCredentialStatusRequest&,
        UpdateSCIMCredentialStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::UpdateSCIMSynchronizationStatusOutcome OrganizationClient::UpdateSCIMSynchronizationStatus(const UpdateSCIMSynchronizationStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSCIMSynchronizationStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSCIMSynchronizationStatusResponse rsp = UpdateSCIMSynchronizationStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSCIMSynchronizationStatusOutcome(rsp);
        else
            return UpdateSCIMSynchronizationStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateSCIMSynchronizationStatusOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateSCIMSynchronizationStatusAsync(const UpdateSCIMSynchronizationStatusRequest& request, const UpdateSCIMSynchronizationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSCIMSynchronizationStatusRequest&;
    using Resp = UpdateSCIMSynchronizationStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSCIMSynchronizationStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateSCIMSynchronizationStatusOutcomeCallable OrganizationClient::UpdateSCIMSynchronizationStatusCallable(const UpdateSCIMSynchronizationStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSCIMSynchronizationStatusOutcome>>();
    UpdateSCIMSynchronizationStatusAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateSCIMSynchronizationStatusRequest&,
        UpdateSCIMSynchronizationStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateShareUnitRequest&;
    using Resp = UpdateShareUnitResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateShareUnit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateShareUnitOutcomeCallable OrganizationClient::UpdateShareUnitCallable(const UpdateShareUnitRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateShareUnitOutcome>>();
    UpdateShareUnitAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateShareUnitRequest&,
        UpdateShareUnitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::UpdateUserOutcome OrganizationClient::UpdateUser(const UpdateUserRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserResponse rsp = UpdateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserOutcome(rsp);
        else
            return UpdateUserOutcome(o.GetError());
    }
    else
    {
        return UpdateUserOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUserRequest&;
    using Resp = UpdateUserResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateUserOutcomeCallable OrganizationClient::UpdateUserCallable(const UpdateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUserOutcome>>();
    UpdateUserAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateUserRequest&,
        UpdateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::UpdateUserStatusOutcome OrganizationClient::UpdateUserStatus(const UpdateUserStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserStatusResponse rsp = UpdateUserStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserStatusOutcome(rsp);
        else
            return UpdateUserStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateUserStatusOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateUserStatusAsync(const UpdateUserStatusRequest& request, const UpdateUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUserStatusRequest&;
    using Resp = UpdateUserStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUserStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateUserStatusOutcomeCallable OrganizationClient::UpdateUserStatusCallable(const UpdateUserStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUserStatusOutcome>>();
    UpdateUserStatusAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateUserStatusRequest&,
        UpdateUserStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::UpdateUserSyncProvisioningOutcome OrganizationClient::UpdateUserSyncProvisioning(const UpdateUserSyncProvisioningRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserSyncProvisioning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserSyncProvisioningResponse rsp = UpdateUserSyncProvisioningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserSyncProvisioningOutcome(rsp);
        else
            return UpdateUserSyncProvisioningOutcome(o.GetError());
    }
    else
    {
        return UpdateUserSyncProvisioningOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateUserSyncProvisioningAsync(const UpdateUserSyncProvisioningRequest& request, const UpdateUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUserSyncProvisioningRequest&;
    using Resp = UpdateUserSyncProvisioningResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUserSyncProvisioning", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateUserSyncProvisioningOutcomeCallable OrganizationClient::UpdateUserSyncProvisioningCallable(const UpdateUserSyncProvisioningRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUserSyncProvisioningOutcome>>();
    UpdateUserSyncProvisioningAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateUserSyncProvisioningRequest&,
        UpdateUserSyncProvisioningOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OrganizationClient::UpdateZoneOutcome OrganizationClient::UpdateZone(const UpdateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateZoneResponse rsp = UpdateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateZoneOutcome(rsp);
        else
            return UpdateZoneOutcome(o.GetError());
    }
    else
    {
        return UpdateZoneOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateZoneAsync(const UpdateZoneRequest& request, const UpdateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateZoneRequest&;
    using Resp = UpdateZoneResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OrganizationClient::UpdateZoneOutcomeCallable OrganizationClient::UpdateZoneCallable(const UpdateZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateZoneOutcome>>();
    UpdateZoneAsync(
    request,
    [prom](
        const OrganizationClient*,
        const UpdateZoneRequest&,
        UpdateZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


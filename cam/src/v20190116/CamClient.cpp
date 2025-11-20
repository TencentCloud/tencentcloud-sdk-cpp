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

#include <tencentcloud/cam/v20190116/CamClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cam::V20190116;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-16";
    const string ENDPOINT = "cam.tencentcloudapi.com";
}

CamClient::CamClient(const Credential &credential, const string &region) :
    CamClient(credential, region, ClientProfile())
{
}

CamClient::CamClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CamClient::AddUserOutcome CamClient::AddUser(const AddUserRequest &request)
{
    auto outcome = MakeRequest(request, "AddUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserResponse rsp = AddUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserOutcome(rsp);
        else
            return AddUserOutcome(o.GetError());
    }
    else
    {
        return AddUserOutcome(outcome.GetError());
    }
}

void CamClient::AddUserAsync(const AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddUserRequest&;
    using Resp = AddUserResponse;

    DoRequestAsync<Req, Resp>(
        "AddUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::AddUserOutcomeCallable CamClient::AddUserCallable(const AddUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUserOutcome>>();
    AddUserAsync(
    request,
    [prom](
        const CamClient*,
        const AddUserRequest&,
        AddUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::AddUserToGroupOutcome CamClient::AddUserToGroup(const AddUserToGroupRequest &request)
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

void CamClient::AddUserToGroupAsync(const AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::AddUserToGroupOutcomeCallable CamClient::AddUserToGroupCallable(const AddUserToGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUserToGroupOutcome>>();
    AddUserToGroupAsync(
    request,
    [prom](
        const CamClient*,
        const AddUserToGroupRequest&,
        AddUserToGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::AttachGroupPolicyOutcome CamClient::AttachGroupPolicy(const AttachGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachGroupPolicyResponse rsp = AttachGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachGroupPolicyOutcome(rsp);
        else
            return AttachGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachGroupPolicyOutcome(outcome.GetError());
    }
}

void CamClient::AttachGroupPolicyAsync(const AttachGroupPolicyRequest& request, const AttachGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachGroupPolicyRequest&;
    using Resp = AttachGroupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AttachGroupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::AttachGroupPolicyOutcomeCallable CamClient::AttachGroupPolicyCallable(const AttachGroupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachGroupPolicyOutcome>>();
    AttachGroupPolicyAsync(
    request,
    [prom](
        const CamClient*,
        const AttachGroupPolicyRequest&,
        AttachGroupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::AttachRolePolicyOutcome CamClient::AttachRolePolicy(const AttachRolePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachRolePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachRolePolicyResponse rsp = AttachRolePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachRolePolicyOutcome(rsp);
        else
            return AttachRolePolicyOutcome(o.GetError());
    }
    else
    {
        return AttachRolePolicyOutcome(outcome.GetError());
    }
}

void CamClient::AttachRolePolicyAsync(const AttachRolePolicyRequest& request, const AttachRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachRolePolicyRequest&;
    using Resp = AttachRolePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AttachRolePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::AttachRolePolicyOutcomeCallable CamClient::AttachRolePolicyCallable(const AttachRolePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachRolePolicyOutcome>>();
    AttachRolePolicyAsync(
    request,
    [prom](
        const CamClient*,
        const AttachRolePolicyRequest&,
        AttachRolePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::AttachUserPolicyOutcome CamClient::AttachUserPolicy(const AttachUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachUserPolicyResponse rsp = AttachUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachUserPolicyOutcome(rsp);
        else
            return AttachUserPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachUserPolicyOutcome(outcome.GetError());
    }
}

void CamClient::AttachUserPolicyAsync(const AttachUserPolicyRequest& request, const AttachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachUserPolicyRequest&;
    using Resp = AttachUserPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "AttachUserPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::AttachUserPolicyOutcomeCallable CamClient::AttachUserPolicyCallable(const AttachUserPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachUserPolicyOutcome>>();
    AttachUserPolicyAsync(
    request,
    [prom](
        const CamClient*,
        const AttachUserPolicyRequest&,
        AttachUserPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::BuildDataFlowAuthTokenOutcome CamClient::BuildDataFlowAuthToken(const BuildDataFlowAuthTokenRequest &request)
{
    auto outcome = MakeRequest(request, "BuildDataFlowAuthToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BuildDataFlowAuthTokenResponse rsp = BuildDataFlowAuthTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BuildDataFlowAuthTokenOutcome(rsp);
        else
            return BuildDataFlowAuthTokenOutcome(o.GetError());
    }
    else
    {
        return BuildDataFlowAuthTokenOutcome(outcome.GetError());
    }
}

void CamClient::BuildDataFlowAuthTokenAsync(const BuildDataFlowAuthTokenRequest& request, const BuildDataFlowAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BuildDataFlowAuthTokenRequest&;
    using Resp = BuildDataFlowAuthTokenResponse;

    DoRequestAsync<Req, Resp>(
        "BuildDataFlowAuthToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::BuildDataFlowAuthTokenOutcomeCallable CamClient::BuildDataFlowAuthTokenCallable(const BuildDataFlowAuthTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<BuildDataFlowAuthTokenOutcome>>();
    BuildDataFlowAuthTokenAsync(
    request,
    [prom](
        const CamClient*,
        const BuildDataFlowAuthTokenRequest&,
        BuildDataFlowAuthTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ConsumeCustomMFATokenOutcome CamClient::ConsumeCustomMFAToken(const ConsumeCustomMFATokenRequest &request)
{
    auto outcome = MakeRequest(request, "ConsumeCustomMFAToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConsumeCustomMFATokenResponse rsp = ConsumeCustomMFATokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConsumeCustomMFATokenOutcome(rsp);
        else
            return ConsumeCustomMFATokenOutcome(o.GetError());
    }
    else
    {
        return ConsumeCustomMFATokenOutcome(outcome.GetError());
    }
}

void CamClient::ConsumeCustomMFATokenAsync(const ConsumeCustomMFATokenRequest& request, const ConsumeCustomMFATokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConsumeCustomMFATokenRequest&;
    using Resp = ConsumeCustomMFATokenResponse;

    DoRequestAsync<Req, Resp>(
        "ConsumeCustomMFAToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ConsumeCustomMFATokenOutcomeCallable CamClient::ConsumeCustomMFATokenCallable(const ConsumeCustomMFATokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConsumeCustomMFATokenOutcome>>();
    ConsumeCustomMFATokenAsync(
    request,
    [prom](
        const CamClient*,
        const ConsumeCustomMFATokenRequest&,
        ConsumeCustomMFATokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreateAccessKeyOutcome CamClient::CreateAccessKey(const CreateAccessKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessKeyResponse rsp = CreateAccessKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessKeyOutcome(rsp);
        else
            return CreateAccessKeyOutcome(o.GetError());
    }
    else
    {
        return CreateAccessKeyOutcome(outcome.GetError());
    }
}

void CamClient::CreateAccessKeyAsync(const CreateAccessKeyRequest& request, const CreateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccessKeyRequest&;
    using Resp = CreateAccessKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccessKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::CreateAccessKeyOutcomeCallable CamClient::CreateAccessKeyCallable(const CreateAccessKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccessKeyOutcome>>();
    CreateAccessKeyAsync(
    request,
    [prom](
        const CamClient*,
        const CreateAccessKeyRequest&,
        CreateAccessKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreateGroupOutcome CamClient::CreateGroup(const CreateGroupRequest &request)
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

void CamClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::CreateGroupOutcomeCallable CamClient::CreateGroupCallable(const CreateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGroupOutcome>>();
    CreateGroupAsync(
    request,
    [prom](
        const CamClient*,
        const CreateGroupRequest&,
        CreateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreateMessageReceiverOutcome CamClient::CreateMessageReceiver(const CreateMessageReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMessageReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMessageReceiverResponse rsp = CreateMessageReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMessageReceiverOutcome(rsp);
        else
            return CreateMessageReceiverOutcome(o.GetError());
    }
    else
    {
        return CreateMessageReceiverOutcome(outcome.GetError());
    }
}

void CamClient::CreateMessageReceiverAsync(const CreateMessageReceiverRequest& request, const CreateMessageReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMessageReceiverRequest&;
    using Resp = CreateMessageReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMessageReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::CreateMessageReceiverOutcomeCallable CamClient::CreateMessageReceiverCallable(const CreateMessageReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMessageReceiverOutcome>>();
    CreateMessageReceiverAsync(
    request,
    [prom](
        const CamClient*,
        const CreateMessageReceiverRequest&,
        CreateMessageReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreateOIDCConfigOutcome CamClient::CreateOIDCConfig(const CreateOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOIDCConfigResponse rsp = CreateOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOIDCConfigOutcome(rsp);
        else
            return CreateOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return CreateOIDCConfigOutcome(outcome.GetError());
    }
}

void CamClient::CreateOIDCConfigAsync(const CreateOIDCConfigRequest& request, const CreateOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOIDCConfigRequest&;
    using Resp = CreateOIDCConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOIDCConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::CreateOIDCConfigOutcomeCallable CamClient::CreateOIDCConfigCallable(const CreateOIDCConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOIDCConfigOutcome>>();
    CreateOIDCConfigAsync(
    request,
    [prom](
        const CamClient*,
        const CreateOIDCConfigRequest&,
        CreateOIDCConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreatePolicyOutcome CamClient::CreatePolicy(const CreatePolicyRequest &request)
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

void CamClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::CreatePolicyOutcomeCallable CamClient::CreatePolicyCallable(const CreatePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePolicyOutcome>>();
    CreatePolicyAsync(
    request,
    [prom](
        const CamClient*,
        const CreatePolicyRequest&,
        CreatePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreatePolicyVersionOutcome CamClient::CreatePolicyVersion(const CreatePolicyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePolicyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePolicyVersionResponse rsp = CreatePolicyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePolicyVersionOutcome(rsp);
        else
            return CreatePolicyVersionOutcome(o.GetError());
    }
    else
    {
        return CreatePolicyVersionOutcome(outcome.GetError());
    }
}

void CamClient::CreatePolicyVersionAsync(const CreatePolicyVersionRequest& request, const CreatePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePolicyVersionRequest&;
    using Resp = CreatePolicyVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePolicyVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::CreatePolicyVersionOutcomeCallable CamClient::CreatePolicyVersionCallable(const CreatePolicyVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePolicyVersionOutcome>>();
    CreatePolicyVersionAsync(
    request,
    [prom](
        const CamClient*,
        const CreatePolicyVersionRequest&,
        CreatePolicyVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreateRoleOutcome CamClient::CreateRole(const CreateRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoleResponse rsp = CreateRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoleOutcome(rsp);
        else
            return CreateRoleOutcome(o.GetError());
    }
    else
    {
        return CreateRoleOutcome(outcome.GetError());
    }
}

void CamClient::CreateRoleAsync(const CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRoleRequest&;
    using Resp = CreateRoleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::CreateRoleOutcomeCallable CamClient::CreateRoleCallable(const CreateRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoleOutcome>>();
    CreateRoleAsync(
    request,
    [prom](
        const CamClient*,
        const CreateRoleRequest&,
        CreateRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreateSAMLProviderOutcome CamClient::CreateSAMLProvider(const CreateSAMLProviderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSAMLProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSAMLProviderResponse rsp = CreateSAMLProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSAMLProviderOutcome(rsp);
        else
            return CreateSAMLProviderOutcome(o.GetError());
    }
    else
    {
        return CreateSAMLProviderOutcome(outcome.GetError());
    }
}

void CamClient::CreateSAMLProviderAsync(const CreateSAMLProviderRequest& request, const CreateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSAMLProviderRequest&;
    using Resp = CreateSAMLProviderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSAMLProvider", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::CreateSAMLProviderOutcomeCallable CamClient::CreateSAMLProviderCallable(const CreateSAMLProviderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSAMLProviderOutcome>>();
    CreateSAMLProviderAsync(
    request,
    [prom](
        const CamClient*,
        const CreateSAMLProviderRequest&,
        CreateSAMLProviderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreateServiceLinkedRoleOutcome CamClient::CreateServiceLinkedRole(const CreateServiceLinkedRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceLinkedRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceLinkedRoleResponse rsp = CreateServiceLinkedRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceLinkedRoleOutcome(rsp);
        else
            return CreateServiceLinkedRoleOutcome(o.GetError());
    }
    else
    {
        return CreateServiceLinkedRoleOutcome(outcome.GetError());
    }
}

void CamClient::CreateServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateServiceLinkedRoleRequest&;
    using Resp = CreateServiceLinkedRoleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateServiceLinkedRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::CreateServiceLinkedRoleOutcomeCallable CamClient::CreateServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateServiceLinkedRoleOutcome>>();
    CreateServiceLinkedRoleAsync(
    request,
    [prom](
        const CamClient*,
        const CreateServiceLinkedRoleRequest&,
        CreateServiceLinkedRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreateSubAccountLoginIpPolicyOutcome CamClient::CreateSubAccountLoginIpPolicy(const CreateSubAccountLoginIpPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubAccountLoginIpPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubAccountLoginIpPolicyResponse rsp = CreateSubAccountLoginIpPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubAccountLoginIpPolicyOutcome(rsp);
        else
            return CreateSubAccountLoginIpPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateSubAccountLoginIpPolicyOutcome(outcome.GetError());
    }
}

void CamClient::CreateSubAccountLoginIpPolicyAsync(const CreateSubAccountLoginIpPolicyRequest& request, const CreateSubAccountLoginIpPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubAccountLoginIpPolicyRequest&;
    using Resp = CreateSubAccountLoginIpPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubAccountLoginIpPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::CreateSubAccountLoginIpPolicyOutcomeCallable CamClient::CreateSubAccountLoginIpPolicyCallable(const CreateSubAccountLoginIpPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubAccountLoginIpPolicyOutcome>>();
    CreateSubAccountLoginIpPolicyAsync(
    request,
    [prom](
        const CamClient*,
        const CreateSubAccountLoginIpPolicyRequest&,
        CreateSubAccountLoginIpPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreateUserOIDCConfigOutcome CamClient::CreateUserOIDCConfig(const CreateUserOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserOIDCConfigResponse rsp = CreateUserOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOIDCConfigOutcome(rsp);
        else
            return CreateUserOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return CreateUserOIDCConfigOutcome(outcome.GetError());
    }
}

void CamClient::CreateUserOIDCConfigAsync(const CreateUserOIDCConfigRequest& request, const CreateUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserOIDCConfigRequest&;
    using Resp = CreateUserOIDCConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserOIDCConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::CreateUserOIDCConfigOutcomeCallable CamClient::CreateUserOIDCConfigCallable(const CreateUserOIDCConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOIDCConfigOutcome>>();
    CreateUserOIDCConfigAsync(
    request,
    [prom](
        const CamClient*,
        const CreateUserOIDCConfigRequest&,
        CreateUserOIDCConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::CreateUserSAMLConfigOutcome CamClient::CreateUserSAMLConfig(const CreateUserSAMLConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserSAMLConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserSAMLConfigResponse rsp = CreateUserSAMLConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserSAMLConfigOutcome(rsp);
        else
            return CreateUserSAMLConfigOutcome(o.GetError());
    }
    else
    {
        return CreateUserSAMLConfigOutcome(outcome.GetError());
    }
}

void CamClient::CreateUserSAMLConfigAsync(const CreateUserSAMLConfigRequest& request, const CreateUserSAMLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserSAMLConfigRequest&;
    using Resp = CreateUserSAMLConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserSAMLConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::CreateUserSAMLConfigOutcomeCallable CamClient::CreateUserSAMLConfigCallable(const CreateUserSAMLConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserSAMLConfigOutcome>>();
    CreateUserSAMLConfigAsync(
    request,
    [prom](
        const CamClient*,
        const CreateUserSAMLConfigRequest&,
        CreateUserSAMLConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeleteAccessKeyOutcome CamClient::DeleteAccessKey(const DeleteAccessKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccessKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccessKeyResponse rsp = DeleteAccessKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccessKeyOutcome(rsp);
        else
            return DeleteAccessKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteAccessKeyOutcome(outcome.GetError());
    }
}

void CamClient::DeleteAccessKeyAsync(const DeleteAccessKeyRequest& request, const DeleteAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAccessKeyRequest&;
    using Resp = DeleteAccessKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccessKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DeleteAccessKeyOutcomeCallable CamClient::DeleteAccessKeyCallable(const DeleteAccessKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccessKeyOutcome>>();
    DeleteAccessKeyAsync(
    request,
    [prom](
        const CamClient*,
        const DeleteAccessKeyRequest&,
        DeleteAccessKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeleteGroupOutcome CamClient::DeleteGroup(const DeleteGroupRequest &request)
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

void CamClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::DeleteGroupOutcomeCallable CamClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGroupOutcome>>();
    DeleteGroupAsync(
    request,
    [prom](
        const CamClient*,
        const DeleteGroupRequest&,
        DeleteGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeleteMessageReceiverOutcome CamClient::DeleteMessageReceiver(const DeleteMessageReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMessageReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMessageReceiverResponse rsp = DeleteMessageReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMessageReceiverOutcome(rsp);
        else
            return DeleteMessageReceiverOutcome(o.GetError());
    }
    else
    {
        return DeleteMessageReceiverOutcome(outcome.GetError());
    }
}

void CamClient::DeleteMessageReceiverAsync(const DeleteMessageReceiverRequest& request, const DeleteMessageReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMessageReceiverRequest&;
    using Resp = DeleteMessageReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMessageReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DeleteMessageReceiverOutcomeCallable CamClient::DeleteMessageReceiverCallable(const DeleteMessageReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMessageReceiverOutcome>>();
    DeleteMessageReceiverAsync(
    request,
    [prom](
        const CamClient*,
        const DeleteMessageReceiverRequest&,
        DeleteMessageReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeleteOIDCConfigOutcome CamClient::DeleteOIDCConfig(const DeleteOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOIDCConfigResponse rsp = DeleteOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOIDCConfigOutcome(rsp);
        else
            return DeleteOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteOIDCConfigOutcome(outcome.GetError());
    }
}

void CamClient::DeleteOIDCConfigAsync(const DeleteOIDCConfigRequest& request, const DeleteOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOIDCConfigRequest&;
    using Resp = DeleteOIDCConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOIDCConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DeleteOIDCConfigOutcomeCallable CamClient::DeleteOIDCConfigCallable(const DeleteOIDCConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOIDCConfigOutcome>>();
    DeleteOIDCConfigAsync(
    request,
    [prom](
        const CamClient*,
        const DeleteOIDCConfigRequest&,
        DeleteOIDCConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeletePolicyOutcome CamClient::DeletePolicy(const DeletePolicyRequest &request)
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

void CamClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::DeletePolicyOutcomeCallable CamClient::DeletePolicyCallable(const DeletePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePolicyOutcome>>();
    DeletePolicyAsync(
    request,
    [prom](
        const CamClient*,
        const DeletePolicyRequest&,
        DeletePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeletePolicyVersionOutcome CamClient::DeletePolicyVersion(const DeletePolicyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePolicyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePolicyVersionResponse rsp = DeletePolicyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePolicyVersionOutcome(rsp);
        else
            return DeletePolicyVersionOutcome(o.GetError());
    }
    else
    {
        return DeletePolicyVersionOutcome(outcome.GetError());
    }
}

void CamClient::DeletePolicyVersionAsync(const DeletePolicyVersionRequest& request, const DeletePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePolicyVersionRequest&;
    using Resp = DeletePolicyVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePolicyVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DeletePolicyVersionOutcomeCallable CamClient::DeletePolicyVersionCallable(const DeletePolicyVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePolicyVersionOutcome>>();
    DeletePolicyVersionAsync(
    request,
    [prom](
        const CamClient*,
        const DeletePolicyVersionRequest&,
        DeletePolicyVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeleteRoleOutcome CamClient::DeleteRole(const DeleteRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoleResponse rsp = DeleteRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoleOutcome(rsp);
        else
            return DeleteRoleOutcome(o.GetError());
    }
    else
    {
        return DeleteRoleOutcome(outcome.GetError());
    }
}

void CamClient::DeleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRoleRequest&;
    using Resp = DeleteRoleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DeleteRoleOutcomeCallable CamClient::DeleteRoleCallable(const DeleteRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoleOutcome>>();
    DeleteRoleAsync(
    request,
    [prom](
        const CamClient*,
        const DeleteRoleRequest&,
        DeleteRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeleteRolePermissionsBoundaryOutcome CamClient::DeleteRolePermissionsBoundary(const DeleteRolePermissionsBoundaryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRolePermissionsBoundary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRolePermissionsBoundaryResponse rsp = DeleteRolePermissionsBoundaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRolePermissionsBoundaryOutcome(rsp);
        else
            return DeleteRolePermissionsBoundaryOutcome(o.GetError());
    }
    else
    {
        return DeleteRolePermissionsBoundaryOutcome(outcome.GetError());
    }
}

void CamClient::DeleteRolePermissionsBoundaryAsync(const DeleteRolePermissionsBoundaryRequest& request, const DeleteRolePermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRolePermissionsBoundaryRequest&;
    using Resp = DeleteRolePermissionsBoundaryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRolePermissionsBoundary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DeleteRolePermissionsBoundaryOutcomeCallable CamClient::DeleteRolePermissionsBoundaryCallable(const DeleteRolePermissionsBoundaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRolePermissionsBoundaryOutcome>>();
    DeleteRolePermissionsBoundaryAsync(
    request,
    [prom](
        const CamClient*,
        const DeleteRolePermissionsBoundaryRequest&,
        DeleteRolePermissionsBoundaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeleteSAMLProviderOutcome CamClient::DeleteSAMLProvider(const DeleteSAMLProviderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSAMLProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSAMLProviderResponse rsp = DeleteSAMLProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSAMLProviderOutcome(rsp);
        else
            return DeleteSAMLProviderOutcome(o.GetError());
    }
    else
    {
        return DeleteSAMLProviderOutcome(outcome.GetError());
    }
}

void CamClient::DeleteSAMLProviderAsync(const DeleteSAMLProviderRequest& request, const DeleteSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSAMLProviderRequest&;
    using Resp = DeleteSAMLProviderResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSAMLProvider", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DeleteSAMLProviderOutcomeCallable CamClient::DeleteSAMLProviderCallable(const DeleteSAMLProviderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSAMLProviderOutcome>>();
    DeleteSAMLProviderAsync(
    request,
    [prom](
        const CamClient*,
        const DeleteSAMLProviderRequest&,
        DeleteSAMLProviderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeleteServiceLinkedRoleOutcome CamClient::DeleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceLinkedRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceLinkedRoleResponse rsp = DeleteServiceLinkedRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceLinkedRoleOutcome(rsp);
        else
            return DeleteServiceLinkedRoleOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceLinkedRoleOutcome(outcome.GetError());
    }
}

void CamClient::DeleteServiceLinkedRoleAsync(const DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteServiceLinkedRoleRequest&;
    using Resp = DeleteServiceLinkedRoleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteServiceLinkedRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DeleteServiceLinkedRoleOutcomeCallable CamClient::DeleteServiceLinkedRoleCallable(const DeleteServiceLinkedRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteServiceLinkedRoleOutcome>>();
    DeleteServiceLinkedRoleAsync(
    request,
    [prom](
        const CamClient*,
        const DeleteServiceLinkedRoleRequest&,
        DeleteServiceLinkedRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeleteUserOutcome CamClient::DeleteUser(const DeleteUserRequest &request)
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

void CamClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::DeleteUserOutcomeCallable CamClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const CamClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DeleteUserPermissionsBoundaryOutcome CamClient::DeleteUserPermissionsBoundary(const DeleteUserPermissionsBoundaryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserPermissionsBoundary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserPermissionsBoundaryResponse rsp = DeleteUserPermissionsBoundaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserPermissionsBoundaryOutcome(rsp);
        else
            return DeleteUserPermissionsBoundaryOutcome(o.GetError());
    }
    else
    {
        return DeleteUserPermissionsBoundaryOutcome(outcome.GetError());
    }
}

void CamClient::DeleteUserPermissionsBoundaryAsync(const DeleteUserPermissionsBoundaryRequest& request, const DeleteUserPermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserPermissionsBoundaryRequest&;
    using Resp = DeleteUserPermissionsBoundaryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserPermissionsBoundary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DeleteUserPermissionsBoundaryOutcomeCallable CamClient::DeleteUserPermissionsBoundaryCallable(const DeleteUserPermissionsBoundaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserPermissionsBoundaryOutcome>>();
    DeleteUserPermissionsBoundaryAsync(
    request,
    [prom](
        const CamClient*,
        const DeleteUserPermissionsBoundaryRequest&,
        DeleteUserPermissionsBoundaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DescribeOIDCConfigOutcome CamClient::DescribeOIDCConfig(const DescribeOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOIDCConfigResponse rsp = DescribeOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOIDCConfigOutcome(rsp);
        else
            return DescribeOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeOIDCConfigOutcome(outcome.GetError());
    }
}

void CamClient::DescribeOIDCConfigAsync(const DescribeOIDCConfigRequest& request, const DescribeOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOIDCConfigRequest&;
    using Resp = DescribeOIDCConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOIDCConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DescribeOIDCConfigOutcomeCallable CamClient::DescribeOIDCConfigCallable(const DescribeOIDCConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOIDCConfigOutcome>>();
    DescribeOIDCConfigAsync(
    request,
    [prom](
        const CamClient*,
        const DescribeOIDCConfigRequest&,
        DescribeOIDCConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DescribeRoleListOutcome CamClient::DescribeRoleList(const DescribeRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoleListResponse rsp = DescribeRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoleListOutcome(rsp);
        else
            return DescribeRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeRoleListOutcome(outcome.GetError());
    }
}

void CamClient::DescribeRoleListAsync(const DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoleListRequest&;
    using Resp = DescribeRoleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DescribeRoleListOutcomeCallable CamClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoleListOutcome>>();
    DescribeRoleListAsync(
    request,
    [prom](
        const CamClient*,
        const DescribeRoleListRequest&,
        DescribeRoleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DescribeSafeAuthFlagOutcome CamClient::DescribeSafeAuthFlag(const DescribeSafeAuthFlagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSafeAuthFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSafeAuthFlagResponse rsp = DescribeSafeAuthFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSafeAuthFlagOutcome(rsp);
        else
            return DescribeSafeAuthFlagOutcome(o.GetError());
    }
    else
    {
        return DescribeSafeAuthFlagOutcome(outcome.GetError());
    }
}

void CamClient::DescribeSafeAuthFlagAsync(const DescribeSafeAuthFlagRequest& request, const DescribeSafeAuthFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSafeAuthFlagRequest&;
    using Resp = DescribeSafeAuthFlagResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSafeAuthFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DescribeSafeAuthFlagOutcomeCallable CamClient::DescribeSafeAuthFlagCallable(const DescribeSafeAuthFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSafeAuthFlagOutcome>>();
    DescribeSafeAuthFlagAsync(
    request,
    [prom](
        const CamClient*,
        const DescribeSafeAuthFlagRequest&,
        DescribeSafeAuthFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DescribeSafeAuthFlagCollOutcome CamClient::DescribeSafeAuthFlagColl(const DescribeSafeAuthFlagCollRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSafeAuthFlagColl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSafeAuthFlagCollResponse rsp = DescribeSafeAuthFlagCollResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSafeAuthFlagCollOutcome(rsp);
        else
            return DescribeSafeAuthFlagCollOutcome(o.GetError());
    }
    else
    {
        return DescribeSafeAuthFlagCollOutcome(outcome.GetError());
    }
}

void CamClient::DescribeSafeAuthFlagCollAsync(const DescribeSafeAuthFlagCollRequest& request, const DescribeSafeAuthFlagCollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSafeAuthFlagCollRequest&;
    using Resp = DescribeSafeAuthFlagCollResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSafeAuthFlagColl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DescribeSafeAuthFlagCollOutcomeCallable CamClient::DescribeSafeAuthFlagCollCallable(const DescribeSafeAuthFlagCollRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSafeAuthFlagCollOutcome>>();
    DescribeSafeAuthFlagCollAsync(
    request,
    [prom](
        const CamClient*,
        const DescribeSafeAuthFlagCollRequest&,
        DescribeSafeAuthFlagCollOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DescribeSafeAuthFlagIntlOutcome CamClient::DescribeSafeAuthFlagIntl(const DescribeSafeAuthFlagIntlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSafeAuthFlagIntl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSafeAuthFlagIntlResponse rsp = DescribeSafeAuthFlagIntlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSafeAuthFlagIntlOutcome(rsp);
        else
            return DescribeSafeAuthFlagIntlOutcome(o.GetError());
    }
    else
    {
        return DescribeSafeAuthFlagIntlOutcome(outcome.GetError());
    }
}

void CamClient::DescribeSafeAuthFlagIntlAsync(const DescribeSafeAuthFlagIntlRequest& request, const DescribeSafeAuthFlagIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSafeAuthFlagIntlRequest&;
    using Resp = DescribeSafeAuthFlagIntlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSafeAuthFlagIntl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DescribeSafeAuthFlagIntlOutcomeCallable CamClient::DescribeSafeAuthFlagIntlCallable(const DescribeSafeAuthFlagIntlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSafeAuthFlagIntlOutcome>>();
    DescribeSafeAuthFlagIntlAsync(
    request,
    [prom](
        const CamClient*,
        const DescribeSafeAuthFlagIntlRequest&,
        DescribeSafeAuthFlagIntlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DescribeSubAccountsOutcome CamClient::DescribeSubAccounts(const DescribeSubAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubAccountsResponse rsp = DescribeSubAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubAccountsOutcome(rsp);
        else
            return DescribeSubAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubAccountsOutcome(outcome.GetError());
    }
}

void CamClient::DescribeSubAccountsAsync(const DescribeSubAccountsRequest& request, const DescribeSubAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubAccountsRequest&;
    using Resp = DescribeSubAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DescribeSubAccountsOutcomeCallable CamClient::DescribeSubAccountsCallable(const DescribeSubAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubAccountsOutcome>>();
    DescribeSubAccountsAsync(
    request,
    [prom](
        const CamClient*,
        const DescribeSubAccountsRequest&,
        DescribeSubAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DescribeUserOIDCConfigOutcome CamClient::DescribeUserOIDCConfig(const DescribeUserOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserOIDCConfigResponse rsp = DescribeUserOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserOIDCConfigOutcome(rsp);
        else
            return DescribeUserOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUserOIDCConfigOutcome(outcome.GetError());
    }
}

void CamClient::DescribeUserOIDCConfigAsync(const DescribeUserOIDCConfigRequest& request, const DescribeUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserOIDCConfigRequest&;
    using Resp = DescribeUserOIDCConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserOIDCConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DescribeUserOIDCConfigOutcomeCallable CamClient::DescribeUserOIDCConfigCallable(const DescribeUserOIDCConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserOIDCConfigOutcome>>();
    DescribeUserOIDCConfigAsync(
    request,
    [prom](
        const CamClient*,
        const DescribeUserOIDCConfigRequest&,
        DescribeUserOIDCConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DescribeUserSAMLConfigOutcome CamClient::DescribeUserSAMLConfig(const DescribeUserSAMLConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserSAMLConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserSAMLConfigResponse rsp = DescribeUserSAMLConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserSAMLConfigOutcome(rsp);
        else
            return DescribeUserSAMLConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUserSAMLConfigOutcome(outcome.GetError());
    }
}

void CamClient::DescribeUserSAMLConfigAsync(const DescribeUserSAMLConfigRequest& request, const DescribeUserSAMLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserSAMLConfigRequest&;
    using Resp = DescribeUserSAMLConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserSAMLConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DescribeUserSAMLConfigOutcomeCallable CamClient::DescribeUserSAMLConfigCallable(const DescribeUserSAMLConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserSAMLConfigOutcome>>();
    DescribeUserSAMLConfigAsync(
    request,
    [prom](
        const CamClient*,
        const DescribeUserSAMLConfigRequest&,
        DescribeUserSAMLConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DetachGroupPolicyOutcome CamClient::DetachGroupPolicy(const DetachGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachGroupPolicyResponse rsp = DetachGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachGroupPolicyOutcome(rsp);
        else
            return DetachGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachGroupPolicyOutcome(outcome.GetError());
    }
}

void CamClient::DetachGroupPolicyAsync(const DetachGroupPolicyRequest& request, const DetachGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachGroupPolicyRequest&;
    using Resp = DetachGroupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DetachGroupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DetachGroupPolicyOutcomeCallable CamClient::DetachGroupPolicyCallable(const DetachGroupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachGroupPolicyOutcome>>();
    DetachGroupPolicyAsync(
    request,
    [prom](
        const CamClient*,
        const DetachGroupPolicyRequest&,
        DetachGroupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DetachRolePolicyOutcome CamClient::DetachRolePolicy(const DetachRolePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachRolePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachRolePolicyResponse rsp = DetachRolePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachRolePolicyOutcome(rsp);
        else
            return DetachRolePolicyOutcome(o.GetError());
    }
    else
    {
        return DetachRolePolicyOutcome(outcome.GetError());
    }
}

void CamClient::DetachRolePolicyAsync(const DetachRolePolicyRequest& request, const DetachRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachRolePolicyRequest&;
    using Resp = DetachRolePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DetachRolePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DetachRolePolicyOutcomeCallable CamClient::DetachRolePolicyCallable(const DetachRolePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachRolePolicyOutcome>>();
    DetachRolePolicyAsync(
    request,
    [prom](
        const CamClient*,
        const DetachRolePolicyRequest&,
        DetachRolePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DetachUserPolicyOutcome CamClient::DetachUserPolicy(const DetachUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachUserPolicyResponse rsp = DetachUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachUserPolicyOutcome(rsp);
        else
            return DetachUserPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachUserPolicyOutcome(outcome.GetError());
    }
}

void CamClient::DetachUserPolicyAsync(const DetachUserPolicyRequest& request, const DetachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachUserPolicyRequest&;
    using Resp = DetachUserPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DetachUserPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DetachUserPolicyOutcomeCallable CamClient::DetachUserPolicyCallable(const DetachUserPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachUserPolicyOutcome>>();
    DetachUserPolicyAsync(
    request,
    [prom](
        const CamClient*,
        const DetachUserPolicyRequest&,
        DetachUserPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::DisableUserSSOOutcome CamClient::DisableUserSSO(const DisableUserSSORequest &request)
{
    auto outcome = MakeRequest(request, "DisableUserSSO");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableUserSSOResponse rsp = DisableUserSSOResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableUserSSOOutcome(rsp);
        else
            return DisableUserSSOOutcome(o.GetError());
    }
    else
    {
        return DisableUserSSOOutcome(outcome.GetError());
    }
}

void CamClient::DisableUserSSOAsync(const DisableUserSSORequest& request, const DisableUserSSOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableUserSSORequest&;
    using Resp = DisableUserSSOResponse;

    DoRequestAsync<Req, Resp>(
        "DisableUserSSO", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::DisableUserSSOOutcomeCallable CamClient::DisableUserSSOCallable(const DisableUserSSORequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableUserSSOOutcome>>();
    DisableUserSSOAsync(
    request,
    [prom](
        const CamClient*,
        const DisableUserSSORequest&,
        DisableUserSSOOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetAccountSummaryOutcome CamClient::GetAccountSummary(const GetAccountSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "GetAccountSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAccountSummaryResponse rsp = GetAccountSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAccountSummaryOutcome(rsp);
        else
            return GetAccountSummaryOutcome(o.GetError());
    }
    else
    {
        return GetAccountSummaryOutcome(outcome.GetError());
    }
}

void CamClient::GetAccountSummaryAsync(const GetAccountSummaryRequest& request, const GetAccountSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAccountSummaryRequest&;
    using Resp = GetAccountSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "GetAccountSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetAccountSummaryOutcomeCallable CamClient::GetAccountSummaryCallable(const GetAccountSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAccountSummaryOutcome>>();
    GetAccountSummaryAsync(
    request,
    [prom](
        const CamClient*,
        const GetAccountSummaryRequest&,
        GetAccountSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetCustomMFATokenInfoOutcome CamClient::GetCustomMFATokenInfo(const GetCustomMFATokenInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetCustomMFATokenInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCustomMFATokenInfoResponse rsp = GetCustomMFATokenInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCustomMFATokenInfoOutcome(rsp);
        else
            return GetCustomMFATokenInfoOutcome(o.GetError());
    }
    else
    {
        return GetCustomMFATokenInfoOutcome(outcome.GetError());
    }
}

void CamClient::GetCustomMFATokenInfoAsync(const GetCustomMFATokenInfoRequest& request, const GetCustomMFATokenInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCustomMFATokenInfoRequest&;
    using Resp = GetCustomMFATokenInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetCustomMFATokenInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetCustomMFATokenInfoOutcomeCallable CamClient::GetCustomMFATokenInfoCallable(const GetCustomMFATokenInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCustomMFATokenInfoOutcome>>();
    GetCustomMFATokenInfoAsync(
    request,
    [prom](
        const CamClient*,
        const GetCustomMFATokenInfoRequest&,
        GetCustomMFATokenInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetGroupOutcome CamClient::GetGroup(const GetGroupRequest &request)
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

void CamClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::GetGroupOutcomeCallable CamClient::GetGroupCallable(const GetGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetGroupOutcome>>();
    GetGroupAsync(
    request,
    [prom](
        const CamClient*,
        const GetGroupRequest&,
        GetGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetPolicyOutcome CamClient::GetPolicy(const GetPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "GetPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPolicyResponse rsp = GetPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPolicyOutcome(rsp);
        else
            return GetPolicyOutcome(o.GetError());
    }
    else
    {
        return GetPolicyOutcome(outcome.GetError());
    }
}

void CamClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPolicyRequest&;
    using Resp = GetPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "GetPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetPolicyOutcomeCallable CamClient::GetPolicyCallable(const GetPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPolicyOutcome>>();
    GetPolicyAsync(
    request,
    [prom](
        const CamClient*,
        const GetPolicyRequest&,
        GetPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetPolicyVersionOutcome CamClient::GetPolicyVersion(const GetPolicyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "GetPolicyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPolicyVersionResponse rsp = GetPolicyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPolicyVersionOutcome(rsp);
        else
            return GetPolicyVersionOutcome(o.GetError());
    }
    else
    {
        return GetPolicyVersionOutcome(outcome.GetError());
    }
}

void CamClient::GetPolicyVersionAsync(const GetPolicyVersionRequest& request, const GetPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPolicyVersionRequest&;
    using Resp = GetPolicyVersionResponse;

    DoRequestAsync<Req, Resp>(
        "GetPolicyVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetPolicyVersionOutcomeCallable CamClient::GetPolicyVersionCallable(const GetPolicyVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPolicyVersionOutcome>>();
    GetPolicyVersionAsync(
    request,
    [prom](
        const CamClient*,
        const GetPolicyVersionRequest&,
        GetPolicyVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetRoleOutcome CamClient::GetRole(const GetRoleRequest &request)
{
    auto outcome = MakeRequest(request, "GetRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRoleResponse rsp = GetRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRoleOutcome(rsp);
        else
            return GetRoleOutcome(o.GetError());
    }
    else
    {
        return GetRoleOutcome(outcome.GetError());
    }
}

void CamClient::GetRoleAsync(const GetRoleRequest& request, const GetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRoleRequest&;
    using Resp = GetRoleResponse;

    DoRequestAsync<Req, Resp>(
        "GetRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetRoleOutcomeCallable CamClient::GetRoleCallable(const GetRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRoleOutcome>>();
    GetRoleAsync(
    request,
    [prom](
        const CamClient*,
        const GetRoleRequest&,
        GetRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetRolePermissionBoundaryOutcome CamClient::GetRolePermissionBoundary(const GetRolePermissionBoundaryRequest &request)
{
    auto outcome = MakeRequest(request, "GetRolePermissionBoundary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRolePermissionBoundaryResponse rsp = GetRolePermissionBoundaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRolePermissionBoundaryOutcome(rsp);
        else
            return GetRolePermissionBoundaryOutcome(o.GetError());
    }
    else
    {
        return GetRolePermissionBoundaryOutcome(outcome.GetError());
    }
}

void CamClient::GetRolePermissionBoundaryAsync(const GetRolePermissionBoundaryRequest& request, const GetRolePermissionBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRolePermissionBoundaryRequest&;
    using Resp = GetRolePermissionBoundaryResponse;

    DoRequestAsync<Req, Resp>(
        "GetRolePermissionBoundary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetRolePermissionBoundaryOutcomeCallable CamClient::GetRolePermissionBoundaryCallable(const GetRolePermissionBoundaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRolePermissionBoundaryOutcome>>();
    GetRolePermissionBoundaryAsync(
    request,
    [prom](
        const CamClient*,
        const GetRolePermissionBoundaryRequest&,
        GetRolePermissionBoundaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetSAMLProviderOutcome CamClient::GetSAMLProvider(const GetSAMLProviderRequest &request)
{
    auto outcome = MakeRequest(request, "GetSAMLProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSAMLProviderResponse rsp = GetSAMLProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSAMLProviderOutcome(rsp);
        else
            return GetSAMLProviderOutcome(o.GetError());
    }
    else
    {
        return GetSAMLProviderOutcome(outcome.GetError());
    }
}

void CamClient::GetSAMLProviderAsync(const GetSAMLProviderRequest& request, const GetSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSAMLProviderRequest&;
    using Resp = GetSAMLProviderResponse;

    DoRequestAsync<Req, Resp>(
        "GetSAMLProvider", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetSAMLProviderOutcomeCallable CamClient::GetSAMLProviderCallable(const GetSAMLProviderRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSAMLProviderOutcome>>();
    GetSAMLProviderAsync(
    request,
    [prom](
        const CamClient*,
        const GetSAMLProviderRequest&,
        GetSAMLProviderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetSecurityLastUsedOutcome CamClient::GetSecurityLastUsed(const GetSecurityLastUsedRequest &request)
{
    auto outcome = MakeRequest(request, "GetSecurityLastUsed");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSecurityLastUsedResponse rsp = GetSecurityLastUsedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSecurityLastUsedOutcome(rsp);
        else
            return GetSecurityLastUsedOutcome(o.GetError());
    }
    else
    {
        return GetSecurityLastUsedOutcome(outcome.GetError());
    }
}

void CamClient::GetSecurityLastUsedAsync(const GetSecurityLastUsedRequest& request, const GetSecurityLastUsedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSecurityLastUsedRequest&;
    using Resp = GetSecurityLastUsedResponse;

    DoRequestAsync<Req, Resp>(
        "GetSecurityLastUsed", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetSecurityLastUsedOutcomeCallable CamClient::GetSecurityLastUsedCallable(const GetSecurityLastUsedRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSecurityLastUsedOutcome>>();
    GetSecurityLastUsedAsync(
    request,
    [prom](
        const CamClient*,
        const GetSecurityLastUsedRequest&,
        GetSecurityLastUsedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetServiceLinkedRoleDeletionStatusOutcome CamClient::GetServiceLinkedRoleDeletionStatus(const GetServiceLinkedRoleDeletionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetServiceLinkedRoleDeletionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetServiceLinkedRoleDeletionStatusResponse rsp = GetServiceLinkedRoleDeletionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetServiceLinkedRoleDeletionStatusOutcome(rsp);
        else
            return GetServiceLinkedRoleDeletionStatusOutcome(o.GetError());
    }
    else
    {
        return GetServiceLinkedRoleDeletionStatusOutcome(outcome.GetError());
    }
}

void CamClient::GetServiceLinkedRoleDeletionStatusAsync(const GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetServiceLinkedRoleDeletionStatusRequest&;
    using Resp = GetServiceLinkedRoleDeletionStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetServiceLinkedRoleDeletionStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetServiceLinkedRoleDeletionStatusOutcomeCallable CamClient::GetServiceLinkedRoleDeletionStatusCallable(const GetServiceLinkedRoleDeletionStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetServiceLinkedRoleDeletionStatusOutcome>>();
    GetServiceLinkedRoleDeletionStatusAsync(
    request,
    [prom](
        const CamClient*,
        const GetServiceLinkedRoleDeletionStatusRequest&,
        GetServiceLinkedRoleDeletionStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetUserOutcome CamClient::GetUser(const GetUserRequest &request)
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

void CamClient::GetUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::GetUserOutcomeCallable CamClient::GetUserCallable(const GetUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUserOutcome>>();
    GetUserAsync(
    request,
    [prom](
        const CamClient*,
        const GetUserRequest&,
        GetUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetUserAppIdOutcome CamClient::GetUserAppId(const GetUserAppIdRequest &request)
{
    auto outcome = MakeRequest(request, "GetUserAppId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUserAppIdResponse rsp = GetUserAppIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUserAppIdOutcome(rsp);
        else
            return GetUserAppIdOutcome(o.GetError());
    }
    else
    {
        return GetUserAppIdOutcome(outcome.GetError());
    }
}

void CamClient::GetUserAppIdAsync(const GetUserAppIdRequest& request, const GetUserAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUserAppIdRequest&;
    using Resp = GetUserAppIdResponse;

    DoRequestAsync<Req, Resp>(
        "GetUserAppId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetUserAppIdOutcomeCallable CamClient::GetUserAppIdCallable(const GetUserAppIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUserAppIdOutcome>>();
    GetUserAppIdAsync(
    request,
    [prom](
        const CamClient*,
        const GetUserAppIdRequest&,
        GetUserAppIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::GetUserPermissionBoundaryOutcome CamClient::GetUserPermissionBoundary(const GetUserPermissionBoundaryRequest &request)
{
    auto outcome = MakeRequest(request, "GetUserPermissionBoundary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUserPermissionBoundaryResponse rsp = GetUserPermissionBoundaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUserPermissionBoundaryOutcome(rsp);
        else
            return GetUserPermissionBoundaryOutcome(o.GetError());
    }
    else
    {
        return GetUserPermissionBoundaryOutcome(outcome.GetError());
    }
}

void CamClient::GetUserPermissionBoundaryAsync(const GetUserPermissionBoundaryRequest& request, const GetUserPermissionBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUserPermissionBoundaryRequest&;
    using Resp = GetUserPermissionBoundaryResponse;

    DoRequestAsync<Req, Resp>(
        "GetUserPermissionBoundary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::GetUserPermissionBoundaryOutcomeCallable CamClient::GetUserPermissionBoundaryCallable(const GetUserPermissionBoundaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUserPermissionBoundaryOutcome>>();
    GetUserPermissionBoundaryAsync(
    request,
    [prom](
        const CamClient*,
        const GetUserPermissionBoundaryRequest&,
        GetUserPermissionBoundaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListAccessKeysOutcome CamClient::ListAccessKeys(const ListAccessKeysRequest &request)
{
    auto outcome = MakeRequest(request, "ListAccessKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAccessKeysResponse rsp = ListAccessKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAccessKeysOutcome(rsp);
        else
            return ListAccessKeysOutcome(o.GetError());
    }
    else
    {
        return ListAccessKeysOutcome(outcome.GetError());
    }
}

void CamClient::ListAccessKeysAsync(const ListAccessKeysRequest& request, const ListAccessKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAccessKeysRequest&;
    using Resp = ListAccessKeysResponse;

    DoRequestAsync<Req, Resp>(
        "ListAccessKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListAccessKeysOutcomeCallable CamClient::ListAccessKeysCallable(const ListAccessKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAccessKeysOutcome>>();
    ListAccessKeysAsync(
    request,
    [prom](
        const CamClient*,
        const ListAccessKeysRequest&,
        ListAccessKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListAttachedGroupPoliciesOutcome CamClient::ListAttachedGroupPolicies(const ListAttachedGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttachedGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttachedGroupPoliciesResponse rsp = ListAttachedGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttachedGroupPoliciesOutcome(rsp);
        else
            return ListAttachedGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return ListAttachedGroupPoliciesOutcome(outcome.GetError());
    }
}

void CamClient::ListAttachedGroupPoliciesAsync(const ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAttachedGroupPoliciesRequest&;
    using Resp = ListAttachedGroupPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAttachedGroupPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListAttachedGroupPoliciesOutcomeCallable CamClient::ListAttachedGroupPoliciesCallable(const ListAttachedGroupPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAttachedGroupPoliciesOutcome>>();
    ListAttachedGroupPoliciesAsync(
    request,
    [prom](
        const CamClient*,
        const ListAttachedGroupPoliciesRequest&,
        ListAttachedGroupPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListAttachedRolePoliciesOutcome CamClient::ListAttachedRolePolicies(const ListAttachedRolePoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttachedRolePolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttachedRolePoliciesResponse rsp = ListAttachedRolePoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttachedRolePoliciesOutcome(rsp);
        else
            return ListAttachedRolePoliciesOutcome(o.GetError());
    }
    else
    {
        return ListAttachedRolePoliciesOutcome(outcome.GetError());
    }
}

void CamClient::ListAttachedRolePoliciesAsync(const ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAttachedRolePoliciesRequest&;
    using Resp = ListAttachedRolePoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAttachedRolePolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListAttachedRolePoliciesOutcomeCallable CamClient::ListAttachedRolePoliciesCallable(const ListAttachedRolePoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAttachedRolePoliciesOutcome>>();
    ListAttachedRolePoliciesAsync(
    request,
    [prom](
        const CamClient*,
        const ListAttachedRolePoliciesRequest&,
        ListAttachedRolePoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListAttachedUserAllPoliciesOutcome CamClient::ListAttachedUserAllPolicies(const ListAttachedUserAllPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttachedUserAllPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttachedUserAllPoliciesResponse rsp = ListAttachedUserAllPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttachedUserAllPoliciesOutcome(rsp);
        else
            return ListAttachedUserAllPoliciesOutcome(o.GetError());
    }
    else
    {
        return ListAttachedUserAllPoliciesOutcome(outcome.GetError());
    }
}

void CamClient::ListAttachedUserAllPoliciesAsync(const ListAttachedUserAllPoliciesRequest& request, const ListAttachedUserAllPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAttachedUserAllPoliciesRequest&;
    using Resp = ListAttachedUserAllPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAttachedUserAllPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListAttachedUserAllPoliciesOutcomeCallable CamClient::ListAttachedUserAllPoliciesCallable(const ListAttachedUserAllPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAttachedUserAllPoliciesOutcome>>();
    ListAttachedUserAllPoliciesAsync(
    request,
    [prom](
        const CamClient*,
        const ListAttachedUserAllPoliciesRequest&,
        ListAttachedUserAllPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListAttachedUserPoliciesOutcome CamClient::ListAttachedUserPolicies(const ListAttachedUserPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttachedUserPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttachedUserPoliciesResponse rsp = ListAttachedUserPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttachedUserPoliciesOutcome(rsp);
        else
            return ListAttachedUserPoliciesOutcome(o.GetError());
    }
    else
    {
        return ListAttachedUserPoliciesOutcome(outcome.GetError());
    }
}

void CamClient::ListAttachedUserPoliciesAsync(const ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAttachedUserPoliciesRequest&;
    using Resp = ListAttachedUserPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAttachedUserPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListAttachedUserPoliciesOutcomeCallable CamClient::ListAttachedUserPoliciesCallable(const ListAttachedUserPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAttachedUserPoliciesOutcome>>();
    ListAttachedUserPoliciesAsync(
    request,
    [prom](
        const CamClient*,
        const ListAttachedUserPoliciesRequest&,
        ListAttachedUserPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListCollaboratorsOutcome CamClient::ListCollaborators(const ListCollaboratorsRequest &request)
{
    auto outcome = MakeRequest(request, "ListCollaborators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCollaboratorsResponse rsp = ListCollaboratorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCollaboratorsOutcome(rsp);
        else
            return ListCollaboratorsOutcome(o.GetError());
    }
    else
    {
        return ListCollaboratorsOutcome(outcome.GetError());
    }
}

void CamClient::ListCollaboratorsAsync(const ListCollaboratorsRequest& request, const ListCollaboratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListCollaboratorsRequest&;
    using Resp = ListCollaboratorsResponse;

    DoRequestAsync<Req, Resp>(
        "ListCollaborators", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListCollaboratorsOutcomeCallable CamClient::ListCollaboratorsCallable(const ListCollaboratorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListCollaboratorsOutcome>>();
    ListCollaboratorsAsync(
    request,
    [prom](
        const CamClient*,
        const ListCollaboratorsRequest&,
        ListCollaboratorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListEntitiesForPolicyOutcome CamClient::ListEntitiesForPolicy(const ListEntitiesForPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ListEntitiesForPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEntitiesForPolicyResponse rsp = ListEntitiesForPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEntitiesForPolicyOutcome(rsp);
        else
            return ListEntitiesForPolicyOutcome(o.GetError());
    }
    else
    {
        return ListEntitiesForPolicyOutcome(outcome.GetError());
    }
}

void CamClient::ListEntitiesForPolicyAsync(const ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListEntitiesForPolicyRequest&;
    using Resp = ListEntitiesForPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ListEntitiesForPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListEntitiesForPolicyOutcomeCallable CamClient::ListEntitiesForPolicyCallable(const ListEntitiesForPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListEntitiesForPolicyOutcome>>();
    ListEntitiesForPolicyAsync(
    request,
    [prom](
        const CamClient*,
        const ListEntitiesForPolicyRequest&,
        ListEntitiesForPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListGroupsOutcome CamClient::ListGroups(const ListGroupsRequest &request)
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

void CamClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::ListGroupsOutcomeCallable CamClient::ListGroupsCallable(const ListGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListGroupsOutcome>>();
    ListGroupsAsync(
    request,
    [prom](
        const CamClient*,
        const ListGroupsRequest&,
        ListGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListGroupsForUserOutcome CamClient::ListGroupsForUser(const ListGroupsForUserRequest &request)
{
    auto outcome = MakeRequest(request, "ListGroupsForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListGroupsForUserResponse rsp = ListGroupsForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListGroupsForUserOutcome(rsp);
        else
            return ListGroupsForUserOutcome(o.GetError());
    }
    else
    {
        return ListGroupsForUserOutcome(outcome.GetError());
    }
}

void CamClient::ListGroupsForUserAsync(const ListGroupsForUserRequest& request, const ListGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListGroupsForUserRequest&;
    using Resp = ListGroupsForUserResponse;

    DoRequestAsync<Req, Resp>(
        "ListGroupsForUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListGroupsForUserOutcomeCallable CamClient::ListGroupsForUserCallable(const ListGroupsForUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListGroupsForUserOutcome>>();
    ListGroupsForUserAsync(
    request,
    [prom](
        const CamClient*,
        const ListGroupsForUserRequest&,
        ListGroupsForUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListPoliciesOutcome CamClient::ListPolicies(const ListPoliciesRequest &request)
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

void CamClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::ListPoliciesOutcomeCallable CamClient::ListPoliciesCallable(const ListPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListPoliciesOutcome>>();
    ListPoliciesAsync(
    request,
    [prom](
        const CamClient*,
        const ListPoliciesRequest&,
        ListPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListPoliciesGrantingServiceAccessOutcome CamClient::ListPoliciesGrantingServiceAccess(const ListPoliciesGrantingServiceAccessRequest &request)
{
    auto outcome = MakeRequest(request, "ListPoliciesGrantingServiceAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPoliciesGrantingServiceAccessResponse rsp = ListPoliciesGrantingServiceAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPoliciesGrantingServiceAccessOutcome(rsp);
        else
            return ListPoliciesGrantingServiceAccessOutcome(o.GetError());
    }
    else
    {
        return ListPoliciesGrantingServiceAccessOutcome(outcome.GetError());
    }
}

void CamClient::ListPoliciesGrantingServiceAccessAsync(const ListPoliciesGrantingServiceAccessRequest& request, const ListPoliciesGrantingServiceAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListPoliciesGrantingServiceAccessRequest&;
    using Resp = ListPoliciesGrantingServiceAccessResponse;

    DoRequestAsync<Req, Resp>(
        "ListPoliciesGrantingServiceAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListPoliciesGrantingServiceAccessOutcomeCallable CamClient::ListPoliciesGrantingServiceAccessCallable(const ListPoliciesGrantingServiceAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListPoliciesGrantingServiceAccessOutcome>>();
    ListPoliciesGrantingServiceAccessAsync(
    request,
    [prom](
        const CamClient*,
        const ListPoliciesGrantingServiceAccessRequest&,
        ListPoliciesGrantingServiceAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListPolicyVersionsOutcome CamClient::ListPolicyVersions(const ListPolicyVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListPolicyVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPolicyVersionsResponse rsp = ListPolicyVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPolicyVersionsOutcome(rsp);
        else
            return ListPolicyVersionsOutcome(o.GetError());
    }
    else
    {
        return ListPolicyVersionsOutcome(outcome.GetError());
    }
}

void CamClient::ListPolicyVersionsAsync(const ListPolicyVersionsRequest& request, const ListPolicyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListPolicyVersionsRequest&;
    using Resp = ListPolicyVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "ListPolicyVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListPolicyVersionsOutcomeCallable CamClient::ListPolicyVersionsCallable(const ListPolicyVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListPolicyVersionsOutcome>>();
    ListPolicyVersionsAsync(
    request,
    [prom](
        const CamClient*,
        const ListPolicyVersionsRequest&,
        ListPolicyVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListReceiverOutcome CamClient::ListReceiver(const ListReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "ListReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListReceiverResponse rsp = ListReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListReceiverOutcome(rsp);
        else
            return ListReceiverOutcome(o.GetError());
    }
    else
    {
        return ListReceiverOutcome(outcome.GetError());
    }
}

void CamClient::ListReceiverAsync(const ListReceiverRequest& request, const ListReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListReceiverRequest&;
    using Resp = ListReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "ListReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListReceiverOutcomeCallable CamClient::ListReceiverCallable(const ListReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListReceiverOutcome>>();
    ListReceiverAsync(
    request,
    [prom](
        const CamClient*,
        const ListReceiverRequest&,
        ListReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListSAMLProvidersOutcome CamClient::ListSAMLProviders(const ListSAMLProvidersRequest &request)
{
    auto outcome = MakeRequest(request, "ListSAMLProviders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSAMLProvidersResponse rsp = ListSAMLProvidersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSAMLProvidersOutcome(rsp);
        else
            return ListSAMLProvidersOutcome(o.GetError());
    }
    else
    {
        return ListSAMLProvidersOutcome(outcome.GetError());
    }
}

void CamClient::ListSAMLProvidersAsync(const ListSAMLProvidersRequest& request, const ListSAMLProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSAMLProvidersRequest&;
    using Resp = ListSAMLProvidersResponse;

    DoRequestAsync<Req, Resp>(
        "ListSAMLProviders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListSAMLProvidersOutcomeCallable CamClient::ListSAMLProvidersCallable(const ListSAMLProvidersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSAMLProvidersOutcome>>();
    ListSAMLProvidersAsync(
    request,
    [prom](
        const CamClient*,
        const ListSAMLProvidersRequest&,
        ListSAMLProvidersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListUsersOutcome CamClient::ListUsers(const ListUsersRequest &request)
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

void CamClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::ListUsersOutcomeCallable CamClient::ListUsersCallable(const ListUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUsersOutcome>>();
    ListUsersAsync(
    request,
    [prom](
        const CamClient*,
        const ListUsersRequest&,
        ListUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListUsersForGroupOutcome CamClient::ListUsersForGroup(const ListUsersForGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsersForGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsersForGroupResponse rsp = ListUsersForGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsersForGroupOutcome(rsp);
        else
            return ListUsersForGroupOutcome(o.GetError());
    }
    else
    {
        return ListUsersForGroupOutcome(outcome.GetError());
    }
}

void CamClient::ListUsersForGroupAsync(const ListUsersForGroupRequest& request, const ListUsersForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUsersForGroupRequest&;
    using Resp = ListUsersForGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ListUsersForGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListUsersForGroupOutcomeCallable CamClient::ListUsersForGroupCallable(const ListUsersForGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUsersForGroupOutcome>>();
    ListUsersForGroupAsync(
    request,
    [prom](
        const CamClient*,
        const ListUsersForGroupRequest&,
        ListUsersForGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::ListWeChatWorkSubAccountsOutcome CamClient::ListWeChatWorkSubAccounts(const ListWeChatWorkSubAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWeChatWorkSubAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWeChatWorkSubAccountsResponse rsp = ListWeChatWorkSubAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWeChatWorkSubAccountsOutcome(rsp);
        else
            return ListWeChatWorkSubAccountsOutcome(o.GetError());
    }
    else
    {
        return ListWeChatWorkSubAccountsOutcome(outcome.GetError());
    }
}

void CamClient::ListWeChatWorkSubAccountsAsync(const ListWeChatWorkSubAccountsRequest& request, const ListWeChatWorkSubAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWeChatWorkSubAccountsRequest&;
    using Resp = ListWeChatWorkSubAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "ListWeChatWorkSubAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::ListWeChatWorkSubAccountsOutcomeCallable CamClient::ListWeChatWorkSubAccountsCallable(const ListWeChatWorkSubAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWeChatWorkSubAccountsOutcome>>();
    ListWeChatWorkSubAccountsAsync(
    request,
    [prom](
        const CamClient*,
        const ListWeChatWorkSubAccountsRequest&,
        ListWeChatWorkSubAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::PutRolePermissionsBoundaryOutcome CamClient::PutRolePermissionsBoundary(const PutRolePermissionsBoundaryRequest &request)
{
    auto outcome = MakeRequest(request, "PutRolePermissionsBoundary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutRolePermissionsBoundaryResponse rsp = PutRolePermissionsBoundaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutRolePermissionsBoundaryOutcome(rsp);
        else
            return PutRolePermissionsBoundaryOutcome(o.GetError());
    }
    else
    {
        return PutRolePermissionsBoundaryOutcome(outcome.GetError());
    }
}

void CamClient::PutRolePermissionsBoundaryAsync(const PutRolePermissionsBoundaryRequest& request, const PutRolePermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutRolePermissionsBoundaryRequest&;
    using Resp = PutRolePermissionsBoundaryResponse;

    DoRequestAsync<Req, Resp>(
        "PutRolePermissionsBoundary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::PutRolePermissionsBoundaryOutcomeCallable CamClient::PutRolePermissionsBoundaryCallable(const PutRolePermissionsBoundaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutRolePermissionsBoundaryOutcome>>();
    PutRolePermissionsBoundaryAsync(
    request,
    [prom](
        const CamClient*,
        const PutRolePermissionsBoundaryRequest&,
        PutRolePermissionsBoundaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::PutUserPermissionsBoundaryOutcome CamClient::PutUserPermissionsBoundary(const PutUserPermissionsBoundaryRequest &request)
{
    auto outcome = MakeRequest(request, "PutUserPermissionsBoundary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutUserPermissionsBoundaryResponse rsp = PutUserPermissionsBoundaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutUserPermissionsBoundaryOutcome(rsp);
        else
            return PutUserPermissionsBoundaryOutcome(o.GetError());
    }
    else
    {
        return PutUserPermissionsBoundaryOutcome(outcome.GetError());
    }
}

void CamClient::PutUserPermissionsBoundaryAsync(const PutUserPermissionsBoundaryRequest& request, const PutUserPermissionsBoundaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutUserPermissionsBoundaryRequest&;
    using Resp = PutUserPermissionsBoundaryResponse;

    DoRequestAsync<Req, Resp>(
        "PutUserPermissionsBoundary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::PutUserPermissionsBoundaryOutcomeCallable CamClient::PutUserPermissionsBoundaryCallable(const PutUserPermissionsBoundaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutUserPermissionsBoundaryOutcome>>();
    PutUserPermissionsBoundaryAsync(
    request,
    [prom](
        const CamClient*,
        const PutUserPermissionsBoundaryRequest&,
        PutUserPermissionsBoundaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::RemoveUserFromGroupOutcome CamClient::RemoveUserFromGroup(const RemoveUserFromGroupRequest &request)
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

void CamClient::RemoveUserFromGroupAsync(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::RemoveUserFromGroupOutcomeCallable CamClient::RemoveUserFromGroupCallable(const RemoveUserFromGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveUserFromGroupOutcome>>();
    RemoveUserFromGroupAsync(
    request,
    [prom](
        const CamClient*,
        const RemoveUserFromGroupRequest&,
        RemoveUserFromGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::SetDefaultPolicyVersionOutcome CamClient::SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "SetDefaultPolicyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetDefaultPolicyVersionResponse rsp = SetDefaultPolicyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetDefaultPolicyVersionOutcome(rsp);
        else
            return SetDefaultPolicyVersionOutcome(o.GetError());
    }
    else
    {
        return SetDefaultPolicyVersionOutcome(outcome.GetError());
    }
}

void CamClient::SetDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetDefaultPolicyVersionRequest&;
    using Resp = SetDefaultPolicyVersionResponse;

    DoRequestAsync<Req, Resp>(
        "SetDefaultPolicyVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::SetDefaultPolicyVersionOutcomeCallable CamClient::SetDefaultPolicyVersionCallable(const SetDefaultPolicyVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetDefaultPolicyVersionOutcome>>();
    SetDefaultPolicyVersionAsync(
    request,
    [prom](
        const CamClient*,
        const SetDefaultPolicyVersionRequest&,
        SetDefaultPolicyVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::SetMfaFlagOutcome CamClient::SetMfaFlag(const SetMfaFlagRequest &request)
{
    auto outcome = MakeRequest(request, "SetMfaFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetMfaFlagResponse rsp = SetMfaFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetMfaFlagOutcome(rsp);
        else
            return SetMfaFlagOutcome(o.GetError());
    }
    else
    {
        return SetMfaFlagOutcome(outcome.GetError());
    }
}

void CamClient::SetMfaFlagAsync(const SetMfaFlagRequest& request, const SetMfaFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetMfaFlagRequest&;
    using Resp = SetMfaFlagResponse;

    DoRequestAsync<Req, Resp>(
        "SetMfaFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::SetMfaFlagOutcomeCallable CamClient::SetMfaFlagCallable(const SetMfaFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetMfaFlagOutcome>>();
    SetMfaFlagAsync(
    request,
    [prom](
        const CamClient*,
        const SetMfaFlagRequest&,
        SetMfaFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::TagRoleOutcome CamClient::TagRole(const TagRoleRequest &request)
{
    auto outcome = MakeRequest(request, "TagRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TagRoleResponse rsp = TagRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TagRoleOutcome(rsp);
        else
            return TagRoleOutcome(o.GetError());
    }
    else
    {
        return TagRoleOutcome(outcome.GetError());
    }
}

void CamClient::TagRoleAsync(const TagRoleRequest& request, const TagRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TagRoleRequest&;
    using Resp = TagRoleResponse;

    DoRequestAsync<Req, Resp>(
        "TagRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::TagRoleOutcomeCallable CamClient::TagRoleCallable(const TagRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<TagRoleOutcome>>();
    TagRoleAsync(
    request,
    [prom](
        const CamClient*,
        const TagRoleRequest&,
        TagRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UntagRoleOutcome CamClient::UntagRole(const UntagRoleRequest &request)
{
    auto outcome = MakeRequest(request, "UntagRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UntagRoleResponse rsp = UntagRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UntagRoleOutcome(rsp);
        else
            return UntagRoleOutcome(o.GetError());
    }
    else
    {
        return UntagRoleOutcome(outcome.GetError());
    }
}

void CamClient::UntagRoleAsync(const UntagRoleRequest& request, const UntagRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UntagRoleRequest&;
    using Resp = UntagRoleResponse;

    DoRequestAsync<Req, Resp>(
        "UntagRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::UntagRoleOutcomeCallable CamClient::UntagRoleCallable(const UntagRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UntagRoleOutcome>>();
    UntagRoleAsync(
    request,
    [prom](
        const CamClient*,
        const UntagRoleRequest&,
        UntagRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateAccessKeyOutcome CamClient::UpdateAccessKey(const UpdateAccessKeyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAccessKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAccessKeyResponse rsp = UpdateAccessKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAccessKeyOutcome(rsp);
        else
            return UpdateAccessKeyOutcome(o.GetError());
    }
    else
    {
        return UpdateAccessKeyOutcome(outcome.GetError());
    }
}

void CamClient::UpdateAccessKeyAsync(const UpdateAccessKeyRequest& request, const UpdateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAccessKeyRequest&;
    using Resp = UpdateAccessKeyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAccessKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::UpdateAccessKeyOutcomeCallable CamClient::UpdateAccessKeyCallable(const UpdateAccessKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAccessKeyOutcome>>();
    UpdateAccessKeyAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateAccessKeyRequest&,
        UpdateAccessKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateAssumeRolePolicyOutcome CamClient::UpdateAssumeRolePolicy(const UpdateAssumeRolePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAssumeRolePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAssumeRolePolicyResponse rsp = UpdateAssumeRolePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAssumeRolePolicyOutcome(rsp);
        else
            return UpdateAssumeRolePolicyOutcome(o.GetError());
    }
    else
    {
        return UpdateAssumeRolePolicyOutcome(outcome.GetError());
    }
}

void CamClient::UpdateAssumeRolePolicyAsync(const UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAssumeRolePolicyRequest&;
    using Resp = UpdateAssumeRolePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAssumeRolePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::UpdateAssumeRolePolicyOutcomeCallable CamClient::UpdateAssumeRolePolicyCallable(const UpdateAssumeRolePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAssumeRolePolicyOutcome>>();
    UpdateAssumeRolePolicyAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateAssumeRolePolicyRequest&,
        UpdateAssumeRolePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateGroupOutcome CamClient::UpdateGroup(const UpdateGroupRequest &request)
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

void CamClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::UpdateGroupOutcomeCallable CamClient::UpdateGroupCallable(const UpdateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGroupOutcome>>();
    UpdateGroupAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateGroupRequest&,
        UpdateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateOIDCConfigOutcome CamClient::UpdateOIDCConfig(const UpdateOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOIDCConfigResponse rsp = UpdateOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOIDCConfigOutcome(rsp);
        else
            return UpdateOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateOIDCConfigOutcome(outcome.GetError());
    }
}

void CamClient::UpdateOIDCConfigAsync(const UpdateOIDCConfigRequest& request, const UpdateOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateOIDCConfigRequest&;
    using Resp = UpdateOIDCConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOIDCConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::UpdateOIDCConfigOutcomeCallable CamClient::UpdateOIDCConfigCallable(const UpdateOIDCConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOIDCConfigOutcome>>();
    UpdateOIDCConfigAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateOIDCConfigRequest&,
        UpdateOIDCConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdatePolicyOutcome CamClient::UpdatePolicy(const UpdatePolicyRequest &request)
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

void CamClient::UpdatePolicyAsync(const UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::UpdatePolicyOutcomeCallable CamClient::UpdatePolicyCallable(const UpdatePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePolicyOutcome>>();
    UpdatePolicyAsync(
    request,
    [prom](
        const CamClient*,
        const UpdatePolicyRequest&,
        UpdatePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateRoleConsoleLoginOutcome CamClient::UpdateRoleConsoleLogin(const UpdateRoleConsoleLoginRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRoleConsoleLogin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRoleConsoleLoginResponse rsp = UpdateRoleConsoleLoginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRoleConsoleLoginOutcome(rsp);
        else
            return UpdateRoleConsoleLoginOutcome(o.GetError());
    }
    else
    {
        return UpdateRoleConsoleLoginOutcome(outcome.GetError());
    }
}

void CamClient::UpdateRoleConsoleLoginAsync(const UpdateRoleConsoleLoginRequest& request, const UpdateRoleConsoleLoginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRoleConsoleLoginRequest&;
    using Resp = UpdateRoleConsoleLoginResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRoleConsoleLogin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::UpdateRoleConsoleLoginOutcomeCallable CamClient::UpdateRoleConsoleLoginCallable(const UpdateRoleConsoleLoginRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRoleConsoleLoginOutcome>>();
    UpdateRoleConsoleLoginAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateRoleConsoleLoginRequest&,
        UpdateRoleConsoleLoginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateRoleDescriptionOutcome CamClient::UpdateRoleDescription(const UpdateRoleDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRoleDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRoleDescriptionResponse rsp = UpdateRoleDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRoleDescriptionOutcome(rsp);
        else
            return UpdateRoleDescriptionOutcome(o.GetError());
    }
    else
    {
        return UpdateRoleDescriptionOutcome(outcome.GetError());
    }
}

void CamClient::UpdateRoleDescriptionAsync(const UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRoleDescriptionRequest&;
    using Resp = UpdateRoleDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRoleDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::UpdateRoleDescriptionOutcomeCallable CamClient::UpdateRoleDescriptionCallable(const UpdateRoleDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRoleDescriptionOutcome>>();
    UpdateRoleDescriptionAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateRoleDescriptionRequest&,
        UpdateRoleDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateRoleSessionDurationOutcome CamClient::UpdateRoleSessionDuration(const UpdateRoleSessionDurationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRoleSessionDuration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRoleSessionDurationResponse rsp = UpdateRoleSessionDurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRoleSessionDurationOutcome(rsp);
        else
            return UpdateRoleSessionDurationOutcome(o.GetError());
    }
    else
    {
        return UpdateRoleSessionDurationOutcome(outcome.GetError());
    }
}

void CamClient::UpdateRoleSessionDurationAsync(const UpdateRoleSessionDurationRequest& request, const UpdateRoleSessionDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRoleSessionDurationRequest&;
    using Resp = UpdateRoleSessionDurationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRoleSessionDuration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::UpdateRoleSessionDurationOutcomeCallable CamClient::UpdateRoleSessionDurationCallable(const UpdateRoleSessionDurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRoleSessionDurationOutcome>>();
    UpdateRoleSessionDurationAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateRoleSessionDurationRequest&,
        UpdateRoleSessionDurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateSAMLProviderOutcome CamClient::UpdateSAMLProvider(const UpdateSAMLProviderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSAMLProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSAMLProviderResponse rsp = UpdateSAMLProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSAMLProviderOutcome(rsp);
        else
            return UpdateSAMLProviderOutcome(o.GetError());
    }
    else
    {
        return UpdateSAMLProviderOutcome(outcome.GetError());
    }
}

void CamClient::UpdateSAMLProviderAsync(const UpdateSAMLProviderRequest& request, const UpdateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSAMLProviderRequest&;
    using Resp = UpdateSAMLProviderResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSAMLProvider", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::UpdateSAMLProviderOutcomeCallable CamClient::UpdateSAMLProviderCallable(const UpdateSAMLProviderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSAMLProviderOutcome>>();
    UpdateSAMLProviderAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateSAMLProviderRequest&,
        UpdateSAMLProviderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateUserOutcome CamClient::UpdateUser(const UpdateUserRequest &request)
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

void CamClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CamClient::UpdateUserOutcomeCallable CamClient::UpdateUserCallable(const UpdateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUserOutcome>>();
    UpdateUserAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateUserRequest&,
        UpdateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateUserOIDCConfigOutcome CamClient::UpdateUserOIDCConfig(const UpdateUserOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserOIDCConfigResponse rsp = UpdateUserOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserOIDCConfigOutcome(rsp);
        else
            return UpdateUserOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateUserOIDCConfigOutcome(outcome.GetError());
    }
}

void CamClient::UpdateUserOIDCConfigAsync(const UpdateUserOIDCConfigRequest& request, const UpdateUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUserOIDCConfigRequest&;
    using Resp = UpdateUserOIDCConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUserOIDCConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::UpdateUserOIDCConfigOutcomeCallable CamClient::UpdateUserOIDCConfigCallable(const UpdateUserOIDCConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUserOIDCConfigOutcome>>();
    UpdateUserOIDCConfigAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateUserOIDCConfigRequest&,
        UpdateUserOIDCConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CamClient::UpdateUserSAMLConfigOutcome CamClient::UpdateUserSAMLConfig(const UpdateUserSAMLConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserSAMLConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserSAMLConfigResponse rsp = UpdateUserSAMLConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserSAMLConfigOutcome(rsp);
        else
            return UpdateUserSAMLConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateUserSAMLConfigOutcome(outcome.GetError());
    }
}

void CamClient::UpdateUserSAMLConfigAsync(const UpdateUserSAMLConfigRequest& request, const UpdateUserSAMLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUserSAMLConfigRequest&;
    using Resp = UpdateUserSAMLConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUserSAMLConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CamClient::UpdateUserSAMLConfigOutcomeCallable CamClient::UpdateUserSAMLConfigCallable(const UpdateUserSAMLConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUserSAMLConfigOutcome>>();
    UpdateUserSAMLConfigAsync(
    request,
    [prom](
        const CamClient*,
        const UpdateUserSAMLConfigRequest&,
        UpdateUserSAMLConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


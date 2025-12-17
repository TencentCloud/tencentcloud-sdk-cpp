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

#include <tencentcloud/bh/v20230418/BhClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bh::V20230418;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-18";
    const string ENDPOINT = "bh.tencentcloudapi.com";
}

BhClient::BhClient(const Credential &credential, const string &region) :
    BhClient(credential, region, ClientProfile())
{
}

BhClient::BhClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BhClient::AccessDevicesOutcome BhClient::AccessDevices(const AccessDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "AccessDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AccessDevicesResponse rsp = AccessDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AccessDevicesOutcome(rsp);
        else
            return AccessDevicesOutcome(o.GetError());
    }
    else
    {
        return AccessDevicesOutcome(outcome.GetError());
    }
}

void BhClient::AccessDevicesAsync(const AccessDevicesRequest& request, const AccessDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AccessDevicesRequest&;
    using Resp = AccessDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "AccessDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::AccessDevicesOutcomeCallable BhClient::AccessDevicesCallable(const AccessDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AccessDevicesOutcome>>();
    AccessDevicesAsync(
    request,
    [prom](
        const BhClient*,
        const AccessDevicesRequest&,
        AccessDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::AddDeviceGroupMembersOutcome BhClient::AddDeviceGroupMembers(const AddDeviceGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "AddDeviceGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDeviceGroupMembersResponse rsp = AddDeviceGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDeviceGroupMembersOutcome(rsp);
        else
            return AddDeviceGroupMembersOutcome(o.GetError());
    }
    else
    {
        return AddDeviceGroupMembersOutcome(outcome.GetError());
    }
}

void BhClient::AddDeviceGroupMembersAsync(const AddDeviceGroupMembersRequest& request, const AddDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddDeviceGroupMembersRequest&;
    using Resp = AddDeviceGroupMembersResponse;

    DoRequestAsync<Req, Resp>(
        "AddDeviceGroupMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::AddDeviceGroupMembersOutcomeCallable BhClient::AddDeviceGroupMembersCallable(const AddDeviceGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddDeviceGroupMembersOutcome>>();
    AddDeviceGroupMembersAsync(
    request,
    [prom](
        const BhClient*,
        const AddDeviceGroupMembersRequest&,
        AddDeviceGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::AddUserGroupMembersOutcome BhClient::AddUserGroupMembers(const AddUserGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "AddUserGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserGroupMembersResponse rsp = AddUserGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserGroupMembersOutcome(rsp);
        else
            return AddUserGroupMembersOutcome(o.GetError());
    }
    else
    {
        return AddUserGroupMembersOutcome(outcome.GetError());
    }
}

void BhClient::AddUserGroupMembersAsync(const AddUserGroupMembersRequest& request, const AddUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddUserGroupMembersRequest&;
    using Resp = AddUserGroupMembersResponse;

    DoRequestAsync<Req, Resp>(
        "AddUserGroupMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::AddUserGroupMembersOutcomeCallable BhClient::AddUserGroupMembersCallable(const AddUserGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUserGroupMembersOutcome>>();
    AddUserGroupMembersAsync(
    request,
    [prom](
        const BhClient*,
        const AddUserGroupMembersRequest&,
        AddUserGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::BindDeviceAccountPasswordOutcome BhClient::BindDeviceAccountPassword(const BindDeviceAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "BindDeviceAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDeviceAccountPasswordResponse rsp = BindDeviceAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDeviceAccountPasswordOutcome(rsp);
        else
            return BindDeviceAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return BindDeviceAccountPasswordOutcome(outcome.GetError());
    }
}

void BhClient::BindDeviceAccountPasswordAsync(const BindDeviceAccountPasswordRequest& request, const BindDeviceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindDeviceAccountPasswordRequest&;
    using Resp = BindDeviceAccountPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "BindDeviceAccountPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::BindDeviceAccountPasswordOutcomeCallable BhClient::BindDeviceAccountPasswordCallable(const BindDeviceAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDeviceAccountPasswordOutcome>>();
    BindDeviceAccountPasswordAsync(
    request,
    [prom](
        const BhClient*,
        const BindDeviceAccountPasswordRequest&,
        BindDeviceAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::BindDeviceAccountPrivateKeyOutcome BhClient::BindDeviceAccountPrivateKey(const BindDeviceAccountPrivateKeyRequest &request)
{
    auto outcome = MakeRequest(request, "BindDeviceAccountPrivateKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDeviceAccountPrivateKeyResponse rsp = BindDeviceAccountPrivateKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDeviceAccountPrivateKeyOutcome(rsp);
        else
            return BindDeviceAccountPrivateKeyOutcome(o.GetError());
    }
    else
    {
        return BindDeviceAccountPrivateKeyOutcome(outcome.GetError());
    }
}

void BhClient::BindDeviceAccountPrivateKeyAsync(const BindDeviceAccountPrivateKeyRequest& request, const BindDeviceAccountPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindDeviceAccountPrivateKeyRequest&;
    using Resp = BindDeviceAccountPrivateKeyResponse;

    DoRequestAsync<Req, Resp>(
        "BindDeviceAccountPrivateKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::BindDeviceAccountPrivateKeyOutcomeCallable BhClient::BindDeviceAccountPrivateKeyCallable(const BindDeviceAccountPrivateKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDeviceAccountPrivateKeyOutcome>>();
    BindDeviceAccountPrivateKeyAsync(
    request,
    [prom](
        const BhClient*,
        const BindDeviceAccountPrivateKeyRequest&,
        BindDeviceAccountPrivateKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::BindDeviceResourceOutcome BhClient::BindDeviceResource(const BindDeviceResourceRequest &request)
{
    auto outcome = MakeRequest(request, "BindDeviceResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDeviceResourceResponse rsp = BindDeviceResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDeviceResourceOutcome(rsp);
        else
            return BindDeviceResourceOutcome(o.GetError());
    }
    else
    {
        return BindDeviceResourceOutcome(outcome.GetError());
    }
}

void BhClient::BindDeviceResourceAsync(const BindDeviceResourceRequest& request, const BindDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindDeviceResourceRequest&;
    using Resp = BindDeviceResourceResponse;

    DoRequestAsync<Req, Resp>(
        "BindDeviceResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::BindDeviceResourceOutcomeCallable BhClient::BindDeviceResourceCallable(const BindDeviceResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDeviceResourceOutcome>>();
    BindDeviceResourceAsync(
    request,
    [prom](
        const BhClient*,
        const BindDeviceResourceRequest&,
        BindDeviceResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CheckLDAPConnectionOutcome BhClient::CheckLDAPConnection(const CheckLDAPConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "CheckLDAPConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckLDAPConnectionResponse rsp = CheckLDAPConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckLDAPConnectionOutcome(rsp);
        else
            return CheckLDAPConnectionOutcome(o.GetError());
    }
    else
    {
        return CheckLDAPConnectionOutcome(outcome.GetError());
    }
}

void BhClient::CheckLDAPConnectionAsync(const CheckLDAPConnectionRequest& request, const CheckLDAPConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckLDAPConnectionRequest&;
    using Resp = CheckLDAPConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "CheckLDAPConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CheckLDAPConnectionOutcomeCallable BhClient::CheckLDAPConnectionCallable(const CheckLDAPConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckLDAPConnectionOutcome>>();
    CheckLDAPConnectionAsync(
    request,
    [prom](
        const BhClient*,
        const CheckLDAPConnectionRequest&,
        CheckLDAPConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateAccessWhiteListRuleOutcome BhClient::CreateAccessWhiteListRule(const CreateAccessWhiteListRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessWhiteListRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessWhiteListRuleResponse rsp = CreateAccessWhiteListRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessWhiteListRuleOutcome(rsp);
        else
            return CreateAccessWhiteListRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAccessWhiteListRuleOutcome(outcome.GetError());
    }
}

void BhClient::CreateAccessWhiteListRuleAsync(const CreateAccessWhiteListRuleRequest& request, const CreateAccessWhiteListRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccessWhiteListRuleRequest&;
    using Resp = CreateAccessWhiteListRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccessWhiteListRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateAccessWhiteListRuleOutcomeCallable BhClient::CreateAccessWhiteListRuleCallable(const CreateAccessWhiteListRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccessWhiteListRuleOutcome>>();
    CreateAccessWhiteListRuleAsync(
    request,
    [prom](
        const BhClient*,
        const CreateAccessWhiteListRuleRequest&,
        CreateAccessWhiteListRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateAclOutcome BhClient::CreateAcl(const CreateAclRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAclResponse rsp = CreateAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAclOutcome(rsp);
        else
            return CreateAclOutcome(o.GetError());
    }
    else
    {
        return CreateAclOutcome(outcome.GetError());
    }
}

void BhClient::CreateAclAsync(const CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAclRequest&;
    using Resp = CreateAclResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAcl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateAclOutcomeCallable BhClient::CreateAclCallable(const CreateAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAclOutcome>>();
    CreateAclAsync(
    request,
    [prom](
        const BhClient*,
        const CreateAclRequest&,
        CreateAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateAssetSyncJobOutcome BhClient::CreateAssetSyncJob(const CreateAssetSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssetSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetSyncJobResponse rsp = CreateAssetSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetSyncJobOutcome(rsp);
        else
            return CreateAssetSyncJobOutcome(o.GetError());
    }
    else
    {
        return CreateAssetSyncJobOutcome(outcome.GetError());
    }
}

void BhClient::CreateAssetSyncJobAsync(const CreateAssetSyncJobRequest& request, const CreateAssetSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAssetSyncJobRequest&;
    using Resp = CreateAssetSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAssetSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateAssetSyncJobOutcomeCallable BhClient::CreateAssetSyncJobCallable(const CreateAssetSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssetSyncJobOutcome>>();
    CreateAssetSyncJobAsync(
    request,
    [prom](
        const BhClient*,
        const CreateAssetSyncJobRequest&,
        CreateAssetSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateChangePwdTaskOutcome BhClient::CreateChangePwdTask(const CreateChangePwdTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChangePwdTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChangePwdTaskResponse rsp = CreateChangePwdTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChangePwdTaskOutcome(rsp);
        else
            return CreateChangePwdTaskOutcome(o.GetError());
    }
    else
    {
        return CreateChangePwdTaskOutcome(outcome.GetError());
    }
}

void BhClient::CreateChangePwdTaskAsync(const CreateChangePwdTaskRequest& request, const CreateChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateChangePwdTaskRequest&;
    using Resp = CreateChangePwdTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateChangePwdTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateChangePwdTaskOutcomeCallable BhClient::CreateChangePwdTaskCallable(const CreateChangePwdTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateChangePwdTaskOutcome>>();
    CreateChangePwdTaskAsync(
    request,
    [prom](
        const BhClient*,
        const CreateChangePwdTaskRequest&,
        CreateChangePwdTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateCmdTemplateOutcome BhClient::CreateCmdTemplate(const CreateCmdTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCmdTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCmdTemplateResponse rsp = CreateCmdTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCmdTemplateOutcome(rsp);
        else
            return CreateCmdTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateCmdTemplateOutcome(outcome.GetError());
    }
}

void BhClient::CreateCmdTemplateAsync(const CreateCmdTemplateRequest& request, const CreateCmdTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCmdTemplateRequest&;
    using Resp = CreateCmdTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCmdTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateCmdTemplateOutcomeCallable BhClient::CreateCmdTemplateCallable(const CreateCmdTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCmdTemplateOutcome>>();
    CreateCmdTemplateAsync(
    request,
    [prom](
        const BhClient*,
        const CreateCmdTemplateRequest&,
        CreateCmdTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateDeviceAccountOutcome BhClient::CreateDeviceAccount(const CreateDeviceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceAccountResponse rsp = CreateDeviceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceAccountOutcome(rsp);
        else
            return CreateDeviceAccountOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceAccountOutcome(outcome.GetError());
    }
}

void BhClient::CreateDeviceAccountAsync(const CreateDeviceAccountRequest& request, const CreateDeviceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceAccountRequest&;
    using Resp = CreateDeviceAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeviceAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateDeviceAccountOutcomeCallable BhClient::CreateDeviceAccountCallable(const CreateDeviceAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceAccountOutcome>>();
    CreateDeviceAccountAsync(
    request,
    [prom](
        const BhClient*,
        const CreateDeviceAccountRequest&,
        CreateDeviceAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateDeviceGroupOutcome BhClient::CreateDeviceGroup(const CreateDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceGroupResponse rsp = CreateDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceGroupOutcome(rsp);
        else
            return CreateDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceGroupOutcome(outcome.GetError());
    }
}

void BhClient::CreateDeviceGroupAsync(const CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceGroupRequest&;
    using Resp = CreateDeviceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeviceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateDeviceGroupOutcomeCallable BhClient::CreateDeviceGroupCallable(const CreateDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceGroupOutcome>>();
    CreateDeviceGroupAsync(
    request,
    [prom](
        const BhClient*,
        const CreateDeviceGroupRequest&,
        CreateDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateOperationTaskOutcome BhClient::CreateOperationTask(const CreateOperationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOperationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOperationTaskResponse rsp = CreateOperationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOperationTaskOutcome(rsp);
        else
            return CreateOperationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateOperationTaskOutcome(outcome.GetError());
    }
}

void BhClient::CreateOperationTaskAsync(const CreateOperationTaskRequest& request, const CreateOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOperationTaskRequest&;
    using Resp = CreateOperationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOperationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateOperationTaskOutcomeCallable BhClient::CreateOperationTaskCallable(const CreateOperationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOperationTaskOutcome>>();
    CreateOperationTaskAsync(
    request,
    [prom](
        const BhClient*,
        const CreateOperationTaskRequest&,
        CreateOperationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateResourceOutcome BhClient::CreateResource(const CreateResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceResponse rsp = CreateResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceOutcome(rsp);
        else
            return CreateResourceOutcome(o.GetError());
    }
    else
    {
        return CreateResourceOutcome(outcome.GetError());
    }
}

void BhClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResourceRequest&;
    using Resp = CreateResourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateResourceOutcomeCallable BhClient::CreateResourceCallable(const CreateResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourceOutcome>>();
    CreateResourceAsync(
    request,
    [prom](
        const BhClient*,
        const CreateResourceRequest&,
        CreateResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateSyncUserTaskOutcome BhClient::CreateSyncUserTask(const CreateSyncUserTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSyncUserTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSyncUserTaskResponse rsp = CreateSyncUserTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSyncUserTaskOutcome(rsp);
        else
            return CreateSyncUserTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSyncUserTaskOutcome(outcome.GetError());
    }
}

void BhClient::CreateSyncUserTaskAsync(const CreateSyncUserTaskRequest& request, const CreateSyncUserTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSyncUserTaskRequest&;
    using Resp = CreateSyncUserTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSyncUserTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateSyncUserTaskOutcomeCallable BhClient::CreateSyncUserTaskCallable(const CreateSyncUserTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSyncUserTaskOutcome>>();
    CreateSyncUserTaskAsync(
    request,
    [prom](
        const BhClient*,
        const CreateSyncUserTaskRequest&,
        CreateSyncUserTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateUserOutcome BhClient::CreateUser(const CreateUserRequest &request)
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

void BhClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BhClient::CreateUserOutcomeCallable BhClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const BhClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateUserDirectoryOutcome BhClient::CreateUserDirectory(const CreateUserDirectoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserDirectory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserDirectoryResponse rsp = CreateUserDirectoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserDirectoryOutcome(rsp);
        else
            return CreateUserDirectoryOutcome(o.GetError());
    }
    else
    {
        return CreateUserDirectoryOutcome(outcome.GetError());
    }
}

void BhClient::CreateUserDirectoryAsync(const CreateUserDirectoryRequest& request, const CreateUserDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserDirectoryRequest&;
    using Resp = CreateUserDirectoryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserDirectory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateUserDirectoryOutcomeCallable BhClient::CreateUserDirectoryCallable(const CreateUserDirectoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserDirectoryOutcome>>();
    CreateUserDirectoryAsync(
    request,
    [prom](
        const BhClient*,
        const CreateUserDirectoryRequest&,
        CreateUserDirectoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::CreateUserGroupOutcome BhClient::CreateUserGroup(const CreateUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserGroupResponse rsp = CreateUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserGroupOutcome(rsp);
        else
            return CreateUserGroupOutcome(o.GetError());
    }
    else
    {
        return CreateUserGroupOutcome(outcome.GetError());
    }
}

void BhClient::CreateUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserGroupRequest&;
    using Resp = CreateUserGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::CreateUserGroupOutcomeCallable BhClient::CreateUserGroupCallable(const CreateUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserGroupOutcome>>();
    CreateUserGroupAsync(
    request,
    [prom](
        const BhClient*,
        const CreateUserGroupRequest&,
        CreateUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteAccessWhiteListRulesOutcome BhClient::DeleteAccessWhiteListRules(const DeleteAccessWhiteListRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccessWhiteListRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccessWhiteListRulesResponse rsp = DeleteAccessWhiteListRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccessWhiteListRulesOutcome(rsp);
        else
            return DeleteAccessWhiteListRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteAccessWhiteListRulesOutcome(outcome.GetError());
    }
}

void BhClient::DeleteAccessWhiteListRulesAsync(const DeleteAccessWhiteListRulesRequest& request, const DeleteAccessWhiteListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAccessWhiteListRulesRequest&;
    using Resp = DeleteAccessWhiteListRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccessWhiteListRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteAccessWhiteListRulesOutcomeCallable BhClient::DeleteAccessWhiteListRulesCallable(const DeleteAccessWhiteListRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccessWhiteListRulesOutcome>>();
    DeleteAccessWhiteListRulesAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteAccessWhiteListRulesRequest&,
        DeleteAccessWhiteListRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteAclsOutcome BhClient::DeleteAcls(const DeleteAclsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAclsResponse rsp = DeleteAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAclsOutcome(rsp);
        else
            return DeleteAclsOutcome(o.GetError());
    }
    else
    {
        return DeleteAclsOutcome(outcome.GetError());
    }
}

void BhClient::DeleteAclsAsync(const DeleteAclsRequest& request, const DeleteAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAclsRequest&;
    using Resp = DeleteAclsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAcls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteAclsOutcomeCallable BhClient::DeleteAclsCallable(const DeleteAclsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAclsOutcome>>();
    DeleteAclsAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteAclsRequest&,
        DeleteAclsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteChangePwdTaskOutcome BhClient::DeleteChangePwdTask(const DeleteChangePwdTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteChangePwdTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteChangePwdTaskResponse rsp = DeleteChangePwdTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteChangePwdTaskOutcome(rsp);
        else
            return DeleteChangePwdTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteChangePwdTaskOutcome(outcome.GetError());
    }
}

void BhClient::DeleteChangePwdTaskAsync(const DeleteChangePwdTaskRequest& request, const DeleteChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteChangePwdTaskRequest&;
    using Resp = DeleteChangePwdTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteChangePwdTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteChangePwdTaskOutcomeCallable BhClient::DeleteChangePwdTaskCallable(const DeleteChangePwdTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteChangePwdTaskOutcome>>();
    DeleteChangePwdTaskAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteChangePwdTaskRequest&,
        DeleteChangePwdTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteCmdTemplatesOutcome BhClient::DeleteCmdTemplates(const DeleteCmdTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCmdTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCmdTemplatesResponse rsp = DeleteCmdTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCmdTemplatesOutcome(rsp);
        else
            return DeleteCmdTemplatesOutcome(o.GetError());
    }
    else
    {
        return DeleteCmdTemplatesOutcome(outcome.GetError());
    }
}

void BhClient::DeleteCmdTemplatesAsync(const DeleteCmdTemplatesRequest& request, const DeleteCmdTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCmdTemplatesRequest&;
    using Resp = DeleteCmdTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCmdTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteCmdTemplatesOutcomeCallable BhClient::DeleteCmdTemplatesCallable(const DeleteCmdTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCmdTemplatesOutcome>>();
    DeleteCmdTemplatesAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteCmdTemplatesRequest&,
        DeleteCmdTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteDeviceAccountsOutcome BhClient::DeleteDeviceAccounts(const DeleteDeviceAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceAccountsResponse rsp = DeleteDeviceAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceAccountsOutcome(rsp);
        else
            return DeleteDeviceAccountsOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceAccountsOutcome(outcome.GetError());
    }
}

void BhClient::DeleteDeviceAccountsAsync(const DeleteDeviceAccountsRequest& request, const DeleteDeviceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceAccountsRequest&;
    using Resp = DeleteDeviceAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeviceAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteDeviceAccountsOutcomeCallable BhClient::DeleteDeviceAccountsCallable(const DeleteDeviceAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceAccountsOutcome>>();
    DeleteDeviceAccountsAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteDeviceAccountsRequest&,
        DeleteDeviceAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteDeviceGroupMembersOutcome BhClient::DeleteDeviceGroupMembers(const DeleteDeviceGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceGroupMembersResponse rsp = DeleteDeviceGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceGroupMembersOutcome(rsp);
        else
            return DeleteDeviceGroupMembersOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceGroupMembersOutcome(outcome.GetError());
    }
}

void BhClient::DeleteDeviceGroupMembersAsync(const DeleteDeviceGroupMembersRequest& request, const DeleteDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceGroupMembersRequest&;
    using Resp = DeleteDeviceGroupMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeviceGroupMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteDeviceGroupMembersOutcomeCallable BhClient::DeleteDeviceGroupMembersCallable(const DeleteDeviceGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceGroupMembersOutcome>>();
    DeleteDeviceGroupMembersAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteDeviceGroupMembersRequest&,
        DeleteDeviceGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteDeviceGroupsOutcome BhClient::DeleteDeviceGroups(const DeleteDeviceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceGroupsResponse rsp = DeleteDeviceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceGroupsOutcome(rsp);
        else
            return DeleteDeviceGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceGroupsOutcome(outcome.GetError());
    }
}

void BhClient::DeleteDeviceGroupsAsync(const DeleteDeviceGroupsRequest& request, const DeleteDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceGroupsRequest&;
    using Resp = DeleteDeviceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeviceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteDeviceGroupsOutcomeCallable BhClient::DeleteDeviceGroupsCallable(const DeleteDeviceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceGroupsOutcome>>();
    DeleteDeviceGroupsAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteDeviceGroupsRequest&,
        DeleteDeviceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteDevicesOutcome BhClient::DeleteDevices(const DeleteDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDevicesResponse rsp = DeleteDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDevicesOutcome(rsp);
        else
            return DeleteDevicesOutcome(o.GetError());
    }
    else
    {
        return DeleteDevicesOutcome(outcome.GetError());
    }
}

void BhClient::DeleteDevicesAsync(const DeleteDevicesRequest& request, const DeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDevicesRequest&;
    using Resp = DeleteDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteDevicesOutcomeCallable BhClient::DeleteDevicesCallable(const DeleteDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDevicesOutcome>>();
    DeleteDevicesAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteDevicesRequest&,
        DeleteDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteOperationTasksOutcome BhClient::DeleteOperationTasks(const DeleteOperationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOperationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOperationTasksResponse rsp = DeleteOperationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOperationTasksOutcome(rsp);
        else
            return DeleteOperationTasksOutcome(o.GetError());
    }
    else
    {
        return DeleteOperationTasksOutcome(outcome.GetError());
    }
}

void BhClient::DeleteOperationTasksAsync(const DeleteOperationTasksRequest& request, const DeleteOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOperationTasksRequest&;
    using Resp = DeleteOperationTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOperationTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteOperationTasksOutcomeCallable BhClient::DeleteOperationTasksCallable(const DeleteOperationTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOperationTasksOutcome>>();
    DeleteOperationTasksAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteOperationTasksRequest&,
        DeleteOperationTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteUserDirectoryOutcome BhClient::DeleteUserDirectory(const DeleteUserDirectoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserDirectory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserDirectoryResponse rsp = DeleteUserDirectoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserDirectoryOutcome(rsp);
        else
            return DeleteUserDirectoryOutcome(o.GetError());
    }
    else
    {
        return DeleteUserDirectoryOutcome(outcome.GetError());
    }
}

void BhClient::DeleteUserDirectoryAsync(const DeleteUserDirectoryRequest& request, const DeleteUserDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserDirectoryRequest&;
    using Resp = DeleteUserDirectoryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserDirectory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteUserDirectoryOutcomeCallable BhClient::DeleteUserDirectoryCallable(const DeleteUserDirectoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserDirectoryOutcome>>();
    DeleteUserDirectoryAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteUserDirectoryRequest&,
        DeleteUserDirectoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteUserGroupMembersOutcome BhClient::DeleteUserGroupMembers(const DeleteUserGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserGroupMembersResponse rsp = DeleteUserGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserGroupMembersOutcome(rsp);
        else
            return DeleteUserGroupMembersOutcome(o.GetError());
    }
    else
    {
        return DeleteUserGroupMembersOutcome(outcome.GetError());
    }
}

void BhClient::DeleteUserGroupMembersAsync(const DeleteUserGroupMembersRequest& request, const DeleteUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserGroupMembersRequest&;
    using Resp = DeleteUserGroupMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserGroupMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteUserGroupMembersOutcomeCallable BhClient::DeleteUserGroupMembersCallable(const DeleteUserGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserGroupMembersOutcome>>();
    DeleteUserGroupMembersAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteUserGroupMembersRequest&,
        DeleteUserGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteUserGroupsOutcome BhClient::DeleteUserGroups(const DeleteUserGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserGroupsResponse rsp = DeleteUserGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserGroupsOutcome(rsp);
        else
            return DeleteUserGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteUserGroupsOutcome(outcome.GetError());
    }
}

void BhClient::DeleteUserGroupsAsync(const DeleteUserGroupsRequest& request, const DeleteUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserGroupsRequest&;
    using Resp = DeleteUserGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteUserGroupsOutcomeCallable BhClient::DeleteUserGroupsCallable(const DeleteUserGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserGroupsOutcome>>();
    DeleteUserGroupsAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteUserGroupsRequest&,
        DeleteUserGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeleteUsersOutcome BhClient::DeleteUsers(const DeleteUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUsersResponse rsp = DeleteUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUsersOutcome(rsp);
        else
            return DeleteUsersOutcome(o.GetError());
    }
    else
    {
        return DeleteUsersOutcome(outcome.GetError());
    }
}

void BhClient::DeleteUsersAsync(const DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUsersRequest&;
    using Resp = DeleteUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeleteUsersOutcomeCallable BhClient::DeleteUsersCallable(const DeleteUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUsersOutcome>>();
    DeleteUsersAsync(
    request,
    [prom](
        const BhClient*,
        const DeleteUsersRequest&,
        DeleteUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DeployResourceOutcome BhClient::DeployResource(const DeployResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeployResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployResourceResponse rsp = DeployResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployResourceOutcome(rsp);
        else
            return DeployResourceOutcome(o.GetError());
    }
    else
    {
        return DeployResourceOutcome(outcome.GetError());
    }
}

void BhClient::DeployResourceAsync(const DeployResourceRequest& request, const DeployResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeployResourceRequest&;
    using Resp = DeployResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeployResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DeployResourceOutcomeCallable BhClient::DeployResourceCallable(const DeployResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployResourceOutcome>>();
    DeployResourceAsync(
    request,
    [prom](
        const BhClient*,
        const DeployResourceRequest&,
        DeployResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeAccessWhiteListRulesOutcome BhClient::DescribeAccessWhiteListRules(const DescribeAccessWhiteListRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessWhiteListRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessWhiteListRulesResponse rsp = DescribeAccessWhiteListRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessWhiteListRulesOutcome(rsp);
        else
            return DescribeAccessWhiteListRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessWhiteListRulesOutcome(outcome.GetError());
    }
}

void BhClient::DescribeAccessWhiteListRulesAsync(const DescribeAccessWhiteListRulesRequest& request, const DescribeAccessWhiteListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessWhiteListRulesRequest&;
    using Resp = DescribeAccessWhiteListRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessWhiteListRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeAccessWhiteListRulesOutcomeCallable BhClient::DescribeAccessWhiteListRulesCallable(const DescribeAccessWhiteListRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessWhiteListRulesOutcome>>();
    DescribeAccessWhiteListRulesAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeAccessWhiteListRulesRequest&,
        DescribeAccessWhiteListRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeAccountGroupsOutcome BhClient::DescribeAccountGroups(const DescribeAccountGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountGroupsResponse rsp = DescribeAccountGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountGroupsOutcome(rsp);
        else
            return DescribeAccountGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountGroupsOutcome(outcome.GetError());
    }
}

void BhClient::DescribeAccountGroupsAsync(const DescribeAccountGroupsRequest& request, const DescribeAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountGroupsRequest&;
    using Resp = DescribeAccountGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeAccountGroupsOutcomeCallable BhClient::DescribeAccountGroupsCallable(const DescribeAccountGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountGroupsOutcome>>();
    DescribeAccountGroupsAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeAccountGroupsRequest&,
        DescribeAccountGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeAclsOutcome BhClient::DescribeAcls(const DescribeAclsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAclsResponse rsp = DescribeAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAclsOutcome(rsp);
        else
            return DescribeAclsOutcome(o.GetError());
    }
    else
    {
        return DescribeAclsOutcome(outcome.GetError());
    }
}

void BhClient::DescribeAclsAsync(const DescribeAclsRequest& request, const DescribeAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAclsRequest&;
    using Resp = DescribeAclsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAcls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeAclsOutcomeCallable BhClient::DescribeAclsCallable(const DescribeAclsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAclsOutcome>>();
    DescribeAclsAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeAclsRequest&,
        DescribeAclsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeAssetSyncFlagOutcome BhClient::DescribeAssetSyncFlag(const DescribeAssetSyncFlagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetSyncFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetSyncFlagResponse rsp = DescribeAssetSyncFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetSyncFlagOutcome(rsp);
        else
            return DescribeAssetSyncFlagOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetSyncFlagOutcome(outcome.GetError());
    }
}

void BhClient::DescribeAssetSyncFlagAsync(const DescribeAssetSyncFlagRequest& request, const DescribeAssetSyncFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetSyncFlagRequest&;
    using Resp = DescribeAssetSyncFlagResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetSyncFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeAssetSyncFlagOutcomeCallable BhClient::DescribeAssetSyncFlagCallable(const DescribeAssetSyncFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetSyncFlagOutcome>>();
    DescribeAssetSyncFlagAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeAssetSyncFlagRequest&,
        DescribeAssetSyncFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeAssetSyncStatusOutcome BhClient::DescribeAssetSyncStatus(const DescribeAssetSyncStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetSyncStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetSyncStatusResponse rsp = DescribeAssetSyncStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetSyncStatusOutcome(rsp);
        else
            return DescribeAssetSyncStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetSyncStatusOutcome(outcome.GetError());
    }
}

void BhClient::DescribeAssetSyncStatusAsync(const DescribeAssetSyncStatusRequest& request, const DescribeAssetSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetSyncStatusRequest&;
    using Resp = DescribeAssetSyncStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetSyncStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeAssetSyncStatusOutcomeCallable BhClient::DescribeAssetSyncStatusCallable(const DescribeAssetSyncStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetSyncStatusOutcome>>();
    DescribeAssetSyncStatusAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeAssetSyncStatusRequest&,
        DescribeAssetSyncStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeChangePwdTaskOutcome BhClient::DescribeChangePwdTask(const DescribeChangePwdTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChangePwdTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChangePwdTaskResponse rsp = DescribeChangePwdTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChangePwdTaskOutcome(rsp);
        else
            return DescribeChangePwdTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeChangePwdTaskOutcome(outcome.GetError());
    }
}

void BhClient::DescribeChangePwdTaskAsync(const DescribeChangePwdTaskRequest& request, const DescribeChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChangePwdTaskRequest&;
    using Resp = DescribeChangePwdTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChangePwdTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeChangePwdTaskOutcomeCallable BhClient::DescribeChangePwdTaskCallable(const DescribeChangePwdTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChangePwdTaskOutcome>>();
    DescribeChangePwdTaskAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeChangePwdTaskRequest&,
        DescribeChangePwdTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeChangePwdTaskDetailOutcome BhClient::DescribeChangePwdTaskDetail(const DescribeChangePwdTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChangePwdTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChangePwdTaskDetailResponse rsp = DescribeChangePwdTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChangePwdTaskDetailOutcome(rsp);
        else
            return DescribeChangePwdTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeChangePwdTaskDetailOutcome(outcome.GetError());
    }
}

void BhClient::DescribeChangePwdTaskDetailAsync(const DescribeChangePwdTaskDetailRequest& request, const DescribeChangePwdTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChangePwdTaskDetailRequest&;
    using Resp = DescribeChangePwdTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChangePwdTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeChangePwdTaskDetailOutcomeCallable BhClient::DescribeChangePwdTaskDetailCallable(const DescribeChangePwdTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChangePwdTaskDetailOutcome>>();
    DescribeChangePwdTaskDetailAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeChangePwdTaskDetailRequest&,
        DescribeChangePwdTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeCmdTemplatesOutcome BhClient::DescribeCmdTemplates(const DescribeCmdTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCmdTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCmdTemplatesResponse rsp = DescribeCmdTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCmdTemplatesOutcome(rsp);
        else
            return DescribeCmdTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCmdTemplatesOutcome(outcome.GetError());
    }
}

void BhClient::DescribeCmdTemplatesAsync(const DescribeCmdTemplatesRequest& request, const DescribeCmdTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCmdTemplatesRequest&;
    using Resp = DescribeCmdTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCmdTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeCmdTemplatesOutcomeCallable BhClient::DescribeCmdTemplatesCallable(const DescribeCmdTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCmdTemplatesOutcome>>();
    DescribeCmdTemplatesAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeCmdTemplatesRequest&,
        DescribeCmdTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeDepartmentsOutcome BhClient::DescribeDepartments(const DescribeDepartmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDepartments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDepartmentsResponse rsp = DescribeDepartmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDepartmentsOutcome(rsp);
        else
            return DescribeDepartmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeDepartmentsOutcome(outcome.GetError());
    }
}

void BhClient::DescribeDepartmentsAsync(const DescribeDepartmentsRequest& request, const DescribeDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDepartmentsRequest&;
    using Resp = DescribeDepartmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDepartments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeDepartmentsOutcomeCallable BhClient::DescribeDepartmentsCallable(const DescribeDepartmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDepartmentsOutcome>>();
    DescribeDepartmentsAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeDepartmentsRequest&,
        DescribeDepartmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeDeviceAccountsOutcome BhClient::DescribeDeviceAccounts(const DescribeDeviceAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceAccountsResponse rsp = DescribeDeviceAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceAccountsOutcome(rsp);
        else
            return DescribeDeviceAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceAccountsOutcome(outcome.GetError());
    }
}

void BhClient::DescribeDeviceAccountsAsync(const DescribeDeviceAccountsRequest& request, const DescribeDeviceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceAccountsRequest&;
    using Resp = DescribeDeviceAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeDeviceAccountsOutcomeCallable BhClient::DescribeDeviceAccountsCallable(const DescribeDeviceAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceAccountsOutcome>>();
    DescribeDeviceAccountsAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeDeviceAccountsRequest&,
        DescribeDeviceAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeDeviceGroupMembersOutcome BhClient::DescribeDeviceGroupMembers(const DescribeDeviceGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceGroupMembersResponse rsp = DescribeDeviceGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceGroupMembersOutcome(rsp);
        else
            return DescribeDeviceGroupMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceGroupMembersOutcome(outcome.GetError());
    }
}

void BhClient::DescribeDeviceGroupMembersAsync(const DescribeDeviceGroupMembersRequest& request, const DescribeDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceGroupMembersRequest&;
    using Resp = DescribeDeviceGroupMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceGroupMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeDeviceGroupMembersOutcomeCallable BhClient::DescribeDeviceGroupMembersCallable(const DescribeDeviceGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceGroupMembersOutcome>>();
    DescribeDeviceGroupMembersAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeDeviceGroupMembersRequest&,
        DescribeDeviceGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeDeviceGroupsOutcome BhClient::DescribeDeviceGroups(const DescribeDeviceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceGroupsResponse rsp = DescribeDeviceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceGroupsOutcome(rsp);
        else
            return DescribeDeviceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceGroupsOutcome(outcome.GetError());
    }
}

void BhClient::DescribeDeviceGroupsAsync(const DescribeDeviceGroupsRequest& request, const DescribeDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceGroupsRequest&;
    using Resp = DescribeDeviceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeDeviceGroupsOutcomeCallable BhClient::DescribeDeviceGroupsCallable(const DescribeDeviceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceGroupsOutcome>>();
    DescribeDeviceGroupsAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeDeviceGroupsRequest&,
        DescribeDeviceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeDevicesOutcome BhClient::DescribeDevices(const DescribeDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicesResponse rsp = DescribeDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicesOutcome(rsp);
        else
            return DescribeDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicesOutcome(outcome.GetError());
    }
}

void BhClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDevicesRequest&;
    using Resp = DescribeDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeDevicesOutcomeCallable BhClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicesOutcome>>();
    DescribeDevicesAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeDevicesRequest&,
        DescribeDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeDomainsOutcome BhClient::DescribeDomains(const DescribeDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsResponse rsp = DescribeDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsOutcome(rsp);
        else
            return DescribeDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsOutcome(outcome.GetError());
    }
}

void BhClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainsRequest&;
    using Resp = DescribeDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeDomainsOutcomeCallable BhClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsOutcome>>();
    DescribeDomainsAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeDomainsRequest&,
        DescribeDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeLDAPUnitSetOutcome BhClient::DescribeLDAPUnitSet(const DescribeLDAPUnitSetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLDAPUnitSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLDAPUnitSetResponse rsp = DescribeLDAPUnitSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLDAPUnitSetOutcome(rsp);
        else
            return DescribeLDAPUnitSetOutcome(o.GetError());
    }
    else
    {
        return DescribeLDAPUnitSetOutcome(outcome.GetError());
    }
}

void BhClient::DescribeLDAPUnitSetAsync(const DescribeLDAPUnitSetRequest& request, const DescribeLDAPUnitSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLDAPUnitSetRequest&;
    using Resp = DescribeLDAPUnitSetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLDAPUnitSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeLDAPUnitSetOutcomeCallable BhClient::DescribeLDAPUnitSetCallable(const DescribeLDAPUnitSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLDAPUnitSetOutcome>>();
    DescribeLDAPUnitSetAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeLDAPUnitSetRequest&,
        DescribeLDAPUnitSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeLoginEventOutcome BhClient::DescribeLoginEvent(const DescribeLoginEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginEventResponse rsp = DescribeLoginEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginEventOutcome(rsp);
        else
            return DescribeLoginEventOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginEventOutcome(outcome.GetError());
    }
}

void BhClient::DescribeLoginEventAsync(const DescribeLoginEventRequest& request, const DescribeLoginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoginEventRequest&;
    using Resp = DescribeLoginEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoginEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeLoginEventOutcomeCallable BhClient::DescribeLoginEventCallable(const DescribeLoginEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoginEventOutcome>>();
    DescribeLoginEventAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeLoginEventRequest&,
        DescribeLoginEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeOperationEventOutcome BhClient::DescribeOperationEvent(const DescribeOperationEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOperationEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOperationEventResponse rsp = DescribeOperationEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOperationEventOutcome(rsp);
        else
            return DescribeOperationEventOutcome(o.GetError());
    }
    else
    {
        return DescribeOperationEventOutcome(outcome.GetError());
    }
}

void BhClient::DescribeOperationEventAsync(const DescribeOperationEventRequest& request, const DescribeOperationEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOperationEventRequest&;
    using Resp = DescribeOperationEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOperationEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeOperationEventOutcomeCallable BhClient::DescribeOperationEventCallable(const DescribeOperationEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOperationEventOutcome>>();
    DescribeOperationEventAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeOperationEventRequest&,
        DescribeOperationEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeOperationTaskOutcome BhClient::DescribeOperationTask(const DescribeOperationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOperationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOperationTaskResponse rsp = DescribeOperationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOperationTaskOutcome(rsp);
        else
            return DescribeOperationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeOperationTaskOutcome(outcome.GetError());
    }
}

void BhClient::DescribeOperationTaskAsync(const DescribeOperationTaskRequest& request, const DescribeOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOperationTaskRequest&;
    using Resp = DescribeOperationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOperationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeOperationTaskOutcomeCallable BhClient::DescribeOperationTaskCallable(const DescribeOperationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOperationTaskOutcome>>();
    DescribeOperationTaskAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeOperationTaskRequest&,
        DescribeOperationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeResourcesOutcome BhClient::DescribeResources(const DescribeResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesResponse rsp = DescribeResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesOutcome(rsp);
        else
            return DescribeResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesOutcome(outcome.GetError());
    }
}

void BhClient::DescribeResourcesAsync(const DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourcesRequest&;
    using Resp = DescribeResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeResourcesOutcomeCallable BhClient::DescribeResourcesCallable(const DescribeResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcesOutcome>>();
    DescribeResourcesAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeResourcesRequest&,
        DescribeResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeSecuritySettingOutcome BhClient::DescribeSecuritySetting(const DescribeSecuritySettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecuritySetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecuritySettingResponse rsp = DescribeSecuritySettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecuritySettingOutcome(rsp);
        else
            return DescribeSecuritySettingOutcome(o.GetError());
    }
    else
    {
        return DescribeSecuritySettingOutcome(outcome.GetError());
    }
}

void BhClient::DescribeSecuritySettingAsync(const DescribeSecuritySettingRequest& request, const DescribeSecuritySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecuritySettingRequest&;
    using Resp = DescribeSecuritySettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecuritySetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeSecuritySettingOutcomeCallable BhClient::DescribeSecuritySettingCallable(const DescribeSecuritySettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecuritySettingOutcome>>();
    DescribeSecuritySettingAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeSecuritySettingRequest&,
        DescribeSecuritySettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeSourceTypesOutcome BhClient::DescribeSourceTypes(const DescribeSourceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSourceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSourceTypesResponse rsp = DescribeSourceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSourceTypesOutcome(rsp);
        else
            return DescribeSourceTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeSourceTypesOutcome(outcome.GetError());
    }
}

void BhClient::DescribeSourceTypesAsync(const DescribeSourceTypesRequest& request, const DescribeSourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSourceTypesRequest&;
    using Resp = DescribeSourceTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSourceTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeSourceTypesOutcomeCallable BhClient::DescribeSourceTypesCallable(const DescribeSourceTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSourceTypesOutcome>>();
    DescribeSourceTypesAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeSourceTypesRequest&,
        DescribeSourceTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeUserDirectoryOutcome BhClient::DescribeUserDirectory(const DescribeUserDirectoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDirectory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDirectoryResponse rsp = DescribeUserDirectoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDirectoryOutcome(rsp);
        else
            return DescribeUserDirectoryOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDirectoryOutcome(outcome.GetError());
    }
}

void BhClient::DescribeUserDirectoryAsync(const DescribeUserDirectoryRequest& request, const DescribeUserDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserDirectoryRequest&;
    using Resp = DescribeUserDirectoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserDirectory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeUserDirectoryOutcomeCallable BhClient::DescribeUserDirectoryCallable(const DescribeUserDirectoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserDirectoryOutcome>>();
    DescribeUserDirectoryAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeUserDirectoryRequest&,
        DescribeUserDirectoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeUserGroupMembersOutcome BhClient::DescribeUserGroupMembers(const DescribeUserGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserGroupMembersResponse rsp = DescribeUserGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserGroupMembersOutcome(rsp);
        else
            return DescribeUserGroupMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeUserGroupMembersOutcome(outcome.GetError());
    }
}

void BhClient::DescribeUserGroupMembersAsync(const DescribeUserGroupMembersRequest& request, const DescribeUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserGroupMembersRequest&;
    using Resp = DescribeUserGroupMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserGroupMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeUserGroupMembersOutcomeCallable BhClient::DescribeUserGroupMembersCallable(const DescribeUserGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserGroupMembersOutcome>>();
    DescribeUserGroupMembersAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeUserGroupMembersRequest&,
        DescribeUserGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeUserGroupsOutcome BhClient::DescribeUserGroups(const DescribeUserGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserGroupsResponse rsp = DescribeUserGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserGroupsOutcome(rsp);
        else
            return DescribeUserGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeUserGroupsOutcome(outcome.GetError());
    }
}

void BhClient::DescribeUserGroupsAsync(const DescribeUserGroupsRequest& request, const DescribeUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserGroupsRequest&;
    using Resp = DescribeUserGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeUserGroupsOutcomeCallable BhClient::DescribeUserGroupsCallable(const DescribeUserGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserGroupsOutcome>>();
    DescribeUserGroupsAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeUserGroupsRequest&,
        DescribeUserGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeUserSyncStatusOutcome BhClient::DescribeUserSyncStatus(const DescribeUserSyncStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserSyncStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserSyncStatusResponse rsp = DescribeUserSyncStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserSyncStatusOutcome(rsp);
        else
            return DescribeUserSyncStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeUserSyncStatusOutcome(outcome.GetError());
    }
}

void BhClient::DescribeUserSyncStatusAsync(const DescribeUserSyncStatusRequest& request, const DescribeUserSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserSyncStatusRequest&;
    using Resp = DescribeUserSyncStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserSyncStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeUserSyncStatusOutcomeCallable BhClient::DescribeUserSyncStatusCallable(const DescribeUserSyncStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserSyncStatusOutcome>>();
    DescribeUserSyncStatusAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeUserSyncStatusRequest&,
        DescribeUserSyncStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DescribeUsersOutcome BhClient::DescribeUsers(const DescribeUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersResponse rsp = DescribeUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersOutcome(rsp);
        else
            return DescribeUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersOutcome(outcome.GetError());
    }
}

void BhClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsersRequest&;
    using Resp = DescribeUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DescribeUsersOutcomeCallable BhClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsersOutcome>>();
    DescribeUsersAsync(
    request,
    [prom](
        const BhClient*,
        const DescribeUsersRequest&,
        DescribeUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DisableExternalAccessOutcome BhClient::DisableExternalAccess(const DisableExternalAccessRequest &request)
{
    auto outcome = MakeRequest(request, "DisableExternalAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableExternalAccessResponse rsp = DisableExternalAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableExternalAccessOutcome(rsp);
        else
            return DisableExternalAccessOutcome(o.GetError());
    }
    else
    {
        return DisableExternalAccessOutcome(outcome.GetError());
    }
}

void BhClient::DisableExternalAccessAsync(const DisableExternalAccessRequest& request, const DisableExternalAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableExternalAccessRequest&;
    using Resp = DisableExternalAccessResponse;

    DoRequestAsync<Req, Resp>(
        "DisableExternalAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DisableExternalAccessOutcomeCallable BhClient::DisableExternalAccessCallable(const DisableExternalAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableExternalAccessOutcome>>();
    DisableExternalAccessAsync(
    request,
    [prom](
        const BhClient*,
        const DisableExternalAccessRequest&,
        DisableExternalAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::DisableIntranetAccessOutcome BhClient::DisableIntranetAccess(const DisableIntranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "DisableIntranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableIntranetAccessResponse rsp = DisableIntranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableIntranetAccessOutcome(rsp);
        else
            return DisableIntranetAccessOutcome(o.GetError());
    }
    else
    {
        return DisableIntranetAccessOutcome(outcome.GetError());
    }
}

void BhClient::DisableIntranetAccessAsync(const DisableIntranetAccessRequest& request, const DisableIntranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableIntranetAccessRequest&;
    using Resp = DisableIntranetAccessResponse;

    DoRequestAsync<Req, Resp>(
        "DisableIntranetAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::DisableIntranetAccessOutcomeCallable BhClient::DisableIntranetAccessCallable(const DisableIntranetAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableIntranetAccessOutcome>>();
    DisableIntranetAccessAsync(
    request,
    [prom](
        const BhClient*,
        const DisableIntranetAccessRequest&,
        DisableIntranetAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::EnableExternalAccessOutcome BhClient::EnableExternalAccess(const EnableExternalAccessRequest &request)
{
    auto outcome = MakeRequest(request, "EnableExternalAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableExternalAccessResponse rsp = EnableExternalAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableExternalAccessOutcome(rsp);
        else
            return EnableExternalAccessOutcome(o.GetError());
    }
    else
    {
        return EnableExternalAccessOutcome(outcome.GetError());
    }
}

void BhClient::EnableExternalAccessAsync(const EnableExternalAccessRequest& request, const EnableExternalAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableExternalAccessRequest&;
    using Resp = EnableExternalAccessResponse;

    DoRequestAsync<Req, Resp>(
        "EnableExternalAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::EnableExternalAccessOutcomeCallable BhClient::EnableExternalAccessCallable(const EnableExternalAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableExternalAccessOutcome>>();
    EnableExternalAccessAsync(
    request,
    [prom](
        const BhClient*,
        const EnableExternalAccessRequest&,
        EnableExternalAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::EnableIntranetAccessOutcome BhClient::EnableIntranetAccess(const EnableIntranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "EnableIntranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableIntranetAccessResponse rsp = EnableIntranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableIntranetAccessOutcome(rsp);
        else
            return EnableIntranetAccessOutcome(o.GetError());
    }
    else
    {
        return EnableIntranetAccessOutcome(outcome.GetError());
    }
}

void BhClient::EnableIntranetAccessAsync(const EnableIntranetAccessRequest& request, const EnableIntranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableIntranetAccessRequest&;
    using Resp = EnableIntranetAccessResponse;

    DoRequestAsync<Req, Resp>(
        "EnableIntranetAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::EnableIntranetAccessOutcomeCallable BhClient::EnableIntranetAccessCallable(const EnableIntranetAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableIntranetAccessOutcome>>();
    EnableIntranetAccessAsync(
    request,
    [prom](
        const BhClient*,
        const EnableIntranetAccessRequest&,
        EnableIntranetAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ImportExternalDeviceOutcome BhClient::ImportExternalDevice(const ImportExternalDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ImportExternalDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportExternalDeviceResponse rsp = ImportExternalDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportExternalDeviceOutcome(rsp);
        else
            return ImportExternalDeviceOutcome(o.GetError());
    }
    else
    {
        return ImportExternalDeviceOutcome(outcome.GetError());
    }
}

void BhClient::ImportExternalDeviceAsync(const ImportExternalDeviceRequest& request, const ImportExternalDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportExternalDeviceRequest&;
    using Resp = ImportExternalDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ImportExternalDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ImportExternalDeviceOutcomeCallable BhClient::ImportExternalDeviceCallable(const ImportExternalDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportExternalDeviceOutcome>>();
    ImportExternalDeviceAsync(
    request,
    [prom](
        const BhClient*,
        const ImportExternalDeviceRequest&,
        ImportExternalDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyAccessWhiteListAutoStatusOutcome BhClient::ModifyAccessWhiteListAutoStatus(const ModifyAccessWhiteListAutoStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessWhiteListAutoStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessWhiteListAutoStatusResponse rsp = ModifyAccessWhiteListAutoStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessWhiteListAutoStatusOutcome(rsp);
        else
            return ModifyAccessWhiteListAutoStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessWhiteListAutoStatusOutcome(outcome.GetError());
    }
}

void BhClient::ModifyAccessWhiteListAutoStatusAsync(const ModifyAccessWhiteListAutoStatusRequest& request, const ModifyAccessWhiteListAutoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccessWhiteListAutoStatusRequest&;
    using Resp = ModifyAccessWhiteListAutoStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccessWhiteListAutoStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyAccessWhiteListAutoStatusOutcomeCallable BhClient::ModifyAccessWhiteListAutoStatusCallable(const ModifyAccessWhiteListAutoStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccessWhiteListAutoStatusOutcome>>();
    ModifyAccessWhiteListAutoStatusAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyAccessWhiteListAutoStatusRequest&,
        ModifyAccessWhiteListAutoStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyAccessWhiteListRuleOutcome BhClient::ModifyAccessWhiteListRule(const ModifyAccessWhiteListRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessWhiteListRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessWhiteListRuleResponse rsp = ModifyAccessWhiteListRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessWhiteListRuleOutcome(rsp);
        else
            return ModifyAccessWhiteListRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessWhiteListRuleOutcome(outcome.GetError());
    }
}

void BhClient::ModifyAccessWhiteListRuleAsync(const ModifyAccessWhiteListRuleRequest& request, const ModifyAccessWhiteListRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccessWhiteListRuleRequest&;
    using Resp = ModifyAccessWhiteListRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccessWhiteListRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyAccessWhiteListRuleOutcomeCallable BhClient::ModifyAccessWhiteListRuleCallable(const ModifyAccessWhiteListRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccessWhiteListRuleOutcome>>();
    ModifyAccessWhiteListRuleAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyAccessWhiteListRuleRequest&,
        ModifyAccessWhiteListRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyAccessWhiteListStatusOutcome BhClient::ModifyAccessWhiteListStatus(const ModifyAccessWhiteListStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessWhiteListStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessWhiteListStatusResponse rsp = ModifyAccessWhiteListStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessWhiteListStatusOutcome(rsp);
        else
            return ModifyAccessWhiteListStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessWhiteListStatusOutcome(outcome.GetError());
    }
}

void BhClient::ModifyAccessWhiteListStatusAsync(const ModifyAccessWhiteListStatusRequest& request, const ModifyAccessWhiteListStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccessWhiteListStatusRequest&;
    using Resp = ModifyAccessWhiteListStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccessWhiteListStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyAccessWhiteListStatusOutcomeCallable BhClient::ModifyAccessWhiteListStatusCallable(const ModifyAccessWhiteListStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccessWhiteListStatusOutcome>>();
    ModifyAccessWhiteListStatusAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyAccessWhiteListStatusRequest&,
        ModifyAccessWhiteListStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyAclOutcome BhClient::ModifyAcl(const ModifyAclRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAclResponse rsp = ModifyAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAclOutcome(rsp);
        else
            return ModifyAclOutcome(o.GetError());
    }
    else
    {
        return ModifyAclOutcome(outcome.GetError());
    }
}

void BhClient::ModifyAclAsync(const ModifyAclRequest& request, const ModifyAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAclRequest&;
    using Resp = ModifyAclResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAcl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyAclOutcomeCallable BhClient::ModifyAclCallable(const ModifyAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAclOutcome>>();
    ModifyAclAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyAclRequest&,
        ModifyAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyAssetSyncFlagOutcome BhClient::ModifyAssetSyncFlag(const ModifyAssetSyncFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssetSyncFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssetSyncFlagResponse rsp = ModifyAssetSyncFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssetSyncFlagOutcome(rsp);
        else
            return ModifyAssetSyncFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyAssetSyncFlagOutcome(outcome.GetError());
    }
}

void BhClient::ModifyAssetSyncFlagAsync(const ModifyAssetSyncFlagRequest& request, const ModifyAssetSyncFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAssetSyncFlagRequest&;
    using Resp = ModifyAssetSyncFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAssetSyncFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyAssetSyncFlagOutcomeCallable BhClient::ModifyAssetSyncFlagCallable(const ModifyAssetSyncFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAssetSyncFlagOutcome>>();
    ModifyAssetSyncFlagAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyAssetSyncFlagRequest&,
        ModifyAssetSyncFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyAuthModeSettingOutcome BhClient::ModifyAuthModeSetting(const ModifyAuthModeSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuthModeSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuthModeSettingResponse rsp = ModifyAuthModeSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuthModeSettingOutcome(rsp);
        else
            return ModifyAuthModeSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyAuthModeSettingOutcome(outcome.GetError());
    }
}

void BhClient::ModifyAuthModeSettingAsync(const ModifyAuthModeSettingRequest& request, const ModifyAuthModeSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAuthModeSettingRequest&;
    using Resp = ModifyAuthModeSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAuthModeSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyAuthModeSettingOutcomeCallable BhClient::ModifyAuthModeSettingCallable(const ModifyAuthModeSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuthModeSettingOutcome>>();
    ModifyAuthModeSettingAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyAuthModeSettingRequest&,
        ModifyAuthModeSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyChangePwdTaskOutcome BhClient::ModifyChangePwdTask(const ModifyChangePwdTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyChangePwdTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyChangePwdTaskResponse rsp = ModifyChangePwdTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyChangePwdTaskOutcome(rsp);
        else
            return ModifyChangePwdTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyChangePwdTaskOutcome(outcome.GetError());
    }
}

void BhClient::ModifyChangePwdTaskAsync(const ModifyChangePwdTaskRequest& request, const ModifyChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyChangePwdTaskRequest&;
    using Resp = ModifyChangePwdTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyChangePwdTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyChangePwdTaskOutcomeCallable BhClient::ModifyChangePwdTaskCallable(const ModifyChangePwdTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyChangePwdTaskOutcome>>();
    ModifyChangePwdTaskAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyChangePwdTaskRequest&,
        ModifyChangePwdTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyCmdTemplateOutcome BhClient::ModifyCmdTemplate(const ModifyCmdTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCmdTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCmdTemplateResponse rsp = ModifyCmdTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCmdTemplateOutcome(rsp);
        else
            return ModifyCmdTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyCmdTemplateOutcome(outcome.GetError());
    }
}

void BhClient::ModifyCmdTemplateAsync(const ModifyCmdTemplateRequest& request, const ModifyCmdTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCmdTemplateRequest&;
    using Resp = ModifyCmdTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCmdTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyCmdTemplateOutcomeCallable BhClient::ModifyCmdTemplateCallable(const ModifyCmdTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCmdTemplateOutcome>>();
    ModifyCmdTemplateAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyCmdTemplateRequest&,
        ModifyCmdTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyDeviceOutcome BhClient::ModifyDevice(const ModifyDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceResponse rsp = ModifyDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceOutcome(rsp);
        else
            return ModifyDeviceOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceOutcome(outcome.GetError());
    }
}

void BhClient::ModifyDeviceAsync(const ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceRequest&;
    using Resp = ModifyDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyDeviceOutcomeCallable BhClient::ModifyDeviceCallable(const ModifyDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceOutcome>>();
    ModifyDeviceAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyDeviceRequest&,
        ModifyDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyDeviceGroupOutcome BhClient::ModifyDeviceGroup(const ModifyDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceGroupResponse rsp = ModifyDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceGroupOutcome(rsp);
        else
            return ModifyDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceGroupOutcome(outcome.GetError());
    }
}

void BhClient::ModifyDeviceGroupAsync(const ModifyDeviceGroupRequest& request, const ModifyDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceGroupRequest&;
    using Resp = ModifyDeviceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyDeviceGroupOutcomeCallable BhClient::ModifyDeviceGroupCallable(const ModifyDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceGroupOutcome>>();
    ModifyDeviceGroupAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyDeviceGroupRequest&,
        ModifyDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyLDAPSettingOutcome BhClient::ModifyLDAPSetting(const ModifyLDAPSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLDAPSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLDAPSettingResponse rsp = ModifyLDAPSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLDAPSettingOutcome(rsp);
        else
            return ModifyLDAPSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyLDAPSettingOutcome(outcome.GetError());
    }
}

void BhClient::ModifyLDAPSettingAsync(const ModifyLDAPSettingRequest& request, const ModifyLDAPSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLDAPSettingRequest&;
    using Resp = ModifyLDAPSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLDAPSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyLDAPSettingOutcomeCallable BhClient::ModifyLDAPSettingCallable(const ModifyLDAPSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLDAPSettingOutcome>>();
    ModifyLDAPSettingAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyLDAPSettingRequest&,
        ModifyLDAPSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyOAuthSettingOutcome BhClient::ModifyOAuthSetting(const ModifyOAuthSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOAuthSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOAuthSettingResponse rsp = ModifyOAuthSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOAuthSettingOutcome(rsp);
        else
            return ModifyOAuthSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyOAuthSettingOutcome(outcome.GetError());
    }
}

void BhClient::ModifyOAuthSettingAsync(const ModifyOAuthSettingRequest& request, const ModifyOAuthSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOAuthSettingRequest&;
    using Resp = ModifyOAuthSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOAuthSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyOAuthSettingOutcomeCallable BhClient::ModifyOAuthSettingCallable(const ModifyOAuthSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOAuthSettingOutcome>>();
    ModifyOAuthSettingAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyOAuthSettingRequest&,
        ModifyOAuthSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyOperationTaskOutcome BhClient::ModifyOperationTask(const ModifyOperationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOperationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOperationTaskResponse rsp = ModifyOperationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOperationTaskOutcome(rsp);
        else
            return ModifyOperationTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyOperationTaskOutcome(outcome.GetError());
    }
}

void BhClient::ModifyOperationTaskAsync(const ModifyOperationTaskRequest& request, const ModifyOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOperationTaskRequest&;
    using Resp = ModifyOperationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOperationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyOperationTaskOutcomeCallable BhClient::ModifyOperationTaskCallable(const ModifyOperationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOperationTaskOutcome>>();
    ModifyOperationTaskAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyOperationTaskRequest&,
        ModifyOperationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyReconnectionSettingOutcome BhClient::ModifyReconnectionSetting(const ModifyReconnectionSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReconnectionSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReconnectionSettingResponse rsp = ModifyReconnectionSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReconnectionSettingOutcome(rsp);
        else
            return ModifyReconnectionSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyReconnectionSettingOutcome(outcome.GetError());
    }
}

void BhClient::ModifyReconnectionSettingAsync(const ModifyReconnectionSettingRequest& request, const ModifyReconnectionSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyReconnectionSettingRequest&;
    using Resp = ModifyReconnectionSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyReconnectionSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyReconnectionSettingOutcomeCallable BhClient::ModifyReconnectionSettingCallable(const ModifyReconnectionSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyReconnectionSettingOutcome>>();
    ModifyReconnectionSettingAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyReconnectionSettingRequest&,
        ModifyReconnectionSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyResourceOutcome BhClient::ModifyResource(const ModifyResourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceResponse rsp = ModifyResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceOutcome(rsp);
        else
            return ModifyResourceOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceOutcome(outcome.GetError());
    }
}

void BhClient::ModifyResourceAsync(const ModifyResourceRequest& request, const ModifyResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResourceRequest&;
    using Resp = ModifyResourceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyResourceOutcomeCallable BhClient::ModifyResourceCallable(const ModifyResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourceOutcome>>();
    ModifyResourceAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyResourceRequest&,
        ModifyResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyUserOutcome BhClient::ModifyUser(const ModifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserResponse rsp = ModifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserOutcome(rsp);
        else
            return ModifyUserOutcome(o.GetError());
    }
    else
    {
        return ModifyUserOutcome(outcome.GetError());
    }
}

void BhClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserRequest&;
    using Resp = ModifyUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyUserOutcomeCallable BhClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserOutcome>>();
    ModifyUserAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyUserRequest&,
        ModifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyUserDirectoryOutcome BhClient::ModifyUserDirectory(const ModifyUserDirectoryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserDirectory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserDirectoryResponse rsp = ModifyUserDirectoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserDirectoryOutcome(rsp);
        else
            return ModifyUserDirectoryOutcome(o.GetError());
    }
    else
    {
        return ModifyUserDirectoryOutcome(outcome.GetError());
    }
}

void BhClient::ModifyUserDirectoryAsync(const ModifyUserDirectoryRequest& request, const ModifyUserDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserDirectoryRequest&;
    using Resp = ModifyUserDirectoryResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserDirectory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyUserDirectoryOutcomeCallable BhClient::ModifyUserDirectoryCallable(const ModifyUserDirectoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserDirectoryOutcome>>();
    ModifyUserDirectoryAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyUserDirectoryRequest&,
        ModifyUserDirectoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ModifyUserGroupOutcome BhClient::ModifyUserGroup(const ModifyUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserGroupResponse rsp = ModifyUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserGroupOutcome(rsp);
        else
            return ModifyUserGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyUserGroupOutcome(outcome.GetError());
    }
}

void BhClient::ModifyUserGroupAsync(const ModifyUserGroupRequest& request, const ModifyUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserGroupRequest&;
    using Resp = ModifyUserGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ModifyUserGroupOutcomeCallable BhClient::ModifyUserGroupCallable(const ModifyUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserGroupOutcome>>();
    ModifyUserGroupAsync(
    request,
    [prom](
        const BhClient*,
        const ModifyUserGroupRequest&,
        ModifyUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ReplaySessionOutcome BhClient::ReplaySession(const ReplaySessionRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaySession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaySessionResponse rsp = ReplaySessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaySessionOutcome(rsp);
        else
            return ReplaySessionOutcome(o.GetError());
    }
    else
    {
        return ReplaySessionOutcome(outcome.GetError());
    }
}

void BhClient::ReplaySessionAsync(const ReplaySessionRequest& request, const ReplaySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaySessionRequest&;
    using Resp = ReplaySessionResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaySession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ReplaySessionOutcomeCallable BhClient::ReplaySessionCallable(const ReplaySessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaySessionOutcome>>();
    ReplaySessionAsync(
    request,
    [prom](
        const BhClient*,
        const ReplaySessionRequest&,
        ReplaySessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ResetDeviceAccountPasswordOutcome BhClient::ResetDeviceAccountPassword(const ResetDeviceAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetDeviceAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetDeviceAccountPasswordResponse rsp = ResetDeviceAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetDeviceAccountPasswordOutcome(rsp);
        else
            return ResetDeviceAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetDeviceAccountPasswordOutcome(outcome.GetError());
    }
}

void BhClient::ResetDeviceAccountPasswordAsync(const ResetDeviceAccountPasswordRequest& request, const ResetDeviceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetDeviceAccountPasswordRequest&;
    using Resp = ResetDeviceAccountPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetDeviceAccountPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ResetDeviceAccountPasswordOutcomeCallable BhClient::ResetDeviceAccountPasswordCallable(const ResetDeviceAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetDeviceAccountPasswordOutcome>>();
    ResetDeviceAccountPasswordAsync(
    request,
    [prom](
        const BhClient*,
        const ResetDeviceAccountPasswordRequest&,
        ResetDeviceAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ResetDeviceAccountPrivateKeyOutcome BhClient::ResetDeviceAccountPrivateKey(const ResetDeviceAccountPrivateKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ResetDeviceAccountPrivateKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetDeviceAccountPrivateKeyResponse rsp = ResetDeviceAccountPrivateKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetDeviceAccountPrivateKeyOutcome(rsp);
        else
            return ResetDeviceAccountPrivateKeyOutcome(o.GetError());
    }
    else
    {
        return ResetDeviceAccountPrivateKeyOutcome(outcome.GetError());
    }
}

void BhClient::ResetDeviceAccountPrivateKeyAsync(const ResetDeviceAccountPrivateKeyRequest& request, const ResetDeviceAccountPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetDeviceAccountPrivateKeyRequest&;
    using Resp = ResetDeviceAccountPrivateKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ResetDeviceAccountPrivateKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ResetDeviceAccountPrivateKeyOutcomeCallable BhClient::ResetDeviceAccountPrivateKeyCallable(const ResetDeviceAccountPrivateKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetDeviceAccountPrivateKeyOutcome>>();
    ResetDeviceAccountPrivateKeyAsync(
    request,
    [prom](
        const BhClient*,
        const ResetDeviceAccountPrivateKeyRequest&,
        ResetDeviceAccountPrivateKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::ResetUserOutcome BhClient::ResetUser(const ResetUserRequest &request)
{
    auto outcome = MakeRequest(request, "ResetUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetUserResponse rsp = ResetUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetUserOutcome(rsp);
        else
            return ResetUserOutcome(o.GetError());
    }
    else
    {
        return ResetUserOutcome(outcome.GetError());
    }
}

void BhClient::ResetUserAsync(const ResetUserRequest& request, const ResetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetUserRequest&;
    using Resp = ResetUserResponse;

    DoRequestAsync<Req, Resp>(
        "ResetUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::ResetUserOutcomeCallable BhClient::ResetUserCallable(const ResetUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetUserOutcome>>();
    ResetUserAsync(
    request,
    [prom](
        const BhClient*,
        const ResetUserRequest&,
        ResetUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::RunChangePwdTaskOutcome BhClient::RunChangePwdTask(const RunChangePwdTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RunChangePwdTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunChangePwdTaskResponse rsp = RunChangePwdTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunChangePwdTaskOutcome(rsp);
        else
            return RunChangePwdTaskOutcome(o.GetError());
    }
    else
    {
        return RunChangePwdTaskOutcome(outcome.GetError());
    }
}

void BhClient::RunChangePwdTaskAsync(const RunChangePwdTaskRequest& request, const RunChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunChangePwdTaskRequest&;
    using Resp = RunChangePwdTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RunChangePwdTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::RunChangePwdTaskOutcomeCallable BhClient::RunChangePwdTaskCallable(const RunChangePwdTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunChangePwdTaskOutcome>>();
    RunChangePwdTaskAsync(
    request,
    [prom](
        const BhClient*,
        const RunChangePwdTaskRequest&,
        RunChangePwdTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::RunOperationTaskOutcome BhClient::RunOperationTask(const RunOperationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RunOperationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunOperationTaskResponse rsp = RunOperationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunOperationTaskOutcome(rsp);
        else
            return RunOperationTaskOutcome(o.GetError());
    }
    else
    {
        return RunOperationTaskOutcome(outcome.GetError());
    }
}

void BhClient::RunOperationTaskAsync(const RunOperationTaskRequest& request, const RunOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunOperationTaskRequest&;
    using Resp = RunOperationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RunOperationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::RunOperationTaskOutcomeCallable BhClient::RunOperationTaskCallable(const RunOperationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunOperationTaskOutcome>>();
    RunOperationTaskAsync(
    request,
    [prom](
        const BhClient*,
        const RunOperationTaskRequest&,
        RunOperationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SearchAuditLogOutcome BhClient::SearchAuditLog(const SearchAuditLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchAuditLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchAuditLogResponse rsp = SearchAuditLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchAuditLogOutcome(rsp);
        else
            return SearchAuditLogOutcome(o.GetError());
    }
    else
    {
        return SearchAuditLogOutcome(outcome.GetError());
    }
}

void BhClient::SearchAuditLogAsync(const SearchAuditLogRequest& request, const SearchAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchAuditLogRequest&;
    using Resp = SearchAuditLogResponse;

    DoRequestAsync<Req, Resp>(
        "SearchAuditLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SearchAuditLogOutcomeCallable BhClient::SearchAuditLogCallable(const SearchAuditLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchAuditLogOutcome>>();
    SearchAuditLogAsync(
    request,
    [prom](
        const BhClient*,
        const SearchAuditLogRequest&,
        SearchAuditLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SearchCommandOutcome BhClient::SearchCommand(const SearchCommandRequest &request)
{
    auto outcome = MakeRequest(request, "SearchCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchCommandResponse rsp = SearchCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchCommandOutcome(rsp);
        else
            return SearchCommandOutcome(o.GetError());
    }
    else
    {
        return SearchCommandOutcome(outcome.GetError());
    }
}

void BhClient::SearchCommandAsync(const SearchCommandRequest& request, const SearchCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchCommandRequest&;
    using Resp = SearchCommandResponse;

    DoRequestAsync<Req, Resp>(
        "SearchCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SearchCommandOutcomeCallable BhClient::SearchCommandCallable(const SearchCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchCommandOutcome>>();
    SearchCommandAsync(
    request,
    [prom](
        const BhClient*,
        const SearchCommandRequest&,
        SearchCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SearchCommandBySidOutcome BhClient::SearchCommandBySid(const SearchCommandBySidRequest &request)
{
    auto outcome = MakeRequest(request, "SearchCommandBySid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchCommandBySidResponse rsp = SearchCommandBySidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchCommandBySidOutcome(rsp);
        else
            return SearchCommandBySidOutcome(o.GetError());
    }
    else
    {
        return SearchCommandBySidOutcome(outcome.GetError());
    }
}

void BhClient::SearchCommandBySidAsync(const SearchCommandBySidRequest& request, const SearchCommandBySidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchCommandBySidRequest&;
    using Resp = SearchCommandBySidResponse;

    DoRequestAsync<Req, Resp>(
        "SearchCommandBySid", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SearchCommandBySidOutcomeCallable BhClient::SearchCommandBySidCallable(const SearchCommandBySidRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchCommandBySidOutcome>>();
    SearchCommandBySidAsync(
    request,
    [prom](
        const BhClient*,
        const SearchCommandBySidRequest&,
        SearchCommandBySidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SearchFileOutcome BhClient::SearchFile(const SearchFileRequest &request)
{
    auto outcome = MakeRequest(request, "SearchFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchFileResponse rsp = SearchFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchFileOutcome(rsp);
        else
            return SearchFileOutcome(o.GetError());
    }
    else
    {
        return SearchFileOutcome(outcome.GetError());
    }
}

void BhClient::SearchFileAsync(const SearchFileRequest& request, const SearchFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchFileRequest&;
    using Resp = SearchFileResponse;

    DoRequestAsync<Req, Resp>(
        "SearchFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SearchFileOutcomeCallable BhClient::SearchFileCallable(const SearchFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchFileOutcome>>();
    SearchFileAsync(
    request,
    [prom](
        const BhClient*,
        const SearchFileRequest&,
        SearchFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SearchFileBySidOutcome BhClient::SearchFileBySid(const SearchFileBySidRequest &request)
{
    auto outcome = MakeRequest(request, "SearchFileBySid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchFileBySidResponse rsp = SearchFileBySidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchFileBySidOutcome(rsp);
        else
            return SearchFileBySidOutcome(o.GetError());
    }
    else
    {
        return SearchFileBySidOutcome(outcome.GetError());
    }
}

void BhClient::SearchFileBySidAsync(const SearchFileBySidRequest& request, const SearchFileBySidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchFileBySidRequest&;
    using Resp = SearchFileBySidResponse;

    DoRequestAsync<Req, Resp>(
        "SearchFileBySid", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SearchFileBySidOutcomeCallable BhClient::SearchFileBySidCallable(const SearchFileBySidRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchFileBySidOutcome>>();
    SearchFileBySidAsync(
    request,
    [prom](
        const BhClient*,
        const SearchFileBySidRequest&,
        SearchFileBySidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SearchSessionOutcome BhClient::SearchSession(const SearchSessionRequest &request)
{
    auto outcome = MakeRequest(request, "SearchSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchSessionResponse rsp = SearchSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchSessionOutcome(rsp);
        else
            return SearchSessionOutcome(o.GetError());
    }
    else
    {
        return SearchSessionOutcome(outcome.GetError());
    }
}

void BhClient::SearchSessionAsync(const SearchSessionRequest& request, const SearchSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchSessionRequest&;
    using Resp = SearchSessionResponse;

    DoRequestAsync<Req, Resp>(
        "SearchSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SearchSessionOutcomeCallable BhClient::SearchSessionCallable(const SearchSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchSessionOutcome>>();
    SearchSessionAsync(
    request,
    [prom](
        const BhClient*,
        const SearchSessionRequest&,
        SearchSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SearchSessionCommandOutcome BhClient::SearchSessionCommand(const SearchSessionCommandRequest &request)
{
    auto outcome = MakeRequest(request, "SearchSessionCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchSessionCommandResponse rsp = SearchSessionCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchSessionCommandOutcome(rsp);
        else
            return SearchSessionCommandOutcome(o.GetError());
    }
    else
    {
        return SearchSessionCommandOutcome(outcome.GetError());
    }
}

void BhClient::SearchSessionCommandAsync(const SearchSessionCommandRequest& request, const SearchSessionCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchSessionCommandRequest&;
    using Resp = SearchSessionCommandResponse;

    DoRequestAsync<Req, Resp>(
        "SearchSessionCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SearchSessionCommandOutcomeCallable BhClient::SearchSessionCommandCallable(const SearchSessionCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchSessionCommandOutcome>>();
    SearchSessionCommandAsync(
    request,
    [prom](
        const BhClient*,
        const SearchSessionCommandRequest&,
        SearchSessionCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SearchSubtaskResultByIdOutcome BhClient::SearchSubtaskResultById(const SearchSubtaskResultByIdRequest &request)
{
    auto outcome = MakeRequest(request, "SearchSubtaskResultById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchSubtaskResultByIdResponse rsp = SearchSubtaskResultByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchSubtaskResultByIdOutcome(rsp);
        else
            return SearchSubtaskResultByIdOutcome(o.GetError());
    }
    else
    {
        return SearchSubtaskResultByIdOutcome(outcome.GetError());
    }
}

void BhClient::SearchSubtaskResultByIdAsync(const SearchSubtaskResultByIdRequest& request, const SearchSubtaskResultByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchSubtaskResultByIdRequest&;
    using Resp = SearchSubtaskResultByIdResponse;

    DoRequestAsync<Req, Resp>(
        "SearchSubtaskResultById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SearchSubtaskResultByIdOutcomeCallable BhClient::SearchSubtaskResultByIdCallable(const SearchSubtaskResultByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchSubtaskResultByIdOutcome>>();
    SearchSubtaskResultByIdAsync(
    request,
    [prom](
        const BhClient*,
        const SearchSubtaskResultByIdRequest&,
        SearchSubtaskResultByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SearchTaskResultOutcome BhClient::SearchTaskResult(const SearchTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "SearchTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchTaskResultResponse rsp = SearchTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchTaskResultOutcome(rsp);
        else
            return SearchTaskResultOutcome(o.GetError());
    }
    else
    {
        return SearchTaskResultOutcome(outcome.GetError());
    }
}

void BhClient::SearchTaskResultAsync(const SearchTaskResultRequest& request, const SearchTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchTaskResultRequest&;
    using Resp = SearchTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "SearchTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SearchTaskResultOutcomeCallable BhClient::SearchTaskResultCallable(const SearchTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchTaskResultOutcome>>();
    SearchTaskResultAsync(
    request,
    [prom](
        const BhClient*,
        const SearchTaskResultRequest&,
        SearchTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SetLDAPSyncFlagOutcome BhClient::SetLDAPSyncFlag(const SetLDAPSyncFlagRequest &request)
{
    auto outcome = MakeRequest(request, "SetLDAPSyncFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLDAPSyncFlagResponse rsp = SetLDAPSyncFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLDAPSyncFlagOutcome(rsp);
        else
            return SetLDAPSyncFlagOutcome(o.GetError());
    }
    else
    {
        return SetLDAPSyncFlagOutcome(outcome.GetError());
    }
}

void BhClient::SetLDAPSyncFlagAsync(const SetLDAPSyncFlagRequest& request, const SetLDAPSyncFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetLDAPSyncFlagRequest&;
    using Resp = SetLDAPSyncFlagResponse;

    DoRequestAsync<Req, Resp>(
        "SetLDAPSyncFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SetLDAPSyncFlagOutcomeCallable BhClient::SetLDAPSyncFlagCallable(const SetLDAPSyncFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetLDAPSyncFlagOutcome>>();
    SetLDAPSyncFlagAsync(
    request,
    [prom](
        const BhClient*,
        const SetLDAPSyncFlagRequest&,
        SetLDAPSyncFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SyncDevicesToIOAOutcome BhClient::SyncDevicesToIOA(const SyncDevicesToIOARequest &request)
{
    auto outcome = MakeRequest(request, "SyncDevicesToIOA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncDevicesToIOAResponse rsp = SyncDevicesToIOAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncDevicesToIOAOutcome(rsp);
        else
            return SyncDevicesToIOAOutcome(o.GetError());
    }
    else
    {
        return SyncDevicesToIOAOutcome(outcome.GetError());
    }
}

void BhClient::SyncDevicesToIOAAsync(const SyncDevicesToIOARequest& request, const SyncDevicesToIOAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncDevicesToIOARequest&;
    using Resp = SyncDevicesToIOAResponse;

    DoRequestAsync<Req, Resp>(
        "SyncDevicesToIOA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SyncDevicesToIOAOutcomeCallable BhClient::SyncDevicesToIOACallable(const SyncDevicesToIOARequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncDevicesToIOAOutcome>>();
    SyncDevicesToIOAAsync(
    request,
    [prom](
        const BhClient*,
        const SyncDevicesToIOARequest&,
        SyncDevicesToIOAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::SyncUserToIOAOutcome BhClient::SyncUserToIOA(const SyncUserToIOARequest &request)
{
    auto outcome = MakeRequest(request, "SyncUserToIOA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncUserToIOAResponse rsp = SyncUserToIOAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncUserToIOAOutcome(rsp);
        else
            return SyncUserToIOAOutcome(o.GetError());
    }
    else
    {
        return SyncUserToIOAOutcome(outcome.GetError());
    }
}

void BhClient::SyncUserToIOAAsync(const SyncUserToIOARequest& request, const SyncUserToIOAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncUserToIOARequest&;
    using Resp = SyncUserToIOAResponse;

    DoRequestAsync<Req, Resp>(
        "SyncUserToIOA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::SyncUserToIOAOutcomeCallable BhClient::SyncUserToIOACallable(const SyncUserToIOARequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncUserToIOAOutcome>>();
    SyncUserToIOAAsync(
    request,
    [prom](
        const BhClient*,
        const SyncUserToIOARequest&,
        SyncUserToIOAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BhClient::UnlockUserOutcome BhClient::UnlockUser(const UnlockUserRequest &request)
{
    auto outcome = MakeRequest(request, "UnlockUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlockUserResponse rsp = UnlockUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlockUserOutcome(rsp);
        else
            return UnlockUserOutcome(o.GetError());
    }
    else
    {
        return UnlockUserOutcome(outcome.GetError());
    }
}

void BhClient::UnlockUserAsync(const UnlockUserRequest& request, const UnlockUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnlockUserRequest&;
    using Resp = UnlockUserResponse;

    DoRequestAsync<Req, Resp>(
        "UnlockUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BhClient::UnlockUserOutcomeCallable BhClient::UnlockUserCallable(const UnlockUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnlockUserOutcome>>();
    UnlockUserAsync(
    request,
    [prom](
        const BhClient*,
        const UnlockUserRequest&,
        UnlockUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


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

#include <tencentcloud/dasb/v20191018/DasbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dasb::V20191018;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-18";
    const string ENDPOINT = "dasb.tencentcloudapi.com";
}

DasbClient::DasbClient(const Credential &credential, const string &region) :
    DasbClient(credential, region, ClientProfile())
{
}

DasbClient::DasbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DasbClient::AddDeviceGroupMembersOutcome DasbClient::AddDeviceGroupMembers(const AddDeviceGroupMembersRequest &request)
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

void DasbClient::AddDeviceGroupMembersAsync(const AddDeviceGroupMembersRequest& request, const AddDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::AddDeviceGroupMembersOutcomeCallable DasbClient::AddDeviceGroupMembersCallable(const AddDeviceGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddDeviceGroupMembersOutcome>>();
    AddDeviceGroupMembersAsync(
    request,
    [prom](
        const DasbClient*,
        const AddDeviceGroupMembersRequest&,
        AddDeviceGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::AddUserGroupMembersOutcome DasbClient::AddUserGroupMembers(const AddUserGroupMembersRequest &request)
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

void DasbClient::AddUserGroupMembersAsync(const AddUserGroupMembersRequest& request, const AddUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::AddUserGroupMembersOutcomeCallable DasbClient::AddUserGroupMembersCallable(const AddUserGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUserGroupMembersOutcome>>();
    AddUserGroupMembersAsync(
    request,
    [prom](
        const DasbClient*,
        const AddUserGroupMembersRequest&,
        AddUserGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::BindDeviceAccountPasswordOutcome DasbClient::BindDeviceAccountPassword(const BindDeviceAccountPasswordRequest &request)
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

void DasbClient::BindDeviceAccountPasswordAsync(const BindDeviceAccountPasswordRequest& request, const BindDeviceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::BindDeviceAccountPasswordOutcomeCallable DasbClient::BindDeviceAccountPasswordCallable(const BindDeviceAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDeviceAccountPasswordOutcome>>();
    BindDeviceAccountPasswordAsync(
    request,
    [prom](
        const DasbClient*,
        const BindDeviceAccountPasswordRequest&,
        BindDeviceAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::BindDeviceAccountPrivateKeyOutcome DasbClient::BindDeviceAccountPrivateKey(const BindDeviceAccountPrivateKeyRequest &request)
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

void DasbClient::BindDeviceAccountPrivateKeyAsync(const BindDeviceAccountPrivateKeyRequest& request, const BindDeviceAccountPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::BindDeviceAccountPrivateKeyOutcomeCallable DasbClient::BindDeviceAccountPrivateKeyCallable(const BindDeviceAccountPrivateKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDeviceAccountPrivateKeyOutcome>>();
    BindDeviceAccountPrivateKeyAsync(
    request,
    [prom](
        const DasbClient*,
        const BindDeviceAccountPrivateKeyRequest&,
        BindDeviceAccountPrivateKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::BindDeviceResourceOutcome DasbClient::BindDeviceResource(const BindDeviceResourceRequest &request)
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

void DasbClient::BindDeviceResourceAsync(const BindDeviceResourceRequest& request, const BindDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::BindDeviceResourceOutcomeCallable DasbClient::BindDeviceResourceCallable(const BindDeviceResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindDeviceResourceOutcome>>();
    BindDeviceResourceAsync(
    request,
    [prom](
        const DasbClient*,
        const BindDeviceResourceRequest&,
        BindDeviceResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::CreateAclOutcome DasbClient::CreateAcl(const CreateAclRequest &request)
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

void DasbClient::CreateAclAsync(const CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::CreateAclOutcomeCallable DasbClient::CreateAclCallable(const CreateAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAclOutcome>>();
    CreateAclAsync(
    request,
    [prom](
        const DasbClient*,
        const CreateAclRequest&,
        CreateAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::CreateAssetSyncJobOutcome DasbClient::CreateAssetSyncJob(const CreateAssetSyncJobRequest &request)
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

void DasbClient::CreateAssetSyncJobAsync(const CreateAssetSyncJobRequest& request, const CreateAssetSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::CreateAssetSyncJobOutcomeCallable DasbClient::CreateAssetSyncJobCallable(const CreateAssetSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssetSyncJobOutcome>>();
    CreateAssetSyncJobAsync(
    request,
    [prom](
        const DasbClient*,
        const CreateAssetSyncJobRequest&,
        CreateAssetSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::CreateChangePwdTaskOutcome DasbClient::CreateChangePwdTask(const CreateChangePwdTaskRequest &request)
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

void DasbClient::CreateChangePwdTaskAsync(const CreateChangePwdTaskRequest& request, const CreateChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::CreateChangePwdTaskOutcomeCallable DasbClient::CreateChangePwdTaskCallable(const CreateChangePwdTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateChangePwdTaskOutcome>>();
    CreateChangePwdTaskAsync(
    request,
    [prom](
        const DasbClient*,
        const CreateChangePwdTaskRequest&,
        CreateChangePwdTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::CreateCmdTemplateOutcome DasbClient::CreateCmdTemplate(const CreateCmdTemplateRequest &request)
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

void DasbClient::CreateCmdTemplateAsync(const CreateCmdTemplateRequest& request, const CreateCmdTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::CreateCmdTemplateOutcomeCallable DasbClient::CreateCmdTemplateCallable(const CreateCmdTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCmdTemplateOutcome>>();
    CreateCmdTemplateAsync(
    request,
    [prom](
        const DasbClient*,
        const CreateCmdTemplateRequest&,
        CreateCmdTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::CreateDeviceAccountOutcome DasbClient::CreateDeviceAccount(const CreateDeviceAccountRequest &request)
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

void DasbClient::CreateDeviceAccountAsync(const CreateDeviceAccountRequest& request, const CreateDeviceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::CreateDeviceAccountOutcomeCallable DasbClient::CreateDeviceAccountCallable(const CreateDeviceAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceAccountOutcome>>();
    CreateDeviceAccountAsync(
    request,
    [prom](
        const DasbClient*,
        const CreateDeviceAccountRequest&,
        CreateDeviceAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::CreateDeviceGroupOutcome DasbClient::CreateDeviceGroup(const CreateDeviceGroupRequest &request)
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

void DasbClient::CreateDeviceGroupAsync(const CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::CreateDeviceGroupOutcomeCallable DasbClient::CreateDeviceGroupCallable(const CreateDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceGroupOutcome>>();
    CreateDeviceGroupAsync(
    request,
    [prom](
        const DasbClient*,
        const CreateDeviceGroupRequest&,
        CreateDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::CreateResourceOutcome DasbClient::CreateResource(const CreateResourceRequest &request)
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

void DasbClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::CreateResourceOutcomeCallable DasbClient::CreateResourceCallable(const CreateResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourceOutcome>>();
    CreateResourceAsync(
    request,
    [prom](
        const DasbClient*,
        const CreateResourceRequest&,
        CreateResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::CreateUserOutcome DasbClient::CreateUser(const CreateUserRequest &request)
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

void DasbClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::CreateUserOutcomeCallable DasbClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const DasbClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::CreateUserGroupOutcome DasbClient::CreateUserGroup(const CreateUserGroupRequest &request)
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

void DasbClient::CreateUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::CreateUserGroupOutcomeCallable DasbClient::CreateUserGroupCallable(const CreateUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserGroupOutcome>>();
    CreateUserGroupAsync(
    request,
    [prom](
        const DasbClient*,
        const CreateUserGroupRequest&,
        CreateUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeleteAclsOutcome DasbClient::DeleteAcls(const DeleteAclsRequest &request)
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

void DasbClient::DeleteAclsAsync(const DeleteAclsRequest& request, const DeleteAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeleteAclsOutcomeCallable DasbClient::DeleteAclsCallable(const DeleteAclsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAclsOutcome>>();
    DeleteAclsAsync(
    request,
    [prom](
        const DasbClient*,
        const DeleteAclsRequest&,
        DeleteAclsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeleteChangePwdTaskOutcome DasbClient::DeleteChangePwdTask(const DeleteChangePwdTaskRequest &request)
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

void DasbClient::DeleteChangePwdTaskAsync(const DeleteChangePwdTaskRequest& request, const DeleteChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeleteChangePwdTaskOutcomeCallable DasbClient::DeleteChangePwdTaskCallable(const DeleteChangePwdTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteChangePwdTaskOutcome>>();
    DeleteChangePwdTaskAsync(
    request,
    [prom](
        const DasbClient*,
        const DeleteChangePwdTaskRequest&,
        DeleteChangePwdTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeleteCmdTemplatesOutcome DasbClient::DeleteCmdTemplates(const DeleteCmdTemplatesRequest &request)
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

void DasbClient::DeleteCmdTemplatesAsync(const DeleteCmdTemplatesRequest& request, const DeleteCmdTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeleteCmdTemplatesOutcomeCallable DasbClient::DeleteCmdTemplatesCallable(const DeleteCmdTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCmdTemplatesOutcome>>();
    DeleteCmdTemplatesAsync(
    request,
    [prom](
        const DasbClient*,
        const DeleteCmdTemplatesRequest&,
        DeleteCmdTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeleteDeviceAccountsOutcome DasbClient::DeleteDeviceAccounts(const DeleteDeviceAccountsRequest &request)
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

void DasbClient::DeleteDeviceAccountsAsync(const DeleteDeviceAccountsRequest& request, const DeleteDeviceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeleteDeviceAccountsOutcomeCallable DasbClient::DeleteDeviceAccountsCallable(const DeleteDeviceAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceAccountsOutcome>>();
    DeleteDeviceAccountsAsync(
    request,
    [prom](
        const DasbClient*,
        const DeleteDeviceAccountsRequest&,
        DeleteDeviceAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeleteDeviceGroupMembersOutcome DasbClient::DeleteDeviceGroupMembers(const DeleteDeviceGroupMembersRequest &request)
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

void DasbClient::DeleteDeviceGroupMembersAsync(const DeleteDeviceGroupMembersRequest& request, const DeleteDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeleteDeviceGroupMembersOutcomeCallable DasbClient::DeleteDeviceGroupMembersCallable(const DeleteDeviceGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceGroupMembersOutcome>>();
    DeleteDeviceGroupMembersAsync(
    request,
    [prom](
        const DasbClient*,
        const DeleteDeviceGroupMembersRequest&,
        DeleteDeviceGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeleteDeviceGroupsOutcome DasbClient::DeleteDeviceGroups(const DeleteDeviceGroupsRequest &request)
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

void DasbClient::DeleteDeviceGroupsAsync(const DeleteDeviceGroupsRequest& request, const DeleteDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeleteDeviceGroupsOutcomeCallable DasbClient::DeleteDeviceGroupsCallable(const DeleteDeviceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceGroupsOutcome>>();
    DeleteDeviceGroupsAsync(
    request,
    [prom](
        const DasbClient*,
        const DeleteDeviceGroupsRequest&,
        DeleteDeviceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeleteDevicesOutcome DasbClient::DeleteDevices(const DeleteDevicesRequest &request)
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

void DasbClient::DeleteDevicesAsync(const DeleteDevicesRequest& request, const DeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeleteDevicesOutcomeCallable DasbClient::DeleteDevicesCallable(const DeleteDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDevicesOutcome>>();
    DeleteDevicesAsync(
    request,
    [prom](
        const DasbClient*,
        const DeleteDevicesRequest&,
        DeleteDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeleteUserGroupMembersOutcome DasbClient::DeleteUserGroupMembers(const DeleteUserGroupMembersRequest &request)
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

void DasbClient::DeleteUserGroupMembersAsync(const DeleteUserGroupMembersRequest& request, const DeleteUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeleteUserGroupMembersOutcomeCallable DasbClient::DeleteUserGroupMembersCallable(const DeleteUserGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserGroupMembersOutcome>>();
    DeleteUserGroupMembersAsync(
    request,
    [prom](
        const DasbClient*,
        const DeleteUserGroupMembersRequest&,
        DeleteUserGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeleteUserGroupsOutcome DasbClient::DeleteUserGroups(const DeleteUserGroupsRequest &request)
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

void DasbClient::DeleteUserGroupsAsync(const DeleteUserGroupsRequest& request, const DeleteUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeleteUserGroupsOutcomeCallable DasbClient::DeleteUserGroupsCallable(const DeleteUserGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserGroupsOutcome>>();
    DeleteUserGroupsAsync(
    request,
    [prom](
        const DasbClient*,
        const DeleteUserGroupsRequest&,
        DeleteUserGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeleteUsersOutcome DasbClient::DeleteUsers(const DeleteUsersRequest &request)
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

void DasbClient::DeleteUsersAsync(const DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeleteUsersOutcomeCallable DasbClient::DeleteUsersCallable(const DeleteUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUsersOutcome>>();
    DeleteUsersAsync(
    request,
    [prom](
        const DasbClient*,
        const DeleteUsersRequest&,
        DeleteUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DeployResourceOutcome DasbClient::DeployResource(const DeployResourceRequest &request)
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

void DasbClient::DeployResourceAsync(const DeployResourceRequest& request, const DeployResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DeployResourceOutcomeCallable DasbClient::DeployResourceCallable(const DeployResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployResourceOutcome>>();
    DeployResourceAsync(
    request,
    [prom](
        const DasbClient*,
        const DeployResourceRequest&,
        DeployResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeAclsOutcome DasbClient::DescribeAcls(const DescribeAclsRequest &request)
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

void DasbClient::DescribeAclsAsync(const DescribeAclsRequest& request, const DescribeAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeAclsOutcomeCallable DasbClient::DescribeAclsCallable(const DescribeAclsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAclsOutcome>>();
    DescribeAclsAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeAclsRequest&,
        DescribeAclsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeAssetSyncStatusOutcome DasbClient::DescribeAssetSyncStatus(const DescribeAssetSyncStatusRequest &request)
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

void DasbClient::DescribeAssetSyncStatusAsync(const DescribeAssetSyncStatusRequest& request, const DescribeAssetSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeAssetSyncStatusOutcomeCallable DasbClient::DescribeAssetSyncStatusCallable(const DescribeAssetSyncStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetSyncStatusOutcome>>();
    DescribeAssetSyncStatusAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeAssetSyncStatusRequest&,
        DescribeAssetSyncStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeChangePwdTaskOutcome DasbClient::DescribeChangePwdTask(const DescribeChangePwdTaskRequest &request)
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

void DasbClient::DescribeChangePwdTaskAsync(const DescribeChangePwdTaskRequest& request, const DescribeChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeChangePwdTaskOutcomeCallable DasbClient::DescribeChangePwdTaskCallable(const DescribeChangePwdTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChangePwdTaskOutcome>>();
    DescribeChangePwdTaskAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeChangePwdTaskRequest&,
        DescribeChangePwdTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeChangePwdTaskDetailOutcome DasbClient::DescribeChangePwdTaskDetail(const DescribeChangePwdTaskDetailRequest &request)
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

void DasbClient::DescribeChangePwdTaskDetailAsync(const DescribeChangePwdTaskDetailRequest& request, const DescribeChangePwdTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeChangePwdTaskDetailOutcomeCallable DasbClient::DescribeChangePwdTaskDetailCallable(const DescribeChangePwdTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChangePwdTaskDetailOutcome>>();
    DescribeChangePwdTaskDetailAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeChangePwdTaskDetailRequest&,
        DescribeChangePwdTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeCmdTemplatesOutcome DasbClient::DescribeCmdTemplates(const DescribeCmdTemplatesRequest &request)
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

void DasbClient::DescribeCmdTemplatesAsync(const DescribeCmdTemplatesRequest& request, const DescribeCmdTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeCmdTemplatesOutcomeCallable DasbClient::DescribeCmdTemplatesCallable(const DescribeCmdTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCmdTemplatesOutcome>>();
    DescribeCmdTemplatesAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeCmdTemplatesRequest&,
        DescribeCmdTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeDasbImageIdsOutcome DasbClient::DescribeDasbImageIds(const DescribeDasbImageIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDasbImageIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDasbImageIdsResponse rsp = DescribeDasbImageIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDasbImageIdsOutcome(rsp);
        else
            return DescribeDasbImageIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeDasbImageIdsOutcome(outcome.GetError());
    }
}

void DasbClient::DescribeDasbImageIdsAsync(const DescribeDasbImageIdsRequest& request, const DescribeDasbImageIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDasbImageIdsRequest&;
    using Resp = DescribeDasbImageIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDasbImageIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DasbClient::DescribeDasbImageIdsOutcomeCallable DasbClient::DescribeDasbImageIdsCallable(const DescribeDasbImageIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDasbImageIdsOutcome>>();
    DescribeDasbImageIdsAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeDasbImageIdsRequest&,
        DescribeDasbImageIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeDeviceAccountsOutcome DasbClient::DescribeDeviceAccounts(const DescribeDeviceAccountsRequest &request)
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

void DasbClient::DescribeDeviceAccountsAsync(const DescribeDeviceAccountsRequest& request, const DescribeDeviceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeDeviceAccountsOutcomeCallable DasbClient::DescribeDeviceAccountsCallable(const DescribeDeviceAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceAccountsOutcome>>();
    DescribeDeviceAccountsAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeDeviceAccountsRequest&,
        DescribeDeviceAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeDeviceGroupMembersOutcome DasbClient::DescribeDeviceGroupMembers(const DescribeDeviceGroupMembersRequest &request)
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

void DasbClient::DescribeDeviceGroupMembersAsync(const DescribeDeviceGroupMembersRequest& request, const DescribeDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeDeviceGroupMembersOutcomeCallable DasbClient::DescribeDeviceGroupMembersCallable(const DescribeDeviceGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceGroupMembersOutcome>>();
    DescribeDeviceGroupMembersAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeDeviceGroupMembersRequest&,
        DescribeDeviceGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeDeviceGroupsOutcome DasbClient::DescribeDeviceGroups(const DescribeDeviceGroupsRequest &request)
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

void DasbClient::DescribeDeviceGroupsAsync(const DescribeDeviceGroupsRequest& request, const DescribeDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeDeviceGroupsOutcomeCallable DasbClient::DescribeDeviceGroupsCallable(const DescribeDeviceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceGroupsOutcome>>();
    DescribeDeviceGroupsAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeDeviceGroupsRequest&,
        DescribeDeviceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeDevicesOutcome DasbClient::DescribeDevices(const DescribeDevicesRequest &request)
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

void DasbClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeDevicesOutcomeCallable DasbClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicesOutcome>>();
    DescribeDevicesAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeDevicesRequest&,
        DescribeDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeDomainsOutcome DasbClient::DescribeDomains(const DescribeDomainsRequest &request)
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

void DasbClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeDomainsOutcomeCallable DasbClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsOutcome>>();
    DescribeDomainsAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeDomainsRequest&,
        DescribeDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeLoginEventOutcome DasbClient::DescribeLoginEvent(const DescribeLoginEventRequest &request)
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

void DasbClient::DescribeLoginEventAsync(const DescribeLoginEventRequest& request, const DescribeLoginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeLoginEventOutcomeCallable DasbClient::DescribeLoginEventCallable(const DescribeLoginEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoginEventOutcome>>();
    DescribeLoginEventAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeLoginEventRequest&,
        DescribeLoginEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeOperationEventOutcome DasbClient::DescribeOperationEvent(const DescribeOperationEventRequest &request)
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

void DasbClient::DescribeOperationEventAsync(const DescribeOperationEventRequest& request, const DescribeOperationEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeOperationEventOutcomeCallable DasbClient::DescribeOperationEventCallable(const DescribeOperationEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOperationEventOutcome>>();
    DescribeOperationEventAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeOperationEventRequest&,
        DescribeOperationEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeResourcesOutcome DasbClient::DescribeResources(const DescribeResourcesRequest &request)
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

void DasbClient::DescribeResourcesAsync(const DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeResourcesOutcomeCallable DasbClient::DescribeResourcesCallable(const DescribeResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcesOutcome>>();
    DescribeResourcesAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeResourcesRequest&,
        DescribeResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeUserGroupMembersOutcome DasbClient::DescribeUserGroupMembers(const DescribeUserGroupMembersRequest &request)
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

void DasbClient::DescribeUserGroupMembersAsync(const DescribeUserGroupMembersRequest& request, const DescribeUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeUserGroupMembersOutcomeCallable DasbClient::DescribeUserGroupMembersCallable(const DescribeUserGroupMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserGroupMembersOutcome>>();
    DescribeUserGroupMembersAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeUserGroupMembersRequest&,
        DescribeUserGroupMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeUserGroupsOutcome DasbClient::DescribeUserGroups(const DescribeUserGroupsRequest &request)
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

void DasbClient::DescribeUserGroupsAsync(const DescribeUserGroupsRequest& request, const DescribeUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeUserGroupsOutcomeCallable DasbClient::DescribeUserGroupsCallable(const DescribeUserGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserGroupsOutcome>>();
    DescribeUserGroupsAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeUserGroupsRequest&,
        DescribeUserGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::DescribeUsersOutcome DasbClient::DescribeUsers(const DescribeUsersRequest &request)
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

void DasbClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::DescribeUsersOutcomeCallable DasbClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsersOutcome>>();
    DescribeUsersAsync(
    request,
    [prom](
        const DasbClient*,
        const DescribeUsersRequest&,
        DescribeUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ImportExternalDeviceOutcome DasbClient::ImportExternalDevice(const ImportExternalDeviceRequest &request)
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

void DasbClient::ImportExternalDeviceAsync(const ImportExternalDeviceRequest& request, const ImportExternalDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ImportExternalDeviceOutcomeCallable DasbClient::ImportExternalDeviceCallable(const ImportExternalDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportExternalDeviceOutcome>>();
    ImportExternalDeviceAsync(
    request,
    [prom](
        const DasbClient*,
        const ImportExternalDeviceRequest&,
        ImportExternalDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ModifyAclOutcome DasbClient::ModifyAcl(const ModifyAclRequest &request)
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

void DasbClient::ModifyAclAsync(const ModifyAclRequest& request, const ModifyAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ModifyAclOutcomeCallable DasbClient::ModifyAclCallable(const ModifyAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAclOutcome>>();
    ModifyAclAsync(
    request,
    [prom](
        const DasbClient*,
        const ModifyAclRequest&,
        ModifyAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ModifyChangePwdTaskOutcome DasbClient::ModifyChangePwdTask(const ModifyChangePwdTaskRequest &request)
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

void DasbClient::ModifyChangePwdTaskAsync(const ModifyChangePwdTaskRequest& request, const ModifyChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ModifyChangePwdTaskOutcomeCallable DasbClient::ModifyChangePwdTaskCallable(const ModifyChangePwdTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyChangePwdTaskOutcome>>();
    ModifyChangePwdTaskAsync(
    request,
    [prom](
        const DasbClient*,
        const ModifyChangePwdTaskRequest&,
        ModifyChangePwdTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ModifyCmdTemplateOutcome DasbClient::ModifyCmdTemplate(const ModifyCmdTemplateRequest &request)
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

void DasbClient::ModifyCmdTemplateAsync(const ModifyCmdTemplateRequest& request, const ModifyCmdTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ModifyCmdTemplateOutcomeCallable DasbClient::ModifyCmdTemplateCallable(const ModifyCmdTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCmdTemplateOutcome>>();
    ModifyCmdTemplateAsync(
    request,
    [prom](
        const DasbClient*,
        const ModifyCmdTemplateRequest&,
        ModifyCmdTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ModifyDeviceOutcome DasbClient::ModifyDevice(const ModifyDeviceRequest &request)
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

void DasbClient::ModifyDeviceAsync(const ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ModifyDeviceOutcomeCallable DasbClient::ModifyDeviceCallable(const ModifyDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceOutcome>>();
    ModifyDeviceAsync(
    request,
    [prom](
        const DasbClient*,
        const ModifyDeviceRequest&,
        ModifyDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ModifyDeviceGroupOutcome DasbClient::ModifyDeviceGroup(const ModifyDeviceGroupRequest &request)
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

void DasbClient::ModifyDeviceGroupAsync(const ModifyDeviceGroupRequest& request, const ModifyDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ModifyDeviceGroupOutcomeCallable DasbClient::ModifyDeviceGroupCallable(const ModifyDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceGroupOutcome>>();
    ModifyDeviceGroupAsync(
    request,
    [prom](
        const DasbClient*,
        const ModifyDeviceGroupRequest&,
        ModifyDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ModifyOAuthSettingOutcome DasbClient::ModifyOAuthSetting(const ModifyOAuthSettingRequest &request)
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

void DasbClient::ModifyOAuthSettingAsync(const ModifyOAuthSettingRequest& request, const ModifyOAuthSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ModifyOAuthSettingOutcomeCallable DasbClient::ModifyOAuthSettingCallable(const ModifyOAuthSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOAuthSettingOutcome>>();
    ModifyOAuthSettingAsync(
    request,
    [prom](
        const DasbClient*,
        const ModifyOAuthSettingRequest&,
        ModifyOAuthSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ModifyResourceOutcome DasbClient::ModifyResource(const ModifyResourceRequest &request)
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

void DasbClient::ModifyResourceAsync(const ModifyResourceRequest& request, const ModifyResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ModifyResourceOutcomeCallable DasbClient::ModifyResourceCallable(const ModifyResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourceOutcome>>();
    ModifyResourceAsync(
    request,
    [prom](
        const DasbClient*,
        const ModifyResourceRequest&,
        ModifyResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ModifyUserOutcome DasbClient::ModifyUser(const ModifyUserRequest &request)
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

void DasbClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ModifyUserOutcomeCallable DasbClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserOutcome>>();
    ModifyUserAsync(
    request,
    [prom](
        const DasbClient*,
        const ModifyUserRequest&,
        ModifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ModifyUserGroupOutcome DasbClient::ModifyUserGroup(const ModifyUserGroupRequest &request)
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

void DasbClient::ModifyUserGroupAsync(const ModifyUserGroupRequest& request, const ModifyUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ModifyUserGroupOutcomeCallable DasbClient::ModifyUserGroupCallable(const ModifyUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserGroupOutcome>>();
    ModifyUserGroupAsync(
    request,
    [prom](
        const DasbClient*,
        const ModifyUserGroupRequest&,
        ModifyUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ResetDeviceAccountPasswordOutcome DasbClient::ResetDeviceAccountPassword(const ResetDeviceAccountPasswordRequest &request)
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

void DasbClient::ResetDeviceAccountPasswordAsync(const ResetDeviceAccountPasswordRequest& request, const ResetDeviceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ResetDeviceAccountPasswordOutcomeCallable DasbClient::ResetDeviceAccountPasswordCallable(const ResetDeviceAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetDeviceAccountPasswordOutcome>>();
    ResetDeviceAccountPasswordAsync(
    request,
    [prom](
        const DasbClient*,
        const ResetDeviceAccountPasswordRequest&,
        ResetDeviceAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ResetDeviceAccountPrivateKeyOutcome DasbClient::ResetDeviceAccountPrivateKey(const ResetDeviceAccountPrivateKeyRequest &request)
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

void DasbClient::ResetDeviceAccountPrivateKeyAsync(const ResetDeviceAccountPrivateKeyRequest& request, const ResetDeviceAccountPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ResetDeviceAccountPrivateKeyOutcomeCallable DasbClient::ResetDeviceAccountPrivateKeyCallable(const ResetDeviceAccountPrivateKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetDeviceAccountPrivateKeyOutcome>>();
    ResetDeviceAccountPrivateKeyAsync(
    request,
    [prom](
        const DasbClient*,
        const ResetDeviceAccountPrivateKeyRequest&,
        ResetDeviceAccountPrivateKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::ResetUserOutcome DasbClient::ResetUser(const ResetUserRequest &request)
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

void DasbClient::ResetUserAsync(const ResetUserRequest& request, const ResetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::ResetUserOutcomeCallable DasbClient::ResetUserCallable(const ResetUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetUserOutcome>>();
    ResetUserAsync(
    request,
    [prom](
        const DasbClient*,
        const ResetUserRequest&,
        ResetUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::RunChangePwdTaskOutcome DasbClient::RunChangePwdTask(const RunChangePwdTaskRequest &request)
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

void DasbClient::RunChangePwdTaskAsync(const RunChangePwdTaskRequest& request, const RunChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::RunChangePwdTaskOutcomeCallable DasbClient::RunChangePwdTaskCallable(const RunChangePwdTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunChangePwdTaskOutcome>>();
    RunChangePwdTaskAsync(
    request,
    [prom](
        const DasbClient*,
        const RunChangePwdTaskRequest&,
        RunChangePwdTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::SearchAuditLogOutcome DasbClient::SearchAuditLog(const SearchAuditLogRequest &request)
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

void DasbClient::SearchAuditLogAsync(const SearchAuditLogRequest& request, const SearchAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::SearchAuditLogOutcomeCallable DasbClient::SearchAuditLogCallable(const SearchAuditLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchAuditLogOutcome>>();
    SearchAuditLogAsync(
    request,
    [prom](
        const DasbClient*,
        const SearchAuditLogRequest&,
        SearchAuditLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::SearchCommandOutcome DasbClient::SearchCommand(const SearchCommandRequest &request)
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

void DasbClient::SearchCommandAsync(const SearchCommandRequest& request, const SearchCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::SearchCommandOutcomeCallable DasbClient::SearchCommandCallable(const SearchCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchCommandOutcome>>();
    SearchCommandAsync(
    request,
    [prom](
        const DasbClient*,
        const SearchCommandRequest&,
        SearchCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::SearchCommandBySidOutcome DasbClient::SearchCommandBySid(const SearchCommandBySidRequest &request)
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

void DasbClient::SearchCommandBySidAsync(const SearchCommandBySidRequest& request, const SearchCommandBySidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::SearchCommandBySidOutcomeCallable DasbClient::SearchCommandBySidCallable(const SearchCommandBySidRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchCommandBySidOutcome>>();
    SearchCommandBySidAsync(
    request,
    [prom](
        const DasbClient*,
        const SearchCommandBySidRequest&,
        SearchCommandBySidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::SearchFileOutcome DasbClient::SearchFile(const SearchFileRequest &request)
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

void DasbClient::SearchFileAsync(const SearchFileRequest& request, const SearchFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::SearchFileOutcomeCallable DasbClient::SearchFileCallable(const SearchFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchFileOutcome>>();
    SearchFileAsync(
    request,
    [prom](
        const DasbClient*,
        const SearchFileRequest&,
        SearchFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::SearchFileBySidOutcome DasbClient::SearchFileBySid(const SearchFileBySidRequest &request)
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

void DasbClient::SearchFileBySidAsync(const SearchFileBySidRequest& request, const SearchFileBySidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::SearchFileBySidOutcomeCallable DasbClient::SearchFileBySidCallable(const SearchFileBySidRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchFileBySidOutcome>>();
    SearchFileBySidAsync(
    request,
    [prom](
        const DasbClient*,
        const SearchFileBySidRequest&,
        SearchFileBySidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::SearchSessionOutcome DasbClient::SearchSession(const SearchSessionRequest &request)
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

void DasbClient::SearchSessionAsync(const SearchSessionRequest& request, const SearchSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::SearchSessionOutcomeCallable DasbClient::SearchSessionCallable(const SearchSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchSessionOutcome>>();
    SearchSessionAsync(
    request,
    [prom](
        const DasbClient*,
        const SearchSessionRequest&,
        SearchSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DasbClient::SearchSessionCommandOutcome DasbClient::SearchSessionCommand(const SearchSessionCommandRequest &request)
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

void DasbClient::SearchSessionCommandAsync(const SearchSessionCommandRequest& request, const SearchSessionCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DasbClient::SearchSessionCommandOutcomeCallable DasbClient::SearchSessionCommandCallable(const SearchSessionCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchSessionCommandOutcome>>();
    SearchSessionCommandAsync(
    request,
    [prom](
        const DasbClient*,
        const SearchSessionCommandRequest&,
        SearchSessionCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


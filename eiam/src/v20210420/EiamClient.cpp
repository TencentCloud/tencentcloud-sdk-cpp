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

#include <tencentcloud/eiam/v20210420/EiamClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Eiam::V20210420;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-20";
    const string ENDPOINT = "eiam.tencentcloudapi.com";
}

EiamClient::EiamClient(const Credential &credential, const string &region) :
    EiamClient(credential, region, ClientProfile())
{
}

EiamClient::EiamClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EiamClient::AddAccountToAccountGroupOutcome EiamClient::AddAccountToAccountGroup(const AddAccountToAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddAccountToAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAccountToAccountGroupResponse rsp = AddAccountToAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAccountToAccountGroupOutcome(rsp);
        else
            return AddAccountToAccountGroupOutcome(o.GetError());
    }
    else
    {
        return AddAccountToAccountGroupOutcome(outcome.GetError());
    }
}

void EiamClient::AddAccountToAccountGroupAsync(const AddAccountToAccountGroupRequest& request, const AddAccountToAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAccountToAccountGroupRequest&;
    using Resp = AddAccountToAccountGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AddAccountToAccountGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::AddAccountToAccountGroupOutcomeCallable EiamClient::AddAccountToAccountGroupCallable(const AddAccountToAccountGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAccountToAccountGroupOutcome>>();
    AddAccountToAccountGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const AddAccountToAccountGroupRequest&,
        AddAccountToAccountGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::AddUserToUserGroupOutcome EiamClient::AddUserToUserGroup(const AddUserToUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddUserToUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserToUserGroupResponse rsp = AddUserToUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserToUserGroupOutcome(rsp);
        else
            return AddUserToUserGroupOutcome(o.GetError());
    }
    else
    {
        return AddUserToUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::AddUserToUserGroupAsync(const AddUserToUserGroupRequest& request, const AddUserToUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddUserToUserGroupRequest&;
    using Resp = AddUserToUserGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AddUserToUserGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::AddUserToUserGroupOutcomeCallable EiamClient::AddUserToUserGroupCallable(const AddUserToUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUserToUserGroupOutcome>>();
    AddUserToUserGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const AddUserToUserGroupRequest&,
        AddUserToUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::CreateAccountGroupOutcome EiamClient::CreateAccountGroup(const CreateAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountGroupResponse rsp = CreateAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountGroupOutcome(rsp);
        else
            return CreateAccountGroupOutcome(o.GetError());
    }
    else
    {
        return CreateAccountGroupOutcome(outcome.GetError());
    }
}

void EiamClient::CreateAccountGroupAsync(const CreateAccountGroupRequest& request, const CreateAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccountGroupRequest&;
    using Resp = CreateAccountGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccountGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::CreateAccountGroupOutcomeCallable EiamClient::CreateAccountGroupCallable(const CreateAccountGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccountGroupOutcome>>();
    CreateAccountGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const CreateAccountGroupRequest&,
        CreateAccountGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::CreateAppAccountOutcome EiamClient::CreateAppAccount(const CreateAppAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAppAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppAccountResponse rsp = CreateAppAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppAccountOutcome(rsp);
        else
            return CreateAppAccountOutcome(o.GetError());
    }
    else
    {
        return CreateAppAccountOutcome(outcome.GetError());
    }
}

void EiamClient::CreateAppAccountAsync(const CreateAppAccountRequest& request, const CreateAppAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAppAccountRequest&;
    using Resp = CreateAppAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAppAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::CreateAppAccountOutcomeCallable EiamClient::CreateAppAccountCallable(const CreateAppAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppAccountOutcome>>();
    CreateAppAccountAsync(
    request,
    [prom](
        const EiamClient*,
        const CreateAppAccountRequest&,
        CreateAppAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::CreateOrgNodeOutcome EiamClient::CreateOrgNode(const CreateOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrgNodeResponse rsp = CreateOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrgNodeOutcome(rsp);
        else
            return CreateOrgNodeOutcome(o.GetError());
    }
    else
    {
        return CreateOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::CreateOrgNodeAsync(const CreateOrgNodeRequest& request, const CreateOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrgNodeRequest&;
    using Resp = CreateOrgNodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrgNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::CreateOrgNodeOutcomeCallable EiamClient::CreateOrgNodeCallable(const CreateOrgNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrgNodeOutcome>>();
    CreateOrgNodeAsync(
    request,
    [prom](
        const EiamClient*,
        const CreateOrgNodeRequest&,
        CreateOrgNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::CreateUserOutcome EiamClient::CreateUser(const CreateUserRequest &request)
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

void EiamClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

EiamClient::CreateUserOutcomeCallable EiamClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const EiamClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::CreateUserGroupOutcome EiamClient::CreateUserGroup(const CreateUserGroupRequest &request)
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

void EiamClient::CreateUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

EiamClient::CreateUserGroupOutcomeCallable EiamClient::CreateUserGroupCallable(const CreateUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserGroupOutcome>>();
    CreateUserGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const CreateUserGroupRequest&,
        CreateUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DeleteAccountGroupOutcome EiamClient::DeleteAccountGroup(const DeleteAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccountGroupResponse rsp = DeleteAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccountGroupOutcome(rsp);
        else
            return DeleteAccountGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteAccountGroupOutcome(outcome.GetError());
    }
}

void EiamClient::DeleteAccountGroupAsync(const DeleteAccountGroupRequest& request, const DeleteAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAccountGroupRequest&;
    using Resp = DeleteAccountGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccountGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DeleteAccountGroupOutcomeCallable EiamClient::DeleteAccountGroupCallable(const DeleteAccountGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccountGroupOutcome>>();
    DeleteAccountGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const DeleteAccountGroupRequest&,
        DeleteAccountGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DeleteAppAccountOutcome EiamClient::DeleteAppAccount(const DeleteAppAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAppAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppAccountResponse rsp = DeleteAppAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppAccountOutcome(rsp);
        else
            return DeleteAppAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteAppAccountOutcome(outcome.GetError());
    }
}

void EiamClient::DeleteAppAccountAsync(const DeleteAppAccountRequest& request, const DeleteAppAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAppAccountRequest&;
    using Resp = DeleteAppAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAppAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DeleteAppAccountOutcomeCallable EiamClient::DeleteAppAccountCallable(const DeleteAppAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAppAccountOutcome>>();
    DeleteAppAccountAsync(
    request,
    [prom](
        const EiamClient*,
        const DeleteAppAccountRequest&,
        DeleteAppAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DeleteOrgNodeOutcome EiamClient::DeleteOrgNode(const DeleteOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrgNodeResponse rsp = DeleteOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrgNodeOutcome(rsp);
        else
            return DeleteOrgNodeOutcome(o.GetError());
    }
    else
    {
        return DeleteOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::DeleteOrgNodeAsync(const DeleteOrgNodeRequest& request, const DeleteOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteOrgNodeRequest&;
    using Resp = DeleteOrgNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOrgNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DeleteOrgNodeOutcomeCallable EiamClient::DeleteOrgNodeCallable(const DeleteOrgNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOrgNodeOutcome>>();
    DeleteOrgNodeAsync(
    request,
    [prom](
        const EiamClient*,
        const DeleteOrgNodeRequest&,
        DeleteOrgNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DeleteUserOutcome EiamClient::DeleteUser(const DeleteUserRequest &request)
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

void EiamClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

EiamClient::DeleteUserOutcomeCallable EiamClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const EiamClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DeleteUserGroupOutcome EiamClient::DeleteUserGroup(const DeleteUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserGroupResponse rsp = DeleteUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserGroupOutcome(rsp);
        else
            return DeleteUserGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::DeleteUserGroupAsync(const DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserGroupRequest&;
    using Resp = DeleteUserGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DeleteUserGroupOutcomeCallable EiamClient::DeleteUserGroupCallable(const DeleteUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserGroupOutcome>>();
    DeleteUserGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const DeleteUserGroupRequest&,
        DeleteUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DeleteUsersOutcome EiamClient::DeleteUsers(const DeleteUsersRequest &request)
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

void EiamClient::DeleteUsersAsync(const DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

EiamClient::DeleteUsersOutcomeCallable EiamClient::DeleteUsersCallable(const DeleteUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUsersOutcome>>();
    DeleteUsersAsync(
    request,
    [prom](
        const EiamClient*,
        const DeleteUsersRequest&,
        DeleteUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribeAccountGroupOutcome EiamClient::DescribeAccountGroup(const DescribeAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountGroupResponse rsp = DescribeAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountGroupOutcome(rsp);
        else
            return DescribeAccountGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountGroupOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeAccountGroupAsync(const DescribeAccountGroupRequest& request, const DescribeAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountGroupRequest&;
    using Resp = DescribeAccountGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribeAccountGroupOutcomeCallable EiamClient::DescribeAccountGroupCallable(const DescribeAccountGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountGroupOutcome>>();
    DescribeAccountGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribeAccountGroupRequest&,
        DescribeAccountGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribeAppAccountOutcome EiamClient::DescribeAppAccount(const DescribeAppAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppAccountResponse rsp = DescribeAppAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppAccountOutcome(rsp);
        else
            return DescribeAppAccountOutcome(o.GetError());
    }
    else
    {
        return DescribeAppAccountOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeAppAccountAsync(const DescribeAppAccountRequest& request, const DescribeAppAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppAccountRequest&;
    using Resp = DescribeAppAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAppAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribeAppAccountOutcomeCallable EiamClient::DescribeAppAccountCallable(const DescribeAppAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppAccountOutcome>>();
    DescribeAppAccountAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribeAppAccountRequest&,
        DescribeAppAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribeApplicationOutcome EiamClient::DescribeApplication(const DescribeApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationResponse rsp = DescribeApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationOutcome(rsp);
        else
            return DescribeApplicationOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationRequest&;
    using Resp = DescribeApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribeApplicationOutcomeCallable EiamClient::DescribeApplicationCallable(const DescribeApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationOutcome>>();
    DescribeApplicationAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribeApplicationRequest&,
        DescribeApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribeOrgNodeOutcome EiamClient::DescribeOrgNode(const DescribeOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrgNodeResponse rsp = DescribeOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrgNodeOutcome(rsp);
        else
            return DescribeOrgNodeOutcome(o.GetError());
    }
    else
    {
        return DescribeOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeOrgNodeAsync(const DescribeOrgNodeRequest& request, const DescribeOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrgNodeRequest&;
    using Resp = DescribeOrgNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrgNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribeOrgNodeOutcomeCallable EiamClient::DescribeOrgNodeCallable(const DescribeOrgNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrgNodeOutcome>>();
    DescribeOrgNodeAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribeOrgNodeRequest&,
        DescribeOrgNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribeOrgResourcesAuthorizationOutcome EiamClient::DescribeOrgResourcesAuthorization(const DescribeOrgResourcesAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrgResourcesAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrgResourcesAuthorizationResponse rsp = DescribeOrgResourcesAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrgResourcesAuthorizationOutcome(rsp);
        else
            return DescribeOrgResourcesAuthorizationOutcome(o.GetError());
    }
    else
    {
        return DescribeOrgResourcesAuthorizationOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeOrgResourcesAuthorizationAsync(const DescribeOrgResourcesAuthorizationRequest& request, const DescribeOrgResourcesAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrgResourcesAuthorizationRequest&;
    using Resp = DescribeOrgResourcesAuthorizationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrgResourcesAuthorization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribeOrgResourcesAuthorizationOutcomeCallable EiamClient::DescribeOrgResourcesAuthorizationCallable(const DescribeOrgResourcesAuthorizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrgResourcesAuthorizationOutcome>>();
    DescribeOrgResourcesAuthorizationAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribeOrgResourcesAuthorizationRequest&,
        DescribeOrgResourcesAuthorizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribePublicKeyOutcome EiamClient::DescribePublicKey(const DescribePublicKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicKeyResponse rsp = DescribePublicKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicKeyOutcome(rsp);
        else
            return DescribePublicKeyOutcome(o.GetError());
    }
    else
    {
        return DescribePublicKeyOutcome(outcome.GetError());
    }
}

void EiamClient::DescribePublicKeyAsync(const DescribePublicKeyRequest& request, const DescribePublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicKeyRequest&;
    using Resp = DescribePublicKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribePublicKeyOutcomeCallable EiamClient::DescribePublicKeyCallable(const DescribePublicKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicKeyOutcome>>();
    DescribePublicKeyAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribePublicKeyRequest&,
        DescribePublicKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribeUserGroupOutcome EiamClient::DescribeUserGroup(const DescribeUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserGroupResponse rsp = DescribeUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserGroupOutcome(rsp);
        else
            return DescribeUserGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeUserGroupAsync(const DescribeUserGroupRequest& request, const DescribeUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserGroupRequest&;
    using Resp = DescribeUserGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribeUserGroupOutcomeCallable EiamClient::DescribeUserGroupCallable(const DescribeUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserGroupOutcome>>();
    DescribeUserGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribeUserGroupRequest&,
        DescribeUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribeUserGroupResourcesAuthorizationOutcome EiamClient::DescribeUserGroupResourcesAuthorization(const DescribeUserGroupResourcesAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserGroupResourcesAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserGroupResourcesAuthorizationResponse rsp = DescribeUserGroupResourcesAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserGroupResourcesAuthorizationOutcome(rsp);
        else
            return DescribeUserGroupResourcesAuthorizationOutcome(o.GetError());
    }
    else
    {
        return DescribeUserGroupResourcesAuthorizationOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeUserGroupResourcesAuthorizationAsync(const DescribeUserGroupResourcesAuthorizationRequest& request, const DescribeUserGroupResourcesAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserGroupResourcesAuthorizationRequest&;
    using Resp = DescribeUserGroupResourcesAuthorizationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserGroupResourcesAuthorization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribeUserGroupResourcesAuthorizationOutcomeCallable EiamClient::DescribeUserGroupResourcesAuthorizationCallable(const DescribeUserGroupResourcesAuthorizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserGroupResourcesAuthorizationOutcome>>();
    DescribeUserGroupResourcesAuthorizationAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribeUserGroupResourcesAuthorizationRequest&,
        DescribeUserGroupResourcesAuthorizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribeUserInfoOutcome EiamClient::DescribeUserInfo(const DescribeUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInfoResponse rsp = DescribeUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInfoOutcome(rsp);
        else
            return DescribeUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInfoOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeUserInfoAsync(const DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserInfoRequest&;
    using Resp = DescribeUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribeUserInfoOutcomeCallable EiamClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserInfoOutcome>>();
    DescribeUserInfoAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribeUserInfoRequest&,
        DescribeUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribeUserResourcesAuthorizationOutcome EiamClient::DescribeUserResourcesAuthorization(const DescribeUserResourcesAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserResourcesAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserResourcesAuthorizationResponse rsp = DescribeUserResourcesAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserResourcesAuthorizationOutcome(rsp);
        else
            return DescribeUserResourcesAuthorizationOutcome(o.GetError());
    }
    else
    {
        return DescribeUserResourcesAuthorizationOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeUserResourcesAuthorizationAsync(const DescribeUserResourcesAuthorizationRequest& request, const DescribeUserResourcesAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserResourcesAuthorizationRequest&;
    using Resp = DescribeUserResourcesAuthorizationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserResourcesAuthorization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribeUserResourcesAuthorizationOutcomeCallable EiamClient::DescribeUserResourcesAuthorizationCallable(const DescribeUserResourcesAuthorizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserResourcesAuthorizationOutcome>>();
    DescribeUserResourcesAuthorizationAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribeUserResourcesAuthorizationRequest&,
        DescribeUserResourcesAuthorizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::DescribeUserThirdPartyAccountInfoOutcome EiamClient::DescribeUserThirdPartyAccountInfo(const DescribeUserThirdPartyAccountInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserThirdPartyAccountInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserThirdPartyAccountInfoResponse rsp = DescribeUserThirdPartyAccountInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserThirdPartyAccountInfoOutcome(rsp);
        else
            return DescribeUserThirdPartyAccountInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserThirdPartyAccountInfoOutcome(outcome.GetError());
    }
}

void EiamClient::DescribeUserThirdPartyAccountInfoAsync(const DescribeUserThirdPartyAccountInfoRequest& request, const DescribeUserThirdPartyAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserThirdPartyAccountInfoRequest&;
    using Resp = DescribeUserThirdPartyAccountInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserThirdPartyAccountInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::DescribeUserThirdPartyAccountInfoOutcomeCallable EiamClient::DescribeUserThirdPartyAccountInfoCallable(const DescribeUserThirdPartyAccountInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserThirdPartyAccountInfoOutcome>>();
    DescribeUserThirdPartyAccountInfoAsync(
    request,
    [prom](
        const EiamClient*,
        const DescribeUserThirdPartyAccountInfoRequest&,
        DescribeUserThirdPartyAccountInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListAccountInAccountGroupOutcome EiamClient::ListAccountInAccountGroup(const ListAccountInAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ListAccountInAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAccountInAccountGroupResponse rsp = ListAccountInAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAccountInAccountGroupOutcome(rsp);
        else
            return ListAccountInAccountGroupOutcome(o.GetError());
    }
    else
    {
        return ListAccountInAccountGroupOutcome(outcome.GetError());
    }
}

void EiamClient::ListAccountInAccountGroupAsync(const ListAccountInAccountGroupRequest& request, const ListAccountInAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAccountInAccountGroupRequest&;
    using Resp = ListAccountInAccountGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ListAccountInAccountGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ListAccountInAccountGroupOutcomeCallable EiamClient::ListAccountInAccountGroupCallable(const ListAccountInAccountGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAccountInAccountGroupOutcome>>();
    ListAccountInAccountGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const ListAccountInAccountGroupRequest&,
        ListAccountInAccountGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListApplicationAuthorizationsOutcome EiamClient::ListApplicationAuthorizations(const ListApplicationAuthorizationsRequest &request)
{
    auto outcome = MakeRequest(request, "ListApplicationAuthorizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListApplicationAuthorizationsResponse rsp = ListApplicationAuthorizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListApplicationAuthorizationsOutcome(rsp);
        else
            return ListApplicationAuthorizationsOutcome(o.GetError());
    }
    else
    {
        return ListApplicationAuthorizationsOutcome(outcome.GetError());
    }
}

void EiamClient::ListApplicationAuthorizationsAsync(const ListApplicationAuthorizationsRequest& request, const ListApplicationAuthorizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListApplicationAuthorizationsRequest&;
    using Resp = ListApplicationAuthorizationsResponse;

    DoRequestAsync<Req, Resp>(
        "ListApplicationAuthorizations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ListApplicationAuthorizationsOutcomeCallable EiamClient::ListApplicationAuthorizationsCallable(const ListApplicationAuthorizationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListApplicationAuthorizationsOutcome>>();
    ListApplicationAuthorizationsAsync(
    request,
    [prom](
        const EiamClient*,
        const ListApplicationAuthorizationsRequest&,
        ListApplicationAuthorizationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListApplicationsOutcome EiamClient::ListApplications(const ListApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "ListApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListApplicationsResponse rsp = ListApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListApplicationsOutcome(rsp);
        else
            return ListApplicationsOutcome(o.GetError());
    }
    else
    {
        return ListApplicationsOutcome(outcome.GetError());
    }
}

void EiamClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListApplicationsRequest&;
    using Resp = ListApplicationsResponse;

    DoRequestAsync<Req, Resp>(
        "ListApplications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ListApplicationsOutcomeCallable EiamClient::ListApplicationsCallable(const ListApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListApplicationsOutcome>>();
    ListApplicationsAsync(
    request,
    [prom](
        const EiamClient*,
        const ListApplicationsRequest&,
        ListApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListAuthorizedApplicationsToOrgNodeOutcome EiamClient::ListAuthorizedApplicationsToOrgNode(const ListAuthorizedApplicationsToOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "ListAuthorizedApplicationsToOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAuthorizedApplicationsToOrgNodeResponse rsp = ListAuthorizedApplicationsToOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAuthorizedApplicationsToOrgNodeOutcome(rsp);
        else
            return ListAuthorizedApplicationsToOrgNodeOutcome(o.GetError());
    }
    else
    {
        return ListAuthorizedApplicationsToOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::ListAuthorizedApplicationsToOrgNodeAsync(const ListAuthorizedApplicationsToOrgNodeRequest& request, const ListAuthorizedApplicationsToOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAuthorizedApplicationsToOrgNodeRequest&;
    using Resp = ListAuthorizedApplicationsToOrgNodeResponse;

    DoRequestAsync<Req, Resp>(
        "ListAuthorizedApplicationsToOrgNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ListAuthorizedApplicationsToOrgNodeOutcomeCallable EiamClient::ListAuthorizedApplicationsToOrgNodeCallable(const ListAuthorizedApplicationsToOrgNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAuthorizedApplicationsToOrgNodeOutcome>>();
    ListAuthorizedApplicationsToOrgNodeAsync(
    request,
    [prom](
        const EiamClient*,
        const ListAuthorizedApplicationsToOrgNodeRequest&,
        ListAuthorizedApplicationsToOrgNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListAuthorizedApplicationsToUserOutcome EiamClient::ListAuthorizedApplicationsToUser(const ListAuthorizedApplicationsToUserRequest &request)
{
    auto outcome = MakeRequest(request, "ListAuthorizedApplicationsToUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAuthorizedApplicationsToUserResponse rsp = ListAuthorizedApplicationsToUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAuthorizedApplicationsToUserOutcome(rsp);
        else
            return ListAuthorizedApplicationsToUserOutcome(o.GetError());
    }
    else
    {
        return ListAuthorizedApplicationsToUserOutcome(outcome.GetError());
    }
}

void EiamClient::ListAuthorizedApplicationsToUserAsync(const ListAuthorizedApplicationsToUserRequest& request, const ListAuthorizedApplicationsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAuthorizedApplicationsToUserRequest&;
    using Resp = ListAuthorizedApplicationsToUserResponse;

    DoRequestAsync<Req, Resp>(
        "ListAuthorizedApplicationsToUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ListAuthorizedApplicationsToUserOutcomeCallable EiamClient::ListAuthorizedApplicationsToUserCallable(const ListAuthorizedApplicationsToUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAuthorizedApplicationsToUserOutcome>>();
    ListAuthorizedApplicationsToUserAsync(
    request,
    [prom](
        const EiamClient*,
        const ListAuthorizedApplicationsToUserRequest&,
        ListAuthorizedApplicationsToUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListAuthorizedApplicationsToUserGroupOutcome EiamClient::ListAuthorizedApplicationsToUserGroup(const ListAuthorizedApplicationsToUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ListAuthorizedApplicationsToUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAuthorizedApplicationsToUserGroupResponse rsp = ListAuthorizedApplicationsToUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAuthorizedApplicationsToUserGroupOutcome(rsp);
        else
            return ListAuthorizedApplicationsToUserGroupOutcome(o.GetError());
    }
    else
    {
        return ListAuthorizedApplicationsToUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::ListAuthorizedApplicationsToUserGroupAsync(const ListAuthorizedApplicationsToUserGroupRequest& request, const ListAuthorizedApplicationsToUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAuthorizedApplicationsToUserGroupRequest&;
    using Resp = ListAuthorizedApplicationsToUserGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ListAuthorizedApplicationsToUserGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ListAuthorizedApplicationsToUserGroupOutcomeCallable EiamClient::ListAuthorizedApplicationsToUserGroupCallable(const ListAuthorizedApplicationsToUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAuthorizedApplicationsToUserGroupOutcome>>();
    ListAuthorizedApplicationsToUserGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const ListAuthorizedApplicationsToUserGroupRequest&,
        ListAuthorizedApplicationsToUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListUserGroupsOutcome EiamClient::ListUserGroups(const ListUserGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListUserGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserGroupsResponse rsp = ListUserGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserGroupsOutcome(rsp);
        else
            return ListUserGroupsOutcome(o.GetError());
    }
    else
    {
        return ListUserGroupsOutcome(outcome.GetError());
    }
}

void EiamClient::ListUserGroupsAsync(const ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUserGroupsRequest&;
    using Resp = ListUserGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ListUserGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ListUserGroupsOutcomeCallable EiamClient::ListUserGroupsCallable(const ListUserGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUserGroupsOutcome>>();
    ListUserGroupsAsync(
    request,
    [prom](
        const EiamClient*,
        const ListUserGroupsRequest&,
        ListUserGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListUserGroupsOfUserOutcome EiamClient::ListUserGroupsOfUser(const ListUserGroupsOfUserRequest &request)
{
    auto outcome = MakeRequest(request, "ListUserGroupsOfUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserGroupsOfUserResponse rsp = ListUserGroupsOfUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserGroupsOfUserOutcome(rsp);
        else
            return ListUserGroupsOfUserOutcome(o.GetError());
    }
    else
    {
        return ListUserGroupsOfUserOutcome(outcome.GetError());
    }
}

void EiamClient::ListUserGroupsOfUserAsync(const ListUserGroupsOfUserRequest& request, const ListUserGroupsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUserGroupsOfUserRequest&;
    using Resp = ListUserGroupsOfUserResponse;

    DoRequestAsync<Req, Resp>(
        "ListUserGroupsOfUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ListUserGroupsOfUserOutcomeCallable EiamClient::ListUserGroupsOfUserCallable(const ListUserGroupsOfUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUserGroupsOfUserOutcome>>();
    ListUserGroupsOfUserAsync(
    request,
    [prom](
        const EiamClient*,
        const ListUserGroupsOfUserRequest&,
        ListUserGroupsOfUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListUsersOutcome EiamClient::ListUsers(const ListUsersRequest &request)
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

void EiamClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

EiamClient::ListUsersOutcomeCallable EiamClient::ListUsersCallable(const ListUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUsersOutcome>>();
    ListUsersAsync(
    request,
    [prom](
        const EiamClient*,
        const ListUsersRequest&,
        ListUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListUsersInOrgNodeOutcome EiamClient::ListUsersInOrgNode(const ListUsersInOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsersInOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsersInOrgNodeResponse rsp = ListUsersInOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsersInOrgNodeOutcome(rsp);
        else
            return ListUsersInOrgNodeOutcome(o.GetError());
    }
    else
    {
        return ListUsersInOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::ListUsersInOrgNodeAsync(const ListUsersInOrgNodeRequest& request, const ListUsersInOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUsersInOrgNodeRequest&;
    using Resp = ListUsersInOrgNodeResponse;

    DoRequestAsync<Req, Resp>(
        "ListUsersInOrgNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ListUsersInOrgNodeOutcomeCallable EiamClient::ListUsersInOrgNodeCallable(const ListUsersInOrgNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUsersInOrgNodeOutcome>>();
    ListUsersInOrgNodeAsync(
    request,
    [prom](
        const EiamClient*,
        const ListUsersInOrgNodeRequest&,
        ListUsersInOrgNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ListUsersInUserGroupOutcome EiamClient::ListUsersInUserGroup(const ListUsersInUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsersInUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsersInUserGroupResponse rsp = ListUsersInUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsersInUserGroupOutcome(rsp);
        else
            return ListUsersInUserGroupOutcome(o.GetError());
    }
    else
    {
        return ListUsersInUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::ListUsersInUserGroupAsync(const ListUsersInUserGroupRequest& request, const ListUsersInUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUsersInUserGroupRequest&;
    using Resp = ListUsersInUserGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ListUsersInUserGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ListUsersInUserGroupOutcomeCallable EiamClient::ListUsersInUserGroupCallable(const ListUsersInUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUsersInUserGroupOutcome>>();
    ListUsersInUserGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const ListUsersInUserGroupRequest&,
        ListUsersInUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ModifyAccountGroupOutcome EiamClient::ModifyAccountGroup(const ModifyAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountGroupResponse rsp = ModifyAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountGroupOutcome(rsp);
        else
            return ModifyAccountGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountGroupOutcome(outcome.GetError());
    }
}

void EiamClient::ModifyAccountGroupAsync(const ModifyAccountGroupRequest& request, const ModifyAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountGroupRequest&;
    using Resp = ModifyAccountGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ModifyAccountGroupOutcomeCallable EiamClient::ModifyAccountGroupCallable(const ModifyAccountGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountGroupOutcome>>();
    ModifyAccountGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const ModifyAccountGroupRequest&,
        ModifyAccountGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ModifyAppAccountOutcome EiamClient::ModifyAppAccount(const ModifyAppAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAppAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppAccountResponse rsp = ModifyAppAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppAccountOutcome(rsp);
        else
            return ModifyAppAccountOutcome(o.GetError());
    }
    else
    {
        return ModifyAppAccountOutcome(outcome.GetError());
    }
}

void EiamClient::ModifyAppAccountAsync(const ModifyAppAccountRequest& request, const ModifyAppAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAppAccountRequest&;
    using Resp = ModifyAppAccountResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAppAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ModifyAppAccountOutcomeCallable EiamClient::ModifyAppAccountCallable(const ModifyAppAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAppAccountOutcome>>();
    ModifyAppAccountAsync(
    request,
    [prom](
        const EiamClient*,
        const ModifyAppAccountRequest&,
        ModifyAppAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ModifyApplicationOutcome EiamClient::ModifyApplication(const ModifyApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationResponse rsp = ModifyApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationOutcome(rsp);
        else
            return ModifyApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationOutcome(outcome.GetError());
    }
}

void EiamClient::ModifyApplicationAsync(const ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationRequest&;
    using Resp = ModifyApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ModifyApplicationOutcomeCallable EiamClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationOutcome>>();
    ModifyApplicationAsync(
    request,
    [prom](
        const EiamClient*,
        const ModifyApplicationRequest&,
        ModifyApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::ModifyUserInfoOutcome EiamClient::ModifyUserInfo(const ModifyUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserInfoResponse rsp = ModifyUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserInfoOutcome(rsp);
        else
            return ModifyUserInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyUserInfoOutcome(outcome.GetError());
    }
}

void EiamClient::ModifyUserInfoAsync(const ModifyUserInfoRequest& request, const ModifyUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserInfoRequest&;
    using Resp = ModifyUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::ModifyUserInfoOutcomeCallable EiamClient::ModifyUserInfoCallable(const ModifyUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserInfoOutcome>>();
    ModifyUserInfoAsync(
    request,
    [prom](
        const EiamClient*,
        const ModifyUserInfoRequest&,
        ModifyUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::RemoveAccountFromAccountGroupOutcome EiamClient::RemoveAccountFromAccountGroup(const RemoveAccountFromAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveAccountFromAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveAccountFromAccountGroupResponse rsp = RemoveAccountFromAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveAccountFromAccountGroupOutcome(rsp);
        else
            return RemoveAccountFromAccountGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveAccountFromAccountGroupOutcome(outcome.GetError());
    }
}

void EiamClient::RemoveAccountFromAccountGroupAsync(const RemoveAccountFromAccountGroupRequest& request, const RemoveAccountFromAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveAccountFromAccountGroupRequest&;
    using Resp = RemoveAccountFromAccountGroupResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveAccountFromAccountGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::RemoveAccountFromAccountGroupOutcomeCallable EiamClient::RemoveAccountFromAccountGroupCallable(const RemoveAccountFromAccountGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveAccountFromAccountGroupOutcome>>();
    RemoveAccountFromAccountGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const RemoveAccountFromAccountGroupRequest&,
        RemoveAccountFromAccountGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::RemoveUserFromUserGroupOutcome EiamClient::RemoveUserFromUserGroup(const RemoveUserFromUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserFromUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserFromUserGroupResponse rsp = RemoveUserFromUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserFromUserGroupOutcome(rsp);
        else
            return RemoveUserFromUserGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveUserFromUserGroupOutcome(outcome.GetError());
    }
}

void EiamClient::RemoveUserFromUserGroupAsync(const RemoveUserFromUserGroupRequest& request, const RemoveUserFromUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveUserFromUserGroupRequest&;
    using Resp = RemoveUserFromUserGroupResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveUserFromUserGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::RemoveUserFromUserGroupOutcomeCallable EiamClient::RemoveUserFromUserGroupCallable(const RemoveUserFromUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveUserFromUserGroupOutcome>>();
    RemoveUserFromUserGroupAsync(
    request,
    [prom](
        const EiamClient*,
        const RemoveUserFromUserGroupRequest&,
        RemoveUserFromUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EiamClient::UpdateOrgNodeOutcome EiamClient::UpdateOrgNode(const UpdateOrgNodeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOrgNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOrgNodeResponse rsp = UpdateOrgNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOrgNodeOutcome(rsp);
        else
            return UpdateOrgNodeOutcome(o.GetError());
    }
    else
    {
        return UpdateOrgNodeOutcome(outcome.GetError());
    }
}

void EiamClient::UpdateOrgNodeAsync(const UpdateOrgNodeRequest& request, const UpdateOrgNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateOrgNodeRequest&;
    using Resp = UpdateOrgNodeResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateOrgNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EiamClient::UpdateOrgNodeOutcomeCallable EiamClient::UpdateOrgNodeCallable(const UpdateOrgNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateOrgNodeOutcome>>();
    UpdateOrgNodeAsync(
    request,
    [prom](
        const EiamClient*,
        const UpdateOrgNodeRequest&,
        UpdateOrgNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


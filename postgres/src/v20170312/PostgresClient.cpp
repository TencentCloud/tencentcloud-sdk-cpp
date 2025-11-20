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

#include <tencentcloud/postgres/v20170312/PostgresClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Postgres::V20170312;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "postgres.tencentcloudapi.com";
}

PostgresClient::PostgresClient(const Credential &credential, const string &region) :
    PostgresClient(credential, region, ClientProfile())
{
}

PostgresClient::PostgresClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


PostgresClient::AddDBInstanceToReadOnlyGroupOutcome PostgresClient::AddDBInstanceToReadOnlyGroup(const AddDBInstanceToReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddDBInstanceToReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDBInstanceToReadOnlyGroupResponse rsp = AddDBInstanceToReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDBInstanceToReadOnlyGroupOutcome(rsp);
        else
            return AddDBInstanceToReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return AddDBInstanceToReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::AddDBInstanceToReadOnlyGroupAsync(const AddDBInstanceToReadOnlyGroupRequest& request, const AddDBInstanceToReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddDBInstanceToReadOnlyGroupRequest&;
    using Resp = AddDBInstanceToReadOnlyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AddDBInstanceToReadOnlyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::AddDBInstanceToReadOnlyGroupOutcomeCallable PostgresClient::AddDBInstanceToReadOnlyGroupCallable(const AddDBInstanceToReadOnlyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddDBInstanceToReadOnlyGroupOutcome>>();
    AddDBInstanceToReadOnlyGroupAsync(
    request,
    [prom](
        const PostgresClient*,
        const AddDBInstanceToReadOnlyGroupRequest&,
        AddDBInstanceToReadOnlyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CloneDBInstanceOutcome PostgresClient::CloneDBInstance(const CloneDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CloneDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneDBInstanceResponse rsp = CloneDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneDBInstanceOutcome(rsp);
        else
            return CloneDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CloneDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::CloneDBInstanceAsync(const CloneDBInstanceRequest& request, const CloneDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloneDBInstanceRequest&;
    using Resp = CloneDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CloneDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CloneDBInstanceOutcomeCallable PostgresClient::CloneDBInstanceCallable(const CloneDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloneDBInstanceOutcome>>();
    CloneDBInstanceAsync(
    request,
    [prom](
        const PostgresClient*,
        const CloneDBInstanceRequest&,
        CloneDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CloseAccountCAMOutcome PostgresClient::CloseAccountCAM(const CloseAccountCAMRequest &request)
{
    auto outcome = MakeRequest(request, "CloseAccountCAM");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseAccountCAMResponse rsp = CloseAccountCAMResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseAccountCAMOutcome(rsp);
        else
            return CloseAccountCAMOutcome(o.GetError());
    }
    else
    {
        return CloseAccountCAMOutcome(outcome.GetError());
    }
}

void PostgresClient::CloseAccountCAMAsync(const CloseAccountCAMRequest& request, const CloseAccountCAMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseAccountCAMRequest&;
    using Resp = CloseAccountCAMResponse;

    DoRequestAsync<Req, Resp>(
        "CloseAccountCAM", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CloseAccountCAMOutcomeCallable PostgresClient::CloseAccountCAMCallable(const CloseAccountCAMRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseAccountCAMOutcome>>();
    CloseAccountCAMAsync(
    request,
    [prom](
        const PostgresClient*,
        const CloseAccountCAMRequest&,
        CloseAccountCAMOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CloseDBExtranetAccessOutcome PostgresClient::CloseDBExtranetAccess(const CloseDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CloseDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseDBExtranetAccessResponse rsp = CloseDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseDBExtranetAccessOutcome(rsp);
        else
            return CloseDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return CloseDBExtranetAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::CloseDBExtranetAccessAsync(const CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseDBExtranetAccessRequest&;
    using Resp = CloseDBExtranetAccessResponse;

    DoRequestAsync<Req, Resp>(
        "CloseDBExtranetAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CloseDBExtranetAccessOutcomeCallable PostgresClient::CloseDBExtranetAccessCallable(const CloseDBExtranetAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseDBExtranetAccessOutcome>>();
    CloseDBExtranetAccessAsync(
    request,
    [prom](
        const PostgresClient*,
        const CloseDBExtranetAccessRequest&,
        CloseDBExtranetAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CreateAccountOutcome PostgresClient::CreateAccount(const CreateAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountResponse rsp = CreateAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountOutcome(rsp);
        else
            return CreateAccountOutcome(o.GetError());
    }
    else
    {
        return CreateAccountOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccountRequest&;
    using Resp = CreateAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CreateAccountOutcomeCallable PostgresClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccountOutcome>>();
    CreateAccountAsync(
    request,
    [prom](
        const PostgresClient*,
        const CreateAccountRequest&,
        CreateAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CreateBackupPlanOutcome PostgresClient::CreateBackupPlan(const CreateBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupPlanResponse rsp = CreateBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupPlanOutcome(rsp);
        else
            return CreateBackupPlanOutcome(o.GetError());
    }
    else
    {
        return CreateBackupPlanOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateBackupPlanAsync(const CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupPlanRequest&;
    using Resp = CreateBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CreateBackupPlanOutcomeCallable PostgresClient::CreateBackupPlanCallable(const CreateBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupPlanOutcome>>();
    CreateBackupPlanAsync(
    request,
    [prom](
        const PostgresClient*,
        const CreateBackupPlanRequest&,
        CreateBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CreateBaseBackupOutcome PostgresClient::CreateBaseBackup(const CreateBaseBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBaseBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBaseBackupResponse rsp = CreateBaseBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBaseBackupOutcome(rsp);
        else
            return CreateBaseBackupOutcome(o.GetError());
    }
    else
    {
        return CreateBaseBackupOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateBaseBackupAsync(const CreateBaseBackupRequest& request, const CreateBaseBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBaseBackupRequest&;
    using Resp = CreateBaseBackupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBaseBackup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CreateBaseBackupOutcomeCallable PostgresClient::CreateBaseBackupCallable(const CreateBaseBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBaseBackupOutcome>>();
    CreateBaseBackupAsync(
    request,
    [prom](
        const PostgresClient*,
        const CreateBaseBackupRequest&,
        CreateBaseBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CreateDBInstanceNetworkAccessOutcome PostgresClient::CreateDBInstanceNetworkAccess(const CreateDBInstanceNetworkAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstanceNetworkAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceNetworkAccessResponse rsp = CreateDBInstanceNetworkAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceNetworkAccessOutcome(rsp);
        else
            return CreateDBInstanceNetworkAccessOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceNetworkAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateDBInstanceNetworkAccessAsync(const CreateDBInstanceNetworkAccessRequest& request, const CreateDBInstanceNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBInstanceNetworkAccessRequest&;
    using Resp = CreateDBInstanceNetworkAccessResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBInstanceNetworkAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CreateDBInstanceNetworkAccessOutcomeCallable PostgresClient::CreateDBInstanceNetworkAccessCallable(const CreateDBInstanceNetworkAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBInstanceNetworkAccessOutcome>>();
    CreateDBInstanceNetworkAccessAsync(
    request,
    [prom](
        const PostgresClient*,
        const CreateDBInstanceNetworkAccessRequest&,
        CreateDBInstanceNetworkAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CreateDatabaseOutcome PostgresClient::CreateDatabase(const CreateDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatabaseResponse rsp = CreateDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatabaseOutcome(rsp);
        else
            return CreateDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateDatabaseOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDatabaseRequest&;
    using Resp = CreateDatabaseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDatabase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CreateDatabaseOutcomeCallable PostgresClient::CreateDatabaseCallable(const CreateDatabaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDatabaseOutcome>>();
    CreateDatabaseAsync(
    request,
    [prom](
        const PostgresClient*,
        const CreateDatabaseRequest&,
        CreateDatabaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CreateInstancesOutcome PostgresClient::CreateInstances(const CreateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstancesResponse rsp = CreateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstancesOutcome(rsp);
        else
            return CreateInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstancesRequest&;
    using Resp = CreateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CreateInstancesOutcomeCallable PostgresClient::CreateInstancesCallable(const CreateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstancesOutcome>>();
    CreateInstancesAsync(
    request,
    [prom](
        const PostgresClient*,
        const CreateInstancesRequest&,
        CreateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CreateParameterTemplateOutcome PostgresClient::CreateParameterTemplate(const CreateParameterTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateParameterTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateParameterTemplateResponse rsp = CreateParameterTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateParameterTemplateOutcome(rsp);
        else
            return CreateParameterTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateParameterTemplateOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateParameterTemplateAsync(const CreateParameterTemplateRequest& request, const CreateParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateParameterTemplateRequest&;
    using Resp = CreateParameterTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateParameterTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CreateParameterTemplateOutcomeCallable PostgresClient::CreateParameterTemplateCallable(const CreateParameterTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateParameterTemplateOutcome>>();
    CreateParameterTemplateAsync(
    request,
    [prom](
        const PostgresClient*,
        const CreateParameterTemplateRequest&,
        CreateParameterTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CreateReadOnlyDBInstanceOutcome PostgresClient::CreateReadOnlyDBInstance(const CreateReadOnlyDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReadOnlyDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReadOnlyDBInstanceResponse rsp = CreateReadOnlyDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReadOnlyDBInstanceOutcome(rsp);
        else
            return CreateReadOnlyDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateReadOnlyDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateReadOnlyDBInstanceAsync(const CreateReadOnlyDBInstanceRequest& request, const CreateReadOnlyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReadOnlyDBInstanceRequest&;
    using Resp = CreateReadOnlyDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReadOnlyDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CreateReadOnlyDBInstanceOutcomeCallable PostgresClient::CreateReadOnlyDBInstanceCallable(const CreateReadOnlyDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReadOnlyDBInstanceOutcome>>();
    CreateReadOnlyDBInstanceAsync(
    request,
    [prom](
        const PostgresClient*,
        const CreateReadOnlyDBInstanceRequest&,
        CreateReadOnlyDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CreateReadOnlyGroupOutcome PostgresClient::CreateReadOnlyGroup(const CreateReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReadOnlyGroupResponse rsp = CreateReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReadOnlyGroupOutcome(rsp);
        else
            return CreateReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return CreateReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateReadOnlyGroupAsync(const CreateReadOnlyGroupRequest& request, const CreateReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReadOnlyGroupRequest&;
    using Resp = CreateReadOnlyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReadOnlyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CreateReadOnlyGroupOutcomeCallable PostgresClient::CreateReadOnlyGroupCallable(const CreateReadOnlyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReadOnlyGroupOutcome>>();
    CreateReadOnlyGroupAsync(
    request,
    [prom](
        const PostgresClient*,
        const CreateReadOnlyGroupRequest&,
        CreateReadOnlyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::CreateReadOnlyGroupNetworkAccessOutcome PostgresClient::CreateReadOnlyGroupNetworkAccess(const CreateReadOnlyGroupNetworkAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReadOnlyGroupNetworkAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReadOnlyGroupNetworkAccessResponse rsp = CreateReadOnlyGroupNetworkAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReadOnlyGroupNetworkAccessOutcome(rsp);
        else
            return CreateReadOnlyGroupNetworkAccessOutcome(o.GetError());
    }
    else
    {
        return CreateReadOnlyGroupNetworkAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateReadOnlyGroupNetworkAccessAsync(const CreateReadOnlyGroupNetworkAccessRequest& request, const CreateReadOnlyGroupNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReadOnlyGroupNetworkAccessRequest&;
    using Resp = CreateReadOnlyGroupNetworkAccessResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReadOnlyGroupNetworkAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::CreateReadOnlyGroupNetworkAccessOutcomeCallable PostgresClient::CreateReadOnlyGroupNetworkAccessCallable(const CreateReadOnlyGroupNetworkAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReadOnlyGroupNetworkAccessOutcome>>();
    CreateReadOnlyGroupNetworkAccessAsync(
    request,
    [prom](
        const PostgresClient*,
        const CreateReadOnlyGroupNetworkAccessRequest&,
        CreateReadOnlyGroupNetworkAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DeleteAccountOutcome PostgresClient::DeleteAccount(const DeleteAccountRequest &request)
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

void PostgresClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

PostgresClient::DeleteAccountOutcomeCallable PostgresClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccountOutcome>>();
    DeleteAccountAsync(
    request,
    [prom](
        const PostgresClient*,
        const DeleteAccountRequest&,
        DeleteAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DeleteBackupPlanOutcome PostgresClient::DeleteBackupPlan(const DeleteBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupPlanResponse rsp = DeleteBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupPlanOutcome(rsp);
        else
            return DeleteBackupPlanOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupPlanOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteBackupPlanAsync(const DeleteBackupPlanRequest& request, const DeleteBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBackupPlanRequest&;
    using Resp = DeleteBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DeleteBackupPlanOutcomeCallable PostgresClient::DeleteBackupPlanCallable(const DeleteBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackupPlanOutcome>>();
    DeleteBackupPlanAsync(
    request,
    [prom](
        const PostgresClient*,
        const DeleteBackupPlanRequest&,
        DeleteBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DeleteBaseBackupOutcome PostgresClient::DeleteBaseBackup(const DeleteBaseBackupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaseBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaseBackupResponse rsp = DeleteBaseBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaseBackupOutcome(rsp);
        else
            return DeleteBaseBackupOutcome(o.GetError());
    }
    else
    {
        return DeleteBaseBackupOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteBaseBackupAsync(const DeleteBaseBackupRequest& request, const DeleteBaseBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBaseBackupRequest&;
    using Resp = DeleteBaseBackupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBaseBackup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DeleteBaseBackupOutcomeCallable PostgresClient::DeleteBaseBackupCallable(const DeleteBaseBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBaseBackupOutcome>>();
    DeleteBaseBackupAsync(
    request,
    [prom](
        const PostgresClient*,
        const DeleteBaseBackupRequest&,
        DeleteBaseBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DeleteDBInstanceNetworkAccessOutcome PostgresClient::DeleteDBInstanceNetworkAccess(const DeleteDBInstanceNetworkAccessRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDBInstanceNetworkAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDBInstanceNetworkAccessResponse rsp = DeleteDBInstanceNetworkAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDBInstanceNetworkAccessOutcome(rsp);
        else
            return DeleteDBInstanceNetworkAccessOutcome(o.GetError());
    }
    else
    {
        return DeleteDBInstanceNetworkAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteDBInstanceNetworkAccessAsync(const DeleteDBInstanceNetworkAccessRequest& request, const DeleteDBInstanceNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDBInstanceNetworkAccessRequest&;
    using Resp = DeleteDBInstanceNetworkAccessResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDBInstanceNetworkAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DeleteDBInstanceNetworkAccessOutcomeCallable PostgresClient::DeleteDBInstanceNetworkAccessCallable(const DeleteDBInstanceNetworkAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDBInstanceNetworkAccessOutcome>>();
    DeleteDBInstanceNetworkAccessAsync(
    request,
    [prom](
        const PostgresClient*,
        const DeleteDBInstanceNetworkAccessRequest&,
        DeleteDBInstanceNetworkAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DeleteLogBackupOutcome PostgresClient::DeleteLogBackup(const DeleteLogBackupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogBackupResponse rsp = DeleteLogBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogBackupOutcome(rsp);
        else
            return DeleteLogBackupOutcome(o.GetError());
    }
    else
    {
        return DeleteLogBackupOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteLogBackupAsync(const DeleteLogBackupRequest& request, const DeleteLogBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLogBackupRequest&;
    using Resp = DeleteLogBackupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLogBackup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DeleteLogBackupOutcomeCallable PostgresClient::DeleteLogBackupCallable(const DeleteLogBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLogBackupOutcome>>();
    DeleteLogBackupAsync(
    request,
    [prom](
        const PostgresClient*,
        const DeleteLogBackupRequest&,
        DeleteLogBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DeleteParameterTemplateOutcome PostgresClient::DeleteParameterTemplate(const DeleteParameterTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteParameterTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteParameterTemplateResponse rsp = DeleteParameterTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteParameterTemplateOutcome(rsp);
        else
            return DeleteParameterTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteParameterTemplateOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteParameterTemplateAsync(const DeleteParameterTemplateRequest& request, const DeleteParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteParameterTemplateRequest&;
    using Resp = DeleteParameterTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteParameterTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DeleteParameterTemplateOutcomeCallable PostgresClient::DeleteParameterTemplateCallable(const DeleteParameterTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteParameterTemplateOutcome>>();
    DeleteParameterTemplateAsync(
    request,
    [prom](
        const PostgresClient*,
        const DeleteParameterTemplateRequest&,
        DeleteParameterTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DeleteReadOnlyGroupOutcome PostgresClient::DeleteReadOnlyGroup(const DeleteReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReadOnlyGroupResponse rsp = DeleteReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReadOnlyGroupOutcome(rsp);
        else
            return DeleteReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteReadOnlyGroupAsync(const DeleteReadOnlyGroupRequest& request, const DeleteReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReadOnlyGroupRequest&;
    using Resp = DeleteReadOnlyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReadOnlyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DeleteReadOnlyGroupOutcomeCallable PostgresClient::DeleteReadOnlyGroupCallable(const DeleteReadOnlyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReadOnlyGroupOutcome>>();
    DeleteReadOnlyGroupAsync(
    request,
    [prom](
        const PostgresClient*,
        const DeleteReadOnlyGroupRequest&,
        DeleteReadOnlyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DeleteReadOnlyGroupNetworkAccessOutcome PostgresClient::DeleteReadOnlyGroupNetworkAccess(const DeleteReadOnlyGroupNetworkAccessRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReadOnlyGroupNetworkAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReadOnlyGroupNetworkAccessResponse rsp = DeleteReadOnlyGroupNetworkAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReadOnlyGroupNetworkAccessOutcome(rsp);
        else
            return DeleteReadOnlyGroupNetworkAccessOutcome(o.GetError());
    }
    else
    {
        return DeleteReadOnlyGroupNetworkAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteReadOnlyGroupNetworkAccessAsync(const DeleteReadOnlyGroupNetworkAccessRequest& request, const DeleteReadOnlyGroupNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReadOnlyGroupNetworkAccessRequest&;
    using Resp = DeleteReadOnlyGroupNetworkAccessResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReadOnlyGroupNetworkAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DeleteReadOnlyGroupNetworkAccessOutcomeCallable PostgresClient::DeleteReadOnlyGroupNetworkAccessCallable(const DeleteReadOnlyGroupNetworkAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReadOnlyGroupNetworkAccessOutcome>>();
    DeleteReadOnlyGroupNetworkAccessAsync(
    request,
    [prom](
        const PostgresClient*,
        const DeleteReadOnlyGroupNetworkAccessRequest&,
        DeleteReadOnlyGroupNetworkAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeAccountPrivilegesOutcome PostgresClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountPrivilegesResponse rsp = DescribeAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountPrivilegesOutcome(rsp);
        else
            return DescribeAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountPrivilegesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountPrivilegesRequest&;
    using Resp = DescribeAccountPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeAccountPrivilegesOutcomeCallable PostgresClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountPrivilegesOutcome>>();
    DescribeAccountPrivilegesAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeAccountPrivilegesRequest&,
        DescribeAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeAccountsOutcome PostgresClient::DescribeAccounts(const DescribeAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountsResponse rsp = DescribeAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountsOutcome(rsp);
        else
            return DescribeAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountsRequest&;
    using Resp = DescribeAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeAccountsOutcomeCallable PostgresClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountsOutcome>>();
    DescribeAccountsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeAccountsRequest&,
        DescribeAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeAvailableRecoveryTimeOutcome PostgresClient::DescribeAvailableRecoveryTime(const DescribeAvailableRecoveryTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableRecoveryTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableRecoveryTimeResponse rsp = DescribeAvailableRecoveryTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableRecoveryTimeOutcome(rsp);
        else
            return DescribeAvailableRecoveryTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableRecoveryTimeOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeAvailableRecoveryTimeAsync(const DescribeAvailableRecoveryTimeRequest& request, const DescribeAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAvailableRecoveryTimeRequest&;
    using Resp = DescribeAvailableRecoveryTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAvailableRecoveryTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeAvailableRecoveryTimeOutcomeCallable PostgresClient::DescribeAvailableRecoveryTimeCallable(const DescribeAvailableRecoveryTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAvailableRecoveryTimeOutcome>>();
    DescribeAvailableRecoveryTimeAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeAvailableRecoveryTimeRequest&,
        DescribeAvailableRecoveryTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeBackupDownloadRestrictionOutcome PostgresClient::DescribeBackupDownloadRestriction(const DescribeBackupDownloadRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadRestrictionResponse rsp = DescribeBackupDownloadRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadRestrictionOutcome(rsp);
        else
            return DescribeBackupDownloadRestrictionOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadRestrictionOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBackupDownloadRestrictionAsync(const DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupDownloadRestrictionRequest&;
    using Resp = DescribeBackupDownloadRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupDownloadRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeBackupDownloadRestrictionOutcomeCallable PostgresClient::DescribeBackupDownloadRestrictionCallable(const DescribeBackupDownloadRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupDownloadRestrictionOutcome>>();
    DescribeBackupDownloadRestrictionAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeBackupDownloadRestrictionRequest&,
        DescribeBackupDownloadRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeBackupDownloadURLOutcome PostgresClient::DescribeBackupDownloadURL(const DescribeBackupDownloadURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadURLResponse rsp = DescribeBackupDownloadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadURLOutcome(rsp);
        else
            return DescribeBackupDownloadURLOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadURLOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBackupDownloadURLAsync(const DescribeBackupDownloadURLRequest& request, const DescribeBackupDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupDownloadURLRequest&;
    using Resp = DescribeBackupDownloadURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupDownloadURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeBackupDownloadURLOutcomeCallable PostgresClient::DescribeBackupDownloadURLCallable(const DescribeBackupDownloadURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupDownloadURLOutcome>>();
    DescribeBackupDownloadURLAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeBackupDownloadURLRequest&,
        DescribeBackupDownloadURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeBackupOverviewOutcome PostgresClient::DescribeBackupOverview(const DescribeBackupOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupOverviewResponse rsp = DescribeBackupOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupOverviewOutcome(rsp);
        else
            return DescribeBackupOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupOverviewOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBackupOverviewAsync(const DescribeBackupOverviewRequest& request, const DescribeBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupOverviewRequest&;
    using Resp = DescribeBackupOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeBackupOverviewOutcomeCallable PostgresClient::DescribeBackupOverviewCallable(const DescribeBackupOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupOverviewOutcome>>();
    DescribeBackupOverviewAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeBackupOverviewRequest&,
        DescribeBackupOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeBackupPlansOutcome PostgresClient::DescribeBackupPlans(const DescribeBackupPlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupPlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupPlansResponse rsp = DescribeBackupPlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupPlansOutcome(rsp);
        else
            return DescribeBackupPlansOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupPlansOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBackupPlansAsync(const DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupPlansRequest&;
    using Resp = DescribeBackupPlansResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupPlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeBackupPlansOutcomeCallable PostgresClient::DescribeBackupPlansCallable(const DescribeBackupPlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupPlansOutcome>>();
    DescribeBackupPlansAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeBackupPlansRequest&,
        DescribeBackupPlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeBackupSummariesOutcome PostgresClient::DescribeBackupSummaries(const DescribeBackupSummariesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupSummaries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupSummariesResponse rsp = DescribeBackupSummariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupSummariesOutcome(rsp);
        else
            return DescribeBackupSummariesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupSummariesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBackupSummariesAsync(const DescribeBackupSummariesRequest& request, const DescribeBackupSummariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupSummariesRequest&;
    using Resp = DescribeBackupSummariesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupSummaries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeBackupSummariesOutcomeCallable PostgresClient::DescribeBackupSummariesCallable(const DescribeBackupSummariesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupSummariesOutcome>>();
    DescribeBackupSummariesAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeBackupSummariesRequest&,
        DescribeBackupSummariesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeBaseBackupsOutcome PostgresClient::DescribeBaseBackups(const DescribeBaseBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaseBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaseBackupsResponse rsp = DescribeBaseBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaseBackupsOutcome(rsp);
        else
            return DescribeBaseBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeBaseBackupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBaseBackupsAsync(const DescribeBaseBackupsRequest& request, const DescribeBaseBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaseBackupsRequest&;
    using Resp = DescribeBaseBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaseBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeBaseBackupsOutcomeCallable PostgresClient::DescribeBaseBackupsCallable(const DescribeBaseBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaseBackupsOutcome>>();
    DescribeBaseBackupsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeBaseBackupsRequest&,
        DescribeBaseBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeClassesOutcome PostgresClient::DescribeClasses(const DescribeClassesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClasses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassesResponse rsp = DescribeClassesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassesOutcome(rsp);
        else
            return DescribeClassesOutcome(o.GetError());
    }
    else
    {
        return DescribeClassesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeClassesAsync(const DescribeClassesRequest& request, const DescribeClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClassesRequest&;
    using Resp = DescribeClassesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClasses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeClassesOutcomeCallable PostgresClient::DescribeClassesCallable(const DescribeClassesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClassesOutcome>>();
    DescribeClassesAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeClassesRequest&,
        DescribeClassesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeCloneDBInstanceSpecOutcome PostgresClient::DescribeCloneDBInstanceSpec(const DescribeCloneDBInstanceSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloneDBInstanceSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloneDBInstanceSpecResponse rsp = DescribeCloneDBInstanceSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloneDBInstanceSpecOutcome(rsp);
        else
            return DescribeCloneDBInstanceSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeCloneDBInstanceSpecOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeCloneDBInstanceSpecAsync(const DescribeCloneDBInstanceSpecRequest& request, const DescribeCloneDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloneDBInstanceSpecRequest&;
    using Resp = DescribeCloneDBInstanceSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloneDBInstanceSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeCloneDBInstanceSpecOutcomeCallable PostgresClient::DescribeCloneDBInstanceSpecCallable(const DescribeCloneDBInstanceSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloneDBInstanceSpecOutcome>>();
    DescribeCloneDBInstanceSpecAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeCloneDBInstanceSpecRequest&,
        DescribeCloneDBInstanceSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDBBackupsOutcome PostgresClient::DescribeDBBackups(const DescribeDBBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBBackupsResponse rsp = DescribeDBBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBBackupsOutcome(rsp);
        else
            return DescribeDBBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBBackupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBBackupsAsync(const DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBBackupsRequest&;
    using Resp = DescribeDBBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDBBackupsOutcomeCallable PostgresClient::DescribeDBBackupsCallable(const DescribeDBBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBBackupsOutcome>>();
    DescribeDBBackupsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDBBackupsRequest&,
        DescribeDBBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDBErrlogsOutcome PostgresClient::DescribeDBErrlogs(const DescribeDBErrlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBErrlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBErrlogsResponse rsp = DescribeDBErrlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBErrlogsOutcome(rsp);
        else
            return DescribeDBErrlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBErrlogsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBErrlogsAsync(const DescribeDBErrlogsRequest& request, const DescribeDBErrlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBErrlogsRequest&;
    using Resp = DescribeDBErrlogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBErrlogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDBErrlogsOutcomeCallable PostgresClient::DescribeDBErrlogsCallable(const DescribeDBErrlogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBErrlogsOutcome>>();
    DescribeDBErrlogsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDBErrlogsRequest&,
        DescribeDBErrlogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDBInstanceAttributeOutcome PostgresClient::DescribeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceAttributeResponse rsp = DescribeDBInstanceAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceAttributeOutcome(rsp);
        else
            return DescribeDBInstanceAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceAttributeOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceAttributeAsync(const DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceAttributeRequest&;
    using Resp = DescribeDBInstanceAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDBInstanceAttributeOutcomeCallable PostgresClient::DescribeDBInstanceAttributeCallable(const DescribeDBInstanceAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceAttributeOutcome>>();
    DescribeDBInstanceAttributeAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDBInstanceAttributeRequest&,
        DescribeDBInstanceAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDBInstanceHAConfigOutcome PostgresClient::DescribeDBInstanceHAConfig(const DescribeDBInstanceHAConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceHAConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceHAConfigResponse rsp = DescribeDBInstanceHAConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceHAConfigOutcome(rsp);
        else
            return DescribeDBInstanceHAConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceHAConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceHAConfigAsync(const DescribeDBInstanceHAConfigRequest& request, const DescribeDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceHAConfigRequest&;
    using Resp = DescribeDBInstanceHAConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceHAConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDBInstanceHAConfigOutcomeCallable PostgresClient::DescribeDBInstanceHAConfigCallable(const DescribeDBInstanceHAConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceHAConfigOutcome>>();
    DescribeDBInstanceHAConfigAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDBInstanceHAConfigRequest&,
        DescribeDBInstanceHAConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDBInstanceParametersOutcome PostgresClient::DescribeDBInstanceParameters(const DescribeDBInstanceParametersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceParametersResponse rsp = DescribeDBInstanceParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceParametersOutcome(rsp);
        else
            return DescribeDBInstanceParametersOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceParametersOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceParametersAsync(const DescribeDBInstanceParametersRequest& request, const DescribeDBInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceParametersRequest&;
    using Resp = DescribeDBInstanceParametersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceParameters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDBInstanceParametersOutcomeCallable PostgresClient::DescribeDBInstanceParametersCallable(const DescribeDBInstanceParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceParametersOutcome>>();
    DescribeDBInstanceParametersAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDBInstanceParametersRequest&,
        DescribeDBInstanceParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDBInstanceSSLConfigOutcome PostgresClient::DescribeDBInstanceSSLConfig(const DescribeDBInstanceSSLConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceSSLConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceSSLConfigResponse rsp = DescribeDBInstanceSSLConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceSSLConfigOutcome(rsp);
        else
            return DescribeDBInstanceSSLConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceSSLConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceSSLConfigAsync(const DescribeDBInstanceSSLConfigRequest& request, const DescribeDBInstanceSSLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceSSLConfigRequest&;
    using Resp = DescribeDBInstanceSSLConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceSSLConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDBInstanceSSLConfigOutcomeCallable PostgresClient::DescribeDBInstanceSSLConfigCallable(const DescribeDBInstanceSSLConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceSSLConfigOutcome>>();
    DescribeDBInstanceSSLConfigAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDBInstanceSSLConfigRequest&,
        DescribeDBInstanceSSLConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDBInstanceSecurityGroupsOutcome PostgresClient::DescribeDBInstanceSecurityGroups(const DescribeDBInstanceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceSecurityGroupsResponse rsp = DescribeDBInstanceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceSecurityGroupsOutcome(rsp);
        else
            return DescribeDBInstanceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceSecurityGroupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceSecurityGroupsAsync(const DescribeDBInstanceSecurityGroupsRequest& request, const DescribeDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceSecurityGroupsRequest&;
    using Resp = DescribeDBInstanceSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDBInstanceSecurityGroupsOutcomeCallable PostgresClient::DescribeDBInstanceSecurityGroupsCallable(const DescribeDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceSecurityGroupsOutcome>>();
    DescribeDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDBInstanceSecurityGroupsRequest&,
        DescribeDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDBInstancesOutcome PostgresClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstancesResponse rsp = DescribeDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstancesOutcome(rsp);
        else
            return DescribeDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstancesRequest&;
    using Resp = DescribeDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDBInstancesOutcomeCallable PostgresClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstancesOutcome>>();
    DescribeDBInstancesAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDBInstancesRequest&,
        DescribeDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDBVersionsOutcome PostgresClient::DescribeDBVersions(const DescribeDBVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBVersionsResponse rsp = DescribeDBVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBVersionsOutcome(rsp);
        else
            return DescribeDBVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBVersionsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBVersionsAsync(const DescribeDBVersionsRequest& request, const DescribeDBVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBVersionsRequest&;
    using Resp = DescribeDBVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDBVersionsOutcomeCallable PostgresClient::DescribeDBVersionsCallable(const DescribeDBVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBVersionsOutcome>>();
    DescribeDBVersionsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDBVersionsRequest&,
        DescribeDBVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDBXlogsOutcome PostgresClient::DescribeDBXlogs(const DescribeDBXlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBXlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBXlogsResponse rsp = DescribeDBXlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBXlogsOutcome(rsp);
        else
            return DescribeDBXlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBXlogsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBXlogsAsync(const DescribeDBXlogsRequest& request, const DescribeDBXlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBXlogsRequest&;
    using Resp = DescribeDBXlogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBXlogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDBXlogsOutcomeCallable PostgresClient::DescribeDBXlogsCallable(const DescribeDBXlogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBXlogsOutcome>>();
    DescribeDBXlogsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDBXlogsRequest&,
        DescribeDBXlogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDatabaseObjectsOutcome PostgresClient::DescribeDatabaseObjects(const DescribeDatabaseObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseObjectsResponse rsp = DescribeDatabaseObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseObjectsOutcome(rsp);
        else
            return DescribeDatabaseObjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseObjectsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDatabaseObjectsAsync(const DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseObjectsRequest&;
    using Resp = DescribeDatabaseObjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseObjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDatabaseObjectsOutcomeCallable PostgresClient::DescribeDatabaseObjectsCallable(const DescribeDatabaseObjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseObjectsOutcome>>();
    DescribeDatabaseObjectsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDatabaseObjectsRequest&,
        DescribeDatabaseObjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDatabasesOutcome PostgresClient::DescribeDatabases(const DescribeDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabasesResponse rsp = DescribeDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabasesOutcome(rsp);
        else
            return DescribeDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabasesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabasesRequest&;
    using Resp = DescribeDatabasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDatabasesOutcomeCallable PostgresClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabasesOutcome>>();
    DescribeDatabasesAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDatabasesRequest&,
        DescribeDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDedicatedClustersOutcome PostgresClient::DescribeDedicatedClusters(const DescribeDedicatedClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedClustersResponse rsp = DescribeDedicatedClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedClustersOutcome(rsp);
        else
            return DescribeDedicatedClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedClustersOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDedicatedClustersAsync(const DescribeDedicatedClustersRequest& request, const DescribeDedicatedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDedicatedClustersRequest&;
    using Resp = DescribeDedicatedClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDedicatedClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDedicatedClustersOutcomeCallable PostgresClient::DescribeDedicatedClustersCallable(const DescribeDedicatedClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedClustersOutcome>>();
    DescribeDedicatedClustersAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDedicatedClustersRequest&,
        DescribeDedicatedClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeDefaultParametersOutcome PostgresClient::DescribeDefaultParameters(const DescribeDefaultParametersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultParametersResponse rsp = DescribeDefaultParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultParametersOutcome(rsp);
        else
            return DescribeDefaultParametersOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultParametersOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDefaultParametersAsync(const DescribeDefaultParametersRequest& request, const DescribeDefaultParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDefaultParametersRequest&;
    using Resp = DescribeDefaultParametersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDefaultParameters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeDefaultParametersOutcomeCallable PostgresClient::DescribeDefaultParametersCallable(const DescribeDefaultParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDefaultParametersOutcome>>();
    DescribeDefaultParametersAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeDefaultParametersRequest&,
        DescribeDefaultParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeEncryptionKeysOutcome PostgresClient::DescribeEncryptionKeys(const DescribeEncryptionKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEncryptionKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEncryptionKeysResponse rsp = DescribeEncryptionKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEncryptionKeysOutcome(rsp);
        else
            return DescribeEncryptionKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeEncryptionKeysOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeEncryptionKeysAsync(const DescribeEncryptionKeysRequest& request, const DescribeEncryptionKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEncryptionKeysRequest&;
    using Resp = DescribeEncryptionKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEncryptionKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeEncryptionKeysOutcomeCallable PostgresClient::DescribeEncryptionKeysCallable(const DescribeEncryptionKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEncryptionKeysOutcome>>();
    DescribeEncryptionKeysAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeEncryptionKeysRequest&,
        DescribeEncryptionKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeLogBackupsOutcome PostgresClient::DescribeLogBackups(const DescribeLogBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogBackupsResponse rsp = DescribeLogBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogBackupsOutcome(rsp);
        else
            return DescribeLogBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogBackupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeLogBackupsAsync(const DescribeLogBackupsRequest& request, const DescribeLogBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogBackupsRequest&;
    using Resp = DescribeLogBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeLogBackupsOutcomeCallable PostgresClient::DescribeLogBackupsCallable(const DescribeLogBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogBackupsOutcome>>();
    DescribeLogBackupsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeLogBackupsRequest&,
        DescribeLogBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeMaintainTimeWindowOutcome PostgresClient::DescribeMaintainTimeWindow(const DescribeMaintainTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintainTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintainTimeWindowResponse rsp = DescribeMaintainTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintainTimeWindowOutcome(rsp);
        else
            return DescribeMaintainTimeWindowOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintainTimeWindowOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeMaintainTimeWindowAsync(const DescribeMaintainTimeWindowRequest& request, const DescribeMaintainTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMaintainTimeWindowRequest&;
    using Resp = DescribeMaintainTimeWindowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMaintainTimeWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeMaintainTimeWindowOutcomeCallable PostgresClient::DescribeMaintainTimeWindowCallable(const DescribeMaintainTimeWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMaintainTimeWindowOutcome>>();
    DescribeMaintainTimeWindowAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeMaintainTimeWindowRequest&,
        DescribeMaintainTimeWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeOrdersOutcome PostgresClient::DescribeOrders(const DescribeOrdersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrdersResponse rsp = DescribeOrdersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrdersOutcome(rsp);
        else
            return DescribeOrdersOutcome(o.GetError());
    }
    else
    {
        return DescribeOrdersOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrdersRequest&;
    using Resp = DescribeOrdersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeOrdersOutcomeCallable PostgresClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrdersOutcome>>();
    DescribeOrdersAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeOrdersRequest&,
        DescribeOrdersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeParameterTemplateAttributesOutcome PostgresClient::DescribeParameterTemplateAttributes(const DescribeParameterTemplateAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParameterTemplateAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParameterTemplateAttributesResponse rsp = DescribeParameterTemplateAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParameterTemplateAttributesOutcome(rsp);
        else
            return DescribeParameterTemplateAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeParameterTemplateAttributesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeParameterTemplateAttributesAsync(const DescribeParameterTemplateAttributesRequest& request, const DescribeParameterTemplateAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeParameterTemplateAttributesRequest&;
    using Resp = DescribeParameterTemplateAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeParameterTemplateAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeParameterTemplateAttributesOutcomeCallable PostgresClient::DescribeParameterTemplateAttributesCallable(const DescribeParameterTemplateAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeParameterTemplateAttributesOutcome>>();
    DescribeParameterTemplateAttributesAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeParameterTemplateAttributesRequest&,
        DescribeParameterTemplateAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeParameterTemplatesOutcome PostgresClient::DescribeParameterTemplates(const DescribeParameterTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParameterTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParameterTemplatesResponse rsp = DescribeParameterTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParameterTemplatesOutcome(rsp);
        else
            return DescribeParameterTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeParameterTemplatesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeParameterTemplatesAsync(const DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeParameterTemplatesRequest&;
    using Resp = DescribeParameterTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeParameterTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeParameterTemplatesOutcomeCallable PostgresClient::DescribeParameterTemplatesCallable(const DescribeParameterTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeParameterTemplatesOutcome>>();
    DescribeParameterTemplatesAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeParameterTemplatesRequest&,
        DescribeParameterTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeParamsEventOutcome PostgresClient::DescribeParamsEvent(const DescribeParamsEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParamsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParamsEventResponse rsp = DescribeParamsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParamsEventOutcome(rsp);
        else
            return DescribeParamsEventOutcome(o.GetError());
    }
    else
    {
        return DescribeParamsEventOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeParamsEventAsync(const DescribeParamsEventRequest& request, const DescribeParamsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeParamsEventRequest&;
    using Resp = DescribeParamsEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeParamsEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeParamsEventOutcomeCallable PostgresClient::DescribeParamsEventCallable(const DescribeParamsEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeParamsEventOutcome>>();
    DescribeParamsEventAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeParamsEventRequest&,
        DescribeParamsEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeProductConfigOutcome PostgresClient::DescribeProductConfig(const DescribeProductConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductConfigResponse rsp = DescribeProductConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductConfigOutcome(rsp);
        else
            return DescribeProductConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeProductConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeProductConfigAsync(const DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductConfigRequest&;
    using Resp = DescribeProductConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeProductConfigOutcomeCallable PostgresClient::DescribeProductConfigCallable(const DescribeProductConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductConfigOutcome>>();
    DescribeProductConfigAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeProductConfigRequest&,
        DescribeProductConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeReadOnlyGroupsOutcome PostgresClient::DescribeReadOnlyGroups(const DescribeReadOnlyGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReadOnlyGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReadOnlyGroupsResponse rsp = DescribeReadOnlyGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReadOnlyGroupsOutcome(rsp);
        else
            return DescribeReadOnlyGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeReadOnlyGroupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeReadOnlyGroupsAsync(const DescribeReadOnlyGroupsRequest& request, const DescribeReadOnlyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReadOnlyGroupsRequest&;
    using Resp = DescribeReadOnlyGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReadOnlyGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeReadOnlyGroupsOutcomeCallable PostgresClient::DescribeReadOnlyGroupsCallable(const DescribeReadOnlyGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReadOnlyGroupsOutcome>>();
    DescribeReadOnlyGroupsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeReadOnlyGroupsRequest&,
        DescribeReadOnlyGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeRegionsOutcome PostgresClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegionsRequest&;
    using Resp = DescribeRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeRegionsOutcomeCallable PostgresClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeSlowQueryAnalysisOutcome PostgresClient::DescribeSlowQueryAnalysis(const DescribeSlowQueryAnalysisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowQueryAnalysis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowQueryAnalysisResponse rsp = DescribeSlowQueryAnalysisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowQueryAnalysisOutcome(rsp);
        else
            return DescribeSlowQueryAnalysisOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowQueryAnalysisOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeSlowQueryAnalysisAsync(const DescribeSlowQueryAnalysisRequest& request, const DescribeSlowQueryAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowQueryAnalysisRequest&;
    using Resp = DescribeSlowQueryAnalysisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowQueryAnalysis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeSlowQueryAnalysisOutcomeCallable PostgresClient::DescribeSlowQueryAnalysisCallable(const DescribeSlowQueryAnalysisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowQueryAnalysisOutcome>>();
    DescribeSlowQueryAnalysisAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeSlowQueryAnalysisRequest&,
        DescribeSlowQueryAnalysisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeSlowQueryListOutcome PostgresClient::DescribeSlowQueryList(const DescribeSlowQueryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowQueryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowQueryListResponse rsp = DescribeSlowQueryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowQueryListOutcome(rsp);
        else
            return DescribeSlowQueryListOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowQueryListOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeSlowQueryListAsync(const DescribeSlowQueryListRequest& request, const DescribeSlowQueryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowQueryListRequest&;
    using Resp = DescribeSlowQueryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowQueryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeSlowQueryListOutcomeCallable PostgresClient::DescribeSlowQueryListCallable(const DescribeSlowQueryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowQueryListOutcome>>();
    DescribeSlowQueryListAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeSlowQueryListRequest&,
        DescribeSlowQueryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeTasksOutcome PostgresClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTasksRequest&;
    using Resp = DescribeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeTasksOutcomeCallable PostgresClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DescribeZonesOutcome PostgresClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZonesRequest&;
    using Resp = DescribeZonesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DescribeZonesOutcomeCallable PostgresClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZonesOutcome>>();
    DescribeZonesAsync(
    request,
    [prom](
        const PostgresClient*,
        const DescribeZonesRequest&,
        DescribeZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DestroyDBInstanceOutcome PostgresClient::DestroyDBInstance(const DestroyDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyDBInstanceResponse rsp = DestroyDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyDBInstanceOutcome(rsp);
        else
            return DestroyDBInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::DestroyDBInstanceAsync(const DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyDBInstanceRequest&;
    using Resp = DestroyDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DestroyDBInstanceOutcomeCallable PostgresClient::DestroyDBInstanceCallable(const DestroyDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyDBInstanceOutcome>>();
    DestroyDBInstanceAsync(
    request,
    [prom](
        const PostgresClient*,
        const DestroyDBInstanceRequest&,
        DestroyDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::DisIsolateDBInstancesOutcome PostgresClient::DisIsolateDBInstances(const DisIsolateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DisIsolateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisIsolateDBInstancesResponse rsp = DisIsolateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisIsolateDBInstancesOutcome(rsp);
        else
            return DisIsolateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DisIsolateDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::DisIsolateDBInstancesAsync(const DisIsolateDBInstancesRequest& request, const DisIsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisIsolateDBInstancesRequest&;
    using Resp = DisIsolateDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DisIsolateDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::DisIsolateDBInstancesOutcomeCallable PostgresClient::DisIsolateDBInstancesCallable(const DisIsolateDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisIsolateDBInstancesOutcome>>();
    DisIsolateDBInstancesAsync(
    request,
    [prom](
        const PostgresClient*,
        const DisIsolateDBInstancesRequest&,
        DisIsolateDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::InquiryPriceCreateDBInstancesOutcome PostgresClient::InquiryPriceCreateDBInstances(const InquiryPriceCreateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateDBInstancesResponse rsp = InquiryPriceCreateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateDBInstancesOutcome(rsp);
        else
            return InquiryPriceCreateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::InquiryPriceCreateDBInstancesAsync(const InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceCreateDBInstancesRequest&;
    using Resp = InquiryPriceCreateDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceCreateDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::InquiryPriceCreateDBInstancesOutcomeCallable PostgresClient::InquiryPriceCreateDBInstancesCallable(const InquiryPriceCreateDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceCreateDBInstancesOutcome>>();
    InquiryPriceCreateDBInstancesAsync(
    request,
    [prom](
        const PostgresClient*,
        const InquiryPriceCreateDBInstancesRequest&,
        InquiryPriceCreateDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::InquiryPriceRenewDBInstanceOutcome PostgresClient::InquiryPriceRenewDBInstance(const InquiryPriceRenewDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewDBInstanceResponse rsp = InquiryPriceRenewDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewDBInstanceOutcome(rsp);
        else
            return InquiryPriceRenewDBInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::InquiryPriceRenewDBInstanceAsync(const InquiryPriceRenewDBInstanceRequest& request, const InquiryPriceRenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceRenewDBInstanceRequest&;
    using Resp = InquiryPriceRenewDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceRenewDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::InquiryPriceRenewDBInstanceOutcomeCallable PostgresClient::InquiryPriceRenewDBInstanceCallable(const InquiryPriceRenewDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRenewDBInstanceOutcome>>();
    InquiryPriceRenewDBInstanceAsync(
    request,
    [prom](
        const PostgresClient*,
        const InquiryPriceRenewDBInstanceRequest&,
        InquiryPriceRenewDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::InquiryPriceUpgradeDBInstanceOutcome PostgresClient::InquiryPriceUpgradeDBInstance(const InquiryPriceUpgradeDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpgradeDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpgradeDBInstanceResponse rsp = InquiryPriceUpgradeDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpgradeDBInstanceOutcome(rsp);
        else
            return InquiryPriceUpgradeDBInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpgradeDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::InquiryPriceUpgradeDBInstanceAsync(const InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceUpgradeDBInstanceRequest&;
    using Resp = InquiryPriceUpgradeDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceUpgradeDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::InquiryPriceUpgradeDBInstanceOutcomeCallable PostgresClient::InquiryPriceUpgradeDBInstanceCallable(const InquiryPriceUpgradeDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceUpgradeDBInstanceOutcome>>();
    InquiryPriceUpgradeDBInstanceAsync(
    request,
    [prom](
        const PostgresClient*,
        const InquiryPriceUpgradeDBInstanceRequest&,
        InquiryPriceUpgradeDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::IsolateDBInstancesOutcome PostgresClient::IsolateDBInstances(const IsolateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDBInstancesResponse rsp = IsolateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDBInstancesOutcome(rsp);
        else
            return IsolateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return IsolateDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::IsolateDBInstancesAsync(const IsolateDBInstancesRequest& request, const IsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateDBInstancesRequest&;
    using Resp = IsolateDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::IsolateDBInstancesOutcomeCallable PostgresClient::IsolateDBInstancesCallable(const IsolateDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateDBInstancesOutcome>>();
    IsolateDBInstancesAsync(
    request,
    [prom](
        const PostgresClient*,
        const IsolateDBInstancesRequest&,
        IsolateDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::LockAccountOutcome PostgresClient::LockAccount(const LockAccountRequest &request)
{
    auto outcome = MakeRequest(request, "LockAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LockAccountResponse rsp = LockAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LockAccountOutcome(rsp);
        else
            return LockAccountOutcome(o.GetError());
    }
    else
    {
        return LockAccountOutcome(outcome.GetError());
    }
}

void PostgresClient::LockAccountAsync(const LockAccountRequest& request, const LockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LockAccountRequest&;
    using Resp = LockAccountResponse;

    DoRequestAsync<Req, Resp>(
        "LockAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::LockAccountOutcomeCallable PostgresClient::LockAccountCallable(const LockAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<LockAccountOutcome>>();
    LockAccountAsync(
    request,
    [prom](
        const PostgresClient*,
        const LockAccountRequest&,
        LockAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyAccountPrivilegesOutcome PostgresClient::ModifyAccountPrivileges(const ModifyAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountPrivilegesResponse rsp = ModifyAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountPrivilegesOutcome(rsp);
        else
            return ModifyAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountPrivilegesOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyAccountPrivilegesAsync(const ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountPrivilegesRequest&;
    using Resp = ModifyAccountPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyAccountPrivilegesOutcomeCallable PostgresClient::ModifyAccountPrivilegesCallable(const ModifyAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountPrivilegesOutcome>>();
    ModifyAccountPrivilegesAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyAccountPrivilegesRequest&,
        ModifyAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyAccountRemarkOutcome PostgresClient::ModifyAccountRemark(const ModifyAccountRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountRemarkResponse rsp = ModifyAccountRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountRemarkOutcome(rsp);
        else
            return ModifyAccountRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountRemarkOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyAccountRemarkAsync(const ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountRemarkRequest&;
    using Resp = ModifyAccountRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyAccountRemarkOutcomeCallable PostgresClient::ModifyAccountRemarkCallable(const ModifyAccountRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountRemarkOutcome>>();
    ModifyAccountRemarkAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyAccountRemarkRequest&,
        ModifyAccountRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyBackupDownloadRestrictionOutcome PostgresClient::ModifyBackupDownloadRestriction(const ModifyBackupDownloadRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupDownloadRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupDownloadRestrictionResponse rsp = ModifyBackupDownloadRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupDownloadRestrictionOutcome(rsp);
        else
            return ModifyBackupDownloadRestrictionOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupDownloadRestrictionOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyBackupDownloadRestrictionAsync(const ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupDownloadRestrictionRequest&;
    using Resp = ModifyBackupDownloadRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupDownloadRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyBackupDownloadRestrictionOutcomeCallable PostgresClient::ModifyBackupDownloadRestrictionCallable(const ModifyBackupDownloadRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupDownloadRestrictionOutcome>>();
    ModifyBackupDownloadRestrictionAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyBackupDownloadRestrictionRequest&,
        ModifyBackupDownloadRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyBackupPlanOutcome PostgresClient::ModifyBackupPlan(const ModifyBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupPlanResponse rsp = ModifyBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupPlanOutcome(rsp);
        else
            return ModifyBackupPlanOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupPlanOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyBackupPlanAsync(const ModifyBackupPlanRequest& request, const ModifyBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupPlanRequest&;
    using Resp = ModifyBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyBackupPlanOutcomeCallable PostgresClient::ModifyBackupPlanCallable(const ModifyBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupPlanOutcome>>();
    ModifyBackupPlanAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyBackupPlanRequest&,
        ModifyBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyBaseBackupExpireTimeOutcome PostgresClient::ModifyBaseBackupExpireTime(const ModifyBaseBackupExpireTimeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaseBackupExpireTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaseBackupExpireTimeResponse rsp = ModifyBaseBackupExpireTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaseBackupExpireTimeOutcome(rsp);
        else
            return ModifyBaseBackupExpireTimeOutcome(o.GetError());
    }
    else
    {
        return ModifyBaseBackupExpireTimeOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyBaseBackupExpireTimeAsync(const ModifyBaseBackupExpireTimeRequest& request, const ModifyBaseBackupExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBaseBackupExpireTimeRequest&;
    using Resp = ModifyBaseBackupExpireTimeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBaseBackupExpireTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyBaseBackupExpireTimeOutcomeCallable PostgresClient::ModifyBaseBackupExpireTimeCallable(const ModifyBaseBackupExpireTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBaseBackupExpireTimeOutcome>>();
    ModifyBaseBackupExpireTimeAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyBaseBackupExpireTimeRequest&,
        ModifyBaseBackupExpireTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstanceChargeTypeOutcome PostgresClient::ModifyDBInstanceChargeType(const ModifyDBInstanceChargeTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceChargeType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceChargeTypeResponse rsp = ModifyDBInstanceChargeTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceChargeTypeOutcome(rsp);
        else
            return ModifyDBInstanceChargeTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceChargeTypeOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceChargeTypeAsync(const ModifyDBInstanceChargeTypeRequest& request, const ModifyDBInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceChargeTypeRequest&;
    using Resp = ModifyDBInstanceChargeTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceChargeType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstanceChargeTypeOutcomeCallable PostgresClient::ModifyDBInstanceChargeTypeCallable(const ModifyDBInstanceChargeTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceChargeTypeOutcome>>();
    ModifyDBInstanceChargeTypeAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstanceChargeTypeRequest&,
        ModifyDBInstanceChargeTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstanceDeletionProtectionOutcome PostgresClient::ModifyDBInstanceDeletionProtection(const ModifyDBInstanceDeletionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceDeletionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceDeletionProtectionResponse rsp = ModifyDBInstanceDeletionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceDeletionProtectionOutcome(rsp);
        else
            return ModifyDBInstanceDeletionProtectionOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceDeletionProtectionOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceDeletionProtectionAsync(const ModifyDBInstanceDeletionProtectionRequest& request, const ModifyDBInstanceDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceDeletionProtectionRequest&;
    using Resp = ModifyDBInstanceDeletionProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceDeletionProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstanceDeletionProtectionOutcomeCallable PostgresClient::ModifyDBInstanceDeletionProtectionCallable(const ModifyDBInstanceDeletionProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceDeletionProtectionOutcome>>();
    ModifyDBInstanceDeletionProtectionAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstanceDeletionProtectionRequest&,
        ModifyDBInstanceDeletionProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstanceDeploymentOutcome PostgresClient::ModifyDBInstanceDeployment(const ModifyDBInstanceDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceDeploymentResponse rsp = ModifyDBInstanceDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceDeploymentOutcome(rsp);
        else
            return ModifyDBInstanceDeploymentOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceDeploymentOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceDeploymentAsync(const ModifyDBInstanceDeploymentRequest& request, const ModifyDBInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceDeploymentRequest&;
    using Resp = ModifyDBInstanceDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstanceDeploymentOutcomeCallable PostgresClient::ModifyDBInstanceDeploymentCallable(const ModifyDBInstanceDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceDeploymentOutcome>>();
    ModifyDBInstanceDeploymentAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstanceDeploymentRequest&,
        ModifyDBInstanceDeploymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstanceHAConfigOutcome PostgresClient::ModifyDBInstanceHAConfig(const ModifyDBInstanceHAConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceHAConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceHAConfigResponse rsp = ModifyDBInstanceHAConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceHAConfigOutcome(rsp);
        else
            return ModifyDBInstanceHAConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceHAConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceHAConfigAsync(const ModifyDBInstanceHAConfigRequest& request, const ModifyDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceHAConfigRequest&;
    using Resp = ModifyDBInstanceHAConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceHAConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstanceHAConfigOutcomeCallable PostgresClient::ModifyDBInstanceHAConfigCallable(const ModifyDBInstanceHAConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceHAConfigOutcome>>();
    ModifyDBInstanceHAConfigAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstanceHAConfigRequest&,
        ModifyDBInstanceHAConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstanceNameOutcome PostgresClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceNameResponse rsp = ModifyDBInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceNameOutcome(rsp);
        else
            return ModifyDBInstanceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceNameOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceNameRequest&;
    using Resp = ModifyDBInstanceNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstanceNameOutcomeCallable PostgresClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceNameOutcome>>();
    ModifyDBInstanceNameAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstanceNameRequest&,
        ModifyDBInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstanceParametersOutcome PostgresClient::ModifyDBInstanceParameters(const ModifyDBInstanceParametersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceParametersResponse rsp = ModifyDBInstanceParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceParametersOutcome(rsp);
        else
            return ModifyDBInstanceParametersOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceParametersOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceParametersAsync(const ModifyDBInstanceParametersRequest& request, const ModifyDBInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceParametersRequest&;
    using Resp = ModifyDBInstanceParametersResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceParameters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstanceParametersOutcomeCallable PostgresClient::ModifyDBInstanceParametersCallable(const ModifyDBInstanceParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceParametersOutcome>>();
    ModifyDBInstanceParametersAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstanceParametersRequest&,
        ModifyDBInstanceParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstanceReadOnlyGroupOutcome PostgresClient::ModifyDBInstanceReadOnlyGroup(const ModifyDBInstanceReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceReadOnlyGroupResponse rsp = ModifyDBInstanceReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceReadOnlyGroupOutcome(rsp);
        else
            return ModifyDBInstanceReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceReadOnlyGroupAsync(const ModifyDBInstanceReadOnlyGroupRequest& request, const ModifyDBInstanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceReadOnlyGroupRequest&;
    using Resp = ModifyDBInstanceReadOnlyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceReadOnlyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstanceReadOnlyGroupOutcomeCallable PostgresClient::ModifyDBInstanceReadOnlyGroupCallable(const ModifyDBInstanceReadOnlyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceReadOnlyGroupOutcome>>();
    ModifyDBInstanceReadOnlyGroupAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstanceReadOnlyGroupRequest&,
        ModifyDBInstanceReadOnlyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstanceSSLConfigOutcome PostgresClient::ModifyDBInstanceSSLConfig(const ModifyDBInstanceSSLConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSSLConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSSLConfigResponse rsp = ModifyDBInstanceSSLConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSSLConfigOutcome(rsp);
        else
            return ModifyDBInstanceSSLConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSSLConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceSSLConfigAsync(const ModifyDBInstanceSSLConfigRequest& request, const ModifyDBInstanceSSLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceSSLConfigRequest&;
    using Resp = ModifyDBInstanceSSLConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceSSLConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstanceSSLConfigOutcomeCallable PostgresClient::ModifyDBInstanceSSLConfigCallable(const ModifyDBInstanceSSLConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSSLConfigOutcome>>();
    ModifyDBInstanceSSLConfigAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstanceSSLConfigRequest&,
        ModifyDBInstanceSSLConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstanceSecurityGroupsOutcome PostgresClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSecurityGroupsResponse rsp = ModifyDBInstanceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSecurityGroupsOutcome(rsp);
        else
            return ModifyDBInstanceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSecurityGroupsOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceSecurityGroupsRequest&;
    using Resp = ModifyDBInstanceSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstanceSecurityGroupsOutcomeCallable PostgresClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupsOutcome>>();
    ModifyDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstanceSecurityGroupsRequest&,
        ModifyDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstanceSpecOutcome PostgresClient::ModifyDBInstanceSpec(const ModifyDBInstanceSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSpecResponse rsp = ModifyDBInstanceSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSpecOutcome(rsp);
        else
            return ModifyDBInstanceSpecOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSpecOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceSpecAsync(const ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceSpecRequest&;
    using Resp = ModifyDBInstanceSpecResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstanceSpecOutcomeCallable PostgresClient::ModifyDBInstanceSpecCallable(const ModifyDBInstanceSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSpecOutcome>>();
    ModifyDBInstanceSpecAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstanceSpecRequest&,
        ModifyDBInstanceSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDBInstancesProjectOutcome PostgresClient::ModifyDBInstancesProject(const ModifyDBInstancesProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstancesProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstancesProjectResponse rsp = ModifyDBInstancesProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstancesProjectOutcome(rsp);
        else
            return ModifyDBInstancesProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstancesProjectOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstancesProjectAsync(const ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstancesProjectRequest&;
    using Resp = ModifyDBInstancesProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstancesProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDBInstancesProjectOutcomeCallable PostgresClient::ModifyDBInstancesProjectCallable(const ModifyDBInstancesProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstancesProjectOutcome>>();
    ModifyDBInstancesProjectAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDBInstancesProjectRequest&,
        ModifyDBInstancesProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyDatabaseOwnerOutcome PostgresClient::ModifyDatabaseOwner(const ModifyDatabaseOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseOwnerResponse rsp = ModifyDatabaseOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseOwnerOutcome(rsp);
        else
            return ModifyDatabaseOwnerOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseOwnerOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDatabaseOwnerAsync(const ModifyDatabaseOwnerRequest& request, const ModifyDatabaseOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatabaseOwnerRequest&;
    using Resp = ModifyDatabaseOwnerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatabaseOwner", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyDatabaseOwnerOutcomeCallable PostgresClient::ModifyDatabaseOwnerCallable(const ModifyDatabaseOwnerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatabaseOwnerOutcome>>();
    ModifyDatabaseOwnerAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyDatabaseOwnerRequest&,
        ModifyDatabaseOwnerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyMaintainTimeWindowOutcome PostgresClient::ModifyMaintainTimeWindow(const ModifyMaintainTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintainTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintainTimeWindowResponse rsp = ModifyMaintainTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintainTimeWindowOutcome(rsp);
        else
            return ModifyMaintainTimeWindowOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintainTimeWindowOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyMaintainTimeWindowAsync(const ModifyMaintainTimeWindowRequest& request, const ModifyMaintainTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMaintainTimeWindowRequest&;
    using Resp = ModifyMaintainTimeWindowResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMaintainTimeWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyMaintainTimeWindowOutcomeCallable PostgresClient::ModifyMaintainTimeWindowCallable(const ModifyMaintainTimeWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMaintainTimeWindowOutcome>>();
    ModifyMaintainTimeWindowAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyMaintainTimeWindowRequest&,
        ModifyMaintainTimeWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyParameterTemplateOutcome PostgresClient::ModifyParameterTemplate(const ModifyParameterTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyParameterTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyParameterTemplateResponse rsp = ModifyParameterTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyParameterTemplateOutcome(rsp);
        else
            return ModifyParameterTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyParameterTemplateOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyParameterTemplateAsync(const ModifyParameterTemplateRequest& request, const ModifyParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyParameterTemplateRequest&;
    using Resp = ModifyParameterTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyParameterTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyParameterTemplateOutcomeCallable PostgresClient::ModifyParameterTemplateCallable(const ModifyParameterTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyParameterTemplateOutcome>>();
    ModifyParameterTemplateAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyParameterTemplateRequest&,
        ModifyParameterTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyReadOnlyDBInstanceWeightOutcome PostgresClient::ModifyReadOnlyDBInstanceWeight(const ModifyReadOnlyDBInstanceWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReadOnlyDBInstanceWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReadOnlyDBInstanceWeightResponse rsp = ModifyReadOnlyDBInstanceWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReadOnlyDBInstanceWeightOutcome(rsp);
        else
            return ModifyReadOnlyDBInstanceWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyReadOnlyDBInstanceWeightOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyReadOnlyDBInstanceWeightAsync(const ModifyReadOnlyDBInstanceWeightRequest& request, const ModifyReadOnlyDBInstanceWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyReadOnlyDBInstanceWeightRequest&;
    using Resp = ModifyReadOnlyDBInstanceWeightResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyReadOnlyDBInstanceWeight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyReadOnlyDBInstanceWeightOutcomeCallable PostgresClient::ModifyReadOnlyDBInstanceWeightCallable(const ModifyReadOnlyDBInstanceWeightRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyReadOnlyDBInstanceWeightOutcome>>();
    ModifyReadOnlyDBInstanceWeightAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyReadOnlyDBInstanceWeightRequest&,
        ModifyReadOnlyDBInstanceWeightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifyReadOnlyGroupConfigOutcome PostgresClient::ModifyReadOnlyGroupConfig(const ModifyReadOnlyGroupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReadOnlyGroupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReadOnlyGroupConfigResponse rsp = ModifyReadOnlyGroupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReadOnlyGroupConfigOutcome(rsp);
        else
            return ModifyReadOnlyGroupConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyReadOnlyGroupConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyReadOnlyGroupConfigAsync(const ModifyReadOnlyGroupConfigRequest& request, const ModifyReadOnlyGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyReadOnlyGroupConfigRequest&;
    using Resp = ModifyReadOnlyGroupConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyReadOnlyGroupConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifyReadOnlyGroupConfigOutcomeCallable PostgresClient::ModifyReadOnlyGroupConfigCallable(const ModifyReadOnlyGroupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyReadOnlyGroupConfigOutcome>>();
    ModifyReadOnlyGroupConfigAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifyReadOnlyGroupConfigRequest&,
        ModifyReadOnlyGroupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ModifySwitchTimePeriodOutcome PostgresClient::ModifySwitchTimePeriod(const ModifySwitchTimePeriodRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySwitchTimePeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySwitchTimePeriodResponse rsp = ModifySwitchTimePeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySwitchTimePeriodOutcome(rsp);
        else
            return ModifySwitchTimePeriodOutcome(o.GetError());
    }
    else
    {
        return ModifySwitchTimePeriodOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifySwitchTimePeriodAsync(const ModifySwitchTimePeriodRequest& request, const ModifySwitchTimePeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySwitchTimePeriodRequest&;
    using Resp = ModifySwitchTimePeriodResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySwitchTimePeriod", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ModifySwitchTimePeriodOutcomeCallable PostgresClient::ModifySwitchTimePeriodCallable(const ModifySwitchTimePeriodRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySwitchTimePeriodOutcome>>();
    ModifySwitchTimePeriodAsync(
    request,
    [prom](
        const PostgresClient*,
        const ModifySwitchTimePeriodRequest&,
        ModifySwitchTimePeriodOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::OpenAccountCAMOutcome PostgresClient::OpenAccountCAM(const OpenAccountCAMRequest &request)
{
    auto outcome = MakeRequest(request, "OpenAccountCAM");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenAccountCAMResponse rsp = OpenAccountCAMResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenAccountCAMOutcome(rsp);
        else
            return OpenAccountCAMOutcome(o.GetError());
    }
    else
    {
        return OpenAccountCAMOutcome(outcome.GetError());
    }
}

void PostgresClient::OpenAccountCAMAsync(const OpenAccountCAMRequest& request, const OpenAccountCAMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenAccountCAMRequest&;
    using Resp = OpenAccountCAMResponse;

    DoRequestAsync<Req, Resp>(
        "OpenAccountCAM", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::OpenAccountCAMOutcomeCallable PostgresClient::OpenAccountCAMCallable(const OpenAccountCAMRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenAccountCAMOutcome>>();
    OpenAccountCAMAsync(
    request,
    [prom](
        const PostgresClient*,
        const OpenAccountCAMRequest&,
        OpenAccountCAMOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::OpenDBExtranetAccessOutcome PostgresClient::OpenDBExtranetAccess(const OpenDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "OpenDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenDBExtranetAccessResponse rsp = OpenDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenDBExtranetAccessOutcome(rsp);
        else
            return OpenDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return OpenDBExtranetAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::OpenDBExtranetAccessAsync(const OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenDBExtranetAccessRequest&;
    using Resp = OpenDBExtranetAccessResponse;

    DoRequestAsync<Req, Resp>(
        "OpenDBExtranetAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::OpenDBExtranetAccessOutcomeCallable PostgresClient::OpenDBExtranetAccessCallable(const OpenDBExtranetAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenDBExtranetAccessOutcome>>();
    OpenDBExtranetAccessAsync(
    request,
    [prom](
        const PostgresClient*,
        const OpenDBExtranetAccessRequest&,
        OpenDBExtranetAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::RebalanceReadOnlyGroupOutcome PostgresClient::RebalanceReadOnlyGroup(const RebalanceReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RebalanceReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebalanceReadOnlyGroupResponse rsp = RebalanceReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebalanceReadOnlyGroupOutcome(rsp);
        else
            return RebalanceReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return RebalanceReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::RebalanceReadOnlyGroupAsync(const RebalanceReadOnlyGroupRequest& request, const RebalanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RebalanceReadOnlyGroupRequest&;
    using Resp = RebalanceReadOnlyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "RebalanceReadOnlyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::RebalanceReadOnlyGroupOutcomeCallable PostgresClient::RebalanceReadOnlyGroupCallable(const RebalanceReadOnlyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RebalanceReadOnlyGroupOutcome>>();
    RebalanceReadOnlyGroupAsync(
    request,
    [prom](
        const PostgresClient*,
        const RebalanceReadOnlyGroupRequest&,
        RebalanceReadOnlyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::RefreshAccountPasswordOutcome PostgresClient::RefreshAccountPassword(const RefreshAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "RefreshAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefreshAccountPasswordResponse rsp = RefreshAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefreshAccountPasswordOutcome(rsp);
        else
            return RefreshAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return RefreshAccountPasswordOutcome(outcome.GetError());
    }
}

void PostgresClient::RefreshAccountPasswordAsync(const RefreshAccountPasswordRequest& request, const RefreshAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefreshAccountPasswordRequest&;
    using Resp = RefreshAccountPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "RefreshAccountPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::RefreshAccountPasswordOutcomeCallable PostgresClient::RefreshAccountPasswordCallable(const RefreshAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefreshAccountPasswordOutcome>>();
    RefreshAccountPasswordAsync(
    request,
    [prom](
        const PostgresClient*,
        const RefreshAccountPasswordRequest&,
        RefreshAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::RemoveDBInstanceFromReadOnlyGroupOutcome PostgresClient::RemoveDBInstanceFromReadOnlyGroup(const RemoveDBInstanceFromReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveDBInstanceFromReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveDBInstanceFromReadOnlyGroupResponse rsp = RemoveDBInstanceFromReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveDBInstanceFromReadOnlyGroupOutcome(rsp);
        else
            return RemoveDBInstanceFromReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveDBInstanceFromReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::RemoveDBInstanceFromReadOnlyGroupAsync(const RemoveDBInstanceFromReadOnlyGroupRequest& request, const RemoveDBInstanceFromReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveDBInstanceFromReadOnlyGroupRequest&;
    using Resp = RemoveDBInstanceFromReadOnlyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveDBInstanceFromReadOnlyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::RemoveDBInstanceFromReadOnlyGroupOutcomeCallable PostgresClient::RemoveDBInstanceFromReadOnlyGroupCallable(const RemoveDBInstanceFromReadOnlyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveDBInstanceFromReadOnlyGroupOutcome>>();
    RemoveDBInstanceFromReadOnlyGroupAsync(
    request,
    [prom](
        const PostgresClient*,
        const RemoveDBInstanceFromReadOnlyGroupRequest&,
        RemoveDBInstanceFromReadOnlyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::RenewInstanceOutcome PostgresClient::RenewInstance(const RenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstanceResponse rsp = RenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstanceOutcome(rsp);
        else
            return RenewInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::RenewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewInstanceRequest&;
    using Resp = RenewInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenewInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::RenewInstanceOutcomeCallable PostgresClient::RenewInstanceCallable(const RenewInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewInstanceOutcome>>();
    RenewInstanceAsync(
    request,
    [prom](
        const PostgresClient*,
        const RenewInstanceRequest&,
        RenewInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::ResetAccountPasswordOutcome PostgresClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAccountPasswordResponse rsp = ResetAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAccountPasswordOutcome(rsp);
        else
            return ResetAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetAccountPasswordOutcome(outcome.GetError());
    }
}

void PostgresClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetAccountPasswordRequest&;
    using Resp = ResetAccountPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetAccountPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::ResetAccountPasswordOutcomeCallable PostgresClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAccountPasswordOutcome>>();
    ResetAccountPasswordAsync(
    request,
    [prom](
        const PostgresClient*,
        const ResetAccountPasswordRequest&,
        ResetAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::RestartDBInstanceOutcome PostgresClient::RestartDBInstance(const RestartDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDBInstanceResponse rsp = RestartDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDBInstanceOutcome(rsp);
        else
            return RestartDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::RestartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartDBInstanceRequest&;
    using Resp = RestartDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RestartDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::RestartDBInstanceOutcomeCallable PostgresClient::RestartDBInstanceCallable(const RestartDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartDBInstanceOutcome>>();
    RestartDBInstanceAsync(
    request,
    [prom](
        const PostgresClient*,
        const RestartDBInstanceRequest&,
        RestartDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::RestoreDBInstanceObjectsOutcome PostgresClient::RestoreDBInstanceObjects(const RestoreDBInstanceObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreDBInstanceObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreDBInstanceObjectsResponse rsp = RestoreDBInstanceObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreDBInstanceObjectsOutcome(rsp);
        else
            return RestoreDBInstanceObjectsOutcome(o.GetError());
    }
    else
    {
        return RestoreDBInstanceObjectsOutcome(outcome.GetError());
    }
}

void PostgresClient::RestoreDBInstanceObjectsAsync(const RestoreDBInstanceObjectsRequest& request, const RestoreDBInstanceObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestoreDBInstanceObjectsRequest&;
    using Resp = RestoreDBInstanceObjectsResponse;

    DoRequestAsync<Req, Resp>(
        "RestoreDBInstanceObjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::RestoreDBInstanceObjectsOutcomeCallable PostgresClient::RestoreDBInstanceObjectsCallable(const RestoreDBInstanceObjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestoreDBInstanceObjectsOutcome>>();
    RestoreDBInstanceObjectsAsync(
    request,
    [prom](
        const PostgresClient*,
        const RestoreDBInstanceObjectsRequest&,
        RestoreDBInstanceObjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::SetAutoRenewFlagOutcome PostgresClient::SetAutoRenewFlag(const SetAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "SetAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAutoRenewFlagResponse rsp = SetAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAutoRenewFlagOutcome(rsp);
        else
            return SetAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return SetAutoRenewFlagOutcome(outcome.GetError());
    }
}

void PostgresClient::SetAutoRenewFlagAsync(const SetAutoRenewFlagRequest& request, const SetAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetAutoRenewFlagRequest&;
    using Resp = SetAutoRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "SetAutoRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::SetAutoRenewFlagOutcomeCallable PostgresClient::SetAutoRenewFlagCallable(const SetAutoRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetAutoRenewFlagOutcome>>();
    SetAutoRenewFlagAsync(
    request,
    [prom](
        const PostgresClient*,
        const SetAutoRenewFlagRequest&,
        SetAutoRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::SwitchDBInstancePrimaryOutcome PostgresClient::SwitchDBInstancePrimary(const SwitchDBInstancePrimaryRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDBInstancePrimary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDBInstancePrimaryResponse rsp = SwitchDBInstancePrimaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDBInstancePrimaryOutcome(rsp);
        else
            return SwitchDBInstancePrimaryOutcome(o.GetError());
    }
    else
    {
        return SwitchDBInstancePrimaryOutcome(outcome.GetError());
    }
}

void PostgresClient::SwitchDBInstancePrimaryAsync(const SwitchDBInstancePrimaryRequest& request, const SwitchDBInstancePrimaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchDBInstancePrimaryRequest&;
    using Resp = SwitchDBInstancePrimaryResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchDBInstancePrimary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::SwitchDBInstancePrimaryOutcomeCallable PostgresClient::SwitchDBInstancePrimaryCallable(const SwitchDBInstancePrimaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchDBInstancePrimaryOutcome>>();
    SwitchDBInstancePrimaryAsync(
    request,
    [prom](
        const PostgresClient*,
        const SwitchDBInstancePrimaryRequest&,
        SwitchDBInstancePrimaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::UnlockAccountOutcome PostgresClient::UnlockAccount(const UnlockAccountRequest &request)
{
    auto outcome = MakeRequest(request, "UnlockAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlockAccountResponse rsp = UnlockAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlockAccountOutcome(rsp);
        else
            return UnlockAccountOutcome(o.GetError());
    }
    else
    {
        return UnlockAccountOutcome(outcome.GetError());
    }
}

void PostgresClient::UnlockAccountAsync(const UnlockAccountRequest& request, const UnlockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnlockAccountRequest&;
    using Resp = UnlockAccountResponse;

    DoRequestAsync<Req, Resp>(
        "UnlockAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::UnlockAccountOutcomeCallable PostgresClient::UnlockAccountCallable(const UnlockAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnlockAccountOutcome>>();
    UnlockAccountAsync(
    request,
    [prom](
        const PostgresClient*,
        const UnlockAccountRequest&,
        UnlockAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::UpgradeDBInstanceKernelVersionOutcome PostgresClient::UpgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstanceKernelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceKernelVersionResponse rsp = UpgradeDBInstanceKernelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceKernelVersionOutcome(rsp);
        else
            return UpgradeDBInstanceKernelVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceKernelVersionOutcome(outcome.GetError());
    }
}

void PostgresClient::UpgradeDBInstanceKernelVersionAsync(const UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDBInstanceKernelVersionRequest&;
    using Resp = UpgradeDBInstanceKernelVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDBInstanceKernelVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::UpgradeDBInstanceKernelVersionOutcomeCallable PostgresClient::UpgradeDBInstanceKernelVersionCallable(const UpgradeDBInstanceKernelVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDBInstanceKernelVersionOutcome>>();
    UpgradeDBInstanceKernelVersionAsync(
    request,
    [prom](
        const PostgresClient*,
        const UpgradeDBInstanceKernelVersionRequest&,
        UpgradeDBInstanceKernelVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PostgresClient::UpgradeDBInstanceMajorVersionOutcome PostgresClient::UpgradeDBInstanceMajorVersion(const UpgradeDBInstanceMajorVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstanceMajorVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceMajorVersionResponse rsp = UpgradeDBInstanceMajorVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceMajorVersionOutcome(rsp);
        else
            return UpgradeDBInstanceMajorVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceMajorVersionOutcome(outcome.GetError());
    }
}

void PostgresClient::UpgradeDBInstanceMajorVersionAsync(const UpgradeDBInstanceMajorVersionRequest& request, const UpgradeDBInstanceMajorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDBInstanceMajorVersionRequest&;
    using Resp = UpgradeDBInstanceMajorVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDBInstanceMajorVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PostgresClient::UpgradeDBInstanceMajorVersionOutcomeCallable PostgresClient::UpgradeDBInstanceMajorVersionCallable(const UpgradeDBInstanceMajorVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDBInstanceMajorVersionOutcome>>();
    UpgradeDBInstanceMajorVersionAsync(
    request,
    [prom](
        const PostgresClient*,
        const UpgradeDBInstanceMajorVersionRequest&,
        UpgradeDBInstanceMajorVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


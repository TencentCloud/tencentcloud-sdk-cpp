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

#include <tencentcloud/mariadb/v20170312/MariadbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mariadb::V20170312;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "mariadb.tencentcloudapi.com";
}

MariadbClient::MariadbClient(const Credential &credential, const string &region) :
    MariadbClient(credential, region, ClientProfile())
{
}

MariadbClient::MariadbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MariadbClient::ActivateHourDBInstanceOutcome MariadbClient::ActivateHourDBInstance(const ActivateHourDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateHourDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateHourDBInstanceResponse rsp = ActivateHourDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateHourDBInstanceOutcome(rsp);
        else
            return ActivateHourDBInstanceOutcome(o.GetError());
    }
    else
    {
        return ActivateHourDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::ActivateHourDBInstanceAsync(const ActivateHourDBInstanceRequest& request, const ActivateHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ActivateHourDBInstanceRequest&;
    using Resp = ActivateHourDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ActivateHourDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ActivateHourDBInstanceOutcomeCallable MariadbClient::ActivateHourDBInstanceCallable(const ActivateHourDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActivateHourDBInstanceOutcome>>();
    ActivateHourDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const ActivateHourDBInstanceRequest&,
        ActivateHourDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::AssociateSecurityGroupsOutcome MariadbClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateSecurityGroupsResponse rsp = AssociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateSecurityGroupsOutcome(rsp);
        else
            return AssociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void MariadbClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateSecurityGroupsRequest&;
    using Resp = AssociateSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::AssociateSecurityGroupsOutcomeCallable MariadbClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupsOutcome>>();
    AssociateSecurityGroupsAsync(
    request,
    [prom](
        const MariadbClient*,
        const AssociateSecurityGroupsRequest&,
        AssociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::CancelDcnJobOutcome MariadbClient::CancelDcnJob(const CancelDcnJobRequest &request)
{
    auto outcome = MakeRequest(request, "CancelDcnJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelDcnJobResponse rsp = CancelDcnJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelDcnJobOutcome(rsp);
        else
            return CancelDcnJobOutcome(o.GetError());
    }
    else
    {
        return CancelDcnJobOutcome(outcome.GetError());
    }
}

void MariadbClient::CancelDcnJobAsync(const CancelDcnJobRequest& request, const CancelDcnJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelDcnJobRequest&;
    using Resp = CancelDcnJobResponse;

    DoRequestAsync<Req, Resp>(
        "CancelDcnJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::CancelDcnJobOutcomeCallable MariadbClient::CancelDcnJobCallable(const CancelDcnJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelDcnJobOutcome>>();
    CancelDcnJobAsync(
    request,
    [prom](
        const MariadbClient*,
        const CancelDcnJobRequest&,
        CancelDcnJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::CloneAccountOutcome MariadbClient::CloneAccount(const CloneAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CloneAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneAccountResponse rsp = CloneAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneAccountOutcome(rsp);
        else
            return CloneAccountOutcome(o.GetError());
    }
    else
    {
        return CloneAccountOutcome(outcome.GetError());
    }
}

void MariadbClient::CloneAccountAsync(const CloneAccountRequest& request, const CloneAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloneAccountRequest&;
    using Resp = CloneAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CloneAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::CloneAccountOutcomeCallable MariadbClient::CloneAccountCallable(const CloneAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloneAccountOutcome>>();
    CloneAccountAsync(
    request,
    [prom](
        const MariadbClient*,
        const CloneAccountRequest&,
        CloneAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::CloseDBExtranetAccessOutcome MariadbClient::CloseDBExtranetAccess(const CloseDBExtranetAccessRequest &request)
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

void MariadbClient::CloseDBExtranetAccessAsync(const CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::CloseDBExtranetAccessOutcomeCallable MariadbClient::CloseDBExtranetAccessCallable(const CloseDBExtranetAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseDBExtranetAccessOutcome>>();
    CloseDBExtranetAccessAsync(
    request,
    [prom](
        const MariadbClient*,
        const CloseDBExtranetAccessRequest&,
        CloseDBExtranetAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::CopyAccountPrivilegesOutcome MariadbClient::CopyAccountPrivileges(const CopyAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "CopyAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyAccountPrivilegesResponse rsp = CopyAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyAccountPrivilegesOutcome(rsp);
        else
            return CopyAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return CopyAccountPrivilegesOutcome(outcome.GetError());
    }
}

void MariadbClient::CopyAccountPrivilegesAsync(const CopyAccountPrivilegesRequest& request, const CopyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyAccountPrivilegesRequest&;
    using Resp = CopyAccountPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "CopyAccountPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::CopyAccountPrivilegesOutcomeCallable MariadbClient::CopyAccountPrivilegesCallable(const CopyAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyAccountPrivilegesOutcome>>();
    CopyAccountPrivilegesAsync(
    request,
    [prom](
        const MariadbClient*,
        const CopyAccountPrivilegesRequest&,
        CopyAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::CreateAccountOutcome MariadbClient::CreateAccount(const CreateAccountRequest &request)
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

void MariadbClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::CreateAccountOutcomeCallable MariadbClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccountOutcome>>();
    CreateAccountAsync(
    request,
    [prom](
        const MariadbClient*,
        const CreateAccountRequest&,
        CreateAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::CreateDBInstanceOutcome MariadbClient::CreateDBInstance(const CreateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceResponse rsp = CreateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceOutcome(rsp);
        else
            return CreateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBInstanceRequest&;
    using Resp = CreateDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::CreateDBInstanceOutcomeCallable MariadbClient::CreateDBInstanceCallable(const CreateDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBInstanceOutcome>>();
    CreateDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const CreateDBInstanceRequest&,
        CreateDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::CreateDedicatedClusterDBInstanceOutcome MariadbClient::CreateDedicatedClusterDBInstance(const CreateDedicatedClusterDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDedicatedClusterDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDedicatedClusterDBInstanceResponse rsp = CreateDedicatedClusterDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDedicatedClusterDBInstanceOutcome(rsp);
        else
            return CreateDedicatedClusterDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDedicatedClusterDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::CreateDedicatedClusterDBInstanceAsync(const CreateDedicatedClusterDBInstanceRequest& request, const CreateDedicatedClusterDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDedicatedClusterDBInstanceRequest&;
    using Resp = CreateDedicatedClusterDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDedicatedClusterDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::CreateDedicatedClusterDBInstanceOutcomeCallable MariadbClient::CreateDedicatedClusterDBInstanceCallable(const CreateDedicatedClusterDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDedicatedClusterDBInstanceOutcome>>();
    CreateDedicatedClusterDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const CreateDedicatedClusterDBInstanceRequest&,
        CreateDedicatedClusterDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::CreateHourDBInstanceOutcome MariadbClient::CreateHourDBInstance(const CreateHourDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHourDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHourDBInstanceResponse rsp = CreateHourDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHourDBInstanceOutcome(rsp);
        else
            return CreateHourDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateHourDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::CreateHourDBInstanceAsync(const CreateHourDBInstanceRequest& request, const CreateHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHourDBInstanceRequest&;
    using Resp = CreateHourDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHourDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::CreateHourDBInstanceOutcomeCallable MariadbClient::CreateHourDBInstanceCallable(const CreateHourDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHourDBInstanceOutcome>>();
    CreateHourDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const CreateHourDBInstanceRequest&,
        CreateHourDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::CreateTmpInstancesOutcome MariadbClient::CreateTmpInstances(const CreateTmpInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTmpInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTmpInstancesResponse rsp = CreateTmpInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTmpInstancesOutcome(rsp);
        else
            return CreateTmpInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateTmpInstancesOutcome(outcome.GetError());
    }
}

void MariadbClient::CreateTmpInstancesAsync(const CreateTmpInstancesRequest& request, const CreateTmpInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTmpInstancesRequest&;
    using Resp = CreateTmpInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTmpInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::CreateTmpInstancesOutcomeCallable MariadbClient::CreateTmpInstancesCallable(const CreateTmpInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTmpInstancesOutcome>>();
    CreateTmpInstancesAsync(
    request,
    [prom](
        const MariadbClient*,
        const CreateTmpInstancesRequest&,
        CreateTmpInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DeleteAccountOutcome MariadbClient::DeleteAccount(const DeleteAccountRequest &request)
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

void MariadbClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::DeleteAccountOutcomeCallable MariadbClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccountOutcome>>();
    DeleteAccountAsync(
    request,
    [prom](
        const MariadbClient*,
        const DeleteAccountRequest&,
        DeleteAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeAccountPrivilegesOutcome MariadbClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
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

void MariadbClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::DescribeAccountPrivilegesOutcomeCallable MariadbClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountPrivilegesOutcome>>();
    DescribeAccountPrivilegesAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeAccountPrivilegesRequest&,
        DescribeAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeAccountsOutcome MariadbClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void MariadbClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::DescribeAccountsOutcomeCallable MariadbClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountsOutcome>>();
    DescribeAccountsAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeAccountsRequest&,
        DescribeAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeBackupConfigsOutcome MariadbClient::DescribeBackupConfigs(const DescribeBackupConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupConfigsResponse rsp = DescribeBackupConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupConfigsOutcome(rsp);
        else
            return DescribeBackupConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupConfigsOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeBackupConfigsAsync(const DescribeBackupConfigsRequest& request, const DescribeBackupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupConfigsRequest&;
    using Resp = DescribeBackupConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeBackupConfigsOutcomeCallable MariadbClient::DescribeBackupConfigsCallable(const DescribeBackupConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupConfigsOutcome>>();
    DescribeBackupConfigsAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeBackupConfigsRequest&,
        DescribeBackupConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeBackupFilesOutcome MariadbClient::DescribeBackupFiles(const DescribeBackupFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupFilesResponse rsp = DescribeBackupFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupFilesOutcome(rsp);
        else
            return DescribeBackupFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupFilesOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeBackupFilesAsync(const DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupFilesRequest&;
    using Resp = DescribeBackupFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeBackupFilesOutcomeCallable MariadbClient::DescribeBackupFilesCallable(const DescribeBackupFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupFilesOutcome>>();
    DescribeBackupFilesAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeBackupFilesRequest&,
        DescribeBackupFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeBackupTimeOutcome MariadbClient::DescribeBackupTime(const DescribeBackupTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupTimeResponse rsp = DescribeBackupTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupTimeOutcome(rsp);
        else
            return DescribeBackupTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupTimeOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeBackupTimeAsync(const DescribeBackupTimeRequest& request, const DescribeBackupTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupTimeRequest&;
    using Resp = DescribeBackupTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeBackupTimeOutcomeCallable MariadbClient::DescribeBackupTimeCallable(const DescribeBackupTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupTimeOutcome>>();
    DescribeBackupTimeAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeBackupTimeRequest&,
        DescribeBackupTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeBinlogTimeOutcome MariadbClient::DescribeBinlogTime(const DescribeBinlogTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBinlogTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBinlogTimeResponse rsp = DescribeBinlogTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBinlogTimeOutcome(rsp);
        else
            return DescribeBinlogTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeBinlogTimeOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeBinlogTimeAsync(const DescribeBinlogTimeRequest& request, const DescribeBinlogTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBinlogTimeRequest&;
    using Resp = DescribeBinlogTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBinlogTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeBinlogTimeOutcomeCallable MariadbClient::DescribeBinlogTimeCallable(const DescribeBinlogTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBinlogTimeOutcome>>();
    DescribeBinlogTimeAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeBinlogTimeRequest&,
        DescribeBinlogTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDBEncryptAttributesOutcome MariadbClient::DescribeDBEncryptAttributes(const DescribeDBEncryptAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBEncryptAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBEncryptAttributesResponse rsp = DescribeDBEncryptAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBEncryptAttributesOutcome(rsp);
        else
            return DescribeDBEncryptAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBEncryptAttributesOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBEncryptAttributesAsync(const DescribeDBEncryptAttributesRequest& request, const DescribeDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBEncryptAttributesRequest&;
    using Resp = DescribeDBEncryptAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBEncryptAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDBEncryptAttributesOutcomeCallable MariadbClient::DescribeDBEncryptAttributesCallable(const DescribeDBEncryptAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBEncryptAttributesOutcome>>();
    DescribeDBEncryptAttributesAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDBEncryptAttributesRequest&,
        DescribeDBEncryptAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDBInstanceDetailOutcome MariadbClient::DescribeDBInstanceDetail(const DescribeDBInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceDetailResponse rsp = DescribeDBInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceDetailOutcome(rsp);
        else
            return DescribeDBInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceDetailOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBInstanceDetailAsync(const DescribeDBInstanceDetailRequest& request, const DescribeDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceDetailRequest&;
    using Resp = DescribeDBInstanceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDBInstanceDetailOutcomeCallable MariadbClient::DescribeDBInstanceDetailCallable(const DescribeDBInstanceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceDetailOutcome>>();
    DescribeDBInstanceDetailAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDBInstanceDetailRequest&,
        DescribeDBInstanceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDBInstanceSpecsOutcome MariadbClient::DescribeDBInstanceSpecs(const DescribeDBInstanceSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceSpecsResponse rsp = DescribeDBInstanceSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceSpecsOutcome(rsp);
        else
            return DescribeDBInstanceSpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceSpecsOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBInstanceSpecsAsync(const DescribeDBInstanceSpecsRequest& request, const DescribeDBInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceSpecsRequest&;
    using Resp = DescribeDBInstanceSpecsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceSpecs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDBInstanceSpecsOutcomeCallable MariadbClient::DescribeDBInstanceSpecsCallable(const DescribeDBInstanceSpecsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceSpecsOutcome>>();
    DescribeDBInstanceSpecsAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDBInstanceSpecsRequest&,
        DescribeDBInstanceSpecsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDBInstancesOutcome MariadbClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
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

void MariadbClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::DescribeDBInstancesOutcomeCallable MariadbClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstancesOutcome>>();
    DescribeDBInstancesAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDBInstancesRequest&,
        DescribeDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDBLogFilesOutcome MariadbClient::DescribeDBLogFiles(const DescribeDBLogFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBLogFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBLogFilesResponse rsp = DescribeDBLogFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBLogFilesOutcome(rsp);
        else
            return DescribeDBLogFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBLogFilesOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBLogFilesAsync(const DescribeDBLogFilesRequest& request, const DescribeDBLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBLogFilesRequest&;
    using Resp = DescribeDBLogFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBLogFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDBLogFilesOutcomeCallable MariadbClient::DescribeDBLogFilesCallable(const DescribeDBLogFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBLogFilesOutcome>>();
    DescribeDBLogFilesAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDBLogFilesRequest&,
        DescribeDBLogFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDBParametersOutcome MariadbClient::DescribeDBParameters(const DescribeDBParametersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBParametersResponse rsp = DescribeDBParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBParametersOutcome(rsp);
        else
            return DescribeDBParametersOutcome(o.GetError());
    }
    else
    {
        return DescribeDBParametersOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBParametersRequest&;
    using Resp = DescribeDBParametersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBParameters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDBParametersOutcomeCallable MariadbClient::DescribeDBParametersCallable(const DescribeDBParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBParametersOutcome>>();
    DescribeDBParametersAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDBParametersRequest&,
        DescribeDBParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDBSecurityGroupsOutcome MariadbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSecurityGroupsResponse rsp = DescribeDBSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSecurityGroupsOutcome(rsp);
        else
            return DescribeDBSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSecurityGroupsOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSecurityGroupsRequest&;
    using Resp = DescribeDBSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDBSecurityGroupsOutcomeCallable MariadbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSecurityGroupsOutcome>>();
    DescribeDBSecurityGroupsAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDBSecurityGroupsRequest&,
        DescribeDBSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDBSlowLogsOutcome MariadbClient::DescribeDBSlowLogs(const DescribeDBSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSlowLogsResponse rsp = DescribeDBSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSlowLogsOutcome(rsp);
        else
            return DescribeDBSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSlowLogsOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBSlowLogsAsync(const DescribeDBSlowLogsRequest& request, const DescribeDBSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSlowLogsRequest&;
    using Resp = DescribeDBSlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDBSlowLogsOutcomeCallable MariadbClient::DescribeDBSlowLogsCallable(const DescribeDBSlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSlowLogsOutcome>>();
    DescribeDBSlowLogsAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDBSlowLogsRequest&,
        DescribeDBSlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDBSyncModeOutcome MariadbClient::DescribeDBSyncMode(const DescribeDBSyncModeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSyncMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSyncModeResponse rsp = DescribeDBSyncModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSyncModeOutcome(rsp);
        else
            return DescribeDBSyncModeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSyncModeOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBSyncModeAsync(const DescribeDBSyncModeRequest& request, const DescribeDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSyncModeRequest&;
    using Resp = DescribeDBSyncModeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSyncMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDBSyncModeOutcomeCallable MariadbClient::DescribeDBSyncModeCallable(const DescribeDBSyncModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSyncModeOutcome>>();
    DescribeDBSyncModeAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDBSyncModeRequest&,
        DescribeDBSyncModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDBTmpInstancesOutcome MariadbClient::DescribeDBTmpInstances(const DescribeDBTmpInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBTmpInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBTmpInstancesResponse rsp = DescribeDBTmpInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBTmpInstancesOutcome(rsp);
        else
            return DescribeDBTmpInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBTmpInstancesOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDBTmpInstancesAsync(const DescribeDBTmpInstancesRequest& request, const DescribeDBTmpInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBTmpInstancesRequest&;
    using Resp = DescribeDBTmpInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBTmpInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDBTmpInstancesOutcomeCallable MariadbClient::DescribeDBTmpInstancesCallable(const DescribeDBTmpInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBTmpInstancesOutcome>>();
    DescribeDBTmpInstancesAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDBTmpInstancesRequest&,
        DescribeDBTmpInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDatabaseObjectsOutcome MariadbClient::DescribeDatabaseObjects(const DescribeDatabaseObjectsRequest &request)
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

void MariadbClient::DescribeDatabaseObjectsAsync(const DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::DescribeDatabaseObjectsOutcomeCallable MariadbClient::DescribeDatabaseObjectsCallable(const DescribeDatabaseObjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseObjectsOutcome>>();
    DescribeDatabaseObjectsAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDatabaseObjectsRequest&,
        DescribeDatabaseObjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDatabaseTableOutcome MariadbClient::DescribeDatabaseTable(const DescribeDatabaseTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseTableResponse rsp = DescribeDatabaseTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseTableOutcome(rsp);
        else
            return DescribeDatabaseTableOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseTableOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDatabaseTableAsync(const DescribeDatabaseTableRequest& request, const DescribeDatabaseTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseTableRequest&;
    using Resp = DescribeDatabaseTableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDatabaseTableOutcomeCallable MariadbClient::DescribeDatabaseTableCallable(const DescribeDatabaseTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseTableOutcome>>();
    DescribeDatabaseTableAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDatabaseTableRequest&,
        DescribeDatabaseTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDatabasesOutcome MariadbClient::DescribeDatabases(const DescribeDatabasesRequest &request)
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

void MariadbClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::DescribeDatabasesOutcomeCallable MariadbClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabasesOutcome>>();
    DescribeDatabasesAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDatabasesRequest&,
        DescribeDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeDcnDetailOutcome MariadbClient::DescribeDcnDetail(const DescribeDcnDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDcnDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDcnDetailResponse rsp = DescribeDcnDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDcnDetailOutcome(rsp);
        else
            return DescribeDcnDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDcnDetailOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeDcnDetailAsync(const DescribeDcnDetailRequest& request, const DescribeDcnDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDcnDetailRequest&;
    using Resp = DescribeDcnDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDcnDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeDcnDetailOutcomeCallable MariadbClient::DescribeDcnDetailCallable(const DescribeDcnDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDcnDetailOutcome>>();
    DescribeDcnDetailAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeDcnDetailRequest&,
        DescribeDcnDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeFileDownloadUrlOutcome MariadbClient::DescribeFileDownloadUrl(const DescribeFileDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileDownloadUrlResponse rsp = DescribeFileDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileDownloadUrlOutcome(rsp);
        else
            return DescribeFileDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeFileDownloadUrlOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeFileDownloadUrlAsync(const DescribeFileDownloadUrlRequest& request, const DescribeFileDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileDownloadUrlRequest&;
    using Resp = DescribeFileDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeFileDownloadUrlOutcomeCallable MariadbClient::DescribeFileDownloadUrlCallable(const DescribeFileDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileDownloadUrlOutcome>>();
    DescribeFileDownloadUrlAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeFileDownloadUrlRequest&,
        DescribeFileDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeFlowOutcome MariadbClient::DescribeFlow(const DescribeFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowResponse rsp = DescribeFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowOutcome(rsp);
        else
            return DescribeFlowOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowRequest&;
    using Resp = DescribeFlowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeFlowOutcomeCallable MariadbClient::DescribeFlowCallable(const DescribeFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowOutcome>>();
    DescribeFlowAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeFlowRequest&,
        DescribeFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeInstanceNodeInfoOutcome MariadbClient::DescribeInstanceNodeInfo(const DescribeInstanceNodeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodeInfoResponse rsp = DescribeInstanceNodeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodeInfoOutcome(rsp);
        else
            return DescribeInstanceNodeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodeInfoOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeInstanceNodeInfoAsync(const DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceNodeInfoRequest&;
    using Resp = DescribeInstanceNodeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceNodeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeInstanceNodeInfoOutcomeCallable MariadbClient::DescribeInstanceNodeInfoCallable(const DescribeInstanceNodeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceNodeInfoOutcome>>();
    DescribeInstanceNodeInfoAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeInstanceNodeInfoRequest&,
        DescribeInstanceNodeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeInstanceSSLAttributesOutcome MariadbClient::DescribeInstanceSSLAttributes(const DescribeInstanceSSLAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSSLAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSSLAttributesResponse rsp = DescribeInstanceSSLAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSSLAttributesOutcome(rsp);
        else
            return DescribeInstanceSSLAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSSLAttributesOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeInstanceSSLAttributesAsync(const DescribeInstanceSSLAttributesRequest& request, const DescribeInstanceSSLAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceSSLAttributesRequest&;
    using Resp = DescribeInstanceSSLAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceSSLAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeInstanceSSLAttributesOutcomeCallable MariadbClient::DescribeInstanceSSLAttributesCallable(const DescribeInstanceSSLAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceSSLAttributesOutcome>>();
    DescribeInstanceSSLAttributesAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeInstanceSSLAttributesRequest&,
        DescribeInstanceSSLAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeLogFileRetentionPeriodOutcome MariadbClient::DescribeLogFileRetentionPeriod(const DescribeLogFileRetentionPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogFileRetentionPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogFileRetentionPeriodResponse rsp = DescribeLogFileRetentionPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogFileRetentionPeriodOutcome(rsp);
        else
            return DescribeLogFileRetentionPeriodOutcome(o.GetError());
    }
    else
    {
        return DescribeLogFileRetentionPeriodOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeLogFileRetentionPeriodAsync(const DescribeLogFileRetentionPeriodRequest& request, const DescribeLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogFileRetentionPeriodRequest&;
    using Resp = DescribeLogFileRetentionPeriodResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogFileRetentionPeriod", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeLogFileRetentionPeriodOutcomeCallable MariadbClient::DescribeLogFileRetentionPeriodCallable(const DescribeLogFileRetentionPeriodRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogFileRetentionPeriodOutcome>>();
    DescribeLogFileRetentionPeriodAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeLogFileRetentionPeriodRequest&,
        DescribeLogFileRetentionPeriodOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeOrdersOutcome MariadbClient::DescribeOrders(const DescribeOrdersRequest &request)
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

void MariadbClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::DescribeOrdersOutcomeCallable MariadbClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrdersOutcome>>();
    DescribeOrdersAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeOrdersRequest&,
        DescribeOrdersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribePriceOutcome MariadbClient::DescribePrice(const DescribePriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePriceResponse rsp = DescribePriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePriceOutcome(rsp);
        else
            return DescribePriceOutcome(o.GetError());
    }
    else
    {
        return DescribePriceOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribePriceAsync(const DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePriceRequest&;
    using Resp = DescribePriceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribePriceOutcomeCallable MariadbClient::DescribePriceCallable(const DescribePriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePriceOutcome>>();
    DescribePriceAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribePriceRequest&,
        DescribePriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeProcessListOutcome MariadbClient::DescribeProcessList(const DescribeProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProcessListResponse rsp = DescribeProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProcessListOutcome(rsp);
        else
            return DescribeProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeProcessListOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeProcessListAsync(const DescribeProcessListRequest& request, const DescribeProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProcessListRequest&;
    using Resp = DescribeProcessListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProcessList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeProcessListOutcomeCallable MariadbClient::DescribeProcessListCallable(const DescribeProcessListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProcessListOutcome>>();
    DescribeProcessListAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeProcessListRequest&,
        DescribeProcessListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeProjectSecurityGroupsOutcome MariadbClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectSecurityGroupsResponse rsp = DescribeProjectSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectSecurityGroupsOutcome(rsp);
        else
            return DescribeProjectSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectSecurityGroupsOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectSecurityGroupsRequest&;
    using Resp = DescribeProjectSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeProjectSecurityGroupsOutcomeCallable MariadbClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectSecurityGroupsOutcome>>();
    DescribeProjectSecurityGroupsAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeProjectSecurityGroupsRequest&,
        DescribeProjectSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeRenewalPriceOutcome MariadbClient::DescribeRenewalPrice(const DescribeRenewalPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRenewalPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRenewalPriceResponse rsp = DescribeRenewalPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRenewalPriceOutcome(rsp);
        else
            return DescribeRenewalPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeRenewalPriceOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeRenewalPriceAsync(const DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRenewalPriceRequest&;
    using Resp = DescribeRenewalPriceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRenewalPrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeRenewalPriceOutcomeCallable MariadbClient::DescribeRenewalPriceCallable(const DescribeRenewalPriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRenewalPriceOutcome>>();
    DescribeRenewalPriceAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeRenewalPriceRequest&,
        DescribeRenewalPriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeSaleInfoOutcome MariadbClient::DescribeSaleInfo(const DescribeSaleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSaleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSaleInfoResponse rsp = DescribeSaleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSaleInfoOutcome(rsp);
        else
            return DescribeSaleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSaleInfoOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeSaleInfoAsync(const DescribeSaleInfoRequest& request, const DescribeSaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSaleInfoRequest&;
    using Resp = DescribeSaleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSaleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeSaleInfoOutcomeCallable MariadbClient::DescribeSaleInfoCallable(const DescribeSaleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSaleInfoOutcome>>();
    DescribeSaleInfoAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeSaleInfoRequest&,
        DescribeSaleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DescribeUpgradePriceOutcome MariadbClient::DescribeUpgradePrice(const DescribeUpgradePriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpgradePrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpgradePriceResponse rsp = DescribeUpgradePriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpgradePriceOutcome(rsp);
        else
            return DescribeUpgradePriceOutcome(o.GetError());
    }
    else
    {
        return DescribeUpgradePriceOutcome(outcome.GetError());
    }
}

void MariadbClient::DescribeUpgradePriceAsync(const DescribeUpgradePriceRequest& request, const DescribeUpgradePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUpgradePriceRequest&;
    using Resp = DescribeUpgradePriceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUpgradePrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DescribeUpgradePriceOutcomeCallable MariadbClient::DescribeUpgradePriceCallable(const DescribeUpgradePriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUpgradePriceOutcome>>();
    DescribeUpgradePriceAsync(
    request,
    [prom](
        const MariadbClient*,
        const DescribeUpgradePriceRequest&,
        DescribeUpgradePriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DestroyDBInstanceOutcome MariadbClient::DestroyDBInstance(const DestroyDBInstanceRequest &request)
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

void MariadbClient::DestroyDBInstanceAsync(const DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::DestroyDBInstanceOutcomeCallable MariadbClient::DestroyDBInstanceCallable(const DestroyDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyDBInstanceOutcome>>();
    DestroyDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const DestroyDBInstanceRequest&,
        DestroyDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DestroyHourDBInstanceOutcome MariadbClient::DestroyHourDBInstance(const DestroyHourDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyHourDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyHourDBInstanceResponse rsp = DestroyHourDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyHourDBInstanceOutcome(rsp);
        else
            return DestroyHourDBInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyHourDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::DestroyHourDBInstanceAsync(const DestroyHourDBInstanceRequest& request, const DestroyHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyHourDBInstanceRequest&;
    using Resp = DestroyHourDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyHourDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DestroyHourDBInstanceOutcomeCallable MariadbClient::DestroyHourDBInstanceCallable(const DestroyHourDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyHourDBInstanceOutcome>>();
    DestroyHourDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const DestroyHourDBInstanceRequest&,
        DestroyHourDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::DisassociateSecurityGroupsOutcome MariadbClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateSecurityGroupsResponse rsp = DisassociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateSecurityGroupsOutcome(rsp);
        else
            return DisassociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void MariadbClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateSecurityGroupsRequest&;
    using Resp = DisassociateSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::DisassociateSecurityGroupsOutcomeCallable MariadbClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupsOutcome>>();
    DisassociateSecurityGroupsAsync(
    request,
    [prom](
        const MariadbClient*,
        const DisassociateSecurityGroupsRequest&,
        DisassociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::FlushBinlogOutcome MariadbClient::FlushBinlog(const FlushBinlogRequest &request)
{
    auto outcome = MakeRequest(request, "FlushBinlog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FlushBinlogResponse rsp = FlushBinlogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FlushBinlogOutcome(rsp);
        else
            return FlushBinlogOutcome(o.GetError());
    }
    else
    {
        return FlushBinlogOutcome(outcome.GetError());
    }
}

void MariadbClient::FlushBinlogAsync(const FlushBinlogRequest& request, const FlushBinlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FlushBinlogRequest&;
    using Resp = FlushBinlogResponse;

    DoRequestAsync<Req, Resp>(
        "FlushBinlog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::FlushBinlogOutcomeCallable MariadbClient::FlushBinlogCallable(const FlushBinlogRequest &request)
{
    const auto prom = std::make_shared<std::promise<FlushBinlogOutcome>>();
    FlushBinlogAsync(
    request,
    [prom](
        const MariadbClient*,
        const FlushBinlogRequest&,
        FlushBinlogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::GrantAccountPrivilegesOutcome MariadbClient::GrantAccountPrivileges(const GrantAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "GrantAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantAccountPrivilegesResponse rsp = GrantAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantAccountPrivilegesOutcome(rsp);
        else
            return GrantAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return GrantAccountPrivilegesOutcome(outcome.GetError());
    }
}

void MariadbClient::GrantAccountPrivilegesAsync(const GrantAccountPrivilegesRequest& request, const GrantAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GrantAccountPrivilegesRequest&;
    using Resp = GrantAccountPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "GrantAccountPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::GrantAccountPrivilegesOutcomeCallable MariadbClient::GrantAccountPrivilegesCallable(const GrantAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GrantAccountPrivilegesOutcome>>();
    GrantAccountPrivilegesAsync(
    request,
    [prom](
        const MariadbClient*,
        const GrantAccountPrivilegesRequest&,
        GrantAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::InitDBInstancesOutcome MariadbClient::InitDBInstances(const InitDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InitDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitDBInstancesResponse rsp = InitDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitDBInstancesOutcome(rsp);
        else
            return InitDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InitDBInstancesOutcome(outcome.GetError());
    }
}

void MariadbClient::InitDBInstancesAsync(const InitDBInstancesRequest& request, const InitDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InitDBInstancesRequest&;
    using Resp = InitDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InitDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::InitDBInstancesOutcomeCallable MariadbClient::InitDBInstancesCallable(const InitDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InitDBInstancesOutcome>>();
    InitDBInstancesAsync(
    request,
    [prom](
        const MariadbClient*,
        const InitDBInstancesRequest&,
        InitDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::IsolateDBInstanceOutcome MariadbClient::IsolateDBInstance(const IsolateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDBInstanceResponse rsp = IsolateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDBInstanceOutcome(rsp);
        else
            return IsolateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::IsolateDBInstanceAsync(const IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateDBInstanceRequest&;
    using Resp = IsolateDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::IsolateDBInstanceOutcomeCallable MariadbClient::IsolateDBInstanceCallable(const IsolateDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateDBInstanceOutcome>>();
    IsolateDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const IsolateDBInstanceRequest&,
        IsolateDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::IsolateDedicatedDBInstanceOutcome MariadbClient::IsolateDedicatedDBInstance(const IsolateDedicatedDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDedicatedDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDedicatedDBInstanceResponse rsp = IsolateDedicatedDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDedicatedDBInstanceOutcome(rsp);
        else
            return IsolateDedicatedDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateDedicatedDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::IsolateDedicatedDBInstanceAsync(const IsolateDedicatedDBInstanceRequest& request, const IsolateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateDedicatedDBInstanceRequest&;
    using Resp = IsolateDedicatedDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateDedicatedDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::IsolateDedicatedDBInstanceOutcomeCallable MariadbClient::IsolateDedicatedDBInstanceCallable(const IsolateDedicatedDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateDedicatedDBInstanceOutcome>>();
    IsolateDedicatedDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const IsolateDedicatedDBInstanceRequest&,
        IsolateDedicatedDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::IsolateHourDBInstanceOutcome MariadbClient::IsolateHourDBInstance(const IsolateHourDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateHourDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateHourDBInstanceResponse rsp = IsolateHourDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateHourDBInstanceOutcome(rsp);
        else
            return IsolateHourDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateHourDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::IsolateHourDBInstanceAsync(const IsolateHourDBInstanceRequest& request, const IsolateHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateHourDBInstanceRequest&;
    using Resp = IsolateHourDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateHourDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::IsolateHourDBInstanceOutcomeCallable MariadbClient::IsolateHourDBInstanceCallable(const IsolateHourDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateHourDBInstanceOutcome>>();
    IsolateHourDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const IsolateHourDBInstanceRequest&,
        IsolateHourDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::KillSessionOutcome MariadbClient::KillSession(const KillSessionRequest &request)
{
    auto outcome = MakeRequest(request, "KillSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillSessionResponse rsp = KillSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillSessionOutcome(rsp);
        else
            return KillSessionOutcome(o.GetError());
    }
    else
    {
        return KillSessionOutcome(outcome.GetError());
    }
}

void MariadbClient::KillSessionAsync(const KillSessionRequest& request, const KillSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KillSessionRequest&;
    using Resp = KillSessionResponse;

    DoRequestAsync<Req, Resp>(
        "KillSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::KillSessionOutcomeCallable MariadbClient::KillSessionCallable(const KillSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<KillSessionOutcome>>();
    KillSessionAsync(
    request,
    [prom](
        const MariadbClient*,
        const KillSessionRequest&,
        KillSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyAccountDescriptionOutcome MariadbClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountDescriptionResponse rsp = ModifyAccountDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountDescriptionOutcome(rsp);
        else
            return ModifyAccountDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountDescriptionOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountDescriptionRequest&;
    using Resp = ModifyAccountDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyAccountDescriptionOutcomeCallable MariadbClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountDescriptionOutcome>>();
    ModifyAccountDescriptionAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyAccountDescriptionRequest&,
        ModifyAccountDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyAccountPrivilegesOutcome MariadbClient::ModifyAccountPrivileges(const ModifyAccountPrivilegesRequest &request)
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

void MariadbClient::ModifyAccountPrivilegesAsync(const ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::ModifyAccountPrivilegesOutcomeCallable MariadbClient::ModifyAccountPrivilegesCallable(const ModifyAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountPrivilegesOutcome>>();
    ModifyAccountPrivilegesAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyAccountPrivilegesRequest&,
        ModifyAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyBackupConfigsOutcome MariadbClient::ModifyBackupConfigs(const ModifyBackupConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupConfigsResponse rsp = ModifyBackupConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupConfigsOutcome(rsp);
        else
            return ModifyBackupConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupConfigsOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyBackupConfigsAsync(const ModifyBackupConfigsRequest& request, const ModifyBackupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupConfigsRequest&;
    using Resp = ModifyBackupConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyBackupConfigsOutcomeCallable MariadbClient::ModifyBackupConfigsCallable(const ModifyBackupConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupConfigsOutcome>>();
    ModifyBackupConfigsAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyBackupConfigsRequest&,
        ModifyBackupConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyBackupTimeOutcome MariadbClient::ModifyBackupTime(const ModifyBackupTimeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupTimeResponse rsp = ModifyBackupTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupTimeOutcome(rsp);
        else
            return ModifyBackupTimeOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupTimeOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyBackupTimeAsync(const ModifyBackupTimeRequest& request, const ModifyBackupTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupTimeRequest&;
    using Resp = ModifyBackupTimeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyBackupTimeOutcomeCallable MariadbClient::ModifyBackupTimeCallable(const ModifyBackupTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupTimeOutcome>>();
    ModifyBackupTimeAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyBackupTimeRequest&,
        ModifyBackupTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyDBEncryptAttributesOutcome MariadbClient::ModifyDBEncryptAttributes(const ModifyDBEncryptAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBEncryptAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBEncryptAttributesResponse rsp = ModifyDBEncryptAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBEncryptAttributesOutcome(rsp);
        else
            return ModifyDBEncryptAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyDBEncryptAttributesOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyDBEncryptAttributesAsync(const ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBEncryptAttributesRequest&;
    using Resp = ModifyDBEncryptAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBEncryptAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyDBEncryptAttributesOutcomeCallable MariadbClient::ModifyDBEncryptAttributesCallable(const ModifyDBEncryptAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBEncryptAttributesOutcome>>();
    ModifyDBEncryptAttributesAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyDBEncryptAttributesRequest&,
        ModifyDBEncryptAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyDBInstanceNameOutcome MariadbClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
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

void MariadbClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::ModifyDBInstanceNameOutcomeCallable MariadbClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceNameOutcome>>();
    ModifyDBInstanceNameAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyDBInstanceNameRequest&,
        ModifyDBInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyDBInstanceSecurityGroupsOutcome MariadbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void MariadbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable MariadbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupsOutcome>>();
    ModifyDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyDBInstanceSecurityGroupsRequest&,
        ModifyDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyDBInstancesProjectOutcome MariadbClient::ModifyDBInstancesProject(const ModifyDBInstancesProjectRequest &request)
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

void MariadbClient::ModifyDBInstancesProjectAsync(const ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::ModifyDBInstancesProjectOutcomeCallable MariadbClient::ModifyDBInstancesProjectCallable(const ModifyDBInstancesProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstancesProjectOutcome>>();
    ModifyDBInstancesProjectAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyDBInstancesProjectRequest&,
        ModifyDBInstancesProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyDBParametersOutcome MariadbClient::ModifyDBParameters(const ModifyDBParametersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBParametersResponse rsp = ModifyDBParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBParametersOutcome(rsp);
        else
            return ModifyDBParametersOutcome(o.GetError());
    }
    else
    {
        return ModifyDBParametersOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyDBParametersAsync(const ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBParametersRequest&;
    using Resp = ModifyDBParametersResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBParameters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyDBParametersOutcomeCallable MariadbClient::ModifyDBParametersCallable(const ModifyDBParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBParametersOutcome>>();
    ModifyDBParametersAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyDBParametersRequest&,
        ModifyDBParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyDBSyncModeOutcome MariadbClient::ModifyDBSyncMode(const ModifyDBSyncModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBSyncMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBSyncModeResponse rsp = ModifyDBSyncModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBSyncModeOutcome(rsp);
        else
            return ModifyDBSyncModeOutcome(o.GetError());
    }
    else
    {
        return ModifyDBSyncModeOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyDBSyncModeAsync(const ModifyDBSyncModeRequest& request, const ModifyDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBSyncModeRequest&;
    using Resp = ModifyDBSyncModeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBSyncMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyDBSyncModeOutcomeCallable MariadbClient::ModifyDBSyncModeCallable(const ModifyDBSyncModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBSyncModeOutcome>>();
    ModifyDBSyncModeAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyDBSyncModeRequest&,
        ModifyDBSyncModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyInstanceNetworkOutcome MariadbClient::ModifyInstanceNetwork(const ModifyInstanceNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceNetworkResponse rsp = ModifyInstanceNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceNetworkOutcome(rsp);
        else
            return ModifyInstanceNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceNetworkOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyInstanceNetworkAsync(const ModifyInstanceNetworkRequest& request, const ModifyInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceNetworkRequest&;
    using Resp = ModifyInstanceNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyInstanceNetworkOutcomeCallable MariadbClient::ModifyInstanceNetworkCallable(const ModifyInstanceNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceNetworkOutcome>>();
    ModifyInstanceNetworkAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyInstanceNetworkRequest&,
        ModifyInstanceNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyInstanceProtectedPropertyOutcome MariadbClient::ModifyInstanceProtectedProperty(const ModifyInstanceProtectedPropertyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceProtectedProperty");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceProtectedPropertyResponse rsp = ModifyInstanceProtectedPropertyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceProtectedPropertyOutcome(rsp);
        else
            return ModifyInstanceProtectedPropertyOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceProtectedPropertyOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyInstanceProtectedPropertyAsync(const ModifyInstanceProtectedPropertyRequest& request, const ModifyInstanceProtectedPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceProtectedPropertyRequest&;
    using Resp = ModifyInstanceProtectedPropertyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceProtectedProperty", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyInstanceProtectedPropertyOutcomeCallable MariadbClient::ModifyInstanceProtectedPropertyCallable(const ModifyInstanceProtectedPropertyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceProtectedPropertyOutcome>>();
    ModifyInstanceProtectedPropertyAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyInstanceProtectedPropertyRequest&,
        ModifyInstanceProtectedPropertyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyInstanceSSLAttributesOutcome MariadbClient::ModifyInstanceSSLAttributes(const ModifyInstanceSSLAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceSSLAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceSSLAttributesResponse rsp = ModifyInstanceSSLAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceSSLAttributesOutcome(rsp);
        else
            return ModifyInstanceSSLAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceSSLAttributesOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyInstanceSSLAttributesAsync(const ModifyInstanceSSLAttributesRequest& request, const ModifyInstanceSSLAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceSSLAttributesRequest&;
    using Resp = ModifyInstanceSSLAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceSSLAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyInstanceSSLAttributesOutcomeCallable MariadbClient::ModifyInstanceSSLAttributesCallable(const ModifyInstanceSSLAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceSSLAttributesOutcome>>();
    ModifyInstanceSSLAttributesAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyInstanceSSLAttributesRequest&,
        ModifyInstanceSSLAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyInstanceVipOutcome MariadbClient::ModifyInstanceVip(const ModifyInstanceVipRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceVipResponse rsp = ModifyInstanceVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceVipOutcome(rsp);
        else
            return ModifyInstanceVipOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceVipOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyInstanceVipAsync(const ModifyInstanceVipRequest& request, const ModifyInstanceVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceVipRequest&;
    using Resp = ModifyInstanceVipResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyInstanceVipOutcomeCallable MariadbClient::ModifyInstanceVipCallable(const ModifyInstanceVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceVipOutcome>>();
    ModifyInstanceVipAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyInstanceVipRequest&,
        ModifyInstanceVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyInstanceVportOutcome MariadbClient::ModifyInstanceVport(const ModifyInstanceVportRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceVport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceVportResponse rsp = ModifyInstanceVportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceVportOutcome(rsp);
        else
            return ModifyInstanceVportOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceVportOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyInstanceVportAsync(const ModifyInstanceVportRequest& request, const ModifyInstanceVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceVportRequest&;
    using Resp = ModifyInstanceVportResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceVport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyInstanceVportOutcomeCallable MariadbClient::ModifyInstanceVportCallable(const ModifyInstanceVportRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceVportOutcome>>();
    ModifyInstanceVportAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyInstanceVportRequest&,
        ModifyInstanceVportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyLogFileRetentionPeriodOutcome MariadbClient::ModifyLogFileRetentionPeriod(const ModifyLogFileRetentionPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogFileRetentionPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogFileRetentionPeriodResponse rsp = ModifyLogFileRetentionPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogFileRetentionPeriodOutcome(rsp);
        else
            return ModifyLogFileRetentionPeriodOutcome(o.GetError());
    }
    else
    {
        return ModifyLogFileRetentionPeriodOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyLogFileRetentionPeriodAsync(const ModifyLogFileRetentionPeriodRequest& request, const ModifyLogFileRetentionPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLogFileRetentionPeriodRequest&;
    using Resp = ModifyLogFileRetentionPeriodResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLogFileRetentionPeriod", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyLogFileRetentionPeriodOutcomeCallable MariadbClient::ModifyLogFileRetentionPeriodCallable(const ModifyLogFileRetentionPeriodRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLogFileRetentionPeriodOutcome>>();
    ModifyLogFileRetentionPeriodAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyLogFileRetentionPeriodRequest&,
        ModifyLogFileRetentionPeriodOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifyRealServerAccessStrategyOutcome MariadbClient::ModifyRealServerAccessStrategy(const ModifyRealServerAccessStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRealServerAccessStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRealServerAccessStrategyResponse rsp = ModifyRealServerAccessStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRealServerAccessStrategyOutcome(rsp);
        else
            return ModifyRealServerAccessStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyRealServerAccessStrategyOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifyRealServerAccessStrategyAsync(const ModifyRealServerAccessStrategyRequest& request, const ModifyRealServerAccessStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRealServerAccessStrategyRequest&;
    using Resp = ModifyRealServerAccessStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRealServerAccessStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifyRealServerAccessStrategyOutcomeCallable MariadbClient::ModifyRealServerAccessStrategyCallable(const ModifyRealServerAccessStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRealServerAccessStrategyOutcome>>();
    ModifyRealServerAccessStrategyAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifyRealServerAccessStrategyRequest&,
        ModifyRealServerAccessStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ModifySyncTaskAttributeOutcome MariadbClient::ModifySyncTaskAttribute(const ModifySyncTaskAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySyncTaskAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySyncTaskAttributeResponse rsp = ModifySyncTaskAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySyncTaskAttributeOutcome(rsp);
        else
            return ModifySyncTaskAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySyncTaskAttributeOutcome(outcome.GetError());
    }
}

void MariadbClient::ModifySyncTaskAttributeAsync(const ModifySyncTaskAttributeRequest& request, const ModifySyncTaskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySyncTaskAttributeRequest&;
    using Resp = ModifySyncTaskAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySyncTaskAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::ModifySyncTaskAttributeOutcomeCallable MariadbClient::ModifySyncTaskAttributeCallable(const ModifySyncTaskAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySyncTaskAttributeOutcome>>();
    ModifySyncTaskAttributeAsync(
    request,
    [prom](
        const MariadbClient*,
        const ModifySyncTaskAttributeRequest&,
        ModifySyncTaskAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::OpenDBExtranetAccessOutcome MariadbClient::OpenDBExtranetAccess(const OpenDBExtranetAccessRequest &request)
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

void MariadbClient::OpenDBExtranetAccessAsync(const OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::OpenDBExtranetAccessOutcomeCallable MariadbClient::OpenDBExtranetAccessCallable(const OpenDBExtranetAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenDBExtranetAccessOutcome>>();
    OpenDBExtranetAccessAsync(
    request,
    [prom](
        const MariadbClient*,
        const OpenDBExtranetAccessRequest&,
        OpenDBExtranetAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::RenewDBInstanceOutcome MariadbClient::RenewDBInstance(const RenewDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDBInstanceResponse rsp = RenewDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDBInstanceOutcome(rsp);
        else
            return RenewDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::RenewDBInstanceAsync(const RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewDBInstanceRequest&;
    using Resp = RenewDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenewDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::RenewDBInstanceOutcomeCallable MariadbClient::RenewDBInstanceCallable(const RenewDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDBInstanceOutcome>>();
    RenewDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const RenewDBInstanceRequest&,
        RenewDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::ResetAccountPasswordOutcome MariadbClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
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

void MariadbClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MariadbClient::ResetAccountPasswordOutcomeCallable MariadbClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAccountPasswordOutcome>>();
    ResetAccountPasswordAsync(
    request,
    [prom](
        const MariadbClient*,
        const ResetAccountPasswordRequest&,
        ResetAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::RestartDBInstancesOutcome MariadbClient::RestartDBInstances(const RestartDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDBInstancesResponse rsp = RestartDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDBInstancesOutcome(rsp);
        else
            return RestartDBInstancesOutcome(o.GetError());
    }
    else
    {
        return RestartDBInstancesOutcome(outcome.GetError());
    }
}

void MariadbClient::RestartDBInstancesAsync(const RestartDBInstancesRequest& request, const RestartDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartDBInstancesRequest&;
    using Resp = RestartDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RestartDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::RestartDBInstancesOutcomeCallable MariadbClient::RestartDBInstancesCallable(const RestartDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartDBInstancesOutcome>>();
    RestartDBInstancesAsync(
    request,
    [prom](
        const MariadbClient*,
        const RestartDBInstancesRequest&,
        RestartDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::SwitchDBInstanceHAOutcome MariadbClient::SwitchDBInstanceHA(const SwitchDBInstanceHARequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDBInstanceHA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDBInstanceHAResponse rsp = SwitchDBInstanceHAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDBInstanceHAOutcome(rsp);
        else
            return SwitchDBInstanceHAOutcome(o.GetError());
    }
    else
    {
        return SwitchDBInstanceHAOutcome(outcome.GetError());
    }
}

void MariadbClient::SwitchDBInstanceHAAsync(const SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchDBInstanceHARequest&;
    using Resp = SwitchDBInstanceHAResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchDBInstanceHA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::SwitchDBInstanceHAOutcomeCallable MariadbClient::SwitchDBInstanceHACallable(const SwitchDBInstanceHARequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchDBInstanceHAOutcome>>();
    SwitchDBInstanceHAAsync(
    request,
    [prom](
        const MariadbClient*,
        const SwitchDBInstanceHARequest&,
        SwitchDBInstanceHAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::TerminateDedicatedDBInstanceOutcome MariadbClient::TerminateDedicatedDBInstance(const TerminateDedicatedDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDedicatedDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDedicatedDBInstanceResponse rsp = TerminateDedicatedDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDedicatedDBInstanceOutcome(rsp);
        else
            return TerminateDedicatedDBInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateDedicatedDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::TerminateDedicatedDBInstanceAsync(const TerminateDedicatedDBInstanceRequest& request, const TerminateDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateDedicatedDBInstanceRequest&;
    using Resp = TerminateDedicatedDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateDedicatedDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::TerminateDedicatedDBInstanceOutcomeCallable MariadbClient::TerminateDedicatedDBInstanceCallable(const TerminateDedicatedDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateDedicatedDBInstanceOutcome>>();
    TerminateDedicatedDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const TerminateDedicatedDBInstanceRequest&,
        TerminateDedicatedDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::UpgradeDBInstanceOutcome MariadbClient::UpgradeDBInstance(const UpgradeDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceResponse rsp = UpgradeDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceOutcome(rsp);
        else
            return UpgradeDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::UpgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDBInstanceRequest&;
    using Resp = UpgradeDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::UpgradeDBInstanceOutcomeCallable MariadbClient::UpgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDBInstanceOutcome>>();
    UpgradeDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const UpgradeDBInstanceRequest&,
        UpgradeDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::UpgradeDedicatedDBInstanceOutcome MariadbClient::UpgradeDedicatedDBInstance(const UpgradeDedicatedDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDedicatedDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDedicatedDBInstanceResponse rsp = UpgradeDedicatedDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDedicatedDBInstanceOutcome(rsp);
        else
            return UpgradeDedicatedDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDedicatedDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::UpgradeDedicatedDBInstanceAsync(const UpgradeDedicatedDBInstanceRequest& request, const UpgradeDedicatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDedicatedDBInstanceRequest&;
    using Resp = UpgradeDedicatedDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDedicatedDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::UpgradeDedicatedDBInstanceOutcomeCallable MariadbClient::UpgradeDedicatedDBInstanceCallable(const UpgradeDedicatedDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDedicatedDBInstanceOutcome>>();
    UpgradeDedicatedDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const UpgradeDedicatedDBInstanceRequest&,
        UpgradeDedicatedDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MariadbClient::UpgradeHourDBInstanceOutcome MariadbClient::UpgradeHourDBInstance(const UpgradeHourDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeHourDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeHourDBInstanceResponse rsp = UpgradeHourDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeHourDBInstanceOutcome(rsp);
        else
            return UpgradeHourDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeHourDBInstanceOutcome(outcome.GetError());
    }
}

void MariadbClient::UpgradeHourDBInstanceAsync(const UpgradeHourDBInstanceRequest& request, const UpgradeHourDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeHourDBInstanceRequest&;
    using Resp = UpgradeHourDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeHourDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MariadbClient::UpgradeHourDBInstanceOutcomeCallable MariadbClient::UpgradeHourDBInstanceCallable(const UpgradeHourDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeHourDBInstanceOutcome>>();
    UpgradeHourDBInstanceAsync(
    request,
    [prom](
        const MariadbClient*,
        const UpgradeHourDBInstanceRequest&,
        UpgradeHourDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


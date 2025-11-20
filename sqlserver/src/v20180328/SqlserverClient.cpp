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

#include <tencentcloud/sqlserver/v20180328/SqlserverClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Sqlserver::V20180328;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-28";
    const string ENDPOINT = "sqlserver.tencentcloudapi.com";
}

SqlserverClient::SqlserverClient(const Credential &credential, const string &region) :
    SqlserverClient(credential, region, ClientProfile())
{
}

SqlserverClient::SqlserverClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SqlserverClient::AssociateSecurityGroupsOutcome SqlserverClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
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

void SqlserverClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::AssociateSecurityGroupsOutcomeCallable SqlserverClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupsOutcome>>();
    AssociateSecurityGroupsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const AssociateSecurityGroupsRequest&,
        AssociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::BalanceReadOnlyGroupOutcome SqlserverClient::BalanceReadOnlyGroup(const BalanceReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "BalanceReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BalanceReadOnlyGroupResponse rsp = BalanceReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BalanceReadOnlyGroupOutcome(rsp);
        else
            return BalanceReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return BalanceReadOnlyGroupOutcome(outcome.GetError());
    }
}

void SqlserverClient::BalanceReadOnlyGroupAsync(const BalanceReadOnlyGroupRequest& request, const BalanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BalanceReadOnlyGroupRequest&;
    using Resp = BalanceReadOnlyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "BalanceReadOnlyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::BalanceReadOnlyGroupOutcomeCallable SqlserverClient::BalanceReadOnlyGroupCallable(const BalanceReadOnlyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<BalanceReadOnlyGroupOutcome>>();
    BalanceReadOnlyGroupAsync(
    request,
    [prom](
        const SqlserverClient*,
        const BalanceReadOnlyGroupRequest&,
        BalanceReadOnlyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CloneDBOutcome SqlserverClient::CloneDB(const CloneDBRequest &request)
{
    auto outcome = MakeRequest(request, "CloneDB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneDBResponse rsp = CloneDBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneDBOutcome(rsp);
        else
            return CloneDBOutcome(o.GetError());
    }
    else
    {
        return CloneDBOutcome(outcome.GetError());
    }
}

void SqlserverClient::CloneDBAsync(const CloneDBRequest& request, const CloneDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloneDBRequest&;
    using Resp = CloneDBResponse;

    DoRequestAsync<Req, Resp>(
        "CloneDB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CloneDBOutcomeCallable SqlserverClient::CloneDBCallable(const CloneDBRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloneDBOutcome>>();
    CloneDBAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CloneDBRequest&,
        CloneDBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CloseInterCommunicationOutcome SqlserverClient::CloseInterCommunication(const CloseInterCommunicationRequest &request)
{
    auto outcome = MakeRequest(request, "CloseInterCommunication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseInterCommunicationResponse rsp = CloseInterCommunicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseInterCommunicationOutcome(rsp);
        else
            return CloseInterCommunicationOutcome(o.GetError());
    }
    else
    {
        return CloseInterCommunicationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CloseInterCommunicationAsync(const CloseInterCommunicationRequest& request, const CloseInterCommunicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseInterCommunicationRequest&;
    using Resp = CloseInterCommunicationResponse;

    DoRequestAsync<Req, Resp>(
        "CloseInterCommunication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CloseInterCommunicationOutcomeCallable SqlserverClient::CloseInterCommunicationCallable(const CloseInterCommunicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseInterCommunicationOutcome>>();
    CloseInterCommunicationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CloseInterCommunicationRequest&,
        CloseInterCommunicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CompleteExpansionOutcome SqlserverClient::CompleteExpansion(const CompleteExpansionRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteExpansion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteExpansionResponse rsp = CompleteExpansionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteExpansionOutcome(rsp);
        else
            return CompleteExpansionOutcome(o.GetError());
    }
    else
    {
        return CompleteExpansionOutcome(outcome.GetError());
    }
}

void SqlserverClient::CompleteExpansionAsync(const CompleteExpansionRequest& request, const CompleteExpansionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CompleteExpansionRequest&;
    using Resp = CompleteExpansionResponse;

    DoRequestAsync<Req, Resp>(
        "CompleteExpansion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CompleteExpansionOutcomeCallable SqlserverClient::CompleteExpansionCallable(const CompleteExpansionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CompleteExpansionOutcome>>();
    CompleteExpansionAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CompleteExpansionRequest&,
        CompleteExpansionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CompleteMigrationOutcome SqlserverClient::CompleteMigration(const CompleteMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteMigrationResponse rsp = CompleteMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteMigrationOutcome(rsp);
        else
            return CompleteMigrationOutcome(o.GetError());
    }
    else
    {
        return CompleteMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CompleteMigrationAsync(const CompleteMigrationRequest& request, const CompleteMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CompleteMigrationRequest&;
    using Resp = CompleteMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "CompleteMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CompleteMigrationOutcomeCallable SqlserverClient::CompleteMigrationCallable(const CompleteMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CompleteMigrationOutcome>>();
    CompleteMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CompleteMigrationRequest&,
        CompleteMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateAccountOutcome SqlserverClient::CreateAccount(const CreateAccountRequest &request)
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

void SqlserverClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::CreateAccountOutcomeCallable SqlserverClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccountOutcome>>();
    CreateAccountAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateAccountRequest&,
        CreateAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateBackupOutcome SqlserverClient::CreateBackup(const CreateBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupResponse rsp = CreateBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupOutcome(rsp);
        else
            return CreateBackupOutcome(o.GetError());
    }
    else
    {
        return CreateBackupOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupRequest&;
    using Resp = CreateBackupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateBackupOutcomeCallable SqlserverClient::CreateBackupCallable(const CreateBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupOutcome>>();
    CreateBackupAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateBackupRequest&,
        CreateBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateBackupMigrationOutcome SqlserverClient::CreateBackupMigration(const CreateBackupMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupMigrationResponse rsp = CreateBackupMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupMigrationOutcome(rsp);
        else
            return CreateBackupMigrationOutcome(o.GetError());
    }
    else
    {
        return CreateBackupMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateBackupMigrationAsync(const CreateBackupMigrationRequest& request, const CreateBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupMigrationRequest&;
    using Resp = CreateBackupMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackupMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateBackupMigrationOutcomeCallable SqlserverClient::CreateBackupMigrationCallable(const CreateBackupMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupMigrationOutcome>>();
    CreateBackupMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateBackupMigrationRequest&,
        CreateBackupMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateBasicDBInstancesOutcome SqlserverClient::CreateBasicDBInstances(const CreateBasicDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBasicDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBasicDBInstancesResponse rsp = CreateBasicDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBasicDBInstancesOutcome(rsp);
        else
            return CreateBasicDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateBasicDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateBasicDBInstancesAsync(const CreateBasicDBInstancesRequest& request, const CreateBasicDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBasicDBInstancesRequest&;
    using Resp = CreateBasicDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBasicDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateBasicDBInstancesOutcomeCallable SqlserverClient::CreateBasicDBInstancesCallable(const CreateBasicDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBasicDBInstancesOutcome>>();
    CreateBasicDBInstancesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateBasicDBInstancesRequest&,
        CreateBasicDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateBusinessDBInstancesOutcome SqlserverClient::CreateBusinessDBInstances(const CreateBusinessDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBusinessDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBusinessDBInstancesResponse rsp = CreateBusinessDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBusinessDBInstancesOutcome(rsp);
        else
            return CreateBusinessDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateBusinessDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateBusinessDBInstancesAsync(const CreateBusinessDBInstancesRequest& request, const CreateBusinessDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBusinessDBInstancesRequest&;
    using Resp = CreateBusinessDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBusinessDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateBusinessDBInstancesOutcomeCallable SqlserverClient::CreateBusinessDBInstancesCallable(const CreateBusinessDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBusinessDBInstancesOutcome>>();
    CreateBusinessDBInstancesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateBusinessDBInstancesRequest&,
        CreateBusinessDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateBusinessIntelligenceFileOutcome SqlserverClient::CreateBusinessIntelligenceFile(const CreateBusinessIntelligenceFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBusinessIntelligenceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBusinessIntelligenceFileResponse rsp = CreateBusinessIntelligenceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBusinessIntelligenceFileOutcome(rsp);
        else
            return CreateBusinessIntelligenceFileOutcome(o.GetError());
    }
    else
    {
        return CreateBusinessIntelligenceFileOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateBusinessIntelligenceFileAsync(const CreateBusinessIntelligenceFileRequest& request, const CreateBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBusinessIntelligenceFileRequest&;
    using Resp = CreateBusinessIntelligenceFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBusinessIntelligenceFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateBusinessIntelligenceFileOutcomeCallable SqlserverClient::CreateBusinessIntelligenceFileCallable(const CreateBusinessIntelligenceFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBusinessIntelligenceFileOutcome>>();
    CreateBusinessIntelligenceFileAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateBusinessIntelligenceFileRequest&,
        CreateBusinessIntelligenceFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateCloudDBInstancesOutcome SqlserverClient::CreateCloudDBInstances(const CreateCloudDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudDBInstancesResponse rsp = CreateCloudDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudDBInstancesOutcome(rsp);
        else
            return CreateCloudDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateCloudDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateCloudDBInstancesAsync(const CreateCloudDBInstancesRequest& request, const CreateCloudDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudDBInstancesRequest&;
    using Resp = CreateCloudDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateCloudDBInstancesOutcomeCallable SqlserverClient::CreateCloudDBInstancesCallable(const CreateCloudDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudDBInstancesOutcome>>();
    CreateCloudDBInstancesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateCloudDBInstancesRequest&,
        CreateCloudDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateCloudReadOnlyDBInstancesOutcome SqlserverClient::CreateCloudReadOnlyDBInstances(const CreateCloudReadOnlyDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudReadOnlyDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudReadOnlyDBInstancesResponse rsp = CreateCloudReadOnlyDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudReadOnlyDBInstancesOutcome(rsp);
        else
            return CreateCloudReadOnlyDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateCloudReadOnlyDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateCloudReadOnlyDBInstancesAsync(const CreateCloudReadOnlyDBInstancesRequest& request, const CreateCloudReadOnlyDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudReadOnlyDBInstancesRequest&;
    using Resp = CreateCloudReadOnlyDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudReadOnlyDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateCloudReadOnlyDBInstancesOutcomeCallable SqlserverClient::CreateCloudReadOnlyDBInstancesCallable(const CreateCloudReadOnlyDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudReadOnlyDBInstancesOutcome>>();
    CreateCloudReadOnlyDBInstancesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateCloudReadOnlyDBInstancesRequest&,
        CreateCloudReadOnlyDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateDBOutcome SqlserverClient::CreateDB(const CreateDBRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBResponse rsp = CreateDBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBOutcome(rsp);
        else
            return CreateDBOutcome(o.GetError());
    }
    else
    {
        return CreateDBOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateDBAsync(const CreateDBRequest& request, const CreateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBRequest&;
    using Resp = CreateDBResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateDBOutcomeCallable SqlserverClient::CreateDBCallable(const CreateDBRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBOutcome>>();
    CreateDBAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateDBRequest&,
        CreateDBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateDBInstancesOutcome SqlserverClient::CreateDBInstances(const CreateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstancesResponse rsp = CreateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstancesOutcome(rsp);
        else
            return CreateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateDBInstancesAsync(const CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBInstancesRequest&;
    using Resp = CreateDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateDBInstancesOutcomeCallable SqlserverClient::CreateDBInstancesCallable(const CreateDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBInstancesOutcome>>();
    CreateDBInstancesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateDBInstancesRequest&,
        CreateDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateIncrementalMigrationOutcome SqlserverClient::CreateIncrementalMigration(const CreateIncrementalMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIncrementalMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIncrementalMigrationResponse rsp = CreateIncrementalMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIncrementalMigrationOutcome(rsp);
        else
            return CreateIncrementalMigrationOutcome(o.GetError());
    }
    else
    {
        return CreateIncrementalMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateIncrementalMigrationAsync(const CreateIncrementalMigrationRequest& request, const CreateIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIncrementalMigrationRequest&;
    using Resp = CreateIncrementalMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIncrementalMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateIncrementalMigrationOutcomeCallable SqlserverClient::CreateIncrementalMigrationCallable(const CreateIncrementalMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIncrementalMigrationOutcome>>();
    CreateIncrementalMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateIncrementalMigrationRequest&,
        CreateIncrementalMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateMigrationOutcome SqlserverClient::CreateMigration(const CreateMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrationResponse rsp = CreateMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrationOutcome(rsp);
        else
            return CreateMigrationOutcome(o.GetError());
    }
    else
    {
        return CreateMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateMigrationAsync(const CreateMigrationRequest& request, const CreateMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMigrationRequest&;
    using Resp = CreateMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateMigrationOutcomeCallable SqlserverClient::CreateMigrationCallable(const CreateMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMigrationOutcome>>();
    CreateMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateMigrationRequest&,
        CreateMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreatePublishSubscribeOutcome SqlserverClient::CreatePublishSubscribe(const CreatePublishSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePublishSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePublishSubscribeResponse rsp = CreatePublishSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePublishSubscribeOutcome(rsp);
        else
            return CreatePublishSubscribeOutcome(o.GetError());
    }
    else
    {
        return CreatePublishSubscribeOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreatePublishSubscribeAsync(const CreatePublishSubscribeRequest& request, const CreatePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePublishSubscribeRequest&;
    using Resp = CreatePublishSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePublishSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreatePublishSubscribeOutcomeCallable SqlserverClient::CreatePublishSubscribeCallable(const CreatePublishSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePublishSubscribeOutcome>>();
    CreatePublishSubscribeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreatePublishSubscribeRequest&,
        CreatePublishSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CreateReadOnlyDBInstancesOutcome SqlserverClient::CreateReadOnlyDBInstances(const CreateReadOnlyDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReadOnlyDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReadOnlyDBInstancesResponse rsp = CreateReadOnlyDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReadOnlyDBInstancesOutcome(rsp);
        else
            return CreateReadOnlyDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateReadOnlyDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateReadOnlyDBInstancesAsync(const CreateReadOnlyDBInstancesRequest& request, const CreateReadOnlyDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReadOnlyDBInstancesRequest&;
    using Resp = CreateReadOnlyDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReadOnlyDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CreateReadOnlyDBInstancesOutcomeCallable SqlserverClient::CreateReadOnlyDBInstancesCallable(const CreateReadOnlyDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReadOnlyDBInstancesOutcome>>();
    CreateReadOnlyDBInstancesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CreateReadOnlyDBInstancesRequest&,
        CreateReadOnlyDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::CutXEventsOutcome SqlserverClient::CutXEvents(const CutXEventsRequest &request)
{
    auto outcome = MakeRequest(request, "CutXEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CutXEventsResponse rsp = CutXEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CutXEventsOutcome(rsp);
        else
            return CutXEventsOutcome(o.GetError());
    }
    else
    {
        return CutXEventsOutcome(outcome.GetError());
    }
}

void SqlserverClient::CutXEventsAsync(const CutXEventsRequest& request, const CutXEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CutXEventsRequest&;
    using Resp = CutXEventsResponse;

    DoRequestAsync<Req, Resp>(
        "CutXEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::CutXEventsOutcomeCallable SqlserverClient::CutXEventsCallable(const CutXEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CutXEventsOutcome>>();
    CutXEventsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const CutXEventsRequest&,
        CutXEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DeleteAccountOutcome SqlserverClient::DeleteAccount(const DeleteAccountRequest &request)
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

void SqlserverClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DeleteAccountOutcomeCallable SqlserverClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccountOutcome>>();
    DeleteAccountAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DeleteAccountRequest&,
        DeleteAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DeleteBackupMigrationOutcome SqlserverClient::DeleteBackupMigration(const DeleteBackupMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackupMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupMigrationResponse rsp = DeleteBackupMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupMigrationOutcome(rsp);
        else
            return DeleteBackupMigrationOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteBackupMigrationAsync(const DeleteBackupMigrationRequest& request, const DeleteBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBackupMigrationRequest&;
    using Resp = DeleteBackupMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBackupMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DeleteBackupMigrationOutcomeCallable SqlserverClient::DeleteBackupMigrationCallable(const DeleteBackupMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackupMigrationOutcome>>();
    DeleteBackupMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DeleteBackupMigrationRequest&,
        DeleteBackupMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DeleteBusinessIntelligenceFileOutcome SqlserverClient::DeleteBusinessIntelligenceFile(const DeleteBusinessIntelligenceFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBusinessIntelligenceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBusinessIntelligenceFileResponse rsp = DeleteBusinessIntelligenceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBusinessIntelligenceFileOutcome(rsp);
        else
            return DeleteBusinessIntelligenceFileOutcome(o.GetError());
    }
    else
    {
        return DeleteBusinessIntelligenceFileOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteBusinessIntelligenceFileAsync(const DeleteBusinessIntelligenceFileRequest& request, const DeleteBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBusinessIntelligenceFileRequest&;
    using Resp = DeleteBusinessIntelligenceFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBusinessIntelligenceFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DeleteBusinessIntelligenceFileOutcomeCallable SqlserverClient::DeleteBusinessIntelligenceFileCallable(const DeleteBusinessIntelligenceFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBusinessIntelligenceFileOutcome>>();
    DeleteBusinessIntelligenceFileAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DeleteBusinessIntelligenceFileRequest&,
        DeleteBusinessIntelligenceFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DeleteDBOutcome SqlserverClient::DeleteDB(const DeleteDBRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDBResponse rsp = DeleteDBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDBOutcome(rsp);
        else
            return DeleteDBOutcome(o.GetError());
    }
    else
    {
        return DeleteDBOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteDBAsync(const DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDBRequest&;
    using Resp = DeleteDBResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DeleteDBOutcomeCallable SqlserverClient::DeleteDBCallable(const DeleteDBRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDBOutcome>>();
    DeleteDBAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DeleteDBRequest&,
        DeleteDBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DeleteDBInstanceOutcome SqlserverClient::DeleteDBInstance(const DeleteDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDBInstanceResponse rsp = DeleteDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDBInstanceOutcome(rsp);
        else
            return DeleteDBInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDBInstanceRequest&;
    using Resp = DeleteDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DeleteDBInstanceOutcomeCallable SqlserverClient::DeleteDBInstanceCallable(const DeleteDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDBInstanceOutcome>>();
    DeleteDBInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DeleteDBInstanceRequest&,
        DeleteDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DeleteIncrementalMigrationOutcome SqlserverClient::DeleteIncrementalMigration(const DeleteIncrementalMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIncrementalMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIncrementalMigrationResponse rsp = DeleteIncrementalMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIncrementalMigrationOutcome(rsp);
        else
            return DeleteIncrementalMigrationOutcome(o.GetError());
    }
    else
    {
        return DeleteIncrementalMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteIncrementalMigrationAsync(const DeleteIncrementalMigrationRequest& request, const DeleteIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIncrementalMigrationRequest&;
    using Resp = DeleteIncrementalMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIncrementalMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DeleteIncrementalMigrationOutcomeCallable SqlserverClient::DeleteIncrementalMigrationCallable(const DeleteIncrementalMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIncrementalMigrationOutcome>>();
    DeleteIncrementalMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DeleteIncrementalMigrationRequest&,
        DeleteIncrementalMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DeleteMigrationOutcome SqlserverClient::DeleteMigration(const DeleteMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMigrationResponse rsp = DeleteMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMigrationOutcome(rsp);
        else
            return DeleteMigrationOutcome(o.GetError());
    }
    else
    {
        return DeleteMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteMigrationAsync(const DeleteMigrationRequest& request, const DeleteMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMigrationRequest&;
    using Resp = DeleteMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DeleteMigrationOutcomeCallable SqlserverClient::DeleteMigrationCallable(const DeleteMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMigrationOutcome>>();
    DeleteMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DeleteMigrationRequest&,
        DeleteMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DeletePublishSubscribeOutcome SqlserverClient::DeletePublishSubscribe(const DeletePublishSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePublishSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePublishSubscribeResponse rsp = DeletePublishSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePublishSubscribeOutcome(rsp);
        else
            return DeletePublishSubscribeOutcome(o.GetError());
    }
    else
    {
        return DeletePublishSubscribeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeletePublishSubscribeAsync(const DeletePublishSubscribeRequest& request, const DeletePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePublishSubscribeRequest&;
    using Resp = DeletePublishSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePublishSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DeletePublishSubscribeOutcomeCallable SqlserverClient::DeletePublishSubscribeCallable(const DeletePublishSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePublishSubscribeOutcome>>();
    DeletePublishSubscribeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DeletePublishSubscribeRequest&,
        DeletePublishSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DeleteRestoreTaskOutcome SqlserverClient::DeleteRestoreTask(const DeleteRestoreTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRestoreTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRestoreTaskResponse rsp = DeleteRestoreTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRestoreTaskOutcome(rsp);
        else
            return DeleteRestoreTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteRestoreTaskOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteRestoreTaskAsync(const DeleteRestoreTaskRequest& request, const DeleteRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRestoreTaskRequest&;
    using Resp = DeleteRestoreTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRestoreTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DeleteRestoreTaskOutcomeCallable SqlserverClient::DeleteRestoreTaskCallable(const DeleteRestoreTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRestoreTaskOutcome>>();
    DeleteRestoreTaskAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DeleteRestoreTaskRequest&,
        DeleteRestoreTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeAccountPrivilegeByDBOutcome SqlserverClient::DescribeAccountPrivilegeByDB(const DescribeAccountPrivilegeByDBRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountPrivilegeByDB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountPrivilegeByDBResponse rsp = DescribeAccountPrivilegeByDBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountPrivilegeByDBOutcome(rsp);
        else
            return DescribeAccountPrivilegeByDBOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountPrivilegeByDBOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeAccountPrivilegeByDBAsync(const DescribeAccountPrivilegeByDBRequest& request, const DescribeAccountPrivilegeByDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountPrivilegeByDBRequest&;
    using Resp = DescribeAccountPrivilegeByDBResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountPrivilegeByDB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeAccountPrivilegeByDBOutcomeCallable SqlserverClient::DescribeAccountPrivilegeByDBCallable(const DescribeAccountPrivilegeByDBRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountPrivilegeByDBOutcome>>();
    DescribeAccountPrivilegeByDBAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeAccountPrivilegeByDBRequest&,
        DescribeAccountPrivilegeByDBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeAccountsOutcome SqlserverClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void SqlserverClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DescribeAccountsOutcomeCallable SqlserverClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountsOutcome>>();
    DescribeAccountsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeAccountsRequest&,
        DescribeAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeBackupByFlowIdOutcome SqlserverClient::DescribeBackupByFlowId(const DescribeBackupByFlowIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupByFlowId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupByFlowIdResponse rsp = DescribeBackupByFlowIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupByFlowIdOutcome(rsp);
        else
            return DescribeBackupByFlowIdOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupByFlowIdOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupByFlowIdAsync(const DescribeBackupByFlowIdRequest& request, const DescribeBackupByFlowIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupByFlowIdRequest&;
    using Resp = DescribeBackupByFlowIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupByFlowId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeBackupByFlowIdOutcomeCallable SqlserverClient::DescribeBackupByFlowIdCallable(const DescribeBackupByFlowIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupByFlowIdOutcome>>();
    DescribeBackupByFlowIdAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeBackupByFlowIdRequest&,
        DescribeBackupByFlowIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeBackupCommandOutcome SqlserverClient::DescribeBackupCommand(const DescribeBackupCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupCommandResponse rsp = DescribeBackupCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupCommandOutcome(rsp);
        else
            return DescribeBackupCommandOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupCommandOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupCommandAsync(const DescribeBackupCommandRequest& request, const DescribeBackupCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupCommandRequest&;
    using Resp = DescribeBackupCommandResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeBackupCommandOutcomeCallable SqlserverClient::DescribeBackupCommandCallable(const DescribeBackupCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupCommandOutcome>>();
    DescribeBackupCommandAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeBackupCommandRequest&,
        DescribeBackupCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeBackupFilesOutcome SqlserverClient::DescribeBackupFiles(const DescribeBackupFilesRequest &request)
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

void SqlserverClient::DescribeBackupFilesAsync(const DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DescribeBackupFilesOutcomeCallable SqlserverClient::DescribeBackupFilesCallable(const DescribeBackupFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupFilesOutcome>>();
    DescribeBackupFilesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeBackupFilesRequest&,
        DescribeBackupFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeBackupMigrationOutcome SqlserverClient::DescribeBackupMigration(const DescribeBackupMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupMigrationResponse rsp = DescribeBackupMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupMigrationOutcome(rsp);
        else
            return DescribeBackupMigrationOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupMigrationAsync(const DescribeBackupMigrationRequest& request, const DescribeBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupMigrationRequest&;
    using Resp = DescribeBackupMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeBackupMigrationOutcomeCallable SqlserverClient::DescribeBackupMigrationCallable(const DescribeBackupMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupMigrationOutcome>>();
    DescribeBackupMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeBackupMigrationRequest&,
        DescribeBackupMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeBackupMonitorOutcome SqlserverClient::DescribeBackupMonitor(const DescribeBackupMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupMonitorResponse rsp = DescribeBackupMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupMonitorOutcome(rsp);
        else
            return DescribeBackupMonitorOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupMonitorOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupMonitorAsync(const DescribeBackupMonitorRequest& request, const DescribeBackupMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupMonitorRequest&;
    using Resp = DescribeBackupMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeBackupMonitorOutcomeCallable SqlserverClient::DescribeBackupMonitorCallable(const DescribeBackupMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupMonitorOutcome>>();
    DescribeBackupMonitorAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeBackupMonitorRequest&,
        DescribeBackupMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeBackupStatisticalOutcome SqlserverClient::DescribeBackupStatistical(const DescribeBackupStatisticalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupStatistical");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupStatisticalResponse rsp = DescribeBackupStatisticalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupStatisticalOutcome(rsp);
        else
            return DescribeBackupStatisticalOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupStatisticalOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupStatisticalAsync(const DescribeBackupStatisticalRequest& request, const DescribeBackupStatisticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupStatisticalRequest&;
    using Resp = DescribeBackupStatisticalResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupStatistical", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeBackupStatisticalOutcomeCallable SqlserverClient::DescribeBackupStatisticalCallable(const DescribeBackupStatisticalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupStatisticalOutcome>>();
    DescribeBackupStatisticalAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeBackupStatisticalRequest&,
        DescribeBackupStatisticalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeBackupSummaryOutcome SqlserverClient::DescribeBackupSummary(const DescribeBackupSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupSummaryResponse rsp = DescribeBackupSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupSummaryOutcome(rsp);
        else
            return DescribeBackupSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupSummaryOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupSummaryAsync(const DescribeBackupSummaryRequest& request, const DescribeBackupSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupSummaryRequest&;
    using Resp = DescribeBackupSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeBackupSummaryOutcomeCallable SqlserverClient::DescribeBackupSummaryCallable(const DescribeBackupSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupSummaryOutcome>>();
    DescribeBackupSummaryAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeBackupSummaryRequest&,
        DescribeBackupSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeBackupUploadSizeOutcome SqlserverClient::DescribeBackupUploadSize(const DescribeBackupUploadSizeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupUploadSize");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupUploadSizeResponse rsp = DescribeBackupUploadSizeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupUploadSizeOutcome(rsp);
        else
            return DescribeBackupUploadSizeOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupUploadSizeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupUploadSizeAsync(const DescribeBackupUploadSizeRequest& request, const DescribeBackupUploadSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupUploadSizeRequest&;
    using Resp = DescribeBackupUploadSizeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupUploadSize", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeBackupUploadSizeOutcomeCallable SqlserverClient::DescribeBackupUploadSizeCallable(const DescribeBackupUploadSizeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupUploadSizeOutcome>>();
    DescribeBackupUploadSizeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeBackupUploadSizeRequest&,
        DescribeBackupUploadSizeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeBackupsOutcome SqlserverClient::DescribeBackups(const DescribeBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupsResponse rsp = DescribeBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupsOutcome(rsp);
        else
            return DescribeBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupsRequest&;
    using Resp = DescribeBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeBackupsOutcomeCallable SqlserverClient::DescribeBackupsCallable(const DescribeBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupsOutcome>>();
    DescribeBackupsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeBackupsRequest&,
        DescribeBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeBusinessIntelligenceFileOutcome SqlserverClient::DescribeBusinessIntelligenceFile(const DescribeBusinessIntelligenceFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBusinessIntelligenceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBusinessIntelligenceFileResponse rsp = DescribeBusinessIntelligenceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBusinessIntelligenceFileOutcome(rsp);
        else
            return DescribeBusinessIntelligenceFileOutcome(o.GetError());
    }
    else
    {
        return DescribeBusinessIntelligenceFileOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBusinessIntelligenceFileAsync(const DescribeBusinessIntelligenceFileRequest& request, const DescribeBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBusinessIntelligenceFileRequest&;
    using Resp = DescribeBusinessIntelligenceFileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBusinessIntelligenceFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeBusinessIntelligenceFileOutcomeCallable SqlserverClient::DescribeBusinessIntelligenceFileCallable(const DescribeBusinessIntelligenceFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBusinessIntelligenceFileOutcome>>();
    DescribeBusinessIntelligenceFileAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeBusinessIntelligenceFileRequest&,
        DescribeBusinessIntelligenceFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeCollationTimeZoneOutcome SqlserverClient::DescribeCollationTimeZone(const DescribeCollationTimeZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCollationTimeZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCollationTimeZoneResponse rsp = DescribeCollationTimeZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCollationTimeZoneOutcome(rsp);
        else
            return DescribeCollationTimeZoneOutcome(o.GetError());
    }
    else
    {
        return DescribeCollationTimeZoneOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeCollationTimeZoneAsync(const DescribeCollationTimeZoneRequest& request, const DescribeCollationTimeZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCollationTimeZoneRequest&;
    using Resp = DescribeCollationTimeZoneResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCollationTimeZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeCollationTimeZoneOutcomeCallable SqlserverClient::DescribeCollationTimeZoneCallable(const DescribeCollationTimeZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCollationTimeZoneOutcome>>();
    DescribeCollationTimeZoneAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeCollationTimeZoneRequest&,
        DescribeCollationTimeZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeCrossBackupStatisticalOutcome SqlserverClient::DescribeCrossBackupStatistical(const DescribeCrossBackupStatisticalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossBackupStatistical");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossBackupStatisticalResponse rsp = DescribeCrossBackupStatisticalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossBackupStatisticalOutcome(rsp);
        else
            return DescribeCrossBackupStatisticalOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossBackupStatisticalOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeCrossBackupStatisticalAsync(const DescribeCrossBackupStatisticalRequest& request, const DescribeCrossBackupStatisticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCrossBackupStatisticalRequest&;
    using Resp = DescribeCrossBackupStatisticalResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCrossBackupStatistical", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeCrossBackupStatisticalOutcomeCallable SqlserverClient::DescribeCrossBackupStatisticalCallable(const DescribeCrossBackupStatisticalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCrossBackupStatisticalOutcome>>();
    DescribeCrossBackupStatisticalAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeCrossBackupStatisticalRequest&,
        DescribeCrossBackupStatisticalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeCrossRegionZoneOutcome SqlserverClient::DescribeCrossRegionZone(const DescribeCrossRegionZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossRegionZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossRegionZoneResponse rsp = DescribeCrossRegionZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossRegionZoneOutcome(rsp);
        else
            return DescribeCrossRegionZoneOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossRegionZoneOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeCrossRegionZoneAsync(const DescribeCrossRegionZoneRequest& request, const DescribeCrossRegionZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCrossRegionZoneRequest&;
    using Resp = DescribeCrossRegionZoneResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCrossRegionZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeCrossRegionZoneOutcomeCallable SqlserverClient::DescribeCrossRegionZoneCallable(const DescribeCrossRegionZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCrossRegionZoneOutcome>>();
    DescribeCrossRegionZoneAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeCrossRegionZoneRequest&,
        DescribeCrossRegionZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeCrossRegionsOutcome SqlserverClient::DescribeCrossRegions(const DescribeCrossRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossRegionsResponse rsp = DescribeCrossRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossRegionsOutcome(rsp);
        else
            return DescribeCrossRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossRegionsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeCrossRegionsAsync(const DescribeCrossRegionsRequest& request, const DescribeCrossRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCrossRegionsRequest&;
    using Resp = DescribeCrossRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCrossRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeCrossRegionsOutcomeCallable SqlserverClient::DescribeCrossRegionsCallable(const DescribeCrossRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCrossRegionsOutcome>>();
    DescribeCrossRegionsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeCrossRegionsRequest&,
        DescribeCrossRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDBCharsetsOutcome SqlserverClient::DescribeDBCharsets(const DescribeDBCharsetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBCharsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBCharsetsResponse rsp = DescribeDBCharsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBCharsetsOutcome(rsp);
        else
            return DescribeDBCharsetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBCharsetsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBCharsetsAsync(const DescribeDBCharsetsRequest& request, const DescribeDBCharsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBCharsetsRequest&;
    using Resp = DescribeDBCharsetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBCharsets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeDBCharsetsOutcomeCallable SqlserverClient::DescribeDBCharsetsCallable(const DescribeDBCharsetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBCharsetsOutcome>>();
    DescribeDBCharsetsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDBCharsetsRequest&,
        DescribeDBCharsetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDBInstanceInterOutcome SqlserverClient::DescribeDBInstanceInter(const DescribeDBInstanceInterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceInter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceInterResponse rsp = DescribeDBInstanceInterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceInterOutcome(rsp);
        else
            return DescribeDBInstanceInterOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceInterOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBInstanceInterAsync(const DescribeDBInstanceInterRequest& request, const DescribeDBInstanceInterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceInterRequest&;
    using Resp = DescribeDBInstanceInterResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceInter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeDBInstanceInterOutcomeCallable SqlserverClient::DescribeDBInstanceInterCallable(const DescribeDBInstanceInterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceInterOutcome>>();
    DescribeDBInstanceInterAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDBInstanceInterRequest&,
        DescribeDBInstanceInterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDBInstancesOutcome SqlserverClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
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

void SqlserverClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DescribeDBInstancesOutcomeCallable SqlserverClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstancesOutcome>>();
    DescribeDBInstancesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDBInstancesRequest&,
        DescribeDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDBInstancesAttributeOutcome SqlserverClient::DescribeDBInstancesAttribute(const DescribeDBInstancesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstancesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstancesAttributeResponse rsp = DescribeDBInstancesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstancesAttributeOutcome(rsp);
        else
            return DescribeDBInstancesAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstancesAttributeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBInstancesAttributeAsync(const DescribeDBInstancesAttributeRequest& request, const DescribeDBInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstancesAttributeRequest&;
    using Resp = DescribeDBInstancesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstancesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeDBInstancesAttributeOutcomeCallable SqlserverClient::DescribeDBInstancesAttributeCallable(const DescribeDBInstancesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstancesAttributeOutcome>>();
    DescribeDBInstancesAttributeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDBInstancesAttributeRequest&,
        DescribeDBInstancesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDBPrivilegeByAccountOutcome SqlserverClient::DescribeDBPrivilegeByAccount(const DescribeDBPrivilegeByAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBPrivilegeByAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBPrivilegeByAccountResponse rsp = DescribeDBPrivilegeByAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBPrivilegeByAccountOutcome(rsp);
        else
            return DescribeDBPrivilegeByAccountOutcome(o.GetError());
    }
    else
    {
        return DescribeDBPrivilegeByAccountOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBPrivilegeByAccountAsync(const DescribeDBPrivilegeByAccountRequest& request, const DescribeDBPrivilegeByAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBPrivilegeByAccountRequest&;
    using Resp = DescribeDBPrivilegeByAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBPrivilegeByAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeDBPrivilegeByAccountOutcomeCallable SqlserverClient::DescribeDBPrivilegeByAccountCallable(const DescribeDBPrivilegeByAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBPrivilegeByAccountOutcome>>();
    DescribeDBPrivilegeByAccountAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDBPrivilegeByAccountRequest&,
        DescribeDBPrivilegeByAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDBRestoreTimeOutcome SqlserverClient::DescribeDBRestoreTime(const DescribeDBRestoreTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBRestoreTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBRestoreTimeResponse rsp = DescribeDBRestoreTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBRestoreTimeOutcome(rsp);
        else
            return DescribeDBRestoreTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBRestoreTimeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBRestoreTimeAsync(const DescribeDBRestoreTimeRequest& request, const DescribeDBRestoreTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBRestoreTimeRequest&;
    using Resp = DescribeDBRestoreTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBRestoreTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeDBRestoreTimeOutcomeCallable SqlserverClient::DescribeDBRestoreTimeCallable(const DescribeDBRestoreTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBRestoreTimeOutcome>>();
    DescribeDBRestoreTimeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDBRestoreTimeRequest&,
        DescribeDBRestoreTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDBSecurityGroupsOutcome SqlserverClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
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

void SqlserverClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DescribeDBSecurityGroupsOutcomeCallable SqlserverClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSecurityGroupsOutcome>>();
    DescribeDBSecurityGroupsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDBSecurityGroupsRequest&,
        DescribeDBSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDBsOutcome SqlserverClient::DescribeDBs(const DescribeDBsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBsResponse rsp = DescribeDBsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBsOutcome(rsp);
        else
            return DescribeDBsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBsAsync(const DescribeDBsRequest& request, const DescribeDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBsRequest&;
    using Resp = DescribeDBsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeDBsOutcomeCallable SqlserverClient::DescribeDBsCallable(const DescribeDBsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBsOutcome>>();
    DescribeDBsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDBsRequest&,
        DescribeDBsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDBsNormalOutcome SqlserverClient::DescribeDBsNormal(const DescribeDBsNormalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBsNormal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBsNormalResponse rsp = DescribeDBsNormalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBsNormalOutcome(rsp);
        else
            return DescribeDBsNormalOutcome(o.GetError());
    }
    else
    {
        return DescribeDBsNormalOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBsNormalAsync(const DescribeDBsNormalRequest& request, const DescribeDBsNormalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBsNormalRequest&;
    using Resp = DescribeDBsNormalResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBsNormal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeDBsNormalOutcomeCallable SqlserverClient::DescribeDBsNormalCallable(const DescribeDBsNormalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBsNormalOutcome>>();
    DescribeDBsNormalAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDBsNormalRequest&,
        DescribeDBsNormalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDatabaseNamesOutcome SqlserverClient::DescribeDatabaseNames(const DescribeDatabaseNamesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseNames");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseNamesResponse rsp = DescribeDatabaseNamesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseNamesOutcome(rsp);
        else
            return DescribeDatabaseNamesOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseNamesOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDatabaseNamesAsync(const DescribeDatabaseNamesRequest& request, const DescribeDatabaseNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseNamesRequest&;
    using Resp = DescribeDatabaseNamesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseNames", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeDatabaseNamesOutcomeCallable SqlserverClient::DescribeDatabaseNamesCallable(const DescribeDatabaseNamesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseNamesOutcome>>();
    DescribeDatabaseNamesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDatabaseNamesRequest&,
        DescribeDatabaseNamesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDatabasesOutcome SqlserverClient::DescribeDatabases(const DescribeDatabasesRequest &request)
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

void SqlserverClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DescribeDatabasesOutcomeCallable SqlserverClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabasesOutcome>>();
    DescribeDatabasesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDatabasesRequest&,
        DescribeDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeDatabasesNormalOutcome SqlserverClient::DescribeDatabasesNormal(const DescribeDatabasesNormalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabasesNormal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabasesNormalResponse rsp = DescribeDatabasesNormalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabasesNormalOutcome(rsp);
        else
            return DescribeDatabasesNormalOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabasesNormalOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDatabasesNormalAsync(const DescribeDatabasesNormalRequest& request, const DescribeDatabasesNormalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabasesNormalRequest&;
    using Resp = DescribeDatabasesNormalResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabasesNormal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeDatabasesNormalOutcomeCallable SqlserverClient::DescribeDatabasesNormalCallable(const DescribeDatabasesNormalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabasesNormalOutcome>>();
    DescribeDatabasesNormalAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeDatabasesNormalRequest&,
        DescribeDatabasesNormalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeFlowStatusOutcome SqlserverClient::DescribeFlowStatus(const DescribeFlowStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowStatusResponse rsp = DescribeFlowStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowStatusOutcome(rsp);
        else
            return DescribeFlowStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowStatusOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeFlowStatusAsync(const DescribeFlowStatusRequest& request, const DescribeFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowStatusRequest&;
    using Resp = DescribeFlowStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeFlowStatusOutcomeCallable SqlserverClient::DescribeFlowStatusCallable(const DescribeFlowStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowStatusOutcome>>();
    DescribeFlowStatusAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeFlowStatusRequest&,
        DescribeFlowStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeHASwitchLogOutcome SqlserverClient::DescribeHASwitchLog(const DescribeHASwitchLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHASwitchLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHASwitchLogResponse rsp = DescribeHASwitchLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHASwitchLogOutcome(rsp);
        else
            return DescribeHASwitchLogOutcome(o.GetError());
    }
    else
    {
        return DescribeHASwitchLogOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeHASwitchLogAsync(const DescribeHASwitchLogRequest& request, const DescribeHASwitchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHASwitchLogRequest&;
    using Resp = DescribeHASwitchLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHASwitchLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeHASwitchLogOutcomeCallable SqlserverClient::DescribeHASwitchLogCallable(const DescribeHASwitchLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHASwitchLogOutcome>>();
    DescribeHASwitchLogAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeHASwitchLogRequest&,
        DescribeHASwitchLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeIncrementalMigrationOutcome SqlserverClient::DescribeIncrementalMigration(const DescribeIncrementalMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIncrementalMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIncrementalMigrationResponse rsp = DescribeIncrementalMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIncrementalMigrationOutcome(rsp);
        else
            return DescribeIncrementalMigrationOutcome(o.GetError());
    }
    else
    {
        return DescribeIncrementalMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeIncrementalMigrationAsync(const DescribeIncrementalMigrationRequest& request, const DescribeIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIncrementalMigrationRequest&;
    using Resp = DescribeIncrementalMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIncrementalMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeIncrementalMigrationOutcomeCallable SqlserverClient::DescribeIncrementalMigrationCallable(const DescribeIncrementalMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIncrementalMigrationOutcome>>();
    DescribeIncrementalMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeIncrementalMigrationRequest&,
        DescribeIncrementalMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeInquiryPriceParameterOutcome SqlserverClient::DescribeInquiryPriceParameter(const DescribeInquiryPriceParameterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInquiryPriceParameter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInquiryPriceParameterResponse rsp = DescribeInquiryPriceParameterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInquiryPriceParameterOutcome(rsp);
        else
            return DescribeInquiryPriceParameterOutcome(o.GetError());
    }
    else
    {
        return DescribeInquiryPriceParameterOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInquiryPriceParameterAsync(const DescribeInquiryPriceParameterRequest& request, const DescribeInquiryPriceParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInquiryPriceParameterRequest&;
    using Resp = DescribeInquiryPriceParameterResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInquiryPriceParameter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeInquiryPriceParameterOutcomeCallable SqlserverClient::DescribeInquiryPriceParameterCallable(const DescribeInquiryPriceParameterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInquiryPriceParameterOutcome>>();
    DescribeInquiryPriceParameterAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeInquiryPriceParameterRequest&,
        DescribeInquiryPriceParameterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeInstanceByOrdersOutcome SqlserverClient::DescribeInstanceByOrders(const DescribeInstanceByOrdersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceByOrders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceByOrdersResponse rsp = DescribeInstanceByOrdersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceByOrdersOutcome(rsp);
        else
            return DescribeInstanceByOrdersOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceByOrdersOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInstanceByOrdersAsync(const DescribeInstanceByOrdersRequest& request, const DescribeInstanceByOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceByOrdersRequest&;
    using Resp = DescribeInstanceByOrdersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceByOrders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeInstanceByOrdersOutcomeCallable SqlserverClient::DescribeInstanceByOrdersCallable(const DescribeInstanceByOrdersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceByOrdersOutcome>>();
    DescribeInstanceByOrdersAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeInstanceByOrdersRequest&,
        DescribeInstanceByOrdersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeInstanceParamRecordsOutcome SqlserverClient::DescribeInstanceParamRecords(const DescribeInstanceParamRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParamRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamRecordsResponse rsp = DescribeInstanceParamRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamRecordsOutcome(rsp);
        else
            return DescribeInstanceParamRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamRecordsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInstanceParamRecordsAsync(const DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceParamRecordsRequest&;
    using Resp = DescribeInstanceParamRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceParamRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeInstanceParamRecordsOutcomeCallable SqlserverClient::DescribeInstanceParamRecordsCallable(const DescribeInstanceParamRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceParamRecordsOutcome>>();
    DescribeInstanceParamRecordsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeInstanceParamRecordsRequest&,
        DescribeInstanceParamRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeInstanceParamsOutcome SqlserverClient::DescribeInstanceParams(const DescribeInstanceParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamsResponse rsp = DescribeInstanceParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamsOutcome(rsp);
        else
            return DescribeInstanceParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInstanceParamsAsync(const DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceParamsRequest&;
    using Resp = DescribeInstanceParamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeInstanceParamsOutcomeCallable SqlserverClient::DescribeInstanceParamsCallable(const DescribeInstanceParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceParamsOutcome>>();
    DescribeInstanceParamsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeInstanceParamsRequest&,
        DescribeInstanceParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeInstanceTasksOutcome SqlserverClient::DescribeInstanceTasks(const DescribeInstanceTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTasksResponse rsp = DescribeInstanceTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTasksOutcome(rsp);
        else
            return DescribeInstanceTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTasksOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInstanceTasksAsync(const DescribeInstanceTasksRequest& request, const DescribeInstanceTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceTasksRequest&;
    using Resp = DescribeInstanceTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeInstanceTasksOutcomeCallable SqlserverClient::DescribeInstanceTasksCallable(const DescribeInstanceTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceTasksOutcome>>();
    DescribeInstanceTasksAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeInstanceTasksRequest&,
        DescribeInstanceTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeInstanceTradeParameterOutcome SqlserverClient::DescribeInstanceTradeParameter(const DescribeInstanceTradeParameterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTradeParameter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTradeParameterResponse rsp = DescribeInstanceTradeParameterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTradeParameterOutcome(rsp);
        else
            return DescribeInstanceTradeParameterOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTradeParameterOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInstanceTradeParameterAsync(const DescribeInstanceTradeParameterRequest& request, const DescribeInstanceTradeParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceTradeParameterRequest&;
    using Resp = DescribeInstanceTradeParameterResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceTradeParameter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeInstanceTradeParameterOutcomeCallable SqlserverClient::DescribeInstanceTradeParameterCallable(const DescribeInstanceTradeParameterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceTradeParameterOutcome>>();
    DescribeInstanceTradeParameterAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeInstanceTradeParameterRequest&,
        DescribeInstanceTradeParameterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeMaintenanceSpanOutcome SqlserverClient::DescribeMaintenanceSpan(const DescribeMaintenanceSpanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintenanceSpan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintenanceSpanResponse rsp = DescribeMaintenanceSpanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintenanceSpanOutcome(rsp);
        else
            return DescribeMaintenanceSpanOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintenanceSpanOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeMaintenanceSpanAsync(const DescribeMaintenanceSpanRequest& request, const DescribeMaintenanceSpanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMaintenanceSpanRequest&;
    using Resp = DescribeMaintenanceSpanResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMaintenanceSpan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeMaintenanceSpanOutcomeCallable SqlserverClient::DescribeMaintenanceSpanCallable(const DescribeMaintenanceSpanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMaintenanceSpanOutcome>>();
    DescribeMaintenanceSpanAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeMaintenanceSpanRequest&,
        DescribeMaintenanceSpanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeMigrationDatabasesOutcome SqlserverClient::DescribeMigrationDatabases(const DescribeMigrationDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationDatabasesResponse rsp = DescribeMigrationDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationDatabasesOutcome(rsp);
        else
            return DescribeMigrationDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationDatabasesOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeMigrationDatabasesAsync(const DescribeMigrationDatabasesRequest& request, const DescribeMigrationDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrationDatabasesRequest&;
    using Resp = DescribeMigrationDatabasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrationDatabases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeMigrationDatabasesOutcomeCallable SqlserverClient::DescribeMigrationDatabasesCallable(const DescribeMigrationDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrationDatabasesOutcome>>();
    DescribeMigrationDatabasesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeMigrationDatabasesRequest&,
        DescribeMigrationDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeMigrationDetailOutcome SqlserverClient::DescribeMigrationDetail(const DescribeMigrationDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationDetailResponse rsp = DescribeMigrationDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationDetailOutcome(rsp);
        else
            return DescribeMigrationDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationDetailOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeMigrationDetailAsync(const DescribeMigrationDetailRequest& request, const DescribeMigrationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrationDetailRequest&;
    using Resp = DescribeMigrationDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrationDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeMigrationDetailOutcomeCallable SqlserverClient::DescribeMigrationDetailCallable(const DescribeMigrationDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrationDetailOutcome>>();
    DescribeMigrationDetailAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeMigrationDetailRequest&,
        DescribeMigrationDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeMigrationsOutcome SqlserverClient::DescribeMigrations(const DescribeMigrationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationsResponse rsp = DescribeMigrationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationsOutcome(rsp);
        else
            return DescribeMigrationsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeMigrationsAsync(const DescribeMigrationsRequest& request, const DescribeMigrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrationsRequest&;
    using Resp = DescribeMigrationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeMigrationsOutcomeCallable SqlserverClient::DescribeMigrationsCallable(const DescribeMigrationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrationsOutcome>>();
    DescribeMigrationsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeMigrationsRequest&,
        DescribeMigrationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeOrdersOutcome SqlserverClient::DescribeOrders(const DescribeOrdersRequest &request)
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

void SqlserverClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DescribeOrdersOutcomeCallable SqlserverClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrdersOutcome>>();
    DescribeOrdersAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeOrdersRequest&,
        DescribeOrdersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeProductConfigOutcome SqlserverClient::DescribeProductConfig(const DescribeProductConfigRequest &request)
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

void SqlserverClient::DescribeProductConfigAsync(const DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DescribeProductConfigOutcomeCallable SqlserverClient::DescribeProductConfigCallable(const DescribeProductConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductConfigOutcome>>();
    DescribeProductConfigAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeProductConfigRequest&,
        DescribeProductConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeProductSpecOutcome SqlserverClient::DescribeProductSpec(const DescribeProductSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductSpecResponse rsp = DescribeProductSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductSpecOutcome(rsp);
        else
            return DescribeProductSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeProductSpecOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeProductSpecAsync(const DescribeProductSpecRequest& request, const DescribeProductSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductSpecRequest&;
    using Resp = DescribeProductSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeProductSpecOutcomeCallable SqlserverClient::DescribeProductSpecCallable(const DescribeProductSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductSpecOutcome>>();
    DescribeProductSpecAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeProductSpecRequest&,
        DescribeProductSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeProjectSecurityGroupsOutcome SqlserverClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
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

void SqlserverClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DescribeProjectSecurityGroupsOutcomeCallable SqlserverClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectSecurityGroupsOutcome>>();
    DescribeProjectSecurityGroupsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeProjectSecurityGroupsRequest&,
        DescribeProjectSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribePublishSubscribeOutcome SqlserverClient::DescribePublishSubscribe(const DescribePublishSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublishSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublishSubscribeResponse rsp = DescribePublishSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublishSubscribeOutcome(rsp);
        else
            return DescribePublishSubscribeOutcome(o.GetError());
    }
    else
    {
        return DescribePublishSubscribeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribePublishSubscribeAsync(const DescribePublishSubscribeRequest& request, const DescribePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublishSubscribeRequest&;
    using Resp = DescribePublishSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublishSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribePublishSubscribeOutcomeCallable SqlserverClient::DescribePublishSubscribeCallable(const DescribePublishSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublishSubscribeOutcome>>();
    DescribePublishSubscribeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribePublishSubscribeRequest&,
        DescribePublishSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeReadOnlyGroupAutoWeightOutcome SqlserverClient::DescribeReadOnlyGroupAutoWeight(const DescribeReadOnlyGroupAutoWeightRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReadOnlyGroupAutoWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReadOnlyGroupAutoWeightResponse rsp = DescribeReadOnlyGroupAutoWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReadOnlyGroupAutoWeightOutcome(rsp);
        else
            return DescribeReadOnlyGroupAutoWeightOutcome(o.GetError());
    }
    else
    {
        return DescribeReadOnlyGroupAutoWeightOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeReadOnlyGroupAutoWeightAsync(const DescribeReadOnlyGroupAutoWeightRequest& request, const DescribeReadOnlyGroupAutoWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReadOnlyGroupAutoWeightRequest&;
    using Resp = DescribeReadOnlyGroupAutoWeightResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReadOnlyGroupAutoWeight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeReadOnlyGroupAutoWeightOutcomeCallable SqlserverClient::DescribeReadOnlyGroupAutoWeightCallable(const DescribeReadOnlyGroupAutoWeightRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReadOnlyGroupAutoWeightOutcome>>();
    DescribeReadOnlyGroupAutoWeightAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeReadOnlyGroupAutoWeightRequest&,
        DescribeReadOnlyGroupAutoWeightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeReadOnlyGroupByReadOnlyInstanceOutcome SqlserverClient::DescribeReadOnlyGroupByReadOnlyInstance(const DescribeReadOnlyGroupByReadOnlyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReadOnlyGroupByReadOnlyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReadOnlyGroupByReadOnlyInstanceResponse rsp = DescribeReadOnlyGroupByReadOnlyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReadOnlyGroupByReadOnlyInstanceOutcome(rsp);
        else
            return DescribeReadOnlyGroupByReadOnlyInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeReadOnlyGroupByReadOnlyInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeReadOnlyGroupByReadOnlyInstanceAsync(const DescribeReadOnlyGroupByReadOnlyInstanceRequest& request, const DescribeReadOnlyGroupByReadOnlyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReadOnlyGroupByReadOnlyInstanceRequest&;
    using Resp = DescribeReadOnlyGroupByReadOnlyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReadOnlyGroupByReadOnlyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeReadOnlyGroupByReadOnlyInstanceOutcomeCallable SqlserverClient::DescribeReadOnlyGroupByReadOnlyInstanceCallable(const DescribeReadOnlyGroupByReadOnlyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReadOnlyGroupByReadOnlyInstanceOutcome>>();
    DescribeReadOnlyGroupByReadOnlyInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeReadOnlyGroupByReadOnlyInstanceRequest&,
        DescribeReadOnlyGroupByReadOnlyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeReadOnlyGroupDetailsOutcome SqlserverClient::DescribeReadOnlyGroupDetails(const DescribeReadOnlyGroupDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReadOnlyGroupDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReadOnlyGroupDetailsResponse rsp = DescribeReadOnlyGroupDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReadOnlyGroupDetailsOutcome(rsp);
        else
            return DescribeReadOnlyGroupDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeReadOnlyGroupDetailsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeReadOnlyGroupDetailsAsync(const DescribeReadOnlyGroupDetailsRequest& request, const DescribeReadOnlyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReadOnlyGroupDetailsRequest&;
    using Resp = DescribeReadOnlyGroupDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReadOnlyGroupDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeReadOnlyGroupDetailsOutcomeCallable SqlserverClient::DescribeReadOnlyGroupDetailsCallable(const DescribeReadOnlyGroupDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReadOnlyGroupDetailsOutcome>>();
    DescribeReadOnlyGroupDetailsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeReadOnlyGroupDetailsRequest&,
        DescribeReadOnlyGroupDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeReadOnlyGroupListOutcome SqlserverClient::DescribeReadOnlyGroupList(const DescribeReadOnlyGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReadOnlyGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReadOnlyGroupListResponse rsp = DescribeReadOnlyGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReadOnlyGroupListOutcome(rsp);
        else
            return DescribeReadOnlyGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeReadOnlyGroupListOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeReadOnlyGroupListAsync(const DescribeReadOnlyGroupListRequest& request, const DescribeReadOnlyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReadOnlyGroupListRequest&;
    using Resp = DescribeReadOnlyGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReadOnlyGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeReadOnlyGroupListOutcomeCallable SqlserverClient::DescribeReadOnlyGroupListCallable(const DescribeReadOnlyGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReadOnlyGroupListOutcome>>();
    DescribeReadOnlyGroupListAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeReadOnlyGroupListRequest&,
        DescribeReadOnlyGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeRegionsOutcome SqlserverClient::DescribeRegions(const DescribeRegionsRequest &request)
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

void SqlserverClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DescribeRegionsOutcomeCallable SqlserverClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeRegularBackupPlanOutcome SqlserverClient::DescribeRegularBackupPlan(const DescribeRegularBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegularBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegularBackupPlanResponse rsp = DescribeRegularBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegularBackupPlanOutcome(rsp);
        else
            return DescribeRegularBackupPlanOutcome(o.GetError());
    }
    else
    {
        return DescribeRegularBackupPlanOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeRegularBackupPlanAsync(const DescribeRegularBackupPlanRequest& request, const DescribeRegularBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegularBackupPlanRequest&;
    using Resp = DescribeRegularBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegularBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeRegularBackupPlanOutcomeCallable SqlserverClient::DescribeRegularBackupPlanCallable(const DescribeRegularBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegularBackupPlanOutcome>>();
    DescribeRegularBackupPlanAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeRegularBackupPlanRequest&,
        DescribeRegularBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeRestoreTaskOutcome SqlserverClient::DescribeRestoreTask(const DescribeRestoreTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRestoreTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRestoreTaskResponse rsp = DescribeRestoreTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRestoreTaskOutcome(rsp);
        else
            return DescribeRestoreTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeRestoreTaskOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeRestoreTaskAsync(const DescribeRestoreTaskRequest& request, const DescribeRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRestoreTaskRequest&;
    using Resp = DescribeRestoreTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRestoreTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeRestoreTaskOutcomeCallable SqlserverClient::DescribeRestoreTaskCallable(const DescribeRestoreTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRestoreTaskOutcome>>();
    DescribeRestoreTaskAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeRestoreTaskRequest&,
        DescribeRestoreTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeRestoreTimeRangeOutcome SqlserverClient::DescribeRestoreTimeRange(const DescribeRestoreTimeRangeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRestoreTimeRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRestoreTimeRangeResponse rsp = DescribeRestoreTimeRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRestoreTimeRangeOutcome(rsp);
        else
            return DescribeRestoreTimeRangeOutcome(o.GetError());
    }
    else
    {
        return DescribeRestoreTimeRangeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeRestoreTimeRangeAsync(const DescribeRestoreTimeRangeRequest& request, const DescribeRestoreTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRestoreTimeRangeRequest&;
    using Resp = DescribeRestoreTimeRangeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRestoreTimeRange", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeRestoreTimeRangeOutcomeCallable SqlserverClient::DescribeRestoreTimeRangeCallable(const DescribeRestoreTimeRangeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRestoreTimeRangeOutcome>>();
    DescribeRestoreTimeRangeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeRestoreTimeRangeRequest&,
        DescribeRestoreTimeRangeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeRollbackTimeOutcome SqlserverClient::DescribeRollbackTime(const DescribeRollbackTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackTimeResponse rsp = DescribeRollbackTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackTimeOutcome(rsp);
        else
            return DescribeRollbackTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackTimeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeRollbackTimeAsync(const DescribeRollbackTimeRequest& request, const DescribeRollbackTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRollbackTimeRequest&;
    using Resp = DescribeRollbackTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRollbackTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeRollbackTimeOutcomeCallable SqlserverClient::DescribeRollbackTimeCallable(const DescribeRollbackTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRollbackTimeOutcome>>();
    DescribeRollbackTimeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeRollbackTimeRequest&,
        DescribeRollbackTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeSlowlogsOutcome SqlserverClient::DescribeSlowlogs(const DescribeSlowlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowlogsResponse rsp = DescribeSlowlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowlogsOutcome(rsp);
        else
            return DescribeSlowlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowlogsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeSlowlogsAsync(const DescribeSlowlogsRequest& request, const DescribeSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowlogsRequest&;
    using Resp = DescribeSlowlogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowlogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeSlowlogsOutcomeCallable SqlserverClient::DescribeSlowlogsCallable(const DescribeSlowlogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowlogsOutcome>>();
    DescribeSlowlogsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeSlowlogsRequest&,
        DescribeSlowlogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeSpecSellStatusOutcome SqlserverClient::DescribeSpecSellStatus(const DescribeSpecSellStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpecSellStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecSellStatusResponse rsp = DescribeSpecSellStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecSellStatusOutcome(rsp);
        else
            return DescribeSpecSellStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecSellStatusOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeSpecSellStatusAsync(const DescribeSpecSellStatusRequest& request, const DescribeSpecSellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpecSellStatusRequest&;
    using Resp = DescribeSpecSellStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpecSellStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeSpecSellStatusOutcomeCallable SqlserverClient::DescribeSpecSellStatusCallable(const DescribeSpecSellStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpecSellStatusOutcome>>();
    DescribeSpecSellStatusAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeSpecSellStatusRequest&,
        DescribeSpecSellStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeUpgradeInstanceCheckOutcome SqlserverClient::DescribeUpgradeInstanceCheck(const DescribeUpgradeInstanceCheckRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpgradeInstanceCheck");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpgradeInstanceCheckResponse rsp = DescribeUpgradeInstanceCheckResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpgradeInstanceCheckOutcome(rsp);
        else
            return DescribeUpgradeInstanceCheckOutcome(o.GetError());
    }
    else
    {
        return DescribeUpgradeInstanceCheckOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeUpgradeInstanceCheckAsync(const DescribeUpgradeInstanceCheckRequest& request, const DescribeUpgradeInstanceCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUpgradeInstanceCheckRequest&;
    using Resp = DescribeUpgradeInstanceCheckResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUpgradeInstanceCheck", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeUpgradeInstanceCheckOutcomeCallable SqlserverClient::DescribeUpgradeInstanceCheckCallable(const DescribeUpgradeInstanceCheckRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUpgradeInstanceCheckOutcome>>();
    DescribeUpgradeInstanceCheckAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeUpgradeInstanceCheckRequest&,
        DescribeUpgradeInstanceCheckOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeUploadBackupInfoOutcome SqlserverClient::DescribeUploadBackupInfo(const DescribeUploadBackupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadBackupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadBackupInfoResponse rsp = DescribeUploadBackupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadBackupInfoOutcome(rsp);
        else
            return DescribeUploadBackupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadBackupInfoOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeUploadBackupInfoAsync(const DescribeUploadBackupInfoRequest& request, const DescribeUploadBackupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUploadBackupInfoRequest&;
    using Resp = DescribeUploadBackupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUploadBackupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeUploadBackupInfoOutcomeCallable SqlserverClient::DescribeUploadBackupInfoCallable(const DescribeUploadBackupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUploadBackupInfoOutcome>>();
    DescribeUploadBackupInfoAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeUploadBackupInfoRequest&,
        DescribeUploadBackupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeUploadIncrementalInfoOutcome SqlserverClient::DescribeUploadIncrementalInfo(const DescribeUploadIncrementalInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadIncrementalInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadIncrementalInfoResponse rsp = DescribeUploadIncrementalInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadIncrementalInfoOutcome(rsp);
        else
            return DescribeUploadIncrementalInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadIncrementalInfoOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeUploadIncrementalInfoAsync(const DescribeUploadIncrementalInfoRequest& request, const DescribeUploadIncrementalInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUploadIncrementalInfoRequest&;
    using Resp = DescribeUploadIncrementalInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUploadIncrementalInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeUploadIncrementalInfoOutcomeCallable SqlserverClient::DescribeUploadIncrementalInfoCallable(const DescribeUploadIncrementalInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUploadIncrementalInfoOutcome>>();
    DescribeUploadIncrementalInfoAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeUploadIncrementalInfoRequest&,
        DescribeUploadIncrementalInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeXEventsOutcome SqlserverClient::DescribeXEvents(const DescribeXEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeXEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeXEventsResponse rsp = DescribeXEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeXEventsOutcome(rsp);
        else
            return DescribeXEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeXEventsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeXEventsAsync(const DescribeXEventsRequest& request, const DescribeXEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeXEventsRequest&;
    using Resp = DescribeXEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeXEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::DescribeXEventsOutcomeCallable SqlserverClient::DescribeXEventsCallable(const DescribeXEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeXEventsOutcome>>();
    DescribeXEventsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeXEventsRequest&,
        DescribeXEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DescribeZonesOutcome SqlserverClient::DescribeZones(const DescribeZonesRequest &request)
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

void SqlserverClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DescribeZonesOutcomeCallable SqlserverClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZonesOutcome>>();
    DescribeZonesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DescribeZonesRequest&,
        DescribeZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::DisassociateSecurityGroupsOutcome SqlserverClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
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

void SqlserverClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::DisassociateSecurityGroupsOutcomeCallable SqlserverClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupsOutcome>>();
    DisassociateSecurityGroupsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const DisassociateSecurityGroupsRequest&,
        DisassociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::InquiryPriceCreateDBInstancesOutcome SqlserverClient::InquiryPriceCreateDBInstances(const InquiryPriceCreateDBInstancesRequest &request)
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

void SqlserverClient::InquiryPriceCreateDBInstancesAsync(const InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::InquiryPriceCreateDBInstancesOutcomeCallable SqlserverClient::InquiryPriceCreateDBInstancesCallable(const InquiryPriceCreateDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceCreateDBInstancesOutcome>>();
    InquiryPriceCreateDBInstancesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const InquiryPriceCreateDBInstancesRequest&,
        InquiryPriceCreateDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::InquiryPriceRenewDBInstanceOutcome SqlserverClient::InquiryPriceRenewDBInstance(const InquiryPriceRenewDBInstanceRequest &request)
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

void SqlserverClient::InquiryPriceRenewDBInstanceAsync(const InquiryPriceRenewDBInstanceRequest& request, const InquiryPriceRenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::InquiryPriceRenewDBInstanceOutcomeCallable SqlserverClient::InquiryPriceRenewDBInstanceCallable(const InquiryPriceRenewDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRenewDBInstanceOutcome>>();
    InquiryPriceRenewDBInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const InquiryPriceRenewDBInstanceRequest&,
        InquiryPriceRenewDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::InquiryPriceUpgradeDBInstanceOutcome SqlserverClient::InquiryPriceUpgradeDBInstance(const InquiryPriceUpgradeDBInstanceRequest &request)
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

void SqlserverClient::InquiryPriceUpgradeDBInstanceAsync(const InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::InquiryPriceUpgradeDBInstanceOutcomeCallable SqlserverClient::InquiryPriceUpgradeDBInstanceCallable(const InquiryPriceUpgradeDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceUpgradeDBInstanceOutcome>>();
    InquiryPriceUpgradeDBInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const InquiryPriceUpgradeDBInstanceRequest&,
        InquiryPriceUpgradeDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyAccountPrivilegeOutcome SqlserverClient::ModifyAccountPrivilege(const ModifyAccountPrivilegeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountPrivilege");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountPrivilegeResponse rsp = ModifyAccountPrivilegeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountPrivilegeOutcome(rsp);
        else
            return ModifyAccountPrivilegeOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountPrivilegeOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyAccountPrivilegeAsync(const ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccountPrivilegeRequest&;
    using Resp = ModifyAccountPrivilegeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccountPrivilege", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyAccountPrivilegeOutcomeCallable SqlserverClient::ModifyAccountPrivilegeCallable(const ModifyAccountPrivilegeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountPrivilegeOutcome>>();
    ModifyAccountPrivilegeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyAccountPrivilegeRequest&,
        ModifyAccountPrivilegeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyAccountRemarkOutcome SqlserverClient::ModifyAccountRemark(const ModifyAccountRemarkRequest &request)
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

void SqlserverClient::ModifyAccountRemarkAsync(const ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::ModifyAccountRemarkOutcomeCallable SqlserverClient::ModifyAccountRemarkCallable(const ModifyAccountRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountRemarkOutcome>>();
    ModifyAccountRemarkAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyAccountRemarkRequest&,
        ModifyAccountRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyBackupMigrationOutcome SqlserverClient::ModifyBackupMigration(const ModifyBackupMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupMigrationResponse rsp = ModifyBackupMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupMigrationOutcome(rsp);
        else
            return ModifyBackupMigrationOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyBackupMigrationAsync(const ModifyBackupMigrationRequest& request, const ModifyBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupMigrationRequest&;
    using Resp = ModifyBackupMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyBackupMigrationOutcomeCallable SqlserverClient::ModifyBackupMigrationCallable(const ModifyBackupMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupMigrationOutcome>>();
    ModifyBackupMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyBackupMigrationRequest&,
        ModifyBackupMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyBackupNameOutcome SqlserverClient::ModifyBackupName(const ModifyBackupNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupNameResponse rsp = ModifyBackupNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupNameOutcome(rsp);
        else
            return ModifyBackupNameOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupNameOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyBackupNameAsync(const ModifyBackupNameRequest& request, const ModifyBackupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupNameRequest&;
    using Resp = ModifyBackupNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyBackupNameOutcomeCallable SqlserverClient::ModifyBackupNameCallable(const ModifyBackupNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupNameOutcome>>();
    ModifyBackupNameAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyBackupNameRequest&,
        ModifyBackupNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyBackupStrategyOutcome SqlserverClient::ModifyBackupStrategy(const ModifyBackupStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupStrategyResponse rsp = ModifyBackupStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupStrategyOutcome(rsp);
        else
            return ModifyBackupStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupStrategyOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyBackupStrategyAsync(const ModifyBackupStrategyRequest& request, const ModifyBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupStrategyRequest&;
    using Resp = ModifyBackupStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyBackupStrategyOutcomeCallable SqlserverClient::ModifyBackupStrategyCallable(const ModifyBackupStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupStrategyOutcome>>();
    ModifyBackupStrategyAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyBackupStrategyRequest&,
        ModifyBackupStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyCloseWanIpOutcome SqlserverClient::ModifyCloseWanIp(const ModifyCloseWanIpRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloseWanIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloseWanIpResponse rsp = ModifyCloseWanIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloseWanIpOutcome(rsp);
        else
            return ModifyCloseWanIpOutcome(o.GetError());
    }
    else
    {
        return ModifyCloseWanIpOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyCloseWanIpAsync(const ModifyCloseWanIpRequest& request, const ModifyCloseWanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloseWanIpRequest&;
    using Resp = ModifyCloseWanIpResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloseWanIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyCloseWanIpOutcomeCallable SqlserverClient::ModifyCloseWanIpCallable(const ModifyCloseWanIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloseWanIpOutcome>>();
    ModifyCloseWanIpAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyCloseWanIpRequest&,
        ModifyCloseWanIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyCrossBackupStrategyOutcome SqlserverClient::ModifyCrossBackupStrategy(const ModifyCrossBackupStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCrossBackupStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCrossBackupStrategyResponse rsp = ModifyCrossBackupStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCrossBackupStrategyOutcome(rsp);
        else
            return ModifyCrossBackupStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyCrossBackupStrategyOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyCrossBackupStrategyAsync(const ModifyCrossBackupStrategyRequest& request, const ModifyCrossBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCrossBackupStrategyRequest&;
    using Resp = ModifyCrossBackupStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCrossBackupStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyCrossBackupStrategyOutcomeCallable SqlserverClient::ModifyCrossBackupStrategyCallable(const ModifyCrossBackupStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCrossBackupStrategyOutcome>>();
    ModifyCrossBackupStrategyAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyCrossBackupStrategyRequest&,
        ModifyCrossBackupStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDBEncryptAttributesOutcome SqlserverClient::ModifyDBEncryptAttributes(const ModifyDBEncryptAttributesRequest &request)
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

void SqlserverClient::ModifyDBEncryptAttributesAsync(const ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::ModifyDBEncryptAttributesOutcomeCallable SqlserverClient::ModifyDBEncryptAttributesCallable(const ModifyDBEncryptAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBEncryptAttributesOutcome>>();
    ModifyDBEncryptAttributesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDBEncryptAttributesRequest&,
        ModifyDBEncryptAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDBInstanceNameOutcome SqlserverClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
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

void SqlserverClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::ModifyDBInstanceNameOutcomeCallable SqlserverClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceNameOutcome>>();
    ModifyDBInstanceNameAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDBInstanceNameRequest&,
        ModifyDBInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDBInstanceNetworkOutcome SqlserverClient::ModifyDBInstanceNetwork(const ModifyDBInstanceNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceNetworkResponse rsp = ModifyDBInstanceNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceNetworkOutcome(rsp);
        else
            return ModifyDBInstanceNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceNetworkOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceNetworkAsync(const ModifyDBInstanceNetworkRequest& request, const ModifyDBInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceNetworkRequest&;
    using Resp = ModifyDBInstanceNetworkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceNetwork", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDBInstanceNetworkOutcomeCallable SqlserverClient::ModifyDBInstanceNetworkCallable(const ModifyDBInstanceNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceNetworkOutcome>>();
    ModifyDBInstanceNetworkAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDBInstanceNetworkRequest&,
        ModifyDBInstanceNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDBInstanceNoteOutcome SqlserverClient::ModifyDBInstanceNote(const ModifyDBInstanceNoteRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceNote");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceNoteResponse rsp = ModifyDBInstanceNoteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceNoteOutcome(rsp);
        else
            return ModifyDBInstanceNoteOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceNoteOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceNoteAsync(const ModifyDBInstanceNoteRequest& request, const ModifyDBInstanceNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceNoteRequest&;
    using Resp = ModifyDBInstanceNoteResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceNote", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDBInstanceNoteOutcomeCallable SqlserverClient::ModifyDBInstanceNoteCallable(const ModifyDBInstanceNoteRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceNoteOutcome>>();
    ModifyDBInstanceNoteAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDBInstanceNoteRequest&,
        ModifyDBInstanceNoteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDBInstanceProjectOutcome SqlserverClient::ModifyDBInstanceProject(const ModifyDBInstanceProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceProjectResponse rsp = ModifyDBInstanceProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceProjectOutcome(rsp);
        else
            return ModifyDBInstanceProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceProjectOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceProjectAsync(const ModifyDBInstanceProjectRequest& request, const ModifyDBInstanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceProjectRequest&;
    using Resp = ModifyDBInstanceProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDBInstanceProjectOutcomeCallable SqlserverClient::ModifyDBInstanceProjectCallable(const ModifyDBInstanceProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceProjectOutcome>>();
    ModifyDBInstanceProjectAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDBInstanceProjectRequest&,
        ModifyDBInstanceProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDBInstanceRenewFlagOutcome SqlserverClient::ModifyDBInstanceRenewFlag(const ModifyDBInstanceRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceRenewFlagResponse rsp = ModifyDBInstanceRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceRenewFlagOutcome(rsp);
        else
            return ModifyDBInstanceRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceRenewFlagOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceRenewFlagAsync(const ModifyDBInstanceRenewFlagRequest& request, const ModifyDBInstanceRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceRenewFlagRequest&;
    using Resp = ModifyDBInstanceRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDBInstanceRenewFlagOutcomeCallable SqlserverClient::ModifyDBInstanceRenewFlagCallable(const ModifyDBInstanceRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceRenewFlagOutcome>>();
    ModifyDBInstanceRenewFlagAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDBInstanceRenewFlagRequest&,
        ModifyDBInstanceRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDBInstanceSSLOutcome SqlserverClient::ModifyDBInstanceSSL(const ModifyDBInstanceSSLRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSSL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSSLResponse rsp = ModifyDBInstanceSSLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSSLOutcome(rsp);
        else
            return ModifyDBInstanceSSLOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSSLOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceSSLAsync(const ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceSSLRequest&;
    using Resp = ModifyDBInstanceSSLResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceSSL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDBInstanceSSLOutcomeCallable SqlserverClient::ModifyDBInstanceSSLCallable(const ModifyDBInstanceSSLRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSSLOutcome>>();
    ModifyDBInstanceSSLAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDBInstanceSSLRequest&,
        ModifyDBInstanceSSLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDBInstanceSecurityGroupsOutcome SqlserverClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void SqlserverClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::ModifyDBInstanceSecurityGroupsOutcomeCallable SqlserverClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupsOutcome>>();
    ModifyDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDBInstanceSecurityGroupsRequest&,
        ModifyDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDBNameOutcome SqlserverClient::ModifyDBName(const ModifyDBNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBNameResponse rsp = ModifyDBNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBNameOutcome(rsp);
        else
            return ModifyDBNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDBNameOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBNameAsync(const ModifyDBNameRequest& request, const ModifyDBNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBNameRequest&;
    using Resp = ModifyDBNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDBNameOutcomeCallable SqlserverClient::ModifyDBNameCallable(const ModifyDBNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBNameOutcome>>();
    ModifyDBNameAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDBNameRequest&,
        ModifyDBNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDBRemarkOutcome SqlserverClient::ModifyDBRemark(const ModifyDBRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBRemarkResponse rsp = ModifyDBRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBRemarkOutcome(rsp);
        else
            return ModifyDBRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyDBRemarkOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBRemarkAsync(const ModifyDBRemarkRequest& request, const ModifyDBRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBRemarkRequest&;
    using Resp = ModifyDBRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDBRemarkOutcomeCallable SqlserverClient::ModifyDBRemarkCallable(const ModifyDBRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBRemarkOutcome>>();
    ModifyDBRemarkAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDBRemarkRequest&,
        ModifyDBRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDReadableOutcome SqlserverClient::ModifyDReadable(const ModifyDReadableRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDReadable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDReadableResponse rsp = ModifyDReadableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDReadableOutcome(rsp);
        else
            return ModifyDReadableOutcome(o.GetError());
    }
    else
    {
        return ModifyDReadableOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDReadableAsync(const ModifyDReadableRequest& request, const ModifyDReadableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDReadableRequest&;
    using Resp = ModifyDReadableResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDReadable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDReadableOutcomeCallable SqlserverClient::ModifyDReadableCallable(const ModifyDReadableRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDReadableOutcome>>();
    ModifyDReadableAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDReadableRequest&,
        ModifyDReadableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDatabaseCDCOutcome SqlserverClient::ModifyDatabaseCDC(const ModifyDatabaseCDCRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseCDC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseCDCResponse rsp = ModifyDatabaseCDCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseCDCOutcome(rsp);
        else
            return ModifyDatabaseCDCOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseCDCOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDatabaseCDCAsync(const ModifyDatabaseCDCRequest& request, const ModifyDatabaseCDCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatabaseCDCRequest&;
    using Resp = ModifyDatabaseCDCResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatabaseCDC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDatabaseCDCOutcomeCallable SqlserverClient::ModifyDatabaseCDCCallable(const ModifyDatabaseCDCRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatabaseCDCOutcome>>();
    ModifyDatabaseCDCAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDatabaseCDCRequest&,
        ModifyDatabaseCDCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDatabaseCTOutcome SqlserverClient::ModifyDatabaseCT(const ModifyDatabaseCTRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseCT");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseCTResponse rsp = ModifyDatabaseCTResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseCTOutcome(rsp);
        else
            return ModifyDatabaseCTOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseCTOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDatabaseCTAsync(const ModifyDatabaseCTRequest& request, const ModifyDatabaseCTAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatabaseCTRequest&;
    using Resp = ModifyDatabaseCTResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatabaseCT", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDatabaseCTOutcomeCallable SqlserverClient::ModifyDatabaseCTCallable(const ModifyDatabaseCTRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatabaseCTOutcome>>();
    ModifyDatabaseCTAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDatabaseCTRequest&,
        ModifyDatabaseCTOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDatabaseMdfOutcome SqlserverClient::ModifyDatabaseMdf(const ModifyDatabaseMdfRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseMdf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseMdfResponse rsp = ModifyDatabaseMdfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseMdfOutcome(rsp);
        else
            return ModifyDatabaseMdfOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseMdfOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDatabaseMdfAsync(const ModifyDatabaseMdfRequest& request, const ModifyDatabaseMdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatabaseMdfRequest&;
    using Resp = ModifyDatabaseMdfResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatabaseMdf", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDatabaseMdfOutcomeCallable SqlserverClient::ModifyDatabaseMdfCallable(const ModifyDatabaseMdfRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatabaseMdfOutcome>>();
    ModifyDatabaseMdfAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDatabaseMdfRequest&,
        ModifyDatabaseMdfOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDatabasePrivilegeOutcome SqlserverClient::ModifyDatabasePrivilege(const ModifyDatabasePrivilegeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabasePrivilege");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabasePrivilegeResponse rsp = ModifyDatabasePrivilegeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabasePrivilegeOutcome(rsp);
        else
            return ModifyDatabasePrivilegeOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabasePrivilegeOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDatabasePrivilegeAsync(const ModifyDatabasePrivilegeRequest& request, const ModifyDatabasePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatabasePrivilegeRequest&;
    using Resp = ModifyDatabasePrivilegeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatabasePrivilege", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDatabasePrivilegeOutcomeCallable SqlserverClient::ModifyDatabasePrivilegeCallable(const ModifyDatabasePrivilegeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatabasePrivilegeOutcome>>();
    ModifyDatabasePrivilegeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDatabasePrivilegeRequest&,
        ModifyDatabasePrivilegeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyDatabaseShrinkMDFOutcome SqlserverClient::ModifyDatabaseShrinkMDF(const ModifyDatabaseShrinkMDFRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseShrinkMDF");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseShrinkMDFResponse rsp = ModifyDatabaseShrinkMDFResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseShrinkMDFOutcome(rsp);
        else
            return ModifyDatabaseShrinkMDFOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseShrinkMDFOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDatabaseShrinkMDFAsync(const ModifyDatabaseShrinkMDFRequest& request, const ModifyDatabaseShrinkMDFAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatabaseShrinkMDFRequest&;
    using Resp = ModifyDatabaseShrinkMDFResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatabaseShrinkMDF", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyDatabaseShrinkMDFOutcomeCallable SqlserverClient::ModifyDatabaseShrinkMDFCallable(const ModifyDatabaseShrinkMDFRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatabaseShrinkMDFOutcome>>();
    ModifyDatabaseShrinkMDFAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyDatabaseShrinkMDFRequest&,
        ModifyDatabaseShrinkMDFOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyIncrementalMigrationOutcome SqlserverClient::ModifyIncrementalMigration(const ModifyIncrementalMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIncrementalMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIncrementalMigrationResponse rsp = ModifyIncrementalMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIncrementalMigrationOutcome(rsp);
        else
            return ModifyIncrementalMigrationOutcome(o.GetError());
    }
    else
    {
        return ModifyIncrementalMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyIncrementalMigrationAsync(const ModifyIncrementalMigrationRequest& request, const ModifyIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIncrementalMigrationRequest&;
    using Resp = ModifyIncrementalMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIncrementalMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyIncrementalMigrationOutcomeCallable SqlserverClient::ModifyIncrementalMigrationCallable(const ModifyIncrementalMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIncrementalMigrationOutcome>>();
    ModifyIncrementalMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyIncrementalMigrationRequest&,
        ModifyIncrementalMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyInstanceEncryptAttributesOutcome SqlserverClient::ModifyInstanceEncryptAttributes(const ModifyInstanceEncryptAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceEncryptAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceEncryptAttributesResponse rsp = ModifyInstanceEncryptAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceEncryptAttributesOutcome(rsp);
        else
            return ModifyInstanceEncryptAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceEncryptAttributesOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyInstanceEncryptAttributesAsync(const ModifyInstanceEncryptAttributesRequest& request, const ModifyInstanceEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceEncryptAttributesRequest&;
    using Resp = ModifyInstanceEncryptAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceEncryptAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyInstanceEncryptAttributesOutcomeCallable SqlserverClient::ModifyInstanceEncryptAttributesCallable(const ModifyInstanceEncryptAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceEncryptAttributesOutcome>>();
    ModifyInstanceEncryptAttributesAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyInstanceEncryptAttributesRequest&,
        ModifyInstanceEncryptAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyInstanceParamOutcome SqlserverClient::ModifyInstanceParam(const ModifyInstanceParamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceParamResponse rsp = ModifyInstanceParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceParamOutcome(rsp);
        else
            return ModifyInstanceParamOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceParamOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyInstanceParamAsync(const ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceParamRequest&;
    using Resp = ModifyInstanceParamResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceParam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyInstanceParamOutcomeCallable SqlserverClient::ModifyInstanceParamCallable(const ModifyInstanceParamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceParamOutcome>>();
    ModifyInstanceParamAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyInstanceParamRequest&,
        ModifyInstanceParamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyMaintenanceSpanOutcome SqlserverClient::ModifyMaintenanceSpan(const ModifyMaintenanceSpanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintenanceSpan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintenanceSpanResponse rsp = ModifyMaintenanceSpanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintenanceSpanOutcome(rsp);
        else
            return ModifyMaintenanceSpanOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintenanceSpanOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyMaintenanceSpanAsync(const ModifyMaintenanceSpanRequest& request, const ModifyMaintenanceSpanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMaintenanceSpanRequest&;
    using Resp = ModifyMaintenanceSpanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMaintenanceSpan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyMaintenanceSpanOutcomeCallable SqlserverClient::ModifyMaintenanceSpanCallable(const ModifyMaintenanceSpanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMaintenanceSpanOutcome>>();
    ModifyMaintenanceSpanAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyMaintenanceSpanRequest&,
        ModifyMaintenanceSpanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyMigrationOutcome SqlserverClient::ModifyMigration(const ModifyMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrationResponse rsp = ModifyMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrationOutcome(rsp);
        else
            return ModifyMigrationOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyMigrationAsync(const ModifyMigrationRequest& request, const ModifyMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMigrationRequest&;
    using Resp = ModifyMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyMigrationOutcomeCallable SqlserverClient::ModifyMigrationCallable(const ModifyMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMigrationOutcome>>();
    ModifyMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyMigrationRequest&,
        ModifyMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyOpenWanIpOutcome SqlserverClient::ModifyOpenWanIp(const ModifyOpenWanIpRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOpenWanIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOpenWanIpResponse rsp = ModifyOpenWanIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOpenWanIpOutcome(rsp);
        else
            return ModifyOpenWanIpOutcome(o.GetError());
    }
    else
    {
        return ModifyOpenWanIpOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyOpenWanIpAsync(const ModifyOpenWanIpRequest& request, const ModifyOpenWanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOpenWanIpRequest&;
    using Resp = ModifyOpenWanIpResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOpenWanIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyOpenWanIpOutcomeCallable SqlserverClient::ModifyOpenWanIpCallable(const ModifyOpenWanIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOpenWanIpOutcome>>();
    ModifyOpenWanIpAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyOpenWanIpRequest&,
        ModifyOpenWanIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyPublishSubscribeOutcome SqlserverClient::ModifyPublishSubscribe(const ModifyPublishSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPublishSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPublishSubscribeResponse rsp = ModifyPublishSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPublishSubscribeOutcome(rsp);
        else
            return ModifyPublishSubscribeOutcome(o.GetError());
    }
    else
    {
        return ModifyPublishSubscribeOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyPublishSubscribeAsync(const ModifyPublishSubscribeRequest& request, const ModifyPublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPublishSubscribeRequest&;
    using Resp = ModifyPublishSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPublishSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyPublishSubscribeOutcomeCallable SqlserverClient::ModifyPublishSubscribeCallable(const ModifyPublishSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPublishSubscribeOutcome>>();
    ModifyPublishSubscribeAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyPublishSubscribeRequest&,
        ModifyPublishSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyPublishSubscribeNameOutcome SqlserverClient::ModifyPublishSubscribeName(const ModifyPublishSubscribeNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPublishSubscribeName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPublishSubscribeNameResponse rsp = ModifyPublishSubscribeNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPublishSubscribeNameOutcome(rsp);
        else
            return ModifyPublishSubscribeNameOutcome(o.GetError());
    }
    else
    {
        return ModifyPublishSubscribeNameOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyPublishSubscribeNameAsync(const ModifyPublishSubscribeNameRequest& request, const ModifyPublishSubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPublishSubscribeNameRequest&;
    using Resp = ModifyPublishSubscribeNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPublishSubscribeName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyPublishSubscribeNameOutcomeCallable SqlserverClient::ModifyPublishSubscribeNameCallable(const ModifyPublishSubscribeNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPublishSubscribeNameOutcome>>();
    ModifyPublishSubscribeNameAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyPublishSubscribeNameRequest&,
        ModifyPublishSubscribeNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ModifyReadOnlyGroupDetailsOutcome SqlserverClient::ModifyReadOnlyGroupDetails(const ModifyReadOnlyGroupDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReadOnlyGroupDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReadOnlyGroupDetailsResponse rsp = ModifyReadOnlyGroupDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReadOnlyGroupDetailsOutcome(rsp);
        else
            return ModifyReadOnlyGroupDetailsOutcome(o.GetError());
    }
    else
    {
        return ModifyReadOnlyGroupDetailsOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyReadOnlyGroupDetailsAsync(const ModifyReadOnlyGroupDetailsRequest& request, const ModifyReadOnlyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyReadOnlyGroupDetailsRequest&;
    using Resp = ModifyReadOnlyGroupDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyReadOnlyGroupDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::ModifyReadOnlyGroupDetailsOutcomeCallable SqlserverClient::ModifyReadOnlyGroupDetailsCallable(const ModifyReadOnlyGroupDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyReadOnlyGroupDetailsOutcome>>();
    ModifyReadOnlyGroupDetailsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ModifyReadOnlyGroupDetailsRequest&,
        ModifyReadOnlyGroupDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::OpenInterCommunicationOutcome SqlserverClient::OpenInterCommunication(const OpenInterCommunicationRequest &request)
{
    auto outcome = MakeRequest(request, "OpenInterCommunication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenInterCommunicationResponse rsp = OpenInterCommunicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenInterCommunicationOutcome(rsp);
        else
            return OpenInterCommunicationOutcome(o.GetError());
    }
    else
    {
        return OpenInterCommunicationOutcome(outcome.GetError());
    }
}

void SqlserverClient::OpenInterCommunicationAsync(const OpenInterCommunicationRequest& request, const OpenInterCommunicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenInterCommunicationRequest&;
    using Resp = OpenInterCommunicationResponse;

    DoRequestAsync<Req, Resp>(
        "OpenInterCommunication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::OpenInterCommunicationOutcomeCallable SqlserverClient::OpenInterCommunicationCallable(const OpenInterCommunicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenInterCommunicationOutcome>>();
    OpenInterCommunicationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const OpenInterCommunicationRequest&,
        OpenInterCommunicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::QueryMigrationCheckProcessOutcome SqlserverClient::QueryMigrationCheckProcess(const QueryMigrationCheckProcessRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMigrationCheckProcess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMigrationCheckProcessResponse rsp = QueryMigrationCheckProcessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMigrationCheckProcessOutcome(rsp);
        else
            return QueryMigrationCheckProcessOutcome(o.GetError());
    }
    else
    {
        return QueryMigrationCheckProcessOutcome(outcome.GetError());
    }
}

void SqlserverClient::QueryMigrationCheckProcessAsync(const QueryMigrationCheckProcessRequest& request, const QueryMigrationCheckProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMigrationCheckProcessRequest&;
    using Resp = QueryMigrationCheckProcessResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMigrationCheckProcess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::QueryMigrationCheckProcessOutcomeCallable SqlserverClient::QueryMigrationCheckProcessCallable(const QueryMigrationCheckProcessRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMigrationCheckProcessOutcome>>();
    QueryMigrationCheckProcessAsync(
    request,
    [prom](
        const SqlserverClient*,
        const QueryMigrationCheckProcessRequest&,
        QueryMigrationCheckProcessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::RecycleDBInstanceOutcome SqlserverClient::RecycleDBInstance(const RecycleDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RecycleDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecycleDBInstanceResponse rsp = RecycleDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecycleDBInstanceOutcome(rsp);
        else
            return RecycleDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RecycleDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RecycleDBInstanceAsync(const RecycleDBInstanceRequest& request, const RecycleDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecycleDBInstanceRequest&;
    using Resp = RecycleDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RecycleDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::RecycleDBInstanceOutcomeCallable SqlserverClient::RecycleDBInstanceCallable(const RecycleDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecycleDBInstanceOutcome>>();
    RecycleDBInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const RecycleDBInstanceRequest&,
        RecycleDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::RecycleReadOnlyGroupOutcome SqlserverClient::RecycleReadOnlyGroup(const RecycleReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RecycleReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecycleReadOnlyGroupResponse rsp = RecycleReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecycleReadOnlyGroupOutcome(rsp);
        else
            return RecycleReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return RecycleReadOnlyGroupOutcome(outcome.GetError());
    }
}

void SqlserverClient::RecycleReadOnlyGroupAsync(const RecycleReadOnlyGroupRequest& request, const RecycleReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecycleReadOnlyGroupRequest&;
    using Resp = RecycleReadOnlyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "RecycleReadOnlyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::RecycleReadOnlyGroupOutcomeCallable SqlserverClient::RecycleReadOnlyGroupCallable(const RecycleReadOnlyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecycleReadOnlyGroupOutcome>>();
    RecycleReadOnlyGroupAsync(
    request,
    [prom](
        const SqlserverClient*,
        const RecycleReadOnlyGroupRequest&,
        RecycleReadOnlyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::RemoveBackupsOutcome SqlserverClient::RemoveBackups(const RemoveBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveBackupsResponse rsp = RemoveBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveBackupsOutcome(rsp);
        else
            return RemoveBackupsOutcome(o.GetError());
    }
    else
    {
        return RemoveBackupsOutcome(outcome.GetError());
    }
}

void SqlserverClient::RemoveBackupsAsync(const RemoveBackupsRequest& request, const RemoveBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveBackupsRequest&;
    using Resp = RemoveBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::RemoveBackupsOutcomeCallable SqlserverClient::RemoveBackupsCallable(const RemoveBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveBackupsOutcome>>();
    RemoveBackupsAsync(
    request,
    [prom](
        const SqlserverClient*,
        const RemoveBackupsRequest&,
        RemoveBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::RenewDBInstanceOutcome SqlserverClient::RenewDBInstance(const RenewDBInstanceRequest &request)
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

void SqlserverClient::RenewDBInstanceAsync(const RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::RenewDBInstanceOutcomeCallable SqlserverClient::RenewDBInstanceCallable(const RenewDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDBInstanceOutcome>>();
    RenewDBInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const RenewDBInstanceRequest&,
        RenewDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::RenewPostpaidDBInstanceOutcome SqlserverClient::RenewPostpaidDBInstance(const RenewPostpaidDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewPostpaidDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewPostpaidDBInstanceResponse rsp = RenewPostpaidDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewPostpaidDBInstanceOutcome(rsp);
        else
            return RenewPostpaidDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewPostpaidDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RenewPostpaidDBInstanceAsync(const RenewPostpaidDBInstanceRequest& request, const RenewPostpaidDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewPostpaidDBInstanceRequest&;
    using Resp = RenewPostpaidDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenewPostpaidDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::RenewPostpaidDBInstanceOutcomeCallable SqlserverClient::RenewPostpaidDBInstanceCallable(const RenewPostpaidDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewPostpaidDBInstanceOutcome>>();
    RenewPostpaidDBInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const RenewPostpaidDBInstanceRequest&,
        RenewPostpaidDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::ResetAccountPasswordOutcome SqlserverClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
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

void SqlserverClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::ResetAccountPasswordOutcomeCallable SqlserverClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAccountPasswordOutcome>>();
    ResetAccountPasswordAsync(
    request,
    [prom](
        const SqlserverClient*,
        const ResetAccountPasswordRequest&,
        ResetAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::RestartDBInstanceOutcome SqlserverClient::RestartDBInstance(const RestartDBInstanceRequest &request)
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

void SqlserverClient::RestartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::RestartDBInstanceOutcomeCallable SqlserverClient::RestartDBInstanceCallable(const RestartDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartDBInstanceOutcome>>();
    RestartDBInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const RestartDBInstanceRequest&,
        RestartDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::RestoreInstanceOutcome SqlserverClient::RestoreInstance(const RestoreInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreInstanceResponse rsp = RestoreInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreInstanceOutcome(rsp);
        else
            return RestoreInstanceOutcome(o.GetError());
    }
    else
    {
        return RestoreInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RestoreInstanceAsync(const RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestoreInstanceRequest&;
    using Resp = RestoreInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RestoreInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::RestoreInstanceOutcomeCallable SqlserverClient::RestoreInstanceCallable(const RestoreInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestoreInstanceOutcome>>();
    RestoreInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const RestoreInstanceRequest&,
        RestoreInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::RollbackInstanceOutcome SqlserverClient::RollbackInstance(const RollbackInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackInstanceResponse rsp = RollbackInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackInstanceOutcome(rsp);
        else
            return RollbackInstanceOutcome(o.GetError());
    }
    else
    {
        return RollbackInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RollbackInstanceAsync(const RollbackInstanceRequest& request, const RollbackInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollbackInstanceRequest&;
    using Resp = RollbackInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::RollbackInstanceOutcomeCallable SqlserverClient::RollbackInstanceCallable(const RollbackInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackInstanceOutcome>>();
    RollbackInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const RollbackInstanceRequest&,
        RollbackInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::RunMigrationOutcome SqlserverClient::RunMigration(const RunMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "RunMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunMigrationResponse rsp = RunMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunMigrationOutcome(rsp);
        else
            return RunMigrationOutcome(o.GetError());
    }
    else
    {
        return RunMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::RunMigrationAsync(const RunMigrationRequest& request, const RunMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunMigrationRequest&;
    using Resp = RunMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "RunMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::RunMigrationOutcomeCallable SqlserverClient::RunMigrationCallable(const RunMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunMigrationOutcome>>();
    RunMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const RunMigrationRequest&,
        RunMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::StartBackupMigrationOutcome SqlserverClient::StartBackupMigration(const StartBackupMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "StartBackupMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartBackupMigrationResponse rsp = StartBackupMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartBackupMigrationOutcome(rsp);
        else
            return StartBackupMigrationOutcome(o.GetError());
    }
    else
    {
        return StartBackupMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::StartBackupMigrationAsync(const StartBackupMigrationRequest& request, const StartBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartBackupMigrationRequest&;
    using Resp = StartBackupMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "StartBackupMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::StartBackupMigrationOutcomeCallable SqlserverClient::StartBackupMigrationCallable(const StartBackupMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartBackupMigrationOutcome>>();
    StartBackupMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const StartBackupMigrationRequest&,
        StartBackupMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::StartIncrementalMigrationOutcome SqlserverClient::StartIncrementalMigration(const StartIncrementalMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "StartIncrementalMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartIncrementalMigrationResponse rsp = StartIncrementalMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartIncrementalMigrationOutcome(rsp);
        else
            return StartIncrementalMigrationOutcome(o.GetError());
    }
    else
    {
        return StartIncrementalMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::StartIncrementalMigrationAsync(const StartIncrementalMigrationRequest& request, const StartIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartIncrementalMigrationRequest&;
    using Resp = StartIncrementalMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "StartIncrementalMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::StartIncrementalMigrationOutcomeCallable SqlserverClient::StartIncrementalMigrationCallable(const StartIncrementalMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartIncrementalMigrationOutcome>>();
    StartIncrementalMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const StartIncrementalMigrationRequest&,
        StartIncrementalMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::StartInstanceXEventOutcome SqlserverClient::StartInstanceXEvent(const StartInstanceXEventRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstanceXEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstanceXEventResponse rsp = StartInstanceXEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstanceXEventOutcome(rsp);
        else
            return StartInstanceXEventOutcome(o.GetError());
    }
    else
    {
        return StartInstanceXEventOutcome(outcome.GetError());
    }
}

void SqlserverClient::StartInstanceXEventAsync(const StartInstanceXEventRequest& request, const StartInstanceXEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartInstanceXEventRequest&;
    using Resp = StartInstanceXEventResponse;

    DoRequestAsync<Req, Resp>(
        "StartInstanceXEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::StartInstanceXEventOutcomeCallable SqlserverClient::StartInstanceXEventCallable(const StartInstanceXEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartInstanceXEventOutcome>>();
    StartInstanceXEventAsync(
    request,
    [prom](
        const SqlserverClient*,
        const StartInstanceXEventRequest&,
        StartInstanceXEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::StartMigrationCheckOutcome SqlserverClient::StartMigrationCheck(const StartMigrationCheckRequest &request)
{
    auto outcome = MakeRequest(request, "StartMigrationCheck");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMigrationCheckResponse rsp = StartMigrationCheckResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMigrationCheckOutcome(rsp);
        else
            return StartMigrationCheckOutcome(o.GetError());
    }
    else
    {
        return StartMigrationCheckOutcome(outcome.GetError());
    }
}

void SqlserverClient::StartMigrationCheckAsync(const StartMigrationCheckRequest& request, const StartMigrationCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartMigrationCheckRequest&;
    using Resp = StartMigrationCheckResponse;

    DoRequestAsync<Req, Resp>(
        "StartMigrationCheck", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::StartMigrationCheckOutcomeCallable SqlserverClient::StartMigrationCheckCallable(const StartMigrationCheckRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartMigrationCheckOutcome>>();
    StartMigrationCheckAsync(
    request,
    [prom](
        const SqlserverClient*,
        const StartMigrationCheckRequest&,
        StartMigrationCheckOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::StopMigrationOutcome SqlserverClient::StopMigration(const StopMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "StopMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMigrationResponse rsp = StopMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMigrationOutcome(rsp);
        else
            return StopMigrationOutcome(o.GetError());
    }
    else
    {
        return StopMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::StopMigrationAsync(const StopMigrationRequest& request, const StopMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopMigrationRequest&;
    using Resp = StopMigrationResponse;

    DoRequestAsync<Req, Resp>(
        "StopMigration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::StopMigrationOutcomeCallable SqlserverClient::StopMigrationCallable(const StopMigrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopMigrationOutcome>>();
    StopMigrationAsync(
    request,
    [prom](
        const SqlserverClient*,
        const StopMigrationRequest&,
        StopMigrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::SwitchCloudInstanceHAOutcome SqlserverClient::SwitchCloudInstanceHA(const SwitchCloudInstanceHARequest &request)
{
    auto outcome = MakeRequest(request, "SwitchCloudInstanceHA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchCloudInstanceHAResponse rsp = SwitchCloudInstanceHAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchCloudInstanceHAOutcome(rsp);
        else
            return SwitchCloudInstanceHAOutcome(o.GetError());
    }
    else
    {
        return SwitchCloudInstanceHAOutcome(outcome.GetError());
    }
}

void SqlserverClient::SwitchCloudInstanceHAAsync(const SwitchCloudInstanceHARequest& request, const SwitchCloudInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchCloudInstanceHARequest&;
    using Resp = SwitchCloudInstanceHAResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchCloudInstanceHA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::SwitchCloudInstanceHAOutcomeCallable SqlserverClient::SwitchCloudInstanceHACallable(const SwitchCloudInstanceHARequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchCloudInstanceHAOutcome>>();
    SwitchCloudInstanceHAAsync(
    request,
    [prom](
        const SqlserverClient*,
        const SwitchCloudInstanceHARequest&,
        SwitchCloudInstanceHAOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::TerminateDBInstanceOutcome SqlserverClient::TerminateDBInstance(const TerminateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDBInstanceResponse rsp = TerminateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDBInstanceOutcome(rsp);
        else
            return TerminateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::TerminateDBInstanceAsync(const TerminateDBInstanceRequest& request, const TerminateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateDBInstanceRequest&;
    using Resp = TerminateDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SqlserverClient::TerminateDBInstanceOutcomeCallable SqlserverClient::TerminateDBInstanceCallable(const TerminateDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateDBInstanceOutcome>>();
    TerminateDBInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const TerminateDBInstanceRequest&,
        TerminateDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SqlserverClient::UpgradeDBInstanceOutcome SqlserverClient::UpgradeDBInstance(const UpgradeDBInstanceRequest &request)
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

void SqlserverClient::UpgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

SqlserverClient::UpgradeDBInstanceOutcomeCallable SqlserverClient::UpgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDBInstanceOutcome>>();
    UpgradeDBInstanceAsync(
    request,
    [prom](
        const SqlserverClient*,
        const UpgradeDBInstanceRequest&,
        UpgradeDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


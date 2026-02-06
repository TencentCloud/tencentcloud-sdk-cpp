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

#include <tencentcloud/tdmysql/v20211122/TdmysqlClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdmysql::V20211122;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-11-22";
    const string ENDPOINT = "tdmysql.tencentcloudapi.com";
}

TdmysqlClient::TdmysqlClient(const Credential &credential, const string &region) :
    TdmysqlClient(credential, region, ClientProfile())
{
}

TdmysqlClient::TdmysqlClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdmysqlClient::CancelIsolateDBInstancesOutcome TdmysqlClient::CancelIsolateDBInstances(const CancelIsolateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CancelIsolateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelIsolateDBInstancesResponse rsp = CancelIsolateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelIsolateDBInstancesOutcome(rsp);
        else
            return CancelIsolateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CancelIsolateDBInstancesOutcome(outcome.GetError());
    }
}

void TdmysqlClient::CancelIsolateDBInstancesAsync(const CancelIsolateDBInstancesRequest& request, const CancelIsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelIsolateDBInstancesRequest&;
    using Resp = CancelIsolateDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CancelIsolateDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::CancelIsolateDBInstancesOutcomeCallable TdmysqlClient::CancelIsolateDBInstancesCallable(const CancelIsolateDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelIsolateDBInstancesOutcome>>();
    CancelIsolateDBInstancesAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const CancelIsolateDBInstancesRequest&,
        CancelIsolateDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::CreateDBSBackupOutcome TdmysqlClient::CreateDBSBackup(const CreateDBSBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBSBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBSBackupResponse rsp = CreateDBSBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBSBackupOutcome(rsp);
        else
            return CreateDBSBackupOutcome(o.GetError());
    }
    else
    {
        return CreateDBSBackupOutcome(outcome.GetError());
    }
}

void TdmysqlClient::CreateDBSBackupAsync(const CreateDBSBackupRequest& request, const CreateDBSBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBSBackupRequest&;
    using Resp = CreateDBSBackupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBSBackup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::CreateDBSBackupOutcomeCallable TdmysqlClient::CreateDBSBackupCallable(const CreateDBSBackupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBSBackupOutcome>>();
    CreateDBSBackupAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const CreateDBSBackupRequest&,
        CreateDBSBackupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DeleteDBSBackupSetsOutcome TdmysqlClient::DeleteDBSBackupSets(const DeleteDBSBackupSetsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDBSBackupSets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDBSBackupSetsResponse rsp = DeleteDBSBackupSetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDBSBackupSetsOutcome(rsp);
        else
            return DeleteDBSBackupSetsOutcome(o.GetError());
    }
    else
    {
        return DeleteDBSBackupSetsOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DeleteDBSBackupSetsAsync(const DeleteDBSBackupSetsRequest& request, const DeleteDBSBackupSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDBSBackupSetsRequest&;
    using Resp = DeleteDBSBackupSetsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDBSBackupSets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DeleteDBSBackupSetsOutcomeCallable TdmysqlClient::DeleteDBSBackupSetsCallable(const DeleteDBSBackupSetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDBSBackupSetsOutcome>>();
    DeleteDBSBackupSetsAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DeleteDBSBackupSetsRequest&,
        DeleteDBSBackupSetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeBillingEnableOutcome TdmysqlClient::DescribeBillingEnable(const DescribeBillingEnableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingEnable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingEnableResponse rsp = DescribeBillingEnableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingEnableOutcome(rsp);
        else
            return DescribeBillingEnableOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingEnableOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeBillingEnableAsync(const DescribeBillingEnableRequest& request, const DescribeBillingEnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillingEnableRequest&;
    using Resp = DescribeBillingEnableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillingEnable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeBillingEnableOutcomeCallable TdmysqlClient::DescribeBillingEnableCallable(const DescribeBillingEnableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillingEnableOutcome>>();
    DescribeBillingEnableAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeBillingEnableRequest&,
        DescribeBillingEnableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDBParametersOutcome TdmysqlClient::DescribeDBParameters(const DescribeDBParametersRequest &request)
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

void TdmysqlClient::DescribeDBParametersAsync(const DescribeDBParametersRequest& request, const DescribeDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DescribeDBParametersOutcomeCallable TdmysqlClient::DescribeDBParametersCallable(const DescribeDBParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBParametersOutcome>>();
    DescribeDBParametersAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBParametersRequest&,
        DescribeDBParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDBSAvailableRecoveryTimeOutcome TdmysqlClient::DescribeDBSAvailableRecoveryTime(const DescribeDBSAvailableRecoveryTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSAvailableRecoveryTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSAvailableRecoveryTimeResponse rsp = DescribeDBSAvailableRecoveryTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSAvailableRecoveryTimeOutcome(rsp);
        else
            return DescribeDBSAvailableRecoveryTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSAvailableRecoveryTimeOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeDBSAvailableRecoveryTimeAsync(const DescribeDBSAvailableRecoveryTimeRequest& request, const DescribeDBSAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSAvailableRecoveryTimeRequest&;
    using Resp = DescribeDBSAvailableRecoveryTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSAvailableRecoveryTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeDBSAvailableRecoveryTimeOutcomeCallable TdmysqlClient::DescribeDBSAvailableRecoveryTimeCallable(const DescribeDBSAvailableRecoveryTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSAvailableRecoveryTimeOutcome>>();
    DescribeDBSAvailableRecoveryTimeAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBSAvailableRecoveryTimeRequest&,
        DescribeDBSAvailableRecoveryTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDBSCloneInstancesOutcome TdmysqlClient::DescribeDBSCloneInstances(const DescribeDBSCloneInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSCloneInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSCloneInstancesResponse rsp = DescribeDBSCloneInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSCloneInstancesOutcome(rsp);
        else
            return DescribeDBSCloneInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSCloneInstancesOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeDBSCloneInstancesAsync(const DescribeDBSCloneInstancesRequest& request, const DescribeDBSCloneInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSCloneInstancesRequest&;
    using Resp = DescribeDBSCloneInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSCloneInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeDBSCloneInstancesOutcomeCallable TdmysqlClient::DescribeDBSCloneInstancesCallable(const DescribeDBSCloneInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSCloneInstancesOutcome>>();
    DescribeDBSCloneInstancesAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBSCloneInstancesRequest&,
        DescribeDBSCloneInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDBSecurityGroupsOutcome TdmysqlClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
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

void TdmysqlClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DescribeDBSecurityGroupsOutcomeCallable TdmysqlClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSecurityGroupsOutcome>>();
    DescribeDBSecurityGroupsAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBSecurityGroupsRequest&,
        DescribeDBSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDatabaseObjectsOutcome TdmysqlClient::DescribeDatabaseObjects(const DescribeDatabaseObjectsRequest &request)
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

void TdmysqlClient::DescribeDatabaseObjectsAsync(const DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DescribeDatabaseObjectsOutcomeCallable TdmysqlClient::DescribeDatabaseObjectsCallable(const DescribeDatabaseObjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseObjectsOutcome>>();
    DescribeDatabaseObjectsAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDatabaseObjectsRequest&,
        DescribeDatabaseObjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDatabaseTableOutcome TdmysqlClient::DescribeDatabaseTable(const DescribeDatabaseTableRequest &request)
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

void TdmysqlClient::DescribeDatabaseTableAsync(const DescribeDatabaseTableRequest& request, const DescribeDatabaseTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DescribeDatabaseTableOutcomeCallable TdmysqlClient::DescribeDatabaseTableCallable(const DescribeDatabaseTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseTableOutcome>>();
    DescribeDatabaseTableAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDatabaseTableRequest&,
        DescribeDatabaseTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeFlowOutcome TdmysqlClient::DescribeFlow(const DescribeFlowRequest &request)
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

void TdmysqlClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DescribeFlowOutcomeCallable TdmysqlClient::DescribeFlowCallable(const DescribeFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowOutcome>>();
    DescribeFlowAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeFlowRequest&,
        DescribeFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DestroyInstancesOutcome TdmysqlClient::DestroyInstances(const DestroyInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyInstancesResponse rsp = DestroyInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyInstancesOutcome(rsp);
        else
            return DestroyInstancesOutcome(o.GetError());
    }
    else
    {
        return DestroyInstancesOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DestroyInstancesAsync(const DestroyInstancesRequest& request, const DestroyInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyInstancesRequest&;
    using Resp = DestroyInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DestroyInstancesOutcomeCallable TdmysqlClient::DestroyInstancesCallable(const DestroyInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyInstancesOutcome>>();
    DestroyInstancesAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DestroyInstancesRequest&,
        DestroyInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::IsolateDBInstanceOutcome TdmysqlClient::IsolateDBInstance(const IsolateDBInstanceRequest &request)
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

void TdmysqlClient::IsolateDBInstanceAsync(const IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::IsolateDBInstanceOutcomeCallable TdmysqlClient::IsolateDBInstanceCallable(const IsolateDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateDBInstanceOutcome>>();
    IsolateDBInstanceAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const IsolateDBInstanceRequest&,
        IsolateDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ModifyAutoRenewFlagOutcome TdmysqlClient::ModifyAutoRenewFlag(const ModifyAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoRenewFlagResponse rsp = ModifyAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoRenewFlagOutcome(rsp);
        else
            return ModifyAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoRenewFlagOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ModifyAutoRenewFlagAsync(const ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoRenewFlagRequest&;
    using Resp = ModifyAutoRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ModifyAutoRenewFlagOutcomeCallable TdmysqlClient::ModifyAutoRenewFlagCallable(const ModifyAutoRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoRenewFlagOutcome>>();
    ModifyAutoRenewFlagAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyAutoRenewFlagRequest&,
        ModifyAutoRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ModifyBinlogStatusOutcome TdmysqlClient::ModifyBinlogStatus(const ModifyBinlogStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBinlogStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBinlogStatusResponse rsp = ModifyBinlogStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBinlogStatusOutcome(rsp);
        else
            return ModifyBinlogStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyBinlogStatusOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ModifyBinlogStatusAsync(const ModifyBinlogStatusRequest& request, const ModifyBinlogStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBinlogStatusRequest&;
    using Resp = ModifyBinlogStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBinlogStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ModifyBinlogStatusOutcomeCallable TdmysqlClient::ModifyBinlogStatusCallable(const ModifyBinlogStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBinlogStatusOutcome>>();
    ModifyBinlogStatusAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyBinlogStatusRequest&,
        ModifyBinlogStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ModifyDBInstanceSecurityGroupsOutcome TdmysqlClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void TdmysqlClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::ModifyDBInstanceSecurityGroupsOutcomeCallable TdmysqlClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupsOutcome>>();
    ModifyDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyDBInstanceSecurityGroupsRequest&,
        ModifyDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ModifyDBParametersOutcome TdmysqlClient::ModifyDBParameters(const ModifyDBParametersRequest &request)
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

void TdmysqlClient::ModifyDBParametersAsync(const ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::ModifyDBParametersOutcomeCallable TdmysqlClient::ModifyDBParametersCallable(const ModifyDBParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBParametersOutcome>>();
    ModifyDBParametersAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyDBParametersRequest&,
        ModifyDBParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ModifyDBSBackupPolicyOutcome TdmysqlClient::ModifyDBSBackupPolicy(const ModifyDBSBackupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBSBackupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBSBackupPolicyResponse rsp = ModifyDBSBackupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBSBackupPolicyOutcome(rsp);
        else
            return ModifyDBSBackupPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyDBSBackupPolicyOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ModifyDBSBackupPolicyAsync(const ModifyDBSBackupPolicyRequest& request, const ModifyDBSBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBSBackupPolicyRequest&;
    using Resp = ModifyDBSBackupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBSBackupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ModifyDBSBackupPolicyOutcomeCallable TdmysqlClient::ModifyDBSBackupPolicyCallable(const ModifyDBSBackupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBSBackupPolicyOutcome>>();
    ModifyDBSBackupPolicyAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyDBSBackupPolicyRequest&,
        ModifyDBSBackupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ModifyDBSBackupSetCommentOutcome TdmysqlClient::ModifyDBSBackupSetComment(const ModifyDBSBackupSetCommentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBSBackupSetComment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBSBackupSetCommentResponse rsp = ModifyDBSBackupSetCommentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBSBackupSetCommentOutcome(rsp);
        else
            return ModifyDBSBackupSetCommentOutcome(o.GetError());
    }
    else
    {
        return ModifyDBSBackupSetCommentOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ModifyDBSBackupSetCommentAsync(const ModifyDBSBackupSetCommentRequest& request, const ModifyDBSBackupSetCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBSBackupSetCommentRequest&;
    using Resp = ModifyDBSBackupSetCommentResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBSBackupSetComment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ModifyDBSBackupSetCommentOutcomeCallable TdmysqlClient::ModifyDBSBackupSetCommentCallable(const ModifyDBSBackupSetCommentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBSBackupSetCommentOutcome>>();
    ModifyDBSBackupSetCommentAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyDBSBackupSetCommentRequest&,
        ModifyDBSBackupSetCommentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ModifyInstanceNameOutcome TdmysqlClient::ModifyInstanceName(const ModifyInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceNameResponse rsp = ModifyInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceNameOutcome(rsp);
        else
            return ModifyInstanceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceNameOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ModifyInstanceNameAsync(const ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceNameRequest&;
    using Resp = ModifyInstanceNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ModifyInstanceNameOutcomeCallable TdmysqlClient::ModifyInstanceNameCallable(const ModifyInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceNameOutcome>>();
    ModifyInstanceNameAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyInstanceNameRequest&,
        ModifyInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


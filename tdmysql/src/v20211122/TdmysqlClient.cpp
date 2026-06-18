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

TdmysqlClient::CreateCloneInstanceOutcome TdmysqlClient::CreateCloneInstance(const CreateCloneInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloneInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloneInstanceResponse rsp = CreateCloneInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloneInstanceOutcome(rsp);
        else
            return CreateCloneInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateCloneInstanceOutcome(outcome.GetError());
    }
}

void TdmysqlClient::CreateCloneInstanceAsync(const CreateCloneInstanceRequest& request, const CreateCloneInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloneInstanceRequest&;
    using Resp = CreateCloneInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloneInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::CreateCloneInstanceOutcomeCallable TdmysqlClient::CreateCloneInstanceCallable(const CreateCloneInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloneInstanceOutcome>>();
    CreateCloneInstanceAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const CreateCloneInstanceRequest&,
        CreateCloneInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::CreateDBInstancesOutcome TdmysqlClient::CreateDBInstances(const CreateDBInstancesRequest &request)
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

void TdmysqlClient::CreateDBInstancesAsync(const CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::CreateDBInstancesOutcomeCallable TdmysqlClient::CreateDBInstancesCallable(const CreateDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBInstancesOutcome>>();
    CreateDBInstancesAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const CreateDBInstancesRequest&,
        CreateDBInstancesOutcome resp,
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

TdmysqlClient::CreateUsersOutcome TdmysqlClient::CreateUsers(const CreateUsersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUsersResponse rsp = CreateUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUsersOutcome(rsp);
        else
            return CreateUsersOutcome(o.GetError());
    }
    else
    {
        return CreateUsersOutcome(outcome.GetError());
    }
}

void TdmysqlClient::CreateUsersAsync(const CreateUsersRequest& request, const CreateUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUsersRequest&;
    using Resp = CreateUsersResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::CreateUsersOutcomeCallable TdmysqlClient::CreateUsersCallable(const CreateUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUsersOutcome>>();
    CreateUsersAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const CreateUsersRequest&,
        CreateUsersOutcome resp,
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

TdmysqlClient::DeleteUsersOutcome TdmysqlClient::DeleteUsers(const DeleteUsersRequest &request)
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

void TdmysqlClient::DeleteUsersAsync(const DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DeleteUsersOutcomeCallable TdmysqlClient::DeleteUsersCallable(const DeleteUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUsersOutcome>>();
    DeleteUsersAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DeleteUsersRequest&,
        DeleteUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDBInstanceDetailOutcome TdmysqlClient::DescribeDBInstanceDetail(const DescribeDBInstanceDetailRequest &request)
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

void TdmysqlClient::DescribeDBInstanceDetailAsync(const DescribeDBInstanceDetailRequest& request, const DescribeDBInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DescribeDBInstanceDetailOutcomeCallable TdmysqlClient::DescribeDBInstanceDetailCallable(const DescribeDBInstanceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceDetailOutcome>>();
    DescribeDBInstanceDetailAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBInstanceDetailRequest&,
        DescribeDBInstanceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDBInstancesOutcome TdmysqlClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
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

void TdmysqlClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DescribeDBInstancesOutcomeCallable TdmysqlClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstancesOutcome>>();
    DescribeDBInstancesAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBInstancesRequest&,
        DescribeDBInstancesOutcome resp,
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

TdmysqlClient::DescribeDBSArchiveLogsOutcome TdmysqlClient::DescribeDBSArchiveLogs(const DescribeDBSArchiveLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSArchiveLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSArchiveLogsResponse rsp = DescribeDBSArchiveLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSArchiveLogsOutcome(rsp);
        else
            return DescribeDBSArchiveLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSArchiveLogsOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeDBSArchiveLogsAsync(const DescribeDBSArchiveLogsRequest& request, const DescribeDBSArchiveLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSArchiveLogsRequest&;
    using Resp = DescribeDBSArchiveLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSArchiveLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeDBSArchiveLogsOutcomeCallable TdmysqlClient::DescribeDBSArchiveLogsCallable(const DescribeDBSArchiveLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSArchiveLogsOutcome>>();
    DescribeDBSArchiveLogsAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBSArchiveLogsRequest&,
        DescribeDBSArchiveLogsOutcome resp,
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

TdmysqlClient::DescribeDBSBackupPolicyOutcome TdmysqlClient::DescribeDBSBackupPolicy(const DescribeDBSBackupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSBackupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSBackupPolicyResponse rsp = DescribeDBSBackupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSBackupPolicyOutcome(rsp);
        else
            return DescribeDBSBackupPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSBackupPolicyOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeDBSBackupPolicyAsync(const DescribeDBSBackupPolicyRequest& request, const DescribeDBSBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSBackupPolicyRequest&;
    using Resp = DescribeDBSBackupPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSBackupPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeDBSBackupPolicyOutcomeCallable TdmysqlClient::DescribeDBSBackupPolicyCallable(const DescribeDBSBackupPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSBackupPolicyOutcome>>();
    DescribeDBSBackupPolicyAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBSBackupPolicyRequest&,
        DescribeDBSBackupPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDBSBackupSetsOutcome TdmysqlClient::DescribeDBSBackupSets(const DescribeDBSBackupSetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSBackupSets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSBackupSetsResponse rsp = DescribeDBSBackupSetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSBackupSetsOutcome(rsp);
        else
            return DescribeDBSBackupSetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSBackupSetsOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeDBSBackupSetsAsync(const DescribeDBSBackupSetsRequest& request, const DescribeDBSBackupSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSBackupSetsRequest&;
    using Resp = DescribeDBSBackupSetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSBackupSets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeDBSBackupSetsOutcomeCallable TdmysqlClient::DescribeDBSBackupSetsCallable(const DescribeDBSBackupSetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSBackupSetsOutcome>>();
    DescribeDBSBackupSetsAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBSBackupSetsRequest&,
        DescribeDBSBackupSetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDBSBackupStatisticsOutcome TdmysqlClient::DescribeDBSBackupStatistics(const DescribeDBSBackupStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSBackupStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSBackupStatisticsResponse rsp = DescribeDBSBackupStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSBackupStatisticsOutcome(rsp);
        else
            return DescribeDBSBackupStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSBackupStatisticsOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeDBSBackupStatisticsAsync(const DescribeDBSBackupStatisticsRequest& request, const DescribeDBSBackupStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSBackupStatisticsRequest&;
    using Resp = DescribeDBSBackupStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSBackupStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeDBSBackupStatisticsOutcomeCallable TdmysqlClient::DescribeDBSBackupStatisticsCallable(const DescribeDBSBackupStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSBackupStatisticsOutcome>>();
    DescribeDBSBackupStatisticsAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBSBackupStatisticsRequest&,
        DescribeDBSBackupStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeDBSBackupStatisticsDetailOutcome TdmysqlClient::DescribeDBSBackupStatisticsDetail(const DescribeDBSBackupStatisticsDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSBackupStatisticsDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSBackupStatisticsDetailResponse rsp = DescribeDBSBackupStatisticsDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSBackupStatisticsDetailOutcome(rsp);
        else
            return DescribeDBSBackupStatisticsDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSBackupStatisticsDetailOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeDBSBackupStatisticsDetailAsync(const DescribeDBSBackupStatisticsDetailRequest& request, const DescribeDBSBackupStatisticsDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSBackupStatisticsDetailRequest&;
    using Resp = DescribeDBSBackupStatisticsDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSBackupStatisticsDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeDBSBackupStatisticsDetailOutcomeCallable TdmysqlClient::DescribeDBSBackupStatisticsDetailCallable(const DescribeDBSBackupStatisticsDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSBackupStatisticsDetailOutcome>>();
    DescribeDBSBackupStatisticsDetailAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDBSBackupStatisticsDetailRequest&,
        DescribeDBSBackupStatisticsDetailOutcome resp,
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

TdmysqlClient::DescribeDatabasesOutcome TdmysqlClient::DescribeDatabases(const DescribeDatabasesRequest &request)
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

void TdmysqlClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DescribeDatabasesOutcomeCallable TdmysqlClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabasesOutcome>>();
    DescribeDatabasesAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeDatabasesRequest&,
        DescribeDatabasesOutcome resp,
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

TdmysqlClient::DescribeInstanceSSLStatusOutcome TdmysqlClient::DescribeInstanceSSLStatus(const DescribeInstanceSSLStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSSLStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSSLStatusResponse rsp = DescribeInstanceSSLStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSSLStatusOutcome(rsp);
        else
            return DescribeInstanceSSLStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSSLStatusOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeInstanceSSLStatusAsync(const DescribeInstanceSSLStatusRequest& request, const DescribeInstanceSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceSSLStatusRequest&;
    using Resp = DescribeInstanceSSLStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceSSLStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeInstanceSSLStatusOutcomeCallable TdmysqlClient::DescribeInstanceSSLStatusCallable(const DescribeInstanceSSLStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceSSLStatusOutcome>>();
    DescribeInstanceSSLStatusAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeInstanceSSLStatusRequest&,
        DescribeInstanceSSLStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeMaintenanceWindowOutcome TdmysqlClient::DescribeMaintenanceWindow(const DescribeMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintenanceWindowResponse rsp = DescribeMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintenanceWindowOutcome(rsp);
        else
            return DescribeMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintenanceWindowOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeMaintenanceWindowAsync(const DescribeMaintenanceWindowRequest& request, const DescribeMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMaintenanceWindowRequest&;
    using Resp = DescribeMaintenanceWindowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMaintenanceWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeMaintenanceWindowOutcomeCallable TdmysqlClient::DescribeMaintenanceWindowCallable(const DescribeMaintenanceWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMaintenanceWindowOutcome>>();
    DescribeMaintenanceWindowAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeMaintenanceWindowRequest&,
        DescribeMaintenanceWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeSaleInfoOutcome TdmysqlClient::DescribeSaleInfo(const DescribeSaleInfoRequest &request)
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

void TdmysqlClient::DescribeSaleInfoAsync(const DescribeSaleInfoRequest& request, const DescribeSaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DescribeSaleInfoOutcomeCallable TdmysqlClient::DescribeSaleInfoCallable(const DescribeSaleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSaleInfoOutcome>>();
    DescribeSaleInfoAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeSaleInfoRequest&,
        DescribeSaleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeSlowLogsOutcome TdmysqlClient::DescribeSlowLogs(const DescribeSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogsResponse rsp = DescribeSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogsOutcome(rsp);
        else
            return DescribeSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogsOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeSlowLogsAsync(const DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowLogsRequest&;
    using Resp = DescribeSlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeSlowLogsOutcomeCallable TdmysqlClient::DescribeSlowLogsCallable(const DescribeSlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogsOutcome>>();
    DescribeSlowLogsAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeSlowLogsRequest&,
        DescribeSlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeSpecsOutcome TdmysqlClient::DescribeSpecs(const DescribeSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecsResponse rsp = DescribeSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecsOutcome(rsp);
        else
            return DescribeSpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecsOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeSpecsAsync(const DescribeSpecsRequest& request, const DescribeSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpecsRequest&;
    using Resp = DescribeSpecsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpecs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeSpecsOutcomeCallable TdmysqlClient::DescribeSpecsCallable(const DescribeSpecsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpecsOutcome>>();
    DescribeSpecsAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeSpecsRequest&,
        DescribeSpecsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeUserPrivilegesOutcome TdmysqlClient::DescribeUserPrivileges(const DescribeUserPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserPrivilegesResponse rsp = DescribeUserPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserPrivilegesOutcome(rsp);
        else
            return DescribeUserPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeUserPrivilegesOutcome(outcome.GetError());
    }
}

void TdmysqlClient::DescribeUserPrivilegesAsync(const DescribeUserPrivilegesRequest& request, const DescribeUserPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserPrivilegesRequest&;
    using Resp = DescribeUserPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::DescribeUserPrivilegesOutcomeCallable TdmysqlClient::DescribeUserPrivilegesCallable(const DescribeUserPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserPrivilegesOutcome>>();
    DescribeUserPrivilegesAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeUserPrivilegesRequest&,
        DescribeUserPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::DescribeUsersOutcome TdmysqlClient::DescribeUsers(const DescribeUsersRequest &request)
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

void TdmysqlClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::DescribeUsersOutcomeCallable TdmysqlClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsersOutcome>>();
    DescribeUsersAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const DescribeUsersRequest&,
        DescribeUsersOutcome resp,
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

TdmysqlClient::ExpandInstanceOutcome TdmysqlClient::ExpandInstance(const ExpandInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ExpandInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExpandInstanceResponse rsp = ExpandInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExpandInstanceOutcome(rsp);
        else
            return ExpandInstanceOutcome(o.GetError());
    }
    else
    {
        return ExpandInstanceOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ExpandInstanceAsync(const ExpandInstanceRequest& request, const ExpandInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExpandInstanceRequest&;
    using Resp = ExpandInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ExpandInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ExpandInstanceOutcomeCallable TdmysqlClient::ExpandInstanceCallable(const ExpandInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExpandInstanceOutcome>>();
    ExpandInstanceAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ExpandInstanceRequest&,
        ExpandInstanceOutcome resp,
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

TdmysqlClient::ModifyDBInstanceVPortOutcome TdmysqlClient::ModifyDBInstanceVPort(const ModifyDBInstanceVPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceVPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceVPortResponse rsp = ModifyDBInstanceVPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceVPortOutcome(rsp);
        else
            return ModifyDBInstanceVPortOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceVPortOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ModifyDBInstanceVPortAsync(const ModifyDBInstanceVPortRequest& request, const ModifyDBInstanceVPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceVPortRequest&;
    using Resp = ModifyDBInstanceVPortResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceVPort", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ModifyDBInstanceVPortOutcomeCallable TdmysqlClient::ModifyDBInstanceVPortCallable(const ModifyDBInstanceVPortRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceVPortOutcome>>();
    ModifyDBInstanceVPortAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyDBInstanceVPortRequest&,
        ModifyDBInstanceVPortOutcome resp,
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

TdmysqlClient::ModifyInstanceNetworkOutcome TdmysqlClient::ModifyInstanceNetwork(const ModifyInstanceNetworkRequest &request)
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

void TdmysqlClient::ModifyInstanceNetworkAsync(const ModifyInstanceNetworkRequest& request, const ModifyInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::ModifyInstanceNetworkOutcomeCallable TdmysqlClient::ModifyInstanceNetworkCallable(const ModifyInstanceNetworkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceNetworkOutcome>>();
    ModifyInstanceNetworkAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyInstanceNetworkRequest&,
        ModifyInstanceNetworkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ModifyInstanceSSLStatusOutcome TdmysqlClient::ModifyInstanceSSLStatus(const ModifyInstanceSSLStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceSSLStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceSSLStatusResponse rsp = ModifyInstanceSSLStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceSSLStatusOutcome(rsp);
        else
            return ModifyInstanceSSLStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceSSLStatusOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ModifyInstanceSSLStatusAsync(const ModifyInstanceSSLStatusRequest& request, const ModifyInstanceSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceSSLStatusRequest&;
    using Resp = ModifyInstanceSSLStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceSSLStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ModifyInstanceSSLStatusOutcomeCallable TdmysqlClient::ModifyInstanceSSLStatusCallable(const ModifyInstanceSSLStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceSSLStatusOutcome>>();
    ModifyInstanceSSLStatusAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyInstanceSSLStatusRequest&,
        ModifyInstanceSSLStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ModifyMaintenanceWindowOutcome TdmysqlClient::ModifyMaintenanceWindow(const ModifyMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintenanceWindowResponse rsp = ModifyMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintenanceWindowOutcome(rsp);
        else
            return ModifyMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintenanceWindowOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ModifyMaintenanceWindowAsync(const ModifyMaintenanceWindowRequest& request, const ModifyMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMaintenanceWindowRequest&;
    using Resp = ModifyMaintenanceWindowResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMaintenanceWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ModifyMaintenanceWindowOutcomeCallable TdmysqlClient::ModifyMaintenanceWindowCallable(const ModifyMaintenanceWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMaintenanceWindowOutcome>>();
    ModifyMaintenanceWindowAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyMaintenanceWindowRequest&,
        ModifyMaintenanceWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ModifyUserPrivilegesOutcome TdmysqlClient::ModifyUserPrivileges(const ModifyUserPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserPrivilegesResponse rsp = ModifyUserPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserPrivilegesOutcome(rsp);
        else
            return ModifyUserPrivilegesOutcome(o.GetError());
    }
    else
    {
        return ModifyUserPrivilegesOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ModifyUserPrivilegesAsync(const ModifyUserPrivilegesRequest& request, const ModifyUserPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserPrivilegesRequest&;
    using Resp = ModifyUserPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ModifyUserPrivilegesOutcomeCallable TdmysqlClient::ModifyUserPrivilegesCallable(const ModifyUserPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserPrivilegesOutcome>>();
    ModifyUserPrivilegesAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ModifyUserPrivilegesRequest&,
        ModifyUserPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::ResetUserPasswordOutcome TdmysqlClient::ResetUserPassword(const ResetUserPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetUserPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetUserPasswordResponse rsp = ResetUserPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetUserPasswordOutcome(rsp);
        else
            return ResetUserPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetUserPasswordOutcome(outcome.GetError());
    }
}

void TdmysqlClient::ResetUserPasswordAsync(const ResetUserPasswordRequest& request, const ResetUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetUserPasswordRequest&;
    using Resp = ResetUserPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetUserPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::ResetUserPasswordOutcomeCallable TdmysqlClient::ResetUserPasswordCallable(const ResetUserPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetUserPasswordOutcome>>();
    ResetUserPasswordAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const ResetUserPasswordRequest&,
        ResetUserPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::RestartDBInstancesOutcome TdmysqlClient::RestartDBInstances(const RestartDBInstancesRequest &request)
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

void TdmysqlClient::RestartDBInstancesAsync(const RestartDBInstancesRequest& request, const RestartDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdmysqlClient::RestartDBInstancesOutcomeCallable TdmysqlClient::RestartDBInstancesCallable(const RestartDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartDBInstancesOutcome>>();
    RestartDBInstancesAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const RestartDBInstancesRequest&,
        RestartDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdmysqlClient::UpgradeInstanceOutcome TdmysqlClient::UpgradeInstance(const UpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceResponse rsp = UpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceOutcome(rsp);
        else
            return UpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceOutcome(outcome.GetError());
    }
}

void TdmysqlClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeInstanceRequest&;
    using Resp = UpgradeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdmysqlClient::UpgradeInstanceOutcomeCallable TdmysqlClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeInstanceOutcome>>();
    UpgradeInstanceAsync(
    request,
    [prom](
        const TdmysqlClient*,
        const UpgradeInstanceRequest&,
        UpgradeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


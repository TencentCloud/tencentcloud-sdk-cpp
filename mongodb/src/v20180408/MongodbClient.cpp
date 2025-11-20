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

#include <tencentcloud/mongodb/v20180408/MongodbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mongodb::V20180408;
using namespace TencentCloud::Mongodb::V20180408::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-08";
    const string ENDPOINT = "mongodb.tencentcloudapi.com";
}

MongodbClient::MongodbClient(const Credential &credential, const string &region) :
    MongodbClient(credential, region, ClientProfile())
{
}

MongodbClient::MongodbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MongodbClient::AssignProjectOutcome MongodbClient::AssignProject(const AssignProjectRequest &request)
{
    auto outcome = MakeRequest(request, "AssignProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignProjectResponse rsp = AssignProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignProjectOutcome(rsp);
        else
            return AssignProjectOutcome(o.GetError());
    }
    else
    {
        return AssignProjectOutcome(outcome.GetError());
    }
}

void MongodbClient::AssignProjectAsync(const AssignProjectRequest& request, const AssignProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignProjectRequest&;
    using Resp = AssignProjectResponse;

    DoRequestAsync<Req, Resp>(
        "AssignProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::AssignProjectOutcomeCallable MongodbClient::AssignProjectCallable(const AssignProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignProjectOutcome>>();
    AssignProjectAsync(
    request,
    [prom](
        const MongodbClient*,
        const AssignProjectRequest&,
        AssignProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::CreateDBInstanceOutcome MongodbClient::CreateDBInstance(const CreateDBInstanceRequest &request)
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

void MongodbClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MongodbClient::CreateDBInstanceOutcomeCallable MongodbClient::CreateDBInstanceCallable(const CreateDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBInstanceOutcome>>();
    CreateDBInstanceAsync(
    request,
    [prom](
        const MongodbClient*,
        const CreateDBInstanceRequest&,
        CreateDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::CreateDBInstanceHourOutcome MongodbClient::CreateDBInstanceHour(const CreateDBInstanceHourRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstanceHour");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceHourResponse rsp = CreateDBInstanceHourResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceHourOutcome(rsp);
        else
            return CreateDBInstanceHourOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceHourOutcome(outcome.GetError());
    }
}

void MongodbClient::CreateDBInstanceHourAsync(const CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBInstanceHourRequest&;
    using Resp = CreateDBInstanceHourResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBInstanceHour", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::CreateDBInstanceHourOutcomeCallable MongodbClient::CreateDBInstanceHourCallable(const CreateDBInstanceHourRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBInstanceHourOutcome>>();
    CreateDBInstanceHourAsync(
    request,
    [prom](
        const MongodbClient*,
        const CreateDBInstanceHourRequest&,
        CreateDBInstanceHourOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeClientConnectionsOutcome MongodbClient::DescribeClientConnections(const DescribeClientConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientConnectionsResponse rsp = DescribeClientConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientConnectionsOutcome(rsp);
        else
            return DescribeClientConnectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeClientConnectionsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeClientConnectionsAsync(const DescribeClientConnectionsRequest& request, const DescribeClientConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClientConnectionsRequest&;
    using Resp = DescribeClientConnectionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClientConnections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeClientConnectionsOutcomeCallable MongodbClient::DescribeClientConnectionsCallable(const DescribeClientConnectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientConnectionsOutcome>>();
    DescribeClientConnectionsAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeClientConnectionsRequest&,
        DescribeClientConnectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeDBInstancesOutcome MongodbClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
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

void MongodbClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MongodbClient::DescribeDBInstancesOutcomeCallable MongodbClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstancesOutcome>>();
    DescribeDBInstancesAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeDBInstancesRequest&,
        DescribeDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeSlowLogOutcome MongodbClient::DescribeSlowLog(const DescribeSlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogResponse rsp = DescribeSlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogOutcome(rsp);
        else
            return DescribeSlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeSlowLogAsync(const DescribeSlowLogRequest& request, const DescribeSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowLogRequest&;
    using Resp = DescribeSlowLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeSlowLogOutcomeCallable MongodbClient::DescribeSlowLogCallable(const DescribeSlowLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogOutcome>>();
    DescribeSlowLogAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeSlowLogRequest&,
        DescribeSlowLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeSpecInfoOutcome MongodbClient::DescribeSpecInfo(const DescribeSpecInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpecInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecInfoResponse rsp = DescribeSpecInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecInfoOutcome(rsp);
        else
            return DescribeSpecInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecInfoOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeSpecInfoAsync(const DescribeSpecInfoRequest& request, const DescribeSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpecInfoRequest&;
    using Resp = DescribeSpecInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpecInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeSpecInfoOutcomeCallable MongodbClient::DescribeSpecInfoCallable(const DescribeSpecInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpecInfoOutcome>>();
    DescribeSpecInfoAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeSpecInfoRequest&,
        DescribeSpecInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::RenameInstanceOutcome MongodbClient::RenameInstance(const RenameInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenameInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenameInstanceResponse rsp = RenameInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenameInstanceOutcome(rsp);
        else
            return RenameInstanceOutcome(o.GetError());
    }
    else
    {
        return RenameInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::RenameInstanceAsync(const RenameInstanceRequest& request, const RenameInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenameInstanceRequest&;
    using Resp = RenameInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenameInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::RenameInstanceOutcomeCallable MongodbClient::RenameInstanceCallable(const RenameInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenameInstanceOutcome>>();
    RenameInstanceAsync(
    request,
    [prom](
        const MongodbClient*,
        const RenameInstanceRequest&,
        RenameInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::SetAutoRenewOutcome MongodbClient::SetAutoRenew(const SetAutoRenewRequest &request)
{
    auto outcome = MakeRequest(request, "SetAutoRenew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAutoRenewResponse rsp = SetAutoRenewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAutoRenewOutcome(rsp);
        else
            return SetAutoRenewOutcome(o.GetError());
    }
    else
    {
        return SetAutoRenewOutcome(outcome.GetError());
    }
}

void MongodbClient::SetAutoRenewAsync(const SetAutoRenewRequest& request, const SetAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetAutoRenewRequest&;
    using Resp = SetAutoRenewResponse;

    DoRequestAsync<Req, Resp>(
        "SetAutoRenew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::SetAutoRenewOutcomeCallable MongodbClient::SetAutoRenewCallable(const SetAutoRenewRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetAutoRenewOutcome>>();
    SetAutoRenewAsync(
    request,
    [prom](
        const MongodbClient*,
        const SetAutoRenewRequest&,
        SetAutoRenewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::SetPasswordOutcome MongodbClient::SetPassword(const SetPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "SetPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetPasswordResponse rsp = SetPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetPasswordOutcome(rsp);
        else
            return SetPasswordOutcome(o.GetError());
    }
    else
    {
        return SetPasswordOutcome(outcome.GetError());
    }
}

void MongodbClient::SetPasswordAsync(const SetPasswordRequest& request, const SetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetPasswordRequest&;
    using Resp = SetPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "SetPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::SetPasswordOutcomeCallable MongodbClient::SetPasswordCallable(const SetPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetPasswordOutcome>>();
    SetPasswordAsync(
    request,
    [prom](
        const MongodbClient*,
        const SetPasswordRequest&,
        SetPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::TerminateDBInstanceOutcome MongodbClient::TerminateDBInstance(const TerminateDBInstanceRequest &request)
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

void MongodbClient::TerminateDBInstanceAsync(const TerminateDBInstanceRequest& request, const TerminateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MongodbClient::TerminateDBInstanceOutcomeCallable MongodbClient::TerminateDBInstanceCallable(const TerminateDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateDBInstanceOutcome>>();
    TerminateDBInstanceAsync(
    request,
    [prom](
        const MongodbClient*,
        const TerminateDBInstanceRequest&,
        TerminateDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::UpgradeDBInstanceOutcome MongodbClient::UpgradeDBInstance(const UpgradeDBInstanceRequest &request)
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

void MongodbClient::UpgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MongodbClient::UpgradeDBInstanceOutcomeCallable MongodbClient::UpgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDBInstanceOutcome>>();
    UpgradeDBInstanceAsync(
    request,
    [prom](
        const MongodbClient*,
        const UpgradeDBInstanceRequest&,
        UpgradeDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::UpgradeDBInstanceHourOutcome MongodbClient::UpgradeDBInstanceHour(const UpgradeDBInstanceHourRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstanceHour");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceHourResponse rsp = UpgradeDBInstanceHourResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceHourOutcome(rsp);
        else
            return UpgradeDBInstanceHourOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceHourOutcome(outcome.GetError());
    }
}

void MongodbClient::UpgradeDBInstanceHourAsync(const UpgradeDBInstanceHourRequest& request, const UpgradeDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDBInstanceHourRequest&;
    using Resp = UpgradeDBInstanceHourResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDBInstanceHour", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::UpgradeDBInstanceHourOutcomeCallable MongodbClient::UpgradeDBInstanceHourCallable(const UpgradeDBInstanceHourRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDBInstanceHourOutcome>>();
    UpgradeDBInstanceHourAsync(
    request,
    [prom](
        const MongodbClient*,
        const UpgradeDBInstanceHourRequest&,
        UpgradeDBInstanceHourOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


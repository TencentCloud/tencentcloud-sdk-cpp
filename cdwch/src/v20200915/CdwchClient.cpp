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

#include <tencentcloud/cdwch/v20200915/CdwchClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdwch::V20200915;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-09-15";
    const string ENDPOINT = "cdwch.tencentcloudapi.com";
}

CdwchClient::CdwchClient(const Credential &credential, const string &region) :
    CdwchClient(credential, region, ClientProfile())
{
}

CdwchClient::CdwchClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdwchClient::ActionAlterCkUserOutcome CdwchClient::ActionAlterCkUser(const ActionAlterCkUserRequest &request)
{
    auto outcome = MakeRequest(request, "ActionAlterCkUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActionAlterCkUserResponse rsp = ActionAlterCkUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActionAlterCkUserOutcome(rsp);
        else
            return ActionAlterCkUserOutcome(o.GetError());
    }
    else
    {
        return ActionAlterCkUserOutcome(outcome.GetError());
    }
}

void CdwchClient::ActionAlterCkUserAsync(const ActionAlterCkUserRequest& request, const ActionAlterCkUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ActionAlterCkUserRequest&;
    using Resp = ActionAlterCkUserResponse;

    DoRequestAsync<Req, Resp>(
        "ActionAlterCkUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::ActionAlterCkUserOutcomeCallable CdwchClient::ActionAlterCkUserCallable(const ActionAlterCkUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActionAlterCkUserOutcome>>();
    ActionAlterCkUserAsync(
    request,
    [prom](
        const CdwchClient*,
        const ActionAlterCkUserRequest&,
        ActionAlterCkUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::CreateBackUpScheduleOutcome CdwchClient::CreateBackUpSchedule(const CreateBackUpScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackUpSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackUpScheduleResponse rsp = CreateBackUpScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackUpScheduleOutcome(rsp);
        else
            return CreateBackUpScheduleOutcome(o.GetError());
    }
    else
    {
        return CreateBackUpScheduleOutcome(outcome.GetError());
    }
}

void CdwchClient::CreateBackUpScheduleAsync(const CreateBackUpScheduleRequest& request, const CreateBackUpScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackUpScheduleRequest&;
    using Resp = CreateBackUpScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackUpSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::CreateBackUpScheduleOutcomeCallable CdwchClient::CreateBackUpScheduleCallable(const CreateBackUpScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackUpScheduleOutcome>>();
    CreateBackUpScheduleAsync(
    request,
    [prom](
        const CdwchClient*,
        const CreateBackUpScheduleRequest&,
        CreateBackUpScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::CreateInstanceNewOutcome CdwchClient::CreateInstanceNew(const CreateInstanceNewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceNewResponse rsp = CreateInstanceNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceNewOutcome(rsp);
        else
            return CreateInstanceNewOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceNewOutcome(outcome.GetError());
    }
}

void CdwchClient::CreateInstanceNewAsync(const CreateInstanceNewRequest& request, const CreateInstanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceNewRequest&;
    using Resp = CreateInstanceNewResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstanceNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::CreateInstanceNewOutcomeCallable CdwchClient::CreateInstanceNewCallable(const CreateInstanceNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceNewOutcome>>();
    CreateInstanceNewAsync(
    request,
    [prom](
        const CdwchClient*,
        const CreateInstanceNewRequest&,
        CreateInstanceNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DeleteBackUpDataOutcome CdwchClient::DeleteBackUpData(const DeleteBackUpDataRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackUpData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackUpDataResponse rsp = DeleteBackUpDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackUpDataOutcome(rsp);
        else
            return DeleteBackUpDataOutcome(o.GetError());
    }
    else
    {
        return DeleteBackUpDataOutcome(outcome.GetError());
    }
}

void CdwchClient::DeleteBackUpDataAsync(const DeleteBackUpDataRequest& request, const DeleteBackUpDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBackUpDataRequest&;
    using Resp = DeleteBackUpDataResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBackUpData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DeleteBackUpDataOutcomeCallable CdwchClient::DeleteBackUpDataCallable(const DeleteBackUpDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackUpDataOutcome>>();
    DeleteBackUpDataAsync(
    request,
    [prom](
        const CdwchClient*,
        const DeleteBackUpDataRequest&,
        DeleteBackUpDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeBackUpJobOutcome CdwchClient::DescribeBackUpJob(const DescribeBackUpJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpJobResponse rsp = DescribeBackUpJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpJobOutcome(rsp);
        else
            return DescribeBackUpJobOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpJobOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeBackUpJobAsync(const DescribeBackUpJobRequest& request, const DescribeBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackUpJobRequest&;
    using Resp = DescribeBackUpJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackUpJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeBackUpJobOutcomeCallable CdwchClient::DescribeBackUpJobCallable(const DescribeBackUpJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackUpJobOutcome>>();
    DescribeBackUpJobAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeBackUpJobRequest&,
        DescribeBackUpJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeBackUpJobDetailOutcome CdwchClient::DescribeBackUpJobDetail(const DescribeBackUpJobDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpJobDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpJobDetailResponse rsp = DescribeBackUpJobDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpJobDetailOutcome(rsp);
        else
            return DescribeBackUpJobDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpJobDetailOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeBackUpJobDetailAsync(const DescribeBackUpJobDetailRequest& request, const DescribeBackUpJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackUpJobDetailRequest&;
    using Resp = DescribeBackUpJobDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackUpJobDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeBackUpJobDetailOutcomeCallable CdwchClient::DescribeBackUpJobDetailCallable(const DescribeBackUpJobDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackUpJobDetailOutcome>>();
    DescribeBackUpJobDetailAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeBackUpJobDetailRequest&,
        DescribeBackUpJobDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeBackUpScheduleOutcome CdwchClient::DescribeBackUpSchedule(const DescribeBackUpScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpScheduleResponse rsp = DescribeBackUpScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpScheduleOutcome(rsp);
        else
            return DescribeBackUpScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpScheduleOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeBackUpScheduleAsync(const DescribeBackUpScheduleRequest& request, const DescribeBackUpScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackUpScheduleRequest&;
    using Resp = DescribeBackUpScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackUpSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeBackUpScheduleOutcomeCallable CdwchClient::DescribeBackUpScheduleCallable(const DescribeBackUpScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackUpScheduleOutcome>>();
    DescribeBackUpScheduleAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeBackUpScheduleRequest&,
        DescribeBackUpScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeBackUpTablesOutcome CdwchClient::DescribeBackUpTables(const DescribeBackUpTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpTablesResponse rsp = DescribeBackUpTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpTablesOutcome(rsp);
        else
            return DescribeBackUpTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpTablesOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeBackUpTablesAsync(const DescribeBackUpTablesRequest& request, const DescribeBackUpTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackUpTablesRequest&;
    using Resp = DescribeBackUpTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackUpTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeBackUpTablesOutcomeCallable CdwchClient::DescribeBackUpTablesCallable(const DescribeBackUpTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackUpTablesOutcome>>();
    DescribeBackUpTablesAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeBackUpTablesRequest&,
        DescribeBackUpTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeCNInstancesOutcome CdwchClient::DescribeCNInstances(const DescribeCNInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCNInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCNInstancesResponse rsp = DescribeCNInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCNInstancesOutcome(rsp);
        else
            return DescribeCNInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeCNInstancesOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeCNInstancesAsync(const DescribeCNInstancesRequest& request, const DescribeCNInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCNInstancesRequest&;
    using Resp = DescribeCNInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCNInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeCNInstancesOutcomeCallable CdwchClient::DescribeCNInstancesCallable(const DescribeCNInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCNInstancesOutcome>>();
    DescribeCNInstancesAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeCNInstancesRequest&,
        DescribeCNInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeCkSqlApisOutcome CdwchClient::DescribeCkSqlApis(const DescribeCkSqlApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCkSqlApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCkSqlApisResponse rsp = DescribeCkSqlApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCkSqlApisOutcome(rsp);
        else
            return DescribeCkSqlApisOutcome(o.GetError());
    }
    else
    {
        return DescribeCkSqlApisOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeCkSqlApisAsync(const DescribeCkSqlApisRequest& request, const DescribeCkSqlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCkSqlApisRequest&;
    using Resp = DescribeCkSqlApisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCkSqlApis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeCkSqlApisOutcomeCallable CdwchClient::DescribeCkSqlApisCallable(const DescribeCkSqlApisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCkSqlApisOutcome>>();
    DescribeCkSqlApisAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeCkSqlApisRequest&,
        DescribeCkSqlApisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeClusterConfigsOutcome CdwchClient::DescribeClusterConfigs(const DescribeClusterConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterConfigsResponse rsp = DescribeClusterConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterConfigsOutcome(rsp);
        else
            return DescribeClusterConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterConfigsOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeClusterConfigsAsync(const DescribeClusterConfigsRequest& request, const DescribeClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterConfigsRequest&;
    using Resp = DescribeClusterConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeClusterConfigsOutcomeCallable CdwchClient::DescribeClusterConfigsCallable(const DescribeClusterConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterConfigsOutcome>>();
    DescribeClusterConfigsAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeClusterConfigsRequest&,
        DescribeClusterConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeInstanceOutcome CdwchClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceRequest&;
    using Resp = DescribeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeInstanceOutcomeCallable CdwchClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOutcome>>();
    DescribeInstanceAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeInstanceRequest&,
        DescribeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeInstanceClustersOutcome CdwchClient::DescribeInstanceClusters(const DescribeInstanceClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceClustersResponse rsp = DescribeInstanceClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceClustersOutcome(rsp);
        else
            return DescribeInstanceClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceClustersOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceClustersAsync(const DescribeInstanceClustersRequest& request, const DescribeInstanceClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceClustersRequest&;
    using Resp = DescribeInstanceClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeInstanceClustersOutcomeCallable CdwchClient::DescribeInstanceClustersCallable(const DescribeInstanceClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceClustersOutcome>>();
    DescribeInstanceClustersAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeInstanceClustersRequest&,
        DescribeInstanceClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeInstanceKeyValConfigsOutcome CdwchClient::DescribeInstanceKeyValConfigs(const DescribeInstanceKeyValConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceKeyValConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceKeyValConfigsResponse rsp = DescribeInstanceKeyValConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceKeyValConfigsOutcome(rsp);
        else
            return DescribeInstanceKeyValConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceKeyValConfigsOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceKeyValConfigsAsync(const DescribeInstanceKeyValConfigsRequest& request, const DescribeInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceKeyValConfigsRequest&;
    using Resp = DescribeInstanceKeyValConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceKeyValConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeInstanceKeyValConfigsOutcomeCallable CdwchClient::DescribeInstanceKeyValConfigsCallable(const DescribeInstanceKeyValConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceKeyValConfigsOutcome>>();
    DescribeInstanceKeyValConfigsAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeInstanceKeyValConfigsRequest&,
        DescribeInstanceKeyValConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeInstanceNodesOutcome CdwchClient::DescribeInstanceNodes(const DescribeInstanceNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesResponse rsp = DescribeInstanceNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesOutcome(rsp);
        else
            return DescribeInstanceNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceNodesAsync(const DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceNodesRequest&;
    using Resp = DescribeInstanceNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeInstanceNodesOutcomeCallable CdwchClient::DescribeInstanceNodesCallable(const DescribeInstanceNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceNodesOutcome>>();
    DescribeInstanceNodesAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeInstanceNodesRequest&,
        DescribeInstanceNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeInstanceShardsOutcome CdwchClient::DescribeInstanceShards(const DescribeInstanceShardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceShards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceShardsResponse rsp = DescribeInstanceShardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceShardsOutcome(rsp);
        else
            return DescribeInstanceShardsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceShardsOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceShardsAsync(const DescribeInstanceShardsRequest& request, const DescribeInstanceShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceShardsRequest&;
    using Resp = DescribeInstanceShardsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceShards", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeInstanceShardsOutcomeCallable CdwchClient::DescribeInstanceShardsCallable(const DescribeInstanceShardsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceShardsOutcome>>();
    DescribeInstanceShardsAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeInstanceShardsRequest&,
        DescribeInstanceShardsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeInstanceStateOutcome CdwchClient::DescribeInstanceState(const DescribeInstanceStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceStateResponse rsp = DescribeInstanceStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceStateOutcome(rsp);
        else
            return DescribeInstanceStateOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceStateOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstanceStateAsync(const DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceStateRequest&;
    using Resp = DescribeInstanceStateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeInstanceStateOutcomeCallable CdwchClient::DescribeInstanceStateCallable(const DescribeInstanceStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceStateOutcome>>();
    DescribeInstanceStateAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeInstanceStateRequest&,
        DescribeInstanceStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeInstancesNewOutcome CdwchClient::DescribeInstancesNew(const DescribeInstancesNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesNewResponse rsp = DescribeInstancesNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesNewOutcome(rsp);
        else
            return DescribeInstancesNewOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesNewOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeInstancesNewAsync(const DescribeInstancesNewRequest& request, const DescribeInstancesNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesNewRequest&;
    using Resp = DescribeInstancesNewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeInstancesNewOutcomeCallable CdwchClient::DescribeInstancesNewCallable(const DescribeInstancesNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesNewOutcome>>();
    DescribeInstancesNewAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeInstancesNewRequest&,
        DescribeInstancesNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DescribeSpecOutcome CdwchClient::DescribeSpec(const DescribeSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecResponse rsp = DescribeSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecOutcome(rsp);
        else
            return DescribeSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecOutcome(outcome.GetError());
    }
}

void CdwchClient::DescribeSpecAsync(const DescribeSpecRequest& request, const DescribeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpecRequest&;
    using Resp = DescribeSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DescribeSpecOutcomeCallable CdwchClient::DescribeSpecCallable(const DescribeSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpecOutcome>>();
    DescribeSpecAsync(
    request,
    [prom](
        const CdwchClient*,
        const DescribeSpecRequest&,
        DescribeSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::DestroyInstanceOutcome CdwchClient::DestroyInstance(const DestroyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyInstanceResponse rsp = DestroyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyInstanceOutcome(rsp);
        else
            return DestroyInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyInstanceOutcome(outcome.GetError());
    }
}

void CdwchClient::DestroyInstanceAsync(const DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyInstanceRequest&;
    using Resp = DestroyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::DestroyInstanceOutcomeCallable CdwchClient::DestroyInstanceCallable(const DestroyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyInstanceOutcome>>();
    DestroyInstanceAsync(
    request,
    [prom](
        const CdwchClient*,
        const DestroyInstanceRequest&,
        DestroyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::ModifyClusterConfigsOutcome CdwchClient::ModifyClusterConfigs(const ModifyClusterConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterConfigsResponse rsp = ModifyClusterConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterConfigsOutcome(rsp);
        else
            return ModifyClusterConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterConfigsOutcome(outcome.GetError());
    }
}

void CdwchClient::ModifyClusterConfigsAsync(const ModifyClusterConfigsRequest& request, const ModifyClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterConfigsRequest&;
    using Resp = ModifyClusterConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::ModifyClusterConfigsOutcomeCallable CdwchClient::ModifyClusterConfigsCallable(const ModifyClusterConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterConfigsOutcome>>();
    ModifyClusterConfigsAsync(
    request,
    [prom](
        const CdwchClient*,
        const ModifyClusterConfigsRequest&,
        ModifyClusterConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::ModifyInstanceKeyValConfigsOutcome CdwchClient::ModifyInstanceKeyValConfigs(const ModifyInstanceKeyValConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceKeyValConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceKeyValConfigsResponse rsp = ModifyInstanceKeyValConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceKeyValConfigsOutcome(rsp);
        else
            return ModifyInstanceKeyValConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceKeyValConfigsOutcome(outcome.GetError());
    }
}

void CdwchClient::ModifyInstanceKeyValConfigsAsync(const ModifyInstanceKeyValConfigsRequest& request, const ModifyInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceKeyValConfigsRequest&;
    using Resp = ModifyInstanceKeyValConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceKeyValConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::ModifyInstanceKeyValConfigsOutcomeCallable CdwchClient::ModifyInstanceKeyValConfigsCallable(const ModifyInstanceKeyValConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceKeyValConfigsOutcome>>();
    ModifyInstanceKeyValConfigsAsync(
    request,
    [prom](
        const CdwchClient*,
        const ModifyInstanceKeyValConfigsRequest&,
        ModifyInstanceKeyValConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::ModifyUserNewPrivilegeOutcome CdwchClient::ModifyUserNewPrivilege(const ModifyUserNewPrivilegeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserNewPrivilege");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserNewPrivilegeResponse rsp = ModifyUserNewPrivilegeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserNewPrivilegeOutcome(rsp);
        else
            return ModifyUserNewPrivilegeOutcome(o.GetError());
    }
    else
    {
        return ModifyUserNewPrivilegeOutcome(outcome.GetError());
    }
}

void CdwchClient::ModifyUserNewPrivilegeAsync(const ModifyUserNewPrivilegeRequest& request, const ModifyUserNewPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserNewPrivilegeRequest&;
    using Resp = ModifyUserNewPrivilegeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserNewPrivilege", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::ModifyUserNewPrivilegeOutcomeCallable CdwchClient::ModifyUserNewPrivilegeCallable(const ModifyUserNewPrivilegeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserNewPrivilegeOutcome>>();
    ModifyUserNewPrivilegeAsync(
    request,
    [prom](
        const CdwchClient*,
        const ModifyUserNewPrivilegeRequest&,
        ModifyUserNewPrivilegeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::OpenBackUpOutcome CdwchClient::OpenBackUp(const OpenBackUpRequest &request)
{
    auto outcome = MakeRequest(request, "OpenBackUp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenBackUpResponse rsp = OpenBackUpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenBackUpOutcome(rsp);
        else
            return OpenBackUpOutcome(o.GetError());
    }
    else
    {
        return OpenBackUpOutcome(outcome.GetError());
    }
}

void CdwchClient::OpenBackUpAsync(const OpenBackUpRequest& request, const OpenBackUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenBackUpRequest&;
    using Resp = OpenBackUpResponse;

    DoRequestAsync<Req, Resp>(
        "OpenBackUp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::OpenBackUpOutcomeCallable CdwchClient::OpenBackUpCallable(const OpenBackUpRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenBackUpOutcome>>();
    OpenBackUpAsync(
    request,
    [prom](
        const CdwchClient*,
        const OpenBackUpRequest&,
        OpenBackUpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::RecoverBackUpJobOutcome CdwchClient::RecoverBackUpJob(const RecoverBackUpJobRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverBackUpJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverBackUpJobResponse rsp = RecoverBackUpJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverBackUpJobOutcome(rsp);
        else
            return RecoverBackUpJobOutcome(o.GetError());
    }
    else
    {
        return RecoverBackUpJobOutcome(outcome.GetError());
    }
}

void CdwchClient::RecoverBackUpJobAsync(const RecoverBackUpJobRequest& request, const RecoverBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverBackUpJobRequest&;
    using Resp = RecoverBackUpJobResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverBackUpJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::RecoverBackUpJobOutcomeCallable CdwchClient::RecoverBackUpJobCallable(const RecoverBackUpJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverBackUpJobOutcome>>();
    RecoverBackUpJobAsync(
    request,
    [prom](
        const CdwchClient*,
        const RecoverBackUpJobRequest&,
        RecoverBackUpJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::ResizeDiskOutcome CdwchClient::ResizeDisk(const ResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeDiskResponse rsp = ResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeDiskOutcome(rsp);
        else
            return ResizeDiskOutcome(o.GetError());
    }
    else
    {
        return ResizeDiskOutcome(outcome.GetError());
    }
}

void CdwchClient::ResizeDiskAsync(const ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResizeDiskRequest&;
    using Resp = ResizeDiskResponse;

    DoRequestAsync<Req, Resp>(
        "ResizeDisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::ResizeDiskOutcomeCallable CdwchClient::ResizeDiskCallable(const ResizeDiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResizeDiskOutcome>>();
    ResizeDiskAsync(
    request,
    [prom](
        const CdwchClient*,
        const ResizeDiskRequest&,
        ResizeDiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::ScaleCNOutUpInstanceOutcome CdwchClient::ScaleCNOutUpInstance(const ScaleCNOutUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleCNOutUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleCNOutUpInstanceResponse rsp = ScaleCNOutUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleCNOutUpInstanceOutcome(rsp);
        else
            return ScaleCNOutUpInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleCNOutUpInstanceOutcome(outcome.GetError());
    }
}

void CdwchClient::ScaleCNOutUpInstanceAsync(const ScaleCNOutUpInstanceRequest& request, const ScaleCNOutUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScaleCNOutUpInstanceRequest&;
    using Resp = ScaleCNOutUpInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleCNOutUpInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::ScaleCNOutUpInstanceOutcomeCallable CdwchClient::ScaleCNOutUpInstanceCallable(const ScaleCNOutUpInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleCNOutUpInstanceOutcome>>();
    ScaleCNOutUpInstanceAsync(
    request,
    [prom](
        const CdwchClient*,
        const ScaleCNOutUpInstanceRequest&,
        ScaleCNOutUpInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::ScaleOutInstanceOutcome CdwchClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutInstanceResponse rsp = ScaleOutInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutInstanceOutcome(rsp);
        else
            return ScaleOutInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleOutInstanceOutcome(outcome.GetError());
    }
}

void CdwchClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScaleOutInstanceRequest&;
    using Resp = ScaleOutInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleOutInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::ScaleOutInstanceOutcomeCallable CdwchClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleOutInstanceOutcome>>();
    ScaleOutInstanceAsync(
    request,
    [prom](
        const CdwchClient*,
        const ScaleOutInstanceRequest&,
        ScaleOutInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwchClient::ScaleUpInstanceOutcome CdwchClient::ScaleUpInstance(const ScaleUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleUpInstanceResponse rsp = ScaleUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleUpInstanceOutcome(rsp);
        else
            return ScaleUpInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleUpInstanceOutcome(outcome.GetError());
    }
}

void CdwchClient::ScaleUpInstanceAsync(const ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScaleUpInstanceRequest&;
    using Resp = ScaleUpInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleUpInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwchClient::ScaleUpInstanceOutcomeCallable CdwchClient::ScaleUpInstanceCallable(const ScaleUpInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleUpInstanceOutcome>>();
    ScaleUpInstanceAsync(
    request,
    [prom](
        const CdwchClient*,
        const ScaleUpInstanceRequest&,
        ScaleUpInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


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

#include <tencentcloud/cdwpg/v20201230/CdwpgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdwpg::V20201230;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-30";
    const string ENDPOINT = "cdwpg.tencentcloudapi.com";
}

CdwpgClient::CdwpgClient(const Credential &credential, const string &region) :
    CdwpgClient(credential, region, ClientProfile())
{
}

CdwpgClient::CdwpgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdwpgClient::CreateInstanceByApiOutcome CdwpgClient::CreateInstanceByApi(const CreateInstanceByApiRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceByApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceByApiResponse rsp = CreateInstanceByApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceByApiOutcome(rsp);
        else
            return CreateInstanceByApiOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceByApiOutcome(outcome.GetError());
    }
}

void CdwpgClient::CreateInstanceByApiAsync(const CreateInstanceByApiRequest& request, const CreateInstanceByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceByApiRequest&;
    using Resp = CreateInstanceByApiResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstanceByApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::CreateInstanceByApiOutcomeCallable CdwpgClient::CreateInstanceByApiCallable(const CreateInstanceByApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceByApiOutcome>>();
    CreateInstanceByApiAsync(
    request,
    [prom](
        const CdwpgClient*,
        const CreateInstanceByApiRequest&,
        CreateInstanceByApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeAccountsOutcome CdwpgClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void CdwpgClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdwpgClient::DescribeAccountsOutcomeCallable CdwpgClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountsOutcome>>();
    DescribeAccountsAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeAccountsRequest&,
        DescribeAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeDBConfigHistoryOutcome CdwpgClient::DescribeDBConfigHistory(const DescribeDBConfigHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBConfigHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBConfigHistoryResponse rsp = DescribeDBConfigHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBConfigHistoryOutcome(rsp);
        else
            return DescribeDBConfigHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDBConfigHistoryOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeDBConfigHistoryAsync(const DescribeDBConfigHistoryRequest& request, const DescribeDBConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBConfigHistoryRequest&;
    using Resp = DescribeDBConfigHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBConfigHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::DescribeDBConfigHistoryOutcomeCallable CdwpgClient::DescribeDBConfigHistoryCallable(const DescribeDBConfigHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBConfigHistoryOutcome>>();
    DescribeDBConfigHistoryAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeDBConfigHistoryRequest&,
        DescribeDBConfigHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeDBParamsOutcome CdwpgClient::DescribeDBParams(const DescribeDBParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBParamsResponse rsp = DescribeDBParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBParamsOutcome(rsp);
        else
            return DescribeDBParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBParamsOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeDBParamsAsync(const DescribeDBParamsRequest& request, const DescribeDBParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBParamsRequest&;
    using Resp = DescribeDBParamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::DescribeDBParamsOutcomeCallable CdwpgClient::DescribeDBParamsCallable(const DescribeDBParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBParamsOutcome>>();
    DescribeDBParamsAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeDBParamsRequest&,
        DescribeDBParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeErrorLogOutcome CdwpgClient::DescribeErrorLog(const DescribeErrorLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeErrorLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeErrorLogResponse rsp = DescribeErrorLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeErrorLogOutcome(rsp);
        else
            return DescribeErrorLogOutcome(o.GetError());
    }
    else
    {
        return DescribeErrorLogOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeErrorLogAsync(const DescribeErrorLogRequest& request, const DescribeErrorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeErrorLogRequest&;
    using Resp = DescribeErrorLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeErrorLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::DescribeErrorLogOutcomeCallable CdwpgClient::DescribeErrorLogCallable(const DescribeErrorLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeErrorLogOutcome>>();
    DescribeErrorLogAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeErrorLogRequest&,
        DescribeErrorLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeInstanceOutcome CdwpgClient::DescribeInstance(const DescribeInstanceRequest &request)
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

void CdwpgClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdwpgClient::DescribeInstanceOutcomeCallable CdwpgClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOutcome>>();
    DescribeInstanceAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeInstanceRequest&,
        DescribeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeInstanceInfoOutcome CdwpgClient::DescribeInstanceInfo(const DescribeInstanceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceInfoResponse rsp = DescribeInstanceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceInfoOutcome(rsp);
        else
            return DescribeInstanceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceInfoOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeInstanceInfoAsync(const DescribeInstanceInfoRequest& request, const DescribeInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceInfoRequest&;
    using Resp = DescribeInstanceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::DescribeInstanceInfoOutcomeCallable CdwpgClient::DescribeInstanceInfoCallable(const DescribeInstanceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceInfoOutcome>>();
    DescribeInstanceInfoAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeInstanceInfoRequest&,
        DescribeInstanceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeInstanceNodesOutcome CdwpgClient::DescribeInstanceNodes(const DescribeInstanceNodesRequest &request)
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

void CdwpgClient::DescribeInstanceNodesAsync(const DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdwpgClient::DescribeInstanceNodesOutcomeCallable CdwpgClient::DescribeInstanceNodesCallable(const DescribeInstanceNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceNodesOutcome>>();
    DescribeInstanceNodesAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeInstanceNodesRequest&,
        DescribeInstanceNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeInstanceOperationsOutcome CdwpgClient::DescribeInstanceOperations(const DescribeInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceOperationsResponse rsp = DescribeInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOperationsOutcome(rsp);
        else
            return DescribeInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOperationsOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeInstanceOperationsAsync(const DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceOperationsRequest&;
    using Resp = DescribeInstanceOperationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceOperations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::DescribeInstanceOperationsOutcomeCallable CdwpgClient::DescribeInstanceOperationsCallable(const DescribeInstanceOperationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOperationsOutcome>>();
    DescribeInstanceOperationsAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeInstanceOperationsRequest&,
        DescribeInstanceOperationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeInstanceStateOutcome CdwpgClient::DescribeInstanceState(const DescribeInstanceStateRequest &request)
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

void CdwpgClient::DescribeInstanceStateAsync(const DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdwpgClient::DescribeInstanceStateOutcomeCallable CdwpgClient::DescribeInstanceStateCallable(const DescribeInstanceStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceStateOutcome>>();
    DescribeInstanceStateAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeInstanceStateRequest&,
        DescribeInstanceStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeInstancesOutcome CdwpgClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::DescribeInstancesOutcomeCallable CdwpgClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeSimpleInstancesOutcome CdwpgClient::DescribeSimpleInstances(const DescribeSimpleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleInstancesResponse rsp = DescribeSimpleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleInstancesOutcome(rsp);
        else
            return DescribeSimpleInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleInstancesOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeSimpleInstancesAsync(const DescribeSimpleInstancesRequest& request, const DescribeSimpleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSimpleInstancesRequest&;
    using Resp = DescribeSimpleInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSimpleInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::DescribeSimpleInstancesOutcomeCallable CdwpgClient::DescribeSimpleInstancesCallable(const DescribeSimpleInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSimpleInstancesOutcome>>();
    DescribeSimpleInstancesAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeSimpleInstancesRequest&,
        DescribeSimpleInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeSlowLogOutcome CdwpgClient::DescribeSlowLog(const DescribeSlowLogRequest &request)
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

void CdwpgClient::DescribeSlowLogAsync(const DescribeSlowLogRequest& request, const DescribeSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdwpgClient::DescribeSlowLogOutcomeCallable CdwpgClient::DescribeSlowLogCallable(const DescribeSlowLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogOutcome>>();
    DescribeSlowLogAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeSlowLogRequest&,
        DescribeSlowLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeUpgradeListOutcome CdwpgClient::DescribeUpgradeList(const DescribeUpgradeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpgradeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpgradeListResponse rsp = DescribeUpgradeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpgradeListOutcome(rsp);
        else
            return DescribeUpgradeListOutcome(o.GetError());
    }
    else
    {
        return DescribeUpgradeListOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeUpgradeListAsync(const DescribeUpgradeListRequest& request, const DescribeUpgradeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUpgradeListRequest&;
    using Resp = DescribeUpgradeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUpgradeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::DescribeUpgradeListOutcomeCallable CdwpgClient::DescribeUpgradeListCallable(const DescribeUpgradeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUpgradeListOutcome>>();
    DescribeUpgradeListAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeUpgradeListRequest&,
        DescribeUpgradeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DescribeUserHbaConfigOutcome CdwpgClient::DescribeUserHbaConfig(const DescribeUserHbaConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserHbaConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserHbaConfigResponse rsp = DescribeUserHbaConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserHbaConfigOutcome(rsp);
        else
            return DescribeUserHbaConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUserHbaConfigOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeUserHbaConfigAsync(const DescribeUserHbaConfigRequest& request, const DescribeUserHbaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserHbaConfigRequest&;
    using Resp = DescribeUserHbaConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserHbaConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::DescribeUserHbaConfigOutcomeCallable CdwpgClient::DescribeUserHbaConfigCallable(const DescribeUserHbaConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserHbaConfigOutcome>>();
    DescribeUserHbaConfigAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DescribeUserHbaConfigRequest&,
        DescribeUserHbaConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::DestroyInstanceByApiOutcome CdwpgClient::DestroyInstanceByApi(const DestroyInstanceByApiRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyInstanceByApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyInstanceByApiResponse rsp = DestroyInstanceByApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyInstanceByApiOutcome(rsp);
        else
            return DestroyInstanceByApiOutcome(o.GetError());
    }
    else
    {
        return DestroyInstanceByApiOutcome(outcome.GetError());
    }
}

void CdwpgClient::DestroyInstanceByApiAsync(const DestroyInstanceByApiRequest& request, const DestroyInstanceByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyInstanceByApiRequest&;
    using Resp = DestroyInstanceByApiResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyInstanceByApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::DestroyInstanceByApiOutcomeCallable CdwpgClient::DestroyInstanceByApiCallable(const DestroyInstanceByApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyInstanceByApiOutcome>>();
    DestroyInstanceByApiAsync(
    request,
    [prom](
        const CdwpgClient*,
        const DestroyInstanceByApiRequest&,
        DestroyInstanceByApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::ModifyDBParametersOutcome CdwpgClient::ModifyDBParameters(const ModifyDBParametersRequest &request)
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

void CdwpgClient::ModifyDBParametersAsync(const ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdwpgClient::ModifyDBParametersOutcomeCallable CdwpgClient::ModifyDBParametersCallable(const ModifyDBParametersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBParametersOutcome>>();
    ModifyDBParametersAsync(
    request,
    [prom](
        const CdwpgClient*,
        const ModifyDBParametersRequest&,
        ModifyDBParametersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::ModifyInstanceOutcome CdwpgClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void CdwpgClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceRequest&;
    using Resp = ModifyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::ModifyInstanceOutcomeCallable CdwpgClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceOutcome>>();
    ModifyInstanceAsync(
    request,
    [prom](
        const CdwpgClient*,
        const ModifyInstanceRequest&,
        ModifyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::ModifyUserHbaOutcome CdwpgClient::ModifyUserHba(const ModifyUserHbaRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserHba");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserHbaResponse rsp = ModifyUserHbaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserHbaOutcome(rsp);
        else
            return ModifyUserHbaOutcome(o.GetError());
    }
    else
    {
        return ModifyUserHbaOutcome(outcome.GetError());
    }
}

void CdwpgClient::ModifyUserHbaAsync(const ModifyUserHbaRequest& request, const ModifyUserHbaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserHbaRequest&;
    using Resp = ModifyUserHbaResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserHba", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::ModifyUserHbaOutcomeCallable CdwpgClient::ModifyUserHbaCallable(const ModifyUserHbaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserHbaOutcome>>();
    ModifyUserHbaAsync(
    request,
    [prom](
        const CdwpgClient*,
        const ModifyUserHbaRequest&,
        ModifyUserHbaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::ResetAccountPasswordOutcome CdwpgClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
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

void CdwpgClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdwpgClient::ResetAccountPasswordOutcomeCallable CdwpgClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAccountPasswordOutcome>>();
    ResetAccountPasswordAsync(
    request,
    [prom](
        const CdwpgClient*,
        const ResetAccountPasswordRequest&,
        ResetAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::RestartInstanceOutcome CdwpgClient::RestartInstance(const RestartInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartInstanceResponse rsp = RestartInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartInstanceOutcome(rsp);
        else
            return RestartInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartInstanceOutcome(outcome.GetError());
    }
}

void CdwpgClient::RestartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartInstanceRequest&;
    using Resp = RestartInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RestartInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwpgClient::RestartInstanceOutcomeCallable CdwpgClient::RestartInstanceCallable(const RestartInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartInstanceOutcome>>();
    RestartInstanceAsync(
    request,
    [prom](
        const CdwpgClient*,
        const RestartInstanceRequest&,
        RestartInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::ScaleOutInstanceOutcome CdwpgClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
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

void CdwpgClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdwpgClient::ScaleOutInstanceOutcomeCallable CdwpgClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleOutInstanceOutcome>>();
    ScaleOutInstanceAsync(
    request,
    [prom](
        const CdwpgClient*,
        const ScaleOutInstanceRequest&,
        ScaleOutInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::ScaleUpInstanceOutcome CdwpgClient::ScaleUpInstance(const ScaleUpInstanceRequest &request)
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

void CdwpgClient::ScaleUpInstanceAsync(const ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdwpgClient::ScaleUpInstanceOutcomeCallable CdwpgClient::ScaleUpInstanceCallable(const ScaleUpInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleUpInstanceOutcome>>();
    ScaleUpInstanceAsync(
    request,
    [prom](
        const CdwpgClient*,
        const ScaleUpInstanceRequest&,
        ScaleUpInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwpgClient::UpgradeInstanceOutcome CdwpgClient::UpgradeInstance(const UpgradeInstanceRequest &request)
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

void CdwpgClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdwpgClient::UpgradeInstanceOutcomeCallable CdwpgClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeInstanceOutcome>>();
    UpgradeInstanceAsync(
    request,
    [prom](
        const CdwpgClient*,
        const UpgradeInstanceRequest&,
        UpgradeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


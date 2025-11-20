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

#include <tencentcloud/tdcpg/v20211118/TdcpgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdcpg::V20211118;
using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-11-18";
    const string ENDPOINT = "tdcpg.tencentcloudapi.com";
}

TdcpgClient::TdcpgClient(const Credential &credential, const string &region) :
    TdcpgClient(credential, region, ClientProfile())
{
}

TdcpgClient::TdcpgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdcpgClient::CloneClusterToPointInTimeOutcome TdcpgClient::CloneClusterToPointInTime(const CloneClusterToPointInTimeRequest &request)
{
    auto outcome = MakeRequest(request, "CloneClusterToPointInTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneClusterToPointInTimeResponse rsp = CloneClusterToPointInTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneClusterToPointInTimeOutcome(rsp);
        else
            return CloneClusterToPointInTimeOutcome(o.GetError());
    }
    else
    {
        return CloneClusterToPointInTimeOutcome(outcome.GetError());
    }
}

void TdcpgClient::CloneClusterToPointInTimeAsync(const CloneClusterToPointInTimeRequest& request, const CloneClusterToPointInTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloneClusterToPointInTimeRequest&;
    using Resp = CloneClusterToPointInTimeResponse;

    DoRequestAsync<Req, Resp>(
        "CloneClusterToPointInTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::CloneClusterToPointInTimeOutcomeCallable TdcpgClient::CloneClusterToPointInTimeCallable(const CloneClusterToPointInTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloneClusterToPointInTimeOutcome>>();
    CloneClusterToPointInTimeAsync(
    request,
    [prom](
        const TdcpgClient*,
        const CloneClusterToPointInTimeRequest&,
        CloneClusterToPointInTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::CreateClusterOutcome TdcpgClient::CreateCluster(const CreateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterResponse rsp = CreateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterOutcome(rsp);
        else
            return CreateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateClusterOutcome(outcome.GetError());
    }
}

void TdcpgClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterRequest&;
    using Resp = CreateClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::CreateClusterOutcomeCallable TdcpgClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterOutcome>>();
    CreateClusterAsync(
    request,
    [prom](
        const TdcpgClient*,
        const CreateClusterRequest&,
        CreateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::CreateClusterInstancesOutcome TdcpgClient::CreateClusterInstances(const CreateClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterInstancesResponse rsp = CreateClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterInstancesOutcome(rsp);
        else
            return CreateClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateClusterInstancesOutcome(outcome.GetError());
    }
}

void TdcpgClient::CreateClusterInstancesAsync(const CreateClusterInstancesRequest& request, const CreateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterInstancesRequest&;
    using Resp = CreateClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::CreateClusterInstancesOutcomeCallable TdcpgClient::CreateClusterInstancesCallable(const CreateClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterInstancesOutcome>>();
    CreateClusterInstancesAsync(
    request,
    [prom](
        const TdcpgClient*,
        const CreateClusterInstancesRequest&,
        CreateClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::DeleteClusterOutcome TdcpgClient::DeleteCluster(const DeleteClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterResponse rsp = DeleteClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterOutcome(rsp);
        else
            return DeleteClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterOutcome(outcome.GetError());
    }
}

void TdcpgClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterRequest&;
    using Resp = DeleteClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::DeleteClusterOutcomeCallable TdcpgClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterOutcome>>();
    DeleteClusterAsync(
    request,
    [prom](
        const TdcpgClient*,
        const DeleteClusterRequest&,
        DeleteClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::DeleteClusterInstancesOutcome TdcpgClient::DeleteClusterInstances(const DeleteClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterInstancesResponse rsp = DeleteClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterInstancesOutcome(rsp);
        else
            return DeleteClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterInstancesOutcome(outcome.GetError());
    }
}

void TdcpgClient::DeleteClusterInstancesAsync(const DeleteClusterInstancesRequest& request, const DeleteClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterInstancesRequest&;
    using Resp = DeleteClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::DeleteClusterInstancesOutcomeCallable TdcpgClient::DeleteClusterInstancesCallable(const DeleteClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterInstancesOutcome>>();
    DeleteClusterInstancesAsync(
    request,
    [prom](
        const TdcpgClient*,
        const DeleteClusterInstancesRequest&,
        DeleteClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::DescribeAccountsOutcome TdcpgClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void TdcpgClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdcpgClient::DescribeAccountsOutcomeCallable TdcpgClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountsOutcome>>();
    DescribeAccountsAsync(
    request,
    [prom](
        const TdcpgClient*,
        const DescribeAccountsRequest&,
        DescribeAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::DescribeClusterBackupsOutcome TdcpgClient::DescribeClusterBackups(const DescribeClusterBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterBackupsResponse rsp = DescribeClusterBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterBackupsOutcome(rsp);
        else
            return DescribeClusterBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterBackupsOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeClusterBackupsAsync(const DescribeClusterBackupsRequest& request, const DescribeClusterBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterBackupsRequest&;
    using Resp = DescribeClusterBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::DescribeClusterBackupsOutcomeCallable TdcpgClient::DescribeClusterBackupsCallable(const DescribeClusterBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterBackupsOutcome>>();
    DescribeClusterBackupsAsync(
    request,
    [prom](
        const TdcpgClient*,
        const DescribeClusterBackupsRequest&,
        DescribeClusterBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::DescribeClusterEndpointsOutcome TdcpgClient::DescribeClusterEndpoints(const DescribeClusterEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterEndpointsResponse rsp = DescribeClusterEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterEndpointsOutcome(rsp);
        else
            return DescribeClusterEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterEndpointsOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeClusterEndpointsAsync(const DescribeClusterEndpointsRequest& request, const DescribeClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterEndpointsRequest&;
    using Resp = DescribeClusterEndpointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterEndpoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::DescribeClusterEndpointsOutcomeCallable TdcpgClient::DescribeClusterEndpointsCallable(const DescribeClusterEndpointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterEndpointsOutcome>>();
    DescribeClusterEndpointsAsync(
    request,
    [prom](
        const TdcpgClient*,
        const DescribeClusterEndpointsRequest&,
        DescribeClusterEndpointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::DescribeClusterInstancesOutcome TdcpgClient::DescribeClusterInstances(const DescribeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInstancesResponse rsp = DescribeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInstancesOutcome(rsp);
        else
            return DescribeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInstancesOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeClusterInstancesAsync(const DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterInstancesRequest&;
    using Resp = DescribeClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::DescribeClusterInstancesOutcomeCallable TdcpgClient::DescribeClusterInstancesCallable(const DescribeClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterInstancesOutcome>>();
    DescribeClusterInstancesAsync(
    request,
    [prom](
        const TdcpgClient*,
        const DescribeClusterInstancesRequest&,
        DescribeClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::DescribeClusterRecoveryTimeRangeOutcome TdcpgClient::DescribeClusterRecoveryTimeRange(const DescribeClusterRecoveryTimeRangeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRecoveryTimeRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRecoveryTimeRangeResponse rsp = DescribeClusterRecoveryTimeRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRecoveryTimeRangeOutcome(rsp);
        else
            return DescribeClusterRecoveryTimeRangeOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRecoveryTimeRangeOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeClusterRecoveryTimeRangeAsync(const DescribeClusterRecoveryTimeRangeRequest& request, const DescribeClusterRecoveryTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterRecoveryTimeRangeRequest&;
    using Resp = DescribeClusterRecoveryTimeRangeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterRecoveryTimeRange", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::DescribeClusterRecoveryTimeRangeOutcomeCallable TdcpgClient::DescribeClusterRecoveryTimeRangeCallable(const DescribeClusterRecoveryTimeRangeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterRecoveryTimeRangeOutcome>>();
    DescribeClusterRecoveryTimeRangeAsync(
    request,
    [prom](
        const TdcpgClient*,
        const DescribeClusterRecoveryTimeRangeRequest&,
        DescribeClusterRecoveryTimeRangeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::DescribeClustersOutcome TdcpgClient::DescribeClusters(const DescribeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClustersResponse rsp = DescribeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClustersOutcome(rsp);
        else
            return DescribeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClustersOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClustersRequest&;
    using Resp = DescribeClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::DescribeClustersOutcomeCallable TdcpgClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClustersOutcome>>();
    DescribeClustersAsync(
    request,
    [prom](
        const TdcpgClient*,
        const DescribeClustersRequest&,
        DescribeClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::DescribeResourcesByDealNameOutcome TdcpgClient::DescribeResourcesByDealName(const DescribeResourcesByDealNameRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcesByDealName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesByDealNameResponse rsp = DescribeResourcesByDealNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesByDealNameOutcome(rsp);
        else
            return DescribeResourcesByDealNameOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesByDealNameOutcome(outcome.GetError());
    }
}

void TdcpgClient::DescribeResourcesByDealNameAsync(const DescribeResourcesByDealNameRequest& request, const DescribeResourcesByDealNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourcesByDealNameRequest&;
    using Resp = DescribeResourcesByDealNameResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourcesByDealName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::DescribeResourcesByDealNameOutcomeCallable TdcpgClient::DescribeResourcesByDealNameCallable(const DescribeResourcesByDealNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcesByDealNameOutcome>>();
    DescribeResourcesByDealNameAsync(
    request,
    [prom](
        const TdcpgClient*,
        const DescribeResourcesByDealNameRequest&,
        DescribeResourcesByDealNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::IsolateClusterOutcome TdcpgClient::IsolateCluster(const IsolateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateClusterResponse rsp = IsolateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateClusterOutcome(rsp);
        else
            return IsolateClusterOutcome(o.GetError());
    }
    else
    {
        return IsolateClusterOutcome(outcome.GetError());
    }
}

void TdcpgClient::IsolateClusterAsync(const IsolateClusterRequest& request, const IsolateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateClusterRequest&;
    using Resp = IsolateClusterResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::IsolateClusterOutcomeCallable TdcpgClient::IsolateClusterCallable(const IsolateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateClusterOutcome>>();
    IsolateClusterAsync(
    request,
    [prom](
        const TdcpgClient*,
        const IsolateClusterRequest&,
        IsolateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::IsolateClusterInstancesOutcome TdcpgClient::IsolateClusterInstances(const IsolateClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateClusterInstancesResponse rsp = IsolateClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateClusterInstancesOutcome(rsp);
        else
            return IsolateClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return IsolateClusterInstancesOutcome(outcome.GetError());
    }
}

void TdcpgClient::IsolateClusterInstancesAsync(const IsolateClusterInstancesRequest& request, const IsolateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateClusterInstancesRequest&;
    using Resp = IsolateClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::IsolateClusterInstancesOutcomeCallable TdcpgClient::IsolateClusterInstancesCallable(const IsolateClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateClusterInstancesOutcome>>();
    IsolateClusterInstancesAsync(
    request,
    [prom](
        const TdcpgClient*,
        const IsolateClusterInstancesRequest&,
        IsolateClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::ModifyAccountDescriptionOutcome TdcpgClient::ModifyAccountDescription(const ModifyAccountDescriptionRequest &request)
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

void TdcpgClient::ModifyAccountDescriptionAsync(const ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdcpgClient::ModifyAccountDescriptionOutcomeCallable TdcpgClient::ModifyAccountDescriptionCallable(const ModifyAccountDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccountDescriptionOutcome>>();
    ModifyAccountDescriptionAsync(
    request,
    [prom](
        const TdcpgClient*,
        const ModifyAccountDescriptionRequest&,
        ModifyAccountDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::ModifyClusterEndpointWanStatusOutcome TdcpgClient::ModifyClusterEndpointWanStatus(const ModifyClusterEndpointWanStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterEndpointWanStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterEndpointWanStatusResponse rsp = ModifyClusterEndpointWanStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterEndpointWanStatusOutcome(rsp);
        else
            return ModifyClusterEndpointWanStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterEndpointWanStatusOutcome(outcome.GetError());
    }
}

void TdcpgClient::ModifyClusterEndpointWanStatusAsync(const ModifyClusterEndpointWanStatusRequest& request, const ModifyClusterEndpointWanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterEndpointWanStatusRequest&;
    using Resp = ModifyClusterEndpointWanStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterEndpointWanStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::ModifyClusterEndpointWanStatusOutcomeCallable TdcpgClient::ModifyClusterEndpointWanStatusCallable(const ModifyClusterEndpointWanStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterEndpointWanStatusOutcome>>();
    ModifyClusterEndpointWanStatusAsync(
    request,
    [prom](
        const TdcpgClient*,
        const ModifyClusterEndpointWanStatusRequest&,
        ModifyClusterEndpointWanStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::ModifyClusterInstancesSpecOutcome TdcpgClient::ModifyClusterInstancesSpec(const ModifyClusterInstancesSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterInstancesSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterInstancesSpecResponse rsp = ModifyClusterInstancesSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterInstancesSpecOutcome(rsp);
        else
            return ModifyClusterInstancesSpecOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterInstancesSpecOutcome(outcome.GetError());
    }
}

void TdcpgClient::ModifyClusterInstancesSpecAsync(const ModifyClusterInstancesSpecRequest& request, const ModifyClusterInstancesSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterInstancesSpecRequest&;
    using Resp = ModifyClusterInstancesSpecResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterInstancesSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::ModifyClusterInstancesSpecOutcomeCallable TdcpgClient::ModifyClusterInstancesSpecCallable(const ModifyClusterInstancesSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterInstancesSpecOutcome>>();
    ModifyClusterInstancesSpecAsync(
    request,
    [prom](
        const TdcpgClient*,
        const ModifyClusterInstancesSpecRequest&,
        ModifyClusterInstancesSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::ModifyClusterNameOutcome TdcpgClient::ModifyClusterName(const ModifyClusterNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterNameResponse rsp = ModifyClusterNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterNameOutcome(rsp);
        else
            return ModifyClusterNameOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterNameOutcome(outcome.GetError());
    }
}

void TdcpgClient::ModifyClusterNameAsync(const ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterNameRequest&;
    using Resp = ModifyClusterNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::ModifyClusterNameOutcomeCallable TdcpgClient::ModifyClusterNameCallable(const ModifyClusterNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterNameOutcome>>();
    ModifyClusterNameAsync(
    request,
    [prom](
        const TdcpgClient*,
        const ModifyClusterNameRequest&,
        ModifyClusterNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::ModifyClustersAutoRenewFlagOutcome TdcpgClient::ModifyClustersAutoRenewFlag(const ModifyClustersAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClustersAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClustersAutoRenewFlagResponse rsp = ModifyClustersAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClustersAutoRenewFlagOutcome(rsp);
        else
            return ModifyClustersAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyClustersAutoRenewFlagOutcome(outcome.GetError());
    }
}

void TdcpgClient::ModifyClustersAutoRenewFlagAsync(const ModifyClustersAutoRenewFlagRequest& request, const ModifyClustersAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClustersAutoRenewFlagRequest&;
    using Resp = ModifyClustersAutoRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClustersAutoRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::ModifyClustersAutoRenewFlagOutcomeCallable TdcpgClient::ModifyClustersAutoRenewFlagCallable(const ModifyClustersAutoRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClustersAutoRenewFlagOutcome>>();
    ModifyClustersAutoRenewFlagAsync(
    request,
    [prom](
        const TdcpgClient*,
        const ModifyClustersAutoRenewFlagRequest&,
        ModifyClustersAutoRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::RecoverClusterOutcome TdcpgClient::RecoverCluster(const RecoverClusterRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverClusterResponse rsp = RecoverClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverClusterOutcome(rsp);
        else
            return RecoverClusterOutcome(o.GetError());
    }
    else
    {
        return RecoverClusterOutcome(outcome.GetError());
    }
}

void TdcpgClient::RecoverClusterAsync(const RecoverClusterRequest& request, const RecoverClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverClusterRequest&;
    using Resp = RecoverClusterResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::RecoverClusterOutcomeCallable TdcpgClient::RecoverClusterCallable(const RecoverClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverClusterOutcome>>();
    RecoverClusterAsync(
    request,
    [prom](
        const TdcpgClient*,
        const RecoverClusterRequest&,
        RecoverClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::RecoverClusterInstancesOutcome TdcpgClient::RecoverClusterInstances(const RecoverClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverClusterInstancesResponse rsp = RecoverClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverClusterInstancesOutcome(rsp);
        else
            return RecoverClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return RecoverClusterInstancesOutcome(outcome.GetError());
    }
}

void TdcpgClient::RecoverClusterInstancesAsync(const RecoverClusterInstancesRequest& request, const RecoverClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverClusterInstancesRequest&;
    using Resp = RecoverClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::RecoverClusterInstancesOutcomeCallable TdcpgClient::RecoverClusterInstancesCallable(const RecoverClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverClusterInstancesOutcome>>();
    RecoverClusterInstancesAsync(
    request,
    [prom](
        const TdcpgClient*,
        const RecoverClusterInstancesRequest&,
        RecoverClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::RenewClusterOutcome TdcpgClient::RenewCluster(const RenewClusterRequest &request)
{
    auto outcome = MakeRequest(request, "RenewCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewClusterResponse rsp = RenewClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewClusterOutcome(rsp);
        else
            return RenewClusterOutcome(o.GetError());
    }
    else
    {
        return RenewClusterOutcome(outcome.GetError());
    }
}

void TdcpgClient::RenewClusterAsync(const RenewClusterRequest& request, const RenewClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewClusterRequest&;
    using Resp = RenewClusterResponse;

    DoRequestAsync<Req, Resp>(
        "RenewCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::RenewClusterOutcomeCallable TdcpgClient::RenewClusterCallable(const RenewClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewClusterOutcome>>();
    RenewClusterAsync(
    request,
    [prom](
        const TdcpgClient*,
        const RenewClusterRequest&,
        RenewClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::ResetAccountPasswordOutcome TdcpgClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
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

void TdcpgClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TdcpgClient::ResetAccountPasswordOutcomeCallable TdcpgClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAccountPasswordOutcome>>();
    ResetAccountPasswordAsync(
    request,
    [prom](
        const TdcpgClient*,
        const ResetAccountPasswordRequest&,
        ResetAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::RestartClusterInstancesOutcome TdcpgClient::RestartClusterInstances(const RestartClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RestartClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartClusterInstancesResponse rsp = RestartClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartClusterInstancesOutcome(rsp);
        else
            return RestartClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return RestartClusterInstancesOutcome(outcome.GetError());
    }
}

void TdcpgClient::RestartClusterInstancesAsync(const RestartClusterInstancesRequest& request, const RestartClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartClusterInstancesRequest&;
    using Resp = RestartClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RestartClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::RestartClusterInstancesOutcomeCallable TdcpgClient::RestartClusterInstancesCallable(const RestartClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartClusterInstancesOutcome>>();
    RestartClusterInstancesAsync(
    request,
    [prom](
        const TdcpgClient*,
        const RestartClusterInstancesRequest&,
        RestartClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdcpgClient::TransformClusterPayModeOutcome TdcpgClient::TransformClusterPayMode(const TransformClusterPayModeRequest &request)
{
    auto outcome = MakeRequest(request, "TransformClusterPayMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransformClusterPayModeResponse rsp = TransformClusterPayModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransformClusterPayModeOutcome(rsp);
        else
            return TransformClusterPayModeOutcome(o.GetError());
    }
    else
    {
        return TransformClusterPayModeOutcome(outcome.GetError());
    }
}

void TdcpgClient::TransformClusterPayModeAsync(const TransformClusterPayModeRequest& request, const TransformClusterPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransformClusterPayModeRequest&;
    using Resp = TransformClusterPayModeResponse;

    DoRequestAsync<Req, Resp>(
        "TransformClusterPayMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdcpgClient::TransformClusterPayModeOutcomeCallable TdcpgClient::TransformClusterPayModeCallable(const TransformClusterPayModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransformClusterPayModeOutcome>>();
    TransformClusterPayModeAsync(
    request,
    [prom](
        const TdcpgClient*,
        const TransformClusterPayModeRequest&,
        TransformClusterPayModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


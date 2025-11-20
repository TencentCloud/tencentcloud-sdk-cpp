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

#include <tencentcloud/cdc/v20201214/CdcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdc::V20201214;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-14";
    const string ENDPOINT = "cdc.tencentcloudapi.com";
}

CdcClient::CdcClient(const Credential &credential, const string &region) :
    CdcClient(credential, region, ClientProfile())
{
}

CdcClient::CdcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdcClient::CreateDedicatedClusterOutcome CdcClient::CreateDedicatedCluster(const CreateDedicatedClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDedicatedCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDedicatedClusterResponse rsp = CreateDedicatedClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDedicatedClusterOutcome(rsp);
        else
            return CreateDedicatedClusterOutcome(o.GetError());
    }
    else
    {
        return CreateDedicatedClusterOutcome(outcome.GetError());
    }
}

void CdcClient::CreateDedicatedClusterAsync(const CreateDedicatedClusterRequest& request, const CreateDedicatedClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDedicatedClusterRequest&;
    using Resp = CreateDedicatedClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDedicatedCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::CreateDedicatedClusterOutcomeCallable CdcClient::CreateDedicatedClusterCallable(const CreateDedicatedClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDedicatedClusterOutcome>>();
    CreateDedicatedClusterAsync(
    request,
    [prom](
        const CdcClient*,
        const CreateDedicatedClusterRequest&,
        CreateDedicatedClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::CreateDedicatedClusterImageCacheOutcome CdcClient::CreateDedicatedClusterImageCache(const CreateDedicatedClusterImageCacheRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDedicatedClusterImageCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDedicatedClusterImageCacheResponse rsp = CreateDedicatedClusterImageCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDedicatedClusterImageCacheOutcome(rsp);
        else
            return CreateDedicatedClusterImageCacheOutcome(o.GetError());
    }
    else
    {
        return CreateDedicatedClusterImageCacheOutcome(outcome.GetError());
    }
}

void CdcClient::CreateDedicatedClusterImageCacheAsync(const CreateDedicatedClusterImageCacheRequest& request, const CreateDedicatedClusterImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDedicatedClusterImageCacheRequest&;
    using Resp = CreateDedicatedClusterImageCacheResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDedicatedClusterImageCache", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::CreateDedicatedClusterImageCacheOutcomeCallable CdcClient::CreateDedicatedClusterImageCacheCallable(const CreateDedicatedClusterImageCacheRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDedicatedClusterImageCacheOutcome>>();
    CreateDedicatedClusterImageCacheAsync(
    request,
    [prom](
        const CdcClient*,
        const CreateDedicatedClusterImageCacheRequest&,
        CreateDedicatedClusterImageCacheOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::CreateDedicatedClusterOrderOutcome CdcClient::CreateDedicatedClusterOrder(const CreateDedicatedClusterOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDedicatedClusterOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDedicatedClusterOrderResponse rsp = CreateDedicatedClusterOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDedicatedClusterOrderOutcome(rsp);
        else
            return CreateDedicatedClusterOrderOutcome(o.GetError());
    }
    else
    {
        return CreateDedicatedClusterOrderOutcome(outcome.GetError());
    }
}

void CdcClient::CreateDedicatedClusterOrderAsync(const CreateDedicatedClusterOrderRequest& request, const CreateDedicatedClusterOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDedicatedClusterOrderRequest&;
    using Resp = CreateDedicatedClusterOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDedicatedClusterOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::CreateDedicatedClusterOrderOutcomeCallable CdcClient::CreateDedicatedClusterOrderCallable(const CreateDedicatedClusterOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDedicatedClusterOrderOutcome>>();
    CreateDedicatedClusterOrderAsync(
    request,
    [prom](
        const CdcClient*,
        const CreateDedicatedClusterOrderRequest&,
        CreateDedicatedClusterOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::CreateSiteOutcome CdcClient::CreateSite(const CreateSiteRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSiteResponse rsp = CreateSiteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSiteOutcome(rsp);
        else
            return CreateSiteOutcome(o.GetError());
    }
    else
    {
        return CreateSiteOutcome(outcome.GetError());
    }
}

void CdcClient::CreateSiteAsync(const CreateSiteRequest& request, const CreateSiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSiteRequest&;
    using Resp = CreateSiteResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::CreateSiteOutcomeCallable CdcClient::CreateSiteCallable(const CreateSiteRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSiteOutcome>>();
    CreateSiteAsync(
    request,
    [prom](
        const CdcClient*,
        const CreateSiteRequest&,
        CreateSiteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DeleteDedicatedClusterImageCacheOutcome CdcClient::DeleteDedicatedClusterImageCache(const DeleteDedicatedClusterImageCacheRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDedicatedClusterImageCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDedicatedClusterImageCacheResponse rsp = DeleteDedicatedClusterImageCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDedicatedClusterImageCacheOutcome(rsp);
        else
            return DeleteDedicatedClusterImageCacheOutcome(o.GetError());
    }
    else
    {
        return DeleteDedicatedClusterImageCacheOutcome(outcome.GetError());
    }
}

void CdcClient::DeleteDedicatedClusterImageCacheAsync(const DeleteDedicatedClusterImageCacheRequest& request, const DeleteDedicatedClusterImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDedicatedClusterImageCacheRequest&;
    using Resp = DeleteDedicatedClusterImageCacheResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDedicatedClusterImageCache", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DeleteDedicatedClusterImageCacheOutcomeCallable CdcClient::DeleteDedicatedClusterImageCacheCallable(const DeleteDedicatedClusterImageCacheRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDedicatedClusterImageCacheOutcome>>();
    DeleteDedicatedClusterImageCacheAsync(
    request,
    [prom](
        const CdcClient*,
        const DeleteDedicatedClusterImageCacheRequest&,
        DeleteDedicatedClusterImageCacheOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DeleteDedicatedClustersOutcome CdcClient::DeleteDedicatedClusters(const DeleteDedicatedClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDedicatedClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDedicatedClustersResponse rsp = DeleteDedicatedClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDedicatedClustersOutcome(rsp);
        else
            return DeleteDedicatedClustersOutcome(o.GetError());
    }
    else
    {
        return DeleteDedicatedClustersOutcome(outcome.GetError());
    }
}

void CdcClient::DeleteDedicatedClustersAsync(const DeleteDedicatedClustersRequest& request, const DeleteDedicatedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDedicatedClustersRequest&;
    using Resp = DeleteDedicatedClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDedicatedClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DeleteDedicatedClustersOutcomeCallable CdcClient::DeleteDedicatedClustersCallable(const DeleteDedicatedClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDedicatedClustersOutcome>>();
    DeleteDedicatedClustersAsync(
    request,
    [prom](
        const CdcClient*,
        const DeleteDedicatedClustersRequest&,
        DeleteDedicatedClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DeleteSitesOutcome CdcClient::DeleteSites(const DeleteSitesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSitesResponse rsp = DeleteSitesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSitesOutcome(rsp);
        else
            return DeleteSitesOutcome(o.GetError());
    }
    else
    {
        return DeleteSitesOutcome(outcome.GetError());
    }
}

void CdcClient::DeleteSitesAsync(const DeleteSitesRequest& request, const DeleteSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSitesRequest&;
    using Resp = DeleteSitesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DeleteSitesOutcomeCallable CdcClient::DeleteSitesCallable(const DeleteSitesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSitesOutcome>>();
    DeleteSitesAsync(
    request,
    [prom](
        const CdcClient*,
        const DeleteSitesRequest&,
        DeleteSitesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeDedicatedClusterCbsStatisticsOutcome CdcClient::DescribeDedicatedClusterCbsStatistics(const DescribeDedicatedClusterCbsStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedClusterCbsStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedClusterCbsStatisticsResponse rsp = DescribeDedicatedClusterCbsStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedClusterCbsStatisticsOutcome(rsp);
        else
            return DescribeDedicatedClusterCbsStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedClusterCbsStatisticsOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeDedicatedClusterCbsStatisticsAsync(const DescribeDedicatedClusterCbsStatisticsRequest& request, const DescribeDedicatedClusterCbsStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDedicatedClusterCbsStatisticsRequest&;
    using Resp = DescribeDedicatedClusterCbsStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDedicatedClusterCbsStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeDedicatedClusterCbsStatisticsOutcomeCallable CdcClient::DescribeDedicatedClusterCbsStatisticsCallable(const DescribeDedicatedClusterCbsStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedClusterCbsStatisticsOutcome>>();
    DescribeDedicatedClusterCbsStatisticsAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeDedicatedClusterCbsStatisticsRequest&,
        DescribeDedicatedClusterCbsStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeDedicatedClusterCosCapacityOutcome CdcClient::DescribeDedicatedClusterCosCapacity(const DescribeDedicatedClusterCosCapacityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedClusterCosCapacity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedClusterCosCapacityResponse rsp = DescribeDedicatedClusterCosCapacityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedClusterCosCapacityOutcome(rsp);
        else
            return DescribeDedicatedClusterCosCapacityOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedClusterCosCapacityOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeDedicatedClusterCosCapacityAsync(const DescribeDedicatedClusterCosCapacityRequest& request, const DescribeDedicatedClusterCosCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDedicatedClusterCosCapacityRequest&;
    using Resp = DescribeDedicatedClusterCosCapacityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDedicatedClusterCosCapacity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeDedicatedClusterCosCapacityOutcomeCallable CdcClient::DescribeDedicatedClusterCosCapacityCallable(const DescribeDedicatedClusterCosCapacityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedClusterCosCapacityOutcome>>();
    DescribeDedicatedClusterCosCapacityAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeDedicatedClusterCosCapacityRequest&,
        DescribeDedicatedClusterCosCapacityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeDedicatedClusterHostStatisticsOutcome CdcClient::DescribeDedicatedClusterHostStatistics(const DescribeDedicatedClusterHostStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedClusterHostStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedClusterHostStatisticsResponse rsp = DescribeDedicatedClusterHostStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedClusterHostStatisticsOutcome(rsp);
        else
            return DescribeDedicatedClusterHostStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedClusterHostStatisticsOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeDedicatedClusterHostStatisticsAsync(const DescribeDedicatedClusterHostStatisticsRequest& request, const DescribeDedicatedClusterHostStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDedicatedClusterHostStatisticsRequest&;
    using Resp = DescribeDedicatedClusterHostStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDedicatedClusterHostStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeDedicatedClusterHostStatisticsOutcomeCallable CdcClient::DescribeDedicatedClusterHostStatisticsCallable(const DescribeDedicatedClusterHostStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedClusterHostStatisticsOutcome>>();
    DescribeDedicatedClusterHostStatisticsAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeDedicatedClusterHostStatisticsRequest&,
        DescribeDedicatedClusterHostStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeDedicatedClusterHostsOutcome CdcClient::DescribeDedicatedClusterHosts(const DescribeDedicatedClusterHostsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedClusterHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedClusterHostsResponse rsp = DescribeDedicatedClusterHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedClusterHostsOutcome(rsp);
        else
            return DescribeDedicatedClusterHostsOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedClusterHostsOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeDedicatedClusterHostsAsync(const DescribeDedicatedClusterHostsRequest& request, const DescribeDedicatedClusterHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDedicatedClusterHostsRequest&;
    using Resp = DescribeDedicatedClusterHostsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDedicatedClusterHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeDedicatedClusterHostsOutcomeCallable CdcClient::DescribeDedicatedClusterHostsCallable(const DescribeDedicatedClusterHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedClusterHostsOutcome>>();
    DescribeDedicatedClusterHostsAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeDedicatedClusterHostsRequest&,
        DescribeDedicatedClusterHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeDedicatedClusterInstanceTypesOutcome CdcClient::DescribeDedicatedClusterInstanceTypes(const DescribeDedicatedClusterInstanceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedClusterInstanceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedClusterInstanceTypesResponse rsp = DescribeDedicatedClusterInstanceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedClusterInstanceTypesOutcome(rsp);
        else
            return DescribeDedicatedClusterInstanceTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedClusterInstanceTypesOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeDedicatedClusterInstanceTypesAsync(const DescribeDedicatedClusterInstanceTypesRequest& request, const DescribeDedicatedClusterInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDedicatedClusterInstanceTypesRequest&;
    using Resp = DescribeDedicatedClusterInstanceTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDedicatedClusterInstanceTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeDedicatedClusterInstanceTypesOutcomeCallable CdcClient::DescribeDedicatedClusterInstanceTypesCallable(const DescribeDedicatedClusterInstanceTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedClusterInstanceTypesOutcome>>();
    DescribeDedicatedClusterInstanceTypesAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeDedicatedClusterInstanceTypesRequest&,
        DescribeDedicatedClusterInstanceTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeDedicatedClusterOrdersOutcome CdcClient::DescribeDedicatedClusterOrders(const DescribeDedicatedClusterOrdersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedClusterOrders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedClusterOrdersResponse rsp = DescribeDedicatedClusterOrdersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedClusterOrdersOutcome(rsp);
        else
            return DescribeDedicatedClusterOrdersOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedClusterOrdersOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeDedicatedClusterOrdersAsync(const DescribeDedicatedClusterOrdersRequest& request, const DescribeDedicatedClusterOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDedicatedClusterOrdersRequest&;
    using Resp = DescribeDedicatedClusterOrdersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDedicatedClusterOrders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeDedicatedClusterOrdersOutcomeCallable CdcClient::DescribeDedicatedClusterOrdersCallable(const DescribeDedicatedClusterOrdersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedClusterOrdersOutcome>>();
    DescribeDedicatedClusterOrdersAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeDedicatedClusterOrdersRequest&,
        DescribeDedicatedClusterOrdersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeDedicatedClusterOverviewOutcome CdcClient::DescribeDedicatedClusterOverview(const DescribeDedicatedClusterOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedClusterOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedClusterOverviewResponse rsp = DescribeDedicatedClusterOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedClusterOverviewOutcome(rsp);
        else
            return DescribeDedicatedClusterOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedClusterOverviewOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeDedicatedClusterOverviewAsync(const DescribeDedicatedClusterOverviewRequest& request, const DescribeDedicatedClusterOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDedicatedClusterOverviewRequest&;
    using Resp = DescribeDedicatedClusterOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDedicatedClusterOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeDedicatedClusterOverviewOutcomeCallable CdcClient::DescribeDedicatedClusterOverviewCallable(const DescribeDedicatedClusterOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedClusterOverviewOutcome>>();
    DescribeDedicatedClusterOverviewAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeDedicatedClusterOverviewRequest&,
        DescribeDedicatedClusterOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeDedicatedClusterTypesOutcome CdcClient::DescribeDedicatedClusterTypes(const DescribeDedicatedClusterTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedClusterTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedClusterTypesResponse rsp = DescribeDedicatedClusterTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedClusterTypesOutcome(rsp);
        else
            return DescribeDedicatedClusterTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedClusterTypesOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeDedicatedClusterTypesAsync(const DescribeDedicatedClusterTypesRequest& request, const DescribeDedicatedClusterTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDedicatedClusterTypesRequest&;
    using Resp = DescribeDedicatedClusterTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDedicatedClusterTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeDedicatedClusterTypesOutcomeCallable CdcClient::DescribeDedicatedClusterTypesCallable(const DescribeDedicatedClusterTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedClusterTypesOutcome>>();
    DescribeDedicatedClusterTypesAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeDedicatedClusterTypesRequest&,
        DescribeDedicatedClusterTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeDedicatedClustersOutcome CdcClient::DescribeDedicatedClusters(const DescribeDedicatedClustersRequest &request)
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

void CdcClient::DescribeDedicatedClustersAsync(const DescribeDedicatedClustersRequest& request, const DescribeDedicatedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdcClient::DescribeDedicatedClustersOutcomeCallable CdcClient::DescribeDedicatedClustersCallable(const DescribeDedicatedClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedClustersOutcome>>();
    DescribeDedicatedClustersAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeDedicatedClustersRequest&,
        DescribeDedicatedClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeDedicatedSupportedZonesOutcome CdcClient::DescribeDedicatedSupportedZones(const DescribeDedicatedSupportedZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedSupportedZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedSupportedZonesResponse rsp = DescribeDedicatedSupportedZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedSupportedZonesOutcome(rsp);
        else
            return DescribeDedicatedSupportedZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedSupportedZonesOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeDedicatedSupportedZonesAsync(const DescribeDedicatedSupportedZonesRequest& request, const DescribeDedicatedSupportedZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDedicatedSupportedZonesRequest&;
    using Resp = DescribeDedicatedSupportedZonesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDedicatedSupportedZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeDedicatedSupportedZonesOutcomeCallable CdcClient::DescribeDedicatedSupportedZonesCallable(const DescribeDedicatedSupportedZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDedicatedSupportedZonesOutcome>>();
    DescribeDedicatedSupportedZonesAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeDedicatedSupportedZonesRequest&,
        DescribeDedicatedSupportedZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeSitesOutcome CdcClient::DescribeSites(const DescribeSitesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSitesResponse rsp = DescribeSitesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSitesOutcome(rsp);
        else
            return DescribeSitesOutcome(o.GetError());
    }
    else
    {
        return DescribeSitesOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeSitesAsync(const DescribeSitesRequest& request, const DescribeSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSitesRequest&;
    using Resp = DescribeSitesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeSitesOutcomeCallable CdcClient::DescribeSitesCallable(const DescribeSitesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSitesOutcome>>();
    DescribeSitesAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeSitesRequest&,
        DescribeSitesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::DescribeSitesDetailOutcome CdcClient::DescribeSitesDetail(const DescribeSitesDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSitesDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSitesDetailResponse rsp = DescribeSitesDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSitesDetailOutcome(rsp);
        else
            return DescribeSitesDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeSitesDetailOutcome(outcome.GetError());
    }
}

void CdcClient::DescribeSitesDetailAsync(const DescribeSitesDetailRequest& request, const DescribeSitesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSitesDetailRequest&;
    using Resp = DescribeSitesDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSitesDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::DescribeSitesDetailOutcomeCallable CdcClient::DescribeSitesDetailCallable(const DescribeSitesDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSitesDetailOutcome>>();
    DescribeSitesDetailAsync(
    request,
    [prom](
        const CdcClient*,
        const DescribeSitesDetailRequest&,
        DescribeSitesDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::ModifyDedicatedClusterInfoOutcome CdcClient::ModifyDedicatedClusterInfo(const ModifyDedicatedClusterInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDedicatedClusterInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDedicatedClusterInfoResponse rsp = ModifyDedicatedClusterInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDedicatedClusterInfoOutcome(rsp);
        else
            return ModifyDedicatedClusterInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyDedicatedClusterInfoOutcome(outcome.GetError());
    }
}

void CdcClient::ModifyDedicatedClusterInfoAsync(const ModifyDedicatedClusterInfoRequest& request, const ModifyDedicatedClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDedicatedClusterInfoRequest&;
    using Resp = ModifyDedicatedClusterInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDedicatedClusterInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::ModifyDedicatedClusterInfoOutcomeCallable CdcClient::ModifyDedicatedClusterInfoCallable(const ModifyDedicatedClusterInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDedicatedClusterInfoOutcome>>();
    ModifyDedicatedClusterInfoAsync(
    request,
    [prom](
        const CdcClient*,
        const ModifyDedicatedClusterInfoRequest&,
        ModifyDedicatedClusterInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::ModifyOrderStatusOutcome CdcClient::ModifyOrderStatus(const ModifyOrderStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOrderStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOrderStatusResponse rsp = ModifyOrderStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOrderStatusOutcome(rsp);
        else
            return ModifyOrderStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyOrderStatusOutcome(outcome.GetError());
    }
}

void CdcClient::ModifyOrderStatusAsync(const ModifyOrderStatusRequest& request, const ModifyOrderStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOrderStatusRequest&;
    using Resp = ModifyOrderStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOrderStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::ModifyOrderStatusOutcomeCallable CdcClient::ModifyOrderStatusCallable(const ModifyOrderStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOrderStatusOutcome>>();
    ModifyOrderStatusAsync(
    request,
    [prom](
        const CdcClient*,
        const ModifyOrderStatusRequest&,
        ModifyOrderStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::ModifySiteDeviceInfoOutcome CdcClient::ModifySiteDeviceInfo(const ModifySiteDeviceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySiteDeviceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySiteDeviceInfoResponse rsp = ModifySiteDeviceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySiteDeviceInfoOutcome(rsp);
        else
            return ModifySiteDeviceInfoOutcome(o.GetError());
    }
    else
    {
        return ModifySiteDeviceInfoOutcome(outcome.GetError());
    }
}

void CdcClient::ModifySiteDeviceInfoAsync(const ModifySiteDeviceInfoRequest& request, const ModifySiteDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySiteDeviceInfoRequest&;
    using Resp = ModifySiteDeviceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySiteDeviceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::ModifySiteDeviceInfoOutcomeCallable CdcClient::ModifySiteDeviceInfoCallable(const ModifySiteDeviceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySiteDeviceInfoOutcome>>();
    ModifySiteDeviceInfoAsync(
    request,
    [prom](
        const CdcClient*,
        const ModifySiteDeviceInfoRequest&,
        ModifySiteDeviceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdcClient::ModifySiteInfoOutcome CdcClient::ModifySiteInfo(const ModifySiteInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySiteInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySiteInfoResponse rsp = ModifySiteInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySiteInfoOutcome(rsp);
        else
            return ModifySiteInfoOutcome(o.GetError());
    }
    else
    {
        return ModifySiteInfoOutcome(outcome.GetError());
    }
}

void CdcClient::ModifySiteInfoAsync(const ModifySiteInfoRequest& request, const ModifySiteInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySiteInfoRequest&;
    using Resp = ModifySiteInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySiteInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdcClient::ModifySiteInfoOutcomeCallable CdcClient::ModifySiteInfoCallable(const ModifySiteInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySiteInfoOutcome>>();
    ModifySiteInfoAsync(
    request,
    [prom](
        const CdcClient*,
        const ModifySiteInfoRequest&,
        ModifySiteInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


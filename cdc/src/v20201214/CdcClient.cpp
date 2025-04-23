/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDedicatedCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::CreateDedicatedClusterOutcomeCallable CdcClient::CreateDedicatedClusterCallable(const CreateDedicatedClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDedicatedClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateDedicatedCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDedicatedClusterImageCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::CreateDedicatedClusterImageCacheOutcomeCallable CdcClient::CreateDedicatedClusterImageCacheCallable(const CreateDedicatedClusterImageCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDedicatedClusterImageCacheOutcome()>>(
        [this, request]()
        {
            return this->CreateDedicatedClusterImageCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDedicatedClusterOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::CreateDedicatedClusterOrderOutcomeCallable CdcClient::CreateDedicatedClusterOrderCallable(const CreateDedicatedClusterOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDedicatedClusterOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateDedicatedClusterOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::CreateSiteOutcomeCallable CdcClient::CreateSiteCallable(const CreateSiteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSiteOutcome()>>(
        [this, request]()
        {
            return this->CreateSite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDedicatedClusterImageCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DeleteDedicatedClusterImageCacheOutcomeCallable CdcClient::DeleteDedicatedClusterImageCacheCallable(const DeleteDedicatedClusterImageCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDedicatedClusterImageCacheOutcome()>>(
        [this, request]()
        {
            return this->DeleteDedicatedClusterImageCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDedicatedClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DeleteDedicatedClustersOutcomeCallable CdcClient::DeleteDedicatedClustersCallable(const DeleteDedicatedClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDedicatedClustersOutcome()>>(
        [this, request]()
        {
            return this->DeleteDedicatedClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSites(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DeleteSitesOutcomeCallable CdcClient::DeleteSitesCallable(const DeleteSitesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSitesOutcome()>>(
        [this, request]()
        {
            return this->DeleteSites(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedClusterCbsStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeDedicatedClusterCbsStatisticsOutcomeCallable CdcClient::DescribeDedicatedClusterCbsStatisticsCallable(const DescribeDedicatedClusterCbsStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedClusterCbsStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedClusterCbsStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedClusterCosCapacity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeDedicatedClusterCosCapacityOutcomeCallable CdcClient::DescribeDedicatedClusterCosCapacityCallable(const DescribeDedicatedClusterCosCapacityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedClusterCosCapacityOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedClusterCosCapacity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedClusterHostStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeDedicatedClusterHostStatisticsOutcomeCallable CdcClient::DescribeDedicatedClusterHostStatisticsCallable(const DescribeDedicatedClusterHostStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedClusterHostStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedClusterHostStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedClusterHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeDedicatedClusterHostsOutcomeCallable CdcClient::DescribeDedicatedClusterHostsCallable(const DescribeDedicatedClusterHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedClusterHostsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedClusterHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedClusterInstanceTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeDedicatedClusterInstanceTypesOutcomeCallable CdcClient::DescribeDedicatedClusterInstanceTypesCallable(const DescribeDedicatedClusterInstanceTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedClusterInstanceTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedClusterInstanceTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedClusterOrders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeDedicatedClusterOrdersOutcomeCallable CdcClient::DescribeDedicatedClusterOrdersCallable(const DescribeDedicatedClusterOrdersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedClusterOrdersOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedClusterOrders(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedClusterOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeDedicatedClusterOverviewOutcomeCallable CdcClient::DescribeDedicatedClusterOverviewCallable(const DescribeDedicatedClusterOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedClusterOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedClusterOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedClusterTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeDedicatedClusterTypesOutcomeCallable CdcClient::DescribeDedicatedClusterTypesCallable(const DescribeDedicatedClusterTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedClusterTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedClusterTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeDedicatedClustersOutcomeCallable CdcClient::DescribeDedicatedClustersCallable(const DescribeDedicatedClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedSupportedZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeDedicatedSupportedZonesOutcomeCallable CdcClient::DescribeDedicatedSupportedZonesCallable(const DescribeDedicatedSupportedZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedSupportedZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedSupportedZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSites(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeSitesOutcomeCallable CdcClient::DescribeSitesCallable(const DescribeSitesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSitesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSites(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSitesDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::DescribeSitesDetailOutcomeCallable CdcClient::DescribeSitesDetailCallable(const DescribeSitesDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSitesDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeSitesDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDedicatedClusterInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::ModifyDedicatedClusterInfoOutcomeCallable CdcClient::ModifyDedicatedClusterInfoCallable(const ModifyDedicatedClusterInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDedicatedClusterInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyDedicatedClusterInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyOrderStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::ModifyOrderStatusOutcomeCallable CdcClient::ModifyOrderStatusCallable(const ModifyOrderStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyOrderStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyOrderStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySiteDeviceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::ModifySiteDeviceInfoOutcomeCallable CdcClient::ModifySiteDeviceInfoCallable(const ModifySiteDeviceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySiteDeviceInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifySiteDeviceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySiteInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdcClient::ModifySiteInfoOutcomeCallable CdcClient::ModifySiteInfoCallable(const ModifySiteInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySiteInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifySiteInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


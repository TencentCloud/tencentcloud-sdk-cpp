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

#include <tencentcloud/cdn/v20180606/CdnClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdn::V20180606;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-06";
    const string ENDPOINT = "cdn.tencentcloudapi.com";
}

CdnClient::CdnClient(const Credential &credential, const string &region) :
    CdnClient(credential, region, ClientProfile())
{
}

CdnClient::CdnClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdnClient::DescribeCdnDataOutcome CdnClient::DescribeCdnData(const DescribeCdnDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnDataResponse rsp = DescribeCdnDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnDataOutcome(rsp);
        else
            return DescribeCdnDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCdnDataAsync(const DescribeCdnDataRequest& request, const DescribeCdnDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCdnData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeCdnDataOutcomeCallable CdnClient::DescribeCdnDataCallable(const DescribeCdnDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCdnDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeCdnData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeCdnIpOutcome CdnClient::DescribeCdnIp(const DescribeCdnIpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnIpResponse rsp = DescribeCdnIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnIpOutcome(rsp);
        else
            return DescribeCdnIpOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnIpOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCdnIpAsync(const DescribeCdnIpRequest& request, const DescribeCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCdnIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeCdnIpOutcomeCallable CdnClient::DescribeCdnIpCallable(const DescribeCdnIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCdnIpOutcome()>>(
        [this, request]()
        {
            return this->DescribeCdnIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeIpVisitOutcome CdnClient::DescribeIpVisit(const DescribeIpVisitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpVisit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpVisitResponse rsp = DescribeIpVisitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpVisitOutcome(rsp);
        else
            return DescribeIpVisitOutcome(o.GetError());
    }
    else
    {
        return DescribeIpVisitOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeIpVisitAsync(const DescribeIpVisitRequest& request, const DescribeIpVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpVisit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeIpVisitOutcomeCallable CdnClient::DescribeIpVisitCallable(const DescribeIpVisitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpVisitOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpVisit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeMapInfoOutcome CdnClient::DescribeMapInfo(const DescribeMapInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMapInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMapInfoResponse rsp = DescribeMapInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMapInfoOutcome(rsp);
        else
            return DescribeMapInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeMapInfoOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeMapInfoAsync(const DescribeMapInfoRequest& request, const DescribeMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMapInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeMapInfoOutcomeCallable CdnClient::DescribeMapInfoCallable(const DescribeMapInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMapInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeMapInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeOriginDataOutcome CdnClient::DescribeOriginData(const DescribeOriginDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOriginData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOriginDataResponse rsp = DescribeOriginDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOriginDataOutcome(rsp);
        else
            return DescribeOriginDataOutcome(o.GetError());
    }
    else
    {
        return DescribeOriginDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeOriginDataAsync(const DescribeOriginDataRequest& request, const DescribeOriginDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOriginData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeOriginDataOutcomeCallable CdnClient::DescribeOriginDataCallable(const DescribeOriginDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOriginDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeOriginData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribePayTypeOutcome CdnClient::DescribePayType(const DescribePayTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePayType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePayTypeResponse rsp = DescribePayTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePayTypeOutcome(rsp);
        else
            return DescribePayTypeOutcome(o.GetError());
    }
    else
    {
        return DescribePayTypeOutcome(outcome.GetError());
    }
}

void CdnClient::DescribePayTypeAsync(const DescribePayTypeRequest& request, const DescribePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePayType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribePayTypeOutcomeCallable CdnClient::DescribePayTypeCallable(const DescribePayTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePayTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribePayType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribePurgeTasksOutcome CdnClient::DescribePurgeTasks(const DescribePurgeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePurgeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePurgeTasksResponse rsp = DescribePurgeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePurgeTasksOutcome(rsp);
        else
            return DescribePurgeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePurgeTasksOutcome(outcome.GetError());
    }
}

void CdnClient::DescribePurgeTasksAsync(const DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePurgeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribePurgeTasksOutcomeCallable CdnClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePurgeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribePurgeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribePushTasksOutcome CdnClient::DescribePushTasks(const DescribePushTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePushTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePushTasksResponse rsp = DescribePushTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePushTasksOutcome(rsp);
        else
            return DescribePushTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePushTasksOutcome(outcome.GetError());
    }
}

void CdnClient::DescribePushTasksAsync(const DescribePushTasksRequest& request, const DescribePushTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePushTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribePushTasksOutcomeCallable CdnClient::DescribePushTasksCallable(const DescribePushTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePushTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribePushTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DisableCachesOutcome CdnClient::DisableCaches(const DisableCachesRequest &request)
{
    auto outcome = MakeRequest(request, "DisableCaches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableCachesResponse rsp = DisableCachesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableCachesOutcome(rsp);
        else
            return DisableCachesOutcome(o.GetError());
    }
    else
    {
        return DisableCachesOutcome(outcome.GetError());
    }
}

void CdnClient::DisableCachesAsync(const DisableCachesRequest& request, const DisableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableCaches(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DisableCachesOutcomeCallable CdnClient::DisableCachesCallable(const DisableCachesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableCachesOutcome()>>(
        [this, request]()
        {
            return this->DisableCaches(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::EnableCachesOutcome CdnClient::EnableCaches(const EnableCachesRequest &request)
{
    auto outcome = MakeRequest(request, "EnableCaches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableCachesResponse rsp = EnableCachesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableCachesOutcome(rsp);
        else
            return EnableCachesOutcome(o.GetError());
    }
    else
    {
        return EnableCachesOutcome(outcome.GetError());
    }
}

void CdnClient::EnableCachesAsync(const EnableCachesRequest& request, const EnableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableCaches(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::EnableCachesOutcomeCallable CdnClient::EnableCachesCallable(const EnableCachesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableCachesOutcome()>>(
        [this, request]()
        {
            return this->EnableCaches(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::GetDisableRecordsOutcome CdnClient::GetDisableRecords(const GetDisableRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "GetDisableRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDisableRecordsResponse rsp = GetDisableRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDisableRecordsOutcome(rsp);
        else
            return GetDisableRecordsOutcome(o.GetError());
    }
    else
    {
        return GetDisableRecordsOutcome(outcome.GetError());
    }
}

void CdnClient::GetDisableRecordsAsync(const GetDisableRecordsRequest& request, const GetDisableRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDisableRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::GetDisableRecordsOutcomeCallable CdnClient::GetDisableRecordsCallable(const GetDisableRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDisableRecordsOutcome()>>(
        [this, request]()
        {
            return this->GetDisableRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListTopDataOutcome CdnClient::ListTopData(const ListTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopDataResponse rsp = ListTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopDataOutcome(rsp);
        else
            return ListTopDataOutcome(o.GetError());
    }
    else
    {
        return ListTopDataOutcome(outcome.GetError());
    }
}

void CdnClient::ListTopDataAsync(const ListTopDataRequest& request, const ListTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTopData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListTopDataOutcomeCallable CdnClient::ListTopDataCallable(const ListTopDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTopDataOutcome()>>(
        [this, request]()
        {
            return this->ListTopData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::PurgePathCacheOutcome CdnClient::PurgePathCache(const PurgePathCacheRequest &request)
{
    auto outcome = MakeRequest(request, "PurgePathCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PurgePathCacheResponse rsp = PurgePathCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PurgePathCacheOutcome(rsp);
        else
            return PurgePathCacheOutcome(o.GetError());
    }
    else
    {
        return PurgePathCacheOutcome(outcome.GetError());
    }
}

void CdnClient::PurgePathCacheAsync(const PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PurgePathCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::PurgePathCacheOutcomeCallable CdnClient::PurgePathCacheCallable(const PurgePathCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PurgePathCacheOutcome()>>(
        [this, request]()
        {
            return this->PurgePathCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::PurgeUrlsCacheOutcome CdnClient::PurgeUrlsCache(const PurgeUrlsCacheRequest &request)
{
    auto outcome = MakeRequest(request, "PurgeUrlsCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PurgeUrlsCacheResponse rsp = PurgeUrlsCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PurgeUrlsCacheOutcome(rsp);
        else
            return PurgeUrlsCacheOutcome(o.GetError());
    }
    else
    {
        return PurgeUrlsCacheOutcome(outcome.GetError());
    }
}

void CdnClient::PurgeUrlsCacheAsync(const PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PurgeUrlsCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::PurgeUrlsCacheOutcomeCallable CdnClient::PurgeUrlsCacheCallable(const PurgeUrlsCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PurgeUrlsCacheOutcome()>>(
        [this, request]()
        {
            return this->PurgeUrlsCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::PushUrlsCacheOutcome CdnClient::PushUrlsCache(const PushUrlsCacheRequest &request)
{
    auto outcome = MakeRequest(request, "PushUrlsCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PushUrlsCacheResponse rsp = PushUrlsCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PushUrlsCacheOutcome(rsp);
        else
            return PushUrlsCacheOutcome(o.GetError());
    }
    else
    {
        return PushUrlsCacheOutcome(outcome.GetError());
    }
}

void CdnClient::PushUrlsCacheAsync(const PushUrlsCacheRequest& request, const PushUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PushUrlsCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::PushUrlsCacheOutcomeCallable CdnClient::PushUrlsCacheCallable(const PushUrlsCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PushUrlsCacheOutcome()>>(
        [this, request]()
        {
            return this->PushUrlsCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


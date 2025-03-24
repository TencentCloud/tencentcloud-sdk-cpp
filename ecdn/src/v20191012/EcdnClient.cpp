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

#include <tencentcloud/ecdn/v20191012/EcdnClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ecdn::V20191012;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-12";
    const string ENDPOINT = "ecdn.tencentcloudapi.com";
}

EcdnClient::EcdnClient(const Credential &credential, const string &region) :
    EcdnClient(credential, region, ClientProfile())
{
}

EcdnClient::EcdnClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EcdnClient::DescribeDomainsOutcome EcdnClient::DescribeDomains(const DescribeDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsResponse rsp = DescribeDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsOutcome(rsp);
        else
            return DescribeDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcdnClient::DescribeDomainsOutcomeCallable EcdnClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcdnClient::DescribeDomainsConfigOutcome EcdnClient::DescribeDomainsConfig(const DescribeDomainsConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainsConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsConfigResponse rsp = DescribeDomainsConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsConfigOutcome(rsp);
        else
            return DescribeDomainsConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsConfigOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeDomainsConfigAsync(const DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainsConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcdnClient::DescribeDomainsConfigOutcomeCallable EcdnClient::DescribeDomainsConfigCallable(const DescribeDomainsConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainsConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainsConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcdnClient::DescribeEcdnDomainLogsOutcome EcdnClient::DescribeEcdnDomainLogs(const DescribeEcdnDomainLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEcdnDomainLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEcdnDomainLogsResponse rsp = DescribeEcdnDomainLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEcdnDomainLogsOutcome(rsp);
        else
            return DescribeEcdnDomainLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeEcdnDomainLogsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeEcdnDomainLogsAsync(const DescribeEcdnDomainLogsRequest& request, const DescribeEcdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEcdnDomainLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcdnClient::DescribeEcdnDomainLogsOutcomeCallable EcdnClient::DescribeEcdnDomainLogsCallable(const DescribeEcdnDomainLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEcdnDomainLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEcdnDomainLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcdnClient::DescribeEcdnDomainStatisticsOutcome EcdnClient::DescribeEcdnDomainStatistics(const DescribeEcdnDomainStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEcdnDomainStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEcdnDomainStatisticsResponse rsp = DescribeEcdnDomainStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEcdnDomainStatisticsOutcome(rsp);
        else
            return DescribeEcdnDomainStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeEcdnDomainStatisticsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeEcdnDomainStatisticsAsync(const DescribeEcdnDomainStatisticsRequest& request, const DescribeEcdnDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEcdnDomainStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcdnClient::DescribeEcdnDomainStatisticsOutcomeCallable EcdnClient::DescribeEcdnDomainStatisticsCallable(const DescribeEcdnDomainStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEcdnDomainStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEcdnDomainStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcdnClient::DescribeEcdnStatisticsOutcome EcdnClient::DescribeEcdnStatistics(const DescribeEcdnStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEcdnStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEcdnStatisticsResponse rsp = DescribeEcdnStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEcdnStatisticsOutcome(rsp);
        else
            return DescribeEcdnStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeEcdnStatisticsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeEcdnStatisticsAsync(const DescribeEcdnStatisticsRequest& request, const DescribeEcdnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEcdnStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcdnClient::DescribeEcdnStatisticsOutcomeCallable EcdnClient::DescribeEcdnStatisticsCallable(const DescribeEcdnStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEcdnStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEcdnStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcdnClient::DescribeIpStatusOutcome EcdnClient::DescribeIpStatus(const DescribeIpStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpStatusResponse rsp = DescribeIpStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpStatusOutcome(rsp);
        else
            return DescribeIpStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIpStatusOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeIpStatusAsync(const DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcdnClient::DescribeIpStatusOutcomeCallable EcdnClient::DescribeIpStatusCallable(const DescribeIpStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcdnClient::DescribePurgeTasksOutcome EcdnClient::DescribePurgeTasks(const DescribePurgeTasksRequest &request)
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

void EcdnClient::DescribePurgeTasksAsync(const DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePurgeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcdnClient::DescribePurgeTasksOutcomeCallable EcdnClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
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

EcdnClient::PurgeUrlsCacheOutcome EcdnClient::PurgeUrlsCache(const PurgeUrlsCacheRequest &request)
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

void EcdnClient::PurgeUrlsCacheAsync(const PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PurgeUrlsCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcdnClient::PurgeUrlsCacheOutcomeCallable EcdnClient::PurgeUrlsCacheCallable(const PurgeUrlsCacheRequest &request)
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


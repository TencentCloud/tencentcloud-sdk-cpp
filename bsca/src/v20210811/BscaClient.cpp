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

#include <tencentcloud/bsca/v20210811/BscaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bsca::V20210811;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-08-11";
    const string ENDPOINT = "bsca.tencentcloudapi.com";
}

BscaClient::BscaClient(const Credential &credential, const string &region) :
    BscaClient(credential, region, ClientProfile())
{
}

BscaClient::BscaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BscaClient::DescribeKBComponentOutcome BscaClient::DescribeKBComponent(const DescribeKBComponentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBComponent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBComponentResponse rsp = DescribeKBComponentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBComponentOutcome(rsp);
        else
            return DescribeKBComponentOutcome(o.GetError());
    }
    else
    {
        return DescribeKBComponentOutcome(outcome.GetError());
    }
}

void BscaClient::DescribeKBComponentAsync(const DescribeKBComponentRequest& request, const DescribeKBComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKBComponent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BscaClient::DescribeKBComponentOutcomeCallable BscaClient::DescribeKBComponentCallable(const DescribeKBComponentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKBComponentOutcome()>>(
        [this, request]()
        {
            return this->DescribeKBComponent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BscaClient::DescribeKBComponentVersionListOutcome BscaClient::DescribeKBComponentVersionList(const DescribeKBComponentVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBComponentVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBComponentVersionListResponse rsp = DescribeKBComponentVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBComponentVersionListOutcome(rsp);
        else
            return DescribeKBComponentVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeKBComponentVersionListOutcome(outcome.GetError());
    }
}

void BscaClient::DescribeKBComponentVersionListAsync(const DescribeKBComponentVersionListRequest& request, const DescribeKBComponentVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKBComponentVersionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BscaClient::DescribeKBComponentVersionListOutcomeCallable BscaClient::DescribeKBComponentVersionListCallable(const DescribeKBComponentVersionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKBComponentVersionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeKBComponentVersionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BscaClient::DescribeKBComponentVulnerabilityOutcome BscaClient::DescribeKBComponentVulnerability(const DescribeKBComponentVulnerabilityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBComponentVulnerability");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBComponentVulnerabilityResponse rsp = DescribeKBComponentVulnerabilityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBComponentVulnerabilityOutcome(rsp);
        else
            return DescribeKBComponentVulnerabilityOutcome(o.GetError());
    }
    else
    {
        return DescribeKBComponentVulnerabilityOutcome(outcome.GetError());
    }
}

void BscaClient::DescribeKBComponentVulnerabilityAsync(const DescribeKBComponentVulnerabilityRequest& request, const DescribeKBComponentVulnerabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKBComponentVulnerability(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BscaClient::DescribeKBComponentVulnerabilityOutcomeCallable BscaClient::DescribeKBComponentVulnerabilityCallable(const DescribeKBComponentVulnerabilityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKBComponentVulnerabilityOutcome()>>(
        [this, request]()
        {
            return this->DescribeKBComponentVulnerability(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BscaClient::DescribeKBLicenseOutcome BscaClient::DescribeKBLicense(const DescribeKBLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBLicenseResponse rsp = DescribeKBLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBLicenseOutcome(rsp);
        else
            return DescribeKBLicenseOutcome(o.GetError());
    }
    else
    {
        return DescribeKBLicenseOutcome(outcome.GetError());
    }
}

void BscaClient::DescribeKBLicenseAsync(const DescribeKBLicenseRequest& request, const DescribeKBLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKBLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BscaClient::DescribeKBLicenseOutcomeCallable BscaClient::DescribeKBLicenseCallable(const DescribeKBLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKBLicenseOutcome()>>(
        [this, request]()
        {
            return this->DescribeKBLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BscaClient::DescribeKBVulnerabilityOutcome BscaClient::DescribeKBVulnerability(const DescribeKBVulnerabilityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKBVulnerability");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKBVulnerabilityResponse rsp = DescribeKBVulnerabilityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKBVulnerabilityOutcome(rsp);
        else
            return DescribeKBVulnerabilityOutcome(o.GetError());
    }
    else
    {
        return DescribeKBVulnerabilityOutcome(outcome.GetError());
    }
}

void BscaClient::DescribeKBVulnerabilityAsync(const DescribeKBVulnerabilityRequest& request, const DescribeKBVulnerabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKBVulnerability(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BscaClient::DescribeKBVulnerabilityOutcomeCallable BscaClient::DescribeKBVulnerabilityCallable(const DescribeKBVulnerabilityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKBVulnerabilityOutcome()>>(
        [this, request]()
        {
            return this->DescribeKBVulnerability(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BscaClient::MatchKBPURLListOutcome BscaClient::MatchKBPURLList(const MatchKBPURLListRequest &request)
{
    auto outcome = MakeRequest(request, "MatchKBPURLList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MatchKBPURLListResponse rsp = MatchKBPURLListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MatchKBPURLListOutcome(rsp);
        else
            return MatchKBPURLListOutcome(o.GetError());
    }
    else
    {
        return MatchKBPURLListOutcome(outcome.GetError());
    }
}

void BscaClient::MatchKBPURLListAsync(const MatchKBPURLListRequest& request, const MatchKBPURLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MatchKBPURLList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BscaClient::MatchKBPURLListOutcomeCallable BscaClient::MatchKBPURLListCallable(const MatchKBPURLListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MatchKBPURLListOutcome()>>(
        [this, request]()
        {
            return this->MatchKBPURLList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BscaClient::SearchKBComponentOutcome BscaClient::SearchKBComponent(const SearchKBComponentRequest &request)
{
    auto outcome = MakeRequest(request, "SearchKBComponent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchKBComponentResponse rsp = SearchKBComponentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchKBComponentOutcome(rsp);
        else
            return SearchKBComponentOutcome(o.GetError());
    }
    else
    {
        return SearchKBComponentOutcome(outcome.GetError());
    }
}

void BscaClient::SearchKBComponentAsync(const SearchKBComponentRequest& request, const SearchKBComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchKBComponent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BscaClient::SearchKBComponentOutcomeCallable BscaClient::SearchKBComponentCallable(const SearchKBComponentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchKBComponentOutcome()>>(
        [this, request]()
        {
            return this->SearchKBComponent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


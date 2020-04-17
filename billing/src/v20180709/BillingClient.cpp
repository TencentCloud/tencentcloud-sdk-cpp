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

#include <tencentcloud/billing/v20180709/BillingClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Billing::V20180709;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-09";
    const string ENDPOINT = "billing.tencentcloudapi.com";
}

BillingClient::BillingClient(const Credential &credential, const string &region) :
    BillingClient(credential, region, ClientProfile())
{
}

BillingClient::BillingClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BillingClient::DescribeAccountBalanceOutcome BillingClient::DescribeAccountBalance(const DescribeAccountBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountBalanceResponse rsp = DescribeAccountBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountBalanceOutcome(rsp);
        else
            return DescribeAccountBalanceOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountBalanceOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeAccountBalanceAsync(const DescribeAccountBalanceRequest& request, const DescribeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeAccountBalanceOutcomeCallable BillingClient::DescribeAccountBalanceCallable(const DescribeAccountBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountBalanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillDetailOutcome BillingClient::DescribeBillDetail(const DescribeBillDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillDetailResponse rsp = DescribeBillDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillDetailOutcome(rsp);
        else
            return DescribeBillDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBillDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillDetailAsync(const DescribeBillDetailRequest& request, const DescribeBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillDetailOutcomeCallable BillingClient::DescribeBillDetailCallable(const DescribeBillDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillListOutcome BillingClient::DescribeBillList(const DescribeBillListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillListResponse rsp = DescribeBillListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillListOutcome(rsp);
        else
            return DescribeBillListOutcome(o.GetError());
    }
    else
    {
        return DescribeBillListOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillListAsync(const DescribeBillListRequest& request, const DescribeBillListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillListOutcomeCallable BillingClient::DescribeBillListCallable(const DescribeBillListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillResourceSummaryOutcome BillingClient::DescribeBillResourceSummary(const DescribeBillResourceSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillResourceSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillResourceSummaryResponse rsp = DescribeBillResourceSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillResourceSummaryOutcome(rsp);
        else
            return DescribeBillResourceSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeBillResourceSummaryOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillResourceSummaryAsync(const DescribeBillResourceSummaryRequest& request, const DescribeBillResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillResourceSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillResourceSummaryOutcomeCallable BillingClient::DescribeBillResourceSummaryCallable(const DescribeBillResourceSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillResourceSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillResourceSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryByPayModeOutcome BillingClient::DescribeBillSummaryByPayMode(const DescribeBillSummaryByPayModeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByPayMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByPayModeResponse rsp = DescribeBillSummaryByPayModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByPayModeOutcome(rsp);
        else
            return DescribeBillSummaryByPayModeOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByPayModeOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByPayModeAsync(const DescribeBillSummaryByPayModeRequest& request, const DescribeBillSummaryByPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByPayMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryByPayModeOutcomeCallable BillingClient::DescribeBillSummaryByPayModeCallable(const DescribeBillSummaryByPayModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryByPayModeOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryByPayMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryByProductOutcome BillingClient::DescribeBillSummaryByProduct(const DescribeBillSummaryByProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByProductResponse rsp = DescribeBillSummaryByProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByProductOutcome(rsp);
        else
            return DescribeBillSummaryByProductOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByProductOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByProductAsync(const DescribeBillSummaryByProductRequest& request, const DescribeBillSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryByProductOutcomeCallable BillingClient::DescribeBillSummaryByProductCallable(const DescribeBillSummaryByProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryByProductOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryByProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryByProjectOutcome BillingClient::DescribeBillSummaryByProject(const DescribeBillSummaryByProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByProjectResponse rsp = DescribeBillSummaryByProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByProjectOutcome(rsp);
        else
            return DescribeBillSummaryByProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByProjectOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByProjectAsync(const DescribeBillSummaryByProjectRequest& request, const DescribeBillSummaryByProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryByProjectOutcomeCallable BillingClient::DescribeBillSummaryByProjectCallable(const DescribeBillSummaryByProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryByProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryByProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryByRegionOutcome BillingClient::DescribeBillSummaryByRegion(const DescribeBillSummaryByRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByRegionResponse rsp = DescribeBillSummaryByRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByRegionOutcome(rsp);
        else
            return DescribeBillSummaryByRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByRegionOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByRegionAsync(const DescribeBillSummaryByRegionRequest& request, const DescribeBillSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryByRegionOutcomeCallable BillingClient::DescribeBillSummaryByRegionCallable(const DescribeBillSummaryByRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryByRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryByRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeBillSummaryByTagOutcome BillingClient::DescribeBillSummaryByTag(const DescribeBillSummaryByTagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByTagResponse rsp = DescribeBillSummaryByTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByTagOutcome(rsp);
        else
            return DescribeBillSummaryByTagOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByTagOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeBillSummaryByTagAsync(const DescribeBillSummaryByTagRequest& request, const DescribeBillSummaryByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillSummaryByTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeBillSummaryByTagOutcomeCallable BillingClient::DescribeBillSummaryByTagCallable(const DescribeBillSummaryByTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillSummaryByTagOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillSummaryByTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostDetailOutcome BillingClient::DescribeCostDetail(const DescribeCostDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostDetailResponse rsp = DescribeCostDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostDetailOutcome(rsp);
        else
            return DescribeCostDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCostDetailOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostDetailAsync(const DescribeCostDetailRequest& request, const DescribeCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostDetailOutcomeCallable BillingClient::DescribeCostDetailCallable(const DescribeCostDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostSummaryByProductOutcome BillingClient::DescribeCostSummaryByProduct(const DescribeCostSummaryByProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByProductResponse rsp = DescribeCostSummaryByProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByProductOutcome(rsp);
        else
            return DescribeCostSummaryByProductOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByProductOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByProductAsync(const DescribeCostSummaryByProductRequest& request, const DescribeCostSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostSummaryByProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostSummaryByProductOutcomeCallable BillingClient::DescribeCostSummaryByProductCallable(const DescribeCostSummaryByProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostSummaryByProductOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostSummaryByProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostSummaryByProjectOutcome BillingClient::DescribeCostSummaryByProject(const DescribeCostSummaryByProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByProjectResponse rsp = DescribeCostSummaryByProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByProjectOutcome(rsp);
        else
            return DescribeCostSummaryByProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByProjectOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByProjectAsync(const DescribeCostSummaryByProjectRequest& request, const DescribeCostSummaryByProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostSummaryByProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostSummaryByProjectOutcomeCallable BillingClient::DescribeCostSummaryByProjectCallable(const DescribeCostSummaryByProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostSummaryByProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostSummaryByProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostSummaryByRegionOutcome BillingClient::DescribeCostSummaryByRegion(const DescribeCostSummaryByRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByRegionResponse rsp = DescribeCostSummaryByRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByRegionOutcome(rsp);
        else
            return DescribeCostSummaryByRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByRegionOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByRegionAsync(const DescribeCostSummaryByRegionRequest& request, const DescribeCostSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostSummaryByRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostSummaryByRegionOutcomeCallable BillingClient::DescribeCostSummaryByRegionCallable(const DescribeCostSummaryByRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostSummaryByRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostSummaryByRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeCostSummaryByResourceOutcome BillingClient::DescribeCostSummaryByResource(const DescribeCostSummaryByResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCostSummaryByResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCostSummaryByResourceResponse rsp = DescribeCostSummaryByResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCostSummaryByResourceOutcome(rsp);
        else
            return DescribeCostSummaryByResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeCostSummaryByResourceOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeCostSummaryByResourceAsync(const DescribeCostSummaryByResourceRequest& request, const DescribeCostSummaryByResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCostSummaryByResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeCostSummaryByResourceOutcomeCallable BillingClient::DescribeCostSummaryByResourceCallable(const DescribeCostSummaryByResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCostSummaryByResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeCostSummaryByResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeDealsByCondOutcome BillingClient::DescribeDealsByCond(const DescribeDealsByCondRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDealsByCond");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDealsByCondResponse rsp = DescribeDealsByCondResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDealsByCondOutcome(rsp);
        else
            return DescribeDealsByCondOutcome(o.GetError());
    }
    else
    {
        return DescribeDealsByCondOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeDealsByCondAsync(const DescribeDealsByCondRequest& request, const DescribeDealsByCondAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDealsByCond(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeDealsByCondOutcomeCallable BillingClient::DescribeDealsByCondCallable(const DescribeDealsByCondRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDealsByCondOutcome()>>(
        [this, request]()
        {
            return this->DescribeDealsByCond(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::DescribeDosageDetailByDateOutcome BillingClient::DescribeDosageDetailByDate(const DescribeDosageDetailByDateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDosageDetailByDate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDosageDetailByDateResponse rsp = DescribeDosageDetailByDateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDosageDetailByDateOutcome(rsp);
        else
            return DescribeDosageDetailByDateOutcome(o.GetError());
    }
    else
    {
        return DescribeDosageDetailByDateOutcome(outcome.GetError());
    }
}

void BillingClient::DescribeDosageDetailByDateAsync(const DescribeDosageDetailByDateRequest& request, const DescribeDosageDetailByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDosageDetailByDate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::DescribeDosageDetailByDateOutcomeCallable BillingClient::DescribeDosageDetailByDateCallable(const DescribeDosageDetailByDateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDosageDetailByDateOutcome()>>(
        [this, request]()
        {
            return this->DescribeDosageDetailByDate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BillingClient::PayDealsOutcome BillingClient::PayDeals(const PayDealsRequest &request)
{
    auto outcome = MakeRequest(request, "PayDeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PayDealsResponse rsp = PayDealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PayDealsOutcome(rsp);
        else
            return PayDealsOutcome(o.GetError());
    }
    else
    {
        return PayDealsOutcome(outcome.GetError());
    }
}

void BillingClient::PayDealsAsync(const PayDealsRequest& request, const PayDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PayDeals(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BillingClient::PayDealsOutcomeCallable BillingClient::PayDealsCallable(const PayDealsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PayDealsOutcome()>>(
        [this, request]()
        {
            return this->PayDeals(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


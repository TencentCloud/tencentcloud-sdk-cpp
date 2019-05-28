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


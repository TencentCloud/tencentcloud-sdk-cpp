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

#include <tencentcloud/irp/v20220805/IrpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Irp::V20220805;
using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-08-05";
    const string ENDPOINT = "irp.tencentcloudapi.com";
}

IrpClient::IrpClient(const Credential &credential, const string &region) :
    IrpClient(credential, region, ClientProfile())
{
}

IrpClient::IrpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IrpClient::DescribeGoodsRecommendOutcome IrpClient::DescribeGoodsRecommend(const DescribeGoodsRecommendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGoodsRecommend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGoodsRecommendResponse rsp = DescribeGoodsRecommendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGoodsRecommendOutcome(rsp);
        else
            return DescribeGoodsRecommendOutcome(o.GetError());
    }
    else
    {
        return DescribeGoodsRecommendOutcome(outcome.GetError());
    }
}

void IrpClient::DescribeGoodsRecommendAsync(const DescribeGoodsRecommendRequest& request, const DescribeGoodsRecommendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGoodsRecommend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IrpClient::DescribeGoodsRecommendOutcomeCallable IrpClient::DescribeGoodsRecommendCallable(const DescribeGoodsRecommendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGoodsRecommendOutcome()>>(
        [this, request]()
        {
            return this->DescribeGoodsRecommend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IrpClient::FeedRecommendOutcome IrpClient::FeedRecommend(const FeedRecommendRequest &request)
{
    auto outcome = MakeRequest(request, "FeedRecommend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FeedRecommendResponse rsp = FeedRecommendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FeedRecommendOutcome(rsp);
        else
            return FeedRecommendOutcome(o.GetError());
    }
    else
    {
        return FeedRecommendOutcome(outcome.GetError());
    }
}

void IrpClient::FeedRecommendAsync(const FeedRecommendRequest& request, const FeedRecommendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FeedRecommend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IrpClient::FeedRecommendOutcomeCallable IrpClient::FeedRecommendCallable(const FeedRecommendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FeedRecommendOutcome()>>(
        [this, request]()
        {
            return this->FeedRecommend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IrpClient::ReportFeedBehaviorOutcome IrpClient::ReportFeedBehavior(const ReportFeedBehaviorRequest &request)
{
    auto outcome = MakeRequest(request, "ReportFeedBehavior");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportFeedBehaviorResponse rsp = ReportFeedBehaviorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportFeedBehaviorOutcome(rsp);
        else
            return ReportFeedBehaviorOutcome(o.GetError());
    }
    else
    {
        return ReportFeedBehaviorOutcome(outcome.GetError());
    }
}

void IrpClient::ReportFeedBehaviorAsync(const ReportFeedBehaviorRequest& request, const ReportFeedBehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportFeedBehavior(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IrpClient::ReportFeedBehaviorOutcomeCallable IrpClient::ReportFeedBehaviorCallable(const ReportFeedBehaviorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportFeedBehaviorOutcome()>>(
        [this, request]()
        {
            return this->ReportFeedBehavior(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IrpClient::ReportFeedItemOutcome IrpClient::ReportFeedItem(const ReportFeedItemRequest &request)
{
    auto outcome = MakeRequest(request, "ReportFeedItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportFeedItemResponse rsp = ReportFeedItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportFeedItemOutcome(rsp);
        else
            return ReportFeedItemOutcome(o.GetError());
    }
    else
    {
        return ReportFeedItemOutcome(outcome.GetError());
    }
}

void IrpClient::ReportFeedItemAsync(const ReportFeedItemRequest& request, const ReportFeedItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportFeedItem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IrpClient::ReportFeedItemOutcomeCallable IrpClient::ReportFeedItemCallable(const ReportFeedItemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportFeedItemOutcome()>>(
        [this, request]()
        {
            return this->ReportFeedItem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IrpClient::ReportFeedUserOutcome IrpClient::ReportFeedUser(const ReportFeedUserRequest &request)
{
    auto outcome = MakeRequest(request, "ReportFeedUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportFeedUserResponse rsp = ReportFeedUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportFeedUserOutcome(rsp);
        else
            return ReportFeedUserOutcome(o.GetError());
    }
    else
    {
        return ReportFeedUserOutcome(outcome.GetError());
    }
}

void IrpClient::ReportFeedUserAsync(const ReportFeedUserRequest& request, const ReportFeedUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportFeedUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IrpClient::ReportFeedUserOutcomeCallable IrpClient::ReportFeedUserCallable(const ReportFeedUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportFeedUserOutcome()>>(
        [this, request]()
        {
            return this->ReportFeedUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IrpClient::ReportGoodsBehaviorOutcome IrpClient::ReportGoodsBehavior(const ReportGoodsBehaviorRequest &request)
{
    auto outcome = MakeRequest(request, "ReportGoodsBehavior");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportGoodsBehaviorResponse rsp = ReportGoodsBehaviorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportGoodsBehaviorOutcome(rsp);
        else
            return ReportGoodsBehaviorOutcome(o.GetError());
    }
    else
    {
        return ReportGoodsBehaviorOutcome(outcome.GetError());
    }
}

void IrpClient::ReportGoodsBehaviorAsync(const ReportGoodsBehaviorRequest& request, const ReportGoodsBehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportGoodsBehavior(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IrpClient::ReportGoodsBehaviorOutcomeCallable IrpClient::ReportGoodsBehaviorCallable(const ReportGoodsBehaviorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportGoodsBehaviorOutcome()>>(
        [this, request]()
        {
            return this->ReportGoodsBehavior(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IrpClient::ReportGoodsInfoOutcome IrpClient::ReportGoodsInfo(const ReportGoodsInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ReportGoodsInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportGoodsInfoResponse rsp = ReportGoodsInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportGoodsInfoOutcome(rsp);
        else
            return ReportGoodsInfoOutcome(o.GetError());
    }
    else
    {
        return ReportGoodsInfoOutcome(outcome.GetError());
    }
}

void IrpClient::ReportGoodsInfoAsync(const ReportGoodsInfoRequest& request, const ReportGoodsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportGoodsInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IrpClient::ReportGoodsInfoOutcomeCallable IrpClient::ReportGoodsInfoCallable(const ReportGoodsInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportGoodsInfoOutcome()>>(
        [this, request]()
        {
            return this->ReportGoodsInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


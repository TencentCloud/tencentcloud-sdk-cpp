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

#include <tencentcloud/svp/v20240125/SvpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Svp::V20240125;
using namespace TencentCloud::Svp::V20240125::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-01-25";
    const string ENDPOINT = "svp.tencentcloudapi.com";
}

SvpClient::SvpClient(const Credential &credential, const string &region) :
    SvpClient(credential, region, ClientProfile())
{
}

SvpClient::SvpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SvpClient::CreateSavingPlanOrderOutcome SvpClient::CreateSavingPlanOrder(const CreateSavingPlanOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSavingPlanOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSavingPlanOrderResponse rsp = CreateSavingPlanOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSavingPlanOrderOutcome(rsp);
        else
            return CreateSavingPlanOrderOutcome(o.GetError());
    }
    else
    {
        return CreateSavingPlanOrderOutcome(outcome.GetError());
    }
}

void SvpClient::CreateSavingPlanOrderAsync(const CreateSavingPlanOrderRequest& request, const CreateSavingPlanOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSavingPlanOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SvpClient::CreateSavingPlanOrderOutcomeCallable SvpClient::CreateSavingPlanOrderCallable(const CreateSavingPlanOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSavingPlanOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateSavingPlanOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SvpClient::DescribeSavingPlanCoverageOutcome SvpClient::DescribeSavingPlanCoverage(const DescribeSavingPlanCoverageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSavingPlanCoverage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSavingPlanCoverageResponse rsp = DescribeSavingPlanCoverageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSavingPlanCoverageOutcome(rsp);
        else
            return DescribeSavingPlanCoverageOutcome(o.GetError());
    }
    else
    {
        return DescribeSavingPlanCoverageOutcome(outcome.GetError());
    }
}

void SvpClient::DescribeSavingPlanCoverageAsync(const DescribeSavingPlanCoverageRequest& request, const DescribeSavingPlanCoverageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSavingPlanCoverage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SvpClient::DescribeSavingPlanCoverageOutcomeCallable SvpClient::DescribeSavingPlanCoverageCallable(const DescribeSavingPlanCoverageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSavingPlanCoverageOutcome()>>(
        [this, request]()
        {
            return this->DescribeSavingPlanCoverage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SvpClient::DescribeSavingPlanDeductOutcome SvpClient::DescribeSavingPlanDeduct(const DescribeSavingPlanDeductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSavingPlanDeduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSavingPlanDeductResponse rsp = DescribeSavingPlanDeductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSavingPlanDeductOutcome(rsp);
        else
            return DescribeSavingPlanDeductOutcome(o.GetError());
    }
    else
    {
        return DescribeSavingPlanDeductOutcome(outcome.GetError());
    }
}

void SvpClient::DescribeSavingPlanDeductAsync(const DescribeSavingPlanDeductRequest& request, const DescribeSavingPlanDeductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSavingPlanDeduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SvpClient::DescribeSavingPlanDeductOutcomeCallable SvpClient::DescribeSavingPlanDeductCallable(const DescribeSavingPlanDeductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSavingPlanDeductOutcome()>>(
        [this, request]()
        {
            return this->DescribeSavingPlanDeduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SvpClient::DescribeSavingPlanOverviewOutcome SvpClient::DescribeSavingPlanOverview(const DescribeSavingPlanOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSavingPlanOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSavingPlanOverviewResponse rsp = DescribeSavingPlanOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSavingPlanOverviewOutcome(rsp);
        else
            return DescribeSavingPlanOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeSavingPlanOverviewOutcome(outcome.GetError());
    }
}

void SvpClient::DescribeSavingPlanOverviewAsync(const DescribeSavingPlanOverviewRequest& request, const DescribeSavingPlanOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSavingPlanOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SvpClient::DescribeSavingPlanOverviewOutcomeCallable SvpClient::DescribeSavingPlanOverviewCallable(const DescribeSavingPlanOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSavingPlanOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeSavingPlanOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SvpClient::DescribeSavingPlanUsageOutcome SvpClient::DescribeSavingPlanUsage(const DescribeSavingPlanUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSavingPlanUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSavingPlanUsageResponse rsp = DescribeSavingPlanUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSavingPlanUsageOutcome(rsp);
        else
            return DescribeSavingPlanUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeSavingPlanUsageOutcome(outcome.GetError());
    }
}

void SvpClient::DescribeSavingPlanUsageAsync(const DescribeSavingPlanUsageRequest& request, const DescribeSavingPlanUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSavingPlanUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SvpClient::DescribeSavingPlanUsageOutcomeCallable SvpClient::DescribeSavingPlanUsageCallable(const DescribeSavingPlanUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSavingPlanUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeSavingPlanUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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
    using Req = const CreateSavingPlanOrderRequest&;
    using Resp = CreateSavingPlanOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSavingPlanOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SvpClient::CreateSavingPlanOrderOutcomeCallable SvpClient::CreateSavingPlanOrderCallable(const CreateSavingPlanOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSavingPlanOrderOutcome>>();
    CreateSavingPlanOrderAsync(
    request,
    [prom](
        const SvpClient*,
        const CreateSavingPlanOrderRequest&,
        CreateSavingPlanOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSavingPlanCoverageRequest&;
    using Resp = DescribeSavingPlanCoverageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSavingPlanCoverage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SvpClient::DescribeSavingPlanCoverageOutcomeCallable SvpClient::DescribeSavingPlanCoverageCallable(const DescribeSavingPlanCoverageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSavingPlanCoverageOutcome>>();
    DescribeSavingPlanCoverageAsync(
    request,
    [prom](
        const SvpClient*,
        const DescribeSavingPlanCoverageRequest&,
        DescribeSavingPlanCoverageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSavingPlanDeductRequest&;
    using Resp = DescribeSavingPlanDeductResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSavingPlanDeduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SvpClient::DescribeSavingPlanDeductOutcomeCallable SvpClient::DescribeSavingPlanDeductCallable(const DescribeSavingPlanDeductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSavingPlanDeductOutcome>>();
    DescribeSavingPlanDeductAsync(
    request,
    [prom](
        const SvpClient*,
        const DescribeSavingPlanDeductRequest&,
        DescribeSavingPlanDeductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSavingPlanOverviewRequest&;
    using Resp = DescribeSavingPlanOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSavingPlanOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SvpClient::DescribeSavingPlanOverviewOutcomeCallable SvpClient::DescribeSavingPlanOverviewCallable(const DescribeSavingPlanOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSavingPlanOverviewOutcome>>();
    DescribeSavingPlanOverviewAsync(
    request,
    [prom](
        const SvpClient*,
        const DescribeSavingPlanOverviewRequest&,
        DescribeSavingPlanOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSavingPlanUsageRequest&;
    using Resp = DescribeSavingPlanUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSavingPlanUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SvpClient::DescribeSavingPlanUsageOutcomeCallable SvpClient::DescribeSavingPlanUsageCallable(const DescribeSavingPlanUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSavingPlanUsageOutcome>>();
    DescribeSavingPlanUsageAsync(
    request,
    [prom](
        const SvpClient*,
        const DescribeSavingPlanUsageRequest&,
        DescribeSavingPlanUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


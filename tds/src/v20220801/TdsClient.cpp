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

#include <tencentcloud/tds/v20220801/TdsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tds::V20220801;
using namespace TencentCloud::Tds::V20220801::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-08-01";
    const string ENDPOINT = "tds.tencentcloudapi.com";
}

TdsClient::TdsClient(const Credential &credential, const string &region) :
    TdsClient(credential, region, ClientProfile())
{
}

TdsClient::TdsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdsClient::DescribeFinanceFraudUltimateOutcome TdsClient::DescribeFinanceFraudUltimate(const DescribeFinanceFraudUltimateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFinanceFraudUltimate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFinanceFraudUltimateResponse rsp = DescribeFinanceFraudUltimateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFinanceFraudUltimateOutcome(rsp);
        else
            return DescribeFinanceFraudUltimateOutcome(o.GetError());
    }
    else
    {
        return DescribeFinanceFraudUltimateOutcome(outcome.GetError());
    }
}

void TdsClient::DescribeFinanceFraudUltimateAsync(const DescribeFinanceFraudUltimateRequest& request, const DescribeFinanceFraudUltimateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFinanceFraudUltimateRequest&;
    using Resp = DescribeFinanceFraudUltimateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFinanceFraudUltimate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdsClient::DescribeFinanceFraudUltimateOutcomeCallable TdsClient::DescribeFinanceFraudUltimateCallable(const DescribeFinanceFraudUltimateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFinanceFraudUltimateOutcome>>();
    DescribeFinanceFraudUltimateAsync(
    request,
    [prom](
        const TdsClient*,
        const DescribeFinanceFraudUltimateRequest&,
        DescribeFinanceFraudUltimateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdsClient::DescribeFraudBaseOutcome TdsClient::DescribeFraudBase(const DescribeFraudBaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFraudBase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFraudBaseResponse rsp = DescribeFraudBaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFraudBaseOutcome(rsp);
        else
            return DescribeFraudBaseOutcome(o.GetError());
    }
    else
    {
        return DescribeFraudBaseOutcome(outcome.GetError());
    }
}

void TdsClient::DescribeFraudBaseAsync(const DescribeFraudBaseRequest& request, const DescribeFraudBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFraudBaseRequest&;
    using Resp = DescribeFraudBaseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFraudBase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdsClient::DescribeFraudBaseOutcomeCallable TdsClient::DescribeFraudBaseCallable(const DescribeFraudBaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFraudBaseOutcome>>();
    DescribeFraudBaseAsync(
    request,
    [prom](
        const TdsClient*,
        const DescribeFraudBaseRequest&,
        DescribeFraudBaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdsClient::DescribeFraudPremiumOutcome TdsClient::DescribeFraudPremium(const DescribeFraudPremiumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFraudPremium");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFraudPremiumResponse rsp = DescribeFraudPremiumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFraudPremiumOutcome(rsp);
        else
            return DescribeFraudPremiumOutcome(o.GetError());
    }
    else
    {
        return DescribeFraudPremiumOutcome(outcome.GetError());
    }
}

void TdsClient::DescribeFraudPremiumAsync(const DescribeFraudPremiumRequest& request, const DescribeFraudPremiumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFraudPremiumRequest&;
    using Resp = DescribeFraudPremiumResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFraudPremium", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdsClient::DescribeFraudPremiumOutcomeCallable TdsClient::DescribeFraudPremiumCallable(const DescribeFraudPremiumRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFraudPremiumOutcome>>();
    DescribeFraudPremiumAsync(
    request,
    [prom](
        const TdsClient*,
        const DescribeFraudPremiumRequest&,
        DescribeFraudPremiumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdsClient::DescribeFraudUltimateOutcome TdsClient::DescribeFraudUltimate(const DescribeFraudUltimateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFraudUltimate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFraudUltimateResponse rsp = DescribeFraudUltimateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFraudUltimateOutcome(rsp);
        else
            return DescribeFraudUltimateOutcome(o.GetError());
    }
    else
    {
        return DescribeFraudUltimateOutcome(outcome.GetError());
    }
}

void TdsClient::DescribeFraudUltimateAsync(const DescribeFraudUltimateRequest& request, const DescribeFraudUltimateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFraudUltimateRequest&;
    using Resp = DescribeFraudUltimateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFraudUltimate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdsClient::DescribeFraudUltimateOutcomeCallable TdsClient::DescribeFraudUltimateCallable(const DescribeFraudUltimateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFraudUltimateOutcome>>();
    DescribeFraudUltimateAsync(
    request,
    [prom](
        const TdsClient*,
        const DescribeFraudUltimateRequest&,
        DescribeFraudUltimateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdsClient::DescribeTrustedIDOutcome TdsClient::DescribeTrustedID(const DescribeTrustedIDRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrustedID");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrustedIDResponse rsp = DescribeTrustedIDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrustedIDOutcome(rsp);
        else
            return DescribeTrustedIDOutcome(o.GetError());
    }
    else
    {
        return DescribeTrustedIDOutcome(outcome.GetError());
    }
}

void TdsClient::DescribeTrustedIDAsync(const DescribeTrustedIDRequest& request, const DescribeTrustedIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrustedIDRequest&;
    using Resp = DescribeTrustedIDResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrustedID", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdsClient::DescribeTrustedIDOutcomeCallable TdsClient::DescribeTrustedIDCallable(const DescribeTrustedIDRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrustedIDOutcome>>();
    DescribeTrustedIDAsync(
    request,
    [prom](
        const TdsClient*,
        const DescribeTrustedIDRequest&,
        DescribeTrustedIDOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


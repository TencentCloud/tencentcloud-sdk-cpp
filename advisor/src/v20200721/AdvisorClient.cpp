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

#include <tencentcloud/advisor/v20200721/AdvisorClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Advisor::V20200721;
using namespace TencentCloud::Advisor::V20200721::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-21";
    const string ENDPOINT = "advisor.tencentcloudapi.com";
}

AdvisorClient::AdvisorClient(const Credential &credential, const string &region) :
    AdvisorClient(credential, region, ClientProfile())
{
}

AdvisorClient::AdvisorClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AdvisorClient::CreateAdvisorAuthorizationOutcome AdvisorClient::CreateAdvisorAuthorization(const CreateAdvisorAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAdvisorAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAdvisorAuthorizationResponse rsp = CreateAdvisorAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAdvisorAuthorizationOutcome(rsp);
        else
            return CreateAdvisorAuthorizationOutcome(o.GetError());
    }
    else
    {
        return CreateAdvisorAuthorizationOutcome(outcome.GetError());
    }
}

void AdvisorClient::CreateAdvisorAuthorizationAsync(const CreateAdvisorAuthorizationRequest& request, const CreateAdvisorAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAdvisorAuthorizationRequest&;
    using Resp = CreateAdvisorAuthorizationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAdvisorAuthorization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdvisorClient::CreateAdvisorAuthorizationOutcomeCallable AdvisorClient::CreateAdvisorAuthorizationCallable(const CreateAdvisorAuthorizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAdvisorAuthorizationOutcome>>();
    CreateAdvisorAuthorizationAsync(
    request,
    [prom](
        const AdvisorClient*,
        const CreateAdvisorAuthorizationRequest&,
        CreateAdvisorAuthorizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdvisorClient::DescribeStrategiesOutcome AdvisorClient::DescribeStrategies(const DescribeStrategiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategiesResponse rsp = DescribeStrategiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategiesOutcome(rsp);
        else
            return DescribeStrategiesOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategiesOutcome(outcome.GetError());
    }
}

void AdvisorClient::DescribeStrategiesAsync(const DescribeStrategiesRequest& request, const DescribeStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStrategiesRequest&;
    using Resp = DescribeStrategiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStrategies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdvisorClient::DescribeStrategiesOutcomeCallable AdvisorClient::DescribeStrategiesCallable(const DescribeStrategiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStrategiesOutcome>>();
    DescribeStrategiesAsync(
    request,
    [prom](
        const AdvisorClient*,
        const DescribeStrategiesRequest&,
        DescribeStrategiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AdvisorClient::DescribeTaskStrategyRisksOutcome AdvisorClient::DescribeTaskStrategyRisks(const DescribeTaskStrategyRisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStrategyRisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStrategyRisksResponse rsp = DescribeTaskStrategyRisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStrategyRisksOutcome(rsp);
        else
            return DescribeTaskStrategyRisksOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStrategyRisksOutcome(outcome.GetError());
    }
}

void AdvisorClient::DescribeTaskStrategyRisksAsync(const DescribeTaskStrategyRisksRequest& request, const DescribeTaskStrategyRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskStrategyRisksRequest&;
    using Resp = DescribeTaskStrategyRisksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskStrategyRisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdvisorClient::DescribeTaskStrategyRisksOutcomeCallable AdvisorClient::DescribeTaskStrategyRisksCallable(const DescribeTaskStrategyRisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskStrategyRisksOutcome>>();
    DescribeTaskStrategyRisksAsync(
    request,
    [prom](
        const AdvisorClient*,
        const DescribeTaskStrategyRisksRequest&,
        DescribeTaskStrategyRisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


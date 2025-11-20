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

#include <tencentcloud/config/v20220802/ConfigClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Config::V20220802;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-08-02";
    const string ENDPOINT = "config.tencentcloudapi.com";
}

ConfigClient::ConfigClient(const Credential &credential, const string &region) :
    ConfigClient(credential, region, ClientProfile())
{
}

ConfigClient::ConfigClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ConfigClient::DescribeAggregateDiscoveredResourceOutcome ConfigClient::DescribeAggregateDiscoveredResource(const DescribeAggregateDiscoveredResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggregateDiscoveredResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggregateDiscoveredResourceResponse rsp = DescribeAggregateDiscoveredResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggregateDiscoveredResourceOutcome(rsp);
        else
            return DescribeAggregateDiscoveredResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeAggregateDiscoveredResourceOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeAggregateDiscoveredResourceAsync(const DescribeAggregateDiscoveredResourceRequest& request, const DescribeAggregateDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAggregateDiscoveredResourceRequest&;
    using Resp = DescribeAggregateDiscoveredResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAggregateDiscoveredResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeAggregateDiscoveredResourceOutcomeCallable ConfigClient::DescribeAggregateDiscoveredResourceCallable(const DescribeAggregateDiscoveredResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAggregateDiscoveredResourceOutcome>>();
    DescribeAggregateDiscoveredResourceAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeAggregateDiscoveredResourceRequest&,
        DescribeAggregateDiscoveredResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::DescribeDiscoveredResourceOutcome ConfigClient::DescribeDiscoveredResource(const DescribeDiscoveredResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiscoveredResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiscoveredResourceResponse rsp = DescribeDiscoveredResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiscoveredResourceOutcome(rsp);
        else
            return DescribeDiscoveredResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDiscoveredResourceOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeDiscoveredResourceAsync(const DescribeDiscoveredResourceRequest& request, const DescribeDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDiscoveredResourceRequest&;
    using Resp = DescribeDiscoveredResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiscoveredResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::DescribeDiscoveredResourceOutcomeCallable ConfigClient::DescribeDiscoveredResourceCallable(const DescribeDiscoveredResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiscoveredResourceOutcome>>();
    DescribeDiscoveredResourceAsync(
    request,
    [prom](
        const ConfigClient*,
        const DescribeDiscoveredResourceRequest&,
        DescribeDiscoveredResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListAggregateConfigRulesOutcome ConfigClient::ListAggregateConfigRules(const ListAggregateConfigRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAggregateConfigRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAggregateConfigRulesResponse rsp = ListAggregateConfigRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAggregateConfigRulesOutcome(rsp);
        else
            return ListAggregateConfigRulesOutcome(o.GetError());
    }
    else
    {
        return ListAggregateConfigRulesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListAggregateConfigRulesAsync(const ListAggregateConfigRulesRequest& request, const ListAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAggregateConfigRulesRequest&;
    using Resp = ListAggregateConfigRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAggregateConfigRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListAggregateConfigRulesOutcomeCallable ConfigClient::ListAggregateConfigRulesCallable(const ListAggregateConfigRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAggregateConfigRulesOutcome>>();
    ListAggregateConfigRulesAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListAggregateConfigRulesRequest&,
        ListAggregateConfigRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListAggregateDiscoveredResourcesOutcome ConfigClient::ListAggregateDiscoveredResources(const ListAggregateDiscoveredResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAggregateDiscoveredResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAggregateDiscoveredResourcesResponse rsp = ListAggregateDiscoveredResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAggregateDiscoveredResourcesOutcome(rsp);
        else
            return ListAggregateDiscoveredResourcesOutcome(o.GetError());
    }
    else
    {
        return ListAggregateDiscoveredResourcesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListAggregateDiscoveredResourcesAsync(const ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAggregateDiscoveredResourcesRequest&;
    using Resp = ListAggregateDiscoveredResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "ListAggregateDiscoveredResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListAggregateDiscoveredResourcesOutcomeCallable ConfigClient::ListAggregateDiscoveredResourcesCallable(const ListAggregateDiscoveredResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAggregateDiscoveredResourcesOutcome>>();
    ListAggregateDiscoveredResourcesAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListAggregateDiscoveredResourcesRequest&,
        ListAggregateDiscoveredResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListConfigRulesOutcome ConfigClient::ListConfigRules(const ListConfigRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListConfigRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListConfigRulesResponse rsp = ListConfigRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListConfigRulesOutcome(rsp);
        else
            return ListConfigRulesOutcome(o.GetError());
    }
    else
    {
        return ListConfigRulesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListConfigRulesAsync(const ListConfigRulesRequest& request, const ListConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListConfigRulesRequest&;
    using Resp = ListConfigRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ListConfigRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListConfigRulesOutcomeCallable ConfigClient::ListConfigRulesCallable(const ListConfigRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListConfigRulesOutcome>>();
    ListConfigRulesAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListConfigRulesRequest&,
        ListConfigRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::ListDiscoveredResourcesOutcome ConfigClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDiscoveredResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDiscoveredResourcesResponse rsp = ListDiscoveredResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDiscoveredResourcesOutcome(rsp);
        else
            return ListDiscoveredResourcesOutcome(o.GetError());
    }
    else
    {
        return ListDiscoveredResourcesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListDiscoveredResourcesAsync(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDiscoveredResourcesRequest&;
    using Resp = ListDiscoveredResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "ListDiscoveredResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::ListDiscoveredResourcesOutcomeCallable ConfigClient::ListDiscoveredResourcesCallable(const ListDiscoveredResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDiscoveredResourcesOutcome>>();
    ListDiscoveredResourcesAsync(
    request,
    [prom](
        const ConfigClient*,
        const ListDiscoveredResourcesRequest&,
        ListDiscoveredResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ConfigClient::PutEvaluationsOutcome ConfigClient::PutEvaluations(const PutEvaluationsRequest &request)
{
    auto outcome = MakeRequest(request, "PutEvaluations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutEvaluationsResponse rsp = PutEvaluationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutEvaluationsOutcome(rsp);
        else
            return PutEvaluationsOutcome(o.GetError());
    }
    else
    {
        return PutEvaluationsOutcome(outcome.GetError());
    }
}

void ConfigClient::PutEvaluationsAsync(const PutEvaluationsRequest& request, const PutEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutEvaluationsRequest&;
    using Resp = PutEvaluationsResponse;

    DoRequestAsync<Req, Resp>(
        "PutEvaluations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ConfigClient::PutEvaluationsOutcomeCallable ConfigClient::PutEvaluationsCallable(const PutEvaluationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutEvaluationsOutcome>>();
    PutEvaluationsAsync(
    request,
    [prom](
        const ConfigClient*,
        const PutEvaluationsRequest&,
        PutEvaluationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


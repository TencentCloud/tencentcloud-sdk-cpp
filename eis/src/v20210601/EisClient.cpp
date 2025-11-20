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

#include <tencentcloud/eis/v20210601/EisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Eis::V20210601;
using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-01";
    const string ENDPOINT = "eis.tencentcloudapi.com";
}

EisClient::EisClient(const Credential &credential, const string &region) :
    EisClient(credential, region, ClientProfile())
{
}

EisClient::EisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EisClient::GetRuntimeMCOutcome EisClient::GetRuntimeMC(const GetRuntimeMCRequest &request)
{
    auto outcome = MakeRequest(request, "GetRuntimeMC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRuntimeMCResponse rsp = GetRuntimeMCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRuntimeMCOutcome(rsp);
        else
            return GetRuntimeMCOutcome(o.GetError());
    }
    else
    {
        return GetRuntimeMCOutcome(outcome.GetError());
    }
}

void EisClient::GetRuntimeMCAsync(const GetRuntimeMCRequest& request, const GetRuntimeMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRuntimeMCRequest&;
    using Resp = GetRuntimeMCResponse;

    DoRequestAsync<Req, Resp>(
        "GetRuntimeMC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EisClient::GetRuntimeMCOutcomeCallable EisClient::GetRuntimeMCCallable(const GetRuntimeMCRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRuntimeMCOutcome>>();
    GetRuntimeMCAsync(
    request,
    [prom](
        const EisClient*,
        const GetRuntimeMCRequest&,
        GetRuntimeMCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EisClient::GetRuntimeResourceMonitorMetricMCOutcome EisClient::GetRuntimeResourceMonitorMetricMC(const GetRuntimeResourceMonitorMetricMCRequest &request)
{
    auto outcome = MakeRequest(request, "GetRuntimeResourceMonitorMetricMC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRuntimeResourceMonitorMetricMCResponse rsp = GetRuntimeResourceMonitorMetricMCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRuntimeResourceMonitorMetricMCOutcome(rsp);
        else
            return GetRuntimeResourceMonitorMetricMCOutcome(o.GetError());
    }
    else
    {
        return GetRuntimeResourceMonitorMetricMCOutcome(outcome.GetError());
    }
}

void EisClient::GetRuntimeResourceMonitorMetricMCAsync(const GetRuntimeResourceMonitorMetricMCRequest& request, const GetRuntimeResourceMonitorMetricMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRuntimeResourceMonitorMetricMCRequest&;
    using Resp = GetRuntimeResourceMonitorMetricMCResponse;

    DoRequestAsync<Req, Resp>(
        "GetRuntimeResourceMonitorMetricMC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EisClient::GetRuntimeResourceMonitorMetricMCOutcomeCallable EisClient::GetRuntimeResourceMonitorMetricMCCallable(const GetRuntimeResourceMonitorMetricMCRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRuntimeResourceMonitorMetricMCOutcome>>();
    GetRuntimeResourceMonitorMetricMCAsync(
    request,
    [prom](
        const EisClient*,
        const GetRuntimeResourceMonitorMetricMCRequest&,
        GetRuntimeResourceMonitorMetricMCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EisClient::ListDeployableRuntimesMCOutcome EisClient::ListDeployableRuntimesMC(const ListDeployableRuntimesMCRequest &request)
{
    auto outcome = MakeRequest(request, "ListDeployableRuntimesMC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDeployableRuntimesMCResponse rsp = ListDeployableRuntimesMCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDeployableRuntimesMCOutcome(rsp);
        else
            return ListDeployableRuntimesMCOutcome(o.GetError());
    }
    else
    {
        return ListDeployableRuntimesMCOutcome(outcome.GetError());
    }
}

void EisClient::ListDeployableRuntimesMCAsync(const ListDeployableRuntimesMCRequest& request, const ListDeployableRuntimesMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDeployableRuntimesMCRequest&;
    using Resp = ListDeployableRuntimesMCResponse;

    DoRequestAsync<Req, Resp>(
        "ListDeployableRuntimesMC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EisClient::ListDeployableRuntimesMCOutcomeCallable EisClient::ListDeployableRuntimesMCCallable(const ListDeployableRuntimesMCRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDeployableRuntimesMCOutcome>>();
    ListDeployableRuntimesMCAsync(
    request,
    [prom](
        const EisClient*,
        const ListDeployableRuntimesMCRequest&,
        ListDeployableRuntimesMCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EisClient::ListRuntimeDeployedInstancesMCOutcome EisClient::ListRuntimeDeployedInstancesMC(const ListRuntimeDeployedInstancesMCRequest &request)
{
    auto outcome = MakeRequest(request, "ListRuntimeDeployedInstancesMC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRuntimeDeployedInstancesMCResponse rsp = ListRuntimeDeployedInstancesMCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRuntimeDeployedInstancesMCOutcome(rsp);
        else
            return ListRuntimeDeployedInstancesMCOutcome(o.GetError());
    }
    else
    {
        return ListRuntimeDeployedInstancesMCOutcome(outcome.GetError());
    }
}

void EisClient::ListRuntimeDeployedInstancesMCAsync(const ListRuntimeDeployedInstancesMCRequest& request, const ListRuntimeDeployedInstancesMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRuntimeDeployedInstancesMCRequest&;
    using Resp = ListRuntimeDeployedInstancesMCResponse;

    DoRequestAsync<Req, Resp>(
        "ListRuntimeDeployedInstancesMC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EisClient::ListRuntimeDeployedInstancesMCOutcomeCallable EisClient::ListRuntimeDeployedInstancesMCCallable(const ListRuntimeDeployedInstancesMCRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRuntimeDeployedInstancesMCOutcome>>();
    ListRuntimeDeployedInstancesMCAsync(
    request,
    [prom](
        const EisClient*,
        const ListRuntimeDeployedInstancesMCRequest&,
        ListRuntimeDeployedInstancesMCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EisClient::ListRuntimesMCOutcome EisClient::ListRuntimesMC(const ListRuntimesMCRequest &request)
{
    auto outcome = MakeRequest(request, "ListRuntimesMC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRuntimesMCResponse rsp = ListRuntimesMCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRuntimesMCOutcome(rsp);
        else
            return ListRuntimesMCOutcome(o.GetError());
    }
    else
    {
        return ListRuntimesMCOutcome(outcome.GetError());
    }
}

void EisClient::ListRuntimesMCAsync(const ListRuntimesMCRequest& request, const ListRuntimesMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListRuntimesMCRequest&;
    using Resp = ListRuntimesMCResponse;

    DoRequestAsync<Req, Resp>(
        "ListRuntimesMC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EisClient::ListRuntimesMCOutcomeCallable EisClient::ListRuntimesMCCallable(const ListRuntimesMCRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRuntimesMCOutcome>>();
    ListRuntimesMCAsync(
    request,
    [prom](
        const EisClient*,
        const ListRuntimesMCRequest&,
        ListRuntimesMCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


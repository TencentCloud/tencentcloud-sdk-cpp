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

#include <tencentcloud/teo/v20220106/TeoClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Teo::V20220106;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-06";
    const string ENDPOINT = "teo.tencentcloudapi.com";
}

TeoClient::TeoClient(const Credential &credential, const string &region) :
    TeoClient(credential, region, ClientProfile())
{
}

TeoClient::TeoClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TeoClient::CreatePrefetchTaskOutcome TeoClient::CreatePrefetchTask(const CreatePrefetchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrefetchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrefetchTaskResponse rsp = CreatePrefetchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrefetchTaskOutcome(rsp);
        else
            return CreatePrefetchTaskOutcome(o.GetError());
    }
    else
    {
        return CreatePrefetchTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePrefetchTaskAsync(const CreatePrefetchTaskRequest& request, const CreatePrefetchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrefetchTaskRequest&;
    using Resp = CreatePrefetchTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrefetchTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreatePrefetchTaskOutcomeCallable TeoClient::CreatePrefetchTaskCallable(const CreatePrefetchTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrefetchTaskOutcome>>();
    CreatePrefetchTaskAsync(
    request,
    [prom](
        const TeoClient*,
        const CreatePrefetchTaskRequest&,
        CreatePrefetchTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreatePurgeTaskOutcome TeoClient::CreatePurgeTask(const CreatePurgeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePurgeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePurgeTaskResponse rsp = CreatePurgeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePurgeTaskOutcome(rsp);
        else
            return CreatePurgeTaskOutcome(o.GetError());
    }
    else
    {
        return CreatePurgeTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePurgeTaskAsync(const CreatePurgeTaskRequest& request, const CreatePurgeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePurgeTaskRequest&;
    using Resp = CreatePurgeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePurgeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreatePurgeTaskOutcomeCallable TeoClient::CreatePurgeTaskCallable(const CreatePurgeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePurgeTaskOutcome>>();
    CreatePurgeTaskAsync(
    request,
    [prom](
        const TeoClient*,
        const CreatePurgeTaskRequest&,
        CreatePurgeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribePrefetchTasksOutcome TeoClient::DescribePrefetchTasks(const DescribePrefetchTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrefetchTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrefetchTasksResponse rsp = DescribePrefetchTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrefetchTasksOutcome(rsp);
        else
            return DescribePrefetchTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePrefetchTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribePrefetchTasksAsync(const DescribePrefetchTasksRequest& request, const DescribePrefetchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrefetchTasksRequest&;
    using Resp = DescribePrefetchTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrefetchTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribePrefetchTasksOutcomeCallable TeoClient::DescribePrefetchTasksCallable(const DescribePrefetchTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrefetchTasksOutcome>>();
    DescribePrefetchTasksAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribePrefetchTasksRequest&,
        DescribePrefetchTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribePurgeTasksOutcome TeoClient::DescribePurgeTasks(const DescribePurgeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePurgeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePurgeTasksResponse rsp = DescribePurgeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePurgeTasksOutcome(rsp);
        else
            return DescribePurgeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePurgeTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribePurgeTasksAsync(const DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePurgeTasksRequest&;
    using Resp = DescribePurgeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePurgeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribePurgeTasksOutcomeCallable TeoClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePurgeTasksOutcome>>();
    DescribePurgeTasksAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribePurgeTasksRequest&,
        DescribePurgeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeZonesOutcome TeoClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZonesRequest&;
    using Resp = DescribeZonesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeZonesOutcomeCallable TeoClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZonesOutcome>>();
    DescribeZonesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeZonesRequest&,
        DescribeZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


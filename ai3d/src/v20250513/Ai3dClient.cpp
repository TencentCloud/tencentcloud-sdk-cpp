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

#include <tencentcloud/ai3d/v20250513/Ai3dClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ai3d::V20250513;
using namespace TencentCloud::Ai3d::V20250513::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-05-13";
    const string ENDPOINT = "ai3d.tencentcloudapi.com";
}

Ai3dClient::Ai3dClient(const Credential &credential, const string &region) :
    Ai3dClient(credential, region, ClientProfile())
{
}

Ai3dClient::Ai3dClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


Ai3dClient::QueryHunyuanTo3DProJobOutcome Ai3dClient::QueryHunyuanTo3DProJob(const QueryHunyuanTo3DProJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuanTo3DProJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuanTo3DProJobResponse rsp = QueryHunyuanTo3DProJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuanTo3DProJobOutcome(rsp);
        else
            return QueryHunyuanTo3DProJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuanTo3DProJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::QueryHunyuanTo3DProJobAsync(const QueryHunyuanTo3DProJobRequest& request, const QueryHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryHunyuanTo3DProJobRequest&;
    using Resp = QueryHunyuanTo3DProJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryHunyuanTo3DProJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::QueryHunyuanTo3DProJobOutcomeCallable Ai3dClient::QueryHunyuanTo3DProJobCallable(const QueryHunyuanTo3DProJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryHunyuanTo3DProJobOutcome>>();
    QueryHunyuanTo3DProJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const QueryHunyuanTo3DProJobRequest&,
        QueryHunyuanTo3DProJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::QueryHunyuanTo3DRapidJobOutcome Ai3dClient::QueryHunyuanTo3DRapidJob(const QueryHunyuanTo3DRapidJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuanTo3DRapidJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuanTo3DRapidJobResponse rsp = QueryHunyuanTo3DRapidJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuanTo3DRapidJobOutcome(rsp);
        else
            return QueryHunyuanTo3DRapidJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuanTo3DRapidJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::QueryHunyuanTo3DRapidJobAsync(const QueryHunyuanTo3DRapidJobRequest& request, const QueryHunyuanTo3DRapidJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryHunyuanTo3DRapidJobRequest&;
    using Resp = QueryHunyuanTo3DRapidJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryHunyuanTo3DRapidJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::QueryHunyuanTo3DRapidJobOutcomeCallable Ai3dClient::QueryHunyuanTo3DRapidJobCallable(const QueryHunyuanTo3DRapidJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryHunyuanTo3DRapidJobOutcome>>();
    QueryHunyuanTo3DRapidJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const QueryHunyuanTo3DRapidJobRequest&,
        QueryHunyuanTo3DRapidJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::SubmitHunyuanTo3DProJobOutcome Ai3dClient::SubmitHunyuanTo3DProJob(const SubmitHunyuanTo3DProJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanTo3DProJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanTo3DProJobResponse rsp = SubmitHunyuanTo3DProJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanTo3DProJobOutcome(rsp);
        else
            return SubmitHunyuanTo3DProJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanTo3DProJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::SubmitHunyuanTo3DProJobAsync(const SubmitHunyuanTo3DProJobRequest& request, const SubmitHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHunyuanTo3DProJobRequest&;
    using Resp = SubmitHunyuanTo3DProJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHunyuanTo3DProJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::SubmitHunyuanTo3DProJobOutcomeCallable Ai3dClient::SubmitHunyuanTo3DProJobCallable(const SubmitHunyuanTo3DProJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHunyuanTo3DProJobOutcome>>();
    SubmitHunyuanTo3DProJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const SubmitHunyuanTo3DProJobRequest&,
        SubmitHunyuanTo3DProJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::SubmitHunyuanTo3DRapidJobOutcome Ai3dClient::SubmitHunyuanTo3DRapidJob(const SubmitHunyuanTo3DRapidJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanTo3DRapidJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanTo3DRapidJobResponse rsp = SubmitHunyuanTo3DRapidJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanTo3DRapidJobOutcome(rsp);
        else
            return SubmitHunyuanTo3DRapidJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanTo3DRapidJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::SubmitHunyuanTo3DRapidJobAsync(const SubmitHunyuanTo3DRapidJobRequest& request, const SubmitHunyuanTo3DRapidJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHunyuanTo3DRapidJobRequest&;
    using Resp = SubmitHunyuanTo3DRapidJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHunyuanTo3DRapidJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::SubmitHunyuanTo3DRapidJobOutcomeCallable Ai3dClient::SubmitHunyuanTo3DRapidJobCallable(const SubmitHunyuanTo3DRapidJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHunyuanTo3DRapidJobOutcome>>();
    SubmitHunyuanTo3DRapidJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const SubmitHunyuanTo3DRapidJobRequest&,
        SubmitHunyuanTo3DRapidJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


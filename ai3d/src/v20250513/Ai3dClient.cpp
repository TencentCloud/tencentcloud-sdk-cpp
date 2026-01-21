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


Ai3dClient::Convert3DFormatOutcome Ai3dClient::Convert3DFormat(const Convert3DFormatRequest &request)
{
    auto outcome = MakeRequest(request, "Convert3DFormat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        Convert3DFormatResponse rsp = Convert3DFormatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return Convert3DFormatOutcome(rsp);
        else
            return Convert3DFormatOutcome(o.GetError());
    }
    else
    {
        return Convert3DFormatOutcome(outcome.GetError());
    }
}

void Ai3dClient::Convert3DFormatAsync(const Convert3DFormatRequest& request, const Convert3DFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const Convert3DFormatRequest&;
    using Resp = Convert3DFormatResponse;

    DoRequestAsync<Req, Resp>(
        "Convert3DFormat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::Convert3DFormatOutcomeCallable Ai3dClient::Convert3DFormatCallable(const Convert3DFormatRequest &request)
{
    const auto prom = std::make_shared<std::promise<Convert3DFormatOutcome>>();
    Convert3DFormatAsync(
    request,
    [prom](
        const Ai3dClient*,
        const Convert3DFormatRequest&,
        Convert3DFormatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::DescribeHunyuanTo3DUVJobOutcome Ai3dClient::DescribeHunyuanTo3DUVJob(const DescribeHunyuanTo3DUVJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHunyuanTo3DUVJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHunyuanTo3DUVJobResponse rsp = DescribeHunyuanTo3DUVJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHunyuanTo3DUVJobOutcome(rsp);
        else
            return DescribeHunyuanTo3DUVJobOutcome(o.GetError());
    }
    else
    {
        return DescribeHunyuanTo3DUVJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::DescribeHunyuanTo3DUVJobAsync(const DescribeHunyuanTo3DUVJobRequest& request, const DescribeHunyuanTo3DUVJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHunyuanTo3DUVJobRequest&;
    using Resp = DescribeHunyuanTo3DUVJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHunyuanTo3DUVJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::DescribeHunyuanTo3DUVJobOutcomeCallable Ai3dClient::DescribeHunyuanTo3DUVJobCallable(const DescribeHunyuanTo3DUVJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHunyuanTo3DUVJobOutcome>>();
    DescribeHunyuanTo3DUVJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const DescribeHunyuanTo3DUVJobRequest&,
        DescribeHunyuanTo3DUVJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::DescribeProfileTo3DJobOutcome Ai3dClient::DescribeProfileTo3DJob(const DescribeProfileTo3DJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProfileTo3DJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProfileTo3DJobResponse rsp = DescribeProfileTo3DJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProfileTo3DJobOutcome(rsp);
        else
            return DescribeProfileTo3DJobOutcome(o.GetError());
    }
    else
    {
        return DescribeProfileTo3DJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::DescribeProfileTo3DJobAsync(const DescribeProfileTo3DJobRequest& request, const DescribeProfileTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProfileTo3DJobRequest&;
    using Resp = DescribeProfileTo3DJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProfileTo3DJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::DescribeProfileTo3DJobOutcomeCallable Ai3dClient::DescribeProfileTo3DJobCallable(const DescribeProfileTo3DJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProfileTo3DJobOutcome>>();
    DescribeProfileTo3DJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const DescribeProfileTo3DJobRequest&,
        DescribeProfileTo3DJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::DescribeReduceFaceJobOutcome Ai3dClient::DescribeReduceFaceJob(const DescribeReduceFaceJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReduceFaceJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReduceFaceJobResponse rsp = DescribeReduceFaceJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReduceFaceJobOutcome(rsp);
        else
            return DescribeReduceFaceJobOutcome(o.GetError());
    }
    else
    {
        return DescribeReduceFaceJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::DescribeReduceFaceJobAsync(const DescribeReduceFaceJobRequest& request, const DescribeReduceFaceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReduceFaceJobRequest&;
    using Resp = DescribeReduceFaceJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReduceFaceJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::DescribeReduceFaceJobOutcomeCallable Ai3dClient::DescribeReduceFaceJobCallable(const DescribeReduceFaceJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReduceFaceJobOutcome>>();
    DescribeReduceFaceJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const DescribeReduceFaceJobRequest&,
        DescribeReduceFaceJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::DescribeTextureTo3DJobOutcome Ai3dClient::DescribeTextureTo3DJob(const DescribeTextureTo3DJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTextureTo3DJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTextureTo3DJobResponse rsp = DescribeTextureTo3DJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTextureTo3DJobOutcome(rsp);
        else
            return DescribeTextureTo3DJobOutcome(o.GetError());
    }
    else
    {
        return DescribeTextureTo3DJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::DescribeTextureTo3DJobAsync(const DescribeTextureTo3DJobRequest& request, const DescribeTextureTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTextureTo3DJobRequest&;
    using Resp = DescribeTextureTo3DJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTextureTo3DJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::DescribeTextureTo3DJobOutcomeCallable Ai3dClient::DescribeTextureTo3DJobCallable(const DescribeTextureTo3DJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTextureTo3DJobOutcome>>();
    DescribeTextureTo3DJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const DescribeTextureTo3DJobRequest&,
        DescribeTextureTo3DJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::QueryHunyuan3DPartJobOutcome Ai3dClient::QueryHunyuan3DPartJob(const QueryHunyuan3DPartJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuan3DPartJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuan3DPartJobResponse rsp = QueryHunyuan3DPartJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuan3DPartJobOutcome(rsp);
        else
            return QueryHunyuan3DPartJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuan3DPartJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::QueryHunyuan3DPartJobAsync(const QueryHunyuan3DPartJobRequest& request, const QueryHunyuan3DPartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryHunyuan3DPartJobRequest&;
    using Resp = QueryHunyuan3DPartJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryHunyuan3DPartJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::QueryHunyuan3DPartJobOutcomeCallable Ai3dClient::QueryHunyuan3DPartJobCallable(const QueryHunyuan3DPartJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryHunyuan3DPartJobOutcome>>();
    QueryHunyuan3DPartJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const QueryHunyuan3DPartJobRequest&,
        QueryHunyuan3DPartJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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

Ai3dClient::SubmitHunyuan3DPartJobOutcome Ai3dClient::SubmitHunyuan3DPartJob(const SubmitHunyuan3DPartJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuan3DPartJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuan3DPartJobResponse rsp = SubmitHunyuan3DPartJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuan3DPartJobOutcome(rsp);
        else
            return SubmitHunyuan3DPartJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuan3DPartJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::SubmitHunyuan3DPartJobAsync(const SubmitHunyuan3DPartJobRequest& request, const SubmitHunyuan3DPartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHunyuan3DPartJobRequest&;
    using Resp = SubmitHunyuan3DPartJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHunyuan3DPartJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::SubmitHunyuan3DPartJobOutcomeCallable Ai3dClient::SubmitHunyuan3DPartJobCallable(const SubmitHunyuan3DPartJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHunyuan3DPartJobOutcome>>();
    SubmitHunyuan3DPartJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const SubmitHunyuan3DPartJobRequest&,
        SubmitHunyuan3DPartJobOutcome resp,
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

Ai3dClient::SubmitHunyuanTo3DUVJobOutcome Ai3dClient::SubmitHunyuanTo3DUVJob(const SubmitHunyuanTo3DUVJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanTo3DUVJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanTo3DUVJobResponse rsp = SubmitHunyuanTo3DUVJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanTo3DUVJobOutcome(rsp);
        else
            return SubmitHunyuanTo3DUVJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanTo3DUVJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::SubmitHunyuanTo3DUVJobAsync(const SubmitHunyuanTo3DUVJobRequest& request, const SubmitHunyuanTo3DUVJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHunyuanTo3DUVJobRequest&;
    using Resp = SubmitHunyuanTo3DUVJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHunyuanTo3DUVJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::SubmitHunyuanTo3DUVJobOutcomeCallable Ai3dClient::SubmitHunyuanTo3DUVJobCallable(const SubmitHunyuanTo3DUVJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHunyuanTo3DUVJobOutcome>>();
    SubmitHunyuanTo3DUVJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const SubmitHunyuanTo3DUVJobRequest&,
        SubmitHunyuanTo3DUVJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::SubmitProfileTo3DJobOutcome Ai3dClient::SubmitProfileTo3DJob(const SubmitProfileTo3DJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitProfileTo3DJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitProfileTo3DJobResponse rsp = SubmitProfileTo3DJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitProfileTo3DJobOutcome(rsp);
        else
            return SubmitProfileTo3DJobOutcome(o.GetError());
    }
    else
    {
        return SubmitProfileTo3DJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::SubmitProfileTo3DJobAsync(const SubmitProfileTo3DJobRequest& request, const SubmitProfileTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitProfileTo3DJobRequest&;
    using Resp = SubmitProfileTo3DJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitProfileTo3DJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::SubmitProfileTo3DJobOutcomeCallable Ai3dClient::SubmitProfileTo3DJobCallable(const SubmitProfileTo3DJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitProfileTo3DJobOutcome>>();
    SubmitProfileTo3DJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const SubmitProfileTo3DJobRequest&,
        SubmitProfileTo3DJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::SubmitReduceFaceJobOutcome Ai3dClient::SubmitReduceFaceJob(const SubmitReduceFaceJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitReduceFaceJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitReduceFaceJobResponse rsp = SubmitReduceFaceJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitReduceFaceJobOutcome(rsp);
        else
            return SubmitReduceFaceJobOutcome(o.GetError());
    }
    else
    {
        return SubmitReduceFaceJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::SubmitReduceFaceJobAsync(const SubmitReduceFaceJobRequest& request, const SubmitReduceFaceJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitReduceFaceJobRequest&;
    using Resp = SubmitReduceFaceJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitReduceFaceJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::SubmitReduceFaceJobOutcomeCallable Ai3dClient::SubmitReduceFaceJobCallable(const SubmitReduceFaceJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitReduceFaceJobOutcome>>();
    SubmitReduceFaceJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const SubmitReduceFaceJobRequest&,
        SubmitReduceFaceJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ai3dClient::SubmitTextureTo3DJobOutcome Ai3dClient::SubmitTextureTo3DJob(const SubmitTextureTo3DJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTextureTo3DJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTextureTo3DJobResponse rsp = SubmitTextureTo3DJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTextureTo3DJobOutcome(rsp);
        else
            return SubmitTextureTo3DJobOutcome(o.GetError());
    }
    else
    {
        return SubmitTextureTo3DJobOutcome(outcome.GetError());
    }
}

void Ai3dClient::SubmitTextureTo3DJobAsync(const SubmitTextureTo3DJobRequest& request, const SubmitTextureTo3DJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTextureTo3DJobRequest&;
    using Resp = SubmitTextureTo3DJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTextureTo3DJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ai3dClient::SubmitTextureTo3DJobOutcomeCallable Ai3dClient::SubmitTextureTo3DJobCallable(const SubmitTextureTo3DJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTextureTo3DJobOutcome>>();
    SubmitTextureTo3DJobAsync(
    request,
    [prom](
        const Ai3dClient*,
        const SubmitTextureTo3DJobRequest&,
        SubmitTextureTo3DJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


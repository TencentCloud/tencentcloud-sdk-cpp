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

#include <tencentcloud/car/v20220110/CarClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Car::V20220110;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-10";
    const string ENDPOINT = "car.tencentcloudapi.com";
}

CarClient::CarClient(const Credential &credential, const string &region) :
    CarClient(credential, region, ClientProfile())
{
}

CarClient::CarClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CarClient::ApplyConcurrentOutcome CarClient::ApplyConcurrent(const ApplyConcurrentRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyConcurrent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyConcurrentResponse rsp = ApplyConcurrentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyConcurrentOutcome(rsp);
        else
            return ApplyConcurrentOutcome(o.GetError());
    }
    else
    {
        return ApplyConcurrentOutcome(outcome.GetError());
    }
}

void CarClient::ApplyConcurrentAsync(const ApplyConcurrentRequest& request, const ApplyConcurrentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyConcurrentRequest&;
    using Resp = ApplyConcurrentResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyConcurrent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::ApplyConcurrentOutcomeCallable CarClient::ApplyConcurrentCallable(const ApplyConcurrentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyConcurrentOutcome>>();
    ApplyConcurrentAsync(
    request,
    [prom](
        const CarClient*,
        const ApplyConcurrentRequest&,
        ApplyConcurrentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::CreateSessionOutcome CarClient::CreateSession(const CreateSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSessionResponse rsp = CreateSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSessionOutcome(rsp);
        else
            return CreateSessionOutcome(o.GetError());
    }
    else
    {
        return CreateSessionOutcome(outcome.GetError());
    }
}

void CarClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSessionRequest&;
    using Resp = CreateSessionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::CreateSessionOutcomeCallable CarClient::CreateSessionCallable(const CreateSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSessionOutcome>>();
    CreateSessionAsync(
    request,
    [prom](
        const CarClient*,
        const CreateSessionRequest&,
        CreateSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::DestroySessionOutcome CarClient::DestroySession(const DestroySessionRequest &request)
{
    auto outcome = MakeRequest(request, "DestroySession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroySessionResponse rsp = DestroySessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroySessionOutcome(rsp);
        else
            return DestroySessionOutcome(o.GetError());
    }
    else
    {
        return DestroySessionOutcome(outcome.GetError());
    }
}

void CarClient::DestroySessionAsync(const DestroySessionRequest& request, const DestroySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroySessionRequest&;
    using Resp = DestroySessionResponse;

    DoRequestAsync<Req, Resp>(
        "DestroySession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::DestroySessionOutcomeCallable CarClient::DestroySessionCallable(const DestroySessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroySessionOutcome>>();
    DestroySessionAsync(
    request,
    [prom](
        const CarClient*,
        const DestroySessionRequest&,
        DestroySessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::StartPublishStreamOutcome CarClient::StartPublishStream(const StartPublishStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishStreamResponse rsp = StartPublishStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishStreamOutcome(rsp);
        else
            return StartPublishStreamOutcome(o.GetError());
    }
    else
    {
        return StartPublishStreamOutcome(outcome.GetError());
    }
}

void CarClient::StartPublishStreamAsync(const StartPublishStreamRequest& request, const StartPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartPublishStreamRequest&;
    using Resp = StartPublishStreamResponse;

    DoRequestAsync<Req, Resp>(
        "StartPublishStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::StartPublishStreamOutcomeCallable CarClient::StartPublishStreamCallable(const StartPublishStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartPublishStreamOutcome>>();
    StartPublishStreamAsync(
    request,
    [prom](
        const CarClient*,
        const StartPublishStreamRequest&,
        StartPublishStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::StartPublishStreamWithURLOutcome CarClient::StartPublishStreamWithURL(const StartPublishStreamWithURLRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishStreamWithURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishStreamWithURLResponse rsp = StartPublishStreamWithURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishStreamWithURLOutcome(rsp);
        else
            return StartPublishStreamWithURLOutcome(o.GetError());
    }
    else
    {
        return StartPublishStreamWithURLOutcome(outcome.GetError());
    }
}

void CarClient::StartPublishStreamWithURLAsync(const StartPublishStreamWithURLRequest& request, const StartPublishStreamWithURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartPublishStreamWithURLRequest&;
    using Resp = StartPublishStreamWithURLResponse;

    DoRequestAsync<Req, Resp>(
        "StartPublishStreamWithURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::StartPublishStreamWithURLOutcomeCallable CarClient::StartPublishStreamWithURLCallable(const StartPublishStreamWithURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartPublishStreamWithURLOutcome>>();
    StartPublishStreamWithURLAsync(
    request,
    [prom](
        const CarClient*,
        const StartPublishStreamWithURLRequest&,
        StartPublishStreamWithURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CarClient::StopPublishStreamOutcome CarClient::StopPublishStream(const StopPublishStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StopPublishStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopPublishStreamResponse rsp = StopPublishStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopPublishStreamOutcome(rsp);
        else
            return StopPublishStreamOutcome(o.GetError());
    }
    else
    {
        return StopPublishStreamOutcome(outcome.GetError());
    }
}

void CarClient::StopPublishStreamAsync(const StopPublishStreamRequest& request, const StopPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopPublishStreamRequest&;
    using Resp = StopPublishStreamResponse;

    DoRequestAsync<Req, Resp>(
        "StopPublishStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CarClient::StopPublishStreamOutcomeCallable CarClient::StopPublishStreamCallable(const StopPublishStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopPublishStreamOutcome>>();
    StopPublishStreamAsync(
    request,
    [prom](
        const CarClient*,
        const StopPublishStreamRequest&,
        StopPublishStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


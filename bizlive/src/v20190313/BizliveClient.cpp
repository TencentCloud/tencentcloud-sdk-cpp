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

#include <tencentcloud/bizlive/v20190313/BizliveClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bizlive::V20190313;
using namespace TencentCloud::Bizlive::V20190313::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-13";
    const string ENDPOINT = "bizlive.tencentcloudapi.com";
}

BizliveClient::BizliveClient(const Credential &credential, const string &region) :
    BizliveClient(credential, region, ClientProfile())
{
}

BizliveClient::BizliveClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BizliveClient::CreateSessionOutcome BizliveClient::CreateSession(const CreateSessionRequest &request)
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

void BizliveClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

BizliveClient::CreateSessionOutcomeCallable BizliveClient::CreateSessionCallable(const CreateSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSessionOutcome>>();
    CreateSessionAsync(
    request,
    [prom](
        const BizliveClient*,
        const CreateSessionRequest&,
        CreateSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BizliveClient::DescribeStreamPlayInfoListOutcome BizliveClient::DescribeStreamPlayInfoList(const DescribeStreamPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPlayInfoListResponse rsp = DescribeStreamPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPlayInfoListOutcome(rsp);
        else
            return DescribeStreamPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPlayInfoListOutcome(outcome.GetError());
    }
}

void BizliveClient::DescribeStreamPlayInfoListAsync(const DescribeStreamPlayInfoListRequest& request, const DescribeStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPlayInfoListRequest&;
    using Resp = DescribeStreamPlayInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPlayInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BizliveClient::DescribeStreamPlayInfoListOutcomeCallable BizliveClient::DescribeStreamPlayInfoListCallable(const DescribeStreamPlayInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPlayInfoListOutcome>>();
    DescribeStreamPlayInfoListAsync(
    request,
    [prom](
        const BizliveClient*,
        const DescribeStreamPlayInfoListRequest&,
        DescribeStreamPlayInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BizliveClient::DescribeWorkersOutcome BizliveClient::DescribeWorkers(const DescribeWorkersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkersResponse rsp = DescribeWorkersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkersOutcome(rsp);
        else
            return DescribeWorkersOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkersOutcome(outcome.GetError());
    }
}

void BizliveClient::DescribeWorkersAsync(const DescribeWorkersRequest& request, const DescribeWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkersRequest&;
    using Resp = DescribeWorkersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BizliveClient::DescribeWorkersOutcomeCallable BizliveClient::DescribeWorkersCallable(const DescribeWorkersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkersOutcome>>();
    DescribeWorkersAsync(
    request,
    [prom](
        const BizliveClient*,
        const DescribeWorkersRequest&,
        DescribeWorkersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BizliveClient::ForbidLiveStreamOutcome BizliveClient::ForbidLiveStream(const ForbidLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidLiveStreamResponse rsp = ForbidLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidLiveStreamOutcome(rsp);
        else
            return ForbidLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ForbidLiveStreamOutcome(outcome.GetError());
    }
}

void BizliveClient::ForbidLiveStreamAsync(const ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ForbidLiveStreamRequest&;
    using Resp = ForbidLiveStreamResponse;

    DoRequestAsync<Req, Resp>(
        "ForbidLiveStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BizliveClient::ForbidLiveStreamOutcomeCallable BizliveClient::ForbidLiveStreamCallable(const ForbidLiveStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ForbidLiveStreamOutcome>>();
    ForbidLiveStreamAsync(
    request,
    [prom](
        const BizliveClient*,
        const ForbidLiveStreamRequest&,
        ForbidLiveStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BizliveClient::RegisterIMOutcome BizliveClient::RegisterIM(const RegisterIMRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterIM");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterIMResponse rsp = RegisterIMResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterIMOutcome(rsp);
        else
            return RegisterIMOutcome(o.GetError());
    }
    else
    {
        return RegisterIMOutcome(outcome.GetError());
    }
}

void BizliveClient::RegisterIMAsync(const RegisterIMRequest& request, const RegisterIMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterIMRequest&;
    using Resp = RegisterIMResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterIM", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BizliveClient::RegisterIMOutcomeCallable BizliveClient::RegisterIMCallable(const RegisterIMRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterIMOutcome>>();
    RegisterIMAsync(
    request,
    [prom](
        const BizliveClient*,
        const RegisterIMRequest&,
        RegisterIMOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BizliveClient::StopGameOutcome BizliveClient::StopGame(const StopGameRequest &request)
{
    auto outcome = MakeRequest(request, "StopGame");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopGameResponse rsp = StopGameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopGameOutcome(rsp);
        else
            return StopGameOutcome(o.GetError());
    }
    else
    {
        return StopGameOutcome(outcome.GetError());
    }
}

void BizliveClient::StopGameAsync(const StopGameRequest& request, const StopGameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopGameRequest&;
    using Resp = StopGameResponse;

    DoRequestAsync<Req, Resp>(
        "StopGame", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BizliveClient::StopGameOutcomeCallable BizliveClient::StopGameCallable(const StopGameRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopGameOutcome>>();
    StopGameAsync(
    request,
    [prom](
        const BizliveClient*,
        const StopGameRequest&,
        StopGameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


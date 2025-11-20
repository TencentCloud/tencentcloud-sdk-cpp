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

#include <tencentcloud/soe/v20180724/SoeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Soe::V20180724;
using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-24";
    const string ENDPOINT = "soe.tencentcloudapi.com";
}

SoeClient::SoeClient(const Credential &credential, const string &region) :
    SoeClient(credential, region, ClientProfile())
{
}

SoeClient::SoeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SoeClient::InitOralProcessOutcome SoeClient::InitOralProcess(const InitOralProcessRequest &request)
{
    auto outcome = MakeRequest(request, "InitOralProcess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitOralProcessResponse rsp = InitOralProcessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitOralProcessOutcome(rsp);
        else
            return InitOralProcessOutcome(o.GetError());
    }
    else
    {
        return InitOralProcessOutcome(outcome.GetError());
    }
}

void SoeClient::InitOralProcessAsync(const InitOralProcessRequest& request, const InitOralProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InitOralProcessRequest&;
    using Resp = InitOralProcessResponse;

    DoRequestAsync<Req, Resp>(
        "InitOralProcess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SoeClient::InitOralProcessOutcomeCallable SoeClient::InitOralProcessCallable(const InitOralProcessRequest &request)
{
    const auto prom = std::make_shared<std::promise<InitOralProcessOutcome>>();
    InitOralProcessAsync(
    request,
    [prom](
        const SoeClient*,
        const InitOralProcessRequest&,
        InitOralProcessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SoeClient::KeywordEvaluateOutcome SoeClient::KeywordEvaluate(const KeywordEvaluateRequest &request)
{
    auto outcome = MakeRequest(request, "KeywordEvaluate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KeywordEvaluateResponse rsp = KeywordEvaluateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KeywordEvaluateOutcome(rsp);
        else
            return KeywordEvaluateOutcome(o.GetError());
    }
    else
    {
        return KeywordEvaluateOutcome(outcome.GetError());
    }
}

void SoeClient::KeywordEvaluateAsync(const KeywordEvaluateRequest& request, const KeywordEvaluateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KeywordEvaluateRequest&;
    using Resp = KeywordEvaluateResponse;

    DoRequestAsync<Req, Resp>(
        "KeywordEvaluate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SoeClient::KeywordEvaluateOutcomeCallable SoeClient::KeywordEvaluateCallable(const KeywordEvaluateRequest &request)
{
    const auto prom = std::make_shared<std::promise<KeywordEvaluateOutcome>>();
    KeywordEvaluateAsync(
    request,
    [prom](
        const SoeClient*,
        const KeywordEvaluateRequest&,
        KeywordEvaluateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SoeClient::TransmitOralProcessOutcome SoeClient::TransmitOralProcess(const TransmitOralProcessRequest &request)
{
    auto outcome = MakeRequest(request, "TransmitOralProcess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransmitOralProcessResponse rsp = TransmitOralProcessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransmitOralProcessOutcome(rsp);
        else
            return TransmitOralProcessOutcome(o.GetError());
    }
    else
    {
        return TransmitOralProcessOutcome(outcome.GetError());
    }
}

void SoeClient::TransmitOralProcessAsync(const TransmitOralProcessRequest& request, const TransmitOralProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransmitOralProcessRequest&;
    using Resp = TransmitOralProcessResponse;

    DoRequestAsync<Req, Resp>(
        "TransmitOralProcess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SoeClient::TransmitOralProcessOutcomeCallable SoeClient::TransmitOralProcessCallable(const TransmitOralProcessRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransmitOralProcessOutcome>>();
    TransmitOralProcessAsync(
    request,
    [prom](
        const SoeClient*,
        const TransmitOralProcessRequest&,
        TransmitOralProcessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SoeClient::TransmitOralProcessWithInitOutcome SoeClient::TransmitOralProcessWithInit(const TransmitOralProcessWithInitRequest &request)
{
    auto outcome = MakeRequest(request, "TransmitOralProcessWithInit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransmitOralProcessWithInitResponse rsp = TransmitOralProcessWithInitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransmitOralProcessWithInitOutcome(rsp);
        else
            return TransmitOralProcessWithInitOutcome(o.GetError());
    }
    else
    {
        return TransmitOralProcessWithInitOutcome(outcome.GetError());
    }
}

void SoeClient::TransmitOralProcessWithInitAsync(const TransmitOralProcessWithInitRequest& request, const TransmitOralProcessWithInitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransmitOralProcessWithInitRequest&;
    using Resp = TransmitOralProcessWithInitResponse;

    DoRequestAsync<Req, Resp>(
        "TransmitOralProcessWithInit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SoeClient::TransmitOralProcessWithInitOutcomeCallable SoeClient::TransmitOralProcessWithInitCallable(const TransmitOralProcessWithInitRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransmitOralProcessWithInitOutcome>>();
    TransmitOralProcessWithInitAsync(
    request,
    [prom](
        const SoeClient*,
        const TransmitOralProcessWithInitRequest&,
        TransmitOralProcessWithInitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


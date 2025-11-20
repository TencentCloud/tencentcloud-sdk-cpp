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

#include <tencentcloud/tbp/v20190627/TbpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tbp::V20190627;
using namespace TencentCloud::Tbp::V20190627::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-06-27";
    const string ENDPOINT = "tbp.tencentcloudapi.com";
}

TbpClient::TbpClient(const Credential &credential, const string &region) :
    TbpClient(credential, region, ClientProfile())
{
}

TbpClient::TbpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TbpClient::TextProcessOutcome TbpClient::TextProcess(const TextProcessRequest &request)
{
    auto outcome = MakeRequest(request, "TextProcess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextProcessResponse rsp = TextProcessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextProcessOutcome(rsp);
        else
            return TextProcessOutcome(o.GetError());
    }
    else
    {
        return TextProcessOutcome(outcome.GetError());
    }
}

void TbpClient::TextProcessAsync(const TextProcessRequest& request, const TextProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextProcessRequest&;
    using Resp = TextProcessResponse;

    DoRequestAsync<Req, Resp>(
        "TextProcess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbpClient::TextProcessOutcomeCallable TbpClient::TextProcessCallable(const TextProcessRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextProcessOutcome>>();
    TextProcessAsync(
    request,
    [prom](
        const TbpClient*,
        const TextProcessRequest&,
        TextProcessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbpClient::TextResetOutcome TbpClient::TextReset(const TextResetRequest &request)
{
    auto outcome = MakeRequest(request, "TextReset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextResetResponse rsp = TextResetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextResetOutcome(rsp);
        else
            return TextResetOutcome(o.GetError());
    }
    else
    {
        return TextResetOutcome(outcome.GetError());
    }
}

void TbpClient::TextResetAsync(const TextResetRequest& request, const TextResetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextResetRequest&;
    using Resp = TextResetResponse;

    DoRequestAsync<Req, Resp>(
        "TextReset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbpClient::TextResetOutcomeCallable TbpClient::TextResetCallable(const TextResetRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextResetOutcome>>();
    TextResetAsync(
    request,
    [prom](
        const TbpClient*,
        const TextResetRequest&,
        TextResetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


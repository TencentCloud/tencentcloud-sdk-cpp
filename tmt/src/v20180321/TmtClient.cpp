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

#include <tencentcloud/tmt/v20180321/TmtClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tmt::V20180321;
using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-21";
    const string ENDPOINT = "tmt.tencentcloudapi.com";
}

TmtClient::TmtClient(const Credential &credential, const string &region) :
    TmtClient(credential, region, ClientProfile())
{
}

TmtClient::TmtClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TmtClient::ImageTranslateLLMOutcome TmtClient::ImageTranslateLLM(const ImageTranslateLLMRequest &request)
{
    auto outcome = MakeRequest(request, "ImageTranslateLLM");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageTranslateLLMResponse rsp = ImageTranslateLLMResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageTranslateLLMOutcome(rsp);
        else
            return ImageTranslateLLMOutcome(o.GetError());
    }
    else
    {
        return ImageTranslateLLMOutcome(outcome.GetError());
    }
}

void TmtClient::ImageTranslateLLMAsync(const ImageTranslateLLMRequest& request, const ImageTranslateLLMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImageTranslateLLMRequest&;
    using Resp = ImageTranslateLLMResponse;

    DoRequestAsync<Req, Resp>(
        "ImageTranslateLLM", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmtClient::ImageTranslateLLMOutcomeCallable TmtClient::ImageTranslateLLMCallable(const ImageTranslateLLMRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageTranslateLLMOutcome>>();
    ImageTranslateLLMAsync(
    request,
    [prom](
        const TmtClient*,
        const ImageTranslateLLMRequest&,
        ImageTranslateLLMOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TmtClient::TextTranslateOutcome TmtClient::TextTranslate(const TextTranslateRequest &request)
{
    auto outcome = MakeRequest(request, "TextTranslate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextTranslateResponse rsp = TextTranslateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextTranslateOutcome(rsp);
        else
            return TextTranslateOutcome(o.GetError());
    }
    else
    {
        return TextTranslateOutcome(outcome.GetError());
    }
}

void TmtClient::TextTranslateAsync(const TextTranslateRequest& request, const TextTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextTranslateRequest&;
    using Resp = TextTranslateResponse;

    DoRequestAsync<Req, Resp>(
        "TextTranslate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmtClient::TextTranslateOutcomeCallable TmtClient::TextTranslateCallable(const TextTranslateRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextTranslateOutcome>>();
    TextTranslateAsync(
    request,
    [prom](
        const TmtClient*,
        const TextTranslateRequest&,
        TextTranslateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


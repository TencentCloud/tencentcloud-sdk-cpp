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

#include <tencentcloud/nlp/v20190408/NlpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Nlp::V20190408;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-08";
    const string ENDPOINT = "nlp.tencentcloudapi.com";
}

NlpClient::NlpClient(const Credential &credential, const string &region) :
    NlpClient(credential, region, ClientProfile())
{
}

NlpClient::NlpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


NlpClient::AnalyzeSentimentOutcome NlpClient::AnalyzeSentiment(const AnalyzeSentimentRequest &request)
{
    auto outcome = MakeRequest(request, "AnalyzeSentiment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AnalyzeSentimentResponse rsp = AnalyzeSentimentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AnalyzeSentimentOutcome(rsp);
        else
            return AnalyzeSentimentOutcome(o.GetError());
    }
    else
    {
        return AnalyzeSentimentOutcome(outcome.GetError());
    }
}

void NlpClient::AnalyzeSentimentAsync(const AnalyzeSentimentRequest& request, const AnalyzeSentimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AnalyzeSentimentRequest&;
    using Resp = AnalyzeSentimentResponse;

    DoRequestAsync<Req, Resp>(
        "AnalyzeSentiment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NlpClient::AnalyzeSentimentOutcomeCallable NlpClient::AnalyzeSentimentCallable(const AnalyzeSentimentRequest &request)
{
    const auto prom = std::make_shared<std::promise<AnalyzeSentimentOutcome>>();
    AnalyzeSentimentAsync(
    request,
    [prom](
        const NlpClient*,
        const AnalyzeSentimentRequest&,
        AnalyzeSentimentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

NlpClient::ParseWordsOutcome NlpClient::ParseWords(const ParseWordsRequest &request)
{
    auto outcome = MakeRequest(request, "ParseWords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseWordsResponse rsp = ParseWordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseWordsOutcome(rsp);
        else
            return ParseWordsOutcome(o.GetError());
    }
    else
    {
        return ParseWordsOutcome(outcome.GetError());
    }
}

void NlpClient::ParseWordsAsync(const ParseWordsRequest& request, const ParseWordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ParseWordsRequest&;
    using Resp = ParseWordsResponse;

    DoRequestAsync<Req, Resp>(
        "ParseWords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NlpClient::ParseWordsOutcomeCallable NlpClient::ParseWordsCallable(const ParseWordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ParseWordsOutcome>>();
    ParseWordsAsync(
    request,
    [prom](
        const NlpClient*,
        const ParseWordsRequest&,
        ParseWordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

NlpClient::SentenceCorrectionOutcome NlpClient::SentenceCorrection(const SentenceCorrectionRequest &request)
{
    auto outcome = MakeRequest(request, "SentenceCorrection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SentenceCorrectionResponse rsp = SentenceCorrectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SentenceCorrectionOutcome(rsp);
        else
            return SentenceCorrectionOutcome(o.GetError());
    }
    else
    {
        return SentenceCorrectionOutcome(outcome.GetError());
    }
}

void NlpClient::SentenceCorrectionAsync(const SentenceCorrectionRequest& request, const SentenceCorrectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SentenceCorrectionRequest&;
    using Resp = SentenceCorrectionResponse;

    DoRequestAsync<Req, Resp>(
        "SentenceCorrection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

NlpClient::SentenceCorrectionOutcomeCallable NlpClient::SentenceCorrectionCallable(const SentenceCorrectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SentenceCorrectionOutcome>>();
    SentenceCorrectionAsync(
    request,
    [prom](
        const NlpClient*,
        const SentenceCorrectionRequest&,
        SentenceCorrectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


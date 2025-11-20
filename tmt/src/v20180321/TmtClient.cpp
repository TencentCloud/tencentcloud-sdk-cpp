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


TmtClient::FileTranslateOutcome TmtClient::FileTranslate(const FileTranslateRequest &request)
{
    auto outcome = MakeRequest(request, "FileTranslate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FileTranslateResponse rsp = FileTranslateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FileTranslateOutcome(rsp);
        else
            return FileTranslateOutcome(o.GetError());
    }
    else
    {
        return FileTranslateOutcome(outcome.GetError());
    }
}

void TmtClient::FileTranslateAsync(const FileTranslateRequest& request, const FileTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FileTranslateRequest&;
    using Resp = FileTranslateResponse;

    DoRequestAsync<Req, Resp>(
        "FileTranslate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmtClient::FileTranslateOutcomeCallable TmtClient::FileTranslateCallable(const FileTranslateRequest &request)
{
    const auto prom = std::make_shared<std::promise<FileTranslateOutcome>>();
    FileTranslateAsync(
    request,
    [prom](
        const TmtClient*,
        const FileTranslateRequest&,
        FileTranslateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TmtClient::GetFileTranslateOutcome TmtClient::GetFileTranslate(const GetFileTranslateRequest &request)
{
    auto outcome = MakeRequest(request, "GetFileTranslate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFileTranslateResponse rsp = GetFileTranslateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFileTranslateOutcome(rsp);
        else
            return GetFileTranslateOutcome(o.GetError());
    }
    else
    {
        return GetFileTranslateOutcome(outcome.GetError());
    }
}

void TmtClient::GetFileTranslateAsync(const GetFileTranslateRequest& request, const GetFileTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFileTranslateRequest&;
    using Resp = GetFileTranslateResponse;

    DoRequestAsync<Req, Resp>(
        "GetFileTranslate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmtClient::GetFileTranslateOutcomeCallable TmtClient::GetFileTranslateCallable(const GetFileTranslateRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFileTranslateOutcome>>();
    GetFileTranslateAsync(
    request,
    [prom](
        const TmtClient*,
        const GetFileTranslateRequest&,
        GetFileTranslateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TmtClient::ImageTranslateOutcome TmtClient::ImageTranslate(const ImageTranslateRequest &request)
{
    auto outcome = MakeRequest(request, "ImageTranslate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageTranslateResponse rsp = ImageTranslateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageTranslateOutcome(rsp);
        else
            return ImageTranslateOutcome(o.GetError());
    }
    else
    {
        return ImageTranslateOutcome(outcome.GetError());
    }
}

void TmtClient::ImageTranslateAsync(const ImageTranslateRequest& request, const ImageTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImageTranslateRequest&;
    using Resp = ImageTranslateResponse;

    DoRequestAsync<Req, Resp>(
        "ImageTranslate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmtClient::ImageTranslateOutcomeCallable TmtClient::ImageTranslateCallable(const ImageTranslateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageTranslateOutcome>>();
    ImageTranslateAsync(
    request,
    [prom](
        const TmtClient*,
        const ImageTranslateRequest&,
        ImageTranslateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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

TmtClient::LanguageDetectOutcome TmtClient::LanguageDetect(const LanguageDetectRequest &request)
{
    auto outcome = MakeRequest(request, "LanguageDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LanguageDetectResponse rsp = LanguageDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LanguageDetectOutcome(rsp);
        else
            return LanguageDetectOutcome(o.GetError());
    }
    else
    {
        return LanguageDetectOutcome(outcome.GetError());
    }
}

void TmtClient::LanguageDetectAsync(const LanguageDetectRequest& request, const LanguageDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LanguageDetectRequest&;
    using Resp = LanguageDetectResponse;

    DoRequestAsync<Req, Resp>(
        "LanguageDetect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmtClient::LanguageDetectOutcomeCallable TmtClient::LanguageDetectCallable(const LanguageDetectRequest &request)
{
    const auto prom = std::make_shared<std::promise<LanguageDetectOutcome>>();
    LanguageDetectAsync(
    request,
    [prom](
        const TmtClient*,
        const LanguageDetectRequest&,
        LanguageDetectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TmtClient::SpeechTranslateOutcome TmtClient::SpeechTranslate(const SpeechTranslateRequest &request)
{
    auto outcome = MakeRequest(request, "SpeechTranslate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SpeechTranslateResponse rsp = SpeechTranslateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SpeechTranslateOutcome(rsp);
        else
            return SpeechTranslateOutcome(o.GetError());
    }
    else
    {
        return SpeechTranslateOutcome(outcome.GetError());
    }
}

void TmtClient::SpeechTranslateAsync(const SpeechTranslateRequest& request, const SpeechTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SpeechTranslateRequest&;
    using Resp = SpeechTranslateResponse;

    DoRequestAsync<Req, Resp>(
        "SpeechTranslate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmtClient::SpeechTranslateOutcomeCallable TmtClient::SpeechTranslateCallable(const SpeechTranslateRequest &request)
{
    const auto prom = std::make_shared<std::promise<SpeechTranslateOutcome>>();
    SpeechTranslateAsync(
    request,
    [prom](
        const TmtClient*,
        const SpeechTranslateRequest&,
        SpeechTranslateOutcome resp,
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

TmtClient::TextTranslateBatchOutcome TmtClient::TextTranslateBatch(const TextTranslateBatchRequest &request)
{
    auto outcome = MakeRequest(request, "TextTranslateBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextTranslateBatchResponse rsp = TextTranslateBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextTranslateBatchOutcome(rsp);
        else
            return TextTranslateBatchOutcome(o.GetError());
    }
    else
    {
        return TextTranslateBatchOutcome(outcome.GetError());
    }
}

void TmtClient::TextTranslateBatchAsync(const TextTranslateBatchRequest& request, const TextTranslateBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextTranslateBatchRequest&;
    using Resp = TextTranslateBatchResponse;

    DoRequestAsync<Req, Resp>(
        "TextTranslateBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmtClient::TextTranslateBatchOutcomeCallable TmtClient::TextTranslateBatchCallable(const TextTranslateBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextTranslateBatchOutcome>>();
    TextTranslateBatchAsync(
    request,
    [prom](
        const TmtClient*,
        const TextTranslateBatchRequest&,
        TextTranslateBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


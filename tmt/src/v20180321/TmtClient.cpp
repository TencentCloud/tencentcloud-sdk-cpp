/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FileTranslate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmtClient::FileTranslateOutcomeCallable TmtClient::FileTranslateCallable(const FileTranslateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FileTranslateOutcome()>>(
        [this, request]()
        {
            return this->FileTranslate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFileTranslate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmtClient::GetFileTranslateOutcomeCallable TmtClient::GetFileTranslateCallable(const GetFileTranslateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFileTranslateOutcome()>>(
        [this, request]()
        {
            return this->GetFileTranslate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageTranslate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmtClient::ImageTranslateOutcomeCallable TmtClient::ImageTranslateCallable(const ImageTranslateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageTranslateOutcome()>>(
        [this, request]()
        {
            return this->ImageTranslate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageTranslateLLM(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmtClient::ImageTranslateLLMOutcomeCallable TmtClient::ImageTranslateLLMCallable(const ImageTranslateLLMRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageTranslateLLMOutcome()>>(
        [this, request]()
        {
            return this->ImageTranslateLLM(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LanguageDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmtClient::LanguageDetectOutcomeCallable TmtClient::LanguageDetectCallable(const LanguageDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LanguageDetectOutcome()>>(
        [this, request]()
        {
            return this->LanguageDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SpeechTranslate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmtClient::SpeechTranslateOutcomeCallable TmtClient::SpeechTranslateCallable(const SpeechTranslateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SpeechTranslateOutcome()>>(
        [this, request]()
        {
            return this->SpeechTranslate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextTranslate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmtClient::TextTranslateOutcomeCallable TmtClient::TextTranslateCallable(const TextTranslateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextTranslateOutcome()>>(
        [this, request]()
        {
            return this->TextTranslate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextTranslateBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmtClient::TextTranslateBatchOutcomeCallable TmtClient::TextTranslateBatchCallable(const TextTranslateBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextTranslateBatchOutcome()>>(
        [this, request]()
        {
            return this->TextTranslateBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


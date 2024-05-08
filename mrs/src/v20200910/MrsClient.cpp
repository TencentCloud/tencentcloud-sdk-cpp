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

#include <tencentcloud/mrs/v20200910/MrsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mrs::V20200910;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-09-10";
    const string ENDPOINT = "mrs.tencentcloudapi.com";
}

MrsClient::MrsClient(const Credential &credential, const string &region) :
    MrsClient(credential, region, ClientProfile())
{
}

MrsClient::MrsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MrsClient::DrugInstructionObjectOutcome MrsClient::DrugInstructionObject(const DrugInstructionObjectRequest &request)
{
    auto outcome = MakeRequest(request, "DrugInstructionObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DrugInstructionObjectResponse rsp = DrugInstructionObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DrugInstructionObjectOutcome(rsp);
        else
            return DrugInstructionObjectOutcome(o.GetError());
    }
    else
    {
        return DrugInstructionObjectOutcome(outcome.GetError());
    }
}

void MrsClient::DrugInstructionObjectAsync(const DrugInstructionObjectRequest& request, const DrugInstructionObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DrugInstructionObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::DrugInstructionObjectOutcomeCallable MrsClient::DrugInstructionObjectCallable(const DrugInstructionObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DrugInstructionObjectOutcome()>>(
        [this, request]()
        {
            return this->DrugInstructionObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MrsClient::ImageMaskOutcome MrsClient::ImageMask(const ImageMaskRequest &request)
{
    auto outcome = MakeRequest(request, "ImageMask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageMaskResponse rsp = ImageMaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageMaskOutcome(rsp);
        else
            return ImageMaskOutcome(o.GetError());
    }
    else
    {
        return ImageMaskOutcome(outcome.GetError());
    }
}

void MrsClient::ImageMaskAsync(const ImageMaskRequest& request, const ImageMaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageMask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::ImageMaskOutcomeCallable MrsClient::ImageMaskCallable(const ImageMaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageMaskOutcome()>>(
        [this, request]()
        {
            return this->ImageMask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MrsClient::ImageMaskAsyncOutcome MrsClient::ImageMaskAsync(const ImageMaskAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "ImageMaskAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageMaskAsyncResponse rsp = ImageMaskAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageMaskAsyncOutcome(rsp);
        else
            return ImageMaskAsyncOutcome(o.GetError());
    }
    else
    {
        return ImageMaskAsyncOutcome(outcome.GetError());
    }
}

void MrsClient::ImageMaskAsyncAsync(const ImageMaskAsyncRequest& request, const ImageMaskAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageMaskAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::ImageMaskAsyncOutcomeCallable MrsClient::ImageMaskAsyncCallable(const ImageMaskAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageMaskAsyncOutcome()>>(
        [this, request]()
        {
            return this->ImageMaskAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MrsClient::ImageMaskAsyncGetResultOutcome MrsClient::ImageMaskAsyncGetResult(const ImageMaskAsyncGetResultRequest &request)
{
    auto outcome = MakeRequest(request, "ImageMaskAsyncGetResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageMaskAsyncGetResultResponse rsp = ImageMaskAsyncGetResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageMaskAsyncGetResultOutcome(rsp);
        else
            return ImageMaskAsyncGetResultOutcome(o.GetError());
    }
    else
    {
        return ImageMaskAsyncGetResultOutcome(outcome.GetError());
    }
}

void MrsClient::ImageMaskAsyncGetResultAsync(const ImageMaskAsyncGetResultRequest& request, const ImageMaskAsyncGetResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageMaskAsyncGetResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::ImageMaskAsyncGetResultOutcomeCallable MrsClient::ImageMaskAsyncGetResultCallable(const ImageMaskAsyncGetResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageMaskAsyncGetResultOutcome()>>(
        [this, request]()
        {
            return this->ImageMaskAsyncGetResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MrsClient::ImageToClassOutcome MrsClient::ImageToClass(const ImageToClassRequest &request)
{
    auto outcome = MakeRequest(request, "ImageToClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageToClassResponse rsp = ImageToClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageToClassOutcome(rsp);
        else
            return ImageToClassOutcome(o.GetError());
    }
    else
    {
        return ImageToClassOutcome(outcome.GetError());
    }
}

void MrsClient::ImageToClassAsync(const ImageToClassRequest& request, const ImageToClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageToClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::ImageToClassOutcomeCallable MrsClient::ImageToClassCallable(const ImageToClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageToClassOutcome()>>(
        [this, request]()
        {
            return this->ImageToClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MrsClient::ImageToObjectOutcome MrsClient::ImageToObject(const ImageToObjectRequest &request)
{
    auto outcome = MakeRequest(request, "ImageToObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageToObjectResponse rsp = ImageToObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageToObjectOutcome(rsp);
        else
            return ImageToObjectOutcome(o.GetError());
    }
    else
    {
        return ImageToObjectOutcome(outcome.GetError());
    }
}

void MrsClient::ImageToObjectAsync(const ImageToObjectRequest& request, const ImageToObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageToObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::ImageToObjectOutcomeCallable MrsClient::ImageToObjectCallable(const ImageToObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageToObjectOutcome()>>(
        [this, request]()
        {
            return this->ImageToObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MrsClient::TextToClassOutcome MrsClient::TextToClass(const TextToClassRequest &request)
{
    auto outcome = MakeRequest(request, "TextToClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextToClassResponse rsp = TextToClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextToClassOutcome(rsp);
        else
            return TextToClassOutcome(o.GetError());
    }
    else
    {
        return TextToClassOutcome(outcome.GetError());
    }
}

void MrsClient::TextToClassAsync(const TextToClassRequest& request, const TextToClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextToClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::TextToClassOutcomeCallable MrsClient::TextToClassCallable(const TextToClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextToClassOutcome()>>(
        [this, request]()
        {
            return this->TextToClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MrsClient::TextToObjectOutcome MrsClient::TextToObject(const TextToObjectRequest &request)
{
    auto outcome = MakeRequest(request, "TextToObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextToObjectResponse rsp = TextToObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextToObjectOutcome(rsp);
        else
            return TextToObjectOutcome(o.GetError());
    }
    else
    {
        return TextToObjectOutcome(outcome.GetError());
    }
}

void MrsClient::TextToObjectAsync(const TextToObjectRequest& request, const TextToObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextToObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::TextToObjectOutcomeCallable MrsClient::TextToObjectCallable(const TextToObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextToObjectOutcome()>>(
        [this, request]()
        {
            return this->TextToObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MrsClient::TurnPDFToObjectOutcome MrsClient::TurnPDFToObject(const TurnPDFToObjectRequest &request)
{
    auto outcome = MakeRequest(request, "TurnPDFToObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TurnPDFToObjectResponse rsp = TurnPDFToObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TurnPDFToObjectOutcome(rsp);
        else
            return TurnPDFToObjectOutcome(o.GetError());
    }
    else
    {
        return TurnPDFToObjectOutcome(outcome.GetError());
    }
}

void MrsClient::TurnPDFToObjectAsync(const TurnPDFToObjectRequest& request, const TurnPDFToObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TurnPDFToObject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::TurnPDFToObjectOutcomeCallable MrsClient::TurnPDFToObjectCallable(const TurnPDFToObjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TurnPDFToObjectOutcome()>>(
        [this, request]()
        {
            return this->TurnPDFToObject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MrsClient::TurnPDFToObjectAsyncOutcome MrsClient::TurnPDFToObjectAsync(const TurnPDFToObjectAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "TurnPDFToObjectAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TurnPDFToObjectAsyncResponse rsp = TurnPDFToObjectAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TurnPDFToObjectAsyncOutcome(rsp);
        else
            return TurnPDFToObjectAsyncOutcome(o.GetError());
    }
    else
    {
        return TurnPDFToObjectAsyncOutcome(outcome.GetError());
    }
}

void MrsClient::TurnPDFToObjectAsyncAsync(const TurnPDFToObjectAsyncRequest& request, const TurnPDFToObjectAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TurnPDFToObjectAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::TurnPDFToObjectAsyncOutcomeCallable MrsClient::TurnPDFToObjectAsyncCallable(const TurnPDFToObjectAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TurnPDFToObjectAsyncOutcome()>>(
        [this, request]()
        {
            return this->TurnPDFToObjectAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MrsClient::TurnPDFToObjectAsyncGetResultOutcome MrsClient::TurnPDFToObjectAsyncGetResult(const TurnPDFToObjectAsyncGetResultRequest &request)
{
    auto outcome = MakeRequest(request, "TurnPDFToObjectAsyncGetResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TurnPDFToObjectAsyncGetResultResponse rsp = TurnPDFToObjectAsyncGetResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TurnPDFToObjectAsyncGetResultOutcome(rsp);
        else
            return TurnPDFToObjectAsyncGetResultOutcome(o.GetError());
    }
    else
    {
        return TurnPDFToObjectAsyncGetResultOutcome(outcome.GetError());
    }
}

void MrsClient::TurnPDFToObjectAsyncGetResultAsync(const TurnPDFToObjectAsyncGetResultRequest& request, const TurnPDFToObjectAsyncGetResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TurnPDFToObjectAsyncGetResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MrsClient::TurnPDFToObjectAsyncGetResultOutcomeCallable MrsClient::TurnPDFToObjectAsyncGetResultCallable(const TurnPDFToObjectAsyncGetResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TurnPDFToObjectAsyncGetResultOutcome()>>(
        [this, request]()
        {
            return this->TurnPDFToObjectAsyncGetResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


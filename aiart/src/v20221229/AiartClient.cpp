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

#include <tencentcloud/aiart/v20221229/AiartClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Aiart::V20221229;
using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-12-29";
    const string ENDPOINT = "aiart.tencentcloudapi.com";
}

AiartClient::AiartClient(const Credential &credential, const string &region) :
    AiartClient(credential, region, ClientProfile())
{
}

AiartClient::AiartClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AiartClient::ImageToImageOutcome AiartClient::ImageToImage(const ImageToImageRequest &request)
{
    auto outcome = MakeRequest(request, "ImageToImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageToImageResponse rsp = ImageToImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageToImageOutcome(rsp);
        else
            return ImageToImageOutcome(o.GetError());
    }
    else
    {
        return ImageToImageOutcome(outcome.GetError());
    }
}

void AiartClient::ImageToImageAsync(const ImageToImageRequest& request, const ImageToImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageToImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::ImageToImageOutcomeCallable AiartClient::ImageToImageCallable(const ImageToImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageToImageOutcome()>>(
        [this, request]()
        {
            return this->ImageToImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::TextToImageOutcome AiartClient::TextToImage(const TextToImageRequest &request)
{
    auto outcome = MakeRequest(request, "TextToImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextToImageResponse rsp = TextToImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextToImageOutcome(rsp);
        else
            return TextToImageOutcome(o.GetError());
    }
    else
    {
        return TextToImageOutcome(outcome.GetError());
    }
}

void AiartClient::TextToImageAsync(const TextToImageRequest& request, const TextToImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextToImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::TextToImageOutcomeCallable AiartClient::TextToImageCallable(const TextToImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextToImageOutcome()>>(
        [this, request]()
        {
            return this->TextToImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


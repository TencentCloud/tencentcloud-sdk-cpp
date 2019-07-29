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

#include <tencentcloud/tiia/v20190529/TiiaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tiia::V20190529;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-05-29";
    const string ENDPOINT = "tiia.tencentcloudapi.com";
}

TiiaClient::TiiaClient(const Credential &credential, const string &region) :
    TiiaClient(credential, region, ClientProfile())
{
}

TiiaClient::TiiaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TiiaClient::DetectLabelOutcome TiiaClient::DetectLabel(const DetectLabelRequest &request)
{
    auto outcome = MakeRequest(request, "DetectLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectLabelResponse rsp = DetectLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectLabelOutcome(rsp);
        else
            return DetectLabelOutcome(o.GetError());
    }
    else
    {
        return DetectLabelOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectLabelAsync(const DetectLabelRequest& request, const DetectLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::DetectLabelOutcomeCallable TiiaClient::DetectLabelCallable(const DetectLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectLabelOutcome()>>(
        [this, request]()
        {
            return this->DetectLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiiaClient::DetectProductOutcome TiiaClient::DetectProduct(const DetectProductRequest &request)
{
    auto outcome = MakeRequest(request, "DetectProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectProductResponse rsp = DetectProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectProductOutcome(rsp);
        else
            return DetectProductOutcome(o.GetError());
    }
    else
    {
        return DetectProductOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectProductAsync(const DetectProductRequest& request, const DetectProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::DetectProductOutcomeCallable TiiaClient::DetectProductCallable(const DetectProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectProductOutcome()>>(
        [this, request]()
        {
            return this->DetectProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiiaClient::ImageModerationOutcome TiiaClient::ImageModeration(const ImageModerationRequest &request)
{
    auto outcome = MakeRequest(request, "ImageModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageModerationResponse rsp = ImageModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageModerationOutcome(rsp);
        else
            return ImageModerationOutcome(o.GetError());
    }
    else
    {
        return ImageModerationOutcome(outcome.GetError());
    }
}

void TiiaClient::ImageModerationAsync(const ImageModerationRequest& request, const ImageModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::ImageModerationOutcomeCallable TiiaClient::ImageModerationCallable(const ImageModerationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageModerationOutcome()>>(
        [this, request]()
        {
            return this->ImageModeration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiiaClient::RecognizeCarOutcome TiiaClient::RecognizeCar(const RecognizeCarRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeCar");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeCarResponse rsp = RecognizeCarResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeCarOutcome(rsp);
        else
            return RecognizeCarOutcome(o.GetError());
    }
    else
    {
        return RecognizeCarOutcome(outcome.GetError());
    }
}

void TiiaClient::RecognizeCarAsync(const RecognizeCarRequest& request, const RecognizeCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeCar(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::RecognizeCarOutcomeCallable TiiaClient::RecognizeCarCallable(const RecognizeCarRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeCarOutcome()>>(
        [this, request]()
        {
            return this->RecognizeCar(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


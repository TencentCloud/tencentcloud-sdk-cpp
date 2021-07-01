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


TiiaClient::AssessQualityOutcome TiiaClient::AssessQuality(const AssessQualityRequest &request)
{
    auto outcome = MakeRequest(request, "AssessQuality");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssessQualityResponse rsp = AssessQualityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssessQualityOutcome(rsp);
        else
            return AssessQualityOutcome(o.GetError());
    }
    else
    {
        return AssessQualityOutcome(outcome.GetError());
    }
}

void TiiaClient::AssessQualityAsync(const AssessQualityRequest& request, const AssessQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssessQuality(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::AssessQualityOutcomeCallable TiiaClient::AssessQualityCallable(const AssessQualityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssessQualityOutcome()>>(
        [this, request]()
        {
            return this->AssessQuality(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiiaClient::CropImageOutcome TiiaClient::CropImage(const CropImageRequest &request)
{
    auto outcome = MakeRequest(request, "CropImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CropImageResponse rsp = CropImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CropImageOutcome(rsp);
        else
            return CropImageOutcome(o.GetError());
    }
    else
    {
        return CropImageOutcome(outcome.GetError());
    }
}

void TiiaClient::CropImageAsync(const CropImageRequest& request, const CropImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CropImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::CropImageOutcomeCallable TiiaClient::CropImageCallable(const CropImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CropImageOutcome()>>(
        [this, request]()
        {
            return this->CropImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiiaClient::DetectCelebrityOutcome TiiaClient::DetectCelebrity(const DetectCelebrityRequest &request)
{
    auto outcome = MakeRequest(request, "DetectCelebrity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectCelebrityResponse rsp = DetectCelebrityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectCelebrityOutcome(rsp);
        else
            return DetectCelebrityOutcome(o.GetError());
    }
    else
    {
        return DetectCelebrityOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectCelebrityAsync(const DetectCelebrityRequest& request, const DetectCelebrityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectCelebrity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::DetectCelebrityOutcomeCallable TiiaClient::DetectCelebrityCallable(const DetectCelebrityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectCelebrityOutcome()>>(
        [this, request]()
        {
            return this->DetectCelebrity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiiaClient::DetectDisgustOutcome TiiaClient::DetectDisgust(const DetectDisgustRequest &request)
{
    auto outcome = MakeRequest(request, "DetectDisgust");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectDisgustResponse rsp = DetectDisgustResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectDisgustOutcome(rsp);
        else
            return DetectDisgustOutcome(o.GetError());
    }
    else
    {
        return DetectDisgustOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectDisgustAsync(const DetectDisgustRequest& request, const DetectDisgustAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectDisgust(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::DetectDisgustOutcomeCallable TiiaClient::DetectDisgustCallable(const DetectDisgustRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectDisgustOutcome()>>(
        [this, request]()
        {
            return this->DetectDisgust(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

TiiaClient::DetectLabelBetaOutcome TiiaClient::DetectLabelBeta(const DetectLabelBetaRequest &request)
{
    auto outcome = MakeRequest(request, "DetectLabelBeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectLabelBetaResponse rsp = DetectLabelBetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectLabelBetaOutcome(rsp);
        else
            return DetectLabelBetaOutcome(o.GetError());
    }
    else
    {
        return DetectLabelBetaOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectLabelBetaAsync(const DetectLabelBetaRequest& request, const DetectLabelBetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectLabelBeta(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::DetectLabelBetaOutcomeCallable TiiaClient::DetectLabelBetaCallable(const DetectLabelBetaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectLabelBetaOutcome()>>(
        [this, request]()
        {
            return this->DetectLabelBeta(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiiaClient::DetectMisbehaviorOutcome TiiaClient::DetectMisbehavior(const DetectMisbehaviorRequest &request)
{
    auto outcome = MakeRequest(request, "DetectMisbehavior");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectMisbehaviorResponse rsp = DetectMisbehaviorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectMisbehaviorOutcome(rsp);
        else
            return DetectMisbehaviorOutcome(o.GetError());
    }
    else
    {
        return DetectMisbehaviorOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectMisbehaviorAsync(const DetectMisbehaviorRequest& request, const DetectMisbehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectMisbehavior(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::DetectMisbehaviorOutcomeCallable TiiaClient::DetectMisbehaviorCallable(const DetectMisbehaviorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectMisbehaviorOutcome()>>(
        [this, request]()
        {
            return this->DetectMisbehavior(request);
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

TiiaClient::DetectProductBetaOutcome TiiaClient::DetectProductBeta(const DetectProductBetaRequest &request)
{
    auto outcome = MakeRequest(request, "DetectProductBeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectProductBetaResponse rsp = DetectProductBetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectProductBetaOutcome(rsp);
        else
            return DetectProductBetaOutcome(o.GetError());
    }
    else
    {
        return DetectProductBetaOutcome(outcome.GetError());
    }
}

void TiiaClient::DetectProductBetaAsync(const DetectProductBetaRequest& request, const DetectProductBetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectProductBeta(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::DetectProductBetaOutcomeCallable TiiaClient::DetectProductBetaCallable(const DetectProductBetaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectProductBetaOutcome()>>(
        [this, request]()
        {
            return this->DetectProductBeta(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiiaClient::EnhanceImageOutcome TiiaClient::EnhanceImage(const EnhanceImageRequest &request)
{
    auto outcome = MakeRequest(request, "EnhanceImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnhanceImageResponse rsp = EnhanceImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnhanceImageOutcome(rsp);
        else
            return EnhanceImageOutcome(o.GetError());
    }
    else
    {
        return EnhanceImageOutcome(outcome.GetError());
    }
}

void TiiaClient::EnhanceImageAsync(const EnhanceImageRequest& request, const EnhanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnhanceImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiiaClient::EnhanceImageOutcomeCallable TiiaClient::EnhanceImageCallable(const EnhanceImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnhanceImageOutcome()>>(
        [this, request]()
        {
            return this->EnhanceImage(request);
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


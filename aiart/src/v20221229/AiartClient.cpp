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


AiartClient::ChangeClothesOutcome AiartClient::ChangeClothes(const ChangeClothesRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeClothes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeClothesResponse rsp = ChangeClothesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeClothesOutcome(rsp);
        else
            return ChangeClothesOutcome(o.GetError());
    }
    else
    {
        return ChangeClothesOutcome(outcome.GetError());
    }
}

void AiartClient::ChangeClothesAsync(const ChangeClothesRequest& request, const ChangeClothesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChangeClothes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::ChangeClothesOutcomeCallable AiartClient::ChangeClothesCallable(const ChangeClothesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChangeClothesOutcome()>>(
        [this, request]()
        {
            return this->ChangeClothes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::GenerateAvatarOutcome AiartClient::GenerateAvatar(const GenerateAvatarRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateAvatar");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateAvatarResponse rsp = GenerateAvatarResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateAvatarOutcome(rsp);
        else
            return GenerateAvatarOutcome(o.GetError());
    }
    else
    {
        return GenerateAvatarOutcome(outcome.GetError());
    }
}

void AiartClient::GenerateAvatarAsync(const GenerateAvatarRequest& request, const GenerateAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateAvatar(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::GenerateAvatarOutcomeCallable AiartClient::GenerateAvatarCallable(const GenerateAvatarRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateAvatarOutcome()>>(
        [this, request]()
        {
            return this->GenerateAvatar(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::ImageInpaintingRemovalOutcome AiartClient::ImageInpaintingRemoval(const ImageInpaintingRemovalRequest &request)
{
    auto outcome = MakeRequest(request, "ImageInpaintingRemoval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageInpaintingRemovalResponse rsp = ImageInpaintingRemovalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageInpaintingRemovalOutcome(rsp);
        else
            return ImageInpaintingRemovalOutcome(o.GetError());
    }
    else
    {
        return ImageInpaintingRemovalOutcome(outcome.GetError());
    }
}

void AiartClient::ImageInpaintingRemovalAsync(const ImageInpaintingRemovalRequest& request, const ImageInpaintingRemovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageInpaintingRemoval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::ImageInpaintingRemovalOutcomeCallable AiartClient::ImageInpaintingRemovalCallable(const ImageInpaintingRemovalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageInpaintingRemovalOutcome()>>(
        [this, request]()
        {
            return this->ImageInpaintingRemoval(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::ImageOutpaintingOutcome AiartClient::ImageOutpainting(const ImageOutpaintingRequest &request)
{
    auto outcome = MakeRequest(request, "ImageOutpainting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageOutpaintingResponse rsp = ImageOutpaintingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageOutpaintingOutcome(rsp);
        else
            return ImageOutpaintingOutcome(o.GetError());
    }
    else
    {
        return ImageOutpaintingOutcome(outcome.GetError());
    }
}

void AiartClient::ImageOutpaintingAsync(const ImageOutpaintingRequest& request, const ImageOutpaintingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageOutpainting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::ImageOutpaintingOutcomeCallable AiartClient::ImageOutpaintingCallable(const ImageOutpaintingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageOutpaintingOutcome()>>(
        [this, request]()
        {
            return this->ImageOutpainting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

AiartClient::QueryDrawPortraitJobOutcome AiartClient::QueryDrawPortraitJob(const QueryDrawPortraitJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDrawPortraitJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDrawPortraitJobResponse rsp = QueryDrawPortraitJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDrawPortraitJobOutcome(rsp);
        else
            return QueryDrawPortraitJobOutcome(o.GetError());
    }
    else
    {
        return QueryDrawPortraitJobOutcome(outcome.GetError());
    }
}

void AiartClient::QueryDrawPortraitJobAsync(const QueryDrawPortraitJobRequest& request, const QueryDrawPortraitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryDrawPortraitJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::QueryDrawPortraitJobOutcomeCallable AiartClient::QueryDrawPortraitJobCallable(const QueryDrawPortraitJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryDrawPortraitJobOutcome()>>(
        [this, request]()
        {
            return this->QueryDrawPortraitJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::QueryGlamPicJobOutcome AiartClient::QueryGlamPicJob(const QueryGlamPicJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryGlamPicJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryGlamPicJobResponse rsp = QueryGlamPicJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryGlamPicJobOutcome(rsp);
        else
            return QueryGlamPicJobOutcome(o.GetError());
    }
    else
    {
        return QueryGlamPicJobOutcome(outcome.GetError());
    }
}

void AiartClient::QueryGlamPicJobAsync(const QueryGlamPicJobRequest& request, const QueryGlamPicJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryGlamPicJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::QueryGlamPicJobOutcomeCallable AiartClient::QueryGlamPicJobCallable(const QueryGlamPicJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryGlamPicJobOutcome()>>(
        [this, request]()
        {
            return this->QueryGlamPicJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::QueryMemeJobOutcome AiartClient::QueryMemeJob(const QueryMemeJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMemeJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMemeJobResponse rsp = QueryMemeJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMemeJobOutcome(rsp);
        else
            return QueryMemeJobOutcome(o.GetError());
    }
    else
    {
        return QueryMemeJobOutcome(outcome.GetError());
    }
}

void AiartClient::QueryMemeJobAsync(const QueryMemeJobRequest& request, const QueryMemeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMemeJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::QueryMemeJobOutcomeCallable AiartClient::QueryMemeJobCallable(const QueryMemeJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMemeJobOutcome()>>(
        [this, request]()
        {
            return this->QueryMemeJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::QueryTextToImageProJobOutcome AiartClient::QueryTextToImageProJob(const QueryTextToImageProJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTextToImageProJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTextToImageProJobResponse rsp = QueryTextToImageProJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTextToImageProJobOutcome(rsp);
        else
            return QueryTextToImageProJobOutcome(o.GetError());
    }
    else
    {
        return QueryTextToImageProJobOutcome(outcome.GetError());
    }
}

void AiartClient::QueryTextToImageProJobAsync(const QueryTextToImageProJobRequest& request, const QueryTextToImageProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryTextToImageProJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::QueryTextToImageProJobOutcomeCallable AiartClient::QueryTextToImageProJobCallable(const QueryTextToImageProJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryTextToImageProJobOutcome()>>(
        [this, request]()
        {
            return this->QueryTextToImageProJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::QueryTrainPortraitModelJobOutcome AiartClient::QueryTrainPortraitModelJob(const QueryTrainPortraitModelJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTrainPortraitModelJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTrainPortraitModelJobResponse rsp = QueryTrainPortraitModelJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTrainPortraitModelJobOutcome(rsp);
        else
            return QueryTrainPortraitModelJobOutcome(o.GetError());
    }
    else
    {
        return QueryTrainPortraitModelJobOutcome(outcome.GetError());
    }
}

void AiartClient::QueryTrainPortraitModelJobAsync(const QueryTrainPortraitModelJobRequest& request, const QueryTrainPortraitModelJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryTrainPortraitModelJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::QueryTrainPortraitModelJobOutcomeCallable AiartClient::QueryTrainPortraitModelJobCallable(const QueryTrainPortraitModelJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryTrainPortraitModelJobOutcome()>>(
        [this, request]()
        {
            return this->QueryTrainPortraitModelJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::RefineImageOutcome AiartClient::RefineImage(const RefineImageRequest &request)
{
    auto outcome = MakeRequest(request, "RefineImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefineImageResponse rsp = RefineImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefineImageOutcome(rsp);
        else
            return RefineImageOutcome(o.GetError());
    }
    else
    {
        return RefineImageOutcome(outcome.GetError());
    }
}

void AiartClient::RefineImageAsync(const RefineImageRequest& request, const RefineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefineImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::RefineImageOutcomeCallable AiartClient::RefineImageCallable(const RefineImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefineImageOutcome()>>(
        [this, request]()
        {
            return this->RefineImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::ReplaceBackgroundOutcome AiartClient::ReplaceBackground(const ReplaceBackgroundRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceBackground");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceBackgroundResponse rsp = ReplaceBackgroundResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceBackgroundOutcome(rsp);
        else
            return ReplaceBackgroundOutcome(o.GetError());
    }
    else
    {
        return ReplaceBackgroundOutcome(outcome.GetError());
    }
}

void AiartClient::ReplaceBackgroundAsync(const ReplaceBackgroundRequest& request, const ReplaceBackgroundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceBackground(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::ReplaceBackgroundOutcomeCallable AiartClient::ReplaceBackgroundCallable(const ReplaceBackgroundRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceBackgroundOutcome()>>(
        [this, request]()
        {
            return this->ReplaceBackground(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::SketchToImageOutcome AiartClient::SketchToImage(const SketchToImageRequest &request)
{
    auto outcome = MakeRequest(request, "SketchToImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SketchToImageResponse rsp = SketchToImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SketchToImageOutcome(rsp);
        else
            return SketchToImageOutcome(o.GetError());
    }
    else
    {
        return SketchToImageOutcome(outcome.GetError());
    }
}

void AiartClient::SketchToImageAsync(const SketchToImageRequest& request, const SketchToImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SketchToImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::SketchToImageOutcomeCallable AiartClient::SketchToImageCallable(const SketchToImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SketchToImageOutcome()>>(
        [this, request]()
        {
            return this->SketchToImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::SubmitDrawPortraitJobOutcome AiartClient::SubmitDrawPortraitJob(const SubmitDrawPortraitJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitDrawPortraitJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitDrawPortraitJobResponse rsp = SubmitDrawPortraitJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitDrawPortraitJobOutcome(rsp);
        else
            return SubmitDrawPortraitJobOutcome(o.GetError());
    }
    else
    {
        return SubmitDrawPortraitJobOutcome(outcome.GetError());
    }
}

void AiartClient::SubmitDrawPortraitJobAsync(const SubmitDrawPortraitJobRequest& request, const SubmitDrawPortraitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitDrawPortraitJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::SubmitDrawPortraitJobOutcomeCallable AiartClient::SubmitDrawPortraitJobCallable(const SubmitDrawPortraitJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitDrawPortraitJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitDrawPortraitJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::SubmitGlamPicJobOutcome AiartClient::SubmitGlamPicJob(const SubmitGlamPicJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitGlamPicJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitGlamPicJobResponse rsp = SubmitGlamPicJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitGlamPicJobOutcome(rsp);
        else
            return SubmitGlamPicJobOutcome(o.GetError());
    }
    else
    {
        return SubmitGlamPicJobOutcome(outcome.GetError());
    }
}

void AiartClient::SubmitGlamPicJobAsync(const SubmitGlamPicJobRequest& request, const SubmitGlamPicJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitGlamPicJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::SubmitGlamPicJobOutcomeCallable AiartClient::SubmitGlamPicJobCallable(const SubmitGlamPicJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitGlamPicJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitGlamPicJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::SubmitMemeJobOutcome AiartClient::SubmitMemeJob(const SubmitMemeJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitMemeJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitMemeJobResponse rsp = SubmitMemeJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitMemeJobOutcome(rsp);
        else
            return SubmitMemeJobOutcome(o.GetError());
    }
    else
    {
        return SubmitMemeJobOutcome(outcome.GetError());
    }
}

void AiartClient::SubmitMemeJobAsync(const SubmitMemeJobRequest& request, const SubmitMemeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitMemeJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::SubmitMemeJobOutcomeCallable AiartClient::SubmitMemeJobCallable(const SubmitMemeJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitMemeJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitMemeJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::SubmitTextToImageProJobOutcome AiartClient::SubmitTextToImageProJob(const SubmitTextToImageProJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTextToImageProJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTextToImageProJobResponse rsp = SubmitTextToImageProJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTextToImageProJobOutcome(rsp);
        else
            return SubmitTextToImageProJobOutcome(o.GetError());
    }
    else
    {
        return SubmitTextToImageProJobOutcome(outcome.GetError());
    }
}

void AiartClient::SubmitTextToImageProJobAsync(const SubmitTextToImageProJobRequest& request, const SubmitTextToImageProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitTextToImageProJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::SubmitTextToImageProJobOutcomeCallable AiartClient::SubmitTextToImageProJobCallable(const SubmitTextToImageProJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitTextToImageProJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitTextToImageProJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AiartClient::SubmitTrainPortraitModelJobOutcome AiartClient::SubmitTrainPortraitModelJob(const SubmitTrainPortraitModelJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTrainPortraitModelJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTrainPortraitModelJobResponse rsp = SubmitTrainPortraitModelJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTrainPortraitModelJobOutcome(rsp);
        else
            return SubmitTrainPortraitModelJobOutcome(o.GetError());
    }
    else
    {
        return SubmitTrainPortraitModelJobOutcome(outcome.GetError());
    }
}

void AiartClient::SubmitTrainPortraitModelJobAsync(const SubmitTrainPortraitModelJobRequest& request, const SubmitTrainPortraitModelJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitTrainPortraitModelJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::SubmitTrainPortraitModelJobOutcomeCallable AiartClient::SubmitTrainPortraitModelJobCallable(const SubmitTrainPortraitModelJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitTrainPortraitModelJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitTrainPortraitModelJob(request);
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

AiartClient::UploadTrainPortraitImagesOutcome AiartClient::UploadTrainPortraitImages(const UploadTrainPortraitImagesRequest &request)
{
    auto outcome = MakeRequest(request, "UploadTrainPortraitImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadTrainPortraitImagesResponse rsp = UploadTrainPortraitImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadTrainPortraitImagesOutcome(rsp);
        else
            return UploadTrainPortraitImagesOutcome(o.GetError());
    }
    else
    {
        return UploadTrainPortraitImagesOutcome(outcome.GetError());
    }
}

void AiartClient::UploadTrainPortraitImagesAsync(const UploadTrainPortraitImagesRequest& request, const UploadTrainPortraitImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadTrainPortraitImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AiartClient::UploadTrainPortraitImagesOutcomeCallable AiartClient::UploadTrainPortraitImagesCallable(const UploadTrainPortraitImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadTrainPortraitImagesOutcome()>>(
        [this, request]()
        {
            return this->UploadTrainPortraitImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


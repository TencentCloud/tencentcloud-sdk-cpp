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
    using Req = const ChangeClothesRequest&;
    using Resp = ChangeClothesResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeClothes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::ChangeClothesOutcomeCallable AiartClient::ChangeClothesCallable(const ChangeClothesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeClothesOutcome>>();
    ChangeClothesAsync(
    request,
    [prom](
        const AiartClient*,
        const ChangeClothesRequest&,
        ChangeClothesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AiartClient::DescribeTemplateToImageJobOutcome AiartClient::DescribeTemplateToImageJob(const DescribeTemplateToImageJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplateToImageJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateToImageJobResponse rsp = DescribeTemplateToImageJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateToImageJobOutcome(rsp);
        else
            return DescribeTemplateToImageJobOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateToImageJobOutcome(outcome.GetError());
    }
}

void AiartClient::DescribeTemplateToImageJobAsync(const DescribeTemplateToImageJobRequest& request, const DescribeTemplateToImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTemplateToImageJobRequest&;
    using Resp = DescribeTemplateToImageJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTemplateToImageJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::DescribeTemplateToImageJobOutcomeCallable AiartClient::DescribeTemplateToImageJobCallable(const DescribeTemplateToImageJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTemplateToImageJobOutcome>>();
    DescribeTemplateToImageJobAsync(
    request,
    [prom](
        const AiartClient*,
        const DescribeTemplateToImageJobRequest&,
        DescribeTemplateToImageJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GenerateAvatarRequest&;
    using Resp = GenerateAvatarResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateAvatar", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::GenerateAvatarOutcomeCallable AiartClient::GenerateAvatarCallable(const GenerateAvatarRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateAvatarOutcome>>();
    GenerateAvatarAsync(
    request,
    [prom](
        const AiartClient*,
        const GenerateAvatarRequest&,
        GenerateAvatarOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImageInpaintingRemovalRequest&;
    using Resp = ImageInpaintingRemovalResponse;

    DoRequestAsync<Req, Resp>(
        "ImageInpaintingRemoval", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::ImageInpaintingRemovalOutcomeCallable AiartClient::ImageInpaintingRemovalCallable(const ImageInpaintingRemovalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageInpaintingRemovalOutcome>>();
    ImageInpaintingRemovalAsync(
    request,
    [prom](
        const AiartClient*,
        const ImageInpaintingRemovalRequest&,
        ImageInpaintingRemovalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImageOutpaintingRequest&;
    using Resp = ImageOutpaintingResponse;

    DoRequestAsync<Req, Resp>(
        "ImageOutpainting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::ImageOutpaintingOutcomeCallable AiartClient::ImageOutpaintingCallable(const ImageOutpaintingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageOutpaintingOutcome>>();
    ImageOutpaintingAsync(
    request,
    [prom](
        const AiartClient*,
        const ImageOutpaintingRequest&,
        ImageOutpaintingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImageToImageRequest&;
    using Resp = ImageToImageResponse;

    DoRequestAsync<Req, Resp>(
        "ImageToImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::ImageToImageOutcomeCallable AiartClient::ImageToImageCallable(const ImageToImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageToImageOutcome>>();
    ImageToImageAsync(
    request,
    [prom](
        const AiartClient*,
        const ImageToImageRequest&,
        ImageToImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QueryDrawPortraitJobRequest&;
    using Resp = QueryDrawPortraitJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryDrawPortraitJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::QueryDrawPortraitJobOutcomeCallable AiartClient::QueryDrawPortraitJobCallable(const QueryDrawPortraitJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryDrawPortraitJobOutcome>>();
    QueryDrawPortraitJobAsync(
    request,
    [prom](
        const AiartClient*,
        const QueryDrawPortraitJobRequest&,
        QueryDrawPortraitJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QueryGlamPicJobRequest&;
    using Resp = QueryGlamPicJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryGlamPicJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::QueryGlamPicJobOutcomeCallable AiartClient::QueryGlamPicJobCallable(const QueryGlamPicJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryGlamPicJobOutcome>>();
    QueryGlamPicJobAsync(
    request,
    [prom](
        const AiartClient*,
        const QueryGlamPicJobRequest&,
        QueryGlamPicJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QueryMemeJobRequest&;
    using Resp = QueryMemeJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMemeJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::QueryMemeJobOutcomeCallable AiartClient::QueryMemeJobCallable(const QueryMemeJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMemeJobOutcome>>();
    QueryMemeJobAsync(
    request,
    [prom](
        const AiartClient*,
        const QueryMemeJobRequest&,
        QueryMemeJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AiartClient::QueryTextToImageJobOutcome AiartClient::QueryTextToImageJob(const QueryTextToImageJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTextToImageJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTextToImageJobResponse rsp = QueryTextToImageJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTextToImageJobOutcome(rsp);
        else
            return QueryTextToImageJobOutcome(o.GetError());
    }
    else
    {
        return QueryTextToImageJobOutcome(outcome.GetError());
    }
}

void AiartClient::QueryTextToImageJobAsync(const QueryTextToImageJobRequest& request, const QueryTextToImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryTextToImageJobRequest&;
    using Resp = QueryTextToImageJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryTextToImageJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::QueryTextToImageJobOutcomeCallable AiartClient::QueryTextToImageJobCallable(const QueryTextToImageJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryTextToImageJobOutcome>>();
    QueryTextToImageJobAsync(
    request,
    [prom](
        const AiartClient*,
        const QueryTextToImageJobRequest&,
        QueryTextToImageJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QueryTextToImageProJobRequest&;
    using Resp = QueryTextToImageProJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryTextToImageProJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::QueryTextToImageProJobOutcomeCallable AiartClient::QueryTextToImageProJobCallable(const QueryTextToImageProJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryTextToImageProJobOutcome>>();
    QueryTextToImageProJobAsync(
    request,
    [prom](
        const AiartClient*,
        const QueryTextToImageProJobRequest&,
        QueryTextToImageProJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QueryTrainPortraitModelJobRequest&;
    using Resp = QueryTrainPortraitModelJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryTrainPortraitModelJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::QueryTrainPortraitModelJobOutcomeCallable AiartClient::QueryTrainPortraitModelJobCallable(const QueryTrainPortraitModelJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryTrainPortraitModelJobOutcome>>();
    QueryTrainPortraitModelJobAsync(
    request,
    [prom](
        const AiartClient*,
        const QueryTrainPortraitModelJobRequest&,
        QueryTrainPortraitModelJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RefineImageRequest&;
    using Resp = RefineImageResponse;

    DoRequestAsync<Req, Resp>(
        "RefineImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::RefineImageOutcomeCallable AiartClient::RefineImageCallable(const RefineImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefineImageOutcome>>();
    RefineImageAsync(
    request,
    [prom](
        const AiartClient*,
        const RefineImageRequest&,
        RefineImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ReplaceBackgroundRequest&;
    using Resp = ReplaceBackgroundResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceBackground", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::ReplaceBackgroundOutcomeCallable AiartClient::ReplaceBackgroundCallable(const ReplaceBackgroundRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceBackgroundOutcome>>();
    ReplaceBackgroundAsync(
    request,
    [prom](
        const AiartClient*,
        const ReplaceBackgroundRequest&,
        ReplaceBackgroundOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SketchToImageRequest&;
    using Resp = SketchToImageResponse;

    DoRequestAsync<Req, Resp>(
        "SketchToImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::SketchToImageOutcomeCallable AiartClient::SketchToImageCallable(const SketchToImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SketchToImageOutcome>>();
    SketchToImageAsync(
    request,
    [prom](
        const AiartClient*,
        const SketchToImageRequest&,
        SketchToImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SubmitDrawPortraitJobRequest&;
    using Resp = SubmitDrawPortraitJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitDrawPortraitJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::SubmitDrawPortraitJobOutcomeCallable AiartClient::SubmitDrawPortraitJobCallable(const SubmitDrawPortraitJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitDrawPortraitJobOutcome>>();
    SubmitDrawPortraitJobAsync(
    request,
    [prom](
        const AiartClient*,
        const SubmitDrawPortraitJobRequest&,
        SubmitDrawPortraitJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SubmitGlamPicJobRequest&;
    using Resp = SubmitGlamPicJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitGlamPicJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::SubmitGlamPicJobOutcomeCallable AiartClient::SubmitGlamPicJobCallable(const SubmitGlamPicJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitGlamPicJobOutcome>>();
    SubmitGlamPicJobAsync(
    request,
    [prom](
        const AiartClient*,
        const SubmitGlamPicJobRequest&,
        SubmitGlamPicJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SubmitMemeJobRequest&;
    using Resp = SubmitMemeJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitMemeJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::SubmitMemeJobOutcomeCallable AiartClient::SubmitMemeJobCallable(const SubmitMemeJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitMemeJobOutcome>>();
    SubmitMemeJobAsync(
    request,
    [prom](
        const AiartClient*,
        const SubmitMemeJobRequest&,
        SubmitMemeJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AiartClient::SubmitTemplateToImageJobOutcome AiartClient::SubmitTemplateToImageJob(const SubmitTemplateToImageJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTemplateToImageJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTemplateToImageJobResponse rsp = SubmitTemplateToImageJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTemplateToImageJobOutcome(rsp);
        else
            return SubmitTemplateToImageJobOutcome(o.GetError());
    }
    else
    {
        return SubmitTemplateToImageJobOutcome(outcome.GetError());
    }
}

void AiartClient::SubmitTemplateToImageJobAsync(const SubmitTemplateToImageJobRequest& request, const SubmitTemplateToImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTemplateToImageJobRequest&;
    using Resp = SubmitTemplateToImageJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTemplateToImageJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::SubmitTemplateToImageJobOutcomeCallable AiartClient::SubmitTemplateToImageJobCallable(const SubmitTemplateToImageJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTemplateToImageJobOutcome>>();
    SubmitTemplateToImageJobAsync(
    request,
    [prom](
        const AiartClient*,
        const SubmitTemplateToImageJobRequest&,
        SubmitTemplateToImageJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AiartClient::SubmitTextToImageJobOutcome AiartClient::SubmitTextToImageJob(const SubmitTextToImageJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTextToImageJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTextToImageJobResponse rsp = SubmitTextToImageJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTextToImageJobOutcome(rsp);
        else
            return SubmitTextToImageJobOutcome(o.GetError());
    }
    else
    {
        return SubmitTextToImageJobOutcome(outcome.GetError());
    }
}

void AiartClient::SubmitTextToImageJobAsync(const SubmitTextToImageJobRequest& request, const SubmitTextToImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTextToImageJobRequest&;
    using Resp = SubmitTextToImageJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTextToImageJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::SubmitTextToImageJobOutcomeCallable AiartClient::SubmitTextToImageJobCallable(const SubmitTextToImageJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTextToImageJobOutcome>>();
    SubmitTextToImageJobAsync(
    request,
    [prom](
        const AiartClient*,
        const SubmitTextToImageJobRequest&,
        SubmitTextToImageJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SubmitTextToImageProJobRequest&;
    using Resp = SubmitTextToImageProJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTextToImageProJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::SubmitTextToImageProJobOutcomeCallable AiartClient::SubmitTextToImageProJobCallable(const SubmitTextToImageProJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTextToImageProJobOutcome>>();
    SubmitTextToImageProJobAsync(
    request,
    [prom](
        const AiartClient*,
        const SubmitTextToImageProJobRequest&,
        SubmitTextToImageProJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SubmitTrainPortraitModelJobRequest&;
    using Resp = SubmitTrainPortraitModelJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTrainPortraitModelJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::SubmitTrainPortraitModelJobOutcomeCallable AiartClient::SubmitTrainPortraitModelJobCallable(const SubmitTrainPortraitModelJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTrainPortraitModelJobOutcome>>();
    SubmitTrainPortraitModelJobAsync(
    request,
    [prom](
        const AiartClient*,
        const SubmitTrainPortraitModelJobRequest&,
        SubmitTrainPortraitModelJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AiartClient::TextToImageLiteOutcome AiartClient::TextToImageLite(const TextToImageLiteRequest &request)
{
    auto outcome = MakeRequest(request, "TextToImageLite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextToImageLiteResponse rsp = TextToImageLiteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextToImageLiteOutcome(rsp);
        else
            return TextToImageLiteOutcome(o.GetError());
    }
    else
    {
        return TextToImageLiteOutcome(outcome.GetError());
    }
}

void AiartClient::TextToImageLiteAsync(const TextToImageLiteRequest& request, const TextToImageLiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextToImageLiteRequest&;
    using Resp = TextToImageLiteResponse;

    DoRequestAsync<Req, Resp>(
        "TextToImageLite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::TextToImageLiteOutcomeCallable AiartClient::TextToImageLiteCallable(const TextToImageLiteRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextToImageLiteOutcome>>();
    TextToImageLiteAsync(
    request,
    [prom](
        const AiartClient*,
        const TextToImageLiteRequest&,
        TextToImageLiteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AiartClient::TextToImageRapidOutcome AiartClient::TextToImageRapid(const TextToImageRapidRequest &request)
{
    auto outcome = MakeRequest(request, "TextToImageRapid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextToImageRapidResponse rsp = TextToImageRapidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextToImageRapidOutcome(rsp);
        else
            return TextToImageRapidOutcome(o.GetError());
    }
    else
    {
        return TextToImageRapidOutcome(outcome.GetError());
    }
}

void AiartClient::TextToImageRapidAsync(const TextToImageRapidRequest& request, const TextToImageRapidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextToImageRapidRequest&;
    using Resp = TextToImageRapidResponse;

    DoRequestAsync<Req, Resp>(
        "TextToImageRapid", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::TextToImageRapidOutcomeCallable AiartClient::TextToImageRapidCallable(const TextToImageRapidRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextToImageRapidOutcome>>();
    TextToImageRapidAsync(
    request,
    [prom](
        const AiartClient*,
        const TextToImageRapidRequest&,
        TextToImageRapidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UploadTrainPortraitImagesRequest&;
    using Resp = UploadTrainPortraitImagesResponse;

    DoRequestAsync<Req, Resp>(
        "UploadTrainPortraitImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AiartClient::UploadTrainPortraitImagesOutcomeCallable AiartClient::UploadTrainPortraitImagesCallable(const UploadTrainPortraitImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadTrainPortraitImagesOutcome>>();
    UploadTrainPortraitImagesAsync(
    request,
    [prom](
        const AiartClient*,
        const UploadTrainPortraitImagesRequest&,
        UploadTrainPortraitImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


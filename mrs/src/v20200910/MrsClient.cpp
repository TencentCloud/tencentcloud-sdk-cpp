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
    using Req = const DrugInstructionObjectRequest&;
    using Resp = DrugInstructionObjectResponse;

    DoRequestAsync<Req, Resp>(
        "DrugInstructionObject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::DrugInstructionObjectOutcomeCallable MrsClient::DrugInstructionObjectCallable(const DrugInstructionObjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DrugInstructionObjectOutcome>>();
    DrugInstructionObjectAsync(
    request,
    [prom](
        const MrsClient*,
        const DrugInstructionObjectRequest&,
        DrugInstructionObjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImageMaskRequest&;
    using Resp = ImageMaskResponse;

    DoRequestAsync<Req, Resp>(
        "ImageMask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::ImageMaskOutcomeCallable MrsClient::ImageMaskCallable(const ImageMaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageMaskOutcome>>();
    ImageMaskAsync(
    request,
    [prom](
        const MrsClient*,
        const ImageMaskRequest&,
        ImageMaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImageMaskAsyncRequest&;
    using Resp = ImageMaskAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "ImageMaskAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::ImageMaskAsyncOutcomeCallable MrsClient::ImageMaskAsyncCallable(const ImageMaskAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageMaskAsyncOutcome>>();
    ImageMaskAsyncAsync(
    request,
    [prom](
        const MrsClient*,
        const ImageMaskAsyncRequest&,
        ImageMaskAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImageMaskAsyncGetResultRequest&;
    using Resp = ImageMaskAsyncGetResultResponse;

    DoRequestAsync<Req, Resp>(
        "ImageMaskAsyncGetResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::ImageMaskAsyncGetResultOutcomeCallable MrsClient::ImageMaskAsyncGetResultCallable(const ImageMaskAsyncGetResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageMaskAsyncGetResultOutcome>>();
    ImageMaskAsyncGetResultAsync(
    request,
    [prom](
        const MrsClient*,
        const ImageMaskAsyncGetResultRequest&,
        ImageMaskAsyncGetResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImageToClassRequest&;
    using Resp = ImageToClassResponse;

    DoRequestAsync<Req, Resp>(
        "ImageToClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::ImageToClassOutcomeCallable MrsClient::ImageToClassCallable(const ImageToClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageToClassOutcome>>();
    ImageToClassAsync(
    request,
    [prom](
        const MrsClient*,
        const ImageToClassRequest&,
        ImageToClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImageToObjectRequest&;
    using Resp = ImageToObjectResponse;

    DoRequestAsync<Req, Resp>(
        "ImageToObject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::ImageToObjectOutcomeCallable MrsClient::ImageToObjectCallable(const ImageToObjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageToObjectOutcome>>();
    ImageToObjectAsync(
    request,
    [prom](
        const MrsClient*,
        const ImageToObjectRequest&,
        ImageToObjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TextToClassRequest&;
    using Resp = TextToClassResponse;

    DoRequestAsync<Req, Resp>(
        "TextToClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::TextToClassOutcomeCallable MrsClient::TextToClassCallable(const TextToClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextToClassOutcome>>();
    TextToClassAsync(
    request,
    [prom](
        const MrsClient*,
        const TextToClassRequest&,
        TextToClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TextToObjectRequest&;
    using Resp = TextToObjectResponse;

    DoRequestAsync<Req, Resp>(
        "TextToObject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::TextToObjectOutcomeCallable MrsClient::TextToObjectCallable(const TextToObjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextToObjectOutcome>>();
    TextToObjectAsync(
    request,
    [prom](
        const MrsClient*,
        const TextToObjectRequest&,
        TextToObjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TurnPDFToObjectRequest&;
    using Resp = TurnPDFToObjectResponse;

    DoRequestAsync<Req, Resp>(
        "TurnPDFToObject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::TurnPDFToObjectOutcomeCallable MrsClient::TurnPDFToObjectCallable(const TurnPDFToObjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<TurnPDFToObjectOutcome>>();
    TurnPDFToObjectAsync(
    request,
    [prom](
        const MrsClient*,
        const TurnPDFToObjectRequest&,
        TurnPDFToObjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TurnPDFToObjectAsyncRequest&;
    using Resp = TurnPDFToObjectAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "TurnPDFToObjectAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::TurnPDFToObjectAsyncOutcomeCallable MrsClient::TurnPDFToObjectAsyncCallable(const TurnPDFToObjectAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<TurnPDFToObjectAsyncOutcome>>();
    TurnPDFToObjectAsyncAsync(
    request,
    [prom](
        const MrsClient*,
        const TurnPDFToObjectAsyncRequest&,
        TurnPDFToObjectAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TurnPDFToObjectAsyncGetResultRequest&;
    using Resp = TurnPDFToObjectAsyncGetResultResponse;

    DoRequestAsync<Req, Resp>(
        "TurnPDFToObjectAsyncGetResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MrsClient::TurnPDFToObjectAsyncGetResultOutcomeCallable MrsClient::TurnPDFToObjectAsyncGetResultCallable(const TurnPDFToObjectAsyncGetResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<TurnPDFToObjectAsyncGetResultOutcome>>();
    TurnPDFToObjectAsyncGetResultAsync(
    request,
    [prom](
        const MrsClient*,
        const TurnPDFToObjectAsyncGetResultRequest&,
        TurnPDFToObjectAsyncGetResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


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

#include <tencentcloud/fmu/v20191213/FmuClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Fmu::V20191213;
using namespace TencentCloud::Fmu::V20191213::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-12-13";
    const string ENDPOINT = "fmu.tencentcloudapi.com";
}

FmuClient::FmuClient(const Credential &credential, const string &region) :
    FmuClient(credential, region, ClientProfile())
{
}

FmuClient::FmuClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FmuClient::BeautifyPicOutcome FmuClient::BeautifyPic(const BeautifyPicRequest &request)
{
    auto outcome = MakeRequest(request, "BeautifyPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BeautifyPicResponse rsp = BeautifyPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BeautifyPicOutcome(rsp);
        else
            return BeautifyPicOutcome(o.GetError());
    }
    else
    {
        return BeautifyPicOutcome(outcome.GetError());
    }
}

void FmuClient::BeautifyPicAsync(const BeautifyPicRequest& request, const BeautifyPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BeautifyPicRequest&;
    using Resp = BeautifyPicResponse;

    DoRequestAsync<Req, Resp>(
        "BeautifyPic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FmuClient::BeautifyPicOutcomeCallable FmuClient::BeautifyPicCallable(const BeautifyPicRequest &request)
{
    const auto prom = std::make_shared<std::promise<BeautifyPicOutcome>>();
    BeautifyPicAsync(
    request,
    [prom](
        const FmuClient*,
        const BeautifyPicRequest&,
        BeautifyPicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FmuClient::CreateModelOutcome FmuClient::CreateModel(const CreateModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelResponse rsp = CreateModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelOutcome(rsp);
        else
            return CreateModelOutcome(o.GetError());
    }
    else
    {
        return CreateModelOutcome(outcome.GetError());
    }
}

void FmuClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModelRequest&;
    using Resp = CreateModelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FmuClient::CreateModelOutcomeCallable FmuClient::CreateModelCallable(const CreateModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModelOutcome>>();
    CreateModelAsync(
    request,
    [prom](
        const FmuClient*,
        const CreateModelRequest&,
        CreateModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FmuClient::DeleteModelOutcome FmuClient::DeleteModel(const DeleteModelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelResponse rsp = DeleteModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelOutcome(rsp);
        else
            return DeleteModelOutcome(o.GetError());
    }
    else
    {
        return DeleteModelOutcome(outcome.GetError());
    }
}

void FmuClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteModelRequest&;
    using Resp = DeleteModelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FmuClient::DeleteModelOutcomeCallable FmuClient::DeleteModelCallable(const DeleteModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteModelOutcome>>();
    DeleteModelAsync(
    request,
    [prom](
        const FmuClient*,
        const DeleteModelRequest&,
        DeleteModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FmuClient::GetModelListOutcome FmuClient::GetModelList(const GetModelListRequest &request)
{
    auto outcome = MakeRequest(request, "GetModelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetModelListResponse rsp = GetModelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetModelListOutcome(rsp);
        else
            return GetModelListOutcome(o.GetError());
    }
    else
    {
        return GetModelListOutcome(outcome.GetError());
    }
}

void FmuClient::GetModelListAsync(const GetModelListRequest& request, const GetModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetModelListRequest&;
    using Resp = GetModelListResponse;

    DoRequestAsync<Req, Resp>(
        "GetModelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FmuClient::GetModelListOutcomeCallable FmuClient::GetModelListCallable(const GetModelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetModelListOutcome>>();
    GetModelListAsync(
    request,
    [prom](
        const FmuClient*,
        const GetModelListRequest&,
        GetModelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FmuClient::StyleImageOutcome FmuClient::StyleImage(const StyleImageRequest &request)
{
    auto outcome = MakeRequest(request, "StyleImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StyleImageResponse rsp = StyleImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StyleImageOutcome(rsp);
        else
            return StyleImageOutcome(o.GetError());
    }
    else
    {
        return StyleImageOutcome(outcome.GetError());
    }
}

void FmuClient::StyleImageAsync(const StyleImageRequest& request, const StyleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StyleImageRequest&;
    using Resp = StyleImageResponse;

    DoRequestAsync<Req, Resp>(
        "StyleImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FmuClient::StyleImageOutcomeCallable FmuClient::StyleImageCallable(const StyleImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<StyleImageOutcome>>();
    StyleImageAsync(
    request,
    [prom](
        const FmuClient*,
        const StyleImageRequest&,
        StyleImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FmuClient::StyleImageProOutcome FmuClient::StyleImagePro(const StyleImageProRequest &request)
{
    auto outcome = MakeRequest(request, "StyleImagePro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StyleImageProResponse rsp = StyleImageProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StyleImageProOutcome(rsp);
        else
            return StyleImageProOutcome(o.GetError());
    }
    else
    {
        return StyleImageProOutcome(outcome.GetError());
    }
}

void FmuClient::StyleImageProAsync(const StyleImageProRequest& request, const StyleImageProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StyleImageProRequest&;
    using Resp = StyleImageProResponse;

    DoRequestAsync<Req, Resp>(
        "StyleImagePro", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FmuClient::StyleImageProOutcomeCallable FmuClient::StyleImageProCallable(const StyleImageProRequest &request)
{
    const auto prom = std::make_shared<std::promise<StyleImageProOutcome>>();
    StyleImageProAsync(
    request,
    [prom](
        const FmuClient*,
        const StyleImageProRequest&,
        StyleImageProOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FmuClient::TryLipstickPicOutcome FmuClient::TryLipstickPic(const TryLipstickPicRequest &request)
{
    auto outcome = MakeRequest(request, "TryLipstickPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TryLipstickPicResponse rsp = TryLipstickPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TryLipstickPicOutcome(rsp);
        else
            return TryLipstickPicOutcome(o.GetError());
    }
    else
    {
        return TryLipstickPicOutcome(outcome.GetError());
    }
}

void FmuClient::TryLipstickPicAsync(const TryLipstickPicRequest& request, const TryLipstickPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TryLipstickPicRequest&;
    using Resp = TryLipstickPicResponse;

    DoRequestAsync<Req, Resp>(
        "TryLipstickPic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FmuClient::TryLipstickPicOutcomeCallable FmuClient::TryLipstickPicCallable(const TryLipstickPicRequest &request)
{
    const auto prom = std::make_shared<std::promise<TryLipstickPicOutcome>>();
    TryLipstickPicAsync(
    request,
    [prom](
        const FmuClient*,
        const TryLipstickPicRequest&,
        TryLipstickPicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


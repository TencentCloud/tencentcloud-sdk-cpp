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

#include <tencentcloud/ft/v20200304/FtClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ft::V20200304;
using namespace TencentCloud::Ft::V20200304::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-04";
    const string ENDPOINT = "ft.tencentcloudapi.com";
}

FtClient::FtClient(const Credential &credential, const string &region) :
    FtClient(credential, region, ClientProfile())
{
}

FtClient::FtClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FtClient::CancelFaceMorphJobOutcome FtClient::CancelFaceMorphJob(const CancelFaceMorphJobRequest &request)
{
    auto outcome = MakeRequest(request, "CancelFaceMorphJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelFaceMorphJobResponse rsp = CancelFaceMorphJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelFaceMorphJobOutcome(rsp);
        else
            return CancelFaceMorphJobOutcome(o.GetError());
    }
    else
    {
        return CancelFaceMorphJobOutcome(outcome.GetError());
    }
}

void FtClient::CancelFaceMorphJobAsync(const CancelFaceMorphJobRequest& request, const CancelFaceMorphJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelFaceMorphJobRequest&;
    using Resp = CancelFaceMorphJobResponse;

    DoRequestAsync<Req, Resp>(
        "CancelFaceMorphJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FtClient::CancelFaceMorphJobOutcomeCallable FtClient::CancelFaceMorphJobCallable(const CancelFaceMorphJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelFaceMorphJobOutcome>>();
    CancelFaceMorphJobAsync(
    request,
    [prom](
        const FtClient*,
        const CancelFaceMorphJobRequest&,
        CancelFaceMorphJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FtClient::ChangeAgePicOutcome FtClient::ChangeAgePic(const ChangeAgePicRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeAgePic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeAgePicResponse rsp = ChangeAgePicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeAgePicOutcome(rsp);
        else
            return ChangeAgePicOutcome(o.GetError());
    }
    else
    {
        return ChangeAgePicOutcome(outcome.GetError());
    }
}

void FtClient::ChangeAgePicAsync(const ChangeAgePicRequest& request, const ChangeAgePicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeAgePicRequest&;
    using Resp = ChangeAgePicResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeAgePic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FtClient::ChangeAgePicOutcomeCallable FtClient::ChangeAgePicCallable(const ChangeAgePicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeAgePicOutcome>>();
    ChangeAgePicAsync(
    request,
    [prom](
        const FtClient*,
        const ChangeAgePicRequest&,
        ChangeAgePicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FtClient::FaceCartoonPicOutcome FtClient::FaceCartoonPic(const FaceCartoonPicRequest &request)
{
    auto outcome = MakeRequest(request, "FaceCartoonPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FaceCartoonPicResponse rsp = FaceCartoonPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FaceCartoonPicOutcome(rsp);
        else
            return FaceCartoonPicOutcome(o.GetError());
    }
    else
    {
        return FaceCartoonPicOutcome(outcome.GetError());
    }
}

void FtClient::FaceCartoonPicAsync(const FaceCartoonPicRequest& request, const FaceCartoonPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FaceCartoonPicRequest&;
    using Resp = FaceCartoonPicResponse;

    DoRequestAsync<Req, Resp>(
        "FaceCartoonPic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FtClient::FaceCartoonPicOutcomeCallable FtClient::FaceCartoonPicCallable(const FaceCartoonPicRequest &request)
{
    const auto prom = std::make_shared<std::promise<FaceCartoonPicOutcome>>();
    FaceCartoonPicAsync(
    request,
    [prom](
        const FtClient*,
        const FaceCartoonPicRequest&,
        FaceCartoonPicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FtClient::MorphFaceOutcome FtClient::MorphFace(const MorphFaceRequest &request)
{
    auto outcome = MakeRequest(request, "MorphFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MorphFaceResponse rsp = MorphFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MorphFaceOutcome(rsp);
        else
            return MorphFaceOutcome(o.GetError());
    }
    else
    {
        return MorphFaceOutcome(outcome.GetError());
    }
}

void FtClient::MorphFaceAsync(const MorphFaceRequest& request, const MorphFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MorphFaceRequest&;
    using Resp = MorphFaceResponse;

    DoRequestAsync<Req, Resp>(
        "MorphFace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FtClient::MorphFaceOutcomeCallable FtClient::MorphFaceCallable(const MorphFaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<MorphFaceOutcome>>();
    MorphFaceAsync(
    request,
    [prom](
        const FtClient*,
        const MorphFaceRequest&,
        MorphFaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FtClient::QueryFaceMorphJobOutcome FtClient::QueryFaceMorphJob(const QueryFaceMorphJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFaceMorphJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFaceMorphJobResponse rsp = QueryFaceMorphJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFaceMorphJobOutcome(rsp);
        else
            return QueryFaceMorphJobOutcome(o.GetError());
    }
    else
    {
        return QueryFaceMorphJobOutcome(outcome.GetError());
    }
}

void FtClient::QueryFaceMorphJobAsync(const QueryFaceMorphJobRequest& request, const QueryFaceMorphJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFaceMorphJobRequest&;
    using Resp = QueryFaceMorphJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFaceMorphJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FtClient::QueryFaceMorphJobOutcomeCallable FtClient::QueryFaceMorphJobCallable(const QueryFaceMorphJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFaceMorphJobOutcome>>();
    QueryFaceMorphJobAsync(
    request,
    [prom](
        const FtClient*,
        const QueryFaceMorphJobRequest&,
        QueryFaceMorphJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FtClient::SwapGenderPicOutcome FtClient::SwapGenderPic(const SwapGenderPicRequest &request)
{
    auto outcome = MakeRequest(request, "SwapGenderPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwapGenderPicResponse rsp = SwapGenderPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwapGenderPicOutcome(rsp);
        else
            return SwapGenderPicOutcome(o.GetError());
    }
    else
    {
        return SwapGenderPicOutcome(outcome.GetError());
    }
}

void FtClient::SwapGenderPicAsync(const SwapGenderPicRequest& request, const SwapGenderPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwapGenderPicRequest&;
    using Resp = SwapGenderPicResponse;

    DoRequestAsync<Req, Resp>(
        "SwapGenderPic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FtClient::SwapGenderPicOutcomeCallable FtClient::SwapGenderPicCallable(const SwapGenderPicRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwapGenderPicOutcome>>();
    SwapGenderPicAsync(
    request,
    [prom](
        const FtClient*,
        const SwapGenderPicRequest&,
        SwapGenderPicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


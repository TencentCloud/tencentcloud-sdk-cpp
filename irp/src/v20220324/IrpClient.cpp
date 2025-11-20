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

#include <tencentcloud/irp/v20220324/IrpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Irp::V20220324;
using namespace TencentCloud::Irp::V20220324::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-03-24";
    const string ENDPOINT = "irp.tencentcloudapi.com";
}

IrpClient::IrpClient(const Credential &credential, const string &region) :
    IrpClient(credential, region, ClientProfile())
{
}

IrpClient::IrpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IrpClient::RecommendContentOutcome IrpClient::RecommendContent(const RecommendContentRequest &request)
{
    auto outcome = MakeRequest(request, "RecommendContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecommendContentResponse rsp = RecommendContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecommendContentOutcome(rsp);
        else
            return RecommendContentOutcome(o.GetError());
    }
    else
    {
        return RecommendContentOutcome(outcome.GetError());
    }
}

void IrpClient::RecommendContentAsync(const RecommendContentRequest& request, const RecommendContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecommendContentRequest&;
    using Resp = RecommendContentResponse;

    DoRequestAsync<Req, Resp>(
        "RecommendContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IrpClient::RecommendContentOutcomeCallable IrpClient::RecommendContentCallable(const RecommendContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecommendContentOutcome>>();
    RecommendContentAsync(
    request,
    [prom](
        const IrpClient*,
        const RecommendContentRequest&,
        RecommendContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IrpClient::ReportActionOutcome IrpClient::ReportAction(const ReportActionRequest &request)
{
    auto outcome = MakeRequest(request, "ReportAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportActionResponse rsp = ReportActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportActionOutcome(rsp);
        else
            return ReportActionOutcome(o.GetError());
    }
    else
    {
        return ReportActionOutcome(outcome.GetError());
    }
}

void IrpClient::ReportActionAsync(const ReportActionRequest& request, const ReportActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportActionRequest&;
    using Resp = ReportActionResponse;

    DoRequestAsync<Req, Resp>(
        "ReportAction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IrpClient::ReportActionOutcomeCallable IrpClient::ReportActionCallable(const ReportActionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportActionOutcome>>();
    ReportActionAsync(
    request,
    [prom](
        const IrpClient*,
        const ReportActionRequest&,
        ReportActionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IrpClient::ReportMaterialOutcome IrpClient::ReportMaterial(const ReportMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "ReportMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportMaterialResponse rsp = ReportMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportMaterialOutcome(rsp);
        else
            return ReportMaterialOutcome(o.GetError());
    }
    else
    {
        return ReportMaterialOutcome(outcome.GetError());
    }
}

void IrpClient::ReportMaterialAsync(const ReportMaterialRequest& request, const ReportMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportMaterialRequest&;
    using Resp = ReportMaterialResponse;

    DoRequestAsync<Req, Resp>(
        "ReportMaterial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IrpClient::ReportMaterialOutcomeCallable IrpClient::ReportMaterialCallable(const ReportMaterialRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportMaterialOutcome>>();
    ReportMaterialAsync(
    request,
    [prom](
        const IrpClient*,
        const ReportMaterialRequest&,
        ReportMaterialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IrpClient::ReportPortraitOutcome IrpClient::ReportPortrait(const ReportPortraitRequest &request)
{
    auto outcome = MakeRequest(request, "ReportPortrait");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportPortraitResponse rsp = ReportPortraitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportPortraitOutcome(rsp);
        else
            return ReportPortraitOutcome(o.GetError());
    }
    else
    {
        return ReportPortraitOutcome(outcome.GetError());
    }
}

void IrpClient::ReportPortraitAsync(const ReportPortraitRequest& request, const ReportPortraitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportPortraitRequest&;
    using Resp = ReportPortraitResponse;

    DoRequestAsync<Req, Resp>(
        "ReportPortrait", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IrpClient::ReportPortraitOutcomeCallable IrpClient::ReportPortraitCallable(const ReportPortraitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportPortraitOutcome>>();
    ReportPortraitAsync(
    request,
    [prom](
        const IrpClient*,
        const ReportPortraitRequest&,
        ReportPortraitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


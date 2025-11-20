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

#include <tencentcloud/facefusion/v20181201/FacefusionClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Facefusion::V20181201;
using namespace TencentCloud::Facefusion::V20181201::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-12-01";
    const string ENDPOINT = "facefusion.tencentcloudapi.com";
}

FacefusionClient::FacefusionClient(const Credential &credential, const string &region) :
    FacefusionClient(credential, region, ClientProfile())
{
}

FacefusionClient::FacefusionClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FacefusionClient::DescribeMaterialListOutcome FacefusionClient::DescribeMaterialList(const DescribeMaterialListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaterialList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaterialListResponse rsp = DescribeMaterialListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaterialListOutcome(rsp);
        else
            return DescribeMaterialListOutcome(o.GetError());
    }
    else
    {
        return DescribeMaterialListOutcome(outcome.GetError());
    }
}

void FacefusionClient::DescribeMaterialListAsync(const DescribeMaterialListRequest& request, const DescribeMaterialListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMaterialListRequest&;
    using Resp = DescribeMaterialListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMaterialList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FacefusionClient::DescribeMaterialListOutcomeCallable FacefusionClient::DescribeMaterialListCallable(const DescribeMaterialListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMaterialListOutcome>>();
    DescribeMaterialListAsync(
    request,
    [prom](
        const FacefusionClient*,
        const DescribeMaterialListRequest&,
        DescribeMaterialListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FacefusionClient::FaceFusionOutcome FacefusionClient::FaceFusion(const FaceFusionRequest &request)
{
    auto outcome = MakeRequest(request, "FaceFusion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FaceFusionResponse rsp = FaceFusionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FaceFusionOutcome(rsp);
        else
            return FaceFusionOutcome(o.GetError());
    }
    else
    {
        return FaceFusionOutcome(outcome.GetError());
    }
}

void FacefusionClient::FaceFusionAsync(const FaceFusionRequest& request, const FaceFusionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FaceFusionRequest&;
    using Resp = FaceFusionResponse;

    DoRequestAsync<Req, Resp>(
        "FaceFusion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FacefusionClient::FaceFusionOutcomeCallable FacefusionClient::FaceFusionCallable(const FaceFusionRequest &request)
{
    const auto prom = std::make_shared<std::promise<FaceFusionOutcome>>();
    FaceFusionAsync(
    request,
    [prom](
        const FacefusionClient*,
        const FaceFusionRequest&,
        FaceFusionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FacefusionClient::FuseFaceOutcome FacefusionClient::FuseFace(const FuseFaceRequest &request)
{
    auto outcome = MakeRequest(request, "FuseFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FuseFaceResponse rsp = FuseFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FuseFaceOutcome(rsp);
        else
            return FuseFaceOutcome(o.GetError());
    }
    else
    {
        return FuseFaceOutcome(outcome.GetError());
    }
}

void FacefusionClient::FuseFaceAsync(const FuseFaceRequest& request, const FuseFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FuseFaceRequest&;
    using Resp = FuseFaceResponse;

    DoRequestAsync<Req, Resp>(
        "FuseFace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FacefusionClient::FuseFaceOutcomeCallable FacefusionClient::FuseFaceCallable(const FuseFaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<FuseFaceOutcome>>();
    FuseFaceAsync(
    request,
    [prom](
        const FacefusionClient*,
        const FuseFaceRequest&,
        FuseFaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


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

#include <tencentcloud/anicloud/v20220923/AnicloudClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Anicloud::V20220923;
using namespace TencentCloud::Anicloud::V20220923::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-09-23";
    const string ENDPOINT = "anicloud.tencentcloudapi.com";
}

AnicloudClient::AnicloudClient(const Credential &credential, const string &region) :
    AnicloudClient(credential, region, ClientProfile())
{
}

AnicloudClient::AnicloudClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AnicloudClient::CheckAppidExistOutcome AnicloudClient::CheckAppidExist(const CheckAppidExistRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAppidExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAppidExistResponse rsp = CheckAppidExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAppidExistOutcome(rsp);
        else
            return CheckAppidExistOutcome(o.GetError());
    }
    else
    {
        return CheckAppidExistOutcome(outcome.GetError());
    }
}

void AnicloudClient::CheckAppidExistAsync(const CheckAppidExistRequest& request, const CheckAppidExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckAppidExistRequest&;
    using Resp = CheckAppidExistResponse;

    DoRequestAsync<Req, Resp>(
        "CheckAppidExist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AnicloudClient::CheckAppidExistOutcomeCallable AnicloudClient::CheckAppidExistCallable(const CheckAppidExistRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckAppidExistOutcome>>();
    CheckAppidExistAsync(
    request,
    [prom](
        const AnicloudClient*,
        const CheckAppidExistRequest&,
        CheckAppidExistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AnicloudClient::QueryResourceOutcome AnicloudClient::QueryResource(const QueryResourceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResourceResponse rsp = QueryResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryResourceOutcome(rsp);
        else
            return QueryResourceOutcome(o.GetError());
    }
    else
    {
        return QueryResourceOutcome(outcome.GetError());
    }
}

void AnicloudClient::QueryResourceAsync(const QueryResourceRequest& request, const QueryResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryResourceRequest&;
    using Resp = QueryResourceResponse;

    DoRequestAsync<Req, Resp>(
        "QueryResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AnicloudClient::QueryResourceOutcomeCallable AnicloudClient::QueryResourceCallable(const QueryResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryResourceOutcome>>();
    QueryResourceAsync(
    request,
    [prom](
        const AnicloudClient*,
        const QueryResourceRequest&,
        QueryResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AnicloudClient::QueryResourceInfoOutcome AnicloudClient::QueryResourceInfo(const QueryResourceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryResourceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResourceInfoResponse rsp = QueryResourceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryResourceInfoOutcome(rsp);
        else
            return QueryResourceInfoOutcome(o.GetError());
    }
    else
    {
        return QueryResourceInfoOutcome(outcome.GetError());
    }
}

void AnicloudClient::QueryResourceInfoAsync(const QueryResourceInfoRequest& request, const QueryResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryResourceInfoRequest&;
    using Resp = QueryResourceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryResourceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AnicloudClient::QueryResourceInfoOutcomeCallable AnicloudClient::QueryResourceInfoCallable(const QueryResourceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryResourceInfoOutcome>>();
    QueryResourceInfoAsync(
    request,
    [prom](
        const AnicloudClient*,
        const QueryResourceInfoRequest&,
        QueryResourceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


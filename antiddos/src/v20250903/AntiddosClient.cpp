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

#include <tencentcloud/antiddos/v20250903/AntiddosClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Antiddos::V20250903;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-09-03";
    const string ENDPOINT = "antiddos.tencentcloudapi.com";
}

AntiddosClient::AntiddosClient(const Credential &credential, const string &region) :
    AntiddosClient(credential, region, ClientProfile())
{
}

AntiddosClient::AntiddosClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AntiddosClient::DescribeDDoSBlockRecordsOutcome AntiddosClient::DescribeDDoSBlockRecords(const DescribeDDoSBlockRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSBlockRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSBlockRecordsResponse rsp = DescribeDDoSBlockRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSBlockRecordsOutcome(rsp);
        else
            return DescribeDDoSBlockRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSBlockRecordsOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDDoSBlockRecordsAsync(const DescribeDDoSBlockRecordsRequest& request, const DescribeDDoSBlockRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSBlockRecordsRequest&;
    using Resp = DescribeDDoSBlockRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSBlockRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeDDoSBlockRecordsOutcomeCallable AntiddosClient::DescribeDDoSBlockRecordsCallable(const DescribeDDoSBlockRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSBlockRecordsOutcome>>();
    DescribeDDoSBlockRecordsAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeDDoSBlockRecordsRequest&,
        DescribeDDoSBlockRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::UnblockResourcesOutcome AntiddosClient::UnblockResources(const UnblockResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "UnblockResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnblockResourcesResponse rsp = UnblockResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnblockResourcesOutcome(rsp);
        else
            return UnblockResourcesOutcome(o.GetError());
    }
    else
    {
        return UnblockResourcesOutcome(outcome.GetError());
    }
}

void AntiddosClient::UnblockResourcesAsync(const UnblockResourcesRequest& request, const UnblockResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnblockResourcesRequest&;
    using Resp = UnblockResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "UnblockResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::UnblockResourcesOutcomeCallable AntiddosClient::UnblockResourcesCallable(const UnblockResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnblockResourcesOutcome>>();
    UnblockResourcesAsync(
    request,
    [prom](
        const AntiddosClient*,
        const UnblockResourcesRequest&,
        UnblockResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


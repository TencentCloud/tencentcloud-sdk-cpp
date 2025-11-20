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

#include <tencentcloud/cdz/v20221123/CdzClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdz::V20221123;
using namespace TencentCloud::Cdz::V20221123::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-11-23";
    const string ENDPOINT = "cdz.tencentcloudapi.com";
}

CdzClient::CdzClient(const Credential &credential, const string &region) :
    CdzClient(credential, region, ClientProfile())
{
}

CdzClient::CdzClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdzClient::DescribeCloudDedicatedZoneHostsOutcome CdzClient::DescribeCloudDedicatedZoneHosts(const DescribeCloudDedicatedZoneHostsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudDedicatedZoneHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudDedicatedZoneHostsResponse rsp = DescribeCloudDedicatedZoneHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudDedicatedZoneHostsOutcome(rsp);
        else
            return DescribeCloudDedicatedZoneHostsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudDedicatedZoneHostsOutcome(outcome.GetError());
    }
}

void CdzClient::DescribeCloudDedicatedZoneHostsAsync(const DescribeCloudDedicatedZoneHostsRequest& request, const DescribeCloudDedicatedZoneHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudDedicatedZoneHostsRequest&;
    using Resp = DescribeCloudDedicatedZoneHostsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudDedicatedZoneHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdzClient::DescribeCloudDedicatedZoneHostsOutcomeCallable CdzClient::DescribeCloudDedicatedZoneHostsCallable(const DescribeCloudDedicatedZoneHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudDedicatedZoneHostsOutcome>>();
    DescribeCloudDedicatedZoneHostsAsync(
    request,
    [prom](
        const CdzClient*,
        const DescribeCloudDedicatedZoneHostsRequest&,
        DescribeCloudDedicatedZoneHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdzClient::DescribeCloudDedicatedZoneResourceSummaryOutcome CdzClient::DescribeCloudDedicatedZoneResourceSummary(const DescribeCloudDedicatedZoneResourceSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudDedicatedZoneResourceSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudDedicatedZoneResourceSummaryResponse rsp = DescribeCloudDedicatedZoneResourceSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudDedicatedZoneResourceSummaryOutcome(rsp);
        else
            return DescribeCloudDedicatedZoneResourceSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudDedicatedZoneResourceSummaryOutcome(outcome.GetError());
    }
}

void CdzClient::DescribeCloudDedicatedZoneResourceSummaryAsync(const DescribeCloudDedicatedZoneResourceSummaryRequest& request, const DescribeCloudDedicatedZoneResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudDedicatedZoneResourceSummaryRequest&;
    using Resp = DescribeCloudDedicatedZoneResourceSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudDedicatedZoneResourceSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdzClient::DescribeCloudDedicatedZoneResourceSummaryOutcomeCallable CdzClient::DescribeCloudDedicatedZoneResourceSummaryCallable(const DescribeCloudDedicatedZoneResourceSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudDedicatedZoneResourceSummaryOutcome>>();
    DescribeCloudDedicatedZoneResourceSummaryAsync(
    request,
    [prom](
        const CdzClient*,
        const DescribeCloudDedicatedZoneResourceSummaryRequest&,
        DescribeCloudDedicatedZoneResourceSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


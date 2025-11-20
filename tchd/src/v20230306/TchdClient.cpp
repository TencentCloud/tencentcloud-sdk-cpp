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

#include <tencentcloud/tchd/v20230306/TchdClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tchd::V20230306;
using namespace TencentCloud::Tchd::V20230306::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-03-06";
    const string ENDPOINT = "tchd.tencentcloudapi.com";
}

TchdClient::TchdClient(const Credential &credential, const string &region) :
    TchdClient(credential, region, ClientProfile())
{
}

TchdClient::TchdClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TchdClient::DescribeEventStatisticsOutcome TchdClient::DescribeEventStatistics(const DescribeEventStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventStatisticsResponse rsp = DescribeEventStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventStatisticsOutcome(rsp);
        else
            return DescribeEventStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeEventStatisticsOutcome(outcome.GetError());
    }
}

void TchdClient::DescribeEventStatisticsAsync(const DescribeEventStatisticsRequest& request, const DescribeEventStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventStatisticsRequest&;
    using Resp = DescribeEventStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEventStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TchdClient::DescribeEventStatisticsOutcomeCallable TchdClient::DescribeEventStatisticsCallable(const DescribeEventStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventStatisticsOutcome>>();
    DescribeEventStatisticsAsync(
    request,
    [prom](
        const TchdClient*,
        const DescribeEventStatisticsRequest&,
        DescribeEventStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TchdClient::DescribeEventsOutcome TchdClient::DescribeEvents(const DescribeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventsResponse rsp = DescribeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventsOutcome(rsp);
        else
            return DescribeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeEventsOutcome(outcome.GetError());
    }
}

void TchdClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventsRequest&;
    using Resp = DescribeEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TchdClient::DescribeEventsOutcomeCallable TchdClient::DescribeEventsCallable(const DescribeEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventsOutcome>>();
    DescribeEventsAsync(
    request,
    [prom](
        const TchdClient*,
        const DescribeEventsRequest&,
        DescribeEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


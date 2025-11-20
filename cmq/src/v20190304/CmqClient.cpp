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

#include <tencentcloud/cmq/v20190304/CmqClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cmq::V20190304;
using namespace TencentCloud::Cmq::V20190304::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-04";
    const string ENDPOINT = "cmq.tencentcloudapi.com";
}

CmqClient::CmqClient(const Credential &credential, const string &region) :
    CmqClient(credential, region, ClientProfile())
{
}

CmqClient::CmqClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CmqClient::DescribeQueueDetailOutcome CmqClient::DescribeQueueDetail(const DescribeQueueDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQueueDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQueueDetailResponse rsp = DescribeQueueDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQueueDetailOutcome(rsp);
        else
            return DescribeQueueDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeQueueDetailOutcome(outcome.GetError());
    }
}

void CmqClient::DescribeQueueDetailAsync(const DescribeQueueDetailRequest& request, const DescribeQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQueueDetailRequest&;
    using Resp = DescribeQueueDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQueueDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmqClient::DescribeQueueDetailOutcomeCallable CmqClient::DescribeQueueDetailCallable(const DescribeQueueDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQueueDetailOutcome>>();
    DescribeQueueDetailAsync(
    request,
    [prom](
        const CmqClient*,
        const DescribeQueueDetailRequest&,
        DescribeQueueDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CmqClient::DescribeTopicDetailOutcome CmqClient::DescribeTopicDetail(const DescribeTopicDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicDetailResponse rsp = DescribeTopicDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicDetailOutcome(rsp);
        else
            return DescribeTopicDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicDetailOutcome(outcome.GetError());
    }
}

void CmqClient::DescribeTopicDetailAsync(const DescribeTopicDetailRequest& request, const DescribeTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicDetailRequest&;
    using Resp = DescribeTopicDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CmqClient::DescribeTopicDetailOutcomeCallable CmqClient::DescribeTopicDetailCallable(const DescribeTopicDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicDetailOutcome>>();
    DescribeTopicDetailAsync(
    request,
    [prom](
        const CmqClient*,
        const DescribeTopicDetailRequest&,
        DescribeTopicDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


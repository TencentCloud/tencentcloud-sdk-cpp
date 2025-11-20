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

#include <tencentcloud/ig/v20210518/IgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ig::V20210518;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-18";
    const string ENDPOINT = "ig.tencentcloudapi.com";
}

IgClient::IgClient(const Credential &credential, const string &region) :
    IgClient(credential, region, ClientProfile())
{
}

IgClient::IgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IgClient::DescribeIgOrderListOutcome IgClient::DescribeIgOrderList(const DescribeIgOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIgOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIgOrderListResponse rsp = DescribeIgOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIgOrderListOutcome(rsp);
        else
            return DescribeIgOrderListOutcome(o.GetError());
    }
    else
    {
        return DescribeIgOrderListOutcome(outcome.GetError());
    }
}

void IgClient::DescribeIgOrderListAsync(const DescribeIgOrderListRequest& request, const DescribeIgOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIgOrderListRequest&;
    using Resp = DescribeIgOrderListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIgOrderList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgClient::DescribeIgOrderListOutcomeCallable IgClient::DescribeIgOrderListCallable(const DescribeIgOrderListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIgOrderListOutcome>>();
    DescribeIgOrderListAsync(
    request,
    [prom](
        const IgClient*,
        const DescribeIgOrderListRequest&,
        DescribeIgOrderListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


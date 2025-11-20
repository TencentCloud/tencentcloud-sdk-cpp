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

#include <tencentcloud/mall/v20230518/MallClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mall::V20230518;
using namespace TencentCloud::Mall::V20230518::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-05-18";
    const string ENDPOINT = "mall.tencentcloudapi.com";
}

MallClient::MallClient(const Credential &credential, const string &region) :
    MallClient(credential, region, ClientProfile())
{
}

MallClient::MallClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MallClient::DescribeDrawResourceListOutcome MallClient::DescribeDrawResourceList(const DescribeDrawResourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDrawResourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDrawResourceListResponse rsp = DescribeDrawResourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDrawResourceListOutcome(rsp);
        else
            return DescribeDrawResourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDrawResourceListOutcome(outcome.GetError());
    }
}

void MallClient::DescribeDrawResourceListAsync(const DescribeDrawResourceListRequest& request, const DescribeDrawResourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDrawResourceListRequest&;
    using Resp = DescribeDrawResourceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDrawResourceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MallClient::DescribeDrawResourceListOutcomeCallable MallClient::DescribeDrawResourceListCallable(const DescribeDrawResourceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDrawResourceListOutcome>>();
    DescribeDrawResourceListAsync(
    request,
    [prom](
        const MallClient*,
        const DescribeDrawResourceListRequest&,
        DescribeDrawResourceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


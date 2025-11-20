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

#include <tencentcloud/securitylake/v20240117/SecuritylakeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Securitylake::V20240117;
using namespace TencentCloud::Securitylake::V20240117::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-01-17";
    const string ENDPOINT = "securitylake.tencentcloudapi.com";
}

SecuritylakeClient::SecuritylakeClient(const Credential &credential, const string &region) :
    SecuritylakeClient(credential, region, ClientProfile())
{
}

SecuritylakeClient::SecuritylakeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SecuritylakeClient::DescribeSecurityAlarmTableListOutcome SecuritylakeClient::DescribeSecurityAlarmTableList(const DescribeSecurityAlarmTableListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityAlarmTableList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityAlarmTableListResponse rsp = DescribeSecurityAlarmTableListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityAlarmTableListOutcome(rsp);
        else
            return DescribeSecurityAlarmTableListOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityAlarmTableListOutcome(outcome.GetError());
    }
}

void SecuritylakeClient::DescribeSecurityAlarmTableListAsync(const DescribeSecurityAlarmTableListRequest& request, const DescribeSecurityAlarmTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityAlarmTableListRequest&;
    using Resp = DescribeSecurityAlarmTableListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityAlarmTableList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SecuritylakeClient::DescribeSecurityAlarmTableListOutcomeCallable SecuritylakeClient::DescribeSecurityAlarmTableListCallable(const DescribeSecurityAlarmTableListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityAlarmTableListOutcome>>();
    DescribeSecurityAlarmTableListAsync(
    request,
    [prom](
        const SecuritylakeClient*,
        const DescribeSecurityAlarmTableListRequest&,
        DescribeSecurityAlarmTableListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


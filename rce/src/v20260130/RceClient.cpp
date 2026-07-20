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

#include <tencentcloud/rce/v20260130/RceClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Rce::V20260130;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-01-30";
    const string ENDPOINT = "rce.tencentcloudapi.com";
}

RceClient::RceClient(const Credential &credential, const string &region) :
    RceClient(credential, region, ClientProfile())
{
}

RceClient::RceClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RceClient::AssessEnvironmentRiskOutcome RceClient::AssessEnvironmentRisk(const AssessEnvironmentRiskRequest &request)
{
    auto outcome = MakeRequest(request, "AssessEnvironmentRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssessEnvironmentRiskResponse rsp = AssessEnvironmentRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssessEnvironmentRiskOutcome(rsp);
        else
            return AssessEnvironmentRiskOutcome(o.GetError());
    }
    else
    {
        return AssessEnvironmentRiskOutcome(outcome.GetError());
    }
}

void RceClient::AssessEnvironmentRiskAsync(const AssessEnvironmentRiskRequest& request, const AssessEnvironmentRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssessEnvironmentRiskRequest&;
    using Resp = AssessEnvironmentRiskResponse;

    DoRequestAsync<Req, Resp>(
        "AssessEnvironmentRisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::AssessEnvironmentRiskOutcomeCallable RceClient::AssessEnvironmentRiskCallable(const AssessEnvironmentRiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssessEnvironmentRiskOutcome>>();
    AssessEnvironmentRiskAsync(
    request,
    [prom](
        const RceClient*,
        const AssessEnvironmentRiskRequest&,
        AssessEnvironmentRiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


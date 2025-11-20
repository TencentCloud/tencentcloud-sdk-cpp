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

#include <tencentcloud/icr/v20211014/IcrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Icr::V20211014;
using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-10-14";
    const string ENDPOINT = "icr.tencentcloudapi.com";
}

IcrClient::IcrClient(const Credential &credential, const string &region) :
    IcrClient(credential, region, ClientProfile())
{
}

IcrClient::IcrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IcrClient::GetIndustryV1HomeMembersOutcome IcrClient::GetIndustryV1HomeMembers(const GetIndustryV1HomeMembersRequest &request)
{
    auto outcome = MakeRequest(request, "GetIndustryV1HomeMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetIndustryV1HomeMembersResponse rsp = GetIndustryV1HomeMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetIndustryV1HomeMembersOutcome(rsp);
        else
            return GetIndustryV1HomeMembersOutcome(o.GetError());
    }
    else
    {
        return GetIndustryV1HomeMembersOutcome(outcome.GetError());
    }
}

void IcrClient::GetIndustryV1HomeMembersAsync(const GetIndustryV1HomeMembersRequest& request, const GetIndustryV1HomeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetIndustryV1HomeMembersRequest&;
    using Resp = GetIndustryV1HomeMembersResponse;

    DoRequestAsync<Req, Resp>(
        "GetIndustryV1HomeMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IcrClient::GetIndustryV1HomeMembersOutcomeCallable IcrClient::GetIndustryV1HomeMembersCallable(const GetIndustryV1HomeMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetIndustryV1HomeMembersOutcome>>();
    GetIndustryV1HomeMembersAsync(
    request,
    [prom](
        const IcrClient*,
        const GetIndustryV1HomeMembersRequest&,
        GetIndustryV1HomeMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


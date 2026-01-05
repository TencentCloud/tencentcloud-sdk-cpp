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

#include <tencentcloud/wimgs/v20251106/WimgsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wimgs::V20251106;
using namespace TencentCloud::Wimgs::V20251106::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-11-06";
    const string ENDPOINT = "wimgs.tencentcloudapi.com";
}

WimgsClient::WimgsClient(const Credential &credential, const string &region) :
    WimgsClient(credential, region, ClientProfile())
{
}

WimgsClient::WimgsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WimgsClient::SearchByTextOutcome WimgsClient::SearchByText(const SearchByTextRequest &request)
{
    auto outcome = MakeRequest(request, "SearchByText");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchByTextResponse rsp = SearchByTextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchByTextOutcome(rsp);
        else
            return SearchByTextOutcome(o.GetError());
    }
    else
    {
        return SearchByTextOutcome(outcome.GetError());
    }
}

void WimgsClient::SearchByTextAsync(const SearchByTextRequest& request, const SearchByTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchByTextRequest&;
    using Resp = SearchByTextResponse;

    DoRequestAsync<Req, Resp>(
        "SearchByText", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WimgsClient::SearchByTextOutcomeCallable WimgsClient::SearchByTextCallable(const SearchByTextRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchByTextOutcome>>();
    SearchByTextAsync(
    request,
    [prom](
        const WimgsClient*,
        const SearchByTextRequest&,
        SearchByTextOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


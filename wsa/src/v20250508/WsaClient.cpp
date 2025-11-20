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

#include <tencentcloud/wsa/v20250508/WsaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wsa::V20250508;
using namespace TencentCloud::Wsa::V20250508::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-05-08";
    const string ENDPOINT = "wsa.tencentcloudapi.com";
}

WsaClient::WsaClient(const Credential &credential, const string &region) :
    WsaClient(credential, region, ClientProfile())
{
}

WsaClient::WsaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WsaClient::SearchProOutcome WsaClient::SearchPro(const SearchProRequest &request)
{
    auto outcome = MakeRequest(request, "SearchPro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchProResponse rsp = SearchProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchProOutcome(rsp);
        else
            return SearchProOutcome(o.GetError());
    }
    else
    {
        return SearchProOutcome(outcome.GetError());
    }
}

void WsaClient::SearchProAsync(const SearchProRequest& request, const SearchProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchProRequest&;
    using Resp = SearchProResponse;

    DoRequestAsync<Req, Resp>(
        "SearchPro", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WsaClient::SearchProOutcomeCallable WsaClient::SearchProCallable(const SearchProRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchProOutcome>>();
    SearchProAsync(
    request,
    [prom](
        const WsaClient*,
        const SearchProRequest&,
        SearchProOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


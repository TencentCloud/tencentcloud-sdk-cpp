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

#include <tencentcloud/portal/v20230413/PortalClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Portal::V20230413;
using namespace TencentCloud::Portal::V20230413::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-13";
    const string ENDPOINT = "portal.tencentcloudapi.com";
}

PortalClient::PortalClient(const Credential &credential, const string &region) :
    PortalClient(credential, region, ClientProfile())
{
}

PortalClient::PortalClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


PortalClient::SearchDocumentsOutcome PortalClient::SearchDocuments(const SearchDocumentsRequest &request)
{
    auto outcome = MakeRequest(request, "SearchDocuments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchDocumentsResponse rsp = SearchDocumentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchDocumentsOutcome(rsp);
        else
            return SearchDocumentsOutcome(o.GetError());
    }
    else
    {
        return SearchDocumentsOutcome(outcome.GetError());
    }
}

void PortalClient::SearchDocumentsAsync(const SearchDocumentsRequest& request, const SearchDocumentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchDocumentsRequest&;
    using Resp = SearchDocumentsResponse;

    DoRequestAsync<Req, Resp>(
        "SearchDocuments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PortalClient::SearchDocumentsOutcomeCallable PortalClient::SearchDocumentsCallable(const SearchDocumentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchDocumentsOutcome>>();
    SearchDocumentsAsync(
    request,
    [prom](
        const PortalClient*,
        const SearchDocumentsRequest&,
        SearchDocumentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


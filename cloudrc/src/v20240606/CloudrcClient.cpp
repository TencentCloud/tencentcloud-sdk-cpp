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

#include <tencentcloud/cloudrc/v20240606/CloudrcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cloudrc::V20240606;
using namespace TencentCloud::Cloudrc::V20240606::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-06-06";
    const string ENDPOINT = "cloudrc.tencentcloudapi.com";
}

CloudrcClient::CloudrcClient(const Credential &credential, const string &region) :
    CloudrcClient(credential, region, ClientProfile())
{
}

CloudrcClient::CloudrcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CloudrcClient::DescribeResourceOutcome CloudrcClient::DescribeResource(const DescribeResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceResponse rsp = DescribeResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceOutcome(rsp);
        else
            return DescribeResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceOutcome(outcome.GetError());
    }
}

void CloudrcClient::DescribeResourceAsync(const DescribeResourceRequest& request, const DescribeResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceRequest&;
    using Resp = DescribeResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudrcClient::DescribeResourceOutcomeCallable CloudrcClient::DescribeResourceCallable(const DescribeResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceOutcome>>();
    DescribeResourceAsync(
    request,
    [prom](
        const CloudrcClient*,
        const DescribeResourceRequest&,
        DescribeResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudrcClient::SearchResourcesOutcome CloudrcClient::SearchResources(const SearchResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "SearchResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchResourcesResponse rsp = SearchResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchResourcesOutcome(rsp);
        else
            return SearchResourcesOutcome(o.GetError());
    }
    else
    {
        return SearchResourcesOutcome(outcome.GetError());
    }
}

void CloudrcClient::SearchResourcesAsync(const SearchResourcesRequest& request, const SearchResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchResourcesRequest&;
    using Resp = SearchResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "SearchResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudrcClient::SearchResourcesOutcomeCallable CloudrcClient::SearchResourcesCallable(const SearchResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchResourcesOutcome>>();
    SearchResourcesAsync(
    request,
    [prom](
        const CloudrcClient*,
        const SearchResourcesRequest&,
        SearchResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


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

#include <tencentcloud/tkgdq/v20190411/TkgdqClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tkgdq::V20190411;
using namespace TencentCloud::Tkgdq::V20190411::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-11";
    const string ENDPOINT = "tkgdq.tencentcloudapi.com";
}

TkgdqClient::TkgdqClient(const Credential &credential, const string &region) :
    TkgdqClient(credential, region, ClientProfile())
{
}

TkgdqClient::TkgdqClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TkgdqClient::DescribeEntityOutcome TkgdqClient::DescribeEntity(const DescribeEntityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEntity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEntityResponse rsp = DescribeEntityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEntityOutcome(rsp);
        else
            return DescribeEntityOutcome(o.GetError());
    }
    else
    {
        return DescribeEntityOutcome(outcome.GetError());
    }
}

void TkgdqClient::DescribeEntityAsync(const DescribeEntityRequest& request, const DescribeEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEntityRequest&;
    using Resp = DescribeEntityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEntity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkgdqClient::DescribeEntityOutcomeCallable TkgdqClient::DescribeEntityCallable(const DescribeEntityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEntityOutcome>>();
    DescribeEntityAsync(
    request,
    [prom](
        const TkgdqClient*,
        const DescribeEntityRequest&,
        DescribeEntityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkgdqClient::DescribeRelationOutcome TkgdqClient::DescribeRelation(const DescribeRelationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelationResponse rsp = DescribeRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelationOutcome(rsp);
        else
            return DescribeRelationOutcome(o.GetError());
    }
    else
    {
        return DescribeRelationOutcome(outcome.GetError());
    }
}

void TkgdqClient::DescribeRelationAsync(const DescribeRelationRequest& request, const DescribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRelationRequest&;
    using Resp = DescribeRelationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRelation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkgdqClient::DescribeRelationOutcomeCallable TkgdqClient::DescribeRelationCallable(const DescribeRelationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRelationOutcome>>();
    DescribeRelationAsync(
    request,
    [prom](
        const TkgdqClient*,
        const DescribeRelationRequest&,
        DescribeRelationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TkgdqClient::DescribeTripleOutcome TkgdqClient::DescribeTriple(const DescribeTripleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTriple");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTripleResponse rsp = DescribeTripleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTripleOutcome(rsp);
        else
            return DescribeTripleOutcome(o.GetError());
    }
    else
    {
        return DescribeTripleOutcome(outcome.GetError());
    }
}

void TkgdqClient::DescribeTripleAsync(const DescribeTripleRequest& request, const DescribeTripleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTripleRequest&;
    using Resp = DescribeTripleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTriple", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TkgdqClient::DescribeTripleOutcomeCallable TkgdqClient::DescribeTripleCallable(const DescribeTripleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTripleOutcome>>();
    DescribeTripleAsync(
    request,
    [prom](
        const TkgdqClient*,
        const DescribeTripleRequest&,
        DescribeTripleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


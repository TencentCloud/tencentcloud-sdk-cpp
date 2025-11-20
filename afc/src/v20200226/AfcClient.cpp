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

#include <tencentcloud/afc/v20200226/AfcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Afc::V20200226;
using namespace TencentCloud::Afc::V20200226::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-26";
    const string ENDPOINT = "afc.tencentcloudapi.com";
}

AfcClient::AfcClient(const Credential &credential, const string &region) :
    AfcClient(credential, region, ClientProfile())
{
}

AfcClient::AfcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AfcClient::GetAntiFraudVipOutcome AfcClient::GetAntiFraudVip(const GetAntiFraudVipRequest &request)
{
    auto outcome = MakeRequest(request, "GetAntiFraudVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAntiFraudVipResponse rsp = GetAntiFraudVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAntiFraudVipOutcome(rsp);
        else
            return GetAntiFraudVipOutcome(o.GetError());
    }
    else
    {
        return GetAntiFraudVipOutcome(outcome.GetError());
    }
}

void AfcClient::GetAntiFraudVipAsync(const GetAntiFraudVipRequest& request, const GetAntiFraudVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAntiFraudVipRequest&;
    using Resp = GetAntiFraudVipResponse;

    DoRequestAsync<Req, Resp>(
        "GetAntiFraudVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AfcClient::GetAntiFraudVipOutcomeCallable AfcClient::GetAntiFraudVipCallable(const GetAntiFraudVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAntiFraudVipOutcome>>();
    GetAntiFraudVipAsync(
    request,
    [prom](
        const AfcClient*,
        const GetAntiFraudVipRequest&,
        GetAntiFraudVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AfcClient::QueryAntiFraudVipOutcome AfcClient::QueryAntiFraudVip(const QueryAntiFraudVipRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAntiFraudVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAntiFraudVipResponse rsp = QueryAntiFraudVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAntiFraudVipOutcome(rsp);
        else
            return QueryAntiFraudVipOutcome(o.GetError());
    }
    else
    {
        return QueryAntiFraudVipOutcome(outcome.GetError());
    }
}

void AfcClient::QueryAntiFraudVipAsync(const QueryAntiFraudVipRequest& request, const QueryAntiFraudVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAntiFraudVipRequest&;
    using Resp = QueryAntiFraudVipResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAntiFraudVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AfcClient::QueryAntiFraudVipOutcomeCallable AfcClient::QueryAntiFraudVipCallable(const QueryAntiFraudVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAntiFraudVipOutcome>>();
    QueryAntiFraudVipAsync(
    request,
    [prom](
        const AfcClient*,
        const QueryAntiFraudVipRequest&,
        QueryAntiFraudVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AfcClient::TransportGeneralInterfaceOutcome AfcClient::TransportGeneralInterface(const TransportGeneralInterfaceRequest &request)
{
    auto outcome = MakeRequest(request, "TransportGeneralInterface");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransportGeneralInterfaceResponse rsp = TransportGeneralInterfaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransportGeneralInterfaceOutcome(rsp);
        else
            return TransportGeneralInterfaceOutcome(o.GetError());
    }
    else
    {
        return TransportGeneralInterfaceOutcome(outcome.GetError());
    }
}

void AfcClient::TransportGeneralInterfaceAsync(const TransportGeneralInterfaceRequest& request, const TransportGeneralInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransportGeneralInterfaceRequest&;
    using Resp = TransportGeneralInterfaceResponse;

    DoRequestAsync<Req, Resp>(
        "TransportGeneralInterface", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AfcClient::TransportGeneralInterfaceOutcomeCallable AfcClient::TransportGeneralInterfaceCallable(const TransportGeneralInterfaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransportGeneralInterfaceOutcome>>();
    TransportGeneralInterfaceAsync(
    request,
    [prom](
        const AfcClient*,
        const TransportGeneralInterfaceRequest&,
        TransportGeneralInterfaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


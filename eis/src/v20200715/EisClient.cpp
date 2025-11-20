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

#include <tencentcloud/eis/v20200715/EisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Eis::V20200715;
using namespace TencentCloud::Eis::V20200715::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-15";
    const string ENDPOINT = "eis.tencentcloudapi.com";
}

EisClient::EisClient(const Credential &credential, const string &region) :
    EisClient(credential, region, ClientProfile())
{
}

EisClient::EisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EisClient::DescribeEisConnectorConfigOutcome EisClient::DescribeEisConnectorConfig(const DescribeEisConnectorConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEisConnectorConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEisConnectorConfigResponse rsp = DescribeEisConnectorConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEisConnectorConfigOutcome(rsp);
        else
            return DescribeEisConnectorConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeEisConnectorConfigOutcome(outcome.GetError());
    }
}

void EisClient::DescribeEisConnectorConfigAsync(const DescribeEisConnectorConfigRequest& request, const DescribeEisConnectorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEisConnectorConfigRequest&;
    using Resp = DescribeEisConnectorConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEisConnectorConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EisClient::DescribeEisConnectorConfigOutcomeCallable EisClient::DescribeEisConnectorConfigCallable(const DescribeEisConnectorConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEisConnectorConfigOutcome>>();
    DescribeEisConnectorConfigAsync(
    request,
    [prom](
        const EisClient*,
        const DescribeEisConnectorConfigRequest&,
        DescribeEisConnectorConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EisClient::ListEisConnectorOperationsOutcome EisClient::ListEisConnectorOperations(const ListEisConnectorOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "ListEisConnectorOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEisConnectorOperationsResponse rsp = ListEisConnectorOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEisConnectorOperationsOutcome(rsp);
        else
            return ListEisConnectorOperationsOutcome(o.GetError());
    }
    else
    {
        return ListEisConnectorOperationsOutcome(outcome.GetError());
    }
}

void EisClient::ListEisConnectorOperationsAsync(const ListEisConnectorOperationsRequest& request, const ListEisConnectorOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListEisConnectorOperationsRequest&;
    using Resp = ListEisConnectorOperationsResponse;

    DoRequestAsync<Req, Resp>(
        "ListEisConnectorOperations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EisClient::ListEisConnectorOperationsOutcomeCallable EisClient::ListEisConnectorOperationsCallable(const ListEisConnectorOperationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListEisConnectorOperationsOutcome>>();
    ListEisConnectorOperationsAsync(
    request,
    [prom](
        const EisClient*,
        const ListEisConnectorOperationsRequest&,
        ListEisConnectorOperationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EisClient::ListEisConnectorsOutcome EisClient::ListEisConnectors(const ListEisConnectorsRequest &request)
{
    auto outcome = MakeRequest(request, "ListEisConnectors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEisConnectorsResponse rsp = ListEisConnectorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEisConnectorsOutcome(rsp);
        else
            return ListEisConnectorsOutcome(o.GetError());
    }
    else
    {
        return ListEisConnectorsOutcome(outcome.GetError());
    }
}

void EisClient::ListEisConnectorsAsync(const ListEisConnectorsRequest& request, const ListEisConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListEisConnectorsRequest&;
    using Resp = ListEisConnectorsResponse;

    DoRequestAsync<Req, Resp>(
        "ListEisConnectors", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EisClient::ListEisConnectorsOutcomeCallable EisClient::ListEisConnectorsCallable(const ListEisConnectorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListEisConnectorsOutcome>>();
    ListEisConnectorsAsync(
    request,
    [prom](
        const EisClient*,
        const ListEisConnectorsRequest&,
        ListEisConnectorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


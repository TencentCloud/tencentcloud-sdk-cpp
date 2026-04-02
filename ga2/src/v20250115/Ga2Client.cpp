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

#include <tencentcloud/ga2/v20250115/Ga2Client.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ga2::V20250115;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-01-15";
    const string ENDPOINT = "ga2.tencentcloudapi.com";
}

Ga2Client::Ga2Client(const Credential &credential, const string &region) :
    Ga2Client(credential, region, ClientProfile())
{
}

Ga2Client::Ga2Client(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


Ga2Client::CreateGlobalAcceleratorOutcome Ga2Client::CreateGlobalAccelerator(const CreateGlobalAcceleratorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlobalAccelerator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlobalAcceleratorResponse rsp = CreateGlobalAcceleratorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlobalAcceleratorOutcome(rsp);
        else
            return CreateGlobalAcceleratorOutcome(o.GetError());
    }
    else
    {
        return CreateGlobalAcceleratorOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateGlobalAcceleratorAsync(const CreateGlobalAcceleratorRequest& request, const CreateGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGlobalAcceleratorRequest&;
    using Resp = CreateGlobalAcceleratorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlobalAccelerator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateGlobalAcceleratorOutcomeCallable Ga2Client::CreateGlobalAcceleratorCallable(const CreateGlobalAcceleratorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlobalAcceleratorOutcome>>();
    CreateGlobalAcceleratorAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateGlobalAcceleratorRequest&,
        CreateGlobalAcceleratorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DescribeCrossBorderSettlementOutcome Ga2Client::DescribeCrossBorderSettlement(const DescribeCrossBorderSettlementRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossBorderSettlement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossBorderSettlementResponse rsp = DescribeCrossBorderSettlementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossBorderSettlementOutcome(rsp);
        else
            return DescribeCrossBorderSettlementOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossBorderSettlementOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeCrossBorderSettlementAsync(const DescribeCrossBorderSettlementRequest& request, const DescribeCrossBorderSettlementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCrossBorderSettlementRequest&;
    using Resp = DescribeCrossBorderSettlementResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCrossBorderSettlement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeCrossBorderSettlementOutcomeCallable Ga2Client::DescribeCrossBorderSettlementCallable(const DescribeCrossBorderSettlementRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCrossBorderSettlementOutcome>>();
    DescribeCrossBorderSettlementAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeCrossBorderSettlementRequest&,
        DescribeCrossBorderSettlementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


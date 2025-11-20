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

#include <tencentcloud/yunsou/v20191115/YunsouClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Yunsou::V20191115;
using namespace TencentCloud::Yunsou::V20191115::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-11-15";
    const string ENDPOINT = "yunsou.tencentcloudapi.com";
}

YunsouClient::YunsouClient(const Credential &credential, const string &region) :
    YunsouClient(credential, region, ClientProfile())
{
}

YunsouClient::YunsouClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


YunsouClient::DataManipulationOutcome YunsouClient::DataManipulation(const DataManipulationRequest &request)
{
    auto outcome = MakeRequest(request, "DataManipulation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DataManipulationResponse rsp = DataManipulationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DataManipulationOutcome(rsp);
        else
            return DataManipulationOutcome(o.GetError());
    }
    else
    {
        return DataManipulationOutcome(outcome.GetError());
    }
}

void YunsouClient::DataManipulationAsync(const DataManipulationRequest& request, const DataManipulationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DataManipulationRequest&;
    using Resp = DataManipulationResponse;

    DoRequestAsync<Req, Resp>(
        "DataManipulation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunsouClient::DataManipulationOutcomeCallable YunsouClient::DataManipulationCallable(const DataManipulationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DataManipulationOutcome>>();
    DataManipulationAsync(
    request,
    [prom](
        const YunsouClient*,
        const DataManipulationRequest&,
        DataManipulationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

YunsouClient::DataSearchOutcome YunsouClient::DataSearch(const DataSearchRequest &request)
{
    auto outcome = MakeRequest(request, "DataSearch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DataSearchResponse rsp = DataSearchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DataSearchOutcome(rsp);
        else
            return DataSearchOutcome(o.GetError());
    }
    else
    {
        return DataSearchOutcome(outcome.GetError());
    }
}

void YunsouClient::DataSearchAsync(const DataSearchRequest& request, const DataSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DataSearchRequest&;
    using Resp = DataSearchResponse;

    DoRequestAsync<Req, Resp>(
        "DataSearch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

YunsouClient::DataSearchOutcomeCallable YunsouClient::DataSearchCallable(const DataSearchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DataSearchOutcome>>();
    DataSearchAsync(
    request,
    [prom](
        const YunsouClient*,
        const DataSearchRequest&,
        DataSearchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


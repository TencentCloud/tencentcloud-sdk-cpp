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

#include <tencentcloud/cim/v20190318/CimClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cim::V20190318;
using namespace TencentCloud::Cim::V20190318::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-18";
    const string ENDPOINT = "cim.tencentcloudapi.com";
}

CimClient::CimClient(const Credential &credential, const string &region) :
    CimClient(credential, region, ClientProfile())
{
}

CimClient::CimClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CimClient::DescribeSdkAppidOutcome CimClient::DescribeSdkAppid(const DescribeSdkAppidRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSdkAppid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSdkAppidResponse rsp = DescribeSdkAppidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSdkAppidOutcome(rsp);
        else
            return DescribeSdkAppidOutcome(o.GetError());
    }
    else
    {
        return DescribeSdkAppidOutcome(outcome.GetError());
    }
}

void CimClient::DescribeSdkAppidAsync(const DescribeSdkAppidRequest& request, const DescribeSdkAppidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSdkAppidRequest&;
    using Resp = DescribeSdkAppidResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSdkAppid", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CimClient::DescribeSdkAppidOutcomeCallable CimClient::DescribeSdkAppidCallable(const DescribeSdkAppidRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSdkAppidOutcome>>();
    DescribeSdkAppidAsync(
    request,
    [prom](
        const CimClient*,
        const DescribeSdkAppidRequest&,
        DescribeSdkAppidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


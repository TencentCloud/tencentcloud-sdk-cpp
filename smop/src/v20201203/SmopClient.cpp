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

#include <tencentcloud/smop/v20201203/SmopClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Smop::V20201203;
using namespace TencentCloud::Smop::V20201203::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-03";
    const string ENDPOINT = "smop.tencentcloudapi.com";
}

SmopClient::SmopClient(const Credential &credential, const string &region) :
    SmopClient(credential, region, ClientProfile())
{
}

SmopClient::SmopClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SmopClient::SubmitTaskEventOutcome SmopClient::SubmitTaskEvent(const SubmitTaskEventRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTaskEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTaskEventResponse rsp = SubmitTaskEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTaskEventOutcome(rsp);
        else
            return SubmitTaskEventOutcome(o.GetError());
    }
    else
    {
        return SubmitTaskEventOutcome(outcome.GetError());
    }
}

void SmopClient::SubmitTaskEventAsync(const SubmitTaskEventRequest& request, const SubmitTaskEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitTaskEventRequest&;
    using Resp = SubmitTaskEventResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitTaskEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SmopClient::SubmitTaskEventOutcomeCallable SmopClient::SubmitTaskEventCallable(const SubmitTaskEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitTaskEventOutcome>>();
    SubmitTaskEventAsync(
    request,
    [prom](
        const SmopClient*,
        const SubmitTaskEventRequest&,
        SubmitTaskEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


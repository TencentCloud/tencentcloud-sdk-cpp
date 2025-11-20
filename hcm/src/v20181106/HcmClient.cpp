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

#include <tencentcloud/hcm/v20181106/HcmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Hcm::V20181106;
using namespace TencentCloud::Hcm::V20181106::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-11-06";
    const string ENDPOINT = "hcm.tencentcloudapi.com";
}

HcmClient::HcmClient(const Credential &credential, const string &region) :
    HcmClient(credential, region, ClientProfile())
{
}

HcmClient::HcmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


HcmClient::EvaluationOutcome HcmClient::Evaluation(const EvaluationRequest &request)
{
    auto outcome = MakeRequest(request, "Evaluation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EvaluationResponse rsp = EvaluationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EvaluationOutcome(rsp);
        else
            return EvaluationOutcome(o.GetError());
    }
    else
    {
        return EvaluationOutcome(outcome.GetError());
    }
}

void HcmClient::EvaluationAsync(const EvaluationRequest& request, const EvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EvaluationRequest&;
    using Resp = EvaluationResponse;

    DoRequestAsync<Req, Resp>(
        "Evaluation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HcmClient::EvaluationOutcomeCallable HcmClient::EvaluationCallable(const EvaluationRequest &request)
{
    const auto prom = std::make_shared<std::promise<EvaluationOutcome>>();
    EvaluationAsync(
    request,
    [prom](
        const HcmClient*,
        const EvaluationRequest&,
        EvaluationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


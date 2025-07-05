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

#include <tencentcloud/trdp/v20220726/TrdpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trdp::V20220726;
using namespace TencentCloud::Trdp::V20220726::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-07-26";
    const string ENDPOINT = "trdp.tencentcloudapi.com";
}

TrdpClient::TrdpClient(const Credential &credential, const string &region) :
    TrdpClient(credential, region, ClientProfile())
{
}

TrdpClient::TrdpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrdpClient::EvaluateUserRiskOutcome TrdpClient::EvaluateUserRisk(const EvaluateUserRiskRequest &request)
{
    auto outcome = MakeRequest(request, "EvaluateUserRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EvaluateUserRiskResponse rsp = EvaluateUserRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EvaluateUserRiskOutcome(rsp);
        else
            return EvaluateUserRiskOutcome(o.GetError());
    }
    else
    {
        return EvaluateUserRiskOutcome(outcome.GetError());
    }
}

void TrdpClient::EvaluateUserRiskAsync(const EvaluateUserRiskRequest& request, const EvaluateUserRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EvaluateUserRisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrdpClient::EvaluateUserRiskOutcomeCallable TrdpClient::EvaluateUserRiskCallable(const EvaluateUserRiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EvaluateUserRiskOutcome()>>(
        [this, request]()
        {
            return this->EvaluateUserRisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


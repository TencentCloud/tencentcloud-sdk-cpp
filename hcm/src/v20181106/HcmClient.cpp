/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Evaluation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HcmClient::EvaluationOutcomeCallable HcmClient::EvaluationCallable(const EvaluationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EvaluationOutcome()>>(
        [this, request]()
        {
            return this->Evaluation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


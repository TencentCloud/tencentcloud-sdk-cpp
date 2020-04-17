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

#include <tencentcloud/mvj/v20190926/MvjClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mvj::V20190926;
using namespace TencentCloud::Mvj::V20190926::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-26";
    const string ENDPOINT = "mvj.tencentcloudapi.com";
}

MvjClient::MvjClient(const Credential &credential, const string &region) :
    MvjClient(credential, region, ClientProfile())
{
}

MvjClient::MvjClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MvjClient::MarketingValueJudgementOutcome MvjClient::MarketingValueJudgement(const MarketingValueJudgementRequest &request)
{
    auto outcome = MakeRequest(request, "MarketingValueJudgement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MarketingValueJudgementResponse rsp = MarketingValueJudgementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MarketingValueJudgementOutcome(rsp);
        else
            return MarketingValueJudgementOutcome(o.GetError());
    }
    else
    {
        return MarketingValueJudgementOutcome(outcome.GetError());
    }
}

void MvjClient::MarketingValueJudgementAsync(const MarketingValueJudgementRequest& request, const MarketingValueJudgementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MarketingValueJudgement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MvjClient::MarketingValueJudgementOutcomeCallable MvjClient::MarketingValueJudgementCallable(const MarketingValueJudgementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MarketingValueJudgementOutcome()>>(
        [this, request]()
        {
            return this->MarketingValueJudgement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


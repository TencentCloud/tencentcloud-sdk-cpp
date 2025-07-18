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

#include <tencentcloud/taf/v20200210/TafClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Taf::V20200210;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-10";
    const string ENDPOINT = "taf.tencentcloudapi.com";
}

TafClient::TafClient(const Credential &credential, const string &region) :
    TafClient(credential, region, ClientProfile())
{
}

TafClient::TafClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TafClient::ManagePortraitRiskOutcome TafClient::ManagePortraitRisk(const ManagePortraitRiskRequest &request)
{
    auto outcome = MakeRequest(request, "ManagePortraitRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManagePortraitRiskResponse rsp = ManagePortraitRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManagePortraitRiskOutcome(rsp);
        else
            return ManagePortraitRiskOutcome(o.GetError());
    }
    else
    {
        return ManagePortraitRiskOutcome(outcome.GetError());
    }
}

void TafClient::ManagePortraitRiskAsync(const ManagePortraitRiskRequest& request, const ManagePortraitRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManagePortraitRisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TafClient::ManagePortraitRiskOutcomeCallable TafClient::ManagePortraitRiskCallable(const ManagePortraitRiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManagePortraitRiskOutcome()>>(
        [this, request]()
        {
            return this->ManagePortraitRisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


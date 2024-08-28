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

#include <tencentcloud/controlcenter/v20230110/ControlcenterClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Controlcenter::V20230110;
using namespace TencentCloud::Controlcenter::V20230110::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-01-10";
    const string ENDPOINT = "controlcenter.tencentcloudapi.com";
}

ControlcenterClient::ControlcenterClient(const Credential &credential, const string &region) :
    ControlcenterClient(credential, region, ClientProfile())
{
}

ControlcenterClient::ControlcenterClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ControlcenterClient::BatchApplyAccountBaselinesOutcome ControlcenterClient::BatchApplyAccountBaselines(const BatchApplyAccountBaselinesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchApplyAccountBaselines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchApplyAccountBaselinesResponse rsp = BatchApplyAccountBaselinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchApplyAccountBaselinesOutcome(rsp);
        else
            return BatchApplyAccountBaselinesOutcome(o.GetError());
    }
    else
    {
        return BatchApplyAccountBaselinesOutcome(outcome.GetError());
    }
}

void ControlcenterClient::BatchApplyAccountBaselinesAsync(const BatchApplyAccountBaselinesRequest& request, const BatchApplyAccountBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchApplyAccountBaselines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ControlcenterClient::BatchApplyAccountBaselinesOutcomeCallable ControlcenterClient::BatchApplyAccountBaselinesCallable(const BatchApplyAccountBaselinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchApplyAccountBaselinesOutcome()>>(
        [this, request]()
        {
            return this->BatchApplyAccountBaselines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


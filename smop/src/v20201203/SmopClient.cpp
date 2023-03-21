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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitTaskEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmopClient::SubmitTaskEventOutcomeCallable SmopClient::SubmitTaskEventCallable(const SubmitTaskEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitTaskEventOutcome()>>(
        [this, request]()
        {
            return this->SubmitTaskEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


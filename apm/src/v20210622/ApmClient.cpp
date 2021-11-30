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

#include <tencentcloud/apm/v20210622/ApmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Apm::V20210622;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-22";
    const string ENDPOINT = "apm.tencentcloudapi.com";
}

ApmClient::ApmClient(const Credential &credential, const string &region) :
    ApmClient(credential, region, ClientProfile())
{
}

ApmClient::ApmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ApmClient::DescribeApmAgentOutcome ApmClient::DescribeApmAgent(const DescribeApmAgentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApmAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApmAgentResponse rsp = DescribeApmAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApmAgentOutcome(rsp);
        else
            return DescribeApmAgentOutcome(o.GetError());
    }
    else
    {
        return DescribeApmAgentOutcome(outcome.GetError());
    }
}

void ApmClient::DescribeApmAgentAsync(const DescribeApmAgentRequest& request, const DescribeApmAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApmAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApmClient::DescribeApmAgentOutcomeCallable ApmClient::DescribeApmAgentCallable(const DescribeApmAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApmAgentOutcome()>>(
        [this, request]()
        {
            return this->DescribeApmAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


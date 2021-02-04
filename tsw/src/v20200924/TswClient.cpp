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

#include <tencentcloud/tsw/v20200924/TswClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tsw::V20200924;
using namespace TencentCloud::Tsw::V20200924::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-09-24";
    const string ENDPOINT = "tsw.tencentcloudapi.com";
}

TswClient::TswClient(const Credential &credential, const string &region) :
    TswClient(credential, region, ClientProfile())
{
}

TswClient::TswClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TswClient::DescribeAgentShellOutcome TswClient::DescribeAgentShell(const DescribeAgentShellRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentShell");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentShellResponse rsp = DescribeAgentShellResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentShellOutcome(rsp);
        else
            return DescribeAgentShellOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentShellOutcome(outcome.GetError());
    }
}

void TswClient::DescribeAgentShellAsync(const DescribeAgentShellRequest& request, const DescribeAgentShellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentShell(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TswClient::DescribeAgentShellOutcomeCallable TswClient::DescribeAgentShellCallable(const DescribeAgentShellRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentShellOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentShell(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


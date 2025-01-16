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

#include <tencentcloud/vpc/v20170312/VpcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vpc::V20170312;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "vpc.tencentcloudapi.com";
}

VpcClient::VpcClient(const Credential &credential, const string &region) :
    VpcClient(credential, region, ClientProfile())
{
}

VpcClient::VpcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VpcClient::DescribeNatsEipsInternalOutcome VpcClient::DescribeNatsEipsInternal(const DescribeNatsEipsInternalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatsEipsInternal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatsEipsInternalResponse rsp = DescribeNatsEipsInternalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatsEipsInternalOutcome(rsp);
        else
            return DescribeNatsEipsInternalOutcome(o.GetError());
    }
    else
    {
        return DescribeNatsEipsInternalOutcome(outcome.GetError());
    }
}

void VpcClient::DescribeNatsEipsInternalAsync(const DescribeNatsEipsInternalRequest& request, const DescribeNatsEipsInternalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNatsEipsInternal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VpcClient::DescribeNatsEipsInternalOutcomeCallable VpcClient::DescribeNatsEipsInternalCallable(const DescribeNatsEipsInternalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNatsEipsInternalOutcome()>>(
        [this, request]()
        {
            return this->DescribeNatsEipsInternal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


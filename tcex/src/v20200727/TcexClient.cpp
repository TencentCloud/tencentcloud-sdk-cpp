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

#include <tencentcloud/tcex/v20200727/TcexClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcex::V20200727;
using namespace TencentCloud::Tcex::V20200727::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-27";
    const string ENDPOINT = "tcex.tencentcloudapi.com";
}

TcexClient::TcexClient(const Credential &credential, const string &region) :
    TcexClient(credential, region, ClientProfile())
{
}

TcexClient::TcexClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcexClient::DescribeInvocationResultOutcome TcexClient::DescribeInvocationResult(const DescribeInvocationResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvocationResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvocationResultResponse rsp = DescribeInvocationResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvocationResultOutcome(rsp);
        else
            return DescribeInvocationResultOutcome(o.GetError());
    }
    else
    {
        return DescribeInvocationResultOutcome(outcome.GetError());
    }
}

void TcexClient::DescribeInvocationResultAsync(const DescribeInvocationResultRequest& request, const DescribeInvocationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInvocationResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcexClient::DescribeInvocationResultOutcomeCallable TcexClient::DescribeInvocationResultCallable(const DescribeInvocationResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInvocationResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeInvocationResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcexClient::InvokeServiceOutcome TcexClient::InvokeService(const InvokeServiceRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeServiceResponse rsp = InvokeServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeServiceOutcome(rsp);
        else
            return InvokeServiceOutcome(o.GetError());
    }
    else
    {
        return InvokeServiceOutcome(outcome.GetError());
    }
}

void TcexClient::InvokeServiceAsync(const InvokeServiceRequest& request, const InvokeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InvokeService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcexClient::InvokeServiceOutcomeCallable TcexClient::InvokeServiceCallable(const InvokeServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeServiceOutcome()>>(
        [this, request]()
        {
            return this->InvokeService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


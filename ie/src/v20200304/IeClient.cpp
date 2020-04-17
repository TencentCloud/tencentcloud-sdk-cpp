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

#include <tencentcloud/ie/v20200304/IeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ie::V20200304;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-04";
    const string ENDPOINT = "ie.tencentcloudapi.com";
}

IeClient::IeClient(const Credential &credential, const string &region) :
    IeClient(credential, region, ClientProfile())
{
}

IeClient::IeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IeClient::CreateEditingTaskOutcome IeClient::CreateEditingTask(const CreateEditingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEditingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEditingTaskResponse rsp = CreateEditingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEditingTaskOutcome(rsp);
        else
            return CreateEditingTaskOutcome(o.GetError());
    }
    else
    {
        return CreateEditingTaskOutcome(outcome.GetError());
    }
}

void IeClient::CreateEditingTaskAsync(const CreateEditingTaskRequest& request, const CreateEditingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEditingTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IeClient::CreateEditingTaskOutcomeCallable IeClient::CreateEditingTaskCallable(const CreateEditingTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEditingTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateEditingTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IeClient::DescribeEditingTaskResultOutcome IeClient::DescribeEditingTaskResult(const DescribeEditingTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEditingTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEditingTaskResultResponse rsp = DescribeEditingTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEditingTaskResultOutcome(rsp);
        else
            return DescribeEditingTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeEditingTaskResultOutcome(outcome.GetError());
    }
}

void IeClient::DescribeEditingTaskResultAsync(const DescribeEditingTaskResultRequest& request, const DescribeEditingTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEditingTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IeClient::DescribeEditingTaskResultOutcomeCallable IeClient::DescribeEditingTaskResultCallable(const DescribeEditingTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEditingTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeEditingTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


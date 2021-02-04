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

#include <tencentcloud/cii/v20201210/CiiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cii::V20201210;
using namespace TencentCloud::Cii::V20201210::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-10";
    const string ENDPOINT = "cii.tencentcloudapi.com";
}

CiiClient::CiiClient(const Credential &credential, const string &region) :
    CiiClient(credential, region, ClientProfile())
{
}

CiiClient::CiiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CiiClient::CreateStructureTaskOutcome CiiClient::CreateStructureTask(const CreateStructureTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStructureTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStructureTaskResponse rsp = CreateStructureTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStructureTaskOutcome(rsp);
        else
            return CreateStructureTaskOutcome(o.GetError());
    }
    else
    {
        return CreateStructureTaskOutcome(outcome.GetError());
    }
}

void CiiClient::CreateStructureTaskAsync(const CreateStructureTaskRequest& request, const CreateStructureTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStructureTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::CreateStructureTaskOutcomeCallable CiiClient::CreateStructureTaskCallable(const CreateStructureTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStructureTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateStructureTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::DescribeStructCompareDataOutcome CiiClient::DescribeStructCompareData(const DescribeStructCompareDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructCompareData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructCompareDataResponse rsp = DescribeStructCompareDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructCompareDataOutcome(rsp);
        else
            return DescribeStructCompareDataOutcome(o.GetError());
    }
    else
    {
        return DescribeStructCompareDataOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructCompareDataAsync(const DescribeStructCompareDataRequest& request, const DescribeStructCompareDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStructCompareData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::DescribeStructCompareDataOutcomeCallable CiiClient::DescribeStructCompareDataCallable(const DescribeStructCompareDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStructCompareDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeStructCompareData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::DescribeStructureTaskResultOutcome CiiClient::DescribeStructureTaskResult(const DescribeStructureTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructureTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructureTaskResultResponse rsp = DescribeStructureTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructureTaskResultOutcome(rsp);
        else
            return DescribeStructureTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeStructureTaskResultOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructureTaskResultAsync(const DescribeStructureTaskResultRequest& request, const DescribeStructureTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStructureTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::DescribeStructureTaskResultOutcomeCallable CiiClient::DescribeStructureTaskResultCallable(const DescribeStructureTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStructureTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeStructureTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


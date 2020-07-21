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

#include <tencentcloud/ams/v20200608/AmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ams::V20200608;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-06-08";
    const string ENDPOINT = "ams.tencentcloudapi.com";
}

AmsClient::AmsClient(const Credential &credential, const string &region) :
    AmsClient(credential, region, ClientProfile())
{
}

AmsClient::AmsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AmsClient::CreateAudioModerationTaskOutcome AmsClient::CreateAudioModerationTask(const CreateAudioModerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAudioModerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAudioModerationTaskResponse rsp = CreateAudioModerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAudioModerationTaskOutcome(rsp);
        else
            return CreateAudioModerationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAudioModerationTaskOutcome(outcome.GetError());
    }
}

void AmsClient::CreateAudioModerationTaskAsync(const CreateAudioModerationTaskRequest& request, const CreateAudioModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAudioModerationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmsClient::CreateAudioModerationTaskOutcomeCallable AmsClient::CreateAudioModerationTaskCallable(const CreateAudioModerationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAudioModerationTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAudioModerationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmsClient::DescribeTaskDetailOutcome AmsClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void AmsClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmsClient::DescribeTaskDetailOutcomeCallable AmsClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


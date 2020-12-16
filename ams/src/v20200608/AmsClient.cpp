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


AmsClient::CancelTaskOutcome AmsClient::CancelTask(const CancelTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelTaskResponse rsp = CancelTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelTaskOutcome(rsp);
        else
            return CancelTaskOutcome(o.GetError());
    }
    else
    {
        return CancelTaskOutcome(outcome.GetError());
    }
}

void AmsClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmsClient::CancelTaskOutcomeCallable AmsClient::CancelTaskCallable(const CancelTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelTaskOutcome()>>(
        [this, request]()
        {
            return this->CancelTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

AmsClient::CreateBizConfigOutcome AmsClient::CreateBizConfig(const CreateBizConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBizConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBizConfigResponse rsp = CreateBizConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBizConfigOutcome(rsp);
        else
            return CreateBizConfigOutcome(o.GetError());
    }
    else
    {
        return CreateBizConfigOutcome(outcome.GetError());
    }
}

void AmsClient::CreateBizConfigAsync(const CreateBizConfigRequest& request, const CreateBizConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBizConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmsClient::CreateBizConfigOutcomeCallable AmsClient::CreateBizConfigCallable(const CreateBizConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBizConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateBizConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmsClient::DescribeAmsListOutcome AmsClient::DescribeAmsList(const DescribeAmsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAmsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAmsListResponse rsp = DescribeAmsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAmsListOutcome(rsp);
        else
            return DescribeAmsListOutcome(o.GetError());
    }
    else
    {
        return DescribeAmsListOutcome(outcome.GetError());
    }
}

void AmsClient::DescribeAmsListAsync(const DescribeAmsListRequest& request, const DescribeAmsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAmsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmsClient::DescribeAmsListOutcomeCallable AmsClient::DescribeAmsListCallable(const DescribeAmsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAmsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAmsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmsClient::DescribeAudioStatOutcome AmsClient::DescribeAudioStat(const DescribeAudioStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAudioStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAudioStatResponse rsp = DescribeAudioStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAudioStatOutcome(rsp);
        else
            return DescribeAudioStatOutcome(o.GetError());
    }
    else
    {
        return DescribeAudioStatOutcome(outcome.GetError());
    }
}

void AmsClient::DescribeAudioStatAsync(const DescribeAudioStatRequest& request, const DescribeAudioStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAudioStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmsClient::DescribeAudioStatOutcomeCallable AmsClient::DescribeAudioStatCallable(const DescribeAudioStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAudioStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeAudioStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AmsClient::DescribeBizConfigOutcome AmsClient::DescribeBizConfig(const DescribeBizConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBizConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBizConfigResponse rsp = DescribeBizConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBizConfigOutcome(rsp);
        else
            return DescribeBizConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeBizConfigOutcome(outcome.GetError());
    }
}

void AmsClient::DescribeBizConfigAsync(const DescribeBizConfigRequest& request, const DescribeBizConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBizConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AmsClient::DescribeBizConfigOutcomeCallable AmsClient::DescribeBizConfigCallable(const DescribeBizConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBizConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeBizConfig(request);
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


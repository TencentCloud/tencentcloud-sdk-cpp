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

#include <tencentcloud/dts/v20180330/DtsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dts::V20180330;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-30";
    const string ENDPOINT = "dts.tencentcloudapi.com";
}

DtsClient::DtsClient(const Credential &credential, const string &region) :
    DtsClient(credential, region, ClientProfile())
{
}

DtsClient::DtsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DtsClient::ActivateSubscribeOutcome DtsClient::ActivateSubscribe(const ActivateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateSubscribeResponse rsp = ActivateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateSubscribeOutcome(rsp);
        else
            return ActivateSubscribeOutcome(o.GetError());
    }
    else
    {
        return ActivateSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::ActivateSubscribeAsync(const ActivateSubscribeRequest& request, const ActivateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ActivateSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ActivateSubscribeOutcomeCallable DtsClient::ActivateSubscribeCallable(const ActivateSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ActivateSubscribeOutcome()>>(
        [this, request]()
        {
            return this->ActivateSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CompleteMigrateJobOutcome DtsClient::CompleteMigrateJob(const CompleteMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteMigrateJobResponse rsp = CompleteMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteMigrateJobOutcome(rsp);
        else
            return CompleteMigrateJobOutcome(o.GetError());
    }
    else
    {
        return CompleteMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::CompleteMigrateJobAsync(const CompleteMigrateJobRequest& request, const CompleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CompleteMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CompleteMigrateJobOutcomeCallable DtsClient::CompleteMigrateJobCallable(const CompleteMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CompleteMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->CompleteMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateMigrateCheckJobOutcome DtsClient::CreateMigrateCheckJob(const CreateMigrateCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigrateCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrateCheckJobResponse rsp = CreateMigrateCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrateCheckJobOutcome(rsp);
        else
            return CreateMigrateCheckJobOutcome(o.GetError());
    }
    else
    {
        return CreateMigrateCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateMigrateCheckJobAsync(const CreateMigrateCheckJobRequest& request, const CreateMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMigrateCheckJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateMigrateCheckJobOutcomeCallable DtsClient::CreateMigrateCheckJobCallable(const CreateMigrateCheckJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMigrateCheckJobOutcome()>>(
        [this, request]()
        {
            return this->CreateMigrateCheckJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateMigrateJobOutcome DtsClient::CreateMigrateJob(const CreateMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrateJobResponse rsp = CreateMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrateJobOutcome(rsp);
        else
            return CreateMigrateJobOutcome(o.GetError());
    }
    else
    {
        return CreateMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateMigrateJobAsync(const CreateMigrateJobRequest& request, const CreateMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateMigrateJobOutcomeCallable DtsClient::CreateMigrateJobCallable(const CreateMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->CreateMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateSubscribeOutcome DtsClient::CreateSubscribe(const CreateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubscribeResponse rsp = CreateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubscribeOutcome(rsp);
        else
            return CreateSubscribeOutcome(o.GetError());
    }
    else
    {
        return CreateSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSubscribeAsync(const CreateSubscribeRequest& request, const CreateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateSubscribeOutcomeCallable DtsClient::CreateSubscribeCallable(const CreateSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubscribeOutcome()>>(
        [this, request]()
        {
            return this->CreateSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateSyncCheckJobOutcome DtsClient::CreateSyncCheckJob(const CreateSyncCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSyncCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSyncCheckJobResponse rsp = CreateSyncCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSyncCheckJobOutcome(rsp);
        else
            return CreateSyncCheckJobOutcome(o.GetError());
    }
    else
    {
        return CreateSyncCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSyncCheckJobAsync(const CreateSyncCheckJobRequest& request, const CreateSyncCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSyncCheckJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateSyncCheckJobOutcomeCallable DtsClient::CreateSyncCheckJobCallable(const CreateSyncCheckJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSyncCheckJobOutcome()>>(
        [this, request]()
        {
            return this->CreateSyncCheckJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::CreateSyncJobOutcome DtsClient::CreateSyncJob(const CreateSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSyncJobResponse rsp = CreateSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSyncJobOutcome(rsp);
        else
            return CreateSyncJobOutcome(o.GetError());
    }
    else
    {
        return CreateSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSyncJobAsync(const CreateSyncJobRequest& request, const CreateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::CreateSyncJobOutcomeCallable DtsClient::CreateSyncJobCallable(const CreateSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSyncJobOutcome()>>(
        [this, request]()
        {
            return this->CreateSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DeleteMigrateJobOutcome DtsClient::DeleteMigrateJob(const DeleteMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMigrateJobResponse rsp = DeleteMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMigrateJobOutcome(rsp);
        else
            return DeleteMigrateJobOutcome(o.GetError());
    }
    else
    {
        return DeleteMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::DeleteMigrateJobAsync(const DeleteMigrateJobRequest& request, const DeleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DeleteMigrateJobOutcomeCallable DtsClient::DeleteMigrateJobCallable(const DeleteMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->DeleteMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DeleteSyncJobOutcome DtsClient::DeleteSyncJob(const DeleteSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSyncJobResponse rsp = DeleteSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSyncJobOutcome(rsp);
        else
            return DeleteSyncJobOutcome(o.GetError());
    }
    else
    {
        return DeleteSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::DeleteSyncJobAsync(const DeleteSyncJobRequest& request, const DeleteSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DeleteSyncJobOutcomeCallable DtsClient::DeleteSyncJobCallable(const DeleteSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSyncJobOutcome()>>(
        [this, request]()
        {
            return this->DeleteSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeAsyncRequestInfoOutcome DtsClient::DescribeAsyncRequestInfo(const DescribeAsyncRequestInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncRequestInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncRequestInfoResponse rsp = DescribeAsyncRequestInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncRequestInfoOutcome(rsp);
        else
            return DescribeAsyncRequestInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncRequestInfoOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeAsyncRequestInfoAsync(const DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsyncRequestInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeAsyncRequestInfoOutcomeCallable DtsClient::DescribeAsyncRequestInfoCallable(const DescribeAsyncRequestInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsyncRequestInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsyncRequestInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeMigrateCheckJobOutcome DtsClient::DescribeMigrateCheckJob(const DescribeMigrateCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrateCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrateCheckJobResponse rsp = DescribeMigrateCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrateCheckJobOutcome(rsp);
        else
            return DescribeMigrateCheckJobOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrateCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrateCheckJobAsync(const DescribeMigrateCheckJobRequest& request, const DescribeMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrateCheckJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeMigrateCheckJobOutcomeCallable DtsClient::DescribeMigrateCheckJobCallable(const DescribeMigrateCheckJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrateCheckJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrateCheckJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeMigrateJobsOutcome DtsClient::DescribeMigrateJobs(const DescribeMigrateJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrateJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrateJobsResponse rsp = DescribeMigrateJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrateJobsOutcome(rsp);
        else
            return DescribeMigrateJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrateJobsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrateJobsAsync(const DescribeMigrateJobsRequest& request, const DescribeMigrateJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrateJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeMigrateJobsOutcomeCallable DtsClient::DescribeMigrateJobsCallable(const DescribeMigrateJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrateJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrateJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeRegionConfOutcome DtsClient::DescribeRegionConf(const DescribeRegionConfRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegionConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionConfResponse rsp = DescribeRegionConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionConfOutcome(rsp);
        else
            return DescribeRegionConfOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionConfOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeRegionConfAsync(const DescribeRegionConfRequest& request, const DescribeRegionConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegionConf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeRegionConfOutcomeCallable DtsClient::DescribeRegionConfCallable(const DescribeRegionConfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionConfOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegionConf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeSubscribeConfOutcome DtsClient::DescribeSubscribeConf(const DescribeSubscribeConfRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribeConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribeConfResponse rsp = DescribeSubscribeConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribeConfOutcome(rsp);
        else
            return DescribeSubscribeConfOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribeConfOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribeConfAsync(const DescribeSubscribeConfRequest& request, const DescribeSubscribeConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubscribeConf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeSubscribeConfOutcomeCallable DtsClient::DescribeSubscribeConfCallable(const DescribeSubscribeConfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubscribeConfOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubscribeConf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeSubscribesOutcome DtsClient::DescribeSubscribes(const DescribeSubscribesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribesResponse rsp = DescribeSubscribesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribesOutcome(rsp);
        else
            return DescribeSubscribesOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribesOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribesAsync(const DescribeSubscribesRequest& request, const DescribeSubscribesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubscribes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeSubscribesOutcomeCallable DtsClient::DescribeSubscribesCallable(const DescribeSubscribesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubscribesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubscribes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeSyncCheckJobOutcome DtsClient::DescribeSyncCheckJob(const DescribeSyncCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSyncCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSyncCheckJobResponse rsp = DescribeSyncCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSyncCheckJobOutcome(rsp);
        else
            return DescribeSyncCheckJobOutcome(o.GetError());
    }
    else
    {
        return DescribeSyncCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSyncCheckJobAsync(const DescribeSyncCheckJobRequest& request, const DescribeSyncCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSyncCheckJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeSyncCheckJobOutcomeCallable DtsClient::DescribeSyncCheckJobCallable(const DescribeSyncCheckJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSyncCheckJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeSyncCheckJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::DescribeSyncJobsOutcome DtsClient::DescribeSyncJobs(const DescribeSyncJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSyncJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSyncJobsResponse rsp = DescribeSyncJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSyncJobsOutcome(rsp);
        else
            return DescribeSyncJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeSyncJobsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSyncJobsAsync(const DescribeSyncJobsRequest& request, const DescribeSyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSyncJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::DescribeSyncJobsOutcomeCallable DtsClient::DescribeSyncJobsCallable(const DescribeSyncJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSyncJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSyncJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::IsolateSubscribeOutcome DtsClient::IsolateSubscribe(const IsolateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateSubscribeResponse rsp = IsolateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateSubscribeOutcome(rsp);
        else
            return IsolateSubscribeOutcome(o.GetError());
    }
    else
    {
        return IsolateSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::IsolateSubscribeAsync(const IsolateSubscribeRequest& request, const IsolateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::IsolateSubscribeOutcomeCallable DtsClient::IsolateSubscribeCallable(const IsolateSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateSubscribeOutcome()>>(
        [this, request]()
        {
            return this->IsolateSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifyMigrateJobOutcome DtsClient::ModifyMigrateJob(const ModifyMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrateJobResponse rsp = ModifyMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrateJobOutcome(rsp);
        else
            return ModifyMigrateJobOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrateJobAsync(const ModifyMigrateJobRequest& request, const ModifyMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifyMigrateJobOutcomeCallable DtsClient::ModifyMigrateJobCallable(const ModifyMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->ModifyMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifySubscribeConsumeTimeOutcome DtsClient::ModifySubscribeConsumeTime(const ModifySubscribeConsumeTimeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeConsumeTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeConsumeTimeResponse rsp = ModifySubscribeConsumeTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeConsumeTimeOutcome(rsp);
        else
            return ModifySubscribeConsumeTimeOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeConsumeTimeOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeConsumeTimeAsync(const ModifySubscribeConsumeTimeRequest& request, const ModifySubscribeConsumeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubscribeConsumeTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifySubscribeConsumeTimeOutcomeCallable DtsClient::ModifySubscribeConsumeTimeCallable(const ModifySubscribeConsumeTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubscribeConsumeTimeOutcome()>>(
        [this, request]()
        {
            return this->ModifySubscribeConsumeTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifySubscribeNameOutcome DtsClient::ModifySubscribeName(const ModifySubscribeNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeNameResponse rsp = ModifySubscribeNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeNameOutcome(rsp);
        else
            return ModifySubscribeNameOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeNameOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeNameAsync(const ModifySubscribeNameRequest& request, const ModifySubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubscribeName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifySubscribeNameOutcomeCallable DtsClient::ModifySubscribeNameCallable(const ModifySubscribeNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubscribeNameOutcome()>>(
        [this, request]()
        {
            return this->ModifySubscribeName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifySubscribeObjectsOutcome DtsClient::ModifySubscribeObjects(const ModifySubscribeObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeObjectsResponse rsp = ModifySubscribeObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeObjectsOutcome(rsp);
        else
            return ModifySubscribeObjectsOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeObjectsOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeObjectsAsync(const ModifySubscribeObjectsRequest& request, const ModifySubscribeObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubscribeObjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifySubscribeObjectsOutcomeCallable DtsClient::ModifySubscribeObjectsCallable(const ModifySubscribeObjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubscribeObjectsOutcome()>>(
        [this, request]()
        {
            return this->ModifySubscribeObjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifySubscribeVipVportOutcome DtsClient::ModifySubscribeVipVport(const ModifySubscribeVipVportRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeVipVport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeVipVportResponse rsp = ModifySubscribeVipVportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeVipVportOutcome(rsp);
        else
            return ModifySubscribeVipVportOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeVipVportOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeVipVportAsync(const ModifySubscribeVipVportRequest& request, const ModifySubscribeVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubscribeVipVport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifySubscribeVipVportOutcomeCallable DtsClient::ModifySubscribeVipVportCallable(const ModifySubscribeVipVportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubscribeVipVportOutcome()>>(
        [this, request]()
        {
            return this->ModifySubscribeVipVport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ModifySyncJobOutcome DtsClient::ModifySyncJob(const ModifySyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySyncJobResponse rsp = ModifySyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySyncJobOutcome(rsp);
        else
            return ModifySyncJobOutcome(o.GetError());
    }
    else
    {
        return ModifySyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySyncJobAsync(const ModifySyncJobRequest& request, const ModifySyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ModifySyncJobOutcomeCallable DtsClient::ModifySyncJobCallable(const ModifySyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySyncJobOutcome()>>(
        [this, request]()
        {
            return this->ModifySyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::OfflineIsolatedSubscribeOutcome DtsClient::OfflineIsolatedSubscribe(const OfflineIsolatedSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineIsolatedSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineIsolatedSubscribeResponse rsp = OfflineIsolatedSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineIsolatedSubscribeOutcome(rsp);
        else
            return OfflineIsolatedSubscribeOutcome(o.GetError());
    }
    else
    {
        return OfflineIsolatedSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::OfflineIsolatedSubscribeAsync(const OfflineIsolatedSubscribeRequest& request, const OfflineIsolatedSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OfflineIsolatedSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::OfflineIsolatedSubscribeOutcomeCallable DtsClient::OfflineIsolatedSubscribeCallable(const OfflineIsolatedSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OfflineIsolatedSubscribeOutcome()>>(
        [this, request]()
        {
            return this->OfflineIsolatedSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::ResetSubscribeOutcome DtsClient::ResetSubscribe(const ResetSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ResetSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetSubscribeResponse rsp = ResetSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetSubscribeOutcome(rsp);
        else
            return ResetSubscribeOutcome(o.GetError());
    }
    else
    {
        return ResetSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::ResetSubscribeAsync(const ResetSubscribeRequest& request, const ResetSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::ResetSubscribeOutcomeCallable DtsClient::ResetSubscribeCallable(const ResetSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetSubscribeOutcome()>>(
        [this, request]()
        {
            return this->ResetSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StartMigrateJobOutcome DtsClient::StartMigrateJob(const StartMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMigrateJobResponse rsp = StartMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMigrateJobOutcome(rsp);
        else
            return StartMigrateJobOutcome(o.GetError());
    }
    else
    {
        return StartMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::StartMigrateJobAsync(const StartMigrateJobRequest& request, const StartMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StartMigrateJobOutcomeCallable DtsClient::StartMigrateJobCallable(const StartMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->StartMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StartSyncJobOutcome DtsClient::StartSyncJob(const StartSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartSyncJobResponse rsp = StartSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartSyncJobOutcome(rsp);
        else
            return StartSyncJobOutcome(o.GetError());
    }
    else
    {
        return StartSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::StartSyncJobAsync(const StartSyncJobRequest& request, const StartSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StartSyncJobOutcomeCallable DtsClient::StartSyncJobCallable(const StartSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartSyncJobOutcome()>>(
        [this, request]()
        {
            return this->StartSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::StopMigrateJobOutcome DtsClient::StopMigrateJob(const StopMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "StopMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMigrateJobResponse rsp = StopMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMigrateJobOutcome(rsp);
        else
            return StopMigrateJobOutcome(o.GetError());
    }
    else
    {
        return StopMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::StopMigrateJobAsync(const StopMigrateJobRequest& request, const StopMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMigrateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::StopMigrateJobOutcomeCallable DtsClient::StopMigrateJobCallable(const StopMigrateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMigrateJobOutcome()>>(
        [this, request]()
        {
            return this->StopMigrateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DtsClient::SwitchDrToMasterOutcome DtsClient::SwitchDrToMaster(const SwitchDrToMasterRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDrToMaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDrToMasterResponse rsp = SwitchDrToMasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDrToMasterOutcome(rsp);
        else
            return SwitchDrToMasterOutcome(o.GetError());
    }
    else
    {
        return SwitchDrToMasterOutcome(outcome.GetError());
    }
}

void DtsClient::SwitchDrToMasterAsync(const SwitchDrToMasterRequest& request, const SwitchDrToMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchDrToMaster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DtsClient::SwitchDrToMasterOutcomeCallable DtsClient::SwitchDrToMasterCallable(const SwitchDrToMasterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchDrToMasterOutcome()>>(
        [this, request]()
        {
            return this->SwitchDrToMaster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


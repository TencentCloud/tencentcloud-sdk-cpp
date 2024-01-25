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

#include <tencentcloud/wedata/v20210820/WedataClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wedata::V20210820;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-08-20";
    const string ENDPOINT = "wedata.tencentcloudapi.com";
}

WedataClient::WedataClient(const Credential &credential, const string &region) :
    WedataClient(credential, region, ClientProfile())
{
}

WedataClient::WedataClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WedataClient::AcquireLockOutcome WedataClient::AcquireLock(const AcquireLockRequest &request)
{
    auto outcome = MakeRequest(request, "AcquireLock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcquireLockResponse rsp = AcquireLockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcquireLockOutcome(rsp);
        else
            return AcquireLockOutcome(o.GetError());
    }
    else
    {
        return AcquireLockOutcome(outcome.GetError());
    }
}

void WedataClient::AcquireLockAsync(const AcquireLockRequest& request, const AcquireLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AcquireLock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::AcquireLockOutcomeCallable WedataClient::AcquireLockCallable(const AcquireLockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AcquireLockOutcome()>>(
        [this, request]()
        {
            return this->AcquireLock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::AnalyzeDependentTasksOutcome WedataClient::AnalyzeDependentTasks(const AnalyzeDependentTasksRequest &request)
{
    auto outcome = MakeRequest(request, "AnalyzeDependentTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AnalyzeDependentTasksResponse rsp = AnalyzeDependentTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AnalyzeDependentTasksOutcome(rsp);
        else
            return AnalyzeDependentTasksOutcome(o.GetError());
    }
    else
    {
        return AnalyzeDependentTasksOutcome(outcome.GetError());
    }
}

void WedataClient::AnalyzeDependentTasksAsync(const AnalyzeDependentTasksRequest& request, const AnalyzeDependentTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AnalyzeDependentTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::AnalyzeDependentTasksOutcomeCallable WedataClient::AnalyzeDependentTasksCallable(const AnalyzeDependentTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AnalyzeDependentTasksOutcome()>>(
        [this, request]()
        {
            return this->AnalyzeDependentTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchCreateIntegrationTaskAlarmsOutcome WedataClient::BatchCreateIntegrationTaskAlarms(const BatchCreateIntegrationTaskAlarmsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateIntegrationTaskAlarms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateIntegrationTaskAlarmsResponse rsp = BatchCreateIntegrationTaskAlarmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateIntegrationTaskAlarmsOutcome(rsp);
        else
            return BatchCreateIntegrationTaskAlarmsOutcome(o.GetError());
    }
    else
    {
        return BatchCreateIntegrationTaskAlarmsOutcome(outcome.GetError());
    }
}

void WedataClient::BatchCreateIntegrationTaskAlarmsAsync(const BatchCreateIntegrationTaskAlarmsRequest& request, const BatchCreateIntegrationTaskAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchCreateIntegrationTaskAlarms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchCreateIntegrationTaskAlarmsOutcomeCallable WedataClient::BatchCreateIntegrationTaskAlarmsCallable(const BatchCreateIntegrationTaskAlarmsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchCreateIntegrationTaskAlarmsOutcome()>>(
        [this, request]()
        {
            return this->BatchCreateIntegrationTaskAlarms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchCreateTaskVersionAsyncOutcome WedataClient::BatchCreateTaskVersionAsync(const BatchCreateTaskVersionAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateTaskVersionAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateTaskVersionAsyncResponse rsp = BatchCreateTaskVersionAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateTaskVersionAsyncOutcome(rsp);
        else
            return BatchCreateTaskVersionAsyncOutcome(o.GetError());
    }
    else
    {
        return BatchCreateTaskVersionAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::BatchCreateTaskVersionAsyncAsync(const BatchCreateTaskVersionAsyncRequest& request, const BatchCreateTaskVersionAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchCreateTaskVersionAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchCreateTaskVersionAsyncOutcomeCallable WedataClient::BatchCreateTaskVersionAsyncCallable(const BatchCreateTaskVersionAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchCreateTaskVersionAsyncOutcome()>>(
        [this, request]()
        {
            return this->BatchCreateTaskVersionAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchCreateTaskVersionDsOutcome WedataClient::BatchCreateTaskVersionDs(const BatchCreateTaskVersionDsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateTaskVersionDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateTaskVersionDsResponse rsp = BatchCreateTaskVersionDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateTaskVersionDsOutcome(rsp);
        else
            return BatchCreateTaskVersionDsOutcome(o.GetError());
    }
    else
    {
        return BatchCreateTaskVersionDsOutcome(outcome.GetError());
    }
}

void WedataClient::BatchCreateTaskVersionDsAsync(const BatchCreateTaskVersionDsRequest& request, const BatchCreateTaskVersionDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchCreateTaskVersionDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchCreateTaskVersionDsOutcomeCallable WedataClient::BatchCreateTaskVersionDsCallable(const BatchCreateTaskVersionDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchCreateTaskVersionDsOutcome()>>(
        [this, request]()
        {
            return this->BatchCreateTaskVersionDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchCreateVirtualTaskDsOutcome WedataClient::BatchCreateVirtualTaskDs(const BatchCreateVirtualTaskDsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateVirtualTaskDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateVirtualTaskDsResponse rsp = BatchCreateVirtualTaskDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateVirtualTaskDsOutcome(rsp);
        else
            return BatchCreateVirtualTaskDsOutcome(o.GetError());
    }
    else
    {
        return BatchCreateVirtualTaskDsOutcome(outcome.GetError());
    }
}

void WedataClient::BatchCreateVirtualTaskDsAsync(const BatchCreateVirtualTaskDsRequest& request, const BatchCreateVirtualTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchCreateVirtualTaskDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchCreateVirtualTaskDsOutcomeCallable WedataClient::BatchCreateVirtualTaskDsCallable(const BatchCreateVirtualTaskDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchCreateVirtualTaskDsOutcome()>>(
        [this, request]()
        {
            return this->BatchCreateVirtualTaskDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchDeleteIntegrationTasksOutcome WedataClient::BatchDeleteIntegrationTasks(const BatchDeleteIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteIntegrationTasksResponse rsp = BatchDeleteIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteIntegrationTasksOutcome(rsp);
        else
            return BatchDeleteIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchDeleteIntegrationTasksAsync(const BatchDeleteIntegrationTasksRequest& request, const BatchDeleteIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteIntegrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchDeleteIntegrationTasksOutcomeCallable WedataClient::BatchDeleteIntegrationTasksCallable(const BatchDeleteIntegrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteIntegrationTasksOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteIntegrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchDeleteOpsTasksOutcome WedataClient::BatchDeleteOpsTasks(const BatchDeleteOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteOpsTasksResponse rsp = BatchDeleteOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteOpsTasksOutcome(rsp);
        else
            return BatchDeleteOpsTasksOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchDeleteOpsTasksAsync(const BatchDeleteOpsTasksRequest& request, const BatchDeleteOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteOpsTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchDeleteOpsTasksOutcomeCallable WedataClient::BatchDeleteOpsTasksCallable(const BatchDeleteOpsTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteOpsTasksOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteOpsTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchDeleteTasksDsOutcome WedataClient::BatchDeleteTasksDs(const BatchDeleteTasksDsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteTasksDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteTasksDsResponse rsp = BatchDeleteTasksDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteTasksDsOutcome(rsp);
        else
            return BatchDeleteTasksDsOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteTasksDsOutcome(outcome.GetError());
    }
}

void WedataClient::BatchDeleteTasksDsAsync(const BatchDeleteTasksDsRequest& request, const BatchDeleteTasksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteTasksDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchDeleteTasksDsOutcomeCallable WedataClient::BatchDeleteTasksDsCallable(const BatchDeleteTasksDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteTasksDsOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteTasksDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchDeleteTasksDsAsyncOutcome WedataClient::BatchDeleteTasksDsAsync(const BatchDeleteTasksDsAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteTasksDsAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteTasksDsAsyncResponse rsp = BatchDeleteTasksDsAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteTasksDsAsyncOutcome(rsp);
        else
            return BatchDeleteTasksDsAsyncOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteTasksDsAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::BatchDeleteTasksDsAsyncAsync(const BatchDeleteTasksDsAsyncRequest& request, const BatchDeleteTasksDsAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteTasksDsAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchDeleteTasksDsAsyncOutcomeCallable WedataClient::BatchDeleteTasksDsAsyncCallable(const BatchDeleteTasksDsAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteTasksDsAsyncOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteTasksDsAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchDeleteTasksNewOutcome WedataClient::BatchDeleteTasksNew(const BatchDeleteTasksNewRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteTasksNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteTasksNewResponse rsp = BatchDeleteTasksNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteTasksNewOutcome(rsp);
        else
            return BatchDeleteTasksNewOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteTasksNewOutcome(outcome.GetError());
    }
}

void WedataClient::BatchDeleteTasksNewAsync(const BatchDeleteTasksNewRequest& request, const BatchDeleteTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteTasksNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchDeleteTasksNewOutcomeCallable WedataClient::BatchDeleteTasksNewCallable(const BatchDeleteTasksNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteTasksNewOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteTasksNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchForceSuccessIntegrationTaskInstancesOutcome WedataClient::BatchForceSuccessIntegrationTaskInstances(const BatchForceSuccessIntegrationTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchForceSuccessIntegrationTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchForceSuccessIntegrationTaskInstancesResponse rsp = BatchForceSuccessIntegrationTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchForceSuccessIntegrationTaskInstancesOutcome(rsp);
        else
            return BatchForceSuccessIntegrationTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return BatchForceSuccessIntegrationTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::BatchForceSuccessIntegrationTaskInstancesAsync(const BatchForceSuccessIntegrationTaskInstancesRequest& request, const BatchForceSuccessIntegrationTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchForceSuccessIntegrationTaskInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchForceSuccessIntegrationTaskInstancesOutcomeCallable WedataClient::BatchForceSuccessIntegrationTaskInstancesCallable(const BatchForceSuccessIntegrationTaskInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchForceSuccessIntegrationTaskInstancesOutcome()>>(
        [this, request]()
        {
            return this->BatchForceSuccessIntegrationTaskInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchKillIntegrationTaskInstancesOutcome WedataClient::BatchKillIntegrationTaskInstances(const BatchKillIntegrationTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchKillIntegrationTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchKillIntegrationTaskInstancesResponse rsp = BatchKillIntegrationTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchKillIntegrationTaskInstancesOutcome(rsp);
        else
            return BatchKillIntegrationTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return BatchKillIntegrationTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::BatchKillIntegrationTaskInstancesAsync(const BatchKillIntegrationTaskInstancesRequest& request, const BatchKillIntegrationTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchKillIntegrationTaskInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchKillIntegrationTaskInstancesOutcomeCallable WedataClient::BatchKillIntegrationTaskInstancesCallable(const BatchKillIntegrationTaskInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchKillIntegrationTaskInstancesOutcome()>>(
        [this, request]()
        {
            return this->BatchKillIntegrationTaskInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchMakeUpIntegrationTasksOutcome WedataClient::BatchMakeUpIntegrationTasks(const BatchMakeUpIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchMakeUpIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchMakeUpIntegrationTasksResponse rsp = BatchMakeUpIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchMakeUpIntegrationTasksOutcome(rsp);
        else
            return BatchMakeUpIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchMakeUpIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchMakeUpIntegrationTasksAsync(const BatchMakeUpIntegrationTasksRequest& request, const BatchMakeUpIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchMakeUpIntegrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchMakeUpIntegrationTasksOutcomeCallable WedataClient::BatchMakeUpIntegrationTasksCallable(const BatchMakeUpIntegrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchMakeUpIntegrationTasksOutcome()>>(
        [this, request]()
        {
            return this->BatchMakeUpIntegrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchModifyOpsOwnersOutcome WedataClient::BatchModifyOpsOwners(const BatchModifyOpsOwnersRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyOpsOwners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyOpsOwnersResponse rsp = BatchModifyOpsOwnersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyOpsOwnersOutcome(rsp);
        else
            return BatchModifyOpsOwnersOutcome(o.GetError());
    }
    else
    {
        return BatchModifyOpsOwnersOutcome(outcome.GetError());
    }
}

void WedataClient::BatchModifyOpsOwnersAsync(const BatchModifyOpsOwnersRequest& request, const BatchModifyOpsOwnersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchModifyOpsOwners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchModifyOpsOwnersOutcomeCallable WedataClient::BatchModifyOpsOwnersCallable(const BatchModifyOpsOwnersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchModifyOpsOwnersOutcome()>>(
        [this, request]()
        {
            return this->BatchModifyOpsOwners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchModifyOwnersNewOutcome WedataClient::BatchModifyOwnersNew(const BatchModifyOwnersNewRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyOwnersNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyOwnersNewResponse rsp = BatchModifyOwnersNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyOwnersNewOutcome(rsp);
        else
            return BatchModifyOwnersNewOutcome(o.GetError());
    }
    else
    {
        return BatchModifyOwnersNewOutcome(outcome.GetError());
    }
}

void WedataClient::BatchModifyOwnersNewAsync(const BatchModifyOwnersNewRequest& request, const BatchModifyOwnersNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchModifyOwnersNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchModifyOwnersNewOutcomeCallable WedataClient::BatchModifyOwnersNewCallable(const BatchModifyOwnersNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchModifyOwnersNewOutcome()>>(
        [this, request]()
        {
            return this->BatchModifyOwnersNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchRerunIntegrationTaskInstancesOutcome WedataClient::BatchRerunIntegrationTaskInstances(const BatchRerunIntegrationTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRerunIntegrationTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRerunIntegrationTaskInstancesResponse rsp = BatchRerunIntegrationTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRerunIntegrationTaskInstancesOutcome(rsp);
        else
            return BatchRerunIntegrationTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return BatchRerunIntegrationTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::BatchRerunIntegrationTaskInstancesAsync(const BatchRerunIntegrationTaskInstancesRequest& request, const BatchRerunIntegrationTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchRerunIntegrationTaskInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchRerunIntegrationTaskInstancesOutcomeCallable WedataClient::BatchRerunIntegrationTaskInstancesCallable(const BatchRerunIntegrationTaskInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchRerunIntegrationTaskInstancesOutcome()>>(
        [this, request]()
        {
            return this->BatchRerunIntegrationTaskInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchResumeIntegrationTasksOutcome WedataClient::BatchResumeIntegrationTasks(const BatchResumeIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchResumeIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchResumeIntegrationTasksResponse rsp = BatchResumeIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchResumeIntegrationTasksOutcome(rsp);
        else
            return BatchResumeIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchResumeIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchResumeIntegrationTasksAsync(const BatchResumeIntegrationTasksRequest& request, const BatchResumeIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchResumeIntegrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchResumeIntegrationTasksOutcomeCallable WedataClient::BatchResumeIntegrationTasksCallable(const BatchResumeIntegrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchResumeIntegrationTasksOutcome()>>(
        [this, request]()
        {
            return this->BatchResumeIntegrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchRunOpsTaskOutcome WedataClient::BatchRunOpsTask(const BatchRunOpsTaskRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRunOpsTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRunOpsTaskResponse rsp = BatchRunOpsTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRunOpsTaskOutcome(rsp);
        else
            return BatchRunOpsTaskOutcome(o.GetError());
    }
    else
    {
        return BatchRunOpsTaskOutcome(outcome.GetError());
    }
}

void WedataClient::BatchRunOpsTaskAsync(const BatchRunOpsTaskRequest& request, const BatchRunOpsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchRunOpsTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchRunOpsTaskOutcomeCallable WedataClient::BatchRunOpsTaskCallable(const BatchRunOpsTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchRunOpsTaskOutcome()>>(
        [this, request]()
        {
            return this->BatchRunOpsTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchRunTasksDsOutcome WedataClient::BatchRunTasksDs(const BatchRunTasksDsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRunTasksDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRunTasksDsResponse rsp = BatchRunTasksDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRunTasksDsOutcome(rsp);
        else
            return BatchRunTasksDsOutcome(o.GetError());
    }
    else
    {
        return BatchRunTasksDsOutcome(outcome.GetError());
    }
}

void WedataClient::BatchRunTasksDsAsync(const BatchRunTasksDsRequest& request, const BatchRunTasksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchRunTasksDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchRunTasksDsOutcomeCallable WedataClient::BatchRunTasksDsCallable(const BatchRunTasksDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchRunTasksDsOutcome()>>(
        [this, request]()
        {
            return this->BatchRunTasksDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchStartIntegrationTasksOutcome WedataClient::BatchStartIntegrationTasks(const BatchStartIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStartIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStartIntegrationTasksResponse rsp = BatchStartIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStartIntegrationTasksOutcome(rsp);
        else
            return BatchStartIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchStartIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchStartIntegrationTasksAsync(const BatchStartIntegrationTasksRequest& request, const BatchStartIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchStartIntegrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchStartIntegrationTasksOutcomeCallable WedataClient::BatchStartIntegrationTasksCallable(const BatchStartIntegrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchStartIntegrationTasksOutcome()>>(
        [this, request]()
        {
            return this->BatchStartIntegrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchStopIntegrationTasksOutcome WedataClient::BatchStopIntegrationTasks(const BatchStopIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStopIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStopIntegrationTasksResponse rsp = BatchStopIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStopIntegrationTasksOutcome(rsp);
        else
            return BatchStopIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchStopIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchStopIntegrationTasksAsync(const BatchStopIntegrationTasksRequest& request, const BatchStopIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchStopIntegrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchStopIntegrationTasksOutcomeCallable WedataClient::BatchStopIntegrationTasksCallable(const BatchStopIntegrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchStopIntegrationTasksOutcome()>>(
        [this, request]()
        {
            return this->BatchStopIntegrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchStopOpsTasksOutcome WedataClient::BatchStopOpsTasks(const BatchStopOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStopOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStopOpsTasksResponse rsp = BatchStopOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStopOpsTasksOutcome(rsp);
        else
            return BatchStopOpsTasksOutcome(o.GetError());
    }
    else
    {
        return BatchStopOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchStopOpsTasksAsync(const BatchStopOpsTasksRequest& request, const BatchStopOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchStopOpsTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchStopOpsTasksOutcomeCallable WedataClient::BatchStopOpsTasksCallable(const BatchStopOpsTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchStopOpsTasksOutcome()>>(
        [this, request]()
        {
            return this->BatchStopOpsTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchStopTasksNewOutcome WedataClient::BatchStopTasksNew(const BatchStopTasksNewRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStopTasksNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStopTasksNewResponse rsp = BatchStopTasksNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStopTasksNewOutcome(rsp);
        else
            return BatchStopTasksNewOutcome(o.GetError());
    }
    else
    {
        return BatchStopTasksNewOutcome(outcome.GetError());
    }
}

void WedataClient::BatchStopTasksNewAsync(const BatchStopTasksNewRequest& request, const BatchStopTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchStopTasksNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchStopTasksNewOutcomeCallable WedataClient::BatchStopTasksNewCallable(const BatchStopTasksNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchStopTasksNewOutcome()>>(
        [this, request]()
        {
            return this->BatchStopTasksNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchStopWorkflowsByIdsOutcome WedataClient::BatchStopWorkflowsByIds(const BatchStopWorkflowsByIdsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStopWorkflowsByIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStopWorkflowsByIdsResponse rsp = BatchStopWorkflowsByIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStopWorkflowsByIdsOutcome(rsp);
        else
            return BatchStopWorkflowsByIdsOutcome(o.GetError());
    }
    else
    {
        return BatchStopWorkflowsByIdsOutcome(outcome.GetError());
    }
}

void WedataClient::BatchStopWorkflowsByIdsAsync(const BatchStopWorkflowsByIdsRequest& request, const BatchStopWorkflowsByIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchStopWorkflowsByIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchStopWorkflowsByIdsOutcomeCallable WedataClient::BatchStopWorkflowsByIdsCallable(const BatchStopWorkflowsByIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchStopWorkflowsByIdsOutcome()>>(
        [this, request]()
        {
            return this->BatchStopWorkflowsByIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchSuspendIntegrationTasksOutcome WedataClient::BatchSuspendIntegrationTasks(const BatchSuspendIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchSuspendIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchSuspendIntegrationTasksResponse rsp = BatchSuspendIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchSuspendIntegrationTasksOutcome(rsp);
        else
            return BatchSuspendIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchSuspendIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchSuspendIntegrationTasksAsync(const BatchSuspendIntegrationTasksRequest& request, const BatchSuspendIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchSuspendIntegrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchSuspendIntegrationTasksOutcomeCallable WedataClient::BatchSuspendIntegrationTasksCallable(const BatchSuspendIntegrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchSuspendIntegrationTasksOutcome()>>(
        [this, request]()
        {
            return this->BatchSuspendIntegrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchUpdateIntegrationTasksOutcome WedataClient::BatchUpdateIntegrationTasks(const BatchUpdateIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "BatchUpdateIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchUpdateIntegrationTasksResponse rsp = BatchUpdateIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchUpdateIntegrationTasksOutcome(rsp);
        else
            return BatchUpdateIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return BatchUpdateIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::BatchUpdateIntegrationTasksAsync(const BatchUpdateIntegrationTasksRequest& request, const BatchUpdateIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchUpdateIntegrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchUpdateIntegrationTasksOutcomeCallable WedataClient::BatchUpdateIntegrationTasksCallable(const BatchUpdateIntegrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchUpdateIntegrationTasksOutcome()>>(
        [this, request]()
        {
            return this->BatchUpdateIntegrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::BatchUpdateTasksDsOutcome WedataClient::BatchUpdateTasksDs(const BatchUpdateTasksDsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchUpdateTasksDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchUpdateTasksDsResponse rsp = BatchUpdateTasksDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchUpdateTasksDsOutcome(rsp);
        else
            return BatchUpdateTasksDsOutcome(o.GetError());
    }
    else
    {
        return BatchUpdateTasksDsOutcome(outcome.GetError());
    }
}

void WedataClient::BatchUpdateTasksDsAsync(const BatchUpdateTasksDsRequest& request, const BatchUpdateTasksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchUpdateTasksDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::BatchUpdateTasksDsOutcomeCallable WedataClient::BatchUpdateTasksDsCallable(const BatchUpdateTasksDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchUpdateTasksDsOutcome()>>(
        [this, request]()
        {
            return this->BatchUpdateTasksDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CheckAlarmRegularNameExistOutcome WedataClient::CheckAlarmRegularNameExist(const CheckAlarmRegularNameExistRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAlarmRegularNameExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAlarmRegularNameExistResponse rsp = CheckAlarmRegularNameExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAlarmRegularNameExistOutcome(rsp);
        else
            return CheckAlarmRegularNameExistOutcome(o.GetError());
    }
    else
    {
        return CheckAlarmRegularNameExistOutcome(outcome.GetError());
    }
}

void WedataClient::CheckAlarmRegularNameExistAsync(const CheckAlarmRegularNameExistRequest& request, const CheckAlarmRegularNameExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckAlarmRegularNameExist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CheckAlarmRegularNameExistOutcomeCallable WedataClient::CheckAlarmRegularNameExistCallable(const CheckAlarmRegularNameExistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckAlarmRegularNameExistOutcome()>>(
        [this, request]()
        {
            return this->CheckAlarmRegularNameExist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CheckDuplicateRuleNameOutcome WedataClient::CheckDuplicateRuleName(const CheckDuplicateRuleNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDuplicateRuleName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDuplicateRuleNameResponse rsp = CheckDuplicateRuleNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDuplicateRuleNameOutcome(rsp);
        else
            return CheckDuplicateRuleNameOutcome(o.GetError());
    }
    else
    {
        return CheckDuplicateRuleNameOutcome(outcome.GetError());
    }
}

void WedataClient::CheckDuplicateRuleNameAsync(const CheckDuplicateRuleNameRequest& request, const CheckDuplicateRuleNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDuplicateRuleName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CheckDuplicateRuleNameOutcomeCallable WedataClient::CheckDuplicateRuleNameCallable(const CheckDuplicateRuleNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDuplicateRuleNameOutcome()>>(
        [this, request]()
        {
            return this->CheckDuplicateRuleName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CheckDuplicateTemplateNameOutcome WedataClient::CheckDuplicateTemplateName(const CheckDuplicateTemplateNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDuplicateTemplateName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDuplicateTemplateNameResponse rsp = CheckDuplicateTemplateNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDuplicateTemplateNameOutcome(rsp);
        else
            return CheckDuplicateTemplateNameOutcome(o.GetError());
    }
    else
    {
        return CheckDuplicateTemplateNameOutcome(outcome.GetError());
    }
}

void WedataClient::CheckDuplicateTemplateNameAsync(const CheckDuplicateTemplateNameRequest& request, const CheckDuplicateTemplateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDuplicateTemplateName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CheckDuplicateTemplateNameOutcomeCallable WedataClient::CheckDuplicateTemplateNameCallable(const CheckDuplicateTemplateNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDuplicateTemplateNameOutcome()>>(
        [this, request]()
        {
            return this->CheckDuplicateTemplateName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CheckIntegrationNodeNameExistsOutcome WedataClient::CheckIntegrationNodeNameExists(const CheckIntegrationNodeNameExistsRequest &request)
{
    auto outcome = MakeRequest(request, "CheckIntegrationNodeNameExists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckIntegrationNodeNameExistsResponse rsp = CheckIntegrationNodeNameExistsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckIntegrationNodeNameExistsOutcome(rsp);
        else
            return CheckIntegrationNodeNameExistsOutcome(o.GetError());
    }
    else
    {
        return CheckIntegrationNodeNameExistsOutcome(outcome.GetError());
    }
}

void WedataClient::CheckIntegrationNodeNameExistsAsync(const CheckIntegrationNodeNameExistsRequest& request, const CheckIntegrationNodeNameExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckIntegrationNodeNameExists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CheckIntegrationNodeNameExistsOutcomeCallable WedataClient::CheckIntegrationNodeNameExistsCallable(const CheckIntegrationNodeNameExistsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckIntegrationNodeNameExistsOutcome()>>(
        [this, request]()
        {
            return this->CheckIntegrationNodeNameExists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CheckIntegrationTaskNameExistsOutcome WedataClient::CheckIntegrationTaskNameExists(const CheckIntegrationTaskNameExistsRequest &request)
{
    auto outcome = MakeRequest(request, "CheckIntegrationTaskNameExists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckIntegrationTaskNameExistsResponse rsp = CheckIntegrationTaskNameExistsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckIntegrationTaskNameExistsOutcome(rsp);
        else
            return CheckIntegrationTaskNameExistsOutcome(o.GetError());
    }
    else
    {
        return CheckIntegrationTaskNameExistsOutcome(outcome.GetError());
    }
}

void WedataClient::CheckIntegrationTaskNameExistsAsync(const CheckIntegrationTaskNameExistsRequest& request, const CheckIntegrationTaskNameExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckIntegrationTaskNameExists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CheckIntegrationTaskNameExistsOutcomeCallable WedataClient::CheckIntegrationTaskNameExistsCallable(const CheckIntegrationTaskNameExistsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckIntegrationTaskNameExistsOutcome()>>(
        [this, request]()
        {
            return this->CheckIntegrationTaskNameExists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CheckTaskNameExistOutcome WedataClient::CheckTaskNameExist(const CheckTaskNameExistRequest &request)
{
    auto outcome = MakeRequest(request, "CheckTaskNameExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckTaskNameExistResponse rsp = CheckTaskNameExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckTaskNameExistOutcome(rsp);
        else
            return CheckTaskNameExistOutcome(o.GetError());
    }
    else
    {
        return CheckTaskNameExistOutcome(outcome.GetError());
    }
}

void WedataClient::CheckTaskNameExistAsync(const CheckTaskNameExistRequest& request, const CheckTaskNameExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckTaskNameExist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CheckTaskNameExistOutcomeCallable WedataClient::CheckTaskNameExistCallable(const CheckTaskNameExistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckTaskNameExistOutcome()>>(
        [this, request]()
        {
            return this->CheckTaskNameExist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CheckTaskNameExistDsOutcome WedataClient::CheckTaskNameExistDs(const CheckTaskNameExistDsRequest &request)
{
    auto outcome = MakeRequest(request, "CheckTaskNameExistDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckTaskNameExistDsResponse rsp = CheckTaskNameExistDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckTaskNameExistDsOutcome(rsp);
        else
            return CheckTaskNameExistDsOutcome(o.GetError());
    }
    else
    {
        return CheckTaskNameExistDsOutcome(outcome.GetError());
    }
}

void WedataClient::CheckTaskNameExistDsAsync(const CheckTaskNameExistDsRequest& request, const CheckTaskNameExistDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckTaskNameExistDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CheckTaskNameExistDsOutcomeCallable WedataClient::CheckTaskNameExistDsCallable(const CheckTaskNameExistDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckTaskNameExistDsOutcome()>>(
        [this, request]()
        {
            return this->CheckTaskNameExistDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CheckTaskPriorityDsOutcome WedataClient::CheckTaskPriorityDs(const CheckTaskPriorityDsRequest &request)
{
    auto outcome = MakeRequest(request, "CheckTaskPriorityDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckTaskPriorityDsResponse rsp = CheckTaskPriorityDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckTaskPriorityDsOutcome(rsp);
        else
            return CheckTaskPriorityDsOutcome(o.GetError());
    }
    else
    {
        return CheckTaskPriorityDsOutcome(outcome.GetError());
    }
}

void WedataClient::CheckTaskPriorityDsAsync(const CheckTaskPriorityDsRequest& request, const CheckTaskPriorityDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckTaskPriorityDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CheckTaskPriorityDsOutcomeCallable WedataClient::CheckTaskPriorityDsCallable(const CheckTaskPriorityDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckTaskPriorityDsOutcome()>>(
        [this, request]()
        {
            return this->CheckTaskPriorityDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CommitExportTaskOutcome WedataClient::CommitExportTask(const CommitExportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CommitExportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommitExportTaskResponse rsp = CommitExportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommitExportTaskOutcome(rsp);
        else
            return CommitExportTaskOutcome(o.GetError());
    }
    else
    {
        return CommitExportTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CommitExportTaskAsync(const CommitExportTaskRequest& request, const CommitExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CommitExportTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CommitExportTaskOutcomeCallable WedataClient::CommitExportTaskCallable(const CommitExportTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CommitExportTaskOutcome()>>(
        [this, request]()
        {
            return this->CommitExportTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CommitIntegrationTaskOutcome WedataClient::CommitIntegrationTask(const CommitIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CommitIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommitIntegrationTaskResponse rsp = CommitIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommitIntegrationTaskOutcome(rsp);
        else
            return CommitIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return CommitIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CommitIntegrationTaskAsync(const CommitIntegrationTaskRequest& request, const CommitIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CommitIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CommitIntegrationTaskOutcomeCallable WedataClient::CommitIntegrationTaskCallable(const CommitIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CommitIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->CommitIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CommitRuleGroupExecResultOutcome WedataClient::CommitRuleGroupExecResult(const CommitRuleGroupExecResultRequest &request)
{
    auto outcome = MakeRequest(request, "CommitRuleGroupExecResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommitRuleGroupExecResultResponse rsp = CommitRuleGroupExecResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommitRuleGroupExecResultOutcome(rsp);
        else
            return CommitRuleGroupExecResultOutcome(o.GetError());
    }
    else
    {
        return CommitRuleGroupExecResultOutcome(outcome.GetError());
    }
}

void WedataClient::CommitRuleGroupExecResultAsync(const CommitRuleGroupExecResultRequest& request, const CommitRuleGroupExecResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CommitRuleGroupExecResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CommitRuleGroupExecResultOutcomeCallable WedataClient::CommitRuleGroupExecResultCallable(const CommitRuleGroupExecResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CommitRuleGroupExecResultOutcome()>>(
        [this, request]()
        {
            return this->CommitRuleGroupExecResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CommitRuleGroupTaskOutcome WedataClient::CommitRuleGroupTask(const CommitRuleGroupTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CommitRuleGroupTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommitRuleGroupTaskResponse rsp = CommitRuleGroupTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommitRuleGroupTaskOutcome(rsp);
        else
            return CommitRuleGroupTaskOutcome(o.GetError());
    }
    else
    {
        return CommitRuleGroupTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CommitRuleGroupTaskAsync(const CommitRuleGroupTaskRequest& request, const CommitRuleGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CommitRuleGroupTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CommitRuleGroupTaskOutcomeCallable WedataClient::CommitRuleGroupTaskCallable(const CommitRuleGroupTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CommitRuleGroupTaskOutcome()>>(
        [this, request]()
        {
            return this->CommitRuleGroupTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CopyTaskDsOutcome WedataClient::CopyTaskDs(const CopyTaskDsRequest &request)
{
    auto outcome = MakeRequest(request, "CopyTaskDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyTaskDsResponse rsp = CopyTaskDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyTaskDsOutcome(rsp);
        else
            return CopyTaskDsOutcome(o.GetError());
    }
    else
    {
        return CopyTaskDsOutcome(outcome.GetError());
    }
}

void WedataClient::CopyTaskDsAsync(const CopyTaskDsRequest& request, const CopyTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyTaskDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CopyTaskDsOutcomeCallable WedataClient::CopyTaskDsCallable(const CopyTaskDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyTaskDsOutcome()>>(
        [this, request]()
        {
            return this->CopyTaskDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CountOpsInstanceStateOutcome WedataClient::CountOpsInstanceState(const CountOpsInstanceStateRequest &request)
{
    auto outcome = MakeRequest(request, "CountOpsInstanceState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CountOpsInstanceStateResponse rsp = CountOpsInstanceStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CountOpsInstanceStateOutcome(rsp);
        else
            return CountOpsInstanceStateOutcome(o.GetError());
    }
    else
    {
        return CountOpsInstanceStateOutcome(outcome.GetError());
    }
}

void WedataClient::CountOpsInstanceStateAsync(const CountOpsInstanceStateRequest& request, const CountOpsInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CountOpsInstanceState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CountOpsInstanceStateOutcomeCallable WedataClient::CountOpsInstanceStateCallable(const CountOpsInstanceStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CountOpsInstanceStateOutcome()>>(
        [this, request]()
        {
            return this->CountOpsInstanceState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateBaselineOutcome WedataClient::CreateBaseline(const CreateBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBaselineResponse rsp = CreateBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBaselineOutcome(rsp);
        else
            return CreateBaselineOutcome(o.GetError());
    }
    else
    {
        return CreateBaselineOutcome(outcome.GetError());
    }
}

void WedataClient::CreateBaselineAsync(const CreateBaselineRequest& request, const CreateBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBaseline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateBaselineOutcomeCallable WedataClient::CreateBaselineCallable(const CreateBaselineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBaselineOutcome()>>(
        [this, request]()
        {
            return this->CreateBaseline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateCustomFunctionOutcome WedataClient::CreateCustomFunction(const CreateCustomFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomFunctionResponse rsp = CreateCustomFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomFunctionOutcome(rsp);
        else
            return CreateCustomFunctionOutcome(o.GetError());
    }
    else
    {
        return CreateCustomFunctionOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCustomFunctionAsync(const CreateCustomFunctionRequest& request, const CreateCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateCustomFunctionOutcomeCallable WedataClient::CreateCustomFunctionCallable(const CreateCustomFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomFunctionOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateDataSourceOutcome WedataClient::CreateDataSource(const CreateDataSourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataSourceResponse rsp = CreateDataSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataSourceOutcome(rsp);
        else
            return CreateDataSourceOutcome(o.GetError());
    }
    else
    {
        return CreateDataSourceOutcome(outcome.GetError());
    }
}

void WedataClient::CreateDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataSource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateDataSourceOutcomeCallable WedataClient::CreateDataSourceCallable(const CreateDataSourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataSourceOutcome()>>(
        [this, request]()
        {
            return this->CreateDataSource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateDsFolderOutcome WedataClient::CreateDsFolder(const CreateDsFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDsFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDsFolderResponse rsp = CreateDsFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDsFolderOutcome(rsp);
        else
            return CreateDsFolderOutcome(o.GetError());
    }
    else
    {
        return CreateDsFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateDsFolderAsync(const CreateDsFolderRequest& request, const CreateDsFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDsFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateDsFolderOutcomeCallable WedataClient::CreateDsFolderCallable(const CreateDsFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDsFolderOutcome()>>(
        [this, request]()
        {
            return this->CreateDsFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateFileVersionOutcome WedataClient::CreateFileVersion(const CreateFileVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileVersionResponse rsp = CreateFileVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileVersionOutcome(rsp);
        else
            return CreateFileVersionOutcome(o.GetError());
    }
    else
    {
        return CreateFileVersionOutcome(outcome.GetError());
    }
}

void WedataClient::CreateFileVersionAsync(const CreateFileVersionRequest& request, const CreateFileVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFileVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateFileVersionOutcomeCallable WedataClient::CreateFileVersionCallable(const CreateFileVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFileVersionOutcome()>>(
        [this, request]()
        {
            return this->CreateFileVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateFolderOutcome WedataClient::CreateFolder(const CreateFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFolderResponse rsp = CreateFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFolderOutcome(rsp);
        else
            return CreateFolderOutcome(o.GetError());
    }
    else
    {
        return CreateFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateFolderAsync(const CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateFolderOutcomeCallable WedataClient::CreateFolderCallable(const CreateFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFolderOutcome()>>(
        [this, request]()
        {
            return this->CreateFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateHiveTableOutcome WedataClient::CreateHiveTable(const CreateHiveTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHiveTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHiveTableResponse rsp = CreateHiveTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHiveTableOutcome(rsp);
        else
            return CreateHiveTableOutcome(o.GetError());
    }
    else
    {
        return CreateHiveTableOutcome(outcome.GetError());
    }
}

void WedataClient::CreateHiveTableAsync(const CreateHiveTableRequest& request, const CreateHiveTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHiveTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateHiveTableOutcomeCallable WedataClient::CreateHiveTableCallable(const CreateHiveTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHiveTableOutcome()>>(
        [this, request]()
        {
            return this->CreateHiveTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateHiveTableByDDLOutcome WedataClient::CreateHiveTableByDDL(const CreateHiveTableByDDLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHiveTableByDDL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHiveTableByDDLResponse rsp = CreateHiveTableByDDLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHiveTableByDDLOutcome(rsp);
        else
            return CreateHiveTableByDDLOutcome(o.GetError());
    }
    else
    {
        return CreateHiveTableByDDLOutcome(outcome.GetError());
    }
}

void WedataClient::CreateHiveTableByDDLAsync(const CreateHiveTableByDDLRequest& request, const CreateHiveTableByDDLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHiveTableByDDL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateHiveTableByDDLOutcomeCallable WedataClient::CreateHiveTableByDDLCallable(const CreateHiveTableByDDLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHiveTableByDDLOutcome()>>(
        [this, request]()
        {
            return this->CreateHiveTableByDDL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateInLongAgentOutcome WedataClient::CreateInLongAgent(const CreateInLongAgentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInLongAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInLongAgentResponse rsp = CreateInLongAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInLongAgentOutcome(rsp);
        else
            return CreateInLongAgentOutcome(o.GetError());
    }
    else
    {
        return CreateInLongAgentOutcome(outcome.GetError());
    }
}

void WedataClient::CreateInLongAgentAsync(const CreateInLongAgentRequest& request, const CreateInLongAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInLongAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateInLongAgentOutcomeCallable WedataClient::CreateInLongAgentCallable(const CreateInLongAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInLongAgentOutcome()>>(
        [this, request]()
        {
            return this->CreateInLongAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateIntegrationNodeOutcome WedataClient::CreateIntegrationNode(const CreateIntegrationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationNodeResponse rsp = CreateIntegrationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationNodeOutcome(rsp);
        else
            return CreateIntegrationNodeOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationNodeOutcome(outcome.GetError());
    }
}

void WedataClient::CreateIntegrationNodeAsync(const CreateIntegrationNodeRequest& request, const CreateIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIntegrationNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateIntegrationNodeOutcomeCallable WedataClient::CreateIntegrationNodeCallable(const CreateIntegrationNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIntegrationNodeOutcome()>>(
        [this, request]()
        {
            return this->CreateIntegrationNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateIntegrationTaskOutcome WedataClient::CreateIntegrationTask(const CreateIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntegrationTaskResponse rsp = CreateIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntegrationTaskOutcome(rsp);
        else
            return CreateIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CreateIntegrationTaskAsync(const CreateIntegrationTaskRequest& request, const CreateIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateIntegrationTaskOutcomeCallable WedataClient::CreateIntegrationTaskCallable(const CreateIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateOfflineTaskOutcome WedataClient::CreateOfflineTask(const CreateOfflineTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOfflineTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOfflineTaskResponse rsp = CreateOfflineTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOfflineTaskOutcome(rsp);
        else
            return CreateOfflineTaskOutcome(o.GetError());
    }
    else
    {
        return CreateOfflineTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CreateOfflineTaskAsync(const CreateOfflineTaskRequest& request, const CreateOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOfflineTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateOfflineTaskOutcomeCallable WedataClient::CreateOfflineTaskCallable(const CreateOfflineTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOfflineTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateOfflineTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateOpsMakePlanOutcome WedataClient::CreateOpsMakePlan(const CreateOpsMakePlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpsMakePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpsMakePlanResponse rsp = CreateOpsMakePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpsMakePlanOutcome(rsp);
        else
            return CreateOpsMakePlanOutcome(o.GetError());
    }
    else
    {
        return CreateOpsMakePlanOutcome(outcome.GetError());
    }
}

void WedataClient::CreateOpsMakePlanAsync(const CreateOpsMakePlanRequest& request, const CreateOpsMakePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpsMakePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateOpsMakePlanOutcomeCallable WedataClient::CreateOpsMakePlanCallable(const CreateOpsMakePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpsMakePlanOutcome()>>(
        [this, request]()
        {
            return this->CreateOpsMakePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateOrUpdateResourceOutcome WedataClient::CreateOrUpdateResource(const CreateOrUpdateResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrUpdateResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrUpdateResourceResponse rsp = CreateOrUpdateResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrUpdateResourceOutcome(rsp);
        else
            return CreateOrUpdateResourceOutcome(o.GetError());
    }
    else
    {
        return CreateOrUpdateResourceOutcome(outcome.GetError());
    }
}

void WedataClient::CreateOrUpdateResourceAsync(const CreateOrUpdateResourceRequest& request, const CreateOrUpdateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrUpdateResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateOrUpdateResourceOutcomeCallable WedataClient::CreateOrUpdateResourceCallable(const CreateOrUpdateResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrUpdateResourceOutcome()>>(
        [this, request]()
        {
            return this->CreateOrUpdateResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreatePathOutcome WedataClient::CreatePath(const CreatePathRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePath");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePathResponse rsp = CreatePathResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePathOutcome(rsp);
        else
            return CreatePathOutcome(o.GetError());
    }
    else
    {
        return CreatePathOutcome(outcome.GetError());
    }
}

void WedataClient::CreatePathAsync(const CreatePathRequest& request, const CreatePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePath(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreatePathOutcomeCallable WedataClient::CreatePathCallable(const CreatePathRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePathOutcome()>>(
        [this, request]()
        {
            return this->CreatePath(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateProjectParamDsOutcome WedataClient::CreateProjectParamDs(const CreateProjectParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProjectParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProjectParamDsResponse rsp = CreateProjectParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProjectParamDsOutcome(rsp);
        else
            return CreateProjectParamDsOutcome(o.GetError());
    }
    else
    {
        return CreateProjectParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateProjectParamDsAsync(const CreateProjectParamDsRequest& request, const CreateProjectParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProjectParamDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateProjectParamDsOutcomeCallable WedataClient::CreateProjectParamDsCallable(const CreateProjectParamDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProjectParamDsOutcome()>>(
        [this, request]()
        {
            return this->CreateProjectParamDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateResourcePathOutcome WedataClient::CreateResourcePath(const CreateResourcePathRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourcePath");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourcePathResponse rsp = CreateResourcePathResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourcePathOutcome(rsp);
        else
            return CreateResourcePathOutcome(o.GetError());
    }
    else
    {
        return CreateResourcePathOutcome(outcome.GetError());
    }
}

void WedataClient::CreateResourcePathAsync(const CreateResourcePathRequest& request, const CreateResourcePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResourcePath(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateResourcePathOutcomeCallable WedataClient::CreateResourcePathCallable(const CreateResourcePathRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResourcePathOutcome()>>(
        [this, request]()
        {
            return this->CreateResourcePath(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateRuleOutcome WedataClient::CreateRule(const CreateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleResponse rsp = CreateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleOutcome(rsp);
        else
            return CreateRuleOutcome(o.GetError());
    }
    else
    {
        return CreateRuleOutcome(outcome.GetError());
    }
}

void WedataClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateRuleOutcomeCallable WedataClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateRuleTemplateOutcome WedataClient::CreateRuleTemplate(const CreateRuleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRuleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleTemplateResponse rsp = CreateRuleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleTemplateOutcome(rsp);
        else
            return CreateRuleTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateRuleTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::CreateRuleTemplateAsync(const CreateRuleTemplateRequest& request, const CreateRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRuleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateRuleTemplateOutcomeCallable WedataClient::CreateRuleTemplateCallable(const CreateRuleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRuleTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateRuleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateScriptsImportTasksDsOutcome WedataClient::CreateScriptsImportTasksDs(const CreateScriptsImportTasksDsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScriptsImportTasksDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScriptsImportTasksDsResponse rsp = CreateScriptsImportTasksDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScriptsImportTasksDsOutcome(rsp);
        else
            return CreateScriptsImportTasksDsOutcome(o.GetError());
    }
    else
    {
        return CreateScriptsImportTasksDsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateScriptsImportTasksDsAsync(const CreateScriptsImportTasksDsRequest& request, const CreateScriptsImportTasksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScriptsImportTasksDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateScriptsImportTasksDsOutcomeCallable WedataClient::CreateScriptsImportTasksDsCallable(const CreateScriptsImportTasksDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScriptsImportTasksDsOutcome()>>(
        [this, request]()
        {
            return this->CreateScriptsImportTasksDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateTaskOutcome WedataClient::CreateTask(const CreateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskResponse rsp = CreateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutcome(rsp);
        else
            return CreateTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskOutcomeCallable WedataClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateTaskAlarmRegularOutcome WedataClient::CreateTaskAlarmRegular(const CreateTaskAlarmRegularRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskAlarmRegular");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskAlarmRegularResponse rsp = CreateTaskAlarmRegularResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskAlarmRegularOutcome(rsp);
        else
            return CreateTaskAlarmRegularOutcome(o.GetError());
    }
    else
    {
        return CreateTaskAlarmRegularOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskAlarmRegularAsync(const CreateTaskAlarmRegularRequest& request, const CreateTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskAlarmRegular(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskAlarmRegularOutcomeCallable WedataClient::CreateTaskAlarmRegularCallable(const CreateTaskAlarmRegularRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskAlarmRegularOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskAlarmRegular(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateTaskDsOutcome WedataClient::CreateTaskDs(const CreateTaskDsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskDsResponse rsp = CreateTaskDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskDsOutcome(rsp);
        else
            return CreateTaskDsOutcome(o.GetError());
    }
    else
    {
        return CreateTaskDsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskDsAsync(const CreateTaskDsRequest& request, const CreateTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskDsOutcomeCallable WedataClient::CreateTaskDsCallable(const CreateTaskDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskDsOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateTaskFolderOutcome WedataClient::CreateTaskFolder(const CreateTaskFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskFolderResponse rsp = CreateTaskFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskFolderOutcome(rsp);
        else
            return CreateTaskFolderOutcome(o.GetError());
    }
    else
    {
        return CreateTaskFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskFolderAsync(const CreateTaskFolderRequest& request, const CreateTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskFolderOutcomeCallable WedataClient::CreateTaskFolderCallable(const CreateTaskFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskFolderOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateTaskInParamDsOutcome WedataClient::CreateTaskInParamDs(const CreateTaskInParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskInParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskInParamDsResponse rsp = CreateTaskInParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskInParamDsOutcome(rsp);
        else
            return CreateTaskInParamDsOutcome(o.GetError());
    }
    else
    {
        return CreateTaskInParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskInParamDsAsync(const CreateTaskInParamDsRequest& request, const CreateTaskInParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskInParamDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskInParamDsOutcomeCallable WedataClient::CreateTaskInParamDsCallable(const CreateTaskInParamDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskInParamDsOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskInParamDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateTaskOutParamDsOutcome WedataClient::CreateTaskOutParamDs(const CreateTaskOutParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskOutParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskOutParamDsResponse rsp = CreateTaskOutParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutParamDsOutcome(rsp);
        else
            return CreateTaskOutParamDsOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskOutParamDsAsync(const CreateTaskOutParamDsRequest& request, const CreateTaskOutParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskOutParamDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskOutParamDsOutcomeCallable WedataClient::CreateTaskOutParamDsCallable(const CreateTaskOutParamDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskOutParamDsOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskOutParamDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateTaskOutputRegistriesOutcome WedataClient::CreateTaskOutputRegistries(const CreateTaskOutputRegistriesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskOutputRegistries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskOutputRegistriesResponse rsp = CreateTaskOutputRegistriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutputRegistriesOutcome(rsp);
        else
            return CreateTaskOutputRegistriesOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutputRegistriesOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskOutputRegistriesAsync(const CreateTaskOutputRegistriesRequest& request, const CreateTaskOutputRegistriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskOutputRegistries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskOutputRegistriesOutcomeCallable WedataClient::CreateTaskOutputRegistriesCallable(const CreateTaskOutputRegistriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskOutputRegistriesOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskOutputRegistries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateTaskOutputRegistryOutcome WedataClient::CreateTaskOutputRegistry(const CreateTaskOutputRegistryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskOutputRegistry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskOutputRegistryResponse rsp = CreateTaskOutputRegistryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutputRegistryOutcome(rsp);
        else
            return CreateTaskOutputRegistryOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutputRegistryOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskOutputRegistryAsync(const CreateTaskOutputRegistryRequest& request, const CreateTaskOutputRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskOutputRegistry(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskOutputRegistryOutcomeCallable WedataClient::CreateTaskOutputRegistryCallable(const CreateTaskOutputRegistryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskOutputRegistryOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskOutputRegistry(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateTaskParamDsOutcome WedataClient::CreateTaskParamDs(const CreateTaskParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskParamDsResponse rsp = CreateTaskParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskParamDsOutcome(rsp);
        else
            return CreateTaskParamDsOutcome(o.GetError());
    }
    else
    {
        return CreateTaskParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskParamDsAsync(const CreateTaskParamDsRequest& request, const CreateTaskParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskParamDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskParamDsOutcomeCallable WedataClient::CreateTaskParamDsCallable(const CreateTaskParamDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskParamDsOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskParamDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateTaskVersionDsOutcome WedataClient::CreateTaskVersionDs(const CreateTaskVersionDsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskVersionDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskVersionDsResponse rsp = CreateTaskVersionDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskVersionDsOutcome(rsp);
        else
            return CreateTaskVersionDsOutcome(o.GetError());
    }
    else
    {
        return CreateTaskVersionDsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskVersionDsAsync(const CreateTaskVersionDsRequest& request, const CreateTaskVersionDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskVersionDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskVersionDsOutcomeCallable WedataClient::CreateTaskVersionDsCallable(const CreateTaskVersionDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskVersionDsOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskVersionDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateWorkflowOutcome WedataClient::CreateWorkflow(const CreateWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowResponse rsp = CreateWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowOutcome(rsp);
        else
            return CreateWorkflowOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::CreateWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateWorkflowOutcomeCallable WedataClient::CreateWorkflowCallable(const CreateWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkflowOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DagInstancesOutcome WedataClient::DagInstances(const DagInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DagInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DagInstancesResponse rsp = DagInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DagInstancesOutcome(rsp);
        else
            return DagInstancesOutcome(o.GetError());
    }
    else
    {
        return DagInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DagInstancesAsync(const DagInstancesRequest& request, const DagInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DagInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DagInstancesOutcomeCallable WedataClient::DagInstancesCallable(const DagInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DagInstancesOutcome()>>(
        [this, request]()
        {
            return this->DagInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteBaselineOutcome WedataClient::DeleteBaseline(const DeleteBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselineResponse rsp = DeleteBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselineOutcome(rsp);
        else
            return DeleteBaselineOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselineOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteBaselineAsync(const DeleteBaselineRequest& request, const DeleteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBaseline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteBaselineOutcomeCallable WedataClient::DeleteBaselineCallable(const DeleteBaselineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBaselineOutcome()>>(
        [this, request]()
        {
            return this->DeleteBaseline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteCustomFunctionOutcome WedataClient::DeleteCustomFunction(const DeleteCustomFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomFunctionResponse rsp = DeleteCustomFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomFunctionOutcome(rsp);
        else
            return DeleteCustomFunctionOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomFunctionOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteCustomFunctionAsync(const DeleteCustomFunctionRequest& request, const DeleteCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteCustomFunctionOutcomeCallable WedataClient::DeleteCustomFunctionCallable(const DeleteCustomFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomFunctionOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteDataSourcesOutcome WedataClient::DeleteDataSources(const DeleteDataSourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataSources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataSourcesResponse rsp = DeleteDataSourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataSourcesOutcome(rsp);
        else
            return DeleteDataSourcesOutcome(o.GetError());
    }
    else
    {
        return DeleteDataSourcesOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteDataSourcesAsync(const DeleteDataSourcesRequest& request, const DeleteDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDataSources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteDataSourcesOutcomeCallable WedataClient::DeleteDataSourcesCallable(const DeleteDataSourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDataSourcesOutcome()>>(
        [this, request]()
        {
            return this->DeleteDataSources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteDsEventListenerOutcome WedataClient::DeleteDsEventListener(const DeleteDsEventListenerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDsEventListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDsEventListenerResponse rsp = DeleteDsEventListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDsEventListenerOutcome(rsp);
        else
            return DeleteDsEventListenerOutcome(o.GetError());
    }
    else
    {
        return DeleteDsEventListenerOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteDsEventListenerAsync(const DeleteDsEventListenerRequest& request, const DeleteDsEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDsEventListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteDsEventListenerOutcomeCallable WedataClient::DeleteDsEventListenerCallable(const DeleteDsEventListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDsEventListenerOutcome()>>(
        [this, request]()
        {
            return this->DeleteDsEventListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteDsEventPublisherOutcome WedataClient::DeleteDsEventPublisher(const DeleteDsEventPublisherRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDsEventPublisher");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDsEventPublisherResponse rsp = DeleteDsEventPublisherResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDsEventPublisherOutcome(rsp);
        else
            return DeleteDsEventPublisherOutcome(o.GetError());
    }
    else
    {
        return DeleteDsEventPublisherOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteDsEventPublisherAsync(const DeleteDsEventPublisherRequest& request, const DeleteDsEventPublisherAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDsEventPublisher(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteDsEventPublisherOutcomeCallable WedataClient::DeleteDsEventPublisherCallable(const DeleteDsEventPublisherRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDsEventPublisherOutcome()>>(
        [this, request]()
        {
            return this->DeleteDsEventPublisher(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteDsFolderOutcome WedataClient::DeleteDsFolder(const DeleteDsFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDsFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDsFolderResponse rsp = DeleteDsFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDsFolderOutcome(rsp);
        else
            return DeleteDsFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteDsFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteDsFolderAsync(const DeleteDsFolderRequest& request, const DeleteDsFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDsFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteDsFolderOutcomeCallable WedataClient::DeleteDsFolderCallable(const DeleteDsFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDsFolderOutcome()>>(
        [this, request]()
        {
            return this->DeleteDsFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteFileOutcome WedataClient::DeleteFile(const DeleteFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFileResponse rsp = DeleteFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFileOutcome(rsp);
        else
            return DeleteFileOutcome(o.GetError());
    }
    else
    {
        return DeleteFileOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteFileAsync(const DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteFileOutcomeCallable WedataClient::DeleteFileCallable(const DeleteFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFileOutcome()>>(
        [this, request]()
        {
            return this->DeleteFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteFilePathOutcome WedataClient::DeleteFilePath(const DeleteFilePathRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFilePath");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFilePathResponse rsp = DeleteFilePathResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFilePathOutcome(rsp);
        else
            return DeleteFilePathOutcome(o.GetError());
    }
    else
    {
        return DeleteFilePathOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteFilePathAsync(const DeleteFilePathRequest& request, const DeleteFilePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFilePath(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteFilePathOutcomeCallable WedataClient::DeleteFilePathCallable(const DeleteFilePathRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFilePathOutcome()>>(
        [this, request]()
        {
            return this->DeleteFilePath(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteFolderOutcome WedataClient::DeleteFolder(const DeleteFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFolderResponse rsp = DeleteFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFolderOutcome(rsp);
        else
            return DeleteFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteFolderAsync(const DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteFolderOutcomeCallable WedataClient::DeleteFolderCallable(const DeleteFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFolderOutcome()>>(
        [this, request]()
        {
            return this->DeleteFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteInLongAgentOutcome WedataClient::DeleteInLongAgent(const DeleteInLongAgentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInLongAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInLongAgentResponse rsp = DeleteInLongAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInLongAgentOutcome(rsp);
        else
            return DeleteInLongAgentOutcome(o.GetError());
    }
    else
    {
        return DeleteInLongAgentOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteInLongAgentAsync(const DeleteInLongAgentRequest& request, const DeleteInLongAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInLongAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteInLongAgentOutcomeCallable WedataClient::DeleteInLongAgentCallable(const DeleteInLongAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInLongAgentOutcome()>>(
        [this, request]()
        {
            return this->DeleteInLongAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteIntegrationNodeOutcome WedataClient::DeleteIntegrationNode(const DeleteIntegrationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationNodeResponse rsp = DeleteIntegrationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationNodeOutcome(rsp);
        else
            return DeleteIntegrationNodeOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationNodeOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteIntegrationNodeAsync(const DeleteIntegrationNodeRequest& request, const DeleteIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIntegrationNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteIntegrationNodeOutcomeCallable WedataClient::DeleteIntegrationNodeCallable(const DeleteIntegrationNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIntegrationNodeOutcome()>>(
        [this, request]()
        {
            return this->DeleteIntegrationNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteIntegrationTaskOutcome WedataClient::DeleteIntegrationTask(const DeleteIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntegrationTaskResponse rsp = DeleteIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntegrationTaskOutcome(rsp);
        else
            return DeleteIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteIntegrationTaskAsync(const DeleteIntegrationTaskRequest& request, const DeleteIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteIntegrationTaskOutcomeCallable WedataClient::DeleteIntegrationTaskCallable(const DeleteIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteLinkOutcome WedataClient::DeleteLink(const DeleteLinkRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLink");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLinkResponse rsp = DeleteLinkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLinkOutcome(rsp);
        else
            return DeleteLinkOutcome(o.GetError());
    }
    else
    {
        return DeleteLinkOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteLinkAsync(const DeleteLinkRequest& request, const DeleteLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLink(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteLinkOutcomeCallable WedataClient::DeleteLinkCallable(const DeleteLinkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLinkOutcome()>>(
        [this, request]()
        {
            return this->DeleteLink(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteOfflineTaskOutcome WedataClient::DeleteOfflineTask(const DeleteOfflineTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOfflineTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOfflineTaskResponse rsp = DeleteOfflineTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOfflineTaskOutcome(rsp);
        else
            return DeleteOfflineTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteOfflineTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteOfflineTaskAsync(const DeleteOfflineTaskRequest& request, const DeleteOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOfflineTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteOfflineTaskOutcomeCallable WedataClient::DeleteOfflineTaskCallable(const DeleteOfflineTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOfflineTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteOfflineTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteProjectParamDsOutcome WedataClient::DeleteProjectParamDs(const DeleteProjectParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProjectParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectParamDsResponse rsp = DeleteProjectParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectParamDsOutcome(rsp);
        else
            return DeleteProjectParamDsOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteProjectParamDsAsync(const DeleteProjectParamDsRequest& request, const DeleteProjectParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProjectParamDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteProjectParamDsOutcomeCallable WedataClient::DeleteProjectParamDsCallable(const DeleteProjectParamDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProjectParamDsOutcome()>>(
        [this, request]()
        {
            return this->DeleteProjectParamDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteProjectParamVersionDsOutcome WedataClient::DeleteProjectParamVersionDs(const DeleteProjectParamVersionDsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProjectParamVersionDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectParamVersionDsResponse rsp = DeleteProjectParamVersionDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectParamVersionDsOutcome(rsp);
        else
            return DeleteProjectParamVersionDsOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectParamVersionDsOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteProjectParamVersionDsAsync(const DeleteProjectParamVersionDsRequest& request, const DeleteProjectParamVersionDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProjectParamVersionDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteProjectParamVersionDsOutcomeCallable WedataClient::DeleteProjectParamVersionDsCallable(const DeleteProjectParamVersionDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProjectParamVersionDsOutcome()>>(
        [this, request]()
        {
            return this->DeleteProjectParamVersionDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteProjectUsersOutcome WedataClient::DeleteProjectUsers(const DeleteProjectUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProjectUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectUsersResponse rsp = DeleteProjectUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectUsersOutcome(rsp);
        else
            return DeleteProjectUsersOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectUsersOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteProjectUsersAsync(const DeleteProjectUsersRequest& request, const DeleteProjectUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProjectUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteProjectUsersOutcomeCallable WedataClient::DeleteProjectUsersCallable(const DeleteProjectUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProjectUsersOutcome()>>(
        [this, request]()
        {
            return this->DeleteProjectUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteResourceOutcome WedataClient::DeleteResource(const DeleteResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceResponse rsp = DeleteResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceOutcome(rsp);
        else
            return DeleteResourceOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteResourceAsync(const DeleteResourceRequest& request, const DeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteResourceOutcomeCallable WedataClient::DeleteResourceCallable(const DeleteResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourceOutcome()>>(
        [this, request]()
        {
            return this->DeleteResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteResourceFileOutcome WedataClient::DeleteResourceFile(const DeleteResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceFileResponse rsp = DeleteResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceFileOutcome(rsp);
        else
            return DeleteResourceFileOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteResourceFileAsync(const DeleteResourceFileRequest& request, const DeleteResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResourceFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteResourceFileOutcomeCallable WedataClient::DeleteResourceFileCallable(const DeleteResourceFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourceFileOutcome()>>(
        [this, request]()
        {
            return this->DeleteResourceFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteResourceFilesOutcome WedataClient::DeleteResourceFiles(const DeleteResourceFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceFilesResponse rsp = DeleteResourceFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceFilesOutcome(rsp);
        else
            return DeleteResourceFilesOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceFilesOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteResourceFilesAsync(const DeleteResourceFilesRequest& request, const DeleteResourceFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResourceFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteResourceFilesOutcomeCallable WedataClient::DeleteResourceFilesCallable(const DeleteResourceFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourceFilesOutcome()>>(
        [this, request]()
        {
            return this->DeleteResourceFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteRuleOutcome WedataClient::DeleteRule(const DeleteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleResponse rsp = DeleteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleOutcome(rsp);
        else
            return DeleteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteRuleOutcomeCallable WedataClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteRuleTemplateOutcome WedataClient::DeleteRuleTemplate(const DeleteRuleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRuleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleTemplateResponse rsp = DeleteRuleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleTemplateOutcome(rsp);
        else
            return DeleteRuleTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteRuleTemplateAsync(const DeleteRuleTemplateRequest& request, const DeleteRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRuleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteRuleTemplateOutcomeCallable WedataClient::DeleteRuleTemplateCallable(const DeleteRuleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRuleTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteRuleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteTaskAlarmRegularOutcome WedataClient::DeleteTaskAlarmRegular(const DeleteTaskAlarmRegularRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskAlarmRegular");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskAlarmRegularResponse rsp = DeleteTaskAlarmRegularResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskAlarmRegularOutcome(rsp);
        else
            return DeleteTaskAlarmRegularOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskAlarmRegularOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskAlarmRegularAsync(const DeleteTaskAlarmRegularRequest& request, const DeleteTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTaskAlarmRegular(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteTaskAlarmRegularOutcomeCallable WedataClient::DeleteTaskAlarmRegularCallable(const DeleteTaskAlarmRegularRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskAlarmRegularOutcome()>>(
        [this, request]()
        {
            return this->DeleteTaskAlarmRegular(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteTaskDsOutcome WedataClient::DeleteTaskDs(const DeleteTaskDsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskDsResponse rsp = DeleteTaskDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskDsOutcome(rsp);
        else
            return DeleteTaskDsOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskDsOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskDsAsync(const DeleteTaskDsRequest& request, const DeleteTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTaskDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteTaskDsOutcomeCallable WedataClient::DeleteTaskDsCallable(const DeleteTaskDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskDsOutcome()>>(
        [this, request]()
        {
            return this->DeleteTaskDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteTaskFolderOutcome WedataClient::DeleteTaskFolder(const DeleteTaskFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskFolderResponse rsp = DeleteTaskFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskFolderOutcome(rsp);
        else
            return DeleteTaskFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskFolderAsync(const DeleteTaskFolderRequest& request, const DeleteTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTaskFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteTaskFolderOutcomeCallable WedataClient::DeleteTaskFolderCallable(const DeleteTaskFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskFolderOutcome()>>(
        [this, request]()
        {
            return this->DeleteTaskFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteTaskInParamDsOutcome WedataClient::DeleteTaskInParamDs(const DeleteTaskInParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskInParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskInParamDsResponse rsp = DeleteTaskInParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskInParamDsOutcome(rsp);
        else
            return DeleteTaskInParamDsOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskInParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskInParamDsAsync(const DeleteTaskInParamDsRequest& request, const DeleteTaskInParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTaskInParamDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteTaskInParamDsOutcomeCallable WedataClient::DeleteTaskInParamDsCallable(const DeleteTaskInParamDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskInParamDsOutcome()>>(
        [this, request]()
        {
            return this->DeleteTaskInParamDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteTaskOutParamDsOutcome WedataClient::DeleteTaskOutParamDs(const DeleteTaskOutParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskOutParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskOutParamDsResponse rsp = DeleteTaskOutParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskOutParamDsOutcome(rsp);
        else
            return DeleteTaskOutParamDsOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskOutParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskOutParamDsAsync(const DeleteTaskOutParamDsRequest& request, const DeleteTaskOutParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTaskOutParamDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteTaskOutParamDsOutcomeCallable WedataClient::DeleteTaskOutParamDsCallable(const DeleteTaskOutParamDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskOutParamDsOutcome()>>(
        [this, request]()
        {
            return this->DeleteTaskOutParamDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteTaskOutputRegistryOutcome WedataClient::DeleteTaskOutputRegistry(const DeleteTaskOutputRegistryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskOutputRegistry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskOutputRegistryResponse rsp = DeleteTaskOutputRegistryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskOutputRegistryOutcome(rsp);
        else
            return DeleteTaskOutputRegistryOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskOutputRegistryOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteTaskOutputRegistryAsync(const DeleteTaskOutputRegistryRequest& request, const DeleteTaskOutputRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTaskOutputRegistry(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteTaskOutputRegistryOutcomeCallable WedataClient::DeleteTaskOutputRegistryCallable(const DeleteTaskOutputRegistryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskOutputRegistryOutcome()>>(
        [this, request]()
        {
            return this->DeleteTaskOutputRegistry(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteWorkflowByIdOutcome WedataClient::DeleteWorkflowById(const DeleteWorkflowByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflowById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowByIdResponse rsp = DeleteWorkflowByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowByIdOutcome(rsp);
        else
            return DeleteWorkflowByIdOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowByIdOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteWorkflowByIdAsync(const DeleteWorkflowByIdRequest& request, const DeleteWorkflowByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkflowById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteWorkflowByIdOutcomeCallable WedataClient::DeleteWorkflowByIdCallable(const DeleteWorkflowByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkflowByIdOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkflowById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteWorkflowNewOutcome WedataClient::DeleteWorkflowNew(const DeleteWorkflowNewRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflowNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowNewResponse rsp = DeleteWorkflowNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowNewOutcome(rsp);
        else
            return DeleteWorkflowNewOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowNewOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteWorkflowNewAsync(const DeleteWorkflowNewRequest& request, const DeleteWorkflowNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkflowNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteWorkflowNewOutcomeCallable WedataClient::DeleteWorkflowNewCallable(const DeleteWorkflowNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkflowNewOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkflowNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeAlarmEventsOutcome WedataClient::DescribeAlarmEvents(const DescribeAlarmEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmEventsResponse rsp = DescribeAlarmEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmEventsOutcome(rsp);
        else
            return DescribeAlarmEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmEventsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeAlarmEventsAsync(const DescribeAlarmEventsRequest& request, const DescribeAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeAlarmEventsOutcomeCallable WedataClient::DescribeAlarmEventsCallable(const DescribeAlarmEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeAlarmReceiverOutcome WedataClient::DescribeAlarmReceiver(const DescribeAlarmReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmReceiverResponse rsp = DescribeAlarmReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmReceiverOutcome(rsp);
        else
            return DescribeAlarmReceiverOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmReceiverOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeAlarmReceiverAsync(const DescribeAlarmReceiverRequest& request, const DescribeAlarmReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmReceiver(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeAlarmReceiverOutcomeCallable WedataClient::DescribeAlarmReceiverCallable(const DescribeAlarmReceiverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmReceiverOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmReceiver(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeAllByFolderNewOutcome WedataClient::DescribeAllByFolderNew(const DescribeAllByFolderNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllByFolderNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllByFolderNewResponse rsp = DescribeAllByFolderNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllByFolderNewOutcome(rsp);
        else
            return DescribeAllByFolderNewOutcome(o.GetError());
    }
    else
    {
        return DescribeAllByFolderNewOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeAllByFolderNewAsync(const DescribeAllByFolderNewRequest& request, const DescribeAllByFolderNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllByFolderNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeAllByFolderNewOutcomeCallable WedataClient::DescribeAllByFolderNewCallable(const DescribeAllByFolderNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllByFolderNewOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllByFolderNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeAllTaskTypeOutcome WedataClient::DescribeAllTaskType(const DescribeAllTaskTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllTaskType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllTaskTypeResponse rsp = DescribeAllTaskTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllTaskTypeOutcome(rsp);
        else
            return DescribeAllTaskTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeAllTaskTypeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeAllTaskTypeAsync(const DescribeAllTaskTypeRequest& request, const DescribeAllTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllTaskType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeAllTaskTypeOutcomeCallable WedataClient::DescribeAllTaskTypeCallable(const DescribeAllTaskTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllTaskTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllTaskType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeAllUsedVersionSonOutcome WedataClient::DescribeAllUsedVersionSon(const DescribeAllUsedVersionSonRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllUsedVersionSon");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllUsedVersionSonResponse rsp = DescribeAllUsedVersionSonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllUsedVersionSonOutcome(rsp);
        else
            return DescribeAllUsedVersionSonOutcome(o.GetError());
    }
    else
    {
        return DescribeAllUsedVersionSonOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeAllUsedVersionSonAsync(const DescribeAllUsedVersionSonRequest& request, const DescribeAllUsedVersionSonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllUsedVersionSon(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeAllUsedVersionSonOutcomeCallable WedataClient::DescribeAllUsedVersionSonCallable(const DescribeAllUsedVersionSonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllUsedVersionSonOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllUsedVersionSon(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeApproveListOutcome WedataClient::DescribeApproveList(const DescribeApproveListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApproveList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApproveListResponse rsp = DescribeApproveListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApproveListOutcome(rsp);
        else
            return DescribeApproveListOutcome(o.GetError());
    }
    else
    {
        return DescribeApproveListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeApproveListAsync(const DescribeApproveListRequest& request, const DescribeApproveListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApproveList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeApproveListOutcomeCallable WedataClient::DescribeApproveListCallable(const DescribeApproveListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApproveListOutcome()>>(
        [this, request]()
        {
            return this->DescribeApproveList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeApproveTypeListOutcome WedataClient::DescribeApproveTypeList(const DescribeApproveTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApproveTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApproveTypeListResponse rsp = DescribeApproveTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApproveTypeListOutcome(rsp);
        else
            return DescribeApproveTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeApproveTypeListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeApproveTypeListAsync(const DescribeApproveTypeListRequest& request, const DescribeApproveTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApproveTypeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeApproveTypeListOutcomeCallable WedataClient::DescribeApproveTypeListCallable(const DescribeApproveTypeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApproveTypeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeApproveTypeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeBaselineAllTaskDagOutcome WedataClient::DescribeBaselineAllTaskDag(const DescribeBaselineAllTaskDagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineAllTaskDag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineAllTaskDagResponse rsp = DescribeBaselineAllTaskDagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineAllTaskDagOutcome(rsp);
        else
            return DescribeBaselineAllTaskDagOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineAllTaskDagOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBaselineAllTaskDagAsync(const DescribeBaselineAllTaskDagRequest& request, const DescribeBaselineAllTaskDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineAllTaskDag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeBaselineAllTaskDagOutcomeCallable WedataClient::DescribeBaselineAllTaskDagCallable(const DescribeBaselineAllTaskDagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineAllTaskDagOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineAllTaskDag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeBaselineByIdOutcome WedataClient::DescribeBaselineById(const DescribeBaselineByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineByIdResponse rsp = DescribeBaselineByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineByIdOutcome(rsp);
        else
            return DescribeBaselineByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineByIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBaselineByIdAsync(const DescribeBaselineByIdRequest& request, const DescribeBaselineByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeBaselineByIdOutcomeCallable WedataClient::DescribeBaselineByIdCallable(const DescribeBaselineByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeBaselineInstanceDagOutcome WedataClient::DescribeBaselineInstanceDag(const DescribeBaselineInstanceDagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineInstanceDag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineInstanceDagResponse rsp = DescribeBaselineInstanceDagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineInstanceDagOutcome(rsp);
        else
            return DescribeBaselineInstanceDagOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineInstanceDagOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBaselineInstanceDagAsync(const DescribeBaselineInstanceDagRequest& request, const DescribeBaselineInstanceDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineInstanceDag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeBaselineInstanceDagOutcomeCallable WedataClient::DescribeBaselineInstanceDagCallable(const DescribeBaselineInstanceDagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineInstanceDagOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineInstanceDag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeBaselineInstanceGanttOutcome WedataClient::DescribeBaselineInstanceGantt(const DescribeBaselineInstanceGanttRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineInstanceGantt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineInstanceGanttResponse rsp = DescribeBaselineInstanceGanttResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineInstanceGanttOutcome(rsp);
        else
            return DescribeBaselineInstanceGanttOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineInstanceGanttOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBaselineInstanceGanttAsync(const DescribeBaselineInstanceGanttRequest& request, const DescribeBaselineInstanceGanttAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineInstanceGantt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeBaselineInstanceGanttOutcomeCallable WedataClient::DescribeBaselineInstanceGanttCallable(const DescribeBaselineInstanceGanttRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineInstanceGanttOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineInstanceGantt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeBaselineInstancesOutcome WedataClient::DescribeBaselineInstances(const DescribeBaselineInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineInstancesResponse rsp = DescribeBaselineInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineInstancesOutcome(rsp);
        else
            return DescribeBaselineInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBaselineInstancesAsync(const DescribeBaselineInstancesRequest& request, const DescribeBaselineInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselineInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeBaselineInstancesOutcomeCallable WedataClient::DescribeBaselineInstancesCallable(const DescribeBaselineInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselineInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselineInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeBaselinesOutcome WedataClient::DescribeBaselines(const DescribeBaselinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselinesResponse rsp = DescribeBaselinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselinesOutcome(rsp);
        else
            return DescribeBaselinesOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselinesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBaselinesAsync(const DescribeBaselinesRequest& request, const DescribeBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaselines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeBaselinesOutcomeCallable WedataClient::DescribeBaselinesCallable(const DescribeBaselinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaselinesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaselines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeBatchOperateTaskOutcome WedataClient::DescribeBatchOperateTask(const DescribeBatchOperateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOperateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOperateTaskResponse rsp = DescribeBatchOperateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOperateTaskOutcome(rsp);
        else
            return DescribeBatchOperateTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOperateTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBatchOperateTaskAsync(const DescribeBatchOperateTaskRequest& request, const DescribeBatchOperateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchOperateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeBatchOperateTaskOutcomeCallable WedataClient::DescribeBatchOperateTaskCallable(const DescribeBatchOperateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchOperateTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchOperateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeBelongToOutcome WedataClient::DescribeBelongTo(const DescribeBelongToRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBelongTo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBelongToResponse rsp = DescribeBelongToResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBelongToOutcome(rsp);
        else
            return DescribeBelongToOutcome(o.GetError());
    }
    else
    {
        return DescribeBelongToOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBelongToAsync(const DescribeBelongToRequest& request, const DescribeBelongToAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBelongTo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeBelongToOutcomeCallable WedataClient::DescribeBelongToCallable(const DescribeBelongToRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBelongToOutcome()>>(
        [this, request]()
        {
            return this->DescribeBelongTo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeBrowsingHistoriesOutcome WedataClient::DescribeBrowsingHistories(const DescribeBrowsingHistoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBrowsingHistories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBrowsingHistoriesResponse rsp = DescribeBrowsingHistoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBrowsingHistoriesOutcome(rsp);
        else
            return DescribeBrowsingHistoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeBrowsingHistoriesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBrowsingHistoriesAsync(const DescribeBrowsingHistoriesRequest& request, const DescribeBrowsingHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBrowsingHistories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeBrowsingHistoriesOutcomeCallable WedataClient::DescribeBrowsingHistoriesCallable(const DescribeBrowsingHistoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBrowsingHistoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBrowsingHistories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeChildrenDsOutcome WedataClient::DescribeChildrenDs(const DescribeChildrenDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChildrenDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChildrenDsResponse rsp = DescribeChildrenDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChildrenDsOutcome(rsp);
        else
            return DescribeChildrenDsOutcome(o.GetError());
    }
    else
    {
        return DescribeChildrenDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeChildrenDsAsync(const DescribeChildrenDsRequest& request, const DescribeChildrenDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChildrenDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeChildrenDsOutcomeCallable WedataClient::DescribeChildrenDsCallable(const DescribeChildrenDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChildrenDsOutcome()>>(
        [this, request]()
        {
            return this->DescribeChildrenDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeChildrenPathTreesOutcome WedataClient::DescribeChildrenPathTrees(const DescribeChildrenPathTreesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChildrenPathTrees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChildrenPathTreesResponse rsp = DescribeChildrenPathTreesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChildrenPathTreesOutcome(rsp);
        else
            return DescribeChildrenPathTreesOutcome(o.GetError());
    }
    else
    {
        return DescribeChildrenPathTreesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeChildrenPathTreesAsync(const DescribeChildrenPathTreesRequest& request, const DescribeChildrenPathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChildrenPathTrees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeChildrenPathTreesOutcomeCallable WedataClient::DescribeChildrenPathTreesCallable(const DescribeChildrenPathTreesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChildrenPathTreesOutcome()>>(
        [this, request]()
        {
            return this->DescribeChildrenPathTrees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeClusterNamespaceListOutcome WedataClient::DescribeClusterNamespaceList(const DescribeClusterNamespaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterNamespaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterNamespaceListResponse rsp = DescribeClusterNamespaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterNamespaceListOutcome(rsp);
        else
            return DescribeClusterNamespaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterNamespaceListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeClusterNamespaceListAsync(const DescribeClusterNamespaceListRequest& request, const DescribeClusterNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterNamespaceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeClusterNamespaceListOutcomeCallable WedataClient::DescribeClusterNamespaceListCallable(const DescribeClusterNamespaceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterNamespaceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterNamespaceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeCodeDetailOutcome WedataClient::DescribeCodeDetail(const DescribeCodeDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeDetailResponse rsp = DescribeCodeDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeDetailOutcome(rsp);
        else
            return DescribeCodeDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeCodeDetailAsync(const DescribeCodeDetailRequest& request, const DescribeCodeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeCodeDetailOutcomeCallable WedataClient::DescribeCodeDetailCallable(const DescribeCodeDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodeDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeCodeDetailV2Outcome WedataClient::DescribeCodeDetailV2(const DescribeCodeDetailV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeDetailV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeDetailV2Response rsp = DescribeCodeDetailV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeDetailV2Outcome(rsp);
        else
            return DescribeCodeDetailV2Outcome(o.GetError());
    }
    else
    {
        return DescribeCodeDetailV2Outcome(outcome.GetError());
    }
}

void WedataClient::DescribeCodeDetailV2Async(const DescribeCodeDetailV2Request& request, const DescribeCodeDetailV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeDetailV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeCodeDetailV2OutcomeCallable WedataClient::DescribeCodeDetailV2Callable(const DescribeCodeDetailV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeDetailV2Outcome()>>(
        [this, request]()
        {
            return this->DescribeCodeDetailV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeCodeSearchAuditInfoOutcome WedataClient::DescribeCodeSearchAuditInfo(const DescribeCodeSearchAuditInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeSearchAuditInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeSearchAuditInfoResponse rsp = DescribeCodeSearchAuditInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeSearchAuditInfoOutcome(rsp);
        else
            return DescribeCodeSearchAuditInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeSearchAuditInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeCodeSearchAuditInfoAsync(const DescribeCodeSearchAuditInfoRequest& request, const DescribeCodeSearchAuditInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeSearchAuditInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeCodeSearchAuditInfoOutcomeCallable WedataClient::DescribeCodeSearchAuditInfoCallable(const DescribeCodeSearchAuditInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeSearchAuditInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodeSearchAuditInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeCodeSearchAuditInfoV2Outcome WedataClient::DescribeCodeSearchAuditInfoV2(const DescribeCodeSearchAuditInfoV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeSearchAuditInfoV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeSearchAuditInfoV2Response rsp = DescribeCodeSearchAuditInfoV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeSearchAuditInfoV2Outcome(rsp);
        else
            return DescribeCodeSearchAuditInfoV2Outcome(o.GetError());
    }
    else
    {
        return DescribeCodeSearchAuditInfoV2Outcome(outcome.GetError());
    }
}

void WedataClient::DescribeCodeSearchAuditInfoV2Async(const DescribeCodeSearchAuditInfoV2Request& request, const DescribeCodeSearchAuditInfoV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeSearchAuditInfoV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeCodeSearchAuditInfoV2OutcomeCallable WedataClient::DescribeCodeSearchAuditInfoV2Callable(const DescribeCodeSearchAuditInfoV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeSearchAuditInfoV2Outcome()>>(
        [this, request]()
        {
            return this->DescribeCodeSearchAuditInfoV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeCodeSearchCountOutcome WedataClient::DescribeCodeSearchCount(const DescribeCodeSearchCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeSearchCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeSearchCountResponse rsp = DescribeCodeSearchCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeSearchCountOutcome(rsp);
        else
            return DescribeCodeSearchCountOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeSearchCountOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeCodeSearchCountAsync(const DescribeCodeSearchCountRequest& request, const DescribeCodeSearchCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeSearchCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeCodeSearchCountOutcomeCallable WedataClient::DescribeCodeSearchCountCallable(const DescribeCodeSearchCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeSearchCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodeSearchCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeCodeSearchInfoOutcome WedataClient::DescribeCodeSearchInfo(const DescribeCodeSearchInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeSearchInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeSearchInfoResponse rsp = DescribeCodeSearchInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeSearchInfoOutcome(rsp);
        else
            return DescribeCodeSearchInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeSearchInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeCodeSearchInfoAsync(const DescribeCodeSearchInfoRequest& request, const DescribeCodeSearchInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeSearchInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeCodeSearchInfoOutcomeCallable WedataClient::DescribeCodeSearchInfoCallable(const DescribeCodeSearchInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeSearchInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodeSearchInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeCodeSearchInfoV2Outcome WedataClient::DescribeCodeSearchInfoV2(const DescribeCodeSearchInfoV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeSearchInfoV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeSearchInfoV2Response rsp = DescribeCodeSearchInfoV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeSearchInfoV2Outcome(rsp);
        else
            return DescribeCodeSearchInfoV2Outcome(o.GetError());
    }
    else
    {
        return DescribeCodeSearchInfoV2Outcome(outcome.GetError());
    }
}

void WedataClient::DescribeCodeSearchInfoV2Async(const DescribeCodeSearchInfoV2Request& request, const DescribeCodeSearchInfoV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeSearchInfoV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeCodeSearchInfoV2OutcomeCallable WedataClient::DescribeCodeSearchInfoV2Callable(const DescribeCodeSearchInfoV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeSearchInfoV2Outcome()>>(
        [this, request]()
        {
            return this->DescribeCodeSearchInfoV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeColumnLineageOutcome WedataClient::DescribeColumnLineage(const DescribeColumnLineageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeColumnLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeColumnLineageResponse rsp = DescribeColumnLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeColumnLineageOutcome(rsp);
        else
            return DescribeColumnLineageOutcome(o.GetError());
    }
    else
    {
        return DescribeColumnLineageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeColumnLineageAsync(const DescribeColumnLineageRequest& request, const DescribeColumnLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeColumnLineage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeColumnLineageOutcomeCallable WedataClient::DescribeColumnLineageCallable(const DescribeColumnLineageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeColumnLineageOutcome()>>(
        [this, request]()
        {
            return this->DescribeColumnLineage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeColumnsMetaOutcome WedataClient::DescribeColumnsMeta(const DescribeColumnsMetaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeColumnsMeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeColumnsMetaResponse rsp = DescribeColumnsMetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeColumnsMetaOutcome(rsp);
        else
            return DescribeColumnsMetaOutcome(o.GetError());
    }
    else
    {
        return DescribeColumnsMetaOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeColumnsMetaAsync(const DescribeColumnsMetaRequest& request, const DescribeColumnsMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeColumnsMeta(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeColumnsMetaOutcomeCallable WedataClient::DescribeColumnsMetaCallable(const DescribeColumnsMetaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeColumnsMetaOutcome()>>(
        [this, request]()
        {
            return this->DescribeColumnsMeta(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeCrontabTopNDsOutcome WedataClient::DescribeCrontabTopNDs(const DescribeCrontabTopNDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrontabTopNDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrontabTopNDsResponse rsp = DescribeCrontabTopNDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrontabTopNDsOutcome(rsp);
        else
            return DescribeCrontabTopNDsOutcome(o.GetError());
    }
    else
    {
        return DescribeCrontabTopNDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeCrontabTopNDsAsync(const DescribeCrontabTopNDsRequest& request, const DescribeCrontabTopNDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCrontabTopNDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeCrontabTopNDsOutcomeCallable WedataClient::DescribeCrontabTopNDsCallable(const DescribeCrontabTopNDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCrontabTopNDsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCrontabTopNDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDataBasesOutcome WedataClient::DescribeDataBases(const DescribeDataBasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataBases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataBasesResponse rsp = DescribeDataBasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataBasesOutcome(rsp);
        else
            return DescribeDataBasesOutcome(o.GetError());
    }
    else
    {
        return DescribeDataBasesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataBasesAsync(const DescribeDataBasesRequest& request, const DescribeDataBasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataBases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDataBasesOutcomeCallable WedataClient::DescribeDataBasesCallable(const DescribeDataBasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataBasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataBases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDataCheckStatOutcome WedataClient::DescribeDataCheckStat(const DescribeDataCheckStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataCheckStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataCheckStatResponse rsp = DescribeDataCheckStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataCheckStatOutcome(rsp);
        else
            return DescribeDataCheckStatOutcome(o.GetError());
    }
    else
    {
        return DescribeDataCheckStatOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataCheckStatAsync(const DescribeDataCheckStatRequest& request, const DescribeDataCheckStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataCheckStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDataCheckStatOutcomeCallable WedataClient::DescribeDataCheckStatCallable(const DescribeDataCheckStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataCheckStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataCheckStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDataDevelopTaskTypeOutcome WedataClient::DescribeDataDevelopTaskType(const DescribeDataDevelopTaskTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataDevelopTaskType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataDevelopTaskTypeResponse rsp = DescribeDataDevelopTaskTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataDevelopTaskTypeOutcome(rsp);
        else
            return DescribeDataDevelopTaskTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeDataDevelopTaskTypeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataDevelopTaskTypeAsync(const DescribeDataDevelopTaskTypeRequest& request, const DescribeDataDevelopTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataDevelopTaskType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDataDevelopTaskTypeOutcomeCallable WedataClient::DescribeDataDevelopTaskTypeCallable(const DescribeDataDevelopTaskTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataDevelopTaskTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataDevelopTaskType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDataObjectsOutcome WedataClient::DescribeDataObjects(const DescribeDataObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataObjectsResponse rsp = DescribeDataObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataObjectsOutcome(rsp);
        else
            return DescribeDataObjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataObjectsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataObjectsAsync(const DescribeDataObjectsRequest& request, const DescribeDataObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataObjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDataObjectsOutcomeCallable WedataClient::DescribeDataObjectsCallable(const DescribeDataObjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataObjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataObjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDataSourceInfoListOutcome WedataClient::DescribeDataSourceInfoList(const DescribeDataSourceInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSourceInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSourceInfoListResponse rsp = DescribeDataSourceInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSourceInfoListOutcome(rsp);
        else
            return DescribeDataSourceInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSourceInfoListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataSourceInfoListAsync(const DescribeDataSourceInfoListRequest& request, const DescribeDataSourceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataSourceInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDataSourceInfoListOutcomeCallable WedataClient::DescribeDataSourceInfoListCallable(const DescribeDataSourceInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataSourceInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataSourceInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDataSourceListOutcome WedataClient::DescribeDataSourceList(const DescribeDataSourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSourceListResponse rsp = DescribeDataSourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSourceListOutcome(rsp);
        else
            return DescribeDataSourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSourceListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataSourceListAsync(const DescribeDataSourceListRequest& request, const DescribeDataSourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataSourceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDataSourceListOutcomeCallable WedataClient::DescribeDataSourceListCallable(const DescribeDataSourceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataSourceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataSourceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDataSourceWithoutInfoOutcome WedataClient::DescribeDataSourceWithoutInfo(const DescribeDataSourceWithoutInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSourceWithoutInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSourceWithoutInfoResponse rsp = DescribeDataSourceWithoutInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSourceWithoutInfoOutcome(rsp);
        else
            return DescribeDataSourceWithoutInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSourceWithoutInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataSourceWithoutInfoAsync(const DescribeDataSourceWithoutInfoRequest& request, const DescribeDataSourceWithoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataSourceWithoutInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDataSourceWithoutInfoOutcomeCallable WedataClient::DescribeDataSourceWithoutInfoCallable(const DescribeDataSourceWithoutInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataSourceWithoutInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataSourceWithoutInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDataTypesOutcome WedataClient::DescribeDataTypes(const DescribeDataTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataTypesResponse rsp = DescribeDataTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataTypesOutcome(rsp);
        else
            return DescribeDataTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeDataTypesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataTypesAsync(const DescribeDataTypesRequest& request, const DescribeDataTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDataTypesOutcomeCallable WedataClient::DescribeDataTypesCallable(const DescribeDataTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDatabaseInfoListOutcome WedataClient::DescribeDatabaseInfoList(const DescribeDatabaseInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseInfoListResponse rsp = DescribeDatabaseInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseInfoListOutcome(rsp);
        else
            return DescribeDatabaseInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseInfoListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDatabaseInfoListAsync(const DescribeDatabaseInfoListRequest& request, const DescribeDatabaseInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDatabaseInfoListOutcomeCallable WedataClient::DescribeDatabaseInfoListCallable(const DescribeDatabaseInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDatabaseMetasOutcome WedataClient::DescribeDatabaseMetas(const DescribeDatabaseMetasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseMetas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseMetasResponse rsp = DescribeDatabaseMetasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseMetasOutcome(rsp);
        else
            return DescribeDatabaseMetasOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseMetasOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDatabaseMetasAsync(const DescribeDatabaseMetasRequest& request, const DescribeDatabaseMetasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseMetas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDatabaseMetasOutcomeCallable WedataClient::DescribeDatabaseMetasCallable(const DescribeDatabaseMetasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseMetasOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseMetas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDatasourceOutcome WedataClient::DescribeDatasource(const DescribeDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatasourceResponse rsp = DescribeDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatasourceOutcome(rsp);
        else
            return DescribeDatasourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDatasourceOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDatasourceAsync(const DescribeDatasourceRequest& request, const DescribeDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatasource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDatasourceOutcomeCallable WedataClient::DescribeDatasourceCallable(const DescribeDatasourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatasourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatasource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDependOpsTaskListOutcome WedataClient::DescribeDependOpsTaskList(const DescribeDependOpsTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDependOpsTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDependOpsTaskListResponse rsp = DescribeDependOpsTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDependOpsTaskListOutcome(rsp);
        else
            return DescribeDependOpsTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeDependOpsTaskListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDependOpsTaskListAsync(const DescribeDependOpsTaskListRequest& request, const DescribeDependOpsTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDependOpsTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDependOpsTaskListOutcomeCallable WedataClient::DescribeDependOpsTaskListCallable(const DescribeDependOpsTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDependOpsTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDependOpsTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDependOpsTasksOutcome WedataClient::DescribeDependOpsTasks(const DescribeDependOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDependOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDependOpsTasksResponse rsp = DescribeDependOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDependOpsTasksOutcome(rsp);
        else
            return DescribeDependOpsTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeDependOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDependOpsTasksAsync(const DescribeDependOpsTasksRequest& request, const DescribeDependOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDependOpsTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDependOpsTasksOutcomeCallable WedataClient::DescribeDependOpsTasksCallable(const DescribeDependOpsTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDependOpsTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDependOpsTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDependTaskListsOutcome WedataClient::DescribeDependTaskLists(const DescribeDependTaskListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDependTaskLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDependTaskListsResponse rsp = DescribeDependTaskListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDependTaskListsOutcome(rsp);
        else
            return DescribeDependTaskListsOutcome(o.GetError());
    }
    else
    {
        return DescribeDependTaskListsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDependTaskListsAsync(const DescribeDependTaskListsRequest& request, const DescribeDependTaskListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDependTaskLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDependTaskListsOutcomeCallable WedataClient::DescribeDependTaskListsCallable(const DescribeDependTaskListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDependTaskListsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDependTaskLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDependTasksDevDsOutcome WedataClient::DescribeDependTasksDevDs(const DescribeDependTasksDevDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDependTasksDevDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDependTasksDevDsResponse rsp = DescribeDependTasksDevDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDependTasksDevDsOutcome(rsp);
        else
            return DescribeDependTasksDevDsOutcome(o.GetError());
    }
    else
    {
        return DescribeDependTasksDevDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDependTasksDevDsAsync(const DescribeDependTasksDevDsRequest& request, const DescribeDependTasksDevDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDependTasksDevDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDependTasksDevDsOutcomeCallable WedataClient::DescribeDependTasksDevDsCallable(const DescribeDependTasksDevDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDependTasksDevDsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDependTasksDevDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDependTasksNewOutcome WedataClient::DescribeDependTasksNew(const DescribeDependTasksNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDependTasksNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDependTasksNewResponse rsp = DescribeDependTasksNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDependTasksNewOutcome(rsp);
        else
            return DescribeDependTasksNewOutcome(o.GetError());
    }
    else
    {
        return DescribeDependTasksNewOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDependTasksNewAsync(const DescribeDependTasksNewRequest& request, const DescribeDependTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDependTasksNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDependTasksNewOutcomeCallable WedataClient::DescribeDependTasksNewCallable(const DescribeDependTasksNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDependTasksNewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDependTasksNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDependencyTasksForProjectCloneOutcome WedataClient::DescribeDependencyTasksForProjectClone(const DescribeDependencyTasksForProjectCloneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDependencyTasksForProjectClone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDependencyTasksForProjectCloneResponse rsp = DescribeDependencyTasksForProjectCloneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDependencyTasksForProjectCloneOutcome(rsp);
        else
            return DescribeDependencyTasksForProjectCloneOutcome(o.GetError());
    }
    else
    {
        return DescribeDependencyTasksForProjectCloneOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDependencyTasksForProjectCloneAsync(const DescribeDependencyTasksForProjectCloneRequest& request, const DescribeDependencyTasksForProjectCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDependencyTasksForProjectClone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDependencyTasksForProjectCloneOutcomeCallable WedataClient::DescribeDependencyTasksForProjectCloneCallable(const DescribeDependencyTasksForProjectCloneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDependencyTasksForProjectCloneOutcome()>>(
        [this, request]()
        {
            return this->DescribeDependencyTasksForProjectClone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDependencyWorkflowForProjectCloneOutcome WedataClient::DescribeDependencyWorkflowForProjectClone(const DescribeDependencyWorkflowForProjectCloneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDependencyWorkflowForProjectClone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDependencyWorkflowForProjectCloneResponse rsp = DescribeDependencyWorkflowForProjectCloneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDependencyWorkflowForProjectCloneOutcome(rsp);
        else
            return DescribeDependencyWorkflowForProjectCloneOutcome(o.GetError());
    }
    else
    {
        return DescribeDependencyWorkflowForProjectCloneOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDependencyWorkflowForProjectCloneAsync(const DescribeDependencyWorkflowForProjectCloneRequest& request, const DescribeDependencyWorkflowForProjectCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDependencyWorkflowForProjectClone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDependencyWorkflowForProjectCloneOutcomeCallable WedataClient::DescribeDependencyWorkflowForProjectCloneCallable(const DescribeDependencyWorkflowForProjectCloneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDependencyWorkflowForProjectCloneOutcome()>>(
        [this, request]()
        {
            return this->DescribeDependencyWorkflowForProjectClone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDevelopmentSpaceSupportTypeOutcome WedataClient::DescribeDevelopmentSpaceSupportType(const DescribeDevelopmentSpaceSupportTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevelopmentSpaceSupportType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevelopmentSpaceSupportTypeResponse rsp = DescribeDevelopmentSpaceSupportTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevelopmentSpaceSupportTypeOutcome(rsp);
        else
            return DescribeDevelopmentSpaceSupportTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeDevelopmentSpaceSupportTypeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDevelopmentSpaceSupportTypeAsync(const DescribeDevelopmentSpaceSupportTypeRequest& request, const DescribeDevelopmentSpaceSupportTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevelopmentSpaceSupportType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDevelopmentSpaceSupportTypeOutcomeCallable WedataClient::DescribeDevelopmentSpaceSupportTypeCallable(const DescribeDevelopmentSpaceSupportTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevelopmentSpaceSupportTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevelopmentSpaceSupportType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDiagnosticInfoByBaselineIdOutcome WedataClient::DescribeDiagnosticInfoByBaselineId(const DescribeDiagnosticInfoByBaselineIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiagnosticInfoByBaselineId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiagnosticInfoByBaselineIdResponse rsp = DescribeDiagnosticInfoByBaselineIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiagnosticInfoByBaselineIdOutcome(rsp);
        else
            return DescribeDiagnosticInfoByBaselineIdOutcome(o.GetError());
    }
    else
    {
        return DescribeDiagnosticInfoByBaselineIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDiagnosticInfoByBaselineIdAsync(const DescribeDiagnosticInfoByBaselineIdRequest& request, const DescribeDiagnosticInfoByBaselineIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiagnosticInfoByBaselineId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDiagnosticInfoByBaselineIdOutcomeCallable WedataClient::DescribeDiagnosticInfoByBaselineIdCallable(const DescribeDiagnosticInfoByBaselineIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiagnosticInfoByBaselineIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiagnosticInfoByBaselineId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDimensionScoreOutcome WedataClient::DescribeDimensionScore(const DescribeDimensionScoreRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDimensionScore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDimensionScoreResponse rsp = DescribeDimensionScoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDimensionScoreOutcome(rsp);
        else
            return DescribeDimensionScoreOutcome(o.GetError());
    }
    else
    {
        return DescribeDimensionScoreOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDimensionScoreAsync(const DescribeDimensionScoreRequest& request, const DescribeDimensionScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDimensionScore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDimensionScoreOutcomeCallable WedataClient::DescribeDimensionScoreCallable(const DescribeDimensionScoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDimensionScoreOutcome()>>(
        [this, request]()
        {
            return this->DescribeDimensionScore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDrInstancePageOutcome WedataClient::DescribeDrInstancePage(const DescribeDrInstancePageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDrInstancePage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDrInstancePageResponse rsp = DescribeDrInstancePageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDrInstancePageOutcome(rsp);
        else
            return DescribeDrInstancePageOutcome(o.GetError());
    }
    else
    {
        return DescribeDrInstancePageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDrInstancePageAsync(const DescribeDrInstancePageRequest& request, const DescribeDrInstancePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDrInstancePage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDrInstancePageOutcomeCallable WedataClient::DescribeDrInstancePageCallable(const DescribeDrInstancePageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDrInstancePageOutcome()>>(
        [this, request]()
        {
            return this->DescribeDrInstancePage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDrInstanceScriptContentOutcome WedataClient::DescribeDrInstanceScriptContent(const DescribeDrInstanceScriptContentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDrInstanceScriptContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDrInstanceScriptContentResponse rsp = DescribeDrInstanceScriptContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDrInstanceScriptContentOutcome(rsp);
        else
            return DescribeDrInstanceScriptContentOutcome(o.GetError());
    }
    else
    {
        return DescribeDrInstanceScriptContentOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDrInstanceScriptContentAsync(const DescribeDrInstanceScriptContentRequest& request, const DescribeDrInstanceScriptContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDrInstanceScriptContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDrInstanceScriptContentOutcomeCallable WedataClient::DescribeDrInstanceScriptContentCallable(const DescribeDrInstanceScriptContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDrInstanceScriptContentOutcome()>>(
        [this, request]()
        {
            return this->DescribeDrInstanceScriptContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDrSonInstanceOutcome WedataClient::DescribeDrSonInstance(const DescribeDrSonInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDrSonInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDrSonInstanceResponse rsp = DescribeDrSonInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDrSonInstanceOutcome(rsp);
        else
            return DescribeDrSonInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeDrSonInstanceOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDrSonInstanceAsync(const DescribeDrSonInstanceRequest& request, const DescribeDrSonInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDrSonInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDrSonInstanceOutcomeCallable WedataClient::DescribeDrSonInstanceCallable(const DescribeDrSonInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDrSonInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDrSonInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDsEventOutcome WedataClient::DescribeDsEvent(const DescribeDsEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDsEventResponse rsp = DescribeDsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDsEventOutcome(rsp);
        else
            return DescribeDsEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDsEventOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDsEventAsync(const DescribeDsEventRequest& request, const DescribeDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDsEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDsEventOutcomeCallable WedataClient::DescribeDsEventCallable(const DescribeDsEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDsEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDsEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDsFolderTreeOutcome WedataClient::DescribeDsFolderTree(const DescribeDsFolderTreeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDsFolderTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDsFolderTreeResponse rsp = DescribeDsFolderTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDsFolderTreeOutcome(rsp);
        else
            return DescribeDsFolderTreeOutcome(o.GetError());
    }
    else
    {
        return DescribeDsFolderTreeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDsFolderTreeAsync(const DescribeDsFolderTreeRequest& request, const DescribeDsFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDsFolderTree(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDsFolderTreeOutcomeCallable WedataClient::DescribeDsFolderTreeCallable(const DescribeDsFolderTreeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDsFolderTreeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDsFolderTree(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDsKettleServerFolderTreeOutcome WedataClient::DescribeDsKettleServerFolderTree(const DescribeDsKettleServerFolderTreeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDsKettleServerFolderTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDsKettleServerFolderTreeResponse rsp = DescribeDsKettleServerFolderTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDsKettleServerFolderTreeOutcome(rsp);
        else
            return DescribeDsKettleServerFolderTreeOutcome(o.GetError());
    }
    else
    {
        return DescribeDsKettleServerFolderTreeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDsKettleServerFolderTreeAsync(const DescribeDsKettleServerFolderTreeRequest& request, const DescribeDsKettleServerFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDsKettleServerFolderTree(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDsKettleServerFolderTreeOutcomeCallable WedataClient::DescribeDsKettleServerFolderTreeCallable(const DescribeDsKettleServerFolderTreeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDsKettleServerFolderTreeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDsKettleServerFolderTree(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDsParentFolderTreeOutcome WedataClient::DescribeDsParentFolderTree(const DescribeDsParentFolderTreeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDsParentFolderTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDsParentFolderTreeResponse rsp = DescribeDsParentFolderTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDsParentFolderTreeOutcome(rsp);
        else
            return DescribeDsParentFolderTreeOutcome(o.GetError());
    }
    else
    {
        return DescribeDsParentFolderTreeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDsParentFolderTreeAsync(const DescribeDsParentFolderTreeRequest& request, const DescribeDsParentFolderTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDsParentFolderTree(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDsParentFolderTreeOutcomeCallable WedataClient::DescribeDsParentFolderTreeCallable(const DescribeDsParentFolderTreeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDsParentFolderTreeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDsParentFolderTree(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeEtlTaskTypeOutcome WedataClient::DescribeEtlTaskType(const DescribeEtlTaskTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEtlTaskType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEtlTaskTypeResponse rsp = DescribeEtlTaskTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEtlTaskTypeOutcome(rsp);
        else
            return DescribeEtlTaskTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeEtlTaskTypeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEtlTaskTypeAsync(const DescribeEtlTaskTypeRequest& request, const DescribeEtlTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEtlTaskType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeEtlTaskTypeOutcomeCallable WedataClient::DescribeEtlTaskTypeCallable(const DescribeEtlTaskTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEtlTaskTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeEtlTaskType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeEventOutcome WedataClient::DescribeEvent(const DescribeEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventResponse rsp = DescribeEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventOutcome(rsp);
        else
            return DescribeEventOutcome(o.GetError());
    }
    else
    {
        return DescribeEventOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventAsync(const DescribeEventRequest& request, const DescribeEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeEventOutcomeCallable WedataClient::DescribeEventCallable(const DescribeEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeEventCasesOutcome WedataClient::DescribeEventCases(const DescribeEventCasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventCases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventCasesResponse rsp = DescribeEventCasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventCasesOutcome(rsp);
        else
            return DescribeEventCasesOutcome(o.GetError());
    }
    else
    {
        return DescribeEventCasesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventCasesAsync(const DescribeEventCasesRequest& request, const DescribeEventCasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventCases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeEventCasesOutcomeCallable WedataClient::DescribeEventCasesCallable(const DescribeEventCasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventCasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventCases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeEventConsumeTasksOutcome WedataClient::DescribeEventConsumeTasks(const DescribeEventConsumeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventConsumeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventConsumeTasksResponse rsp = DescribeEventConsumeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventConsumeTasksOutcome(rsp);
        else
            return DescribeEventConsumeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeEventConsumeTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventConsumeTasksAsync(const DescribeEventConsumeTasksRequest& request, const DescribeEventConsumeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventConsumeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeEventConsumeTasksOutcomeCallable WedataClient::DescribeEventConsumeTasksCallable(const DescribeEventConsumeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventConsumeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventConsumeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeEventDetailOutcome WedataClient::DescribeEventDetail(const DescribeEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventDetailResponse rsp = DescribeEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventDetailOutcome(rsp);
        else
            return DescribeEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeEventDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventDetailAsync(const DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeEventDetailOutcomeCallable WedataClient::DescribeEventDetailCallable(const DescribeEventDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeEventIsAlarmTypesOutcome WedataClient::DescribeEventIsAlarmTypes(const DescribeEventIsAlarmTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventIsAlarmTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventIsAlarmTypesResponse rsp = DescribeEventIsAlarmTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventIsAlarmTypesOutcome(rsp);
        else
            return DescribeEventIsAlarmTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeEventIsAlarmTypesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventIsAlarmTypesAsync(const DescribeEventIsAlarmTypesRequest& request, const DescribeEventIsAlarmTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventIsAlarmTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeEventIsAlarmTypesOutcomeCallable WedataClient::DescribeEventIsAlarmTypesCallable(const DescribeEventIsAlarmTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventIsAlarmTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventIsAlarmTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeEventListenerByTaskIdOutcome WedataClient::DescribeEventListenerByTaskId(const DescribeEventListenerByTaskIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventListenerByTaskId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventListenerByTaskIdResponse rsp = DescribeEventListenerByTaskIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventListenerByTaskIdOutcome(rsp);
        else
            return DescribeEventListenerByTaskIdOutcome(o.GetError());
    }
    else
    {
        return DescribeEventListenerByTaskIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventListenerByTaskIdAsync(const DescribeEventListenerByTaskIdRequest& request, const DescribeEventListenerByTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventListenerByTaskId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeEventListenerByTaskIdOutcomeCallable WedataClient::DescribeEventListenerByTaskIdCallable(const DescribeEventListenerByTaskIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventListenerByTaskIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventListenerByTaskId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeEventListenerTaskOutcome WedataClient::DescribeEventListenerTask(const DescribeEventListenerTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventListenerTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventListenerTaskResponse rsp = DescribeEventListenerTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventListenerTaskOutcome(rsp);
        else
            return DescribeEventListenerTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeEventListenerTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventListenerTaskAsync(const DescribeEventListenerTaskRequest& request, const DescribeEventListenerTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventListenerTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeEventListenerTaskOutcomeCallable WedataClient::DescribeEventListenerTaskCallable(const DescribeEventListenerTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventListenerTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventListenerTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeEventTypesOutcome WedataClient::DescribeEventTypes(const DescribeEventTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventTypesResponse rsp = DescribeEventTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventTypesOutcome(rsp);
        else
            return DescribeEventTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeEventTypesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventTypesAsync(const DescribeEventTypesRequest& request, const DescribeEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeEventTypesOutcomeCallable WedataClient::DescribeEventTypesCallable(const DescribeEventTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeEventsOutcome WedataClient::DescribeEvents(const DescribeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventsResponse rsp = DescribeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventsOutcome(rsp);
        else
            return DescribeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeEventsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeEventsOutcomeCallable WedataClient::DescribeEventsCallable(const DescribeEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeExecStrategyOutcome WedataClient::DescribeExecStrategy(const DescribeExecStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExecStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExecStrategyResponse rsp = DescribeExecStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExecStrategyOutcome(rsp);
        else
            return DescribeExecStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeExecStrategyOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeExecStrategyAsync(const DescribeExecStrategyRequest& request, const DescribeExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExecStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeExecStrategyOutcomeCallable WedataClient::DescribeExecStrategyCallable(const DescribeExecStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExecStrategyOutcome()>>(
        [this, request]()
        {
            return this->DescribeExecStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeFatherDatasourceInfoDsOutcome WedataClient::DescribeFatherDatasourceInfoDs(const DescribeFatherDatasourceInfoDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFatherDatasourceInfoDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFatherDatasourceInfoDsResponse rsp = DescribeFatherDatasourceInfoDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFatherDatasourceInfoDsOutcome(rsp);
        else
            return DescribeFatherDatasourceInfoDsOutcome(o.GetError());
    }
    else
    {
        return DescribeFatherDatasourceInfoDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFatherDatasourceInfoDsAsync(const DescribeFatherDatasourceInfoDsRequest& request, const DescribeFatherDatasourceInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFatherDatasourceInfoDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeFatherDatasourceInfoDsOutcomeCallable WedataClient::DescribeFatherDatasourceInfoDsCallable(const DescribeFatherDatasourceInfoDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFatherDatasourceInfoDsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFatherDatasourceInfoDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeFathersOutcome WedataClient::DescribeFathers(const DescribeFathersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFathers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFathersResponse rsp = DescribeFathersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFathersOutcome(rsp);
        else
            return DescribeFathersOutcome(o.GetError());
    }
    else
    {
        return DescribeFathersOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFathersAsync(const DescribeFathersRequest& request, const DescribeFathersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFathers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeFathersOutcomeCallable WedataClient::DescribeFathersCallable(const DescribeFathersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFathersOutcome()>>(
        [this, request]()
        {
            return this->DescribeFathers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeFieldBasicInfoOutcome WedataClient::DescribeFieldBasicInfo(const DescribeFieldBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFieldBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFieldBasicInfoResponse rsp = DescribeFieldBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFieldBasicInfoOutcome(rsp);
        else
            return DescribeFieldBasicInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFieldBasicInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFieldBasicInfoAsync(const DescribeFieldBasicInfoRequest& request, const DescribeFieldBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFieldBasicInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeFieldBasicInfoOutcomeCallable WedataClient::DescribeFieldBasicInfoCallable(const DescribeFieldBasicInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFieldBasicInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeFieldBasicInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeFolderListOutcome WedataClient::DescribeFolderList(const DescribeFolderListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFolderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFolderListResponse rsp = DescribeFolderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFolderListOutcome(rsp);
        else
            return DescribeFolderListOutcome(o.GetError());
    }
    else
    {
        return DescribeFolderListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFolderListAsync(const DescribeFolderListRequest& request, const DescribeFolderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFolderList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeFolderListOutcomeCallable WedataClient::DescribeFolderListCallable(const DescribeFolderListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFolderListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFolderList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeFolderWorkflowListOutcome WedataClient::DescribeFolderWorkflowList(const DescribeFolderWorkflowListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFolderWorkflowList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFolderWorkflowListResponse rsp = DescribeFolderWorkflowListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFolderWorkflowListOutcome(rsp);
        else
            return DescribeFolderWorkflowListOutcome(o.GetError());
    }
    else
    {
        return DescribeFolderWorkflowListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFolderWorkflowListAsync(const DescribeFolderWorkflowListRequest& request, const DescribeFolderWorkflowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFolderWorkflowList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeFolderWorkflowListOutcomeCallable WedataClient::DescribeFolderWorkflowListCallable(const DescribeFolderWorkflowListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFolderWorkflowListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFolderWorkflowList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeFunctionKindsOutcome WedataClient::DescribeFunctionKinds(const DescribeFunctionKindsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFunctionKinds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFunctionKindsResponse rsp = DescribeFunctionKindsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFunctionKindsOutcome(rsp);
        else
            return DescribeFunctionKindsOutcome(o.GetError());
    }
    else
    {
        return DescribeFunctionKindsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFunctionKindsAsync(const DescribeFunctionKindsRequest& request, const DescribeFunctionKindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFunctionKinds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeFunctionKindsOutcomeCallable WedataClient::DescribeFunctionKindsCallable(const DescribeFunctionKindsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFunctionKindsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFunctionKinds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeFunctionTypesOutcome WedataClient::DescribeFunctionTypes(const DescribeFunctionTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFunctionTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFunctionTypesResponse rsp = DescribeFunctionTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFunctionTypesOutcome(rsp);
        else
            return DescribeFunctionTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeFunctionTypesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFunctionTypesAsync(const DescribeFunctionTypesRequest& request, const DescribeFunctionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFunctionTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeFunctionTypesOutcomeCallable WedataClient::DescribeFunctionTypesCallable(const DescribeFunctionTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFunctionTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFunctionTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeImportableOfflineTaskOutcome WedataClient::DescribeImportableOfflineTask(const DescribeImportableOfflineTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImportableOfflineTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImportableOfflineTaskResponse rsp = DescribeImportableOfflineTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImportableOfflineTaskOutcome(rsp);
        else
            return DescribeImportableOfflineTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeImportableOfflineTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeImportableOfflineTaskAsync(const DescribeImportableOfflineTaskRequest& request, const DescribeImportableOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImportableOfflineTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeImportableOfflineTaskOutcomeCallable WedataClient::DescribeImportableOfflineTaskCallable(const DescribeImportableOfflineTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImportableOfflineTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeImportableOfflineTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInLongAgentListOutcome WedataClient::DescribeInLongAgentList(const DescribeInLongAgentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInLongAgentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInLongAgentListResponse rsp = DescribeInLongAgentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInLongAgentListOutcome(rsp);
        else
            return DescribeInLongAgentListOutcome(o.GetError());
    }
    else
    {
        return DescribeInLongAgentListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInLongAgentListAsync(const DescribeInLongAgentListRequest& request, const DescribeInLongAgentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInLongAgentList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInLongAgentListOutcomeCallable WedataClient::DescribeInLongAgentListCallable(const DescribeInLongAgentListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInLongAgentListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInLongAgentList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInLongAgentTaskListOutcome WedataClient::DescribeInLongAgentTaskList(const DescribeInLongAgentTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInLongAgentTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInLongAgentTaskListResponse rsp = DescribeInLongAgentTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInLongAgentTaskListOutcome(rsp);
        else
            return DescribeInLongAgentTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeInLongAgentTaskListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInLongAgentTaskListAsync(const DescribeInLongAgentTaskListRequest& request, const DescribeInLongAgentTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInLongAgentTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInLongAgentTaskListOutcomeCallable WedataClient::DescribeInLongAgentTaskListCallable(const DescribeInLongAgentTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInLongAgentTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInLongAgentTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInLongAgentVpcListOutcome WedataClient::DescribeInLongAgentVpcList(const DescribeInLongAgentVpcListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInLongAgentVpcList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInLongAgentVpcListResponse rsp = DescribeInLongAgentVpcListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInLongAgentVpcListOutcome(rsp);
        else
            return DescribeInLongAgentVpcListOutcome(o.GetError());
    }
    else
    {
        return DescribeInLongAgentVpcListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInLongAgentVpcListAsync(const DescribeInLongAgentVpcListRequest& request, const DescribeInLongAgentVpcListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInLongAgentVpcList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInLongAgentVpcListOutcomeCallable WedataClient::DescribeInLongAgentVpcListCallable(const DescribeInLongAgentVpcListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInLongAgentVpcListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInLongAgentVpcList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInLongTkeClusterListOutcome WedataClient::DescribeInLongTkeClusterList(const DescribeInLongTkeClusterListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInLongTkeClusterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInLongTkeClusterListResponse rsp = DescribeInLongTkeClusterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInLongTkeClusterListOutcome(rsp);
        else
            return DescribeInLongTkeClusterListOutcome(o.GetError());
    }
    else
    {
        return DescribeInLongTkeClusterListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInLongTkeClusterListAsync(const DescribeInLongTkeClusterListRequest& request, const DescribeInLongTkeClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInLongTkeClusterList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInLongTkeClusterListOutcomeCallable WedataClient::DescribeInLongTkeClusterListCallable(const DescribeInLongTkeClusterListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInLongTkeClusterListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInLongTkeClusterList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInfoTransByTypeIdDsOutcome WedataClient::DescribeInfoTransByTypeIdDs(const DescribeInfoTransByTypeIdDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInfoTransByTypeIdDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInfoTransByTypeIdDsResponse rsp = DescribeInfoTransByTypeIdDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInfoTransByTypeIdDsOutcome(rsp);
        else
            return DescribeInfoTransByTypeIdDsOutcome(o.GetError());
    }
    else
    {
        return DescribeInfoTransByTypeIdDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInfoTransByTypeIdDsAsync(const DescribeInfoTransByTypeIdDsRequest& request, const DescribeInfoTransByTypeIdDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInfoTransByTypeIdDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInfoTransByTypeIdDsOutcomeCallable WedataClient::DescribeInfoTransByTypeIdDsCallable(const DescribeInfoTransByTypeIdDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInfoTransByTypeIdDsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInfoTransByTypeIdDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstanceByCycleOutcome WedataClient::DescribeInstanceByCycle(const DescribeInstanceByCycleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceByCycle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceByCycleResponse rsp = DescribeInstanceByCycleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceByCycleOutcome(rsp);
        else
            return DescribeInstanceByCycleOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceByCycleOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceByCycleAsync(const DescribeInstanceByCycleRequest& request, const DescribeInstanceByCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceByCycle(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstanceByCycleOutcomeCallable WedataClient::DescribeInstanceByCycleCallable(const DescribeInstanceByCycleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceByCycleOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceByCycle(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstanceByCycleReportOutcome WedataClient::DescribeInstanceByCycleReport(const DescribeInstanceByCycleReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceByCycleReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceByCycleReportResponse rsp = DescribeInstanceByCycleReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceByCycleReportOutcome(rsp);
        else
            return DescribeInstanceByCycleReportOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceByCycleReportOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceByCycleReportAsync(const DescribeInstanceByCycleReportRequest& request, const DescribeInstanceByCycleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceByCycleReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstanceByCycleReportOutcomeCallable WedataClient::DescribeInstanceByCycleReportCallable(const DescribeInstanceByCycleReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceByCycleReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceByCycleReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstanceLastLogOutcome WedataClient::DescribeInstanceLastLog(const DescribeInstanceLastLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLastLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLastLogResponse rsp = DescribeInstanceLastLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLastLogOutcome(rsp);
        else
            return DescribeInstanceLastLogOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLastLogOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLastLogAsync(const DescribeInstanceLastLogRequest& request, const DescribeInstanceLastLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceLastLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstanceLastLogOutcomeCallable WedataClient::DescribeInstanceLastLogCallable(const DescribeInstanceLastLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceLastLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceLastLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstanceListOutcome WedataClient::DescribeInstanceList(const DescribeInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceListResponse rsp = DescribeInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceListOutcome(rsp);
        else
            return DescribeInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceListAsync(const DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstanceListOutcomeCallable WedataClient::DescribeInstanceListCallable(const DescribeInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstanceLogOutcome WedataClient::DescribeInstanceLog(const DescribeInstanceLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogResponse rsp = DescribeInstanceLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogOutcome(rsp);
        else
            return DescribeInstanceLogOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLogAsync(const DescribeInstanceLogRequest& request, const DescribeInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstanceLogOutcomeCallable WedataClient::DescribeInstanceLogCallable(const DescribeInstanceLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstanceLogDetailOutcome WedataClient::DescribeInstanceLogDetail(const DescribeInstanceLogDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogDetailResponse rsp = DescribeInstanceLogDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogDetailOutcome(rsp);
        else
            return DescribeInstanceLogDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLogDetailAsync(const DescribeInstanceLogDetailRequest& request, const DescribeInstanceLogDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceLogDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstanceLogDetailOutcomeCallable WedataClient::DescribeInstanceLogDetailCallable(const DescribeInstanceLogDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceLogDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceLogDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstanceLogFileOutcome WedataClient::DescribeInstanceLogFile(const DescribeInstanceLogFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogFileResponse rsp = DescribeInstanceLogFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogFileOutcome(rsp);
        else
            return DescribeInstanceLogFileOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogFileOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLogFileAsync(const DescribeInstanceLogFileRequest& request, const DescribeInstanceLogFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceLogFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstanceLogFileOutcomeCallable WedataClient::DescribeInstanceLogFileCallable(const DescribeInstanceLogFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceLogFileOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceLogFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstanceLogListOutcome WedataClient::DescribeInstanceLogList(const DescribeInstanceLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogListResponse rsp = DescribeInstanceLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogListOutcome(rsp);
        else
            return DescribeInstanceLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLogListAsync(const DescribeInstanceLogListRequest& request, const DescribeInstanceLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceLogList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstanceLogListOutcomeCallable WedataClient::DescribeInstanceLogListCallable(const DescribeInstanceLogListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceLogListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceLogList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstanceLogsOutcome WedataClient::DescribeInstanceLogs(const DescribeInstanceLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogsResponse rsp = DescribeInstanceLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogsOutcome(rsp);
        else
            return DescribeInstanceLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceLogsAsync(const DescribeInstanceLogsRequest& request, const DescribeInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstanceLogsOutcomeCallable WedataClient::DescribeInstanceLogsCallable(const DescribeInstanceLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstancesOutcome WedataClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstancesOutcomeCallable WedataClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeInstancesInfoWithTaskInfoOutcome WedataClient::DescribeInstancesInfoWithTaskInfo(const DescribeInstancesInfoWithTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesInfoWithTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesInfoWithTaskInfoResponse rsp = DescribeInstancesInfoWithTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesInfoWithTaskInfoOutcome(rsp);
        else
            return DescribeInstancesInfoWithTaskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesInfoWithTaskInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstancesInfoWithTaskInfoAsync(const DescribeInstancesInfoWithTaskInfoRequest& request, const DescribeInstancesInfoWithTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesInfoWithTaskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstancesInfoWithTaskInfoOutcomeCallable WedataClient::DescribeInstancesInfoWithTaskInfoCallable(const DescribeInstancesInfoWithTaskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesInfoWithTaskInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesInfoWithTaskInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeIntegrationNodeOutcome WedataClient::DescribeIntegrationNode(const DescribeIntegrationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationNodeResponse rsp = DescribeIntegrationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationNodeOutcome(rsp);
        else
            return DescribeIntegrationNodeOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationNodeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationNodeAsync(const DescribeIntegrationNodeRequest& request, const DescribeIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeIntegrationNodeOutcomeCallable WedataClient::DescribeIntegrationNodeCallable(const DescribeIntegrationNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationNodeOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeIntegrationStatisticsOutcome WedataClient::DescribeIntegrationStatistics(const DescribeIntegrationStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsResponse rsp = DescribeIntegrationStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsOutcome(rsp);
        else
            return DescribeIntegrationStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsAsync(const DescribeIntegrationStatisticsRequest& request, const DescribeIntegrationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeIntegrationStatisticsOutcomeCallable WedataClient::DescribeIntegrationStatisticsCallable(const DescribeIntegrationStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeIntegrationStatisticsAgentStatusOutcome WedataClient::DescribeIntegrationStatisticsAgentStatus(const DescribeIntegrationStatisticsAgentStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatisticsAgentStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsAgentStatusResponse rsp = DescribeIntegrationStatisticsAgentStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsAgentStatusOutcome(rsp);
        else
            return DescribeIntegrationStatisticsAgentStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsAgentStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsAgentStatusAsync(const DescribeIntegrationStatisticsAgentStatusRequest& request, const DescribeIntegrationStatisticsAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationStatisticsAgentStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeIntegrationStatisticsAgentStatusOutcomeCallable WedataClient::DescribeIntegrationStatisticsAgentStatusCallable(const DescribeIntegrationStatisticsAgentStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationStatisticsAgentStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationStatisticsAgentStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeIntegrationStatisticsInstanceTrendOutcome WedataClient::DescribeIntegrationStatisticsInstanceTrend(const DescribeIntegrationStatisticsInstanceTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatisticsInstanceTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsInstanceTrendResponse rsp = DescribeIntegrationStatisticsInstanceTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsInstanceTrendOutcome(rsp);
        else
            return DescribeIntegrationStatisticsInstanceTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsInstanceTrendOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsInstanceTrendAsync(const DescribeIntegrationStatisticsInstanceTrendRequest& request, const DescribeIntegrationStatisticsInstanceTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationStatisticsInstanceTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeIntegrationStatisticsInstanceTrendOutcomeCallable WedataClient::DescribeIntegrationStatisticsInstanceTrendCallable(const DescribeIntegrationStatisticsInstanceTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationStatisticsInstanceTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationStatisticsInstanceTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeIntegrationStatisticsRecordsTrendOutcome WedataClient::DescribeIntegrationStatisticsRecordsTrend(const DescribeIntegrationStatisticsRecordsTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatisticsRecordsTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsRecordsTrendResponse rsp = DescribeIntegrationStatisticsRecordsTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsRecordsTrendOutcome(rsp);
        else
            return DescribeIntegrationStatisticsRecordsTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsRecordsTrendOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsRecordsTrendAsync(const DescribeIntegrationStatisticsRecordsTrendRequest& request, const DescribeIntegrationStatisticsRecordsTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationStatisticsRecordsTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeIntegrationStatisticsRecordsTrendOutcomeCallable WedataClient::DescribeIntegrationStatisticsRecordsTrendCallable(const DescribeIntegrationStatisticsRecordsTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationStatisticsRecordsTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationStatisticsRecordsTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeIntegrationStatisticsTaskStatusOutcome WedataClient::DescribeIntegrationStatisticsTaskStatus(const DescribeIntegrationStatisticsTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatisticsTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsTaskStatusResponse rsp = DescribeIntegrationStatisticsTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsTaskStatusOutcome(rsp);
        else
            return DescribeIntegrationStatisticsTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsTaskStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsTaskStatusAsync(const DescribeIntegrationStatisticsTaskStatusRequest& request, const DescribeIntegrationStatisticsTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationStatisticsTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeIntegrationStatisticsTaskStatusOutcomeCallable WedataClient::DescribeIntegrationStatisticsTaskStatusCallable(const DescribeIntegrationStatisticsTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationStatisticsTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationStatisticsTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeIntegrationStatisticsTaskStatusTrendOutcome WedataClient::DescribeIntegrationStatisticsTaskStatusTrend(const DescribeIntegrationStatisticsTaskStatusTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationStatisticsTaskStatusTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationStatisticsTaskStatusTrendResponse rsp = DescribeIntegrationStatisticsTaskStatusTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationStatisticsTaskStatusTrendOutcome(rsp);
        else
            return DescribeIntegrationStatisticsTaskStatusTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationStatisticsTaskStatusTrendOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationStatisticsTaskStatusTrendAsync(const DescribeIntegrationStatisticsTaskStatusTrendRequest& request, const DescribeIntegrationStatisticsTaskStatusTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationStatisticsTaskStatusTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeIntegrationStatisticsTaskStatusTrendOutcomeCallable WedataClient::DescribeIntegrationStatisticsTaskStatusTrendCallable(const DescribeIntegrationStatisticsTaskStatusTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationStatisticsTaskStatusTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationStatisticsTaskStatusTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeIntegrationTaskOutcome WedataClient::DescribeIntegrationTask(const DescribeIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationTaskResponse rsp = DescribeIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationTaskOutcome(rsp);
        else
            return DescribeIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationTaskAsync(const DescribeIntegrationTaskRequest& request, const DescribeIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeIntegrationTaskOutcomeCallable WedataClient::DescribeIntegrationTaskCallable(const DescribeIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeIntegrationTasksOutcome WedataClient::DescribeIntegrationTasks(const DescribeIntegrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationTasksResponse rsp = DescribeIntegrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationTasksOutcome(rsp);
        else
            return DescribeIntegrationTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationTasksAsync(const DescribeIntegrationTasksRequest& request, const DescribeIntegrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeIntegrationTasksOutcomeCallable WedataClient::DescribeIntegrationTasksCallable(const DescribeIntegrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeIntegrationVersionNodesInfoOutcome WedataClient::DescribeIntegrationVersionNodesInfo(const DescribeIntegrationVersionNodesInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntegrationVersionNodesInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntegrationVersionNodesInfoResponse rsp = DescribeIntegrationVersionNodesInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntegrationVersionNodesInfoOutcome(rsp);
        else
            return DescribeIntegrationVersionNodesInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeIntegrationVersionNodesInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeIntegrationVersionNodesInfoAsync(const DescribeIntegrationVersionNodesInfoRequest& request, const DescribeIntegrationVersionNodesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIntegrationVersionNodesInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeIntegrationVersionNodesInfoOutcomeCallable WedataClient::DescribeIntegrationVersionNodesInfoCallable(const DescribeIntegrationVersionNodesInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIntegrationVersionNodesInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeIntegrationVersionNodesInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeLockOutcome WedataClient::DescribeLock(const DescribeLockRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLockResponse rsp = DescribeLockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLockOutcome(rsp);
        else
            return DescribeLockOutcome(o.GetError());
    }
    else
    {
        return DescribeLockOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeLockAsync(const DescribeLockRequest& request, const DescribeLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeLockOutcomeCallable WedataClient::DescribeLockCallable(const DescribeLockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLockOutcome()>>(
        [this, request]()
        {
            return this->DescribeLock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeMonitorsByPageOutcome WedataClient::DescribeMonitorsByPage(const DescribeMonitorsByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitorsByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorsByPageResponse rsp = DescribeMonitorsByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorsByPageOutcome(rsp);
        else
            return DescribeMonitorsByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorsByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeMonitorsByPageAsync(const DescribeMonitorsByPageRequest& request, const DescribeMonitorsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMonitorsByPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeMonitorsByPageOutcomeCallable WedataClient::DescribeMonitorsByPageCallable(const DescribeMonitorsByPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMonitorsByPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeMonitorsByPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOfflineTaskTokenOutcome WedataClient::DescribeOfflineTaskToken(const DescribeOfflineTaskTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOfflineTaskToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOfflineTaskTokenResponse rsp = DescribeOfflineTaskTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOfflineTaskTokenOutcome(rsp);
        else
            return DescribeOfflineTaskTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeOfflineTaskTokenOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOfflineTaskTokenAsync(const DescribeOfflineTaskTokenRequest& request, const DescribeOfflineTaskTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOfflineTaskToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOfflineTaskTokenOutcomeCallable WedataClient::DescribeOfflineTaskTokenCallable(const DescribeOfflineTaskTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOfflineTaskTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeOfflineTaskToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOperateOpsTaskDatasourceOutcome WedataClient::DescribeOperateOpsTaskDatasource(const DescribeOperateOpsTaskDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOperateOpsTaskDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOperateOpsTaskDatasourceResponse rsp = DescribeOperateOpsTaskDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOperateOpsTaskDatasourceOutcome(rsp);
        else
            return DescribeOperateOpsTaskDatasourceOutcome(o.GetError());
    }
    else
    {
        return DescribeOperateOpsTaskDatasourceOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOperateOpsTaskDatasourceAsync(const DescribeOperateOpsTaskDatasourceRequest& request, const DescribeOperateOpsTaskDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOperateOpsTaskDatasource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOperateOpsTaskDatasourceOutcomeCallable WedataClient::DescribeOperateOpsTaskDatasourceCallable(const DescribeOperateOpsTaskDatasourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOperateOpsTaskDatasourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeOperateOpsTaskDatasource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOperateOpsTaskDatasourceTypeOutcome WedataClient::DescribeOperateOpsTaskDatasourceType(const DescribeOperateOpsTaskDatasourceTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOperateOpsTaskDatasourceType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOperateOpsTaskDatasourceTypeResponse rsp = DescribeOperateOpsTaskDatasourceTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOperateOpsTaskDatasourceTypeOutcome(rsp);
        else
            return DescribeOperateOpsTaskDatasourceTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeOperateOpsTaskDatasourceTypeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOperateOpsTaskDatasourceTypeAsync(const DescribeOperateOpsTaskDatasourceTypeRequest& request, const DescribeOperateOpsTaskDatasourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOperateOpsTaskDatasourceType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOperateOpsTaskDatasourceTypeOutcomeCallable WedataClient::DescribeOperateOpsTaskDatasourceTypeCallable(const DescribeOperateOpsTaskDatasourceTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOperateOpsTaskDatasourceTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeOperateOpsTaskDatasourceType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOperateOpsTasksOutcome WedataClient::DescribeOperateOpsTasks(const DescribeOperateOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOperateOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOperateOpsTasksResponse rsp = DescribeOperateOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOperateOpsTasksOutcome(rsp);
        else
            return DescribeOperateOpsTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeOperateOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOperateOpsTasksAsync(const DescribeOperateOpsTasksRequest& request, const DescribeOperateOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOperateOpsTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOperateOpsTasksOutcomeCallable WedataClient::DescribeOperateOpsTasksCallable(const DescribeOperateOpsTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOperateOpsTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeOperateOpsTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOperateTasksOutcome WedataClient::DescribeOperateTasks(const DescribeOperateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOperateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOperateTasksResponse rsp = DescribeOperateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOperateTasksOutcome(rsp);
        else
            return DescribeOperateTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeOperateTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOperateTasksAsync(const DescribeOperateTasksRequest& request, const DescribeOperateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOperateTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOperateTasksOutcomeCallable WedataClient::DescribeOperateTasksCallable(const DescribeOperateTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOperateTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeOperateTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOpsInstanceLogListOutcome WedataClient::DescribeOpsInstanceLogList(const DescribeOpsInstanceLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpsInstanceLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpsInstanceLogListResponse rsp = DescribeOpsInstanceLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpsInstanceLogListOutcome(rsp);
        else
            return DescribeOpsInstanceLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeOpsInstanceLogListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOpsInstanceLogListAsync(const DescribeOpsInstanceLogListRequest& request, const DescribeOpsInstanceLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOpsInstanceLogList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOpsInstanceLogListOutcomeCallable WedataClient::DescribeOpsInstanceLogListCallable(const DescribeOpsInstanceLogListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOpsInstanceLogListOutcome()>>(
        [this, request]()
        {
            return this->DescribeOpsInstanceLogList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOpsMakePlanInstancesOutcome WedataClient::DescribeOpsMakePlanInstances(const DescribeOpsMakePlanInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpsMakePlanInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpsMakePlanInstancesResponse rsp = DescribeOpsMakePlanInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpsMakePlanInstancesOutcome(rsp);
        else
            return DescribeOpsMakePlanInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeOpsMakePlanInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOpsMakePlanInstancesAsync(const DescribeOpsMakePlanInstancesRequest& request, const DescribeOpsMakePlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOpsMakePlanInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOpsMakePlanInstancesOutcomeCallable WedataClient::DescribeOpsMakePlanInstancesCallable(const DescribeOpsMakePlanInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOpsMakePlanInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeOpsMakePlanInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOpsMakePlanTasksOutcome WedataClient::DescribeOpsMakePlanTasks(const DescribeOpsMakePlanTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpsMakePlanTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpsMakePlanTasksResponse rsp = DescribeOpsMakePlanTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpsMakePlanTasksOutcome(rsp);
        else
            return DescribeOpsMakePlanTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeOpsMakePlanTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOpsMakePlanTasksAsync(const DescribeOpsMakePlanTasksRequest& request, const DescribeOpsMakePlanTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOpsMakePlanTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOpsMakePlanTasksOutcomeCallable WedataClient::DescribeOpsMakePlanTasksCallable(const DescribeOpsMakePlanTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOpsMakePlanTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeOpsMakePlanTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOpsMakePlansOutcome WedataClient::DescribeOpsMakePlans(const DescribeOpsMakePlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpsMakePlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpsMakePlansResponse rsp = DescribeOpsMakePlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpsMakePlansOutcome(rsp);
        else
            return DescribeOpsMakePlansOutcome(o.GetError());
    }
    else
    {
        return DescribeOpsMakePlansOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOpsMakePlansAsync(const DescribeOpsMakePlansRequest& request, const DescribeOpsMakePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOpsMakePlans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOpsMakePlansOutcomeCallable WedataClient::DescribeOpsMakePlansCallable(const DescribeOpsMakePlansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOpsMakePlansOutcome()>>(
        [this, request]()
        {
            return this->DescribeOpsMakePlans(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOpsWorkflowsOutcome WedataClient::DescribeOpsWorkflows(const DescribeOpsWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpsWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpsWorkflowsResponse rsp = DescribeOpsWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpsWorkflowsOutcome(rsp);
        else
            return DescribeOpsWorkflowsOutcome(o.GetError());
    }
    else
    {
        return DescribeOpsWorkflowsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOpsWorkflowsAsync(const DescribeOpsWorkflowsRequest& request, const DescribeOpsWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOpsWorkflows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOpsWorkflowsOutcomeCallable WedataClient::DescribeOpsWorkflowsCallable(const DescribeOpsWorkflowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOpsWorkflowsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOpsWorkflows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeOrganizationalFunctionsOutcome WedataClient::DescribeOrganizationalFunctions(const DescribeOrganizationalFunctionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationalFunctions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationalFunctionsResponse rsp = DescribeOrganizationalFunctionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationalFunctionsOutcome(rsp);
        else
            return DescribeOrganizationalFunctionsOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationalFunctionsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeOrganizationalFunctionsAsync(const DescribeOrganizationalFunctionsRequest& request, const DescribeOrganizationalFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationalFunctions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeOrganizationalFunctionsOutcomeCallable WedataClient::DescribeOrganizationalFunctionsCallable(const DescribeOrganizationalFunctionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationalFunctionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationalFunctions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeParentTaskOutcome WedataClient::DescribeParentTask(const DescribeParentTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParentTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParentTaskResponse rsp = DescribeParentTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParentTaskOutcome(rsp);
        else
            return DescribeParentTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeParentTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeParentTaskAsync(const DescribeParentTaskRequest& request, const DescribeParentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeParentTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeParentTaskOutcomeCallable WedataClient::DescribeParentTaskCallable(const DescribeParentTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeParentTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeParentTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribePathTreesOutcome WedataClient::DescribePathTrees(const DescribePathTreesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePathTrees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePathTreesResponse rsp = DescribePathTreesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePathTreesOutcome(rsp);
        else
            return DescribePathTreesOutcome(o.GetError());
    }
    else
    {
        return DescribePathTreesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribePathTreesAsync(const DescribePathTreesRequest& request, const DescribePathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePathTrees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribePathTreesOutcomeCallable WedataClient::DescribePathTreesCallable(const DescribePathTreesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePathTreesOutcome()>>(
        [this, request]()
        {
            return this->DescribePathTrees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeProdTasksOutcome WedataClient::DescribeProdTasks(const DescribeProdTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProdTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProdTasksResponse rsp = DescribeProdTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProdTasksOutcome(rsp);
        else
            return DescribeProdTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeProdTasksOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeProdTasksAsync(const DescribeProdTasksRequest& request, const DescribeProdTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProdTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeProdTasksOutcomeCallable WedataClient::DescribeProdTasksCallable(const DescribeProdTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProdTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeProdTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeProjectOutcome WedataClient::DescribeProject(const DescribeProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectResponse rsp = DescribeProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectOutcome(rsp);
        else
            return DescribeProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeProjectOutcomeCallable WedataClient::DescribeProjectCallable(const DescribeProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeProjectParamDsPageOutcome WedataClient::DescribeProjectParamDsPage(const DescribeProjectParamDsPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectParamDsPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectParamDsPageResponse rsp = DescribeProjectParamDsPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectParamDsPageOutcome(rsp);
        else
            return DescribeProjectParamDsPageOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectParamDsPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeProjectParamDsPageAsync(const DescribeProjectParamDsPageRequest& request, const DescribeProjectParamDsPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectParamDsPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeProjectParamDsPageOutcomeCallable WedataClient::DescribeProjectParamDsPageCallable(const DescribeProjectParamDsPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectParamDsPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectParamDsPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeProjectParamVersionInfoDsOutcome WedataClient::DescribeProjectParamVersionInfoDs(const DescribeProjectParamVersionInfoDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectParamVersionInfoDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectParamVersionInfoDsResponse rsp = DescribeProjectParamVersionInfoDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectParamVersionInfoDsOutcome(rsp);
        else
            return DescribeProjectParamVersionInfoDsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectParamVersionInfoDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeProjectParamVersionInfoDsAsync(const DescribeProjectParamVersionInfoDsRequest& request, const DescribeProjectParamVersionInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectParamVersionInfoDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeProjectParamVersionInfoDsOutcomeCallable WedataClient::DescribeProjectParamVersionInfoDsCallable(const DescribeProjectParamVersionInfoDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectParamVersionInfoDsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectParamVersionInfoDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeQualityScoreOutcome WedataClient::DescribeQualityScore(const DescribeQualityScoreRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityScore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityScoreResponse rsp = DescribeQualityScoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityScoreOutcome(rsp);
        else
            return DescribeQualityScoreOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityScoreOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeQualityScoreAsync(const DescribeQualityScoreRequest& request, const DescribeQualityScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQualityScore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeQualityScoreOutcomeCallable WedataClient::DescribeQualityScoreCallable(const DescribeQualityScoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQualityScoreOutcome()>>(
        [this, request]()
        {
            return this->DescribeQualityScore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeQualityScoreTrendOutcome WedataClient::DescribeQualityScoreTrend(const DescribeQualityScoreTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityScoreTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityScoreTrendResponse rsp = DescribeQualityScoreTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityScoreTrendOutcome(rsp);
        else
            return DescribeQualityScoreTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityScoreTrendOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeQualityScoreTrendAsync(const DescribeQualityScoreTrendRequest& request, const DescribeQualityScoreTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQualityScoreTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeQualityScoreTrendOutcomeCallable WedataClient::DescribeQualityScoreTrendCallable(const DescribeQualityScoreTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQualityScoreTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeQualityScoreTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRealTimeTaskInstanceNodeInfoOutcome WedataClient::DescribeRealTimeTaskInstanceNodeInfo(const DescribeRealTimeTaskInstanceNodeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealTimeTaskInstanceNodeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealTimeTaskInstanceNodeInfoResponse rsp = DescribeRealTimeTaskInstanceNodeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealTimeTaskInstanceNodeInfoOutcome(rsp);
        else
            return DescribeRealTimeTaskInstanceNodeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRealTimeTaskInstanceNodeInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRealTimeTaskInstanceNodeInfoAsync(const DescribeRealTimeTaskInstanceNodeInfoRequest& request, const DescribeRealTimeTaskInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealTimeTaskInstanceNodeInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRealTimeTaskInstanceNodeInfoOutcomeCallable WedataClient::DescribeRealTimeTaskInstanceNodeInfoCallable(const DescribeRealTimeTaskInstanceNodeInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealTimeTaskInstanceNodeInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealTimeTaskInstanceNodeInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRealTimeTaskMetricOverviewOutcome WedataClient::DescribeRealTimeTaskMetricOverview(const DescribeRealTimeTaskMetricOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealTimeTaskMetricOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealTimeTaskMetricOverviewResponse rsp = DescribeRealTimeTaskMetricOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealTimeTaskMetricOverviewOutcome(rsp);
        else
            return DescribeRealTimeTaskMetricOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeRealTimeTaskMetricOverviewOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRealTimeTaskMetricOverviewAsync(const DescribeRealTimeTaskMetricOverviewRequest& request, const DescribeRealTimeTaskMetricOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealTimeTaskMetricOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRealTimeTaskMetricOverviewOutcomeCallable WedataClient::DescribeRealTimeTaskMetricOverviewCallable(const DescribeRealTimeTaskMetricOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealTimeTaskMetricOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealTimeTaskMetricOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRealTimeTaskSpeedOutcome WedataClient::DescribeRealTimeTaskSpeed(const DescribeRealTimeTaskSpeedRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealTimeTaskSpeed");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealTimeTaskSpeedResponse rsp = DescribeRealTimeTaskSpeedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealTimeTaskSpeedOutcome(rsp);
        else
            return DescribeRealTimeTaskSpeedOutcome(o.GetError());
    }
    else
    {
        return DescribeRealTimeTaskSpeedOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRealTimeTaskSpeedAsync(const DescribeRealTimeTaskSpeedRequest& request, const DescribeRealTimeTaskSpeedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealTimeTaskSpeed(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRealTimeTaskSpeedOutcomeCallable WedataClient::DescribeRealTimeTaskSpeedCallable(const DescribeRealTimeTaskSpeedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealTimeTaskSpeedOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealTimeTaskSpeed(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRelatedInstancesOutcome WedataClient::DescribeRelatedInstances(const DescribeRelatedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelatedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelatedInstancesResponse rsp = DescribeRelatedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelatedInstancesOutcome(rsp);
        else
            return DescribeRelatedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeRelatedInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRelatedInstancesAsync(const DescribeRelatedInstancesRequest& request, const DescribeRelatedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRelatedInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRelatedInstancesOutcomeCallable WedataClient::DescribeRelatedInstancesCallable(const DescribeRelatedInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRelatedInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRelatedInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeResourceManagePathTreesOutcome WedataClient::DescribeResourceManagePathTrees(const DescribeResourceManagePathTreesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceManagePathTrees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceManagePathTreesResponse rsp = DescribeResourceManagePathTreesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceManagePathTreesOutcome(rsp);
        else
            return DescribeResourceManagePathTreesOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceManagePathTreesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeResourceManagePathTreesAsync(const DescribeResourceManagePathTreesRequest& request, const DescribeResourceManagePathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceManagePathTrees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeResourceManagePathTreesOutcomeCallable WedataClient::DescribeResourceManagePathTreesCallable(const DescribeResourceManagePathTreesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceManagePathTreesOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceManagePathTrees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleOutcome WedataClient::DescribeRule(const DescribeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleResponse rsp = DescribeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleOutcome(rsp);
        else
            return DescribeRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleOutcomeCallable WedataClient::DescribeRuleCallable(const DescribeRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleDataSourcesOutcome WedataClient::DescribeRuleDataSources(const DescribeRuleDataSourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleDataSources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleDataSourcesResponse rsp = DescribeRuleDataSourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleDataSourcesOutcome(rsp);
        else
            return DescribeRuleDataSourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleDataSourcesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleDataSourcesAsync(const DescribeRuleDataSourcesRequest& request, const DescribeRuleDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleDataSources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleDataSourcesOutcomeCallable WedataClient::DescribeRuleDataSourcesCallable(const DescribeRuleDataSourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleDataSourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleDataSources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleDimStatOutcome WedataClient::DescribeRuleDimStat(const DescribeRuleDimStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleDimStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleDimStatResponse rsp = DescribeRuleDimStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleDimStatOutcome(rsp);
        else
            return DescribeRuleDimStatOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleDimStatOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleDimStatAsync(const DescribeRuleDimStatRequest& request, const DescribeRuleDimStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleDimStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleDimStatOutcomeCallable WedataClient::DescribeRuleDimStatCallable(const DescribeRuleDimStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleDimStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleDimStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleExecDetailOutcome WedataClient::DescribeRuleExecDetail(const DescribeRuleExecDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecDetailResponse rsp = DescribeRuleExecDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecDetailOutcome(rsp);
        else
            return DescribeRuleExecDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecDetailAsync(const DescribeRuleExecDetailRequest& request, const DescribeRuleExecDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleExecDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleExecDetailOutcomeCallable WedataClient::DescribeRuleExecDetailCallable(const DescribeRuleExecDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleExecDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleExecDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleExecExportResultOutcome WedataClient::DescribeRuleExecExportResult(const DescribeRuleExecExportResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecExportResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecExportResultResponse rsp = DescribeRuleExecExportResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecExportResultOutcome(rsp);
        else
            return DescribeRuleExecExportResultOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecExportResultOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecExportResultAsync(const DescribeRuleExecExportResultRequest& request, const DescribeRuleExecExportResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleExecExportResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleExecExportResultOutcomeCallable WedataClient::DescribeRuleExecExportResultCallable(const DescribeRuleExecExportResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleExecExportResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleExecExportResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleExecHistoryOutcome WedataClient::DescribeRuleExecHistory(const DescribeRuleExecHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecHistoryResponse rsp = DescribeRuleExecHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecHistoryOutcome(rsp);
        else
            return DescribeRuleExecHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecHistoryOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecHistoryAsync(const DescribeRuleExecHistoryRequest& request, const DescribeRuleExecHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleExecHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleExecHistoryOutcomeCallable WedataClient::DescribeRuleExecHistoryCallable(const DescribeRuleExecHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleExecHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleExecHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleExecLogOutcome WedataClient::DescribeRuleExecLog(const DescribeRuleExecLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecLogResponse rsp = DescribeRuleExecLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecLogOutcome(rsp);
        else
            return DescribeRuleExecLogOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecLogOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecLogAsync(const DescribeRuleExecLogRequest& request, const DescribeRuleExecLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleExecLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleExecLogOutcomeCallable WedataClient::DescribeRuleExecLogCallable(const DescribeRuleExecLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleExecLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleExecLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleExecResultsOutcome WedataClient::DescribeRuleExecResults(const DescribeRuleExecResultsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecResults");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecResultsResponse rsp = DescribeRuleExecResultsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecResultsOutcome(rsp);
        else
            return DescribeRuleExecResultsOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecResultsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecResultsAsync(const DescribeRuleExecResultsRequest& request, const DescribeRuleExecResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleExecResults(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleExecResultsOutcomeCallable WedataClient::DescribeRuleExecResultsCallable(const DescribeRuleExecResultsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleExecResultsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleExecResults(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleExecResultsByPageOutcome WedataClient::DescribeRuleExecResultsByPage(const DescribeRuleExecResultsByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecResultsByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecResultsByPageResponse rsp = DescribeRuleExecResultsByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecResultsByPageOutcome(rsp);
        else
            return DescribeRuleExecResultsByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecResultsByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecResultsByPageAsync(const DescribeRuleExecResultsByPageRequest& request, const DescribeRuleExecResultsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleExecResultsByPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleExecResultsByPageOutcomeCallable WedataClient::DescribeRuleExecResultsByPageCallable(const DescribeRuleExecResultsByPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleExecResultsByPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleExecResultsByPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleExecStatOutcome WedataClient::DescribeRuleExecStat(const DescribeRuleExecStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleExecStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleExecStatResponse rsp = DescribeRuleExecStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleExecStatOutcome(rsp);
        else
            return DescribeRuleExecStatOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleExecStatOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleExecStatAsync(const DescribeRuleExecStatRequest& request, const DescribeRuleExecStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleExecStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleExecStatOutcomeCallable WedataClient::DescribeRuleExecStatCallable(const DescribeRuleExecStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleExecStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleExecStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleGroupOutcome WedataClient::DescribeRuleGroup(const DescribeRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupResponse rsp = DescribeRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupOutcome(rsp);
        else
            return DescribeRuleGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupAsync(const DescribeRuleGroupRequest& request, const DescribeRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleGroupOutcomeCallable WedataClient::DescribeRuleGroupCallable(const DescribeRuleGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleGroupExecResultsByPageOutcome WedataClient::DescribeRuleGroupExecResultsByPage(const DescribeRuleGroupExecResultsByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroupExecResultsByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupExecResultsByPageResponse rsp = DescribeRuleGroupExecResultsByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupExecResultsByPageOutcome(rsp);
        else
            return DescribeRuleGroupExecResultsByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupExecResultsByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupExecResultsByPageAsync(const DescribeRuleGroupExecResultsByPageRequest& request, const DescribeRuleGroupExecResultsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleGroupExecResultsByPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleGroupExecResultsByPageOutcomeCallable WedataClient::DescribeRuleGroupExecResultsByPageCallable(const DescribeRuleGroupExecResultsByPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleGroupExecResultsByPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleGroupExecResultsByPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleGroupExecResultsByPageWithoutAuthOutcome WedataClient::DescribeRuleGroupExecResultsByPageWithoutAuth(const DescribeRuleGroupExecResultsByPageWithoutAuthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroupExecResultsByPageWithoutAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupExecResultsByPageWithoutAuthResponse rsp = DescribeRuleGroupExecResultsByPageWithoutAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupExecResultsByPageWithoutAuthOutcome(rsp);
        else
            return DescribeRuleGroupExecResultsByPageWithoutAuthOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupExecResultsByPageWithoutAuthOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupExecResultsByPageWithoutAuthAsync(const DescribeRuleGroupExecResultsByPageWithoutAuthRequest& request, const DescribeRuleGroupExecResultsByPageWithoutAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleGroupExecResultsByPageWithoutAuth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleGroupExecResultsByPageWithoutAuthOutcomeCallable WedataClient::DescribeRuleGroupExecResultsByPageWithoutAuthCallable(const DescribeRuleGroupExecResultsByPageWithoutAuthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleGroupExecResultsByPageWithoutAuthOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleGroupExecResultsByPageWithoutAuth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleGroupSubscriptionOutcome WedataClient::DescribeRuleGroupSubscription(const DescribeRuleGroupSubscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroupSubscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupSubscriptionResponse rsp = DescribeRuleGroupSubscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupSubscriptionOutcome(rsp);
        else
            return DescribeRuleGroupSubscriptionOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupSubscriptionOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupSubscriptionAsync(const DescribeRuleGroupSubscriptionRequest& request, const DescribeRuleGroupSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleGroupSubscription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleGroupSubscriptionOutcomeCallable WedataClient::DescribeRuleGroupSubscriptionCallable(const DescribeRuleGroupSubscriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleGroupSubscriptionOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleGroupSubscription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleGroupTableOutcome WedataClient::DescribeRuleGroupTable(const DescribeRuleGroupTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroupTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupTableResponse rsp = DescribeRuleGroupTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupTableOutcome(rsp);
        else
            return DescribeRuleGroupTableOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupTableOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupTableAsync(const DescribeRuleGroupTableRequest& request, const DescribeRuleGroupTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleGroupTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleGroupTableOutcomeCallable WedataClient::DescribeRuleGroupTableCallable(const DescribeRuleGroupTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleGroupTableOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleGroupTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleGroupsByPageOutcome WedataClient::DescribeRuleGroupsByPage(const DescribeRuleGroupsByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleGroupsByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleGroupsByPageResponse rsp = DescribeRuleGroupsByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleGroupsByPageOutcome(rsp);
        else
            return DescribeRuleGroupsByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleGroupsByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleGroupsByPageAsync(const DescribeRuleGroupsByPageRequest& request, const DescribeRuleGroupsByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleGroupsByPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleGroupsByPageOutcomeCallable WedataClient::DescribeRuleGroupsByPageCallable(const DescribeRuleGroupsByPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleGroupsByPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleGroupsByPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleHistoryByPageOutcome WedataClient::DescribeRuleHistoryByPage(const DescribeRuleHistoryByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleHistoryByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleHistoryByPageResponse rsp = DescribeRuleHistoryByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleHistoryByPageOutcome(rsp);
        else
            return DescribeRuleHistoryByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleHistoryByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleHistoryByPageAsync(const DescribeRuleHistoryByPageRequest& request, const DescribeRuleHistoryByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleHistoryByPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleHistoryByPageOutcomeCallable WedataClient::DescribeRuleHistoryByPageCallable(const DescribeRuleHistoryByPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleHistoryByPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleHistoryByPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleTablesByPageOutcome WedataClient::DescribeRuleTablesByPage(const DescribeRuleTablesByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleTablesByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleTablesByPageResponse rsp = DescribeRuleTablesByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleTablesByPageOutcome(rsp);
        else
            return DescribeRuleTablesByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleTablesByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleTablesByPageAsync(const DescribeRuleTablesByPageRequest& request, const DescribeRuleTablesByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleTablesByPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleTablesByPageOutcomeCallable WedataClient::DescribeRuleTablesByPageCallable(const DescribeRuleTablesByPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleTablesByPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleTablesByPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleTemplateOutcome WedataClient::DescribeRuleTemplate(const DescribeRuleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleTemplateResponse rsp = DescribeRuleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleTemplateOutcome(rsp);
        else
            return DescribeRuleTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleTemplateAsync(const DescribeRuleTemplateRequest& request, const DescribeRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleTemplateOutcomeCallable WedataClient::DescribeRuleTemplateCallable(const DescribeRuleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleTemplatesOutcome WedataClient::DescribeRuleTemplates(const DescribeRuleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleTemplatesResponse rsp = DescribeRuleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleTemplatesOutcome(rsp);
        else
            return DescribeRuleTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleTemplatesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleTemplatesAsync(const DescribeRuleTemplatesRequest& request, const DescribeRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleTemplatesOutcomeCallable WedataClient::DescribeRuleTemplatesCallable(const DescribeRuleTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRuleTemplatesByPageOutcome WedataClient::DescribeRuleTemplatesByPage(const DescribeRuleTemplatesByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleTemplatesByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleTemplatesByPageResponse rsp = DescribeRuleTemplatesByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleTemplatesByPageOutcome(rsp);
        else
            return DescribeRuleTemplatesByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleTemplatesByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRuleTemplatesByPageAsync(const DescribeRuleTemplatesByPageRequest& request, const DescribeRuleTemplatesByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleTemplatesByPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRuleTemplatesByPageOutcomeCallable WedataClient::DescribeRuleTemplatesByPageCallable(const DescribeRuleTemplatesByPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleTemplatesByPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleTemplatesByPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRulesOutcome WedataClient::DescribeRules(const DescribeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesResponse rsp = DescribeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesOutcome(rsp);
        else
            return DescribeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRulesOutcomeCallable WedataClient::DescribeRulesCallable(const DescribeRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRulesByPageOutcome WedataClient::DescribeRulesByPage(const DescribeRulesByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRulesByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesByPageResponse rsp = DescribeRulesByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesByPageOutcome(rsp);
        else
            return DescribeRulesByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRulesByPageAsync(const DescribeRulesByPageRequest& request, const DescribeRulesByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRulesByPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRulesByPageOutcomeCallable WedataClient::DescribeRulesByPageCallable(const DescribeRulesByPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRulesByPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRulesByPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeScheduleInstanceOutcome WedataClient::DescribeScheduleInstance(const DescribeScheduleInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScheduleInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScheduleInstanceResponse rsp = DescribeScheduleInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScheduleInstanceOutcome(rsp);
        else
            return DescribeScheduleInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeScheduleInstanceOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeScheduleInstanceAsync(const DescribeScheduleInstanceRequest& request, const DescribeScheduleInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScheduleInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeScheduleInstanceOutcomeCallable WedataClient::DescribeScheduleInstanceCallable(const DescribeScheduleInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScheduleInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeScheduleInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeScheduleInstancesOutcome WedataClient::DescribeScheduleInstances(const DescribeScheduleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScheduleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScheduleInstancesResponse rsp = DescribeScheduleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScheduleInstancesOutcome(rsp);
        else
            return DescribeScheduleInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeScheduleInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeScheduleInstancesAsync(const DescribeScheduleInstancesRequest& request, const DescribeScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScheduleInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeScheduleInstancesOutcomeCallable WedataClient::DescribeScheduleInstancesCallable(const DescribeScheduleInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScheduleInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeScheduleInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeSchedulerInstanceStatusOutcome WedataClient::DescribeSchedulerInstanceStatus(const DescribeSchedulerInstanceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedulerInstanceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulerInstanceStatusResponse rsp = DescribeSchedulerInstanceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulerInstanceStatusOutcome(rsp);
        else
            return DescribeSchedulerInstanceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulerInstanceStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSchedulerInstanceStatusAsync(const DescribeSchedulerInstanceStatusRequest& request, const DescribeSchedulerInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSchedulerInstanceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeSchedulerInstanceStatusOutcomeCallable WedataClient::DescribeSchedulerInstanceStatusCallable(const DescribeSchedulerInstanceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSchedulerInstanceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeSchedulerInstanceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeSchedulerRunTimeInstanceCntByStatusOutcome WedataClient::DescribeSchedulerRunTimeInstanceCntByStatus(const DescribeSchedulerRunTimeInstanceCntByStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedulerRunTimeInstanceCntByStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulerRunTimeInstanceCntByStatusResponse rsp = DescribeSchedulerRunTimeInstanceCntByStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulerRunTimeInstanceCntByStatusOutcome(rsp);
        else
            return DescribeSchedulerRunTimeInstanceCntByStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulerRunTimeInstanceCntByStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSchedulerRunTimeInstanceCntByStatusAsync(const DescribeSchedulerRunTimeInstanceCntByStatusRequest& request, const DescribeSchedulerRunTimeInstanceCntByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSchedulerRunTimeInstanceCntByStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeSchedulerRunTimeInstanceCntByStatusOutcomeCallable WedataClient::DescribeSchedulerRunTimeInstanceCntByStatusCallable(const DescribeSchedulerRunTimeInstanceCntByStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSchedulerRunTimeInstanceCntByStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeSchedulerRunTimeInstanceCntByStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeSchedulerTaskCntByStatusOutcome WedataClient::DescribeSchedulerTaskCntByStatus(const DescribeSchedulerTaskCntByStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedulerTaskCntByStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulerTaskCntByStatusResponse rsp = DescribeSchedulerTaskCntByStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulerTaskCntByStatusOutcome(rsp);
        else
            return DescribeSchedulerTaskCntByStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulerTaskCntByStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSchedulerTaskCntByStatusAsync(const DescribeSchedulerTaskCntByStatusRequest& request, const DescribeSchedulerTaskCntByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSchedulerTaskCntByStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeSchedulerTaskCntByStatusOutcomeCallable WedataClient::DescribeSchedulerTaskCntByStatusCallable(const DescribeSchedulerTaskCntByStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSchedulerTaskCntByStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeSchedulerTaskCntByStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeSchedulerTaskTypeCntOutcome WedataClient::DescribeSchedulerTaskTypeCnt(const DescribeSchedulerTaskTypeCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedulerTaskTypeCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulerTaskTypeCntResponse rsp = DescribeSchedulerTaskTypeCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulerTaskTypeCntOutcome(rsp);
        else
            return DescribeSchedulerTaskTypeCntOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulerTaskTypeCntOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSchedulerTaskTypeCntAsync(const DescribeSchedulerTaskTypeCntRequest& request, const DescribeSchedulerTaskTypeCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSchedulerTaskTypeCnt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeSchedulerTaskTypeCntOutcomeCallable WedataClient::DescribeSchedulerTaskTypeCntCallable(const DescribeSchedulerTaskTypeCntRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSchedulerTaskTypeCntOutcome()>>(
        [this, request]()
        {
            return this->DescribeSchedulerTaskTypeCnt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeScriptsImportTaskTypeOutcome WedataClient::DescribeScriptsImportTaskType(const DescribeScriptsImportTaskTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScriptsImportTaskType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScriptsImportTaskTypeResponse rsp = DescribeScriptsImportTaskTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScriptsImportTaskTypeOutcome(rsp);
        else
            return DescribeScriptsImportTaskTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeScriptsImportTaskTypeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeScriptsImportTaskTypeAsync(const DescribeScriptsImportTaskTypeRequest& request, const DescribeScriptsImportTaskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScriptsImportTaskType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeScriptsImportTaskTypeOutcomeCallable WedataClient::DescribeScriptsImportTaskTypeCallable(const DescribeScriptsImportTaskTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScriptsImportTaskTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeScriptsImportTaskType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeSonInstancesOutcome WedataClient::DescribeSonInstances(const DescribeSonInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSonInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSonInstancesResponse rsp = DescribeSonInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSonInstancesOutcome(rsp);
        else
            return DescribeSonInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeSonInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSonInstancesAsync(const DescribeSonInstancesRequest& request, const DescribeSonInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSonInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeSonInstancesOutcomeCallable WedataClient::DescribeSonInstancesCallable(const DescribeSonInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSonInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSonInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeStandardRuleDetailInfoListOutcome WedataClient::DescribeStandardRuleDetailInfoList(const DescribeStandardRuleDetailInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStandardRuleDetailInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStandardRuleDetailInfoListResponse rsp = DescribeStandardRuleDetailInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStandardRuleDetailInfoListOutcome(rsp);
        else
            return DescribeStandardRuleDetailInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStandardRuleDetailInfoListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeStandardRuleDetailInfoListAsync(const DescribeStandardRuleDetailInfoListRequest& request, const DescribeStandardRuleDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStandardRuleDetailInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeStandardRuleDetailInfoListOutcomeCallable WedataClient::DescribeStandardRuleDetailInfoListCallable(const DescribeStandardRuleDetailInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStandardRuleDetailInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStandardRuleDetailInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeStatisticInstanceStatusTrendOpsOutcome WedataClient::DescribeStatisticInstanceStatusTrendOps(const DescribeStatisticInstanceStatusTrendOpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStatisticInstanceStatusTrendOps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStatisticInstanceStatusTrendOpsResponse rsp = DescribeStatisticInstanceStatusTrendOpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStatisticInstanceStatusTrendOpsOutcome(rsp);
        else
            return DescribeStatisticInstanceStatusTrendOpsOutcome(o.GetError());
    }
    else
    {
        return DescribeStatisticInstanceStatusTrendOpsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeStatisticInstanceStatusTrendOpsAsync(const DescribeStatisticInstanceStatusTrendOpsRequest& request, const DescribeStatisticInstanceStatusTrendOpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStatisticInstanceStatusTrendOps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeStatisticInstanceStatusTrendOpsOutcomeCallable WedataClient::DescribeStatisticInstanceStatusTrendOpsCallable(const DescribeStatisticInstanceStatusTrendOpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStatisticInstanceStatusTrendOpsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStatisticInstanceStatusTrendOps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeStreamTaskLogListOutcome WedataClient::DescribeStreamTaskLogList(const DescribeStreamTaskLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamTaskLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamTaskLogListResponse rsp = DescribeStreamTaskLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamTaskLogListOutcome(rsp);
        else
            return DescribeStreamTaskLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamTaskLogListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeStreamTaskLogListAsync(const DescribeStreamTaskLogListRequest& request, const DescribeStreamTaskLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamTaskLogList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeStreamTaskLogListOutcomeCallable WedataClient::DescribeStreamTaskLogListCallable(const DescribeStreamTaskLogListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamTaskLogListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamTaskLogList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeSuccessorOpsTaskInfosOutcome WedataClient::DescribeSuccessorOpsTaskInfos(const DescribeSuccessorOpsTaskInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSuccessorOpsTaskInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSuccessorOpsTaskInfosResponse rsp = DescribeSuccessorOpsTaskInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSuccessorOpsTaskInfosOutcome(rsp);
        else
            return DescribeSuccessorOpsTaskInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeSuccessorOpsTaskInfosOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeSuccessorOpsTaskInfosAsync(const DescribeSuccessorOpsTaskInfosRequest& request, const DescribeSuccessorOpsTaskInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSuccessorOpsTaskInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeSuccessorOpsTaskInfosOutcomeCallable WedataClient::DescribeSuccessorOpsTaskInfosCallable(const DescribeSuccessorOpsTaskInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSuccessorOpsTaskInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeSuccessorOpsTaskInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTableBasicInfoOutcome WedataClient::DescribeTableBasicInfo(const DescribeTableBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableBasicInfoResponse rsp = DescribeTableBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableBasicInfoOutcome(rsp);
        else
            return DescribeTableBasicInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTableBasicInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableBasicInfoAsync(const DescribeTableBasicInfoRequest& request, const DescribeTableBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableBasicInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTableBasicInfoOutcomeCallable WedataClient::DescribeTableBasicInfoCallable(const DescribeTableBasicInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableBasicInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableBasicInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTableInfoListOutcome WedataClient::DescribeTableInfoList(const DescribeTableInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableInfoListResponse rsp = DescribeTableInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableInfoListOutcome(rsp);
        else
            return DescribeTableInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeTableInfoListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableInfoListAsync(const DescribeTableInfoListRequest& request, const DescribeTableInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTableInfoListOutcomeCallable WedataClient::DescribeTableInfoListCallable(const DescribeTableInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTableLineageOutcome WedataClient::DescribeTableLineage(const DescribeTableLineageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableLineageResponse rsp = DescribeTableLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableLineageOutcome(rsp);
        else
            return DescribeTableLineageOutcome(o.GetError());
    }
    else
    {
        return DescribeTableLineageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableLineageAsync(const DescribeTableLineageRequest& request, const DescribeTableLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableLineage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTableLineageOutcomeCallable WedataClient::DescribeTableLineageCallable(const DescribeTableLineageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableLineageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableLineage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTableLineageInfoOutcome WedataClient::DescribeTableLineageInfo(const DescribeTableLineageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableLineageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableLineageInfoResponse rsp = DescribeTableLineageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableLineageInfoOutcome(rsp);
        else
            return DescribeTableLineageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTableLineageInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableLineageInfoAsync(const DescribeTableLineageInfoRequest& request, const DescribeTableLineageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableLineageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTableLineageInfoOutcomeCallable WedataClient::DescribeTableLineageInfoCallable(const DescribeTableLineageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableLineageInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableLineageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTableMetaOutcome WedataClient::DescribeTableMeta(const DescribeTableMetaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableMeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableMetaResponse rsp = DescribeTableMetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableMetaOutcome(rsp);
        else
            return DescribeTableMetaOutcome(o.GetError());
    }
    else
    {
        return DescribeTableMetaOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableMetaAsync(const DescribeTableMetaRequest& request, const DescribeTableMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableMeta(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTableMetaOutcomeCallable WedataClient::DescribeTableMetaCallable(const DescribeTableMetaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableMetaOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableMeta(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTableMetasOutcome WedataClient::DescribeTableMetas(const DescribeTableMetasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableMetas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableMetasResponse rsp = DescribeTableMetasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableMetasOutcome(rsp);
        else
            return DescribeTableMetasOutcome(o.GetError());
    }
    else
    {
        return DescribeTableMetasOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableMetasAsync(const DescribeTableMetasRequest& request, const DescribeTableMetasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableMetas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTableMetasOutcomeCallable WedataClient::DescribeTableMetasCallable(const DescribeTableMetasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableMetasOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableMetas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTableQualityDetailsOutcome WedataClient::DescribeTableQualityDetails(const DescribeTableQualityDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableQualityDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableQualityDetailsResponse rsp = DescribeTableQualityDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableQualityDetailsOutcome(rsp);
        else
            return DescribeTableQualityDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeTableQualityDetailsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableQualityDetailsAsync(const DescribeTableQualityDetailsRequest& request, const DescribeTableQualityDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableQualityDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTableQualityDetailsOutcomeCallable WedataClient::DescribeTableQualityDetailsCallable(const DescribeTableQualityDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableQualityDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableQualityDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTableSchemaInfoOutcome WedataClient::DescribeTableSchemaInfo(const DescribeTableSchemaInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableSchemaInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableSchemaInfoResponse rsp = DescribeTableSchemaInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableSchemaInfoOutcome(rsp);
        else
            return DescribeTableSchemaInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTableSchemaInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableSchemaInfoAsync(const DescribeTableSchemaInfoRequest& request, const DescribeTableSchemaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableSchemaInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTableSchemaInfoOutcomeCallable WedataClient::DescribeTableSchemaInfoCallable(const DescribeTableSchemaInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableSchemaInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableSchemaInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTableScoreTrendOutcome WedataClient::DescribeTableScoreTrend(const DescribeTableScoreTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableScoreTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableScoreTrendResponse rsp = DescribeTableScoreTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableScoreTrendOutcome(rsp);
        else
            return DescribeTableScoreTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeTableScoreTrendOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTableScoreTrendAsync(const DescribeTableScoreTrendRequest& request, const DescribeTableScoreTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableScoreTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTableScoreTrendOutcomeCallable WedataClient::DescribeTableScoreTrendCallable(const DescribeTableScoreTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableScoreTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableScoreTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskAlarmRegulationsOutcome WedataClient::DescribeTaskAlarmRegulations(const DescribeTaskAlarmRegulationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskAlarmRegulations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskAlarmRegulationsResponse rsp = DescribeTaskAlarmRegulationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskAlarmRegulationsOutcome(rsp);
        else
            return DescribeTaskAlarmRegulationsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskAlarmRegulationsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskAlarmRegulationsAsync(const DescribeTaskAlarmRegulationsRequest& request, const DescribeTaskAlarmRegulationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskAlarmRegulations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskAlarmRegulationsOutcomeCallable WedataClient::DescribeTaskAlarmRegulationsCallable(const DescribeTaskAlarmRegulationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskAlarmRegulationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskAlarmRegulations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskBindVirtualTaskOutcome WedataClient::DescribeTaskBindVirtualTask(const DescribeTaskBindVirtualTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskBindVirtualTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskBindVirtualTaskResponse rsp = DescribeTaskBindVirtualTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskBindVirtualTaskOutcome(rsp);
        else
            return DescribeTaskBindVirtualTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskBindVirtualTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskBindVirtualTaskAsync(const DescribeTaskBindVirtualTaskRequest& request, const DescribeTaskBindVirtualTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskBindVirtualTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskBindVirtualTaskOutcomeCallable WedataClient::DescribeTaskBindVirtualTaskCallable(const DescribeTaskBindVirtualTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskBindVirtualTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskBindVirtualTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskByCycleOutcome WedataClient::DescribeTaskByCycle(const DescribeTaskByCycleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskByCycle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskByCycleResponse rsp = DescribeTaskByCycleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskByCycleOutcome(rsp);
        else
            return DescribeTaskByCycleOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskByCycleOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskByCycleAsync(const DescribeTaskByCycleRequest& request, const DescribeTaskByCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskByCycle(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskByCycleOutcomeCallable WedataClient::DescribeTaskByCycleCallable(const DescribeTaskByCycleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskByCycleOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskByCycle(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskByCycleReportOutcome WedataClient::DescribeTaskByCycleReport(const DescribeTaskByCycleReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskByCycleReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskByCycleReportResponse rsp = DescribeTaskByCycleReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskByCycleReportOutcome(rsp);
        else
            return DescribeTaskByCycleReportOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskByCycleReportOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskByCycleReportAsync(const DescribeTaskByCycleReportRequest& request, const DescribeTaskByCycleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskByCycleReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskByCycleReportOutcomeCallable WedataClient::DescribeTaskByCycleReportCallable(const DescribeTaskByCycleReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskByCycleReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskByCycleReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskByStatusReportOutcome WedataClient::DescribeTaskByStatusReport(const DescribeTaskByStatusReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskByStatusReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskByStatusReportResponse rsp = DescribeTaskByStatusReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskByStatusReportOutcome(rsp);
        else
            return DescribeTaskByStatusReportOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskByStatusReportOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskByStatusReportAsync(const DescribeTaskByStatusReportRequest& request, const DescribeTaskByStatusReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskByStatusReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskByStatusReportOutcomeCallable WedataClient::DescribeTaskByStatusReportCallable(const DescribeTaskByStatusReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskByStatusReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskByStatusReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskDetailOutcome WedataClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
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

void WedataClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskDetailOutcomeCallable WedataClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
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

WedataClient::DescribeTaskDetailDsOutcome WedataClient::DescribeTaskDetailDs(const DescribeTaskDetailDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetailDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailDsResponse rsp = DescribeTaskDetailDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailDsOutcome(rsp);
        else
            return DescribeTaskDetailDsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskDetailDsAsync(const DescribeTaskDetailDsRequest& request, const DescribeTaskDetailDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetailDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskDetailDsOutcomeCallable WedataClient::DescribeTaskDetailDsCallable(const DescribeTaskDetailDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskDetailDsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskDetailDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskInstanceOutcome WedataClient::DescribeTaskInstance(const DescribeTaskInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInstanceResponse rsp = DescribeTaskInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInstanceOutcome(rsp);
        else
            return DescribeTaskInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInstanceOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskInstanceAsync(const DescribeTaskInstanceRequest& request, const DescribeTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskInstanceOutcomeCallable WedataClient::DescribeTaskInstanceCallable(const DescribeTaskInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskInstanceReportDetailOutcome WedataClient::DescribeTaskInstanceReportDetail(const DescribeTaskInstanceReportDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInstanceReportDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInstanceReportDetailResponse rsp = DescribeTaskInstanceReportDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInstanceReportDetailOutcome(rsp);
        else
            return DescribeTaskInstanceReportDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInstanceReportDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskInstanceReportDetailAsync(const DescribeTaskInstanceReportDetailRequest& request, const DescribeTaskInstanceReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskInstanceReportDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskInstanceReportDetailOutcomeCallable WedataClient::DescribeTaskInstanceReportDetailCallable(const DescribeTaskInstanceReportDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskInstanceReportDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskInstanceReportDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskInstancesOutcome WedataClient::DescribeTaskInstances(const DescribeTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInstancesResponse rsp = DescribeTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInstancesOutcome(rsp);
        else
            return DescribeTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskInstancesAsync(const DescribeTaskInstancesRequest& request, const DescribeTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskInstancesOutcomeCallable WedataClient::DescribeTaskInstancesCallable(const DescribeTaskInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskLatestRunTimeOutcome WedataClient::DescribeTaskLatestRunTime(const DescribeTaskLatestRunTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLatestRunTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLatestRunTimeResponse rsp = DescribeTaskLatestRunTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLatestRunTimeOutcome(rsp);
        else
            return DescribeTaskLatestRunTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLatestRunTimeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskLatestRunTimeAsync(const DescribeTaskLatestRunTimeRequest& request, const DescribeTaskLatestRunTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskLatestRunTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskLatestRunTimeOutcomeCallable WedataClient::DescribeTaskLatestRunTimeCallable(const DescribeTaskLatestRunTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskLatestRunTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskLatestRunTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskListByConditionDsOutcome WedataClient::DescribeTaskListByConditionDs(const DescribeTaskListByConditionDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskListByConditionDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskListByConditionDsResponse rsp = DescribeTaskListByConditionDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskListByConditionDsOutcome(rsp);
        else
            return DescribeTaskListByConditionDsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskListByConditionDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskListByConditionDsAsync(const DescribeTaskListByConditionDsRequest& request, const DescribeTaskListByConditionDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskListByConditionDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskListByConditionDsOutcomeCallable WedataClient::DescribeTaskListByConditionDsCallable(const DescribeTaskListByConditionDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskListByConditionDsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskListByConditionDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskLockStatusOutcome WedataClient::DescribeTaskLockStatus(const DescribeTaskLockStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLockStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLockStatusResponse rsp = DescribeTaskLockStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLockStatusOutcome(rsp);
        else
            return DescribeTaskLockStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLockStatusOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskLockStatusAsync(const DescribeTaskLockStatusRequest& request, const DescribeTaskLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskLockStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskLockStatusOutcomeCallable WedataClient::DescribeTaskLockStatusCallable(const DescribeTaskLockStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskLockStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskLockStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskOutputRegistriesOutcome WedataClient::DescribeTaskOutputRegistries(const DescribeTaskOutputRegistriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskOutputRegistries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskOutputRegistriesResponse rsp = DescribeTaskOutputRegistriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskOutputRegistriesOutcome(rsp);
        else
            return DescribeTaskOutputRegistriesOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskOutputRegistriesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskOutputRegistriesAsync(const DescribeTaskOutputRegistriesRequest& request, const DescribeTaskOutputRegistriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskOutputRegistries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskOutputRegistriesOutcomeCallable WedataClient::DescribeTaskOutputRegistriesCallable(const DescribeTaskOutputRegistriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskOutputRegistriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskOutputRegistries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskParentRunTimeOutcome WedataClient::DescribeTaskParentRunTime(const DescribeTaskParentRunTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskParentRunTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskParentRunTimeResponse rsp = DescribeTaskParentRunTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskParentRunTimeOutcome(rsp);
        else
            return DescribeTaskParentRunTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskParentRunTimeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskParentRunTimeAsync(const DescribeTaskParentRunTimeRequest& request, const DescribeTaskParentRunTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskParentRunTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskParentRunTimeOutcomeCallable WedataClient::DescribeTaskParentRunTimeCallable(const DescribeTaskParentRunTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskParentRunTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskParentRunTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskReportOutcome WedataClient::DescribeTaskReport(const DescribeTaskReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskReportResponse rsp = DescribeTaskReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskReportOutcome(rsp);
        else
            return DescribeTaskReportOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskReportOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskReportAsync(const DescribeTaskReportRequest& request, const DescribeTaskReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskReportOutcomeCallable WedataClient::DescribeTaskReportCallable(const DescribeTaskReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskReportDetailListOutcome WedataClient::DescribeTaskReportDetailList(const DescribeTaskReportDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskReportDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskReportDetailListResponse rsp = DescribeTaskReportDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskReportDetailListOutcome(rsp);
        else
            return DescribeTaskReportDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskReportDetailListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskReportDetailListAsync(const DescribeTaskReportDetailListRequest& request, const DescribeTaskReportDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskReportDetailList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskReportDetailListOutcomeCallable WedataClient::DescribeTaskReportDetailListCallable(const DescribeTaskReportDetailListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskReportDetailListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskReportDetailList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskRunHistoryOutcome WedataClient::DescribeTaskRunHistory(const DescribeTaskRunHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskRunHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskRunHistoryResponse rsp = DescribeTaskRunHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskRunHistoryOutcome(rsp);
        else
            return DescribeTaskRunHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskRunHistoryOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskRunHistoryAsync(const DescribeTaskRunHistoryRequest& request, const DescribeTaskRunHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskRunHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskRunHistoryOutcomeCallable WedataClient::DescribeTaskRunHistoryCallable(const DescribeTaskRunHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskRunHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskRunHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskScriptOutcome WedataClient::DescribeTaskScript(const DescribeTaskScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskScriptResponse rsp = DescribeTaskScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskScriptOutcome(rsp);
        else
            return DescribeTaskScriptOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskScriptOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskScriptAsync(const DescribeTaskScriptRequest& request, const DescribeTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskScriptOutcomeCallable WedataClient::DescribeTaskScriptCallable(const DescribeTaskScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskScriptOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskTypeByScriptTypeOutcome WedataClient::DescribeTaskTypeByScriptType(const DescribeTaskTypeByScriptTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskTypeByScriptType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskTypeByScriptTypeResponse rsp = DescribeTaskTypeByScriptTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskTypeByScriptTypeOutcome(rsp);
        else
            return DescribeTaskTypeByScriptTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskTypeByScriptTypeOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskTypeByScriptTypeAsync(const DescribeTaskTypeByScriptTypeRequest& request, const DescribeTaskTypeByScriptTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskTypeByScriptType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskTypeByScriptTypeOutcomeCallable WedataClient::DescribeTaskTypeByScriptTypeCallable(const DescribeTaskTypeByScriptTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskTypeByScriptTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskTypeByScriptType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTasksByPageOutcome WedataClient::DescribeTasksByPage(const DescribeTasksByPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksByPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksByPageResponse rsp = DescribeTasksByPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksByPageOutcome(rsp);
        else
            return DescribeTasksByPageOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksByPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTasksByPageAsync(const DescribeTasksByPageRequest& request, const DescribeTasksByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasksByPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTasksByPageOutcomeCallable WedataClient::DescribeTasksByPageCallable(const DescribeTasksByPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksByPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasksByPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTasksForProjectCloneOutcome WedataClient::DescribeTasksForProjectClone(const DescribeTasksForProjectCloneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksForProjectClone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksForProjectCloneResponse rsp = DescribeTasksForProjectCloneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksForProjectCloneOutcome(rsp);
        else
            return DescribeTasksForProjectCloneOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksForProjectCloneOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTasksForProjectCloneAsync(const DescribeTasksForProjectCloneRequest& request, const DescribeTasksForProjectCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasksForProjectClone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTasksForProjectCloneOutcomeCallable WedataClient::DescribeTasksForProjectCloneCallable(const DescribeTasksForProjectCloneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksForProjectCloneOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasksForProjectClone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTemplateDimCountOutcome WedataClient::DescribeTemplateDimCount(const DescribeTemplateDimCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplateDimCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateDimCountResponse rsp = DescribeTemplateDimCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateDimCountOutcome(rsp);
        else
            return DescribeTemplateDimCountOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateDimCountOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTemplateDimCountAsync(const DescribeTemplateDimCountRequest& request, const DescribeTemplateDimCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTemplateDimCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTemplateDimCountOutcomeCallable WedataClient::DescribeTemplateDimCountCallable(const DescribeTemplateDimCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTemplateDimCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeTemplateDimCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTemplateHistoryOutcome WedataClient::DescribeTemplateHistory(const DescribeTemplateHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplateHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateHistoryResponse rsp = DescribeTemplateHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateHistoryOutcome(rsp);
        else
            return DescribeTemplateHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateHistoryOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTemplateHistoryAsync(const DescribeTemplateHistoryRequest& request, const DescribeTemplateHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTemplateHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTemplateHistoryOutcomeCallable WedataClient::DescribeTemplateHistoryCallable(const DescribeTemplateHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTemplateHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeTemplateHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeThirdTaskRunLogOutcome WedataClient::DescribeThirdTaskRunLog(const DescribeThirdTaskRunLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeThirdTaskRunLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeThirdTaskRunLogResponse rsp = DescribeThirdTaskRunLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeThirdTaskRunLogOutcome(rsp);
        else
            return DescribeThirdTaskRunLogOutcome(o.GetError());
    }
    else
    {
        return DescribeThirdTaskRunLogOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeThirdTaskRunLogAsync(const DescribeThirdTaskRunLogRequest& request, const DescribeThirdTaskRunLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeThirdTaskRunLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeThirdTaskRunLogOutcomeCallable WedataClient::DescribeThirdTaskRunLogCallable(const DescribeThirdTaskRunLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeThirdTaskRunLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeThirdTaskRunLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTopTableStatOutcome WedataClient::DescribeTopTableStat(const DescribeTopTableStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopTableStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopTableStatResponse rsp = DescribeTopTableStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopTableStatOutcome(rsp);
        else
            return DescribeTopTableStatOutcome(o.GetError());
    }
    else
    {
        return DescribeTopTableStatOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTopTableStatAsync(const DescribeTopTableStatRequest& request, const DescribeTopTableStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopTableStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTopTableStatOutcomeCallable WedataClient::DescribeTopTableStatCallable(const DescribeTopTableStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopTableStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopTableStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTrendStatOutcome WedataClient::DescribeTrendStat(const DescribeTrendStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrendStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrendStatResponse rsp = DescribeTrendStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrendStatOutcome(rsp);
        else
            return DescribeTrendStatOutcome(o.GetError());
    }
    else
    {
        return DescribeTrendStatOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTrendStatAsync(const DescribeTrendStatRequest& request, const DescribeTrendStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrendStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTrendStatOutcomeCallable WedataClient::DescribeTrendStatCallable(const DescribeTrendStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrendStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrendStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowCanvasInfoOutcome WedataClient::DescribeWorkflowCanvasInfo(const DescribeWorkflowCanvasInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowCanvasInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowCanvasInfoResponse rsp = DescribeWorkflowCanvasInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowCanvasInfoOutcome(rsp);
        else
            return DescribeWorkflowCanvasInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowCanvasInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowCanvasInfoAsync(const DescribeWorkflowCanvasInfoRequest& request, const DescribeWorkflowCanvasInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowCanvasInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowCanvasInfoOutcomeCallable WedataClient::DescribeWorkflowCanvasInfoCallable(const DescribeWorkflowCanvasInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowCanvasInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowCanvasInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowCanvasInfoDsOutcome WedataClient::DescribeWorkflowCanvasInfoDs(const DescribeWorkflowCanvasInfoDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowCanvasInfoDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowCanvasInfoDsResponse rsp = DescribeWorkflowCanvasInfoDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowCanvasInfoDsOutcome(rsp);
        else
            return DescribeWorkflowCanvasInfoDsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowCanvasInfoDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowCanvasInfoDsAsync(const DescribeWorkflowCanvasInfoDsRequest& request, const DescribeWorkflowCanvasInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowCanvasInfoDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowCanvasInfoDsOutcomeCallable WedataClient::DescribeWorkflowCanvasInfoDsCallable(const DescribeWorkflowCanvasInfoDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowCanvasInfoDsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowCanvasInfoDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowCanvasOpLogsOutcome WedataClient::DescribeWorkflowCanvasOpLogs(const DescribeWorkflowCanvasOpLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowCanvasOpLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowCanvasOpLogsResponse rsp = DescribeWorkflowCanvasOpLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowCanvasOpLogsOutcome(rsp);
        else
            return DescribeWorkflowCanvasOpLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowCanvasOpLogsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowCanvasOpLogsAsync(const DescribeWorkflowCanvasOpLogsRequest& request, const DescribeWorkflowCanvasOpLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowCanvasOpLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowCanvasOpLogsOutcomeCallable WedataClient::DescribeWorkflowCanvasOpLogsCallable(const DescribeWorkflowCanvasOpLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowCanvasOpLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowCanvasOpLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowExecuteByIdOutcome WedataClient::DescribeWorkflowExecuteById(const DescribeWorkflowExecuteByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowExecuteById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowExecuteByIdResponse rsp = DescribeWorkflowExecuteByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowExecuteByIdOutcome(rsp);
        else
            return DescribeWorkflowExecuteByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowExecuteByIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowExecuteByIdAsync(const DescribeWorkflowExecuteByIdRequest& request, const DescribeWorkflowExecuteByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowExecuteById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowExecuteByIdOutcomeCallable WedataClient::DescribeWorkflowExecuteByIdCallable(const DescribeWorkflowExecuteByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowExecuteByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowExecuteById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowForProjectCloneOutcome WedataClient::DescribeWorkflowForProjectClone(const DescribeWorkflowForProjectCloneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowForProjectClone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowForProjectCloneResponse rsp = DescribeWorkflowForProjectCloneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowForProjectCloneOutcome(rsp);
        else
            return DescribeWorkflowForProjectCloneOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowForProjectCloneOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowForProjectCloneAsync(const DescribeWorkflowForProjectCloneRequest& request, const DescribeWorkflowForProjectCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowForProjectClone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowForProjectCloneOutcomeCallable WedataClient::DescribeWorkflowForProjectCloneCallable(const DescribeWorkflowForProjectCloneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowForProjectCloneOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowForProjectClone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowInfoByIdOutcome WedataClient::DescribeWorkflowInfoById(const DescribeWorkflowInfoByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowInfoById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowInfoByIdResponse rsp = DescribeWorkflowInfoByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowInfoByIdOutcome(rsp);
        else
            return DescribeWorkflowInfoByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowInfoByIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowInfoByIdAsync(const DescribeWorkflowInfoByIdRequest& request, const DescribeWorkflowInfoByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowInfoById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowInfoByIdOutcomeCallable WedataClient::DescribeWorkflowInfoByIdCallable(const DescribeWorkflowInfoByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowInfoByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowInfoById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowListByProjectIdOutcome WedataClient::DescribeWorkflowListByProjectId(const DescribeWorkflowListByProjectIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowListByProjectId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowListByProjectIdResponse rsp = DescribeWorkflowListByProjectIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowListByProjectIdOutcome(rsp);
        else
            return DescribeWorkflowListByProjectIdOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowListByProjectIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowListByProjectIdAsync(const DescribeWorkflowListByProjectIdRequest& request, const DescribeWorkflowListByProjectIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowListByProjectId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowListByProjectIdOutcomeCallable WedataClient::DescribeWorkflowListByProjectIdCallable(const DescribeWorkflowListByProjectIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowListByProjectIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowListByProjectId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowOpsCanvasInfoOutcome WedataClient::DescribeWorkflowOpsCanvasInfo(const DescribeWorkflowOpsCanvasInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowOpsCanvasInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowOpsCanvasInfoResponse rsp = DescribeWorkflowOpsCanvasInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowOpsCanvasInfoOutcome(rsp);
        else
            return DescribeWorkflowOpsCanvasInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowOpsCanvasInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowOpsCanvasInfoAsync(const DescribeWorkflowOpsCanvasInfoRequest& request, const DescribeWorkflowOpsCanvasInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowOpsCanvasInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowOpsCanvasInfoOutcomeCallable WedataClient::DescribeWorkflowOpsCanvasInfoCallable(const DescribeWorkflowOpsCanvasInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowOpsCanvasInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowOpsCanvasInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowSchedulerInfoDsOutcome WedataClient::DescribeWorkflowSchedulerInfoDs(const DescribeWorkflowSchedulerInfoDsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowSchedulerInfoDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowSchedulerInfoDsResponse rsp = DescribeWorkflowSchedulerInfoDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowSchedulerInfoDsOutcome(rsp);
        else
            return DescribeWorkflowSchedulerInfoDsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowSchedulerInfoDsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowSchedulerInfoDsAsync(const DescribeWorkflowSchedulerInfoDsRequest& request, const DescribeWorkflowSchedulerInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowSchedulerInfoDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowSchedulerInfoDsOutcomeCallable WedataClient::DescribeWorkflowSchedulerInfoDsCallable(const DescribeWorkflowSchedulerInfoDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowSchedulerInfoDsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowSchedulerInfoDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowTaskCountOutcome WedataClient::DescribeWorkflowTaskCount(const DescribeWorkflowTaskCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowTaskCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowTaskCountResponse rsp = DescribeWorkflowTaskCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowTaskCountOutcome(rsp);
        else
            return DescribeWorkflowTaskCountOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowTaskCountOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowTaskCountAsync(const DescribeWorkflowTaskCountRequest& request, const DescribeWorkflowTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowTaskCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowTaskCountOutcomeCallable WedataClient::DescribeWorkflowTaskCountCallable(const DescribeWorkflowTaskCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowTaskCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowTaskCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeWorkflowTasksForProjectCloneOutcome WedataClient::DescribeWorkflowTasksForProjectClone(const DescribeWorkflowTasksForProjectCloneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowTasksForProjectClone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowTasksForProjectCloneResponse rsp = DescribeWorkflowTasksForProjectCloneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowTasksForProjectCloneOutcome(rsp);
        else
            return DescribeWorkflowTasksForProjectCloneOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowTasksForProjectCloneOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowTasksForProjectCloneAsync(const DescribeWorkflowTasksForProjectCloneRequest& request, const DescribeWorkflowTasksForProjectCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowTasksForProjectClone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowTasksForProjectCloneOutcomeCallable WedataClient::DescribeWorkflowTasksForProjectCloneCallable(const DescribeWorkflowTasksForProjectCloneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowTasksForProjectCloneOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowTasksForProjectClone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DiagnosePlusOutcome WedataClient::DiagnosePlus(const DiagnosePlusRequest &request)
{
    auto outcome = MakeRequest(request, "DiagnosePlus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DiagnosePlusResponse rsp = DiagnosePlusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DiagnosePlusOutcome(rsp);
        else
            return DiagnosePlusOutcome(o.GetError());
    }
    else
    {
        return DiagnosePlusOutcome(outcome.GetError());
    }
}

void WedataClient::DiagnosePlusAsync(const DiagnosePlusRequest& request, const DiagnosePlusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DiagnosePlus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DiagnosePlusOutcomeCallable WedataClient::DiagnosePlusCallable(const DiagnosePlusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DiagnosePlusOutcome()>>(
        [this, request]()
        {
            return this->DiagnosePlus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DryRunDIOfflineTaskOutcome WedataClient::DryRunDIOfflineTask(const DryRunDIOfflineTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DryRunDIOfflineTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DryRunDIOfflineTaskResponse rsp = DryRunDIOfflineTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DryRunDIOfflineTaskOutcome(rsp);
        else
            return DryRunDIOfflineTaskOutcome(o.GetError());
    }
    else
    {
        return DryRunDIOfflineTaskOutcome(outcome.GetError());
    }
}

void WedataClient::DryRunDIOfflineTaskAsync(const DryRunDIOfflineTaskRequest& request, const DryRunDIOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DryRunDIOfflineTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DryRunDIOfflineTaskOutcomeCallable WedataClient::DryRunDIOfflineTaskCallable(const DryRunDIOfflineTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DryRunDIOfflineTaskOutcome()>>(
        [this, request]()
        {
            return this->DryRunDIOfflineTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::EditBaselineOutcome WedataClient::EditBaseline(const EditBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "EditBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditBaselineResponse rsp = EditBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditBaselineOutcome(rsp);
        else
            return EditBaselineOutcome(o.GetError());
    }
    else
    {
        return EditBaselineOutcome(outcome.GetError());
    }
}

void WedataClient::EditBaselineAsync(const EditBaselineRequest& request, const EditBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditBaseline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::EditBaselineOutcomeCallable WedataClient::EditBaselineCallable(const EditBaselineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditBaselineOutcome()>>(
        [this, request]()
        {
            return this->EditBaseline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ExportDsEventOutcome WedataClient::ExportDsEvent(const ExportDsEventRequest &request)
{
    auto outcome = MakeRequest(request, "ExportDsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportDsEventResponse rsp = ExportDsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportDsEventOutcome(rsp);
        else
            return ExportDsEventOutcome(o.GetError());
    }
    else
    {
        return ExportDsEventOutcome(outcome.GetError());
    }
}

void WedataClient::ExportDsEventAsync(const ExportDsEventRequest& request, const ExportDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportDsEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ExportDsEventOutcomeCallable WedataClient::ExportDsEventCallable(const ExportDsEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportDsEventOutcome()>>(
        [this, request]()
        {
            return this->ExportDsEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ExportFilesOutcome WedataClient::ExportFiles(const ExportFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportFilesResponse rsp = ExportFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportFilesOutcome(rsp);
        else
            return ExportFilesOutcome(o.GetError());
    }
    else
    {
        return ExportFilesOutcome(outcome.GetError());
    }
}

void WedataClient::ExportFilesAsync(const ExportFilesRequest& request, const ExportFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ExportFilesOutcomeCallable WedataClient::ExportFilesCallable(const ExportFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportFilesOutcome()>>(
        [this, request]()
        {
            return this->ExportFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ExportProjectParamDsOutcome WedataClient::ExportProjectParamDs(const ExportProjectParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportProjectParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportProjectParamDsResponse rsp = ExportProjectParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportProjectParamDsOutcome(rsp);
        else
            return ExportProjectParamDsOutcome(o.GetError());
    }
    else
    {
        return ExportProjectParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::ExportProjectParamDsAsync(const ExportProjectParamDsRequest& request, const ExportProjectParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportProjectParamDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ExportProjectParamDsOutcomeCallable WedataClient::ExportProjectParamDsCallable(const ExportProjectParamDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportProjectParamDsOutcome()>>(
        [this, request]()
        {
            return this->ExportProjectParamDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ExportWorkflowXmlOutcome WedataClient::ExportWorkflowXml(const ExportWorkflowXmlRequest &request)
{
    auto outcome = MakeRequest(request, "ExportWorkflowXml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportWorkflowXmlResponse rsp = ExportWorkflowXmlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportWorkflowXmlOutcome(rsp);
        else
            return ExportWorkflowXmlOutcome(o.GetError());
    }
    else
    {
        return ExportWorkflowXmlOutcome(outcome.GetError());
    }
}

void WedataClient::ExportWorkflowXmlAsync(const ExportWorkflowXmlRequest& request, const ExportWorkflowXmlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportWorkflowXml(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ExportWorkflowXmlOutcomeCallable WedataClient::ExportWorkflowXmlCallable(const ExportWorkflowXmlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportWorkflowXmlOutcome()>>(
        [this, request]()
        {
            return this->ExportWorkflowXml(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ExportWorkflowZipOutcome WedataClient::ExportWorkflowZip(const ExportWorkflowZipRequest &request)
{
    auto outcome = MakeRequest(request, "ExportWorkflowZip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportWorkflowZipResponse rsp = ExportWorkflowZipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportWorkflowZipOutcome(rsp);
        else
            return ExportWorkflowZipOutcome(o.GetError());
    }
    else
    {
        return ExportWorkflowZipOutcome(outcome.GetError());
    }
}

void WedataClient::ExportWorkflowZipAsync(const ExportWorkflowZipRequest& request, const ExportWorkflowZipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportWorkflowZip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ExportWorkflowZipOutcomeCallable WedataClient::ExportWorkflowZipCallable(const ExportWorkflowZipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportWorkflowZipOutcome()>>(
        [this, request]()
        {
            return this->ExportWorkflowZip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::FindAllFolderOutcome WedataClient::FindAllFolder(const FindAllFolderRequest &request)
{
    auto outcome = MakeRequest(request, "FindAllFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FindAllFolderResponse rsp = FindAllFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FindAllFolderOutcome(rsp);
        else
            return FindAllFolderOutcome(o.GetError());
    }
    else
    {
        return FindAllFolderOutcome(outcome.GetError());
    }
}

void WedataClient::FindAllFolderAsync(const FindAllFolderRequest& request, const FindAllFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FindAllFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::FindAllFolderOutcomeCallable WedataClient::FindAllFolderCallable(const FindAllFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FindAllFolderOutcome()>>(
        [this, request]()
        {
            return this->FindAllFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::FindDependTaskListDsOutcome WedataClient::FindDependTaskListDs(const FindDependTaskListDsRequest &request)
{
    auto outcome = MakeRequest(request, "FindDependTaskListDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FindDependTaskListDsResponse rsp = FindDependTaskListDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FindDependTaskListDsOutcome(rsp);
        else
            return FindDependTaskListDsOutcome(o.GetError());
    }
    else
    {
        return FindDependTaskListDsOutcome(outcome.GetError());
    }
}

void WedataClient::FindDependTaskListDsAsync(const FindDependTaskListDsRequest& request, const FindDependTaskListDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FindDependTaskListDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::FindDependTaskListDsOutcomeCallable WedataClient::FindDependTaskListDsCallable(const FindDependTaskListDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FindDependTaskListDsOutcome()>>(
        [this, request]()
        {
            return this->FindDependTaskListDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::FindDependTaskListsDsOutcome WedataClient::FindDependTaskListsDs(const FindDependTaskListsDsRequest &request)
{
    auto outcome = MakeRequest(request, "FindDependTaskListsDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FindDependTaskListsDsResponse rsp = FindDependTaskListsDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FindDependTaskListsDsOutcome(rsp);
        else
            return FindDependTaskListsDsOutcome(o.GetError());
    }
    else
    {
        return FindDependTaskListsDsOutcome(outcome.GetError());
    }
}

void WedataClient::FindDependTaskListsDsAsync(const FindDependTaskListsDsRequest& request, const FindDependTaskListsDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FindDependTaskListsDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::FindDependTaskListsDsOutcomeCallable WedataClient::FindDependTaskListsDsCallable(const FindDependTaskListsDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FindDependTaskListsDsOutcome()>>(
        [this, request]()
        {
            return this->FindDependTaskListsDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::FindFuzzyTasksDsOutcome WedataClient::FindFuzzyTasksDs(const FindFuzzyTasksDsRequest &request)
{
    auto outcome = MakeRequest(request, "FindFuzzyTasksDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FindFuzzyTasksDsResponse rsp = FindFuzzyTasksDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FindFuzzyTasksDsOutcome(rsp);
        else
            return FindFuzzyTasksDsOutcome(o.GetError());
    }
    else
    {
        return FindFuzzyTasksDsOutcome(outcome.GetError());
    }
}

void WedataClient::FindFuzzyTasksDsAsync(const FindFuzzyTasksDsRequest& request, const FindFuzzyTasksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FindFuzzyTasksDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::FindFuzzyTasksDsOutcomeCallable WedataClient::FindFuzzyTasksDsCallable(const FindFuzzyTasksDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FindFuzzyTasksDsOutcome()>>(
        [this, request]()
        {
            return this->FindFuzzyTasksDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ForceSucInstancesOutcome WedataClient::ForceSucInstances(const ForceSucInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ForceSucInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForceSucInstancesResponse rsp = ForceSucInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForceSucInstancesOutcome(rsp);
        else
            return ForceSucInstancesOutcome(o.GetError());
    }
    else
    {
        return ForceSucInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ForceSucInstancesAsync(const ForceSucInstancesRequest& request, const ForceSucInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForceSucInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ForceSucInstancesOutcomeCallable WedataClient::ForceSucInstancesCallable(const ForceSucInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForceSucInstancesOutcome()>>(
        [this, request]()
        {
            return this->ForceSucInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ForceSucScheduleInstancesOutcome WedataClient::ForceSucScheduleInstances(const ForceSucScheduleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ForceSucScheduleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForceSucScheduleInstancesResponse rsp = ForceSucScheduleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForceSucScheduleInstancesOutcome(rsp);
        else
            return ForceSucScheduleInstancesOutcome(o.GetError());
    }
    else
    {
        return ForceSucScheduleInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ForceSucScheduleInstancesAsync(const ForceSucScheduleInstancesRequest& request, const ForceSucScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForceSucScheduleInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ForceSucScheduleInstancesOutcomeCallable WedataClient::ForceSucScheduleInstancesCallable(const ForceSucScheduleInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForceSucScheduleInstancesOutcome()>>(
        [this, request]()
        {
            return this->ForceSucScheduleInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::FreezeOpsTasksOutcome WedataClient::FreezeOpsTasks(const FreezeOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "FreezeOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FreezeOpsTasksResponse rsp = FreezeOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FreezeOpsTasksOutcome(rsp);
        else
            return FreezeOpsTasksOutcome(o.GetError());
    }
    else
    {
        return FreezeOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::FreezeOpsTasksAsync(const FreezeOpsTasksRequest& request, const FreezeOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FreezeOpsTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::FreezeOpsTasksOutcomeCallable WedataClient::FreezeOpsTasksCallable(const FreezeOpsTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FreezeOpsTasksOutcome()>>(
        [this, request]()
        {
            return this->FreezeOpsTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::FreezeTasksOutcome WedataClient::FreezeTasks(const FreezeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "FreezeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FreezeTasksResponse rsp = FreezeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FreezeTasksOutcome(rsp);
        else
            return FreezeTasksOutcome(o.GetError());
    }
    else
    {
        return FreezeTasksOutcome(outcome.GetError());
    }
}

void WedataClient::FreezeTasksAsync(const FreezeTasksRequest& request, const FreezeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FreezeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::FreezeTasksOutcomeCallable WedataClient::FreezeTasksCallable(const FreezeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FreezeTasksOutcome()>>(
        [this, request]()
        {
            return this->FreezeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::FreezeTasksByMultiWorkflowOutcome WedataClient::FreezeTasksByMultiWorkflow(const FreezeTasksByMultiWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "FreezeTasksByMultiWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FreezeTasksByMultiWorkflowResponse rsp = FreezeTasksByMultiWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FreezeTasksByMultiWorkflowOutcome(rsp);
        else
            return FreezeTasksByMultiWorkflowOutcome(o.GetError());
    }
    else
    {
        return FreezeTasksByMultiWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::FreezeTasksByMultiWorkflowAsync(const FreezeTasksByMultiWorkflowRequest& request, const FreezeTasksByMultiWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FreezeTasksByMultiWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::FreezeTasksByMultiWorkflowOutcomeCallable WedataClient::FreezeTasksByMultiWorkflowCallable(const FreezeTasksByMultiWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FreezeTasksByMultiWorkflowOutcome()>>(
        [this, request]()
        {
            return this->FreezeTasksByMultiWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::FreezeTasksByWorkflowIdsOutcome WedataClient::FreezeTasksByWorkflowIds(const FreezeTasksByWorkflowIdsRequest &request)
{
    auto outcome = MakeRequest(request, "FreezeTasksByWorkflowIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FreezeTasksByWorkflowIdsResponse rsp = FreezeTasksByWorkflowIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FreezeTasksByWorkflowIdsOutcome(rsp);
        else
            return FreezeTasksByWorkflowIdsOutcome(o.GetError());
    }
    else
    {
        return FreezeTasksByWorkflowIdsOutcome(outcome.GetError());
    }
}

void WedataClient::FreezeTasksByWorkflowIdsAsync(const FreezeTasksByWorkflowIdsRequest& request, const FreezeTasksByWorkflowIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FreezeTasksByWorkflowIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::FreezeTasksByWorkflowIdsOutcomeCallable WedataClient::FreezeTasksByWorkflowIdsCallable(const FreezeTasksByWorkflowIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FreezeTasksByWorkflowIdsOutcome()>>(
        [this, request]()
        {
            return this->FreezeTasksByWorkflowIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GenHiveTableDDLSqlOutcome WedataClient::GenHiveTableDDLSql(const GenHiveTableDDLSqlRequest &request)
{
    auto outcome = MakeRequest(request, "GenHiveTableDDLSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenHiveTableDDLSqlResponse rsp = GenHiveTableDDLSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenHiveTableDDLSqlOutcome(rsp);
        else
            return GenHiveTableDDLSqlOutcome(o.GetError());
    }
    else
    {
        return GenHiveTableDDLSqlOutcome(outcome.GetError());
    }
}

void WedataClient::GenHiveTableDDLSqlAsync(const GenHiveTableDDLSqlRequest& request, const GenHiveTableDDLSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenHiveTableDDLSql(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GenHiveTableDDLSqlOutcomeCallable WedataClient::GenHiveTableDDLSqlCallable(const GenHiveTableDDLSqlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenHiveTableDDLSqlOutcome()>>(
        [this, request]()
        {
            return this->GenHiveTableDDLSql(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetAdvanceRunParamsOutcome WedataClient::GetAdvanceRunParams(const GetAdvanceRunParamsRequest &request)
{
    auto outcome = MakeRequest(request, "GetAdvanceRunParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAdvanceRunParamsResponse rsp = GetAdvanceRunParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAdvanceRunParamsOutcome(rsp);
        else
            return GetAdvanceRunParamsOutcome(o.GetError());
    }
    else
    {
        return GetAdvanceRunParamsOutcome(outcome.GetError());
    }
}

void WedataClient::GetAdvanceRunParamsAsync(const GetAdvanceRunParamsRequest& request, const GetAdvanceRunParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAdvanceRunParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetAdvanceRunParamsOutcomeCallable WedataClient::GetAdvanceRunParamsCallable(const GetAdvanceRunParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAdvanceRunParamsOutcome()>>(
        [this, request]()
        {
            return this->GetAdvanceRunParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetBatchDetailErrorLogOutcome WedataClient::GetBatchDetailErrorLog(const GetBatchDetailErrorLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetBatchDetailErrorLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBatchDetailErrorLogResponse rsp = GetBatchDetailErrorLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBatchDetailErrorLogOutcome(rsp);
        else
            return GetBatchDetailErrorLogOutcome(o.GetError());
    }
    else
    {
        return GetBatchDetailErrorLogOutcome(outcome.GetError());
    }
}

void WedataClient::GetBatchDetailErrorLogAsync(const GetBatchDetailErrorLogRequest& request, const GetBatchDetailErrorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBatchDetailErrorLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetBatchDetailErrorLogOutcomeCallable WedataClient::GetBatchDetailErrorLogCallable(const GetBatchDetailErrorLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBatchDetailErrorLogOutcome()>>(
        [this, request]()
        {
            return this->GetBatchDetailErrorLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetCosTokenOutcome WedataClient::GetCosToken(const GetCosTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetCosToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCosTokenResponse rsp = GetCosTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCosTokenOutcome(rsp);
        else
            return GetCosTokenOutcome(o.GetError());
    }
    else
    {
        return GetCosTokenOutcome(outcome.GetError());
    }
}

void WedataClient::GetCosTokenAsync(const GetCosTokenRequest& request, const GetCosTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCosToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetCosTokenOutcomeCallable WedataClient::GetCosTokenCallable(const GetCosTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCosTokenOutcome()>>(
        [this, request]()
        {
            return this->GetCosToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetFileInfoOutcome WedataClient::GetFileInfo(const GetFileInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetFileInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFileInfoResponse rsp = GetFileInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFileInfoOutcome(rsp);
        else
            return GetFileInfoOutcome(o.GetError());
    }
    else
    {
        return GetFileInfoOutcome(outcome.GetError());
    }
}

void WedataClient::GetFileInfoAsync(const GetFileInfoRequest& request, const GetFileInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFileInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetFileInfoOutcomeCallable WedataClient::GetFileInfoCallable(const GetFileInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFileInfoOutcome()>>(
        [this, request]()
        {
            return this->GetFileInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetIntegrationNodeColumnSchemaOutcome WedataClient::GetIntegrationNodeColumnSchema(const GetIntegrationNodeColumnSchemaRequest &request)
{
    auto outcome = MakeRequest(request, "GetIntegrationNodeColumnSchema");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetIntegrationNodeColumnSchemaResponse rsp = GetIntegrationNodeColumnSchemaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetIntegrationNodeColumnSchemaOutcome(rsp);
        else
            return GetIntegrationNodeColumnSchemaOutcome(o.GetError());
    }
    else
    {
        return GetIntegrationNodeColumnSchemaOutcome(outcome.GetError());
    }
}

void WedataClient::GetIntegrationNodeColumnSchemaAsync(const GetIntegrationNodeColumnSchemaRequest& request, const GetIntegrationNodeColumnSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetIntegrationNodeColumnSchema(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetIntegrationNodeColumnSchemaOutcomeCallable WedataClient::GetIntegrationNodeColumnSchemaCallable(const GetIntegrationNodeColumnSchemaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetIntegrationNodeColumnSchemaOutcome()>>(
        [this, request]()
        {
            return this->GetIntegrationNodeColumnSchema(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetOfflineDIInstanceListOutcome WedataClient::GetOfflineDIInstanceList(const GetOfflineDIInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetOfflineDIInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOfflineDIInstanceListResponse rsp = GetOfflineDIInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOfflineDIInstanceListOutcome(rsp);
        else
            return GetOfflineDIInstanceListOutcome(o.GetError());
    }
    else
    {
        return GetOfflineDIInstanceListOutcome(outcome.GetError());
    }
}

void WedataClient::GetOfflineDIInstanceListAsync(const GetOfflineDIInstanceListRequest& request, const GetOfflineDIInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOfflineDIInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetOfflineDIInstanceListOutcomeCallable WedataClient::GetOfflineDIInstanceListCallable(const GetOfflineDIInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOfflineDIInstanceListOutcome()>>(
        [this, request]()
        {
            return this->GetOfflineDIInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetOfflineInstanceListOutcome WedataClient::GetOfflineInstanceList(const GetOfflineInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetOfflineInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOfflineInstanceListResponse rsp = GetOfflineInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOfflineInstanceListOutcome(rsp);
        else
            return GetOfflineInstanceListOutcome(o.GetError());
    }
    else
    {
        return GetOfflineInstanceListOutcome(outcome.GetError());
    }
}

void WedataClient::GetOfflineInstanceListAsync(const GetOfflineInstanceListRequest& request, const GetOfflineInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOfflineInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetOfflineInstanceListOutcomeCallable WedataClient::GetOfflineInstanceListCallable(const GetOfflineInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOfflineInstanceListOutcome()>>(
        [this, request]()
        {
            return this->GetOfflineInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetPathTreesOutcome WedataClient::GetPathTrees(const GetPathTreesRequest &request)
{
    auto outcome = MakeRequest(request, "GetPathTrees");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPathTreesResponse rsp = GetPathTreesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPathTreesOutcome(rsp);
        else
            return GetPathTreesOutcome(o.GetError());
    }
    else
    {
        return GetPathTreesOutcome(outcome.GetError());
    }
}

void WedataClient::GetPathTreesAsync(const GetPathTreesRequest& request, const GetPathTreesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPathTrees(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetPathTreesOutcomeCallable WedataClient::GetPathTreesCallable(const GetPathTreesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPathTreesOutcome()>>(
        [this, request]()
        {
            return this->GetPathTrees(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetResourcePathTreeOutcome WedataClient::GetResourcePathTree(const GetResourcePathTreeRequest &request)
{
    auto outcome = MakeRequest(request, "GetResourcePathTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetResourcePathTreeResponse rsp = GetResourcePathTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetResourcePathTreeOutcome(rsp);
        else
            return GetResourcePathTreeOutcome(o.GetError());
    }
    else
    {
        return GetResourcePathTreeOutcome(outcome.GetError());
    }
}

void WedataClient::GetResourcePathTreeAsync(const GetResourcePathTreeRequest& request, const GetResourcePathTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetResourcePathTree(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetResourcePathTreeOutcomeCallable WedataClient::GetResourcePathTreeCallable(const GetResourcePathTreeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetResourcePathTreeOutcome()>>(
        [this, request]()
        {
            return this->GetResourcePathTree(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetRunSonListDsOutcome WedataClient::GetRunSonListDs(const GetRunSonListDsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRunSonListDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRunSonListDsResponse rsp = GetRunSonListDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRunSonListDsOutcome(rsp);
        else
            return GetRunSonListDsOutcome(o.GetError());
    }
    else
    {
        return GetRunSonListDsOutcome(outcome.GetError());
    }
}

void WedataClient::GetRunSonListDsAsync(const GetRunSonListDsRequest& request, const GetRunSonListDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRunSonListDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetRunSonListDsOutcomeCallable WedataClient::GetRunSonListDsCallable(const GetRunSonListDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRunSonListDsOutcome()>>(
        [this, request]()
        {
            return this->GetRunSonListDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetTestRunTaskInstancesStatusInfoOutcome WedataClient::GetTestRunTaskInstancesStatusInfo(const GetTestRunTaskInstancesStatusInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetTestRunTaskInstancesStatusInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTestRunTaskInstancesStatusInfoResponse rsp = GetTestRunTaskInstancesStatusInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTestRunTaskInstancesStatusInfoOutcome(rsp);
        else
            return GetTestRunTaskInstancesStatusInfoOutcome(o.GetError());
    }
    else
    {
        return GetTestRunTaskInstancesStatusInfoOutcome(outcome.GetError());
    }
}

void WedataClient::GetTestRunTaskInstancesStatusInfoAsync(const GetTestRunTaskInstancesStatusInfoRequest& request, const GetTestRunTaskInstancesStatusInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTestRunTaskInstancesStatusInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetTestRunTaskInstancesStatusInfoOutcomeCallable WedataClient::GetTestRunTaskInstancesStatusInfoCallable(const GetTestRunTaskInstancesStatusInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTestRunTaskInstancesStatusInfoOutcome()>>(
        [this, request]()
        {
            return this->GetTestRunTaskInstancesStatusInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::HeartBeatOutcome WedataClient::HeartBeat(const HeartBeatRequest &request)
{
    auto outcome = MakeRequest(request, "HeartBeat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HeartBeatResponse rsp = HeartBeatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HeartBeatOutcome(rsp);
        else
            return HeartBeatOutcome(o.GetError());
    }
    else
    {
        return HeartBeatOutcome(outcome.GetError());
    }
}

void WedataClient::HeartBeatAsync(const HeartBeatRequest& request, const HeartBeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->HeartBeat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::HeartBeatOutcomeCallable WedataClient::HeartBeatCallable(const HeartBeatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<HeartBeatOutcome()>>(
        [this, request]()
        {
            return this->HeartBeat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ImportDsEventOutcome WedataClient::ImportDsEvent(const ImportDsEventRequest &request)
{
    auto outcome = MakeRequest(request, "ImportDsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportDsEventResponse rsp = ImportDsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportDsEventOutcome(rsp);
        else
            return ImportDsEventOutcome(o.GetError());
    }
    else
    {
        return ImportDsEventOutcome(outcome.GetError());
    }
}

void WedataClient::ImportDsEventAsync(const ImportDsEventRequest& request, const ImportDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportDsEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ImportDsEventOutcomeCallable WedataClient::ImportDsEventCallable(const ImportDsEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportDsEventOutcome()>>(
        [this, request]()
        {
            return this->ImportDsEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ImportFilesOutcome WedataClient::ImportFiles(const ImportFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ImportFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportFilesResponse rsp = ImportFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportFilesOutcome(rsp);
        else
            return ImportFilesOutcome(o.GetError());
    }
    else
    {
        return ImportFilesOutcome(outcome.GetError());
    }
}

void WedataClient::ImportFilesAsync(const ImportFilesRequest& request, const ImportFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ImportFilesOutcomeCallable WedataClient::ImportFilesCallable(const ImportFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportFilesOutcome()>>(
        [this, request]()
        {
            return this->ImportFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ImportOfflineTaskOutcome WedataClient::ImportOfflineTask(const ImportOfflineTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ImportOfflineTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportOfflineTaskResponse rsp = ImportOfflineTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportOfflineTaskOutcome(rsp);
        else
            return ImportOfflineTaskOutcome(o.GetError());
    }
    else
    {
        return ImportOfflineTaskOutcome(outcome.GetError());
    }
}

void WedataClient::ImportOfflineTaskAsync(const ImportOfflineTaskRequest& request, const ImportOfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportOfflineTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ImportOfflineTaskOutcomeCallable WedataClient::ImportOfflineTaskCallable(const ImportOfflineTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportOfflineTaskOutcome()>>(
        [this, request]()
        {
            return this->ImportOfflineTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ImportProjectParamDsOutcome WedataClient::ImportProjectParamDs(const ImportProjectParamDsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportProjectParamDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportProjectParamDsResponse rsp = ImportProjectParamDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportProjectParamDsOutcome(rsp);
        else
            return ImportProjectParamDsOutcome(o.GetError());
    }
    else
    {
        return ImportProjectParamDsOutcome(outcome.GetError());
    }
}

void WedataClient::ImportProjectParamDsAsync(const ImportProjectParamDsRequest& request, const ImportProjectParamDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportProjectParamDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ImportProjectParamDsOutcomeCallable WedataClient::ImportProjectParamDsCallable(const ImportProjectParamDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportProjectParamDsOutcome()>>(
        [this, request]()
        {
            return this->ImportProjectParamDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::JudgeTaskListenEventOutcome WedataClient::JudgeTaskListenEvent(const JudgeTaskListenEventRequest &request)
{
    auto outcome = MakeRequest(request, "JudgeTaskListenEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        JudgeTaskListenEventResponse rsp = JudgeTaskListenEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return JudgeTaskListenEventOutcome(rsp);
        else
            return JudgeTaskListenEventOutcome(o.GetError());
    }
    else
    {
        return JudgeTaskListenEventOutcome(outcome.GetError());
    }
}

void WedataClient::JudgeTaskListenEventAsync(const JudgeTaskListenEventRequest& request, const JudgeTaskListenEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->JudgeTaskListenEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::JudgeTaskListenEventOutcomeCallable WedataClient::JudgeTaskListenEventCallable(const JudgeTaskListenEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<JudgeTaskListenEventOutcome()>>(
        [this, request]()
        {
            return this->JudgeTaskListenEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::KillInstancesOutcome WedataClient::KillInstances(const KillInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "KillInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillInstancesResponse rsp = KillInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillInstancesOutcome(rsp);
        else
            return KillInstancesOutcome(o.GetError());
    }
    else
    {
        return KillInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::KillInstancesAsync(const KillInstancesRequest& request, const KillInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KillInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::KillInstancesOutcomeCallable WedataClient::KillInstancesCallable(const KillInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KillInstancesOutcome()>>(
        [this, request]()
        {
            return this->KillInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::KillOpsMakePlanInstancesOutcome WedataClient::KillOpsMakePlanInstances(const KillOpsMakePlanInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "KillOpsMakePlanInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillOpsMakePlanInstancesResponse rsp = KillOpsMakePlanInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillOpsMakePlanInstancesOutcome(rsp);
        else
            return KillOpsMakePlanInstancesOutcome(o.GetError());
    }
    else
    {
        return KillOpsMakePlanInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::KillOpsMakePlanInstancesAsync(const KillOpsMakePlanInstancesRequest& request, const KillOpsMakePlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KillOpsMakePlanInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::KillOpsMakePlanInstancesOutcomeCallable WedataClient::KillOpsMakePlanInstancesCallable(const KillOpsMakePlanInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KillOpsMakePlanInstancesOutcome()>>(
        [this, request]()
        {
            return this->KillOpsMakePlanInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::KillScheduleInstancesOutcome WedataClient::KillScheduleInstances(const KillScheduleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "KillScheduleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillScheduleInstancesResponse rsp = KillScheduleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillScheduleInstancesOutcome(rsp);
        else
            return KillScheduleInstancesOutcome(o.GetError());
    }
    else
    {
        return KillScheduleInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::KillScheduleInstancesAsync(const KillScheduleInstancesRequest& request, const KillScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KillScheduleInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::KillScheduleInstancesOutcomeCallable WedataClient::KillScheduleInstancesCallable(const KillScheduleInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KillScheduleInstancesOutcome()>>(
        [this, request]()
        {
            return this->KillScheduleInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListBatchDetailOutcome WedataClient::ListBatchDetail(const ListBatchDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListBatchDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListBatchDetailResponse rsp = ListBatchDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListBatchDetailOutcome(rsp);
        else
            return ListBatchDetailOutcome(o.GetError());
    }
    else
    {
        return ListBatchDetailOutcome(outcome.GetError());
    }
}

void WedataClient::ListBatchDetailAsync(const ListBatchDetailRequest& request, const ListBatchDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListBatchDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListBatchDetailOutcomeCallable WedataClient::ListBatchDetailCallable(const ListBatchDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListBatchDetailOutcome()>>(
        [this, request]()
        {
            return this->ListBatchDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListBatchJobOutcome WedataClient::ListBatchJob(const ListBatchJobRequest &request)
{
    auto outcome = MakeRequest(request, "ListBatchJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListBatchJobResponse rsp = ListBatchJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListBatchJobOutcome(rsp);
        else
            return ListBatchJobOutcome(o.GetError());
    }
    else
    {
        return ListBatchJobOutcome(outcome.GetError());
    }
}

void WedataClient::ListBatchJobAsync(const ListBatchJobRequest& request, const ListBatchJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListBatchJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListBatchJobOutcomeCallable WedataClient::ListBatchJobCallable(const ListBatchJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListBatchJobOutcome()>>(
        [this, request]()
        {
            return this->ListBatchJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::LockIntegrationTaskOutcome WedataClient::LockIntegrationTask(const LockIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "LockIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LockIntegrationTaskResponse rsp = LockIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LockIntegrationTaskOutcome(rsp);
        else
            return LockIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return LockIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::LockIntegrationTaskAsync(const LockIntegrationTaskRequest& request, const LockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LockIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::LockIntegrationTaskOutcomeCallable WedataClient::LockIntegrationTaskCallable(const LockIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LockIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->LockIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::MakeUpOpsTasksOutcome WedataClient::MakeUpOpsTasks(const MakeUpOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "MakeUpOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MakeUpOpsTasksResponse rsp = MakeUpOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MakeUpOpsTasksOutcome(rsp);
        else
            return MakeUpOpsTasksOutcome(o.GetError());
    }
    else
    {
        return MakeUpOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::MakeUpOpsTasksAsync(const MakeUpOpsTasksRequest& request, const MakeUpOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MakeUpOpsTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::MakeUpOpsTasksOutcomeCallable WedataClient::MakeUpOpsTasksCallable(const MakeUpOpsTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MakeUpOpsTasksOutcome()>>(
        [this, request]()
        {
            return this->MakeUpOpsTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::MakeUpTasksByWorkflowOutcome WedataClient::MakeUpTasksByWorkflow(const MakeUpTasksByWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "MakeUpTasksByWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MakeUpTasksByWorkflowResponse rsp = MakeUpTasksByWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MakeUpTasksByWorkflowOutcome(rsp);
        else
            return MakeUpTasksByWorkflowOutcome(o.GetError());
    }
    else
    {
        return MakeUpTasksByWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::MakeUpTasksByWorkflowAsync(const MakeUpTasksByWorkflowRequest& request, const MakeUpTasksByWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MakeUpTasksByWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::MakeUpTasksByWorkflowOutcomeCallable WedataClient::MakeUpTasksByWorkflowCallable(const MakeUpTasksByWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MakeUpTasksByWorkflowOutcome()>>(
        [this, request]()
        {
            return this->MakeUpTasksByWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::MakeUpTasksNewOutcome WedataClient::MakeUpTasksNew(const MakeUpTasksNewRequest &request)
{
    auto outcome = MakeRequest(request, "MakeUpTasksNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MakeUpTasksNewResponse rsp = MakeUpTasksNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MakeUpTasksNewOutcome(rsp);
        else
            return MakeUpTasksNewOutcome(o.GetError());
    }
    else
    {
        return MakeUpTasksNewOutcome(outcome.GetError());
    }
}

void WedataClient::MakeUpTasksNewAsync(const MakeUpTasksNewRequest& request, const MakeUpTasksNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MakeUpTasksNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::MakeUpTasksNewOutcomeCallable WedataClient::MakeUpTasksNewCallable(const MakeUpTasksNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MakeUpTasksNewOutcome()>>(
        [this, request]()
        {
            return this->MakeUpTasksNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::MakeUpWorkflowNewOutcome WedataClient::MakeUpWorkflowNew(const MakeUpWorkflowNewRequest &request)
{
    auto outcome = MakeRequest(request, "MakeUpWorkflowNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MakeUpWorkflowNewResponse rsp = MakeUpWorkflowNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MakeUpWorkflowNewOutcome(rsp);
        else
            return MakeUpWorkflowNewOutcome(o.GetError());
    }
    else
    {
        return MakeUpWorkflowNewOutcome(outcome.GetError());
    }
}

void WedataClient::MakeUpWorkflowNewAsync(const MakeUpWorkflowNewRequest& request, const MakeUpWorkflowNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MakeUpWorkflowNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::MakeUpWorkflowNewOutcomeCallable WedataClient::MakeUpWorkflowNewCallable(const MakeUpWorkflowNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MakeUpWorkflowNewOutcome()>>(
        [this, request]()
        {
            return this->MakeUpWorkflowNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyApproveStatusOutcome WedataClient::ModifyApproveStatus(const ModifyApproveStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApproveStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApproveStatusResponse rsp = ModifyApproveStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApproveStatusOutcome(rsp);
        else
            return ModifyApproveStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyApproveStatusOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyApproveStatusAsync(const ModifyApproveStatusRequest& request, const ModifyApproveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApproveStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyApproveStatusOutcomeCallable WedataClient::ModifyApproveStatusCallable(const ModifyApproveStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApproveStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyApproveStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyBaselineAlarmStatusOutcome WedataClient::ModifyBaselineAlarmStatus(const ModifyBaselineAlarmStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselineAlarmStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselineAlarmStatusResponse rsp = ModifyBaselineAlarmStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselineAlarmStatusOutcome(rsp);
        else
            return ModifyBaselineAlarmStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselineAlarmStatusOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyBaselineAlarmStatusAsync(const ModifyBaselineAlarmStatusRequest& request, const ModifyBaselineAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBaselineAlarmStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyBaselineAlarmStatusOutcomeCallable WedataClient::ModifyBaselineAlarmStatusCallable(const ModifyBaselineAlarmStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBaselineAlarmStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyBaselineAlarmStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyBaselineTaskAlarmStatusOutcome WedataClient::ModifyBaselineTaskAlarmStatus(const ModifyBaselineTaskAlarmStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselineTaskAlarmStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselineTaskAlarmStatusResponse rsp = ModifyBaselineTaskAlarmStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselineTaskAlarmStatusOutcome(rsp);
        else
            return ModifyBaselineTaskAlarmStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselineTaskAlarmStatusOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyBaselineTaskAlarmStatusAsync(const ModifyBaselineTaskAlarmStatusRequest& request, const ModifyBaselineTaskAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBaselineTaskAlarmStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyBaselineTaskAlarmStatusOutcomeCallable WedataClient::ModifyBaselineTaskAlarmStatusCallable(const ModifyBaselineTaskAlarmStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBaselineTaskAlarmStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyBaselineTaskAlarmStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyDataSourceOutcome WedataClient::ModifyDataSource(const ModifyDataSourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataSourceResponse rsp = ModifyDataSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataSourceOutcome(rsp);
        else
            return ModifyDataSourceOutcome(o.GetError());
    }
    else
    {
        return ModifyDataSourceOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyDataSourceAsync(const ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDataSource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyDataSourceOutcomeCallable WedataClient::ModifyDataSourceCallable(const ModifyDataSourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDataSourceOutcome()>>(
        [this, request]()
        {
            return this->ModifyDataSource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyDimensionWeightOutcome WedataClient::ModifyDimensionWeight(const ModifyDimensionWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDimensionWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDimensionWeightResponse rsp = ModifyDimensionWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDimensionWeightOutcome(rsp);
        else
            return ModifyDimensionWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyDimensionWeightOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyDimensionWeightAsync(const ModifyDimensionWeightRequest& request, const ModifyDimensionWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDimensionWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyDimensionWeightOutcomeCallable WedataClient::ModifyDimensionWeightCallable(const ModifyDimensionWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDimensionWeightOutcome()>>(
        [this, request]()
        {
            return this->ModifyDimensionWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyDsFolderOutcome WedataClient::ModifyDsFolder(const ModifyDsFolderRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDsFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDsFolderResponse rsp = ModifyDsFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDsFolderOutcome(rsp);
        else
            return ModifyDsFolderOutcome(o.GetError());
    }
    else
    {
        return ModifyDsFolderOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyDsFolderAsync(const ModifyDsFolderRequest& request, const ModifyDsFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDsFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyDsFolderOutcomeCallable WedataClient::ModifyDsFolderCallable(const ModifyDsFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDsFolderOutcome()>>(
        [this, request]()
        {
            return this->ModifyDsFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyExecStrategyOutcome WedataClient::ModifyExecStrategy(const ModifyExecStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyExecStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyExecStrategyResponse rsp = ModifyExecStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyExecStrategyOutcome(rsp);
        else
            return ModifyExecStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyExecStrategyOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyExecStrategyAsync(const ModifyExecStrategyRequest& request, const ModifyExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyExecStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyExecStrategyOutcomeCallable WedataClient::ModifyExecStrategyCallable(const ModifyExecStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyExecStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyExecStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyFolderOutcome WedataClient::ModifyFolder(const ModifyFolderRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFolderResponse rsp = ModifyFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFolderOutcome(rsp);
        else
            return ModifyFolderOutcome(o.GetError());
    }
    else
    {
        return ModifyFolderOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyFolderAsync(const ModifyFolderRequest& request, const ModifyFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyFolderOutcomeCallable WedataClient::ModifyFolderCallable(const ModifyFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFolderOutcome()>>(
        [this, request]()
        {
            return this->ModifyFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyIntegrationNodeOutcome WedataClient::ModifyIntegrationNode(const ModifyIntegrationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIntegrationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIntegrationNodeResponse rsp = ModifyIntegrationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIntegrationNodeOutcome(rsp);
        else
            return ModifyIntegrationNodeOutcome(o.GetError());
    }
    else
    {
        return ModifyIntegrationNodeOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyIntegrationNodeAsync(const ModifyIntegrationNodeRequest& request, const ModifyIntegrationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIntegrationNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyIntegrationNodeOutcomeCallable WedataClient::ModifyIntegrationNodeCallable(const ModifyIntegrationNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIntegrationNodeOutcome()>>(
        [this, request]()
        {
            return this->ModifyIntegrationNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyIntegrationTaskOutcome WedataClient::ModifyIntegrationTask(const ModifyIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIntegrationTaskResponse rsp = ModifyIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIntegrationTaskOutcome(rsp);
        else
            return ModifyIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyIntegrationTaskAsync(const ModifyIntegrationTaskRequest& request, const ModifyIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyIntegrationTaskOutcomeCallable WedataClient::ModifyIntegrationTaskCallable(const ModifyIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyMonitorStatusOutcome WedataClient::ModifyMonitorStatus(const ModifyMonitorStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMonitorStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMonitorStatusResponse rsp = ModifyMonitorStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMonitorStatusOutcome(rsp);
        else
            return ModifyMonitorStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyMonitorStatusOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyMonitorStatusAsync(const ModifyMonitorStatusRequest& request, const ModifyMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMonitorStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyMonitorStatusOutcomeCallable WedataClient::ModifyMonitorStatusCallable(const ModifyMonitorStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMonitorStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyMonitorStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyRuleOutcome WedataClient::ModifyRule(const ModifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleResponse rsp = ModifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleOutcome(rsp);
        else
            return ModifyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyRuleOutcomeCallable WedataClient::ModifyRuleCallable(const ModifyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyRuleGroupSubscriptionOutcome WedataClient::ModifyRuleGroupSubscription(const ModifyRuleGroupSubscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRuleGroupSubscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleGroupSubscriptionResponse rsp = ModifyRuleGroupSubscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleGroupSubscriptionOutcome(rsp);
        else
            return ModifyRuleGroupSubscriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleGroupSubscriptionOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyRuleGroupSubscriptionAsync(const ModifyRuleGroupSubscriptionRequest& request, const ModifyRuleGroupSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRuleGroupSubscription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyRuleGroupSubscriptionOutcomeCallable WedataClient::ModifyRuleGroupSubscriptionCallable(const ModifyRuleGroupSubscriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRuleGroupSubscriptionOutcome()>>(
        [this, request]()
        {
            return this->ModifyRuleGroupSubscription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyRuleTemplateOutcome WedataClient::ModifyRuleTemplate(const ModifyRuleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRuleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleTemplateResponse rsp = ModifyRuleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleTemplateOutcome(rsp);
        else
            return ModifyRuleTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyRuleTemplateAsync(const ModifyRuleTemplateRequest& request, const ModifyRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRuleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyRuleTemplateOutcomeCallable WedataClient::ModifyRuleTemplateCallable(const ModifyRuleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRuleTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyRuleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyTaskAlarmRegularOutcome WedataClient::ModifyTaskAlarmRegular(const ModifyTaskAlarmRegularRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskAlarmRegular");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskAlarmRegularResponse rsp = ModifyTaskAlarmRegularResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskAlarmRegularOutcome(rsp);
        else
            return ModifyTaskAlarmRegularOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskAlarmRegularOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskAlarmRegularAsync(const ModifyTaskAlarmRegularRequest& request, const ModifyTaskAlarmRegularAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskAlarmRegular(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyTaskAlarmRegularOutcomeCallable WedataClient::ModifyTaskAlarmRegularCallable(const ModifyTaskAlarmRegularRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskAlarmRegularOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskAlarmRegular(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyTaskFolderOutcome WedataClient::ModifyTaskFolder(const ModifyTaskFolderRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskFolderResponse rsp = ModifyTaskFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskFolderOutcome(rsp);
        else
            return ModifyTaskFolderOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskFolderOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskFolderAsync(const ModifyTaskFolderRequest& request, const ModifyTaskFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyTaskFolderOutcomeCallable WedataClient::ModifyTaskFolderCallable(const ModifyTaskFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskFolderOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyTaskInfoOutcome WedataClient::ModifyTaskInfo(const ModifyTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskInfoResponse rsp = ModifyTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskInfoOutcome(rsp);
        else
            return ModifyTaskInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskInfoOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskInfoAsync(const ModifyTaskInfoRequest& request, const ModifyTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyTaskInfoOutcomeCallable WedataClient::ModifyTaskInfoCallable(const ModifyTaskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyTaskInfoDsOutcome WedataClient::ModifyTaskInfoDs(const ModifyTaskInfoDsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskInfoDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskInfoDsResponse rsp = ModifyTaskInfoDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskInfoDsOutcome(rsp);
        else
            return ModifyTaskInfoDsOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskInfoDsOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskInfoDsAsync(const ModifyTaskInfoDsRequest& request, const ModifyTaskInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskInfoDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyTaskInfoDsOutcomeCallable WedataClient::ModifyTaskInfoDsCallable(const ModifyTaskInfoDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskInfoDsOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskInfoDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyTaskLinksOutcome WedataClient::ModifyTaskLinks(const ModifyTaskLinksRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskLinks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskLinksResponse rsp = ModifyTaskLinksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskLinksOutcome(rsp);
        else
            return ModifyTaskLinksOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskLinksOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskLinksAsync(const ModifyTaskLinksRequest& request, const ModifyTaskLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskLinks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyTaskLinksOutcomeCallable WedataClient::ModifyTaskLinksCallable(const ModifyTaskLinksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskLinksOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskLinks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyTaskLinksDsOutcome WedataClient::ModifyTaskLinksDs(const ModifyTaskLinksDsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskLinksDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskLinksDsResponse rsp = ModifyTaskLinksDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskLinksDsOutcome(rsp);
        else
            return ModifyTaskLinksDsOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskLinksDsOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskLinksDsAsync(const ModifyTaskLinksDsRequest& request, const ModifyTaskLinksDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskLinksDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyTaskLinksDsOutcomeCallable WedataClient::ModifyTaskLinksDsCallable(const ModifyTaskLinksDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskLinksDsOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskLinksDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyTaskNameOutcome WedataClient::ModifyTaskName(const ModifyTaskNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskNameResponse rsp = ModifyTaskNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskNameOutcome(rsp);
        else
            return ModifyTaskNameOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskNameOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskNameAsync(const ModifyTaskNameRequest& request, const ModifyTaskNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyTaskNameOutcomeCallable WedataClient::ModifyTaskNameCallable(const ModifyTaskNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyTaskScriptOutcome WedataClient::ModifyTaskScript(const ModifyTaskScriptRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskScriptResponse rsp = ModifyTaskScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskScriptOutcome(rsp);
        else
            return ModifyTaskScriptOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskScriptOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskScriptAsync(const ModifyTaskScriptRequest& request, const ModifyTaskScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyTaskScriptOutcomeCallable WedataClient::ModifyTaskScriptCallable(const ModifyTaskScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskScriptOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyTaskScriptDsOutcome WedataClient::ModifyTaskScriptDs(const ModifyTaskScriptDsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskScriptDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskScriptDsResponse rsp = ModifyTaskScriptDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskScriptDsOutcome(rsp);
        else
            return ModifyTaskScriptDsOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskScriptDsOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyTaskScriptDsAsync(const ModifyTaskScriptDsRequest& request, const ModifyTaskScriptDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskScriptDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyTaskScriptDsOutcomeCallable WedataClient::ModifyTaskScriptDsCallable(const ModifyTaskScriptDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskScriptDsOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskScriptDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyWorkflowInfoOutcome WedataClient::ModifyWorkflowInfo(const ModifyWorkflowInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkflowInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkflowInfoResponse rsp = ModifyWorkflowInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkflowInfoOutcome(rsp);
        else
            return ModifyWorkflowInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkflowInfoOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyWorkflowInfoAsync(const ModifyWorkflowInfoRequest& request, const ModifyWorkflowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkflowInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyWorkflowInfoOutcomeCallable WedataClient::ModifyWorkflowInfoCallable(const ModifyWorkflowInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkflowInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkflowInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ModifyWorkflowScheduleOutcome WedataClient::ModifyWorkflowSchedule(const ModifyWorkflowScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkflowSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkflowScheduleResponse rsp = ModifyWorkflowScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkflowScheduleOutcome(rsp);
        else
            return ModifyWorkflowScheduleOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkflowScheduleOutcome(outcome.GetError());
    }
}

void WedataClient::ModifyWorkflowScheduleAsync(const ModifyWorkflowScheduleRequest& request, const ModifyWorkflowScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkflowSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ModifyWorkflowScheduleOutcomeCallable WedataClient::ModifyWorkflowScheduleCallable(const ModifyWorkflowScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkflowScheduleOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkflowSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::MoveFileOutcome WedataClient::MoveFile(const MoveFileRequest &request)
{
    auto outcome = MakeRequest(request, "MoveFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MoveFileResponse rsp = MoveFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MoveFileOutcome(rsp);
        else
            return MoveFileOutcome(o.GetError());
    }
    else
    {
        return MoveFileOutcome(outcome.GetError());
    }
}

void WedataClient::MoveFileAsync(const MoveFileRequest& request, const MoveFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MoveFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::MoveFileOutcomeCallable WedataClient::MoveFileCallable(const MoveFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MoveFileOutcome()>>(
        [this, request]()
        {
            return this->MoveFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::MoveTasksToFolderOutcome WedataClient::MoveTasksToFolder(const MoveTasksToFolderRequest &request)
{
    auto outcome = MakeRequest(request, "MoveTasksToFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MoveTasksToFolderResponse rsp = MoveTasksToFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MoveTasksToFolderOutcome(rsp);
        else
            return MoveTasksToFolderOutcome(o.GetError());
    }
    else
    {
        return MoveTasksToFolderOutcome(outcome.GetError());
    }
}

void WedataClient::MoveTasksToFolderAsync(const MoveTasksToFolderRequest& request, const MoveTasksToFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MoveTasksToFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::MoveTasksToFolderOutcomeCallable WedataClient::MoveTasksToFolderCallable(const MoveTasksToFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MoveTasksToFolderOutcome()>>(
        [this, request]()
        {
            return this->MoveTasksToFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RegisterDsEventOutcome WedataClient::RegisterDsEvent(const RegisterDsEventRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterDsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterDsEventResponse rsp = RegisterDsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterDsEventOutcome(rsp);
        else
            return RegisterDsEventOutcome(o.GetError());
    }
    else
    {
        return RegisterDsEventOutcome(outcome.GetError());
    }
}

void WedataClient::RegisterDsEventAsync(const RegisterDsEventRequest& request, const RegisterDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterDsEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RegisterDsEventOutcomeCallable WedataClient::RegisterDsEventCallable(const RegisterDsEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterDsEventOutcome()>>(
        [this, request]()
        {
            return this->RegisterDsEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RegisterDsEventListenerOutcome WedataClient::RegisterDsEventListener(const RegisterDsEventListenerRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterDsEventListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterDsEventListenerResponse rsp = RegisterDsEventListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterDsEventListenerOutcome(rsp);
        else
            return RegisterDsEventListenerOutcome(o.GetError());
    }
    else
    {
        return RegisterDsEventListenerOutcome(outcome.GetError());
    }
}

void WedataClient::RegisterDsEventListenerAsync(const RegisterDsEventListenerRequest& request, const RegisterDsEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterDsEventListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RegisterDsEventListenerOutcomeCallable WedataClient::RegisterDsEventListenerCallable(const RegisterDsEventListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterDsEventListenerOutcome()>>(
        [this, request]()
        {
            return this->RegisterDsEventListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RegisterDsEventPublisherOutcome WedataClient::RegisterDsEventPublisher(const RegisterDsEventPublisherRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterDsEventPublisher");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterDsEventPublisherResponse rsp = RegisterDsEventPublisherResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterDsEventPublisherOutcome(rsp);
        else
            return RegisterDsEventPublisherOutcome(o.GetError());
    }
    else
    {
        return RegisterDsEventPublisherOutcome(outcome.GetError());
    }
}

void WedataClient::RegisterDsEventPublisherAsync(const RegisterDsEventPublisherRequest& request, const RegisterDsEventPublisherAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterDsEventPublisher(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RegisterDsEventPublisherOutcomeCallable WedataClient::RegisterDsEventPublisherCallable(const RegisterDsEventPublisherRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterDsEventPublisherOutcome()>>(
        [this, request]()
        {
            return this->RegisterDsEventPublisher(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RegisterEventOutcome WedataClient::RegisterEvent(const RegisterEventRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterEventResponse rsp = RegisterEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterEventOutcome(rsp);
        else
            return RegisterEventOutcome(o.GetError());
    }
    else
    {
        return RegisterEventOutcome(outcome.GetError());
    }
}

void WedataClient::RegisterEventAsync(const RegisterEventRequest& request, const RegisterEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RegisterEventOutcomeCallable WedataClient::RegisterEventCallable(const RegisterEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterEventOutcome()>>(
        [this, request]()
        {
            return this->RegisterEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RegisterEventListenerOutcome WedataClient::RegisterEventListener(const RegisterEventListenerRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterEventListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterEventListenerResponse rsp = RegisterEventListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterEventListenerOutcome(rsp);
        else
            return RegisterEventListenerOutcome(o.GetError());
    }
    else
    {
        return RegisterEventListenerOutcome(outcome.GetError());
    }
}

void WedataClient::RegisterEventListenerAsync(const RegisterEventListenerRequest& request, const RegisterEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterEventListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RegisterEventListenerOutcomeCallable WedataClient::RegisterEventListenerCallable(const RegisterEventListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterEventListenerOutcome()>>(
        [this, request]()
        {
            return this->RegisterEventListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ReleaseLockOutcome WedataClient::ReleaseLock(const ReleaseLockRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseLock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseLockResponse rsp = ReleaseLockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseLockOutcome(rsp);
        else
            return ReleaseLockOutcome(o.GetError());
    }
    else
    {
        return ReleaseLockOutcome(outcome.GetError());
    }
}

void WedataClient::ReleaseLockAsync(const ReleaseLockRequest& request, const ReleaseLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseLock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ReleaseLockOutcomeCallable WedataClient::ReleaseLockCallable(const ReleaseLockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseLockOutcome()>>(
        [this, request]()
        {
            return this->ReleaseLock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RemoveWorkflowDsOutcome WedataClient::RemoveWorkflowDs(const RemoveWorkflowDsRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveWorkflowDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveWorkflowDsResponse rsp = RemoveWorkflowDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveWorkflowDsOutcome(rsp);
        else
            return RemoveWorkflowDsOutcome(o.GetError());
    }
    else
    {
        return RemoveWorkflowDsOutcome(outcome.GetError());
    }
}

void WedataClient::RemoveWorkflowDsAsync(const RemoveWorkflowDsRequest& request, const RemoveWorkflowDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveWorkflowDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RemoveWorkflowDsOutcomeCallable WedataClient::RemoveWorkflowDsCallable(const RemoveWorkflowDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveWorkflowDsOutcome()>>(
        [this, request]()
        {
            return this->RemoveWorkflowDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RenameFileOutcome WedataClient::RenameFile(const RenameFileRequest &request)
{
    auto outcome = MakeRequest(request, "RenameFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenameFileResponse rsp = RenameFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenameFileOutcome(rsp);
        else
            return RenameFileOutcome(o.GetError());
    }
    else
    {
        return RenameFileOutcome(outcome.GetError());
    }
}

void WedataClient::RenameFileAsync(const RenameFileRequest& request, const RenameFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenameFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RenameFileOutcomeCallable WedataClient::RenameFileCallable(const RenameFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenameFileOutcome()>>(
        [this, request]()
        {
            return this->RenameFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RenameResourceOutcome WedataClient::RenameResource(const RenameResourceRequest &request)
{
    auto outcome = MakeRequest(request, "RenameResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenameResourceResponse rsp = RenameResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenameResourceOutcome(rsp);
        else
            return RenameResourceOutcome(o.GetError());
    }
    else
    {
        return RenameResourceOutcome(outcome.GetError());
    }
}

void WedataClient::RenameResourceAsync(const RenameResourceRequest& request, const RenameResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenameResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RenameResourceOutcomeCallable WedataClient::RenameResourceCallable(const RenameResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenameResourceOutcome()>>(
        [this, request]()
        {
            return this->RenameResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RenameResourceFileOutcome WedataClient::RenameResourceFile(const RenameResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "RenameResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenameResourceFileResponse rsp = RenameResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenameResourceFileOutcome(rsp);
        else
            return RenameResourceFileOutcome(o.GetError());
    }
    else
    {
        return RenameResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::RenameResourceFileAsync(const RenameResourceFileRequest& request, const RenameResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenameResourceFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RenameResourceFileOutcomeCallable WedataClient::RenameResourceFileCallable(const RenameResourceFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenameResourceFileOutcome()>>(
        [this, request]()
        {
            return this->RenameResourceFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RenameTaskDsOutcome WedataClient::RenameTaskDs(const RenameTaskDsRequest &request)
{
    auto outcome = MakeRequest(request, "RenameTaskDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenameTaskDsResponse rsp = RenameTaskDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenameTaskDsOutcome(rsp);
        else
            return RenameTaskDsOutcome(o.GetError());
    }
    else
    {
        return RenameTaskDsOutcome(outcome.GetError());
    }
}

void WedataClient::RenameTaskDsAsync(const RenameTaskDsRequest& request, const RenameTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenameTaskDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RenameTaskDsOutcomeCallable WedataClient::RenameTaskDsCallable(const RenameTaskDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenameTaskDsOutcome()>>(
        [this, request]()
        {
            return this->RenameTaskDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RenewWorkflowDsOutcome WedataClient::RenewWorkflowDs(const RenewWorkflowDsRequest &request)
{
    auto outcome = MakeRequest(request, "RenewWorkflowDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewWorkflowDsResponse rsp = RenewWorkflowDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewWorkflowDsOutcome(rsp);
        else
            return RenewWorkflowDsOutcome(o.GetError());
    }
    else
    {
        return RenewWorkflowDsOutcome(outcome.GetError());
    }
}

void WedataClient::RenewWorkflowDsAsync(const RenewWorkflowDsRequest& request, const RenewWorkflowDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewWorkflowDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RenewWorkflowDsOutcomeCallable WedataClient::RenewWorkflowDsCallable(const RenewWorkflowDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewWorkflowDsOutcome()>>(
        [this, request]()
        {
            return this->RenewWorkflowDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RenewWorkflowFolderDsOutcome WedataClient::RenewWorkflowFolderDs(const RenewWorkflowFolderDsRequest &request)
{
    auto outcome = MakeRequest(request, "RenewWorkflowFolderDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewWorkflowFolderDsResponse rsp = RenewWorkflowFolderDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewWorkflowFolderDsOutcome(rsp);
        else
            return RenewWorkflowFolderDsOutcome(o.GetError());
    }
    else
    {
        return RenewWorkflowFolderDsOutcome(outcome.GetError());
    }
}

void WedataClient::RenewWorkflowFolderDsAsync(const RenewWorkflowFolderDsRequest& request, const RenewWorkflowFolderDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewWorkflowFolderDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RenewWorkflowFolderDsOutcomeCallable WedataClient::RenewWorkflowFolderDsCallable(const RenewWorkflowFolderDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewWorkflowFolderDsOutcome()>>(
        [this, request]()
        {
            return this->RenewWorkflowFolderDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RenewWorkflowOwnerDsOutcome WedataClient::RenewWorkflowOwnerDs(const RenewWorkflowOwnerDsRequest &request)
{
    auto outcome = MakeRequest(request, "RenewWorkflowOwnerDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewWorkflowOwnerDsResponse rsp = RenewWorkflowOwnerDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewWorkflowOwnerDsOutcome(rsp);
        else
            return RenewWorkflowOwnerDsOutcome(o.GetError());
    }
    else
    {
        return RenewWorkflowOwnerDsOutcome(outcome.GetError());
    }
}

void WedataClient::RenewWorkflowOwnerDsAsync(const RenewWorkflowOwnerDsRequest& request, const RenewWorkflowOwnerDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewWorkflowOwnerDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RenewWorkflowOwnerDsOutcomeCallable WedataClient::RenewWorkflowOwnerDsCallable(const RenewWorkflowOwnerDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewWorkflowOwnerDsOutcome()>>(
        [this, request]()
        {
            return this->RenewWorkflowOwnerDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RenewWorkflowSchedulerInfoDsOutcome WedataClient::RenewWorkflowSchedulerInfoDs(const RenewWorkflowSchedulerInfoDsRequest &request)
{
    auto outcome = MakeRequest(request, "RenewWorkflowSchedulerInfoDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewWorkflowSchedulerInfoDsResponse rsp = RenewWorkflowSchedulerInfoDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewWorkflowSchedulerInfoDsOutcome(rsp);
        else
            return RenewWorkflowSchedulerInfoDsOutcome(o.GetError());
    }
    else
    {
        return RenewWorkflowSchedulerInfoDsOutcome(outcome.GetError());
    }
}

void WedataClient::RenewWorkflowSchedulerInfoDsAsync(const RenewWorkflowSchedulerInfoDsRequest& request, const RenewWorkflowSchedulerInfoDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewWorkflowSchedulerInfoDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RenewWorkflowSchedulerInfoDsOutcomeCallable WedataClient::RenewWorkflowSchedulerInfoDsCallable(const RenewWorkflowSchedulerInfoDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewWorkflowSchedulerInfoDsOutcome()>>(
        [this, request]()
        {
            return this->RenewWorkflowSchedulerInfoDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RerunInstancesOutcome WedataClient::RerunInstances(const RerunInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RerunInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RerunInstancesResponse rsp = RerunInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RerunInstancesOutcome(rsp);
        else
            return RerunInstancesOutcome(o.GetError());
    }
    else
    {
        return RerunInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::RerunInstancesAsync(const RerunInstancesRequest& request, const RerunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RerunInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RerunInstancesOutcomeCallable WedataClient::RerunInstancesCallable(const RerunInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RerunInstancesOutcome()>>(
        [this, request]()
        {
            return this->RerunInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RerunOpsMakePlanInstancesOutcome WedataClient::RerunOpsMakePlanInstances(const RerunOpsMakePlanInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RerunOpsMakePlanInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RerunOpsMakePlanInstancesResponse rsp = RerunOpsMakePlanInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RerunOpsMakePlanInstancesOutcome(rsp);
        else
            return RerunOpsMakePlanInstancesOutcome(o.GetError());
    }
    else
    {
        return RerunOpsMakePlanInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::RerunOpsMakePlanInstancesAsync(const RerunOpsMakePlanInstancesRequest& request, const RerunOpsMakePlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RerunOpsMakePlanInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RerunOpsMakePlanInstancesOutcomeCallable WedataClient::RerunOpsMakePlanInstancesCallable(const RerunOpsMakePlanInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RerunOpsMakePlanInstancesOutcome()>>(
        [this, request]()
        {
            return this->RerunOpsMakePlanInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RerunScheduleInstancesOutcome WedataClient::RerunScheduleInstances(const RerunScheduleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RerunScheduleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RerunScheduleInstancesResponse rsp = RerunScheduleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RerunScheduleInstancesOutcome(rsp);
        else
            return RerunScheduleInstancesOutcome(o.GetError());
    }
    else
    {
        return RerunScheduleInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::RerunScheduleInstancesAsync(const RerunScheduleInstancesRequest& request, const RerunScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RerunScheduleInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RerunScheduleInstancesOutcomeCallable WedataClient::RerunScheduleInstancesCallable(const RerunScheduleInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RerunScheduleInstancesOutcome()>>(
        [this, request]()
        {
            return this->RerunScheduleInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RestartInLongAgentOutcome WedataClient::RestartInLongAgent(const RestartInLongAgentRequest &request)
{
    auto outcome = MakeRequest(request, "RestartInLongAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartInLongAgentResponse rsp = RestartInLongAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartInLongAgentOutcome(rsp);
        else
            return RestartInLongAgentOutcome(o.GetError());
    }
    else
    {
        return RestartInLongAgentOutcome(outcome.GetError());
    }
}

void WedataClient::RestartInLongAgentAsync(const RestartInLongAgentRequest& request, const RestartInLongAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartInLongAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RestartInLongAgentOutcomeCallable WedataClient::RestartInLongAgentCallable(const RestartInLongAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartInLongAgentOutcome()>>(
        [this, request]()
        {
            return this->RestartInLongAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ResumeIntegrationTaskOutcome WedataClient::ResumeIntegrationTask(const ResumeIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeIntegrationTaskResponse rsp = ResumeIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeIntegrationTaskOutcome(rsp);
        else
            return ResumeIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return ResumeIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::ResumeIntegrationTaskAsync(const ResumeIntegrationTaskRequest& request, const ResumeIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ResumeIntegrationTaskOutcomeCallable WedataClient::ResumeIntegrationTaskCallable(const ResumeIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->ResumeIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RobAndLockIntegrationTaskOutcome WedataClient::RobAndLockIntegrationTask(const RobAndLockIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RobAndLockIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RobAndLockIntegrationTaskResponse rsp = RobAndLockIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RobAndLockIntegrationTaskOutcome(rsp);
        else
            return RobAndLockIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return RobAndLockIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::RobAndLockIntegrationTaskAsync(const RobAndLockIntegrationTaskRequest& request, const RobAndLockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RobAndLockIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RobAndLockIntegrationTaskOutcomeCallable WedataClient::RobAndLockIntegrationTaskCallable(const RobAndLockIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RobAndLockIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->RobAndLockIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RunForceSucScheduleInstancesOutcome WedataClient::RunForceSucScheduleInstances(const RunForceSucScheduleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RunForceSucScheduleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunForceSucScheduleInstancesResponse rsp = RunForceSucScheduleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunForceSucScheduleInstancesOutcome(rsp);
        else
            return RunForceSucScheduleInstancesOutcome(o.GetError());
    }
    else
    {
        return RunForceSucScheduleInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::RunForceSucScheduleInstancesAsync(const RunForceSucScheduleInstancesRequest& request, const RunForceSucScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunForceSucScheduleInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RunForceSucScheduleInstancesOutcomeCallable WedataClient::RunForceSucScheduleInstancesCallable(const RunForceSucScheduleInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunForceSucScheduleInstancesOutcome()>>(
        [this, request]()
        {
            return this->RunForceSucScheduleInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RunRerunScheduleInstancesOutcome WedataClient::RunRerunScheduleInstances(const RunRerunScheduleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RunRerunScheduleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunRerunScheduleInstancesResponse rsp = RunRerunScheduleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunRerunScheduleInstancesOutcome(rsp);
        else
            return RunRerunScheduleInstancesOutcome(o.GetError());
    }
    else
    {
        return RunRerunScheduleInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::RunRerunScheduleInstancesAsync(const RunRerunScheduleInstancesRequest& request, const RunRerunScheduleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunRerunScheduleInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RunRerunScheduleInstancesOutcomeCallable WedataClient::RunRerunScheduleInstancesCallable(const RunRerunScheduleInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunRerunScheduleInstancesOutcome()>>(
        [this, request]()
        {
            return this->RunRerunScheduleInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RunTaskOutcome WedataClient::RunTask(const RunTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RunTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunTaskResponse rsp = RunTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunTaskOutcome(rsp);
        else
            return RunTaskOutcome(o.GetError());
    }
    else
    {
        return RunTaskOutcome(outcome.GetError());
    }
}

void WedataClient::RunTaskAsync(const RunTaskRequest& request, const RunTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RunTaskOutcomeCallable WedataClient::RunTaskCallable(const RunTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunTaskOutcome()>>(
        [this, request]()
        {
            return this->RunTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RunTasksByMultiWorkflowOutcome WedataClient::RunTasksByMultiWorkflow(const RunTasksByMultiWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "RunTasksByMultiWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunTasksByMultiWorkflowResponse rsp = RunTasksByMultiWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunTasksByMultiWorkflowOutcome(rsp);
        else
            return RunTasksByMultiWorkflowOutcome(o.GetError());
    }
    else
    {
        return RunTasksByMultiWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::RunTasksByMultiWorkflowAsync(const RunTasksByMultiWorkflowRequest& request, const RunTasksByMultiWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunTasksByMultiWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RunTasksByMultiWorkflowOutcomeCallable WedataClient::RunTasksByMultiWorkflowCallable(const RunTasksByMultiWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunTasksByMultiWorkflowOutcome()>>(
        [this, request]()
        {
            return this->RunTasksByMultiWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SaveCustomFunctionOutcome WedataClient::SaveCustomFunction(const SaveCustomFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "SaveCustomFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveCustomFunctionResponse rsp = SaveCustomFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveCustomFunctionOutcome(rsp);
        else
            return SaveCustomFunctionOutcome(o.GetError());
    }
    else
    {
        return SaveCustomFunctionOutcome(outcome.GetError());
    }
}

void WedataClient::SaveCustomFunctionAsync(const SaveCustomFunctionRequest& request, const SaveCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SaveCustomFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SaveCustomFunctionOutcomeCallable WedataClient::SaveCustomFunctionCallable(const SaveCustomFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SaveCustomFunctionOutcome()>>(
        [this, request]()
        {
            return this->SaveCustomFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SavePositionsDsOutcome WedataClient::SavePositionsDs(const SavePositionsDsRequest &request)
{
    auto outcome = MakeRequest(request, "SavePositionsDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SavePositionsDsResponse rsp = SavePositionsDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SavePositionsDsOutcome(rsp);
        else
            return SavePositionsDsOutcome(o.GetError());
    }
    else
    {
        return SavePositionsDsOutcome(outcome.GetError());
    }
}

void WedataClient::SavePositionsDsAsync(const SavePositionsDsRequest& request, const SavePositionsDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SavePositionsDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SavePositionsDsOutcomeCallable WedataClient::SavePositionsDsCallable(const SavePositionsDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SavePositionsDsOutcome()>>(
        [this, request]()
        {
            return this->SavePositionsDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ScriptUsedByOtherTaskDsOutcome WedataClient::ScriptUsedByOtherTaskDs(const ScriptUsedByOtherTaskDsRequest &request)
{
    auto outcome = MakeRequest(request, "ScriptUsedByOtherTaskDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScriptUsedByOtherTaskDsResponse rsp = ScriptUsedByOtherTaskDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScriptUsedByOtherTaskDsOutcome(rsp);
        else
            return ScriptUsedByOtherTaskDsOutcome(o.GetError());
    }
    else
    {
        return ScriptUsedByOtherTaskDsOutcome(outcome.GetError());
    }
}

void WedataClient::ScriptUsedByOtherTaskDsAsync(const ScriptUsedByOtherTaskDsRequest& request, const ScriptUsedByOtherTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScriptUsedByOtherTaskDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ScriptUsedByOtherTaskDsOutcomeCallable WedataClient::ScriptUsedByOtherTaskDsCallable(const ScriptUsedByOtherTaskDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScriptUsedByOtherTaskDsOutcome()>>(
        [this, request]()
        {
            return this->ScriptUsedByOtherTaskDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SetTaskAlarmNewOutcome WedataClient::SetTaskAlarmNew(const SetTaskAlarmNewRequest &request)
{
    auto outcome = MakeRequest(request, "SetTaskAlarmNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTaskAlarmNewResponse rsp = SetTaskAlarmNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTaskAlarmNewOutcome(rsp);
        else
            return SetTaskAlarmNewOutcome(o.GetError());
    }
    else
    {
        return SetTaskAlarmNewOutcome(outcome.GetError());
    }
}

void WedataClient::SetTaskAlarmNewAsync(const SetTaskAlarmNewRequest& request, const SetTaskAlarmNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetTaskAlarmNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SetTaskAlarmNewOutcomeCallable WedataClient::SetTaskAlarmNewCallable(const SetTaskAlarmNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetTaskAlarmNewOutcome()>>(
        [this, request]()
        {
            return this->SetTaskAlarmNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::StartIntegrationTaskOutcome WedataClient::StartIntegrationTask(const StartIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StartIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartIntegrationTaskResponse rsp = StartIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartIntegrationTaskOutcome(rsp);
        else
            return StartIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return StartIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::StartIntegrationTaskAsync(const StartIntegrationTaskRequest& request, const StartIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::StartIntegrationTaskOutcomeCallable WedataClient::StartIntegrationTaskCallable(const StartIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->StartIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::StopBaselineOutcome WedataClient::StopBaseline(const StopBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "StopBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopBaselineResponse rsp = StopBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopBaselineOutcome(rsp);
        else
            return StopBaselineOutcome(o.GetError());
    }
    else
    {
        return StopBaselineOutcome(outcome.GetError());
    }
}

void WedataClient::StopBaselineAsync(const StopBaselineRequest& request, const StopBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopBaseline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::StopBaselineOutcomeCallable WedataClient::StopBaselineCallable(const StopBaselineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopBaselineOutcome()>>(
        [this, request]()
        {
            return this->StopBaseline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::StopIntegrationTaskOutcome WedataClient::StopIntegrationTask(const StopIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopIntegrationTaskResponse rsp = StopIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopIntegrationTaskOutcome(rsp);
        else
            return StopIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return StopIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::StopIntegrationTaskAsync(const StopIntegrationTaskRequest& request, const StopIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::StopIntegrationTaskOutcomeCallable WedataClient::StopIntegrationTaskCallable(const StopIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->StopIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SubmitBaselineOutcome WedataClient::SubmitBaseline(const SubmitBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitBaselineResponse rsp = SubmitBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitBaselineOutcome(rsp);
        else
            return SubmitBaselineOutcome(o.GetError());
    }
    else
    {
        return SubmitBaselineOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitBaselineAsync(const SubmitBaselineRequest& request, const SubmitBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitBaseline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SubmitBaselineOutcomeCallable WedataClient::SubmitBaselineCallable(const SubmitBaselineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitBaselineOutcome()>>(
        [this, request]()
        {
            return this->SubmitBaseline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SubmitCustomFunctionOutcome WedataClient::SubmitCustomFunction(const SubmitCustomFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitCustomFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitCustomFunctionResponse rsp = SubmitCustomFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitCustomFunctionOutcome(rsp);
        else
            return SubmitCustomFunctionOutcome(o.GetError());
    }
    else
    {
        return SubmitCustomFunctionOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitCustomFunctionAsync(const SubmitCustomFunctionRequest& request, const SubmitCustomFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitCustomFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SubmitCustomFunctionOutcomeCallable WedataClient::SubmitCustomFunctionCallable(const SubmitCustomFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitCustomFunctionOutcome()>>(
        [this, request]()
        {
            return this->SubmitCustomFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SubmitPySparkTaskOutcome WedataClient::SubmitPySparkTask(const SubmitPySparkTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitPySparkTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitPySparkTaskResponse rsp = SubmitPySparkTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitPySparkTaskOutcome(rsp);
        else
            return SubmitPySparkTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitPySparkTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitPySparkTaskAsync(const SubmitPySparkTaskRequest& request, const SubmitPySparkTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitPySparkTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SubmitPySparkTaskOutcomeCallable WedataClient::SubmitPySparkTaskCallable(const SubmitPySparkTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitPySparkTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitPySparkTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SubmitPythonTaskOutcome WedataClient::SubmitPythonTask(const SubmitPythonTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitPythonTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitPythonTaskResponse rsp = SubmitPythonTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitPythonTaskOutcome(rsp);
        else
            return SubmitPythonTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitPythonTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitPythonTaskAsync(const SubmitPythonTaskRequest& request, const SubmitPythonTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitPythonTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SubmitPythonTaskOutcomeCallable WedataClient::SubmitPythonTaskCallable(const SubmitPythonTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitPythonTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitPythonTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SubmitShellTaskOutcome WedataClient::SubmitShellTask(const SubmitShellTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitShellTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitShellTaskResponse rsp = SubmitShellTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitShellTaskOutcome(rsp);
        else
            return SubmitShellTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitShellTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitShellTaskAsync(const SubmitShellTaskRequest& request, const SubmitShellTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitShellTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SubmitShellTaskOutcomeCallable WedataClient::SubmitShellTaskCallable(const SubmitShellTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitShellTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitShellTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SubmitSqlTaskOutcome WedataClient::SubmitSqlTask(const SubmitSqlTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitSqlTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitSqlTaskResponse rsp = SubmitSqlTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitSqlTaskOutcome(rsp);
        else
            return SubmitSqlTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitSqlTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitSqlTaskAsync(const SubmitSqlTaskRequest& request, const SubmitSqlTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitSqlTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SubmitSqlTaskOutcomeCallable WedataClient::SubmitSqlTaskCallable(const SubmitSqlTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitSqlTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitSqlTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SubmitTaskOutcome WedataClient::SubmitTask(const SubmitTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTaskResponse rsp = SubmitTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTaskOutcome(rsp);
        else
            return SubmitTaskOutcome(o.GetError());
    }
    else
    {
        return SubmitTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitTaskAsync(const SubmitTaskRequest& request, const SubmitTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SubmitTaskOutcomeCallable WedataClient::SubmitTaskCallable(const SubmitTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitTaskOutcome()>>(
        [this, request]()
        {
            return this->SubmitTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SubmitTaskTestRunOutcome WedataClient::SubmitTaskTestRun(const SubmitTaskTestRunRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTaskTestRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTaskTestRunResponse rsp = SubmitTaskTestRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTaskTestRunOutcome(rsp);
        else
            return SubmitTaskTestRunOutcome(o.GetError());
    }
    else
    {
        return SubmitTaskTestRunOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitTaskTestRunAsync(const SubmitTaskTestRunRequest& request, const SubmitTaskTestRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitTaskTestRun(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SubmitTaskTestRunOutcomeCallable WedataClient::SubmitTaskTestRunCallable(const SubmitTaskTestRunRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitTaskTestRunOutcome()>>(
        [this, request]()
        {
            return this->SubmitTaskTestRun(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SubmitWorkflowOutcome WedataClient::SubmitWorkflow(const SubmitWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitWorkflowResponse rsp = SubmitWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitWorkflowOutcome(rsp);
        else
            return SubmitWorkflowOutcome(o.GetError());
    }
    else
    {
        return SubmitWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::SubmitWorkflowAsync(const SubmitWorkflowRequest& request, const SubmitWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SubmitWorkflowOutcomeCallable WedataClient::SubmitWorkflowCallable(const SubmitWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitWorkflowOutcome()>>(
        [this, request]()
        {
            return this->SubmitWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SuspendIntegrationTaskOutcome WedataClient::SuspendIntegrationTask(const SuspendIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SuspendIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SuspendIntegrationTaskResponse rsp = SuspendIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SuspendIntegrationTaskOutcome(rsp);
        else
            return SuspendIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return SuspendIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::SuspendIntegrationTaskAsync(const SuspendIntegrationTaskRequest& request, const SuspendIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SuspendIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SuspendIntegrationTaskOutcomeCallable WedataClient::SuspendIntegrationTaskCallable(const SuspendIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SuspendIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->SuspendIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::TaskLogOutcome WedataClient::TaskLog(const TaskLogRequest &request)
{
    auto outcome = MakeRequest(request, "TaskLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TaskLogResponse rsp = TaskLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TaskLogOutcome(rsp);
        else
            return TaskLogOutcome(o.GetError());
    }
    else
    {
        return TaskLogOutcome(outcome.GetError());
    }
}

void WedataClient::TaskLogAsync(const TaskLogRequest& request, const TaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TaskLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::TaskLogOutcomeCallable WedataClient::TaskLogCallable(const TaskLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TaskLogOutcome()>>(
        [this, request]()
        {
            return this->TaskLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::TriggerDsEventOutcome WedataClient::TriggerDsEvent(const TriggerDsEventRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerDsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerDsEventResponse rsp = TriggerDsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerDsEventOutcome(rsp);
        else
            return TriggerDsEventOutcome(o.GetError());
    }
    else
    {
        return TriggerDsEventOutcome(outcome.GetError());
    }
}

void WedataClient::TriggerDsEventAsync(const TriggerDsEventRequest& request, const TriggerDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TriggerDsEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::TriggerDsEventOutcomeCallable WedataClient::TriggerDsEventCallable(const TriggerDsEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TriggerDsEventOutcome()>>(
        [this, request]()
        {
            return this->TriggerDsEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::TriggerEventOutcome WedataClient::TriggerEvent(const TriggerEventRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerEventResponse rsp = TriggerEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerEventOutcome(rsp);
        else
            return TriggerEventOutcome(o.GetError());
    }
    else
    {
        return TriggerEventOutcome(outcome.GetError());
    }
}

void WedataClient::TriggerEventAsync(const TriggerEventRequest& request, const TriggerEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TriggerEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::TriggerEventOutcomeCallable WedataClient::TriggerEventCallable(const TriggerEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TriggerEventOutcome()>>(
        [this, request]()
        {
            return this->TriggerEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UnlockIntegrationTaskOutcome WedataClient::UnlockIntegrationTask(const UnlockIntegrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "UnlockIntegrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlockIntegrationTaskResponse rsp = UnlockIntegrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlockIntegrationTaskOutcome(rsp);
        else
            return UnlockIntegrationTaskOutcome(o.GetError());
    }
    else
    {
        return UnlockIntegrationTaskOutcome(outcome.GetError());
    }
}

void WedataClient::UnlockIntegrationTaskAsync(const UnlockIntegrationTaskRequest& request, const UnlockIntegrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnlockIntegrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UnlockIntegrationTaskOutcomeCallable WedataClient::UnlockIntegrationTaskCallable(const UnlockIntegrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnlockIntegrationTaskOutcome()>>(
        [this, request]()
        {
            return this->UnlockIntegrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateBatchTaskAdvancedSettingsOutcome WedataClient::UpdateBatchTaskAdvancedSettings(const UpdateBatchTaskAdvancedSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBatchTaskAdvancedSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBatchTaskAdvancedSettingsResponse rsp = UpdateBatchTaskAdvancedSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBatchTaskAdvancedSettingsOutcome(rsp);
        else
            return UpdateBatchTaskAdvancedSettingsOutcome(o.GetError());
    }
    else
    {
        return UpdateBatchTaskAdvancedSettingsOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateBatchTaskAdvancedSettingsAsync(const UpdateBatchTaskAdvancedSettingsRequest& request, const UpdateBatchTaskAdvancedSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateBatchTaskAdvancedSettings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateBatchTaskAdvancedSettingsOutcomeCallable WedataClient::UpdateBatchTaskAdvancedSettingsCallable(const UpdateBatchTaskAdvancedSettingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateBatchTaskAdvancedSettingsOutcome()>>(
        [this, request]()
        {
            return this->UpdateBatchTaskAdvancedSettings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateBatchTaskDatasourceOutcome WedataClient::UpdateBatchTaskDatasource(const UpdateBatchTaskDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBatchTaskDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBatchTaskDatasourceResponse rsp = UpdateBatchTaskDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBatchTaskDatasourceOutcome(rsp);
        else
            return UpdateBatchTaskDatasourceOutcome(o.GetError());
    }
    else
    {
        return UpdateBatchTaskDatasourceOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateBatchTaskDatasourceAsync(const UpdateBatchTaskDatasourceRequest& request, const UpdateBatchTaskDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateBatchTaskDatasource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateBatchTaskDatasourceOutcomeCallable WedataClient::UpdateBatchTaskDatasourceCallable(const UpdateBatchTaskDatasourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateBatchTaskDatasourceOutcome()>>(
        [this, request]()
        {
            return this->UpdateBatchTaskDatasource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateBatchTaskInChargeOutcome WedataClient::UpdateBatchTaskInCharge(const UpdateBatchTaskInChargeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBatchTaskInCharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBatchTaskInChargeResponse rsp = UpdateBatchTaskInChargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBatchTaskInChargeOutcome(rsp);
        else
            return UpdateBatchTaskInChargeOutcome(o.GetError());
    }
    else
    {
        return UpdateBatchTaskInChargeOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateBatchTaskInChargeAsync(const UpdateBatchTaskInChargeRequest& request, const UpdateBatchTaskInChargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateBatchTaskInCharge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateBatchTaskInChargeOutcomeCallable WedataClient::UpdateBatchTaskInChargeCallable(const UpdateBatchTaskInChargeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateBatchTaskInChargeOutcome()>>(
        [this, request]()
        {
            return this->UpdateBatchTaskInCharge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateBatchTaskParameterOutcome WedataClient::UpdateBatchTaskParameter(const UpdateBatchTaskParameterRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBatchTaskParameter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBatchTaskParameterResponse rsp = UpdateBatchTaskParameterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBatchTaskParameterOutcome(rsp);
        else
            return UpdateBatchTaskParameterOutcome(o.GetError());
    }
    else
    {
        return UpdateBatchTaskParameterOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateBatchTaskParameterAsync(const UpdateBatchTaskParameterRequest& request, const UpdateBatchTaskParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateBatchTaskParameter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateBatchTaskParameterOutcomeCallable WedataClient::UpdateBatchTaskParameterCallable(const UpdateBatchTaskParameterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateBatchTaskParameterOutcome()>>(
        [this, request]()
        {
            return this->UpdateBatchTaskParameter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateBatchTaskParamsOutcome WedataClient::UpdateBatchTaskParams(const UpdateBatchTaskParamsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBatchTaskParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBatchTaskParamsResponse rsp = UpdateBatchTaskParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBatchTaskParamsOutcome(rsp);
        else
            return UpdateBatchTaskParamsOutcome(o.GetError());
    }
    else
    {
        return UpdateBatchTaskParamsOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateBatchTaskParamsAsync(const UpdateBatchTaskParamsRequest& request, const UpdateBatchTaskParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateBatchTaskParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateBatchTaskParamsOutcomeCallable WedataClient::UpdateBatchTaskParamsCallable(const UpdateBatchTaskParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateBatchTaskParamsOutcome()>>(
        [this, request]()
        {
            return this->UpdateBatchTaskParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateBatchTaskResourceGroupOutcome WedataClient::UpdateBatchTaskResourceGroup(const UpdateBatchTaskResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBatchTaskResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBatchTaskResourceGroupResponse rsp = UpdateBatchTaskResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBatchTaskResourceGroupOutcome(rsp);
        else
            return UpdateBatchTaskResourceGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateBatchTaskResourceGroupOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateBatchTaskResourceGroupAsync(const UpdateBatchTaskResourceGroupRequest& request, const UpdateBatchTaskResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateBatchTaskResourceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateBatchTaskResourceGroupOutcomeCallable WedataClient::UpdateBatchTaskResourceGroupCallable(const UpdateBatchTaskResourceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateBatchTaskResourceGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateBatchTaskResourceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateBatchTaskScheduleOutcome WedataClient::UpdateBatchTaskSchedule(const UpdateBatchTaskScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBatchTaskSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBatchTaskScheduleResponse rsp = UpdateBatchTaskScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBatchTaskScheduleOutcome(rsp);
        else
            return UpdateBatchTaskScheduleOutcome(o.GetError());
    }
    else
    {
        return UpdateBatchTaskScheduleOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateBatchTaskScheduleAsync(const UpdateBatchTaskScheduleRequest& request, const UpdateBatchTaskScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateBatchTaskSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateBatchTaskScheduleOutcomeCallable WedataClient::UpdateBatchTaskScheduleCallable(const UpdateBatchTaskScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateBatchTaskScheduleOutcome()>>(
        [this, request]()
        {
            return this->UpdateBatchTaskSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateDsEventOutcome WedataClient::UpdateDsEvent(const UpdateDsEventRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDsEventResponse rsp = UpdateDsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDsEventOutcome(rsp);
        else
            return UpdateDsEventOutcome(o.GetError());
    }
    else
    {
        return UpdateDsEventOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateDsEventAsync(const UpdateDsEventRequest& request, const UpdateDsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDsEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateDsEventOutcomeCallable WedataClient::UpdateDsEventCallable(const UpdateDsEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDsEventOutcome()>>(
        [this, request]()
        {
            return this->UpdateDsEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateEventListenerOutcome WedataClient::UpdateEventListener(const UpdateEventListenerRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEventListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEventListenerResponse rsp = UpdateEventListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEventListenerOutcome(rsp);
        else
            return UpdateEventListenerOutcome(o.GetError());
    }
    else
    {
        return UpdateEventListenerOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateEventListenerAsync(const UpdateEventListenerRequest& request, const UpdateEventListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateEventListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateEventListenerOutcomeCallable WedataClient::UpdateEventListenerCallable(const UpdateEventListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateEventListenerOutcome()>>(
        [this, request]()
        {
            return this->UpdateEventListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateInLongAgentOutcome WedataClient::UpdateInLongAgent(const UpdateInLongAgentRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateInLongAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateInLongAgentResponse rsp = UpdateInLongAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateInLongAgentOutcome(rsp);
        else
            return UpdateInLongAgentOutcome(o.GetError());
    }
    else
    {
        return UpdateInLongAgentOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateInLongAgentAsync(const UpdateInLongAgentRequest& request, const UpdateInLongAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateInLongAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateInLongAgentOutcomeCallable WedataClient::UpdateInLongAgentCallable(const UpdateInLongAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateInLongAgentOutcome()>>(
        [this, request]()
        {
            return this->UpdateInLongAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateTaskDsOutcome WedataClient::UpdateTaskDs(const UpdateTaskDsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTaskDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTaskDsResponse rsp = UpdateTaskDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTaskDsOutcome(rsp);
        else
            return UpdateTaskDsOutcome(o.GetError());
    }
    else
    {
        return UpdateTaskDsOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateTaskDsAsync(const UpdateTaskDsRequest& request, const UpdateTaskDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateTaskDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateTaskDsOutcomeCallable WedataClient::UpdateTaskDsCallable(const UpdateTaskDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateTaskDsOutcome()>>(
        [this, request]()
        {
            return this->UpdateTaskDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateWorkflowOwnerOutcome WedataClient::UpdateWorkflowOwner(const UpdateWorkflowOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkflowOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkflowOwnerResponse rsp = UpdateWorkflowOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkflowOwnerOutcome(rsp);
        else
            return UpdateWorkflowOwnerOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkflowOwnerOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateWorkflowOwnerAsync(const UpdateWorkflowOwnerRequest& request, const UpdateWorkflowOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateWorkflowOwner(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateWorkflowOwnerOutcomeCallable WedataClient::UpdateWorkflowOwnerCallable(const UpdateWorkflowOwnerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateWorkflowOwnerOutcome()>>(
        [this, request]()
        {
            return this->UpdateWorkflowOwner(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UploadAdvanceRunParamsOutcome WedataClient::UploadAdvanceRunParams(const UploadAdvanceRunParamsRequest &request)
{
    auto outcome = MakeRequest(request, "UploadAdvanceRunParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadAdvanceRunParamsResponse rsp = UploadAdvanceRunParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadAdvanceRunParamsOutcome(rsp);
        else
            return UploadAdvanceRunParamsOutcome(o.GetError());
    }
    else
    {
        return UploadAdvanceRunParamsOutcome(outcome.GetError());
    }
}

void WedataClient::UploadAdvanceRunParamsAsync(const UploadAdvanceRunParamsRequest& request, const UploadAdvanceRunParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadAdvanceRunParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UploadAdvanceRunParamsOutcomeCallable WedataClient::UploadAdvanceRunParamsCallable(const UploadAdvanceRunParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadAdvanceRunParamsOutcome()>>(
        [this, request]()
        {
            return this->UploadAdvanceRunParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UploadContentOutcome WedataClient::UploadContent(const UploadContentRequest &request)
{
    auto outcome = MakeRequest(request, "UploadContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadContentResponse rsp = UploadContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadContentOutcome(rsp);
        else
            return UploadContentOutcome(o.GetError());
    }
    else
    {
        return UploadContentOutcome(outcome.GetError());
    }
}

void WedataClient::UploadContentAsync(const UploadContentRequest& request, const UploadContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UploadContentOutcomeCallable WedataClient::UploadContentCallable(const UploadContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadContentOutcome()>>(
        [this, request]()
        {
            return this->UploadContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UploadFilesDsOutcome WedataClient::UploadFilesDs(const UploadFilesDsRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFilesDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFilesDsResponse rsp = UploadFilesDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFilesDsOutcome(rsp);
        else
            return UploadFilesDsOutcome(o.GetError());
    }
    else
    {
        return UploadFilesDsOutcome(outcome.GetError());
    }
}

void WedataClient::UploadFilesDsAsync(const UploadFilesDsRequest& request, const UploadFilesDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFilesDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UploadFilesDsOutcomeCallable WedataClient::UploadFilesDsCallable(const UploadFilesDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadFilesDsOutcome()>>(
        [this, request]()
        {
            return this->UploadFilesDs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UploadResourceOutcome WedataClient::UploadResource(const UploadResourceRequest &request)
{
    auto outcome = MakeRequest(request, "UploadResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadResourceResponse rsp = UploadResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadResourceOutcome(rsp);
        else
            return UploadResourceOutcome(o.GetError());
    }
    else
    {
        return UploadResourceOutcome(outcome.GetError());
    }
}

void WedataClient::UploadResourceAsync(const UploadResourceRequest& request, const UploadResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UploadResourceOutcomeCallable WedataClient::UploadResourceCallable(const UploadResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadResourceOutcome()>>(
        [this, request]()
        {
            return this->UploadResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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


WedataClient::AddProjectUserRoleOutcome WedataClient::AddProjectUserRole(const AddProjectUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "AddProjectUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddProjectUserRoleResponse rsp = AddProjectUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddProjectUserRoleOutcome(rsp);
        else
            return AddProjectUserRoleOutcome(o.GetError());
    }
    else
    {
        return AddProjectUserRoleOutcome(outcome.GetError());
    }
}

void WedataClient::AddProjectUserRoleAsync(const AddProjectUserRoleRequest& request, const AddProjectUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddProjectUserRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::AddProjectUserRoleOutcomeCallable WedataClient::AddProjectUserRoleCallable(const AddProjectUserRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddProjectUserRoleOutcome()>>(
        [this, request]()
        {
            return this->AddProjectUserRole(request);
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

WedataClient::CreateCodeTemplateOutcome WedataClient::CreateCodeTemplate(const CreateCodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeTemplateResponse rsp = CreateCodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeTemplateOutcome(rsp);
        else
            return CreateCodeTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateCodeTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCodeTemplateAsync(const CreateCodeTemplateRequest& request, const CreateCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateCodeTemplateOutcomeCallable WedataClient::CreateCodeTemplateCallable(const CreateCodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateCodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateCodeTemplateVersionOutcome WedataClient::CreateCodeTemplateVersion(const CreateCodeTemplateVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeTemplateVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeTemplateVersionResponse rsp = CreateCodeTemplateVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeTemplateVersionOutcome(rsp);
        else
            return CreateCodeTemplateVersionOutcome(o.GetError());
    }
    else
    {
        return CreateCodeTemplateVersionOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCodeTemplateVersionAsync(const CreateCodeTemplateVersionRequest& request, const CreateCodeTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCodeTemplateVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateCodeTemplateVersionOutcomeCallable WedataClient::CreateCodeTemplateVersionCallable(const CreateCodeTemplateVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCodeTemplateVersionOutcome()>>(
        [this, request]()
        {
            return this->CreateCodeTemplateVersion(request);
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

WedataClient::CreateDataModelOutcome WedataClient::CreateDataModel(const CreateDataModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataModelResponse rsp = CreateDataModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataModelOutcome(rsp);
        else
            return CreateDataModelOutcome(o.GetError());
    }
    else
    {
        return CreateDataModelOutcome(outcome.GetError());
    }
}

void WedataClient::CreateDataModelAsync(const CreateDataModelRequest& request, const CreateDataModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateDataModelOutcomeCallable WedataClient::CreateDataModelCallable(const CreateDataModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataModelOutcome()>>(
        [this, request]()
        {
            return this->CreateDataModel(request);
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

WedataClient::CreateTaskNewOutcome WedataClient::CreateTaskNew(const CreateTaskNewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskNewResponse rsp = CreateTaskNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskNewOutcome(rsp);
        else
            return CreateTaskNewOutcome(o.GetError());
    }
    else
    {
        return CreateTaskNewOutcome(outcome.GetError());
    }
}

void WedataClient::CreateTaskNewAsync(const CreateTaskNewRequest& request, const CreateTaskNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateTaskNewOutcomeCallable WedataClient::CreateTaskNewCallable(const CreateTaskNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskNewOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskNew(request);
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

WedataClient::CreateWorkflowDsOutcome WedataClient::CreateWorkflowDs(const CreateWorkflowDsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflowDs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowDsResponse rsp = CreateWorkflowDsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowDsOutcome(rsp);
        else
            return CreateWorkflowDsOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowDsOutcome(outcome.GetError());
    }
}

void WedataClient::CreateWorkflowDsAsync(const CreateWorkflowDsRequest& request, const CreateWorkflowDsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkflowDs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateWorkflowDsOutcomeCallable WedataClient::CreateWorkflowDsCallable(const CreateWorkflowDsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkflowDsOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkflowDs(request);
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

WedataClient::DeleteCodeTemplateOutcome WedataClient::DeleteCodeTemplate(const DeleteCodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodeTemplateResponse rsp = DeleteCodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodeTemplateOutcome(rsp);
        else
            return DeleteCodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteCodeTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteCodeTemplateAsync(const DeleteCodeTemplateRequest& request, const DeleteCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteCodeTemplateOutcomeCallable WedataClient::DeleteCodeTemplateCallable(const DeleteCodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteCodeTemplate(request);
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

WedataClient::DeleteDataModelOutcome WedataClient::DeleteDataModel(const DeleteDataModelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataModelResponse rsp = DeleteDataModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataModelOutcome(rsp);
        else
            return DeleteDataModelOutcome(o.GetError());
    }
    else
    {
        return DeleteDataModelOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteDataModelAsync(const DeleteDataModelRequest& request, const DeleteDataModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDataModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteDataModelOutcomeCallable WedataClient::DeleteDataModelCallable(const DeleteDataModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDataModelOutcome()>>(
        [this, request]()
        {
            return this->DeleteDataModel(request);
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

WedataClient::DescribeBaseBizCatalogsOutcome WedataClient::DescribeBaseBizCatalogs(const DescribeBaseBizCatalogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaseBizCatalogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaseBizCatalogsResponse rsp = DescribeBaseBizCatalogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaseBizCatalogsOutcome(rsp);
        else
            return DescribeBaseBizCatalogsOutcome(o.GetError());
    }
    else
    {
        return DescribeBaseBizCatalogsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeBaseBizCatalogsAsync(const DescribeBaseBizCatalogsRequest& request, const DescribeBaseBizCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaseBizCatalogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeBaseBizCatalogsOutcomeCallable WedataClient::DescribeBaseBizCatalogsCallable(const DescribeBaseBizCatalogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaseBizCatalogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaseBizCatalogs(request);
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

WedataClient::DescribeCodeTemplateDetailOutcome WedataClient::DescribeCodeTemplateDetail(const DescribeCodeTemplateDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeTemplateDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeTemplateDetailResponse rsp = DescribeCodeTemplateDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeTemplateDetailOutcome(rsp);
        else
            return DescribeCodeTemplateDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeTemplateDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeCodeTemplateDetailAsync(const DescribeCodeTemplateDetailRequest& request, const DescribeCodeTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeTemplateDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeCodeTemplateDetailOutcomeCallable WedataClient::DescribeCodeTemplateDetailCallable(const DescribeCodeTemplateDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeTemplateDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodeTemplateDetail(request);
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

WedataClient::DescribeDataServicePublishedApiDetailOutcome WedataClient::DescribeDataServicePublishedApiDetail(const DescribeDataServicePublishedApiDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataServicePublishedApiDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataServicePublishedApiDetailResponse rsp = DescribeDataServicePublishedApiDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataServicePublishedApiDetailOutcome(rsp);
        else
            return DescribeDataServicePublishedApiDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDataServicePublishedApiDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataServicePublishedApiDetailAsync(const DescribeDataServicePublishedApiDetailRequest& request, const DescribeDataServicePublishedApiDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataServicePublishedApiDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDataServicePublishedApiDetailOutcomeCallable WedataClient::DescribeDataServicePublishedApiDetailCallable(const DescribeDataServicePublishedApiDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataServicePublishedApiDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataServicePublishedApiDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDataServicePublishedApiListOutcome WedataClient::DescribeDataServicePublishedApiList(const DescribeDataServicePublishedApiListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataServicePublishedApiList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataServicePublishedApiListResponse rsp = DescribeDataServicePublishedApiListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataServicePublishedApiListOutcome(rsp);
        else
            return DescribeDataServicePublishedApiListOutcome(o.GetError());
    }
    else
    {
        return DescribeDataServicePublishedApiListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDataServicePublishedApiListAsync(const DescribeDataServicePublishedApiListRequest& request, const DescribeDataServicePublishedApiListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataServicePublishedApiList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDataServicePublishedApiListOutcomeCallable WedataClient::DescribeDataServicePublishedApiListCallable(const DescribeDataServicePublishedApiListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataServicePublishedApiListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataServicePublishedApiList(request);
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

WedataClient::DescribeDutyScheduleDetailsOutcome WedataClient::DescribeDutyScheduleDetails(const DescribeDutyScheduleDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDutyScheduleDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDutyScheduleDetailsResponse rsp = DescribeDutyScheduleDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDutyScheduleDetailsOutcome(rsp);
        else
            return DescribeDutyScheduleDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeDutyScheduleDetailsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDutyScheduleDetailsAsync(const DescribeDutyScheduleDetailsRequest& request, const DescribeDutyScheduleDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDutyScheduleDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDutyScheduleDetailsOutcomeCallable WedataClient::DescribeDutyScheduleDetailsCallable(const DescribeDutyScheduleDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDutyScheduleDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDutyScheduleDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeDutyScheduleListOutcome WedataClient::DescribeDutyScheduleList(const DescribeDutyScheduleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDutyScheduleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDutyScheduleListResponse rsp = DescribeDutyScheduleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDutyScheduleListOutcome(rsp);
        else
            return DescribeDutyScheduleListOutcome(o.GetError());
    }
    else
    {
        return DescribeDutyScheduleListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeDutyScheduleListAsync(const DescribeDutyScheduleListRequest& request, const DescribeDutyScheduleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDutyScheduleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeDutyScheduleListOutcomeCallable WedataClient::DescribeDutyScheduleListCallable(const DescribeDutyScheduleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDutyScheduleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDutyScheduleList(request);
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

WedataClient::DescribeExecutorGroupMetricOutcome WedataClient::DescribeExecutorGroupMetric(const DescribeExecutorGroupMetricRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExecutorGroupMetric");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExecutorGroupMetricResponse rsp = DescribeExecutorGroupMetricResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExecutorGroupMetricOutcome(rsp);
        else
            return DescribeExecutorGroupMetricOutcome(o.GetError());
    }
    else
    {
        return DescribeExecutorGroupMetricOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeExecutorGroupMetricAsync(const DescribeExecutorGroupMetricRequest& request, const DescribeExecutorGroupMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExecutorGroupMetric(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeExecutorGroupMetricOutcomeCallable WedataClient::DescribeExecutorGroupMetricCallable(const DescribeExecutorGroupMetricRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExecutorGroupMetricOutcome()>>(
        [this, request]()
        {
            return this->DescribeExecutorGroupMetric(request);
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

WedataClient::DescribeFormVersionParamOutcome WedataClient::DescribeFormVersionParam(const DescribeFormVersionParamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFormVersionParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFormVersionParamResponse rsp = DescribeFormVersionParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFormVersionParamOutcome(rsp);
        else
            return DescribeFormVersionParamOutcome(o.GetError());
    }
    else
    {
        return DescribeFormVersionParamOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeFormVersionParamAsync(const DescribeFormVersionParamRequest& request, const DescribeFormVersionParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFormVersionParam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeFormVersionParamOutcomeCallable WedataClient::DescribeFormVersionParamCallable(const DescribeFormVersionParamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFormVersionParamOutcome()>>(
        [this, request]()
        {
            return this->DescribeFormVersionParam(request);
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

WedataClient::DescribeInstanceDetailInfoOutcome WedataClient::DescribeInstanceDetailInfo(const DescribeInstanceDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDetailInfoResponse rsp = DescribeInstanceDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDetailInfoOutcome(rsp);
        else
            return DescribeInstanceDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDetailInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeInstanceDetailInfoAsync(const DescribeInstanceDetailInfoRequest& request, const DescribeInstanceDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceDetailInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeInstanceDetailInfoOutcomeCallable WedataClient::DescribeInstanceDetailInfoCallable(const DescribeInstanceDetailInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceDetailInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceDetailInfo(request);
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

WedataClient::DescribeManualTriggerRecordPageOutcome WedataClient::DescribeManualTriggerRecordPage(const DescribeManualTriggerRecordPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeManualTriggerRecordPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeManualTriggerRecordPageResponse rsp = DescribeManualTriggerRecordPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeManualTriggerRecordPageOutcome(rsp);
        else
            return DescribeManualTriggerRecordPageOutcome(o.GetError());
    }
    else
    {
        return DescribeManualTriggerRecordPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeManualTriggerRecordPageAsync(const DescribeManualTriggerRecordPageRequest& request, const DescribeManualTriggerRecordPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeManualTriggerRecordPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeManualTriggerRecordPageOutcomeCallable WedataClient::DescribeManualTriggerRecordPageCallable(const DescribeManualTriggerRecordPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeManualTriggerRecordPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeManualTriggerRecordPage(request);
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

WedataClient::DescribePendingSubmitTaskListOutcome WedataClient::DescribePendingSubmitTaskList(const DescribePendingSubmitTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePendingSubmitTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePendingSubmitTaskListResponse rsp = DescribePendingSubmitTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePendingSubmitTaskListOutcome(rsp);
        else
            return DescribePendingSubmitTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribePendingSubmitTaskListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribePendingSubmitTaskListAsync(const DescribePendingSubmitTaskListRequest& request, const DescribePendingSubmitTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePendingSubmitTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribePendingSubmitTaskListOutcomeCallable WedataClient::DescribePendingSubmitTaskListCallable(const DescribePendingSubmitTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePendingSubmitTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribePendingSubmitTaskList(request);
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

WedataClient::DescribeProjectUsersOutcome WedataClient::DescribeProjectUsers(const DescribeProjectUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectUsersResponse rsp = DescribeProjectUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectUsersOutcome(rsp);
        else
            return DescribeProjectUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectUsersOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeProjectUsersAsync(const DescribeProjectUsersRequest& request, const DescribeProjectUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeProjectUsersOutcomeCallable WedataClient::DescribeProjectUsersCallable(const DescribeProjectUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectUsersOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectUsers(request);
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

WedataClient::DescribeRealViewSchemaPageOutcome WedataClient::DescribeRealViewSchemaPage(const DescribeRealViewSchemaPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealViewSchemaPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealViewSchemaPageResponse rsp = DescribeRealViewSchemaPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealViewSchemaPageOutcome(rsp);
        else
            return DescribeRealViewSchemaPageOutcome(o.GetError());
    }
    else
    {
        return DescribeRealViewSchemaPageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRealViewSchemaPageAsync(const DescribeRealViewSchemaPageRequest& request, const DescribeRealViewSchemaPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealViewSchemaPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRealViewSchemaPageOutcomeCallable WedataClient::DescribeRealViewSchemaPageCallable(const DescribeRealViewSchemaPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealViewSchemaPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealViewSchemaPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeRelatedTasksByTaskIdOutcome WedataClient::DescribeRelatedTasksByTaskId(const DescribeRelatedTasksByTaskIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelatedTasksByTaskId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelatedTasksByTaskIdResponse rsp = DescribeRelatedTasksByTaskIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelatedTasksByTaskIdOutcome(rsp);
        else
            return DescribeRelatedTasksByTaskIdOutcome(o.GetError());
    }
    else
    {
        return DescribeRelatedTasksByTaskIdOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRelatedTasksByTaskIdAsync(const DescribeRelatedTasksByTaskIdRequest& request, const DescribeRelatedTasksByTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRelatedTasksByTaskId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRelatedTasksByTaskIdOutcomeCallable WedataClient::DescribeRelatedTasksByTaskIdCallable(const DescribeRelatedTasksByTaskIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRelatedTasksByTaskIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeRelatedTasksByTaskId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeReportTaskDetailOutcome WedataClient::DescribeReportTaskDetail(const DescribeReportTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportTaskDetailResponse rsp = DescribeReportTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportTaskDetailOutcome(rsp);
        else
            return DescribeReportTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeReportTaskDetailOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeReportTaskDetailAsync(const DescribeReportTaskDetailRequest& request, const DescribeReportTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReportTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeReportTaskDetailOutcomeCallable WedataClient::DescribeReportTaskDetailCallable(const DescribeReportTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReportTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeReportTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeReportTaskListOutcome WedataClient::DescribeReportTaskList(const DescribeReportTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportTaskListResponse rsp = DescribeReportTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportTaskListOutcome(rsp);
        else
            return DescribeReportTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeReportTaskListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeReportTaskListAsync(const DescribeReportTaskListRequest& request, const DescribeReportTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReportTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeReportTaskListOutcomeCallable WedataClient::DescribeReportTaskListCallable(const DescribeReportTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReportTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeReportTaskList(request);
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

WedataClient::DescribeRoleListOutcome WedataClient::DescribeRoleList(const DescribeRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoleListResponse rsp = DescribeRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoleListOutcome(rsp);
        else
            return DescribeRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeRoleListOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeRoleListAsync(const DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeRoleListOutcomeCallable WedataClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoleList(request);
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

WedataClient::DescribeTablePartitionsOutcome WedataClient::DescribeTablePartitions(const DescribeTablePartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablePartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablePartitionsResponse rsp = DescribeTablePartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablePartitionsOutcome(rsp);
        else
            return DescribeTablePartitionsOutcome(o.GetError());
    }
    else
    {
        return DescribeTablePartitionsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTablePartitionsAsync(const DescribeTablePartitionsRequest& request, const DescribeTablePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTablePartitions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTablePartitionsOutcomeCallable WedataClient::DescribeTablePartitionsCallable(const DescribeTablePartitionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablePartitionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTablePartitions(request);
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

WedataClient::DescribeTaskLineageOutcome WedataClient::DescribeTaskLineage(const DescribeTaskLineageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLineageResponse rsp = DescribeTaskLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLineageOutcome(rsp);
        else
            return DescribeTaskLineageOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLineageOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskLineageAsync(const DescribeTaskLineageRequest& request, const DescribeTaskLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskLineage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskLineageOutcomeCallable WedataClient::DescribeTaskLineageCallable(const DescribeTaskLineageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskLineageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskLineage(request);
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

WedataClient::DescribeTaskTableMetricOverviewOutcome WedataClient::DescribeTaskTableMetricOverview(const DescribeTaskTableMetricOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskTableMetricOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskTableMetricOverviewResponse rsp = DescribeTaskTableMetricOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskTableMetricOverviewOutcome(rsp);
        else
            return DescribeTaskTableMetricOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskTableMetricOverviewOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskTableMetricOverviewAsync(const DescribeTaskTableMetricOverviewRequest& request, const DescribeTaskTableMetricOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskTableMetricOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskTableMetricOverviewOutcomeCallable WedataClient::DescribeTaskTableMetricOverviewCallable(const DescribeTaskTableMetricOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskTableMetricOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskTableMetricOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTaskTemplatesOutcome WedataClient::DescribeTaskTemplates(const DescribeTaskTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskTemplatesResponse rsp = DescribeTaskTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskTemplatesOutcome(rsp);
        else
            return DescribeTaskTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskTemplatesOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTaskTemplatesAsync(const DescribeTaskTemplatesRequest& request, const DescribeTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTaskTemplatesOutcomeCallable WedataClient::DescribeTaskTemplatesCallable(const DescribeTaskTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DescribeTasksForCodeTemplateOutcome WedataClient::DescribeTasksForCodeTemplate(const DescribeTasksForCodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksForCodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksForCodeTemplateResponse rsp = DescribeTasksForCodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksForCodeTemplateOutcome(rsp);
        else
            return DescribeTasksForCodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksForCodeTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTasksForCodeTemplateAsync(const DescribeTasksForCodeTemplateRequest& request, const DescribeTasksForCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasksForCodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTasksForCodeTemplateOutcomeCallable WedataClient::DescribeTasksForCodeTemplateCallable(const DescribeTasksForCodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksForCodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasksForCodeTemplate(request);
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

WedataClient::DescribeTenantProjectsOutcome WedataClient::DescribeTenantProjects(const DescribeTenantProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTenantProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTenantProjectsResponse rsp = DescribeTenantProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTenantProjectsOutcome(rsp);
        else
            return DescribeTenantProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeTenantProjectsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeTenantProjectsAsync(const DescribeTenantProjectsRequest& request, const DescribeTenantProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTenantProjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeTenantProjectsOutcomeCallable WedataClient::DescribeTenantProjectsCallable(const DescribeTenantProjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTenantProjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTenantProjects(request);
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

WedataClient::DescribeWorkflowByFordIdsOutcome WedataClient::DescribeWorkflowByFordIds(const DescribeWorkflowByFordIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflowByFordIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowByFordIdsResponse rsp = DescribeWorkflowByFordIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowByFordIdsOutcome(rsp);
        else
            return DescribeWorkflowByFordIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowByFordIdsOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeWorkflowByFordIdsAsync(const DescribeWorkflowByFordIdsRequest& request, const DescribeWorkflowByFordIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflowByFordIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeWorkflowByFordIdsOutcomeCallable WedataClient::DescribeWorkflowByFordIdsCallable(const DescribeWorkflowByFordIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowByFordIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflowByFordIds(request);
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

WedataClient::DiagnoseProOutcome WedataClient::DiagnosePro(const DiagnoseProRequest &request)
{
    auto outcome = MakeRequest(request, "DiagnosePro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DiagnoseProResponse rsp = DiagnoseProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DiagnoseProOutcome(rsp);
        else
            return DiagnoseProOutcome(o.GetError());
    }
    else
    {
        return DiagnoseProOutcome(outcome.GetError());
    }
}

void WedataClient::DiagnoseProAsync(const DiagnoseProRequest& request, const DiagnoseProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DiagnosePro(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DiagnoseProOutcomeCallable WedataClient::DiagnoseProCallable(const DiagnoseProRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DiagnoseProOutcome()>>(
        [this, request]()
        {
            return this->DiagnosePro(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DownloadLogByLineOutcome WedataClient::DownloadLogByLine(const DownloadLogByLineRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadLogByLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadLogByLineResponse rsp = DownloadLogByLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadLogByLineOutcome(rsp);
        else
            return DownloadLogByLineOutcome(o.GetError());
    }
    else
    {
        return DownloadLogByLineOutcome(outcome.GetError());
    }
}

void WedataClient::DownloadLogByLineAsync(const DownloadLogByLineRequest& request, const DownloadLogByLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadLogByLine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DownloadLogByLineOutcomeCallable WedataClient::DownloadLogByLineCallable(const DownloadLogByLineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadLogByLineOutcome()>>(
        [this, request]()
        {
            return this->DownloadLogByLine(request);
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

WedataClient::GetInstanceLogOutcome WedataClient::GetInstanceLog(const GetInstanceLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetInstanceLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInstanceLogResponse rsp = GetInstanceLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInstanceLogOutcome(rsp);
        else
            return GetInstanceLogOutcome(o.GetError());
    }
    else
    {
        return GetInstanceLogOutcome(outcome.GetError());
    }
}

void WedataClient::GetInstanceLogAsync(const GetInstanceLogRequest& request, const GetInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetInstanceLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetInstanceLogOutcomeCallable WedataClient::GetInstanceLogCallable(const GetInstanceLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetInstanceLogOutcome()>>(
        [this, request]()
        {
            return this->GetInstanceLog(request);
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

WedataClient::GetTaskInstanceOutcome WedataClient::GetTaskInstance(const GetTaskInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskInstanceResponse rsp = GetTaskInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskInstanceOutcome(rsp);
        else
            return GetTaskInstanceOutcome(o.GetError());
    }
    else
    {
        return GetTaskInstanceOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskInstanceAsync(const GetTaskInstanceRequest& request, const GetTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetTaskInstanceOutcomeCallable WedataClient::GetTaskInstanceCallable(const GetTaskInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskInstanceOutcome()>>(
        [this, request]()
        {
            return this->GetTaskInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::JudgeResourceFileOutcome WedataClient::JudgeResourceFile(const JudgeResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "JudgeResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        JudgeResourceFileResponse rsp = JudgeResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return JudgeResourceFileOutcome(rsp);
        else
            return JudgeResourceFileOutcome(o.GetError());
    }
    else
    {
        return JudgeResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::JudgeResourceFileAsync(const JudgeResourceFileRequest& request, const JudgeResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->JudgeResourceFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::JudgeResourceFileOutcomeCallable WedataClient::JudgeResourceFileCallable(const JudgeResourceFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<JudgeResourceFileOutcome()>>(
        [this, request]()
        {
            return this->JudgeResourceFile(request);
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

WedataClient::ListInstancesOutcome WedataClient::ListInstances(const ListInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListInstancesResponse rsp = ListInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListInstancesOutcome(rsp);
        else
            return ListInstancesOutcome(o.GetError());
    }
    else
    {
        return ListInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListInstancesOutcomeCallable WedataClient::ListInstancesCallable(const ListInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
        [this, request]()
        {
            return this->ListInstances(request);
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

WedataClient::ReportTaskLineageOutcome WedataClient::ReportTaskLineage(const ReportTaskLineageRequest &request)
{
    auto outcome = MakeRequest(request, "ReportTaskLineage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportTaskLineageResponse rsp = ReportTaskLineageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportTaskLineageOutcome(rsp);
        else
            return ReportTaskLineageOutcome(o.GetError());
    }
    else
    {
        return ReportTaskLineageOutcome(outcome.GetError());
    }
}

void WedataClient::ReportTaskLineageAsync(const ReportTaskLineageRequest& request, const ReportTaskLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportTaskLineage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ReportTaskLineageOutcomeCallable WedataClient::ReportTaskLineageCallable(const ReportTaskLineageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportTaskLineageOutcome()>>(
        [this, request]()
        {
            return this->ReportTaskLineage(request);
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

WedataClient::TriggerManualTasksOutcome WedataClient::TriggerManualTasks(const TriggerManualTasksRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerManualTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerManualTasksResponse rsp = TriggerManualTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerManualTasksOutcome(rsp);
        else
            return TriggerManualTasksOutcome(o.GetError());
    }
    else
    {
        return TriggerManualTasksOutcome(outcome.GetError());
    }
}

void WedataClient::TriggerManualTasksAsync(const TriggerManualTasksRequest& request, const TriggerManualTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TriggerManualTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::TriggerManualTasksOutcomeCallable WedataClient::TriggerManualTasksCallable(const TriggerManualTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TriggerManualTasksOutcome()>>(
        [this, request]()
        {
            return this->TriggerManualTasks(request);
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

WedataClient::UpdateCodeTemplateOutcome WedataClient::UpdateCodeTemplate(const UpdateCodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCodeTemplateResponse rsp = UpdateCodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCodeTemplateOutcome(rsp);
        else
            return UpdateCodeTemplateOutcome(o.GetError());
    }
    else
    {
        return UpdateCodeTemplateOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateCodeTemplateAsync(const UpdateCodeTemplateRequest& request, const UpdateCodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateCodeTemplateOutcomeCallable WedataClient::UpdateCodeTemplateCallable(const UpdateCodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->UpdateCodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateDataModelRegistryInfoOutcome WedataClient::UpdateDataModelRegistryInfo(const UpdateDataModelRegistryInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataModelRegistryInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataModelRegistryInfoResponse rsp = UpdateDataModelRegistryInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataModelRegistryInfoOutcome(rsp);
        else
            return UpdateDataModelRegistryInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateDataModelRegistryInfoOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateDataModelRegistryInfoAsync(const UpdateDataModelRegistryInfoRequest& request, const UpdateDataModelRegistryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDataModelRegistryInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateDataModelRegistryInfoOutcomeCallable WedataClient::UpdateDataModelRegistryInfoCallable(const UpdateDataModelRegistryInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDataModelRegistryInfoOutcome()>>(
        [this, request]()
        {
            return this->UpdateDataModelRegistryInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateProjectUserRoleOutcome WedataClient::UpdateProjectUserRole(const UpdateProjectUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProjectUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProjectUserRoleResponse rsp = UpdateProjectUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProjectUserRoleOutcome(rsp);
        else
            return UpdateProjectUserRoleOutcome(o.GetError());
    }
    else
    {
        return UpdateProjectUserRoleOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateProjectUserRoleAsync(const UpdateProjectUserRoleRequest& request, const UpdateProjectUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateProjectUserRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateProjectUserRoleOutcomeCallable WedataClient::UpdateProjectUserRoleCallable(const UpdateProjectUserRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateProjectUserRoleOutcome()>>(
        [this, request]()
        {
            return this->UpdateProjectUserRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateWorkflowInfoOutcome WedataClient::UpdateWorkflowInfo(const UpdateWorkflowInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkflowInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkflowInfoResponse rsp = UpdateWorkflowInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkflowInfoOutcome(rsp);
        else
            return UpdateWorkflowInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkflowInfoOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateWorkflowInfoAsync(const UpdateWorkflowInfoRequest& request, const UpdateWorkflowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateWorkflowInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateWorkflowInfoOutcomeCallable WedataClient::UpdateWorkflowInfoCallable(const UpdateWorkflowInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateWorkflowInfoOutcome()>>(
        [this, request]()
        {
            return this->UpdateWorkflowInfo(request);
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


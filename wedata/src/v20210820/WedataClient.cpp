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

WedataClient::DescribeKafkaTopicInfoOutcome WedataClient::DescribeKafkaTopicInfo(const DescribeKafkaTopicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKafkaTopicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKafkaTopicInfoResponse rsp = DescribeKafkaTopicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKafkaTopicInfoOutcome(rsp);
        else
            return DescribeKafkaTopicInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeKafkaTopicInfoOutcome(outcome.GetError());
    }
}

void WedataClient::DescribeKafkaTopicInfoAsync(const DescribeKafkaTopicInfoRequest& request, const DescribeKafkaTopicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKafkaTopicInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DescribeKafkaTopicInfoOutcomeCallable WedataClient::DescribeKafkaTopicInfoCallable(const DescribeKafkaTopicInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKafkaTopicInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeKafkaTopicInfo(request);
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


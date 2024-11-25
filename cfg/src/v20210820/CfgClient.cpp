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

#include <tencentcloud/cfg/v20210820/CfgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cfg::V20210820;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-08-20";
    const string ENDPOINT = "cfg.tencentcloudapi.com";
}

CfgClient::CfgClient(const Credential &credential, const string &region) :
    CfgClient(credential, region, ClientProfile())
{
}

CfgClient::CfgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CfgClient::CreateTaskFromActionOutcome CfgClient::CreateTaskFromAction(const CreateTaskFromActionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskFromAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskFromActionResponse rsp = CreateTaskFromActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskFromActionOutcome(rsp);
        else
            return CreateTaskFromActionOutcome(o.GetError());
    }
    else
    {
        return CreateTaskFromActionOutcome(outcome.GetError());
    }
}

void CfgClient::CreateTaskFromActionAsync(const CreateTaskFromActionRequest& request, const CreateTaskFromActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskFromAction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::CreateTaskFromActionOutcomeCallable CfgClient::CreateTaskFromActionCallable(const CreateTaskFromActionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskFromActionOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskFromAction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::CreateTaskFromMultiActionOutcome CfgClient::CreateTaskFromMultiAction(const CreateTaskFromMultiActionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskFromMultiAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskFromMultiActionResponse rsp = CreateTaskFromMultiActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskFromMultiActionOutcome(rsp);
        else
            return CreateTaskFromMultiActionOutcome(o.GetError());
    }
    else
    {
        return CreateTaskFromMultiActionOutcome(outcome.GetError());
    }
}

void CfgClient::CreateTaskFromMultiActionAsync(const CreateTaskFromMultiActionRequest& request, const CreateTaskFromMultiActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskFromMultiAction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::CreateTaskFromMultiActionOutcomeCallable CfgClient::CreateTaskFromMultiActionCallable(const CreateTaskFromMultiActionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskFromMultiActionOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskFromMultiAction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::CreateTaskFromTemplateOutcome CfgClient::CreateTaskFromTemplate(const CreateTaskFromTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskFromTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskFromTemplateResponse rsp = CreateTaskFromTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskFromTemplateOutcome(rsp);
        else
            return CreateTaskFromTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateTaskFromTemplateOutcome(outcome.GetError());
    }
}

void CfgClient::CreateTaskFromTemplateAsync(const CreateTaskFromTemplateRequest& request, const CreateTaskFromTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskFromTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::CreateTaskFromTemplateOutcomeCallable CfgClient::CreateTaskFromTemplateCallable(const CreateTaskFromTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskFromTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskFromTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::DeleteTaskOutcome CfgClient::DeleteTask(const DeleteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskResponse rsp = DeleteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskOutcome(rsp);
        else
            return DeleteTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskOutcome(outcome.GetError());
    }
}

void CfgClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::DeleteTaskOutcomeCallable CfgClient::DeleteTaskCallable(const DeleteTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::DescribeActionFieldConfigListOutcome CfgClient::DescribeActionFieldConfigList(const DescribeActionFieldConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeActionFieldConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeActionFieldConfigListResponse rsp = DescribeActionFieldConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeActionFieldConfigListOutcome(rsp);
        else
            return DescribeActionFieldConfigListOutcome(o.GetError());
    }
    else
    {
        return DescribeActionFieldConfigListOutcome(outcome.GetError());
    }
}

void CfgClient::DescribeActionFieldConfigListAsync(const DescribeActionFieldConfigListRequest& request, const DescribeActionFieldConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeActionFieldConfigList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::DescribeActionFieldConfigListOutcomeCallable CfgClient::DescribeActionFieldConfigListCallable(const DescribeActionFieldConfigListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeActionFieldConfigListOutcome()>>(
        [this, request]()
        {
            return this->DescribeActionFieldConfigList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::DescribeActionLibraryListOutcome CfgClient::DescribeActionLibraryList(const DescribeActionLibraryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeActionLibraryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeActionLibraryListResponse rsp = DescribeActionLibraryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeActionLibraryListOutcome(rsp);
        else
            return DescribeActionLibraryListOutcome(o.GetError());
    }
    else
    {
        return DescribeActionLibraryListOutcome(outcome.GetError());
    }
}

void CfgClient::DescribeActionLibraryListAsync(const DescribeActionLibraryListRequest& request, const DescribeActionLibraryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeActionLibraryList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::DescribeActionLibraryListOutcomeCallable CfgClient::DescribeActionLibraryListCallable(const DescribeActionLibraryListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeActionLibraryListOutcome()>>(
        [this, request]()
        {
            return this->DescribeActionLibraryList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::DescribeObjectTypeListOutcome CfgClient::DescribeObjectTypeList(const DescribeObjectTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeObjectTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeObjectTypeListResponse rsp = DescribeObjectTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeObjectTypeListOutcome(rsp);
        else
            return DescribeObjectTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeObjectTypeListOutcome(outcome.GetError());
    }
}

void CfgClient::DescribeObjectTypeListAsync(const DescribeObjectTypeListRequest& request, const DescribeObjectTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeObjectTypeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::DescribeObjectTypeListOutcomeCallable CfgClient::DescribeObjectTypeListCallable(const DescribeObjectTypeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeObjectTypeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeObjectTypeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::DescribeTaskOutcome CfgClient::DescribeTask(const DescribeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResponse rsp = DescribeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskOutcome(rsp);
        else
            return DescribeTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskOutcome(outcome.GetError());
    }
}

void CfgClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::DescribeTaskOutcomeCallable CfgClient::DescribeTaskCallable(const DescribeTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::DescribeTaskExecuteLogsOutcome CfgClient::DescribeTaskExecuteLogs(const DescribeTaskExecuteLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskExecuteLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskExecuteLogsResponse rsp = DescribeTaskExecuteLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskExecuteLogsOutcome(rsp);
        else
            return DescribeTaskExecuteLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskExecuteLogsOutcome(outcome.GetError());
    }
}

void CfgClient::DescribeTaskExecuteLogsAsync(const DescribeTaskExecuteLogsRequest& request, const DescribeTaskExecuteLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskExecuteLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::DescribeTaskExecuteLogsOutcomeCallable CfgClient::DescribeTaskExecuteLogsCallable(const DescribeTaskExecuteLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskExecuteLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskExecuteLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::DescribeTaskListOutcome CfgClient::DescribeTaskList(const DescribeTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskListResponse rsp = DescribeTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskListOutcome(rsp);
        else
            return DescribeTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskListOutcome(outcome.GetError());
    }
}

void CfgClient::DescribeTaskListAsync(const DescribeTaskListRequest& request, const DescribeTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::DescribeTaskListOutcomeCallable CfgClient::DescribeTaskListCallable(const DescribeTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::DescribeTaskPolicyTriggerLogOutcome CfgClient::DescribeTaskPolicyTriggerLog(const DescribeTaskPolicyTriggerLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskPolicyTriggerLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskPolicyTriggerLogResponse rsp = DescribeTaskPolicyTriggerLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskPolicyTriggerLogOutcome(rsp);
        else
            return DescribeTaskPolicyTriggerLogOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskPolicyTriggerLogOutcome(outcome.GetError());
    }
}

void CfgClient::DescribeTaskPolicyTriggerLogAsync(const DescribeTaskPolicyTriggerLogRequest& request, const DescribeTaskPolicyTriggerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskPolicyTriggerLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::DescribeTaskPolicyTriggerLogOutcomeCallable CfgClient::DescribeTaskPolicyTriggerLogCallable(const DescribeTaskPolicyTriggerLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskPolicyTriggerLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskPolicyTriggerLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::DescribeTemplateOutcome CfgClient::DescribeTemplate(const DescribeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateResponse rsp = DescribeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateOutcome(rsp);
        else
            return DescribeTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateOutcome(outcome.GetError());
    }
}

void CfgClient::DescribeTemplateAsync(const DescribeTemplateRequest& request, const DescribeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::DescribeTemplateOutcomeCallable CfgClient::DescribeTemplateCallable(const DescribeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::DescribeTemplateListOutcome CfgClient::DescribeTemplateList(const DescribeTemplateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateListResponse rsp = DescribeTemplateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateListOutcome(rsp);
        else
            return DescribeTemplateListOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateListOutcome(outcome.GetError());
    }
}

void CfgClient::DescribeTemplateListAsync(const DescribeTemplateListRequest& request, const DescribeTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTemplateList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::DescribeTemplateListOutcomeCallable CfgClient::DescribeTemplateListCallable(const DescribeTemplateListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTemplateListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTemplateList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::ExecuteTaskOutcome CfgClient::ExecuteTask(const ExecuteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteTaskResponse rsp = ExecuteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteTaskOutcome(rsp);
        else
            return ExecuteTaskOutcome(o.GetError());
    }
    else
    {
        return ExecuteTaskOutcome(outcome.GetError());
    }
}

void CfgClient::ExecuteTaskAsync(const ExecuteTaskRequest& request, const ExecuteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::ExecuteTaskOutcomeCallable CfgClient::ExecuteTaskCallable(const ExecuteTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteTaskOutcome()>>(
        [this, request]()
        {
            return this->ExecuteTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::ExecuteTaskInstanceOutcome CfgClient::ExecuteTaskInstance(const ExecuteTaskInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteTaskInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteTaskInstanceResponse rsp = ExecuteTaskInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteTaskInstanceOutcome(rsp);
        else
            return ExecuteTaskInstanceOutcome(o.GetError());
    }
    else
    {
        return ExecuteTaskInstanceOutcome(outcome.GetError());
    }
}

void CfgClient::ExecuteTaskInstanceAsync(const ExecuteTaskInstanceRequest& request, const ExecuteTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteTaskInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::ExecuteTaskInstanceOutcomeCallable CfgClient::ExecuteTaskInstanceCallable(const ExecuteTaskInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteTaskInstanceOutcome()>>(
        [this, request]()
        {
            return this->ExecuteTaskInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::ModifyTaskRunStatusOutcome CfgClient::ModifyTaskRunStatus(const ModifyTaskRunStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskRunStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskRunStatusResponse rsp = ModifyTaskRunStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskRunStatusOutcome(rsp);
        else
            return ModifyTaskRunStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskRunStatusOutcome(outcome.GetError());
    }
}

void CfgClient::ModifyTaskRunStatusAsync(const ModifyTaskRunStatusRequest& request, const ModifyTaskRunStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskRunStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::ModifyTaskRunStatusOutcomeCallable CfgClient::ModifyTaskRunStatusCallable(const ModifyTaskRunStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskRunStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskRunStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfgClient::TriggerPolicyOutcome CfgClient::TriggerPolicy(const TriggerPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerPolicyResponse rsp = TriggerPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerPolicyOutcome(rsp);
        else
            return TriggerPolicyOutcome(o.GetError());
    }
    else
    {
        return TriggerPolicyOutcome(outcome.GetError());
    }
}

void CfgClient::TriggerPolicyAsync(const TriggerPolicyRequest& request, const TriggerPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TriggerPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfgClient::TriggerPolicyOutcomeCallable CfgClient::TriggerPolicyCallable(const TriggerPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TriggerPolicyOutcome()>>(
        [this, request]()
        {
            return this->TriggerPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


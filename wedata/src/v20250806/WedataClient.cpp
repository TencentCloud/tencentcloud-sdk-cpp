/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/WedataClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wedata::V20250806;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-08-06";
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


WedataClient::CreateCodeFileOutcome WedataClient::CreateCodeFile(const CreateCodeFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeFileResponse rsp = CreateCodeFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeFileOutcome(rsp);
        else
            return CreateCodeFileOutcome(o.GetError());
    }
    else
    {
        return CreateCodeFileOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCodeFileAsync(const CreateCodeFileRequest& request, const CreateCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCodeFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateCodeFileOutcomeCallable WedataClient::CreateCodeFileCallable(const CreateCodeFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCodeFileOutcome()>>(
        [this, request]()
        {
            return this->CreateCodeFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateCodeFolderOutcome WedataClient::CreateCodeFolder(const CreateCodeFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeFolderResponse rsp = CreateCodeFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeFolderOutcome(rsp);
        else
            return CreateCodeFolderOutcome(o.GetError());
    }
    else
    {
        return CreateCodeFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateCodeFolderAsync(const CreateCodeFolderRequest& request, const CreateCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCodeFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateCodeFolderOutcomeCallable WedataClient::CreateCodeFolderCallable(const CreateCodeFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCodeFolderOutcome()>>(
        [this, request]()
        {
            return this->CreateCodeFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateDataBackfillPlanOutcome WedataClient::CreateDataBackfillPlan(const CreateDataBackfillPlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataBackfillPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataBackfillPlanResponse rsp = CreateDataBackfillPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataBackfillPlanOutcome(rsp);
        else
            return CreateDataBackfillPlanOutcome(o.GetError());
    }
    else
    {
        return CreateDataBackfillPlanOutcome(outcome.GetError());
    }
}

void WedataClient::CreateDataBackfillPlanAsync(const CreateDataBackfillPlanRequest& request, const CreateDataBackfillPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataBackfillPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateDataBackfillPlanOutcomeCallable WedataClient::CreateDataBackfillPlanCallable(const CreateDataBackfillPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataBackfillPlanOutcome()>>(
        [this, request]()
        {
            return this->CreateDataBackfillPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateOpsAlarmRuleOutcome WedataClient::CreateOpsAlarmRule(const CreateOpsAlarmRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpsAlarmRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpsAlarmRuleResponse rsp = CreateOpsAlarmRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpsAlarmRuleOutcome(rsp);
        else
            return CreateOpsAlarmRuleOutcome(o.GetError());
    }
    else
    {
        return CreateOpsAlarmRuleOutcome(outcome.GetError());
    }
}

void WedataClient::CreateOpsAlarmRuleAsync(const CreateOpsAlarmRuleRequest& request, const CreateOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpsAlarmRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateOpsAlarmRuleOutcomeCallable WedataClient::CreateOpsAlarmRuleCallable(const CreateOpsAlarmRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpsAlarmRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateOpsAlarmRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateResourceFileOutcome WedataClient::CreateResourceFile(const CreateResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceFileResponse rsp = CreateResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceFileOutcome(rsp);
        else
            return CreateResourceFileOutcome(o.GetError());
    }
    else
    {
        return CreateResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::CreateResourceFileAsync(const CreateResourceFileRequest& request, const CreateResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResourceFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateResourceFileOutcomeCallable WedataClient::CreateResourceFileCallable(const CreateResourceFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResourceFileOutcome()>>(
        [this, request]()
        {
            return this->CreateResourceFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateResourceFolderOutcome WedataClient::CreateResourceFolder(const CreateResourceFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourceFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceFolderResponse rsp = CreateResourceFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceFolderOutcome(rsp);
        else
            return CreateResourceFolderOutcome(o.GetError());
    }
    else
    {
        return CreateResourceFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateResourceFolderAsync(const CreateResourceFolderRequest& request, const CreateResourceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResourceFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateResourceFolderOutcomeCallable WedataClient::CreateResourceFolderCallable(const CreateResourceFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResourceFolderOutcome()>>(
        [this, request]()
        {
            return this->CreateResourceFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateSQLFolderOutcome WedataClient::CreateSQLFolder(const CreateSQLFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSQLFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSQLFolderResponse rsp = CreateSQLFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSQLFolderOutcome(rsp);
        else
            return CreateSQLFolderOutcome(o.GetError());
    }
    else
    {
        return CreateSQLFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateSQLFolderAsync(const CreateSQLFolderRequest& request, const CreateSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSQLFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateSQLFolderOutcomeCallable WedataClient::CreateSQLFolderCallable(const CreateSQLFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSQLFolderOutcome()>>(
        [this, request]()
        {
            return this->CreateSQLFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::CreateSQLScriptOutcome WedataClient::CreateSQLScript(const CreateSQLScriptRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSQLScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSQLScriptResponse rsp = CreateSQLScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSQLScriptOutcome(rsp);
        else
            return CreateSQLScriptOutcome(o.GetError());
    }
    else
    {
        return CreateSQLScriptOutcome(outcome.GetError());
    }
}

void WedataClient::CreateSQLScriptAsync(const CreateSQLScriptRequest& request, const CreateSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSQLScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateSQLScriptOutcomeCallable WedataClient::CreateSQLScriptCallable(const CreateSQLScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSQLScriptOutcome()>>(
        [this, request]()
        {
            return this->CreateSQLScript(request);
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

WedataClient::CreateWorkflowFolderOutcome WedataClient::CreateWorkflowFolder(const CreateWorkflowFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflowFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowFolderResponse rsp = CreateWorkflowFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowFolderOutcome(rsp);
        else
            return CreateWorkflowFolderOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowFolderOutcome(outcome.GetError());
    }
}

void WedataClient::CreateWorkflowFolderAsync(const CreateWorkflowFolderRequest& request, const CreateWorkflowFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkflowFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::CreateWorkflowFolderOutcomeCallable WedataClient::CreateWorkflowFolderCallable(const CreateWorkflowFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkflowFolderOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkflowFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteCodeFileOutcome WedataClient::DeleteCodeFile(const DeleteCodeFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodeFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodeFileResponse rsp = DeleteCodeFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodeFileOutcome(rsp);
        else
            return DeleteCodeFileOutcome(o.GetError());
    }
    else
    {
        return DeleteCodeFileOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteCodeFileAsync(const DeleteCodeFileRequest& request, const DeleteCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCodeFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteCodeFileOutcomeCallable WedataClient::DeleteCodeFileCallable(const DeleteCodeFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCodeFileOutcome()>>(
        [this, request]()
        {
            return this->DeleteCodeFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteCodeFolderOutcome WedataClient::DeleteCodeFolder(const DeleteCodeFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodeFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodeFolderResponse rsp = DeleteCodeFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodeFolderOutcome(rsp);
        else
            return DeleteCodeFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteCodeFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteCodeFolderAsync(const DeleteCodeFolderRequest& request, const DeleteCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCodeFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteCodeFolderOutcomeCallable WedataClient::DeleteCodeFolderCallable(const DeleteCodeFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCodeFolderOutcome()>>(
        [this, request]()
        {
            return this->DeleteCodeFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteOpsAlarmRuleOutcome WedataClient::DeleteOpsAlarmRule(const DeleteOpsAlarmRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOpsAlarmRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOpsAlarmRuleResponse rsp = DeleteOpsAlarmRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOpsAlarmRuleOutcome(rsp);
        else
            return DeleteOpsAlarmRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteOpsAlarmRuleOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteOpsAlarmRuleAsync(const DeleteOpsAlarmRuleRequest& request, const DeleteOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOpsAlarmRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteOpsAlarmRuleOutcomeCallable WedataClient::DeleteOpsAlarmRuleCallable(const DeleteOpsAlarmRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOpsAlarmRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteOpsAlarmRule(request);
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

WedataClient::DeleteResourceFolderOutcome WedataClient::DeleteResourceFolder(const DeleteResourceFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceFolderResponse rsp = DeleteResourceFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceFolderOutcome(rsp);
        else
            return DeleteResourceFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteResourceFolderAsync(const DeleteResourceFolderRequest& request, const DeleteResourceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResourceFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteResourceFolderOutcomeCallable WedataClient::DeleteResourceFolderCallable(const DeleteResourceFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourceFolderOutcome()>>(
        [this, request]()
        {
            return this->DeleteResourceFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteSQLFolderOutcome WedataClient::DeleteSQLFolder(const DeleteSQLFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSQLFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSQLFolderResponse rsp = DeleteSQLFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSQLFolderOutcome(rsp);
        else
            return DeleteSQLFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteSQLFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteSQLFolderAsync(const DeleteSQLFolderRequest& request, const DeleteSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSQLFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteSQLFolderOutcomeCallable WedataClient::DeleteSQLFolderCallable(const DeleteSQLFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSQLFolderOutcome()>>(
        [this, request]()
        {
            return this->DeleteSQLFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteSQLScriptOutcome WedataClient::DeleteSQLScript(const DeleteSQLScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSQLScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSQLScriptResponse rsp = DeleteSQLScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSQLScriptOutcome(rsp);
        else
            return DeleteSQLScriptOutcome(o.GetError());
    }
    else
    {
        return DeleteSQLScriptOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteSQLScriptAsync(const DeleteSQLScriptRequest& request, const DeleteSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSQLScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteSQLScriptOutcomeCallable WedataClient::DeleteSQLScriptCallable(const DeleteSQLScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSQLScriptOutcome()>>(
        [this, request]()
        {
            return this->DeleteSQLScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteTaskOutcome WedataClient::DeleteTask(const DeleteTaskRequest &request)
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

void WedataClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteTaskOutcomeCallable WedataClient::DeleteTaskCallable(const DeleteTaskRequest &request)
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

WedataClient::DeleteWorkflowOutcome WedataClient::DeleteWorkflow(const DeleteWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowResponse rsp = DeleteWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowOutcome(rsp);
        else
            return DeleteWorkflowOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteWorkflowOutcomeCallable WedataClient::DeleteWorkflowCallable(const DeleteWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkflowOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::DeleteWorkflowFolderOutcome WedataClient::DeleteWorkflowFolder(const DeleteWorkflowFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflowFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowFolderResponse rsp = DeleteWorkflowFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowFolderOutcome(rsp);
        else
            return DeleteWorkflowFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowFolderOutcome(outcome.GetError());
    }
}

void WedataClient::DeleteWorkflowFolderAsync(const DeleteWorkflowFolderRequest& request, const DeleteWorkflowFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkflowFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::DeleteWorkflowFolderOutcomeCallable WedataClient::DeleteWorkflowFolderCallable(const DeleteWorkflowFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkflowFolderOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkflowFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetAlarmMessageOutcome WedataClient::GetAlarmMessage(const GetAlarmMessageRequest &request)
{
    auto outcome = MakeRequest(request, "GetAlarmMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAlarmMessageResponse rsp = GetAlarmMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAlarmMessageOutcome(rsp);
        else
            return GetAlarmMessageOutcome(o.GetError());
    }
    else
    {
        return GetAlarmMessageOutcome(outcome.GetError());
    }
}

void WedataClient::GetAlarmMessageAsync(const GetAlarmMessageRequest& request, const GetAlarmMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAlarmMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetAlarmMessageOutcomeCallable WedataClient::GetAlarmMessageCallable(const GetAlarmMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAlarmMessageOutcome()>>(
        [this, request]()
        {
            return this->GetAlarmMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetCodeFileOutcome WedataClient::GetCodeFile(const GetCodeFileRequest &request)
{
    auto outcome = MakeRequest(request, "GetCodeFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCodeFileResponse rsp = GetCodeFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCodeFileOutcome(rsp);
        else
            return GetCodeFileOutcome(o.GetError());
    }
    else
    {
        return GetCodeFileOutcome(outcome.GetError());
    }
}

void WedataClient::GetCodeFileAsync(const GetCodeFileRequest& request, const GetCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCodeFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetCodeFileOutcomeCallable WedataClient::GetCodeFileCallable(const GetCodeFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCodeFileOutcome()>>(
        [this, request]()
        {
            return this->GetCodeFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetOpsAlarmRuleOutcome WedataClient::GetOpsAlarmRule(const GetOpsAlarmRuleRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsAlarmRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsAlarmRuleResponse rsp = GetOpsAlarmRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsAlarmRuleOutcome(rsp);
        else
            return GetOpsAlarmRuleOutcome(o.GetError());
    }
    else
    {
        return GetOpsAlarmRuleOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsAlarmRuleAsync(const GetOpsAlarmRuleRequest& request, const GetOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOpsAlarmRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetOpsAlarmRuleOutcomeCallable WedataClient::GetOpsAlarmRuleCallable(const GetOpsAlarmRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOpsAlarmRuleOutcome()>>(
        [this, request]()
        {
            return this->GetOpsAlarmRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetOpsAsyncJobOutcome WedataClient::GetOpsAsyncJob(const GetOpsAsyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsAsyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsAsyncJobResponse rsp = GetOpsAsyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsAsyncJobOutcome(rsp);
        else
            return GetOpsAsyncJobOutcome(o.GetError());
    }
    else
    {
        return GetOpsAsyncJobOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsAsyncJobAsync(const GetOpsAsyncJobRequest& request, const GetOpsAsyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOpsAsyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetOpsAsyncJobOutcomeCallable WedataClient::GetOpsAsyncJobCallable(const GetOpsAsyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOpsAsyncJobOutcome()>>(
        [this, request]()
        {
            return this->GetOpsAsyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetOpsTaskOutcome WedataClient::GetOpsTask(const GetOpsTaskRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsTaskResponse rsp = GetOpsTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsTaskOutcome(rsp);
        else
            return GetOpsTaskOutcome(o.GetError());
    }
    else
    {
        return GetOpsTaskOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsTaskAsync(const GetOpsTaskRequest& request, const GetOpsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOpsTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetOpsTaskOutcomeCallable WedataClient::GetOpsTaskCallable(const GetOpsTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOpsTaskOutcome()>>(
        [this, request]()
        {
            return this->GetOpsTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetOpsTaskCodeOutcome WedataClient::GetOpsTaskCode(const GetOpsTaskCodeRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsTaskCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsTaskCodeResponse rsp = GetOpsTaskCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsTaskCodeOutcome(rsp);
        else
            return GetOpsTaskCodeOutcome(o.GetError());
    }
    else
    {
        return GetOpsTaskCodeOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsTaskCodeAsync(const GetOpsTaskCodeRequest& request, const GetOpsTaskCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOpsTaskCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetOpsTaskCodeOutcomeCallable WedataClient::GetOpsTaskCodeCallable(const GetOpsTaskCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOpsTaskCodeOutcome()>>(
        [this, request]()
        {
            return this->GetOpsTaskCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetOpsWorkflowOutcome WedataClient::GetOpsWorkflow(const GetOpsWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "GetOpsWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOpsWorkflowResponse rsp = GetOpsWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOpsWorkflowOutcome(rsp);
        else
            return GetOpsWorkflowOutcome(o.GetError());
    }
    else
    {
        return GetOpsWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::GetOpsWorkflowAsync(const GetOpsWorkflowRequest& request, const GetOpsWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOpsWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetOpsWorkflowOutcomeCallable WedataClient::GetOpsWorkflowCallable(const GetOpsWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOpsWorkflowOutcome()>>(
        [this, request]()
        {
            return this->GetOpsWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetResourceFileOutcome WedataClient::GetResourceFile(const GetResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "GetResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetResourceFileResponse rsp = GetResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetResourceFileOutcome(rsp);
        else
            return GetResourceFileOutcome(o.GetError());
    }
    else
    {
        return GetResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::GetResourceFileAsync(const GetResourceFileRequest& request, const GetResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetResourceFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetResourceFileOutcomeCallable WedataClient::GetResourceFileCallable(const GetResourceFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetResourceFileOutcome()>>(
        [this, request]()
        {
            return this->GetResourceFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetSQLScriptOutcome WedataClient::GetSQLScript(const GetSQLScriptRequest &request)
{
    auto outcome = MakeRequest(request, "GetSQLScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSQLScriptResponse rsp = GetSQLScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSQLScriptOutcome(rsp);
        else
            return GetSQLScriptOutcome(o.GetError());
    }
    else
    {
        return GetSQLScriptOutcome(outcome.GetError());
    }
}

void WedataClient::GetSQLScriptAsync(const GetSQLScriptRequest& request, const GetSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSQLScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetSQLScriptOutcomeCallable WedataClient::GetSQLScriptCallable(const GetSQLScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSQLScriptOutcome()>>(
        [this, request]()
        {
            return this->GetSQLScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetTaskOutcome WedataClient::GetTask(const GetTaskRequest &request)
{
    auto outcome = MakeRequest(request, "GetTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskResponse rsp = GetTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskOutcome(rsp);
        else
            return GetTaskOutcome(o.GetError());
    }
    else
    {
        return GetTaskOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskAsync(const GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetTaskOutcomeCallable WedataClient::GetTaskCallable(const GetTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskOutcome()>>(
        [this, request]()
        {
            return this->GetTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetTaskCodeOutcome WedataClient::GetTaskCode(const GetTaskCodeRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskCodeResponse rsp = GetTaskCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskCodeOutcome(rsp);
        else
            return GetTaskCodeOutcome(o.GetError());
    }
    else
    {
        return GetTaskCodeOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskCodeAsync(const GetTaskCodeRequest& request, const GetTaskCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetTaskCodeOutcomeCallable WedataClient::GetTaskCodeCallable(const GetTaskCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskCodeOutcome()>>(
        [this, request]()
        {
            return this->GetTaskCode(request);
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

WedataClient::GetTaskInstanceLogOutcome WedataClient::GetTaskInstanceLog(const GetTaskInstanceLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskInstanceLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskInstanceLogResponse rsp = GetTaskInstanceLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskInstanceLogOutcome(rsp);
        else
            return GetTaskInstanceLogOutcome(o.GetError());
    }
    else
    {
        return GetTaskInstanceLogOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskInstanceLogAsync(const GetTaskInstanceLogRequest& request, const GetTaskInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskInstanceLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetTaskInstanceLogOutcomeCallable WedataClient::GetTaskInstanceLogCallable(const GetTaskInstanceLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskInstanceLogOutcome()>>(
        [this, request]()
        {
            return this->GetTaskInstanceLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetTaskVersionOutcome WedataClient::GetTaskVersion(const GetTaskVersionRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskVersionResponse rsp = GetTaskVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskVersionOutcome(rsp);
        else
            return GetTaskVersionOutcome(o.GetError());
    }
    else
    {
        return GetTaskVersionOutcome(outcome.GetError());
    }
}

void WedataClient::GetTaskVersionAsync(const GetTaskVersionRequest& request, const GetTaskVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetTaskVersionOutcomeCallable WedataClient::GetTaskVersionCallable(const GetTaskVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskVersionOutcome()>>(
        [this, request]()
        {
            return this->GetTaskVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::GetWorkflowOutcome WedataClient::GetWorkflow(const GetWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "GetWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWorkflowResponse rsp = GetWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWorkflowOutcome(rsp);
        else
            return GetWorkflowOutcome(o.GetError());
    }
    else
    {
        return GetWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::GetWorkflowAsync(const GetWorkflowRequest& request, const GetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::GetWorkflowOutcomeCallable WedataClient::GetWorkflowCallable(const GetWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetWorkflowOutcome()>>(
        [this, request]()
        {
            return this->GetWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::KillTaskInstancesAsyncOutcome WedataClient::KillTaskInstancesAsync(const KillTaskInstancesAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "KillTaskInstancesAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillTaskInstancesAsyncResponse rsp = KillTaskInstancesAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillTaskInstancesAsyncOutcome(rsp);
        else
            return KillTaskInstancesAsyncOutcome(o.GetError());
    }
    else
    {
        return KillTaskInstancesAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::KillTaskInstancesAsyncAsync(const KillTaskInstancesAsyncRequest& request, const KillTaskInstancesAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KillTaskInstancesAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::KillTaskInstancesAsyncOutcomeCallable WedataClient::KillTaskInstancesAsyncCallable(const KillTaskInstancesAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KillTaskInstancesAsyncOutcome()>>(
        [this, request]()
        {
            return this->KillTaskInstancesAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListAlarmMessagesOutcome WedataClient::ListAlarmMessages(const ListAlarmMessagesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAlarmMessages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAlarmMessagesResponse rsp = ListAlarmMessagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAlarmMessagesOutcome(rsp);
        else
            return ListAlarmMessagesOutcome(o.GetError());
    }
    else
    {
        return ListAlarmMessagesOutcome(outcome.GetError());
    }
}

void WedataClient::ListAlarmMessagesAsync(const ListAlarmMessagesRequest& request, const ListAlarmMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAlarmMessages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListAlarmMessagesOutcomeCallable WedataClient::ListAlarmMessagesCallable(const ListAlarmMessagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAlarmMessagesOutcome()>>(
        [this, request]()
        {
            return this->ListAlarmMessages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListCodeFolderContentsOutcome WedataClient::ListCodeFolderContents(const ListCodeFolderContentsRequest &request)
{
    auto outcome = MakeRequest(request, "ListCodeFolderContents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCodeFolderContentsResponse rsp = ListCodeFolderContentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCodeFolderContentsOutcome(rsp);
        else
            return ListCodeFolderContentsOutcome(o.GetError());
    }
    else
    {
        return ListCodeFolderContentsOutcome(outcome.GetError());
    }
}

void WedataClient::ListCodeFolderContentsAsync(const ListCodeFolderContentsRequest& request, const ListCodeFolderContentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListCodeFolderContents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListCodeFolderContentsOutcomeCallable WedataClient::ListCodeFolderContentsCallable(const ListCodeFolderContentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListCodeFolderContentsOutcome()>>(
        [this, request]()
        {
            return this->ListCodeFolderContents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListDataBackfillInstancesOutcome WedataClient::ListDataBackfillInstances(const ListDataBackfillInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDataBackfillInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDataBackfillInstancesResponse rsp = ListDataBackfillInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDataBackfillInstancesOutcome(rsp);
        else
            return ListDataBackfillInstancesOutcome(o.GetError());
    }
    else
    {
        return ListDataBackfillInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ListDataBackfillInstancesAsync(const ListDataBackfillInstancesRequest& request, const ListDataBackfillInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDataBackfillInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListDataBackfillInstancesOutcomeCallable WedataClient::ListDataBackfillInstancesCallable(const ListDataBackfillInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDataBackfillInstancesOutcome()>>(
        [this, request]()
        {
            return this->ListDataBackfillInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListDownstreamOpsTasksOutcome WedataClient::ListDownstreamOpsTasks(const ListDownstreamOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListDownstreamOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDownstreamOpsTasksResponse rsp = ListDownstreamOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDownstreamOpsTasksOutcome(rsp);
        else
            return ListDownstreamOpsTasksOutcome(o.GetError());
    }
    else
    {
        return ListDownstreamOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListDownstreamOpsTasksAsync(const ListDownstreamOpsTasksRequest& request, const ListDownstreamOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDownstreamOpsTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListDownstreamOpsTasksOutcomeCallable WedataClient::ListDownstreamOpsTasksCallable(const ListDownstreamOpsTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDownstreamOpsTasksOutcome()>>(
        [this, request]()
        {
            return this->ListDownstreamOpsTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListDownstreamTaskInstancesOutcome WedataClient::ListDownstreamTaskInstances(const ListDownstreamTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDownstreamTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDownstreamTaskInstancesResponse rsp = ListDownstreamTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDownstreamTaskInstancesOutcome(rsp);
        else
            return ListDownstreamTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return ListDownstreamTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ListDownstreamTaskInstancesAsync(const ListDownstreamTaskInstancesRequest& request, const ListDownstreamTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDownstreamTaskInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListDownstreamTaskInstancesOutcomeCallable WedataClient::ListDownstreamTaskInstancesCallable(const ListDownstreamTaskInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDownstreamTaskInstancesOutcome()>>(
        [this, request]()
        {
            return this->ListDownstreamTaskInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListDownstreamTasksOutcome WedataClient::ListDownstreamTasks(const ListDownstreamTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListDownstreamTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDownstreamTasksResponse rsp = ListDownstreamTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDownstreamTasksOutcome(rsp);
        else
            return ListDownstreamTasksOutcome(o.GetError());
    }
    else
    {
        return ListDownstreamTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListDownstreamTasksAsync(const ListDownstreamTasksRequest& request, const ListDownstreamTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDownstreamTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListDownstreamTasksOutcomeCallable WedataClient::ListDownstreamTasksCallable(const ListDownstreamTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDownstreamTasksOutcome()>>(
        [this, request]()
        {
            return this->ListDownstreamTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListOpsAlarmRulesOutcome WedataClient::ListOpsAlarmRules(const ListOpsAlarmRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListOpsAlarmRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOpsAlarmRulesResponse rsp = ListOpsAlarmRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOpsAlarmRulesOutcome(rsp);
        else
            return ListOpsAlarmRulesOutcome(o.GetError());
    }
    else
    {
        return ListOpsAlarmRulesOutcome(outcome.GetError());
    }
}

void WedataClient::ListOpsAlarmRulesAsync(const ListOpsAlarmRulesRequest& request, const ListOpsAlarmRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOpsAlarmRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListOpsAlarmRulesOutcomeCallable WedataClient::ListOpsAlarmRulesCallable(const ListOpsAlarmRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOpsAlarmRulesOutcome()>>(
        [this, request]()
        {
            return this->ListOpsAlarmRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListOpsTasksOutcome WedataClient::ListOpsTasks(const ListOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOpsTasksResponse rsp = ListOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOpsTasksOutcome(rsp);
        else
            return ListOpsTasksOutcome(o.GetError());
    }
    else
    {
        return ListOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListOpsTasksAsync(const ListOpsTasksRequest& request, const ListOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOpsTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListOpsTasksOutcomeCallable WedataClient::ListOpsTasksCallable(const ListOpsTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOpsTasksOutcome()>>(
        [this, request]()
        {
            return this->ListOpsTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListOpsWorkflowsOutcome WedataClient::ListOpsWorkflows(const ListOpsWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "ListOpsWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOpsWorkflowsResponse rsp = ListOpsWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOpsWorkflowsOutcome(rsp);
        else
            return ListOpsWorkflowsOutcome(o.GetError());
    }
    else
    {
        return ListOpsWorkflowsOutcome(outcome.GetError());
    }
}

void WedataClient::ListOpsWorkflowsAsync(const ListOpsWorkflowsRequest& request, const ListOpsWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOpsWorkflows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListOpsWorkflowsOutcomeCallable WedataClient::ListOpsWorkflowsCallable(const ListOpsWorkflowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOpsWorkflowsOutcome()>>(
        [this, request]()
        {
            return this->ListOpsWorkflows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListResourceFilesOutcome WedataClient::ListResourceFiles(const ListResourceFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ListResourceFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListResourceFilesResponse rsp = ListResourceFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListResourceFilesOutcome(rsp);
        else
            return ListResourceFilesOutcome(o.GetError());
    }
    else
    {
        return ListResourceFilesOutcome(outcome.GetError());
    }
}

void WedataClient::ListResourceFilesAsync(const ListResourceFilesRequest& request, const ListResourceFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListResourceFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListResourceFilesOutcomeCallable WedataClient::ListResourceFilesCallable(const ListResourceFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListResourceFilesOutcome()>>(
        [this, request]()
        {
            return this->ListResourceFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListResourceFoldersOutcome WedataClient::ListResourceFolders(const ListResourceFoldersRequest &request)
{
    auto outcome = MakeRequest(request, "ListResourceFolders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListResourceFoldersResponse rsp = ListResourceFoldersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListResourceFoldersOutcome(rsp);
        else
            return ListResourceFoldersOutcome(o.GetError());
    }
    else
    {
        return ListResourceFoldersOutcome(outcome.GetError());
    }
}

void WedataClient::ListResourceFoldersAsync(const ListResourceFoldersRequest& request, const ListResourceFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListResourceFolders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListResourceFoldersOutcomeCallable WedataClient::ListResourceFoldersCallable(const ListResourceFoldersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListResourceFoldersOutcome()>>(
        [this, request]()
        {
            return this->ListResourceFolders(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListSQLFolderContentsOutcome WedataClient::ListSQLFolderContents(const ListSQLFolderContentsRequest &request)
{
    auto outcome = MakeRequest(request, "ListSQLFolderContents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSQLFolderContentsResponse rsp = ListSQLFolderContentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSQLFolderContentsOutcome(rsp);
        else
            return ListSQLFolderContentsOutcome(o.GetError());
    }
    else
    {
        return ListSQLFolderContentsOutcome(outcome.GetError());
    }
}

void WedataClient::ListSQLFolderContentsAsync(const ListSQLFolderContentsRequest& request, const ListSQLFolderContentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSQLFolderContents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListSQLFolderContentsOutcomeCallable WedataClient::ListSQLFolderContentsCallable(const ListSQLFolderContentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSQLFolderContentsOutcome()>>(
        [this, request]()
        {
            return this->ListSQLFolderContents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListSQLScriptRunsOutcome WedataClient::ListSQLScriptRuns(const ListSQLScriptRunsRequest &request)
{
    auto outcome = MakeRequest(request, "ListSQLScriptRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSQLScriptRunsResponse rsp = ListSQLScriptRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSQLScriptRunsOutcome(rsp);
        else
            return ListSQLScriptRunsOutcome(o.GetError());
    }
    else
    {
        return ListSQLScriptRunsOutcome(outcome.GetError());
    }
}

void WedataClient::ListSQLScriptRunsAsync(const ListSQLScriptRunsRequest& request, const ListSQLScriptRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSQLScriptRuns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListSQLScriptRunsOutcomeCallable WedataClient::ListSQLScriptRunsCallable(const ListSQLScriptRunsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSQLScriptRunsOutcome()>>(
        [this, request]()
        {
            return this->ListSQLScriptRuns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListTaskInstanceExecutionsOutcome WedataClient::ListTaskInstanceExecutions(const ListTaskInstanceExecutionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskInstanceExecutions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskInstanceExecutionsResponse rsp = ListTaskInstanceExecutionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskInstanceExecutionsOutcome(rsp);
        else
            return ListTaskInstanceExecutionsOutcome(o.GetError());
    }
    else
    {
        return ListTaskInstanceExecutionsOutcome(outcome.GetError());
    }
}

void WedataClient::ListTaskInstanceExecutionsAsync(const ListTaskInstanceExecutionsRequest& request, const ListTaskInstanceExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTaskInstanceExecutions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListTaskInstanceExecutionsOutcomeCallable WedataClient::ListTaskInstanceExecutionsCallable(const ListTaskInstanceExecutionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTaskInstanceExecutionsOutcome()>>(
        [this, request]()
        {
            return this->ListTaskInstanceExecutions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListTaskInstancesOutcome WedataClient::ListTaskInstances(const ListTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskInstancesResponse rsp = ListTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskInstancesOutcome(rsp);
        else
            return ListTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return ListTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ListTaskInstancesAsync(const ListTaskInstancesRequest& request, const ListTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTaskInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListTaskInstancesOutcomeCallable WedataClient::ListTaskInstancesCallable(const ListTaskInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTaskInstancesOutcome()>>(
        [this, request]()
        {
            return this->ListTaskInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListTaskVersionsOutcome WedataClient::ListTaskVersions(const ListTaskVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskVersionsResponse rsp = ListTaskVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskVersionsOutcome(rsp);
        else
            return ListTaskVersionsOutcome(o.GetError());
    }
    else
    {
        return ListTaskVersionsOutcome(outcome.GetError());
    }
}

void WedataClient::ListTaskVersionsAsync(const ListTaskVersionsRequest& request, const ListTaskVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTaskVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListTaskVersionsOutcomeCallable WedataClient::ListTaskVersionsCallable(const ListTaskVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTaskVersionsOutcome()>>(
        [this, request]()
        {
            return this->ListTaskVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListTasksOutcome WedataClient::ListTasks(const ListTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTasksResponse rsp = ListTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTasksOutcome(rsp);
        else
            return ListTasksOutcome(o.GetError());
    }
    else
    {
        return ListTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListTasksOutcomeCallable WedataClient::ListTasksCallable(const ListTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTasksOutcome()>>(
        [this, request]()
        {
            return this->ListTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListUpstreamOpsTasksOutcome WedataClient::ListUpstreamOpsTasks(const ListUpstreamOpsTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListUpstreamOpsTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUpstreamOpsTasksResponse rsp = ListUpstreamOpsTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUpstreamOpsTasksOutcome(rsp);
        else
            return ListUpstreamOpsTasksOutcome(o.GetError());
    }
    else
    {
        return ListUpstreamOpsTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListUpstreamOpsTasksAsync(const ListUpstreamOpsTasksRequest& request, const ListUpstreamOpsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUpstreamOpsTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListUpstreamOpsTasksOutcomeCallable WedataClient::ListUpstreamOpsTasksCallable(const ListUpstreamOpsTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUpstreamOpsTasksOutcome()>>(
        [this, request]()
        {
            return this->ListUpstreamOpsTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListUpstreamTaskInstancesOutcome WedataClient::ListUpstreamTaskInstances(const ListUpstreamTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListUpstreamTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUpstreamTaskInstancesResponse rsp = ListUpstreamTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUpstreamTaskInstancesOutcome(rsp);
        else
            return ListUpstreamTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return ListUpstreamTaskInstancesOutcome(outcome.GetError());
    }
}

void WedataClient::ListUpstreamTaskInstancesAsync(const ListUpstreamTaskInstancesRequest& request, const ListUpstreamTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUpstreamTaskInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListUpstreamTaskInstancesOutcomeCallable WedataClient::ListUpstreamTaskInstancesCallable(const ListUpstreamTaskInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUpstreamTaskInstancesOutcome()>>(
        [this, request]()
        {
            return this->ListUpstreamTaskInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListUpstreamTasksOutcome WedataClient::ListUpstreamTasks(const ListUpstreamTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListUpstreamTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUpstreamTasksResponse rsp = ListUpstreamTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUpstreamTasksOutcome(rsp);
        else
            return ListUpstreamTasksOutcome(o.GetError());
    }
    else
    {
        return ListUpstreamTasksOutcome(outcome.GetError());
    }
}

void WedataClient::ListUpstreamTasksAsync(const ListUpstreamTasksRequest& request, const ListUpstreamTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUpstreamTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListUpstreamTasksOutcomeCallable WedataClient::ListUpstreamTasksCallable(const ListUpstreamTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUpstreamTasksOutcome()>>(
        [this, request]()
        {
            return this->ListUpstreamTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListWorkflowFoldersOutcome WedataClient::ListWorkflowFolders(const ListWorkflowFoldersRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflowFolders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowFoldersResponse rsp = ListWorkflowFoldersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowFoldersOutcome(rsp);
        else
            return ListWorkflowFoldersOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowFoldersOutcome(outcome.GetError());
    }
}

void WedataClient::ListWorkflowFoldersAsync(const ListWorkflowFoldersRequest& request, const ListWorkflowFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListWorkflowFolders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListWorkflowFoldersOutcomeCallable WedataClient::ListWorkflowFoldersCallable(const ListWorkflowFoldersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListWorkflowFoldersOutcome()>>(
        [this, request]()
        {
            return this->ListWorkflowFolders(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::ListWorkflowsOutcome WedataClient::ListWorkflows(const ListWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowsResponse rsp = ListWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowsOutcome(rsp);
        else
            return ListWorkflowsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowsOutcome(outcome.GetError());
    }
}

void WedataClient::ListWorkflowsAsync(const ListWorkflowsRequest& request, const ListWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListWorkflows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::ListWorkflowsOutcomeCallable WedataClient::ListWorkflowsCallable(const ListWorkflowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListWorkflowsOutcome()>>(
        [this, request]()
        {
            return this->ListWorkflows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::PauseOpsTasksAsyncOutcome WedataClient::PauseOpsTasksAsync(const PauseOpsTasksAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "PauseOpsTasksAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseOpsTasksAsyncResponse rsp = PauseOpsTasksAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseOpsTasksAsyncOutcome(rsp);
        else
            return PauseOpsTasksAsyncOutcome(o.GetError());
    }
    else
    {
        return PauseOpsTasksAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::PauseOpsTasksAsyncAsync(const PauseOpsTasksAsyncRequest& request, const PauseOpsTasksAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PauseOpsTasksAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::PauseOpsTasksAsyncOutcomeCallable WedataClient::PauseOpsTasksAsyncCallable(const PauseOpsTasksAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PauseOpsTasksAsyncOutcome()>>(
        [this, request]()
        {
            return this->PauseOpsTasksAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RerunTaskInstancesAsyncOutcome WedataClient::RerunTaskInstancesAsync(const RerunTaskInstancesAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "RerunTaskInstancesAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RerunTaskInstancesAsyncResponse rsp = RerunTaskInstancesAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RerunTaskInstancesAsyncOutcome(rsp);
        else
            return RerunTaskInstancesAsyncOutcome(o.GetError());
    }
    else
    {
        return RerunTaskInstancesAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::RerunTaskInstancesAsyncAsync(const RerunTaskInstancesAsyncRequest& request, const RerunTaskInstancesAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RerunTaskInstancesAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RerunTaskInstancesAsyncOutcomeCallable WedataClient::RerunTaskInstancesAsyncCallable(const RerunTaskInstancesAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RerunTaskInstancesAsyncOutcome()>>(
        [this, request]()
        {
            return this->RerunTaskInstancesAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::RunSQLScriptOutcome WedataClient::RunSQLScript(const RunSQLScriptRequest &request)
{
    auto outcome = MakeRequest(request, "RunSQLScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunSQLScriptResponse rsp = RunSQLScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunSQLScriptOutcome(rsp);
        else
            return RunSQLScriptOutcome(o.GetError());
    }
    else
    {
        return RunSQLScriptOutcome(outcome.GetError());
    }
}

void WedataClient::RunSQLScriptAsync(const RunSQLScriptRequest& request, const RunSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunSQLScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::RunSQLScriptOutcomeCallable WedataClient::RunSQLScriptCallable(const RunSQLScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunSQLScriptOutcome()>>(
        [this, request]()
        {
            return this->RunSQLScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::SetSuccessTaskInstancesAsyncOutcome WedataClient::SetSuccessTaskInstancesAsync(const SetSuccessTaskInstancesAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "SetSuccessTaskInstancesAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetSuccessTaskInstancesAsyncResponse rsp = SetSuccessTaskInstancesAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetSuccessTaskInstancesAsyncOutcome(rsp);
        else
            return SetSuccessTaskInstancesAsyncOutcome(o.GetError());
    }
    else
    {
        return SetSuccessTaskInstancesAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::SetSuccessTaskInstancesAsyncAsync(const SetSuccessTaskInstancesAsyncRequest& request, const SetSuccessTaskInstancesAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetSuccessTaskInstancesAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::SetSuccessTaskInstancesAsyncOutcomeCallable WedataClient::SetSuccessTaskInstancesAsyncCallable(const SetSuccessTaskInstancesAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetSuccessTaskInstancesAsyncOutcome()>>(
        [this, request]()
        {
            return this->SetSuccessTaskInstancesAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::StopOpsTasksAsyncOutcome WedataClient::StopOpsTasksAsync(const StopOpsTasksAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "StopOpsTasksAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopOpsTasksAsyncResponse rsp = StopOpsTasksAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopOpsTasksAsyncOutcome(rsp);
        else
            return StopOpsTasksAsyncOutcome(o.GetError());
    }
    else
    {
        return StopOpsTasksAsyncOutcome(outcome.GetError());
    }
}

void WedataClient::StopOpsTasksAsyncAsync(const StopOpsTasksAsyncRequest& request, const StopOpsTasksAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopOpsTasksAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::StopOpsTasksAsyncOutcomeCallable WedataClient::StopOpsTasksAsyncCallable(const StopOpsTasksAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopOpsTasksAsyncOutcome()>>(
        [this, request]()
        {
            return this->StopOpsTasksAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::StopSQLScriptRunOutcome WedataClient::StopSQLScriptRun(const StopSQLScriptRunRequest &request)
{
    auto outcome = MakeRequest(request, "StopSQLScriptRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSQLScriptRunResponse rsp = StopSQLScriptRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSQLScriptRunOutcome(rsp);
        else
            return StopSQLScriptRunOutcome(o.GetError());
    }
    else
    {
        return StopSQLScriptRunOutcome(outcome.GetError());
    }
}

void WedataClient::StopSQLScriptRunAsync(const StopSQLScriptRunRequest& request, const StopSQLScriptRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopSQLScriptRun(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::StopSQLScriptRunOutcomeCallable WedataClient::StopSQLScriptRunCallable(const StopSQLScriptRunRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopSQLScriptRunOutcome()>>(
        [this, request]()
        {
            return this->StopSQLScriptRun(request);
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

WedataClient::UpdateCodeFileOutcome WedataClient::UpdateCodeFile(const UpdateCodeFileRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCodeFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCodeFileResponse rsp = UpdateCodeFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCodeFileOutcome(rsp);
        else
            return UpdateCodeFileOutcome(o.GetError());
    }
    else
    {
        return UpdateCodeFileOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateCodeFileAsync(const UpdateCodeFileRequest& request, const UpdateCodeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCodeFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateCodeFileOutcomeCallable WedataClient::UpdateCodeFileCallable(const UpdateCodeFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCodeFileOutcome()>>(
        [this, request]()
        {
            return this->UpdateCodeFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateCodeFolderOutcome WedataClient::UpdateCodeFolder(const UpdateCodeFolderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCodeFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCodeFolderResponse rsp = UpdateCodeFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCodeFolderOutcome(rsp);
        else
            return UpdateCodeFolderOutcome(o.GetError());
    }
    else
    {
        return UpdateCodeFolderOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateCodeFolderAsync(const UpdateCodeFolderRequest& request, const UpdateCodeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCodeFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateCodeFolderOutcomeCallable WedataClient::UpdateCodeFolderCallable(const UpdateCodeFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCodeFolderOutcome()>>(
        [this, request]()
        {
            return this->UpdateCodeFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateOpsAlarmRuleOutcome WedataClient::UpdateOpsAlarmRule(const UpdateOpsAlarmRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOpsAlarmRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOpsAlarmRuleResponse rsp = UpdateOpsAlarmRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOpsAlarmRuleOutcome(rsp);
        else
            return UpdateOpsAlarmRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateOpsAlarmRuleOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateOpsAlarmRuleAsync(const UpdateOpsAlarmRuleRequest& request, const UpdateOpsAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateOpsAlarmRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateOpsAlarmRuleOutcomeCallable WedataClient::UpdateOpsAlarmRuleCallable(const UpdateOpsAlarmRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateOpsAlarmRuleOutcome()>>(
        [this, request]()
        {
            return this->UpdateOpsAlarmRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateOpsTasksOwnerOutcome WedataClient::UpdateOpsTasksOwner(const UpdateOpsTasksOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOpsTasksOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOpsTasksOwnerResponse rsp = UpdateOpsTasksOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOpsTasksOwnerOutcome(rsp);
        else
            return UpdateOpsTasksOwnerOutcome(o.GetError());
    }
    else
    {
        return UpdateOpsTasksOwnerOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateOpsTasksOwnerAsync(const UpdateOpsTasksOwnerRequest& request, const UpdateOpsTasksOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateOpsTasksOwner(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateOpsTasksOwnerOutcomeCallable WedataClient::UpdateOpsTasksOwnerCallable(const UpdateOpsTasksOwnerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateOpsTasksOwnerOutcome()>>(
        [this, request]()
        {
            return this->UpdateOpsTasksOwner(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateResourceFileOutcome WedataClient::UpdateResourceFile(const UpdateResourceFileRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateResourceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateResourceFileResponse rsp = UpdateResourceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateResourceFileOutcome(rsp);
        else
            return UpdateResourceFileOutcome(o.GetError());
    }
    else
    {
        return UpdateResourceFileOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateResourceFileAsync(const UpdateResourceFileRequest& request, const UpdateResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateResourceFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateResourceFileOutcomeCallable WedataClient::UpdateResourceFileCallable(const UpdateResourceFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateResourceFileOutcome()>>(
        [this, request]()
        {
            return this->UpdateResourceFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateResourceFolderOutcome WedataClient::UpdateResourceFolder(const UpdateResourceFolderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateResourceFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateResourceFolderResponse rsp = UpdateResourceFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateResourceFolderOutcome(rsp);
        else
            return UpdateResourceFolderOutcome(o.GetError());
    }
    else
    {
        return UpdateResourceFolderOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateResourceFolderAsync(const UpdateResourceFolderRequest& request, const UpdateResourceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateResourceFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateResourceFolderOutcomeCallable WedataClient::UpdateResourceFolderCallable(const UpdateResourceFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateResourceFolderOutcome()>>(
        [this, request]()
        {
            return this->UpdateResourceFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateSQLFolderOutcome WedataClient::UpdateSQLFolder(const UpdateSQLFolderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSQLFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSQLFolderResponse rsp = UpdateSQLFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSQLFolderOutcome(rsp);
        else
            return UpdateSQLFolderOutcome(o.GetError());
    }
    else
    {
        return UpdateSQLFolderOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateSQLFolderAsync(const UpdateSQLFolderRequest& request, const UpdateSQLFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateSQLFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateSQLFolderOutcomeCallable WedataClient::UpdateSQLFolderCallable(const UpdateSQLFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateSQLFolderOutcome()>>(
        [this, request]()
        {
            return this->UpdateSQLFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateSQLScriptOutcome WedataClient::UpdateSQLScript(const UpdateSQLScriptRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSQLScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSQLScriptResponse rsp = UpdateSQLScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSQLScriptOutcome(rsp);
        else
            return UpdateSQLScriptOutcome(o.GetError());
    }
    else
    {
        return UpdateSQLScriptOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateSQLScriptAsync(const UpdateSQLScriptRequest& request, const UpdateSQLScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateSQLScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateSQLScriptOutcomeCallable WedataClient::UpdateSQLScriptCallable(const UpdateSQLScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateSQLScriptOutcome()>>(
        [this, request]()
        {
            return this->UpdateSQLScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateTaskOutcome WedataClient::UpdateTask(const UpdateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTaskResponse rsp = UpdateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTaskOutcome(rsp);
        else
            return UpdateTaskOutcome(o.GetError());
    }
    else
    {
        return UpdateTaskOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateTaskAsync(const UpdateTaskRequest& request, const UpdateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateTaskOutcomeCallable WedataClient::UpdateTaskCallable(const UpdateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateTaskOutcome()>>(
        [this, request]()
        {
            return this->UpdateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateWorkflowOutcome WedataClient::UpdateWorkflow(const UpdateWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkflowResponse rsp = UpdateWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkflowOutcome(rsp);
        else
            return UpdateWorkflowOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkflowOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateWorkflowAsync(const UpdateWorkflowRequest& request, const UpdateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateWorkflowOutcomeCallable WedataClient::UpdateWorkflowCallable(const UpdateWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateWorkflowOutcome()>>(
        [this, request]()
        {
            return this->UpdateWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WedataClient::UpdateWorkflowFolderOutcome WedataClient::UpdateWorkflowFolder(const UpdateWorkflowFolderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkflowFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkflowFolderResponse rsp = UpdateWorkflowFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkflowFolderOutcome(rsp);
        else
            return UpdateWorkflowFolderOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkflowFolderOutcome(outcome.GetError());
    }
}

void WedataClient::UpdateWorkflowFolderAsync(const UpdateWorkflowFolderRequest& request, const UpdateWorkflowFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateWorkflowFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WedataClient::UpdateWorkflowFolderOutcomeCallable WedataClient::UpdateWorkflowFolderCallable(const UpdateWorkflowFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateWorkflowFolderOutcome()>>(
        [this, request]()
        {
            return this->UpdateWorkflowFolder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


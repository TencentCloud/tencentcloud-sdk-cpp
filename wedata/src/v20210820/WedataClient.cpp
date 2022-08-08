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


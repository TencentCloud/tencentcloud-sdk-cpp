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

#include <tencentcloud/cat/v20180409/CatClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cat::V20180409;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-09";
    const string ENDPOINT = "cat.tencentcloudapi.com";
}

CatClient::CatClient(const Credential &credential, const string &region) :
    CatClient(credential, region, ClientProfile())
{
}

CatClient::CatClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CatClient::BindAlarmPolicyOutcome CatClient::BindAlarmPolicy(const BindAlarmPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "BindAlarmPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAlarmPolicyResponse rsp = BindAlarmPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAlarmPolicyOutcome(rsp);
        else
            return BindAlarmPolicyOutcome(o.GetError());
    }
    else
    {
        return BindAlarmPolicyOutcome(outcome.GetError());
    }
}

void CatClient::BindAlarmPolicyAsync(const BindAlarmPolicyRequest& request, const BindAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindAlarmPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::BindAlarmPolicyOutcomeCallable CatClient::BindAlarmPolicyCallable(const BindAlarmPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindAlarmPolicyOutcome()>>(
        [this, request]()
        {
            return this->BindAlarmPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::CreateAgentGroupOutcome CatClient::CreateAgentGroup(const CreateAgentGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentGroupResponse rsp = CreateAgentGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentGroupOutcome(rsp);
        else
            return CreateAgentGroupOutcome(o.GetError());
    }
    else
    {
        return CreateAgentGroupOutcome(outcome.GetError());
    }
}

void CatClient::CreateAgentGroupAsync(const CreateAgentGroupRequest& request, const CreateAgentGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAgentGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::CreateAgentGroupOutcomeCallable CatClient::CreateAgentGroupCallable(const CreateAgentGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAgentGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateAgentGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::CreateProbeTasksOutcome CatClient::CreateProbeTasks(const CreateProbeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProbeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProbeTasksResponse rsp = CreateProbeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProbeTasksOutcome(rsp);
        else
            return CreateProbeTasksOutcome(o.GetError());
    }
    else
    {
        return CreateProbeTasksOutcome(outcome.GetError());
    }
}

void CatClient::CreateProbeTasksAsync(const CreateProbeTasksRequest& request, const CreateProbeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProbeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::CreateProbeTasksOutcomeCallable CatClient::CreateProbeTasksCallable(const CreateProbeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProbeTasksOutcome()>>(
        [this, request]()
        {
            return this->CreateProbeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::CreateTaskExOutcome CatClient::CreateTaskEx(const CreateTaskExRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskEx");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskExResponse rsp = CreateTaskExResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskExOutcome(rsp);
        else
            return CreateTaskExOutcome(o.GetError());
    }
    else
    {
        return CreateTaskExOutcome(outcome.GetError());
    }
}

void CatClient::CreateTaskExAsync(const CreateTaskExRequest& request, const CreateTaskExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskEx(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::CreateTaskExOutcomeCallable CatClient::CreateTaskExCallable(const CreateTaskExRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskExOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskEx(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DeleteAgentGroupOutcome CatClient::DeleteAgentGroup(const DeleteAgentGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAgentGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAgentGroupResponse rsp = DeleteAgentGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAgentGroupOutcome(rsp);
        else
            return DeleteAgentGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteAgentGroupOutcome(outcome.GetError());
    }
}

void CatClient::DeleteAgentGroupAsync(const DeleteAgentGroupRequest& request, const DeleteAgentGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAgentGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DeleteAgentGroupOutcomeCallable CatClient::DeleteAgentGroupCallable(const DeleteAgentGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAgentGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteAgentGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DeleteProbeTaskOutcome CatClient::DeleteProbeTask(const DeleteProbeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProbeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProbeTaskResponse rsp = DeleteProbeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProbeTaskOutcome(rsp);
        else
            return DeleteProbeTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteProbeTaskOutcome(outcome.GetError());
    }
}

void CatClient::DeleteProbeTaskAsync(const DeleteProbeTaskRequest& request, const DeleteProbeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProbeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DeleteProbeTaskOutcomeCallable CatClient::DeleteProbeTaskCallable(const DeleteProbeTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProbeTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteProbeTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DeleteTasksOutcome CatClient::DeleteTasks(const DeleteTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTasksResponse rsp = DeleteTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTasksOutcome(rsp);
        else
            return DeleteTasksOutcome(o.GetError());
    }
    else
    {
        return DeleteTasksOutcome(outcome.GetError());
    }
}

void CatClient::DeleteTasksAsync(const DeleteTasksRequest& request, const DeleteTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DeleteTasksOutcomeCallable CatClient::DeleteTasksCallable(const DeleteTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTasksOutcome()>>(
        [this, request]()
        {
            return this->DeleteTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeAgentGroupsOutcome CatClient::DescribeAgentGroups(const DescribeAgentGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentGroupsResponse rsp = DescribeAgentGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentGroupsOutcome(rsp);
        else
            return DescribeAgentGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentGroupsOutcome(outcome.GetError());
    }
}

void CatClient::DescribeAgentGroupsAsync(const DescribeAgentGroupsRequest& request, const DescribeAgentGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeAgentGroupsOutcomeCallable CatClient::DescribeAgentGroupsCallable(const DescribeAgentGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeAgentsOutcome CatClient::DescribeAgents(const DescribeAgentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentsResponse rsp = DescribeAgentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentsOutcome(rsp);
        else
            return DescribeAgentsOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentsOutcome(outcome.GetError());
    }
}

void CatClient::DescribeAgentsAsync(const DescribeAgentsRequest& request, const DescribeAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeAgentsOutcomeCallable CatClient::DescribeAgentsCallable(const DescribeAgentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeAlarmTopicOutcome CatClient::DescribeAlarmTopic(const DescribeAlarmTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmTopicResponse rsp = DescribeAlarmTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmTopicOutcome(rsp);
        else
            return DescribeAlarmTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmTopicOutcome(outcome.GetError());
    }
}

void CatClient::DescribeAlarmTopicAsync(const DescribeAlarmTopicRequest& request, const DescribeAlarmTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeAlarmTopicOutcomeCallable CatClient::DescribeAlarmTopicCallable(const DescribeAlarmTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmTopicOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeAlarmsOutcome CatClient::DescribeAlarms(const DescribeAlarmsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmsResponse rsp = DescribeAlarmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmsOutcome(rsp);
        else
            return DescribeAlarmsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmsOutcome(outcome.GetError());
    }
}

void CatClient::DescribeAlarmsAsync(const DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeAlarmsOutcomeCallable CatClient::DescribeAlarmsCallable(const DescribeAlarmsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeAlarmsByTaskOutcome CatClient::DescribeAlarmsByTask(const DescribeAlarmsByTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmsByTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmsByTaskResponse rsp = DescribeAlarmsByTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmsByTaskOutcome(rsp);
        else
            return DescribeAlarmsByTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmsByTaskOutcome(outcome.GetError());
    }
}

void CatClient::DescribeAlarmsByTaskAsync(const DescribeAlarmsByTaskRequest& request, const DescribeAlarmsByTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmsByTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeAlarmsByTaskOutcomeCallable CatClient::DescribeAlarmsByTaskCallable(const DescribeAlarmsByTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmsByTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmsByTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeCatLogsOutcome CatClient::DescribeCatLogs(const DescribeCatLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCatLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCatLogsResponse rsp = DescribeCatLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCatLogsOutcome(rsp);
        else
            return DescribeCatLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeCatLogsOutcome(outcome.GetError());
    }
}

void CatClient::DescribeCatLogsAsync(const DescribeCatLogsRequest& request, const DescribeCatLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCatLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeCatLogsOutcomeCallable CatClient::DescribeCatLogsCallable(const DescribeCatLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCatLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCatLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeDetailedSingleProbeDataOutcome CatClient::DescribeDetailedSingleProbeData(const DescribeDetailedSingleProbeDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDetailedSingleProbeData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDetailedSingleProbeDataResponse rsp = DescribeDetailedSingleProbeDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDetailedSingleProbeDataOutcome(rsp);
        else
            return DescribeDetailedSingleProbeDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDetailedSingleProbeDataOutcome(outcome.GetError());
    }
}

void CatClient::DescribeDetailedSingleProbeDataAsync(const DescribeDetailedSingleProbeDataRequest& request, const DescribeDetailedSingleProbeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDetailedSingleProbeData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeDetailedSingleProbeDataOutcomeCallable CatClient::DescribeDetailedSingleProbeDataCallable(const DescribeDetailedSingleProbeDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDetailedSingleProbeDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDetailedSingleProbeData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeProbeNodesOutcome CatClient::DescribeProbeNodes(const DescribeProbeNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProbeNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProbeNodesResponse rsp = DescribeProbeNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProbeNodesOutcome(rsp);
        else
            return DescribeProbeNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeProbeNodesOutcome(outcome.GetError());
    }
}

void CatClient::DescribeProbeNodesAsync(const DescribeProbeNodesRequest& request, const DescribeProbeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProbeNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeProbeNodesOutcomeCallable CatClient::DescribeProbeNodesCallable(const DescribeProbeNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProbeNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeProbeNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeProbeTasksOutcome CatClient::DescribeProbeTasks(const DescribeProbeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProbeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProbeTasksResponse rsp = DescribeProbeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProbeTasksOutcome(rsp);
        else
            return DescribeProbeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeProbeTasksOutcome(outcome.GetError());
    }
}

void CatClient::DescribeProbeTasksAsync(const DescribeProbeTasksRequest& request, const DescribeProbeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProbeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeProbeTasksOutcomeCallable CatClient::DescribeProbeTasksCallable(const DescribeProbeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProbeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeProbeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeTaskDetailOutcome CatClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
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

void CatClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeTaskDetailOutcomeCallable CatClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
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

CatClient::DescribeTasksByTypeOutcome CatClient::DescribeTasksByType(const DescribeTasksByTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksByType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksByTypeResponse rsp = DescribeTasksByTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksByTypeOutcome(rsp);
        else
            return DescribeTasksByTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksByTypeOutcome(outcome.GetError());
    }
}

void CatClient::DescribeTasksByTypeAsync(const DescribeTasksByTypeRequest& request, const DescribeTasksByTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasksByType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeTasksByTypeOutcomeCallable CatClient::DescribeTasksByTypeCallable(const DescribeTasksByTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksByTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasksByType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::DescribeUserLimitOutcome CatClient::DescribeUserLimit(const DescribeUserLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserLimitResponse rsp = DescribeUserLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserLimitOutcome(rsp);
        else
            return DescribeUserLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeUserLimitOutcome(outcome.GetError());
    }
}

void CatClient::DescribeUserLimitAsync(const DescribeUserLimitRequest& request, const DescribeUserLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeUserLimitOutcomeCallable CatClient::DescribeUserLimitCallable(const DescribeUserLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::GetAvailRatioHistoryOutcome CatClient::GetAvailRatioHistory(const GetAvailRatioHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "GetAvailRatioHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAvailRatioHistoryResponse rsp = GetAvailRatioHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAvailRatioHistoryOutcome(rsp);
        else
            return GetAvailRatioHistoryOutcome(o.GetError());
    }
    else
    {
        return GetAvailRatioHistoryOutcome(outcome.GetError());
    }
}

void CatClient::GetAvailRatioHistoryAsync(const GetAvailRatioHistoryRequest& request, const GetAvailRatioHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAvailRatioHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::GetAvailRatioHistoryOutcomeCallable CatClient::GetAvailRatioHistoryCallable(const GetAvailRatioHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAvailRatioHistoryOutcome()>>(
        [this, request]()
        {
            return this->GetAvailRatioHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::GetDailyAvailRatioOutcome CatClient::GetDailyAvailRatio(const GetDailyAvailRatioRequest &request)
{
    auto outcome = MakeRequest(request, "GetDailyAvailRatio");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDailyAvailRatioResponse rsp = GetDailyAvailRatioResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDailyAvailRatioOutcome(rsp);
        else
            return GetDailyAvailRatioOutcome(o.GetError());
    }
    else
    {
        return GetDailyAvailRatioOutcome(outcome.GetError());
    }
}

void CatClient::GetDailyAvailRatioAsync(const GetDailyAvailRatioRequest& request, const GetDailyAvailRatioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDailyAvailRatio(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::GetDailyAvailRatioOutcomeCallable CatClient::GetDailyAvailRatioCallable(const GetDailyAvailRatioRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDailyAvailRatioOutcome()>>(
        [this, request]()
        {
            return this->GetDailyAvailRatio(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::GetRealAvailRatioOutcome CatClient::GetRealAvailRatio(const GetRealAvailRatioRequest &request)
{
    auto outcome = MakeRequest(request, "GetRealAvailRatio");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRealAvailRatioResponse rsp = GetRealAvailRatioResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRealAvailRatioOutcome(rsp);
        else
            return GetRealAvailRatioOutcome(o.GetError());
    }
    else
    {
        return GetRealAvailRatioOutcome(outcome.GetError());
    }
}

void CatClient::GetRealAvailRatioAsync(const GetRealAvailRatioRequest& request, const GetRealAvailRatioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRealAvailRatio(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::GetRealAvailRatioOutcomeCallable CatClient::GetRealAvailRatioCallable(const GetRealAvailRatioRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRealAvailRatioOutcome()>>(
        [this, request]()
        {
            return this->GetRealAvailRatio(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::GetRespTimeTrendExOutcome CatClient::GetRespTimeTrendEx(const GetRespTimeTrendExRequest &request)
{
    auto outcome = MakeRequest(request, "GetRespTimeTrendEx");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRespTimeTrendExResponse rsp = GetRespTimeTrendExResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRespTimeTrendExOutcome(rsp);
        else
            return GetRespTimeTrendExOutcome(o.GetError());
    }
    else
    {
        return GetRespTimeTrendExOutcome(outcome.GetError());
    }
}

void CatClient::GetRespTimeTrendExAsync(const GetRespTimeTrendExRequest& request, const GetRespTimeTrendExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRespTimeTrendEx(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::GetRespTimeTrendExOutcomeCallable CatClient::GetRespTimeTrendExCallable(const GetRespTimeTrendExRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRespTimeTrendExOutcome()>>(
        [this, request]()
        {
            return this->GetRespTimeTrendEx(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::GetResultSummaryOutcome CatClient::GetResultSummary(const GetResultSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "GetResultSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetResultSummaryResponse rsp = GetResultSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetResultSummaryOutcome(rsp);
        else
            return GetResultSummaryOutcome(o.GetError());
    }
    else
    {
        return GetResultSummaryOutcome(outcome.GetError());
    }
}

void CatClient::GetResultSummaryAsync(const GetResultSummaryRequest& request, const GetResultSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetResultSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::GetResultSummaryOutcomeCallable CatClient::GetResultSummaryCallable(const GetResultSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetResultSummaryOutcome()>>(
        [this, request]()
        {
            return this->GetResultSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::GetReturnCodeHistoryOutcome CatClient::GetReturnCodeHistory(const GetReturnCodeHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "GetReturnCodeHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetReturnCodeHistoryResponse rsp = GetReturnCodeHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetReturnCodeHistoryOutcome(rsp);
        else
            return GetReturnCodeHistoryOutcome(o.GetError());
    }
    else
    {
        return GetReturnCodeHistoryOutcome(outcome.GetError());
    }
}

void CatClient::GetReturnCodeHistoryAsync(const GetReturnCodeHistoryRequest& request, const GetReturnCodeHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetReturnCodeHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::GetReturnCodeHistoryOutcomeCallable CatClient::GetReturnCodeHistoryCallable(const GetReturnCodeHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetReturnCodeHistoryOutcome()>>(
        [this, request]()
        {
            return this->GetReturnCodeHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::GetReturnCodeInfoOutcome CatClient::GetReturnCodeInfo(const GetReturnCodeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetReturnCodeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetReturnCodeInfoResponse rsp = GetReturnCodeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetReturnCodeInfoOutcome(rsp);
        else
            return GetReturnCodeInfoOutcome(o.GetError());
    }
    else
    {
        return GetReturnCodeInfoOutcome(outcome.GetError());
    }
}

void CatClient::GetReturnCodeInfoAsync(const GetReturnCodeInfoRequest& request, const GetReturnCodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetReturnCodeInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::GetReturnCodeInfoOutcomeCallable CatClient::GetReturnCodeInfoCallable(const GetReturnCodeInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetReturnCodeInfoOutcome()>>(
        [this, request]()
        {
            return this->GetReturnCodeInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::GetTaskTotalNumberOutcome CatClient::GetTaskTotalNumber(const GetTaskTotalNumberRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskTotalNumber");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskTotalNumberResponse rsp = GetTaskTotalNumberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskTotalNumberOutcome(rsp);
        else
            return GetTaskTotalNumberOutcome(o.GetError());
    }
    else
    {
        return GetTaskTotalNumberOutcome(outcome.GetError());
    }
}

void CatClient::GetTaskTotalNumberAsync(const GetTaskTotalNumberRequest& request, const GetTaskTotalNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskTotalNumber(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::GetTaskTotalNumberOutcomeCallable CatClient::GetTaskTotalNumberCallable(const GetTaskTotalNumberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskTotalNumberOutcome()>>(
        [this, request]()
        {
            return this->GetTaskTotalNumber(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::ModifyAgentGroupOutcome CatClient::ModifyAgentGroup(const ModifyAgentGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgentGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentGroupResponse rsp = ModifyAgentGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentGroupOutcome(rsp);
        else
            return ModifyAgentGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentGroupOutcome(outcome.GetError());
    }
}

void CatClient::ModifyAgentGroupAsync(const ModifyAgentGroupRequest& request, const ModifyAgentGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAgentGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::ModifyAgentGroupOutcomeCallable CatClient::ModifyAgentGroupCallable(const ModifyAgentGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAgentGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyAgentGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::ModifyTaskExOutcome CatClient::ModifyTaskEx(const ModifyTaskExRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskEx");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskExResponse rsp = ModifyTaskExResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskExOutcome(rsp);
        else
            return ModifyTaskExOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskExOutcome(outcome.GetError());
    }
}

void CatClient::ModifyTaskExAsync(const ModifyTaskExRequest& request, const ModifyTaskExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskEx(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::ModifyTaskExOutcomeCallable CatClient::ModifyTaskExCallable(const ModifyTaskExRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskExOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskEx(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::PauseTaskOutcome CatClient::PauseTask(const PauseTaskRequest &request)
{
    auto outcome = MakeRequest(request, "PauseTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseTaskResponse rsp = PauseTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseTaskOutcome(rsp);
        else
            return PauseTaskOutcome(o.GetError());
    }
    else
    {
        return PauseTaskOutcome(outcome.GetError());
    }
}

void CatClient::PauseTaskAsync(const PauseTaskRequest& request, const PauseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PauseTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::PauseTaskOutcomeCallable CatClient::PauseTaskCallable(const PauseTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PauseTaskOutcome()>>(
        [this, request]()
        {
            return this->PauseTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::ResumeProbeTaskOutcome CatClient::ResumeProbeTask(const ResumeProbeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeProbeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeProbeTaskResponse rsp = ResumeProbeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeProbeTaskOutcome(rsp);
        else
            return ResumeProbeTaskOutcome(o.GetError());
    }
    else
    {
        return ResumeProbeTaskOutcome(outcome.GetError());
    }
}

void CatClient::ResumeProbeTaskAsync(const ResumeProbeTaskRequest& request, const ResumeProbeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeProbeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::ResumeProbeTaskOutcomeCallable CatClient::ResumeProbeTaskCallable(const ResumeProbeTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeProbeTaskOutcome()>>(
        [this, request]()
        {
            return this->ResumeProbeTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::RunTaskOutcome CatClient::RunTask(const RunTaskRequest &request)
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

void CatClient::RunTaskAsync(const RunTaskRequest& request, const RunTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::RunTaskOutcomeCallable CatClient::RunTaskCallable(const RunTaskRequest &request)
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

CatClient::SuspendProbeTaskOutcome CatClient::SuspendProbeTask(const SuspendProbeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SuspendProbeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SuspendProbeTaskResponse rsp = SuspendProbeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SuspendProbeTaskOutcome(rsp);
        else
            return SuspendProbeTaskOutcome(o.GetError());
    }
    else
    {
        return SuspendProbeTaskOutcome(outcome.GetError());
    }
}

void CatClient::SuspendProbeTaskAsync(const SuspendProbeTaskRequest& request, const SuspendProbeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SuspendProbeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::SuspendProbeTaskOutcomeCallable CatClient::SuspendProbeTaskCallable(const SuspendProbeTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SuspendProbeTaskOutcome()>>(
        [this, request]()
        {
            return this->SuspendProbeTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::UpdateProbeTaskConfigurationListOutcome CatClient::UpdateProbeTaskConfigurationList(const UpdateProbeTaskConfigurationListRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProbeTaskConfigurationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProbeTaskConfigurationListResponse rsp = UpdateProbeTaskConfigurationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProbeTaskConfigurationListOutcome(rsp);
        else
            return UpdateProbeTaskConfigurationListOutcome(o.GetError());
    }
    else
    {
        return UpdateProbeTaskConfigurationListOutcome(outcome.GetError());
    }
}

void CatClient::UpdateProbeTaskConfigurationListAsync(const UpdateProbeTaskConfigurationListRequest& request, const UpdateProbeTaskConfigurationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateProbeTaskConfigurationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::UpdateProbeTaskConfigurationListOutcomeCallable CatClient::UpdateProbeTaskConfigurationListCallable(const UpdateProbeTaskConfigurationListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateProbeTaskConfigurationListOutcome()>>(
        [this, request]()
        {
            return this->UpdateProbeTaskConfigurationList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CatClient::VerifyResultOutcome CatClient::VerifyResult(const VerifyResultRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyResultResponse rsp = VerifyResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyResultOutcome(rsp);
        else
            return VerifyResultOutcome(o.GetError());
    }
    else
    {
        return VerifyResultOutcome(outcome.GetError());
    }
}

void CatClient::VerifyResultAsync(const VerifyResultRequest& request, const VerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::VerifyResultOutcomeCallable CatClient::VerifyResultCallable(const VerifyResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyResultOutcome()>>(
        [this, request]()
        {
            return this->VerifyResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


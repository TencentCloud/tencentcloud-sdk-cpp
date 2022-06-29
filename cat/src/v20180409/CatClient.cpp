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

CatClient::DescribeProbeMetricDataOutcome CatClient::DescribeProbeMetricData(const DescribeProbeMetricDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProbeMetricData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProbeMetricDataResponse rsp = DescribeProbeMetricDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProbeMetricDataOutcome(rsp);
        else
            return DescribeProbeMetricDataOutcome(o.GetError());
    }
    else
    {
        return DescribeProbeMetricDataOutcome(outcome.GetError());
    }
}

void CatClient::DescribeProbeMetricDataAsync(const DescribeProbeMetricDataRequest& request, const DescribeProbeMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProbeMetricData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CatClient::DescribeProbeMetricDataOutcomeCallable CatClient::DescribeProbeMetricDataCallable(const DescribeProbeMetricDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProbeMetricDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeProbeMetricData(request);
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


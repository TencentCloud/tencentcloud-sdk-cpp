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

#include <tencentcloud/tia/v20180226/TiaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tia::V20180226;
using namespace TencentCloud::Tia::V20180226::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-02-26";
    const string ENDPOINT = "tia.tencentcloudapi.com";
}

TiaClient::TiaClient(const Credential &credential, const string &region) :
    TiaClient(credential, region, ClientProfile())
{
}

TiaClient::TiaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TiaClient::CreateJobOutcome TiaClient::CreateJob(const CreateJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJobResponse rsp = CreateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJobOutcome(rsp);
        else
            return CreateJobOutcome(o.GetError());
    }
    else
    {
        return CreateJobOutcome(outcome.GetError());
    }
}

void TiaClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiaClient::CreateJobOutcomeCallable TiaClient::CreateJobCallable(const CreateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateJobOutcome()>>(
        [this, request]()
        {
            return this->CreateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiaClient::CreateModelOutcome TiaClient::CreateModel(const CreateModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelResponse rsp = CreateModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelOutcome(rsp);
        else
            return CreateModelOutcome(o.GetError());
    }
    else
    {
        return CreateModelOutcome(outcome.GetError());
    }
}

void TiaClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiaClient::CreateModelOutcomeCallable TiaClient::CreateModelCallable(const CreateModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateModelOutcome()>>(
        [this, request]()
        {
            return this->CreateModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiaClient::DeleteJobOutcome TiaClient::DeleteJob(const DeleteJobRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobResponse rsp = DeleteJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobOutcome(rsp);
        else
            return DeleteJobOutcome(o.GetError());
    }
    else
    {
        return DeleteJobOutcome(outcome.GetError());
    }
}

void TiaClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiaClient::DeleteJobOutcomeCallable TiaClient::DeleteJobCallable(const DeleteJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteJobOutcome()>>(
        [this, request]()
        {
            return this->DeleteJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiaClient::DeleteModelOutcome TiaClient::DeleteModel(const DeleteModelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelResponse rsp = DeleteModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelOutcome(rsp);
        else
            return DeleteModelOutcome(o.GetError());
    }
    else
    {
        return DeleteModelOutcome(outcome.GetError());
    }
}

void TiaClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiaClient::DeleteModelOutcomeCallable TiaClient::DeleteModelCallable(const DeleteModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteModelOutcome()>>(
        [this, request]()
        {
            return this->DeleteModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiaClient::DescribeJobOutcome TiaClient::DescribeJob(const DescribeJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobResponse rsp = DescribeJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobOutcome(rsp);
        else
            return DescribeJobOutcome(o.GetError());
    }
    else
    {
        return DescribeJobOutcome(outcome.GetError());
    }
}

void TiaClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiaClient::DescribeJobOutcomeCallable TiaClient::DescribeJobCallable(const DescribeJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiaClient::DescribeModelOutcome TiaClient::DescribeModel(const DescribeModelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelResponse rsp = DescribeModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelOutcome(rsp);
        else
            return DescribeModelOutcome(o.GetError());
    }
    else
    {
        return DescribeModelOutcome(outcome.GetError());
    }
}

void TiaClient::DescribeModelAsync(const DescribeModelRequest& request, const DescribeModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiaClient::DescribeModelOutcomeCallable TiaClient::DescribeModelCallable(const DescribeModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelOutcome()>>(
        [this, request]()
        {
            return this->DescribeModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiaClient::InstallAgentOutcome TiaClient::InstallAgent(const InstallAgentRequest &request)
{
    auto outcome = MakeRequest(request, "InstallAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallAgentResponse rsp = InstallAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallAgentOutcome(rsp);
        else
            return InstallAgentOutcome(o.GetError());
    }
    else
    {
        return InstallAgentOutcome(outcome.GetError());
    }
}

void TiaClient::InstallAgentAsync(const InstallAgentRequest& request, const InstallAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InstallAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiaClient::InstallAgentOutcomeCallable TiaClient::InstallAgentCallable(const InstallAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InstallAgentOutcome()>>(
        [this, request]()
        {
            return this->InstallAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiaClient::ListJobsOutcome TiaClient::ListJobs(const ListJobsRequest &request)
{
    auto outcome = MakeRequest(request, "ListJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListJobsResponse rsp = ListJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListJobsOutcome(rsp);
        else
            return ListJobsOutcome(o.GetError());
    }
    else
    {
        return ListJobsOutcome(outcome.GetError());
    }
}

void TiaClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiaClient::ListJobsOutcomeCallable TiaClient::ListJobsCallable(const ListJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
        [this, request]()
        {
            return this->ListJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiaClient::ListModelsOutcome TiaClient::ListModels(const ListModelsRequest &request)
{
    auto outcome = MakeRequest(request, "ListModels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListModelsResponse rsp = ListModelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListModelsOutcome(rsp);
        else
            return ListModelsOutcome(o.GetError());
    }
    else
    {
        return ListModelsOutcome(outcome.GetError());
    }
}

void TiaClient::ListModelsAsync(const ListModelsRequest& request, const ListModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListModels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiaClient::ListModelsOutcomeCallable TiaClient::ListModelsCallable(const ListModelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListModelsOutcome()>>(
        [this, request]()
        {
            return this->ListModels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiaClient::QueryLogsOutcome TiaClient::QueryLogs(const QueryLogsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryLogsResponse rsp = QueryLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryLogsOutcome(rsp);
        else
            return QueryLogsOutcome(o.GetError());
    }
    else
    {
        return QueryLogsOutcome(outcome.GetError());
    }
}

void TiaClient::QueryLogsAsync(const QueryLogsRequest& request, const QueryLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiaClient::QueryLogsOutcomeCallable TiaClient::QueryLogsCallable(const QueryLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryLogsOutcome()>>(
        [this, request]()
        {
            return this->QueryLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


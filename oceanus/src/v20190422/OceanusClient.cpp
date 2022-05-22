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

#include <tencentcloud/oceanus/v20190422/OceanusClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Oceanus::V20190422;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-22";
    const string ENDPOINT = "oceanus.tencentcloudapi.com";
}

OceanusClient::OceanusClient(const Credential &credential, const string &region) :
    OceanusClient(credential, region, ClientProfile())
{
}

OceanusClient::OceanusClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OceanusClient::CheckSavepointOutcome OceanusClient::CheckSavepoint(const CheckSavepointRequest &request)
{
    auto outcome = MakeRequest(request, "CheckSavepoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckSavepointResponse rsp = CheckSavepointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckSavepointOutcome(rsp);
        else
            return CheckSavepointOutcome(o.GetError());
    }
    else
    {
        return CheckSavepointOutcome(outcome.GetError());
    }
}

void OceanusClient::CheckSavepointAsync(const CheckSavepointRequest& request, const CheckSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckSavepoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::CheckSavepointOutcomeCallable OceanusClient::CheckSavepointCallable(const CheckSavepointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckSavepointOutcome()>>(
        [this, request]()
        {
            return this->CheckSavepoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::CreateJobOutcome OceanusClient::CreateJob(const CreateJobRequest &request)
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

void OceanusClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::CreateJobOutcomeCallable OceanusClient::CreateJobCallable(const CreateJobRequest &request)
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

OceanusClient::CreateJobConfigOutcome OceanusClient::CreateJobConfig(const CreateJobConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJobConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJobConfigResponse rsp = CreateJobConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJobConfigOutcome(rsp);
        else
            return CreateJobConfigOutcome(o.GetError());
    }
    else
    {
        return CreateJobConfigOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateJobConfigAsync(const CreateJobConfigRequest& request, const CreateJobConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateJobConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::CreateJobConfigOutcomeCallable OceanusClient::CreateJobConfigCallable(const CreateJobConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateJobConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateJobConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::CreateResourceOutcome OceanusClient::CreateResource(const CreateResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceResponse rsp = CreateResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceOutcome(rsp);
        else
            return CreateResourceOutcome(o.GetError());
    }
    else
    {
        return CreateResourceOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::CreateResourceOutcomeCallable OceanusClient::CreateResourceCallable(const CreateResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResourceOutcome()>>(
        [this, request]()
        {
            return this->CreateResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::CreateResourceConfigOutcome OceanusClient::CreateResourceConfig(const CreateResourceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceConfigResponse rsp = CreateResourceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceConfigOutcome(rsp);
        else
            return CreateResourceConfigOutcome(o.GetError());
    }
    else
    {
        return CreateResourceConfigOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateResourceConfigAsync(const CreateResourceConfigRequest& request, const CreateResourceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResourceConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::CreateResourceConfigOutcomeCallable OceanusClient::CreateResourceConfigCallable(const CreateResourceConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResourceConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateResourceConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DeleteResourceConfigsOutcome OceanusClient::DeleteResourceConfigs(const DeleteResourceConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceConfigsResponse rsp = DeleteResourceConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceConfigsOutcome(rsp);
        else
            return DeleteResourceConfigsOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceConfigsOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteResourceConfigsAsync(const DeleteResourceConfigsRequest& request, const DeleteResourceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResourceConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DeleteResourceConfigsOutcomeCallable OceanusClient::DeleteResourceConfigsCallable(const DeleteResourceConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourceConfigsOutcome()>>(
        [this, request]()
        {
            return this->DeleteResourceConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DeleteResourcesOutcome OceanusClient::DeleteResources(const DeleteResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourcesResponse rsp = DeleteResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourcesOutcome(rsp);
        else
            return DeleteResourcesOutcome(o.GetError());
    }
    else
    {
        return DeleteResourcesOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteResourcesAsync(const DeleteResourcesRequest& request, const DeleteResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DeleteResourcesOutcomeCallable OceanusClient::DeleteResourcesCallable(const DeleteResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourcesOutcome()>>(
        [this, request]()
        {
            return this->DeleteResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DeleteTableConfigOutcome OceanusClient::DeleteTableConfig(const DeleteTableConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTableConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTableConfigResponse rsp = DeleteTableConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTableConfigOutcome(rsp);
        else
            return DeleteTableConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteTableConfigOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteTableConfigAsync(const DeleteTableConfigRequest& request, const DeleteTableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTableConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DeleteTableConfigOutcomeCallable OceanusClient::DeleteTableConfigCallable(const DeleteTableConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTableConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteTableConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeJobConfigsOutcome OceanusClient::DescribeJobConfigs(const DescribeJobConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobConfigsResponse rsp = DescribeJobConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobConfigsOutcome(rsp);
        else
            return DescribeJobConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobConfigsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobConfigsAsync(const DescribeJobConfigsRequest& request, const DescribeJobConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeJobConfigsOutcomeCallable OceanusClient::DescribeJobConfigsCallable(const DescribeJobConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeJobSavepointOutcome OceanusClient::DescribeJobSavepoint(const DescribeJobSavepointRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobSavepoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobSavepointResponse rsp = DescribeJobSavepointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobSavepointOutcome(rsp);
        else
            return DescribeJobSavepointOutcome(o.GetError());
    }
    else
    {
        return DescribeJobSavepointOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobSavepointAsync(const DescribeJobSavepointRequest& request, const DescribeJobSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobSavepoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeJobSavepointOutcomeCallable OceanusClient::DescribeJobSavepointCallable(const DescribeJobSavepointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobSavepointOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobSavepoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeJobsOutcome OceanusClient::DescribeJobs(const DescribeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobsResponse rsp = DescribeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobsOutcome(rsp);
        else
            return DescribeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeJobsOutcomeCallable OceanusClient::DescribeJobsCallable(const DescribeJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeResourceConfigsOutcome OceanusClient::DescribeResourceConfigs(const DescribeResourceConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceConfigsResponse rsp = DescribeResourceConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceConfigsOutcome(rsp);
        else
            return DescribeResourceConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceConfigsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeResourceConfigsAsync(const DescribeResourceConfigsRequest& request, const DescribeResourceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeResourceConfigsOutcomeCallable OceanusClient::DescribeResourceConfigsCallable(const DescribeResourceConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeResourceRelatedJobsOutcome OceanusClient::DescribeResourceRelatedJobs(const DescribeResourceRelatedJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceRelatedJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceRelatedJobsResponse rsp = DescribeResourceRelatedJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceRelatedJobsOutcome(rsp);
        else
            return DescribeResourceRelatedJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceRelatedJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeResourceRelatedJobsAsync(const DescribeResourceRelatedJobsRequest& request, const DescribeResourceRelatedJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceRelatedJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeResourceRelatedJobsOutcomeCallable OceanusClient::DescribeResourceRelatedJobsCallable(const DescribeResourceRelatedJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceRelatedJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceRelatedJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeResourcesOutcome OceanusClient::DescribeResources(const DescribeResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesResponse rsp = DescribeResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesOutcome(rsp);
        else
            return DescribeResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeResourcesAsync(const DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeResourcesOutcomeCallable OceanusClient::DescribeResourcesCallable(const DescribeResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeSystemResourcesOutcome OceanusClient::DescribeSystemResources(const DescribeSystemResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSystemResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSystemResourcesResponse rsp = DescribeSystemResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSystemResourcesOutcome(rsp);
        else
            return DescribeSystemResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeSystemResourcesOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeSystemResourcesAsync(const DescribeSystemResourcesRequest& request, const DescribeSystemResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSystemResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeSystemResourcesOutcomeCallable OceanusClient::DescribeSystemResourcesCallable(const DescribeSystemResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSystemResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSystemResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::RunJobsOutcome OceanusClient::RunJobs(const RunJobsRequest &request)
{
    auto outcome = MakeRequest(request, "RunJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunJobsResponse rsp = RunJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunJobsOutcome(rsp);
        else
            return RunJobsOutcome(o.GetError());
    }
    else
    {
        return RunJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::RunJobsAsync(const RunJobsRequest& request, const RunJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::RunJobsOutcomeCallable OceanusClient::RunJobsCallable(const RunJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunJobsOutcome()>>(
        [this, request]()
        {
            return this->RunJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::StopJobsOutcome OceanusClient::StopJobs(const StopJobsRequest &request)
{
    auto outcome = MakeRequest(request, "StopJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopJobsResponse rsp = StopJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopJobsOutcome(rsp);
        else
            return StopJobsOutcome(o.GetError());
    }
    else
    {
        return StopJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::StopJobsAsync(const StopJobsRequest& request, const StopJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::StopJobsOutcomeCallable OceanusClient::StopJobsCallable(const StopJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopJobsOutcome()>>(
        [this, request]()
        {
            return this->StopJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


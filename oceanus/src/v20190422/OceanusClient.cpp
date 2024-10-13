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

OceanusClient::CopyJobsOutcome OceanusClient::CopyJobs(const CopyJobsRequest &request)
{
    auto outcome = MakeRequest(request, "CopyJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyJobsResponse rsp = CopyJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyJobsOutcome(rsp);
        else
            return CopyJobsOutcome(o.GetError());
    }
    else
    {
        return CopyJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::CopyJobsAsync(const CopyJobsRequest& request, const CopyJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::CopyJobsOutcomeCallable OceanusClient::CopyJobsCallable(const CopyJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyJobsOutcome()>>(
        [this, request]()
        {
            return this->CopyJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::CreateFolderOutcome OceanusClient::CreateFolder(const CreateFolderRequest &request)
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

void OceanusClient::CreateFolderAsync(const CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::CreateFolderOutcomeCallable OceanusClient::CreateFolderCallable(const CreateFolderRequest &request)
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

OceanusClient::CreateWorkSpaceOutcome OceanusClient::CreateWorkSpace(const CreateWorkSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkSpaceResponse rsp = CreateWorkSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkSpaceOutcome(rsp);
        else
            return CreateWorkSpaceOutcome(o.GetError());
    }
    else
    {
        return CreateWorkSpaceOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateWorkSpaceAsync(const CreateWorkSpaceRequest& request, const CreateWorkSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkSpace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::CreateWorkSpaceOutcomeCallable OceanusClient::CreateWorkSpaceCallable(const CreateWorkSpaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkSpaceOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkSpace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DeleteFoldersOutcome OceanusClient::DeleteFolders(const DeleteFoldersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFolders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFoldersResponse rsp = DeleteFoldersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFoldersOutcome(rsp);
        else
            return DeleteFoldersOutcome(o.GetError());
    }
    else
    {
        return DeleteFoldersOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteFoldersAsync(const DeleteFoldersRequest& request, const DeleteFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFolders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DeleteFoldersOutcomeCallable OceanusClient::DeleteFoldersCallable(const DeleteFoldersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFoldersOutcome()>>(
        [this, request]()
        {
            return this->DeleteFolders(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DeleteJobConfigsOutcome OceanusClient::DeleteJobConfigs(const DeleteJobConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJobConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobConfigsResponse rsp = DeleteJobConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobConfigsOutcome(rsp);
        else
            return DeleteJobConfigsOutcome(o.GetError());
    }
    else
    {
        return DeleteJobConfigsOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteJobConfigsAsync(const DeleteJobConfigsRequest& request, const DeleteJobConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteJobConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DeleteJobConfigsOutcomeCallable OceanusClient::DeleteJobConfigsCallable(const DeleteJobConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteJobConfigsOutcome()>>(
        [this, request]()
        {
            return this->DeleteJobConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DeleteJobsOutcome OceanusClient::DeleteJobs(const DeleteJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobsResponse rsp = DeleteJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobsOutcome(rsp);
        else
            return DeleteJobsOutcome(o.GetError());
    }
    else
    {
        return DeleteJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteJobsAsync(const DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DeleteJobsOutcomeCallable OceanusClient::DeleteJobsCallable(const DeleteJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteJobsOutcome()>>(
        [this, request]()
        {
            return this->DeleteJobs(request);
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

OceanusClient::DeleteWorkSpaceOutcome OceanusClient::DeleteWorkSpace(const DeleteWorkSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkSpaceResponse rsp = DeleteWorkSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkSpaceOutcome(rsp);
        else
            return DeleteWorkSpaceOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkSpaceOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteWorkSpaceAsync(const DeleteWorkSpaceRequest& request, const DeleteWorkSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkSpace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DeleteWorkSpaceOutcomeCallable OceanusClient::DeleteWorkSpaceCallable(const DeleteWorkSpaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkSpaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkSpace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeClustersOutcome OceanusClient::DescribeClusters(const DescribeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClustersResponse rsp = DescribeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClustersOutcome(rsp);
        else
            return DescribeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClustersOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeClustersOutcomeCallable OceanusClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeFolderOutcome OceanusClient::DescribeFolder(const DescribeFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFolderResponse rsp = DescribeFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFolderOutcome(rsp);
        else
            return DescribeFolderOutcome(o.GetError());
    }
    else
    {
        return DescribeFolderOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeFolderAsync(const DescribeFolderRequest& request, const DescribeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeFolderOutcomeCallable OceanusClient::DescribeFolderCallable(const DescribeFolderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFolderOutcome()>>(
        [this, request]()
        {
            return this->DescribeFolder(request);
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

OceanusClient::DescribeJobEventsOutcome OceanusClient::DescribeJobEvents(const DescribeJobEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobEventsResponse rsp = DescribeJobEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobEventsOutcome(rsp);
        else
            return DescribeJobEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobEventsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobEventsAsync(const DescribeJobEventsRequest& request, const DescribeJobEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeJobEventsOutcomeCallable OceanusClient::DescribeJobEventsCallable(const DescribeJobEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeJobRuntimeInfoOutcome OceanusClient::DescribeJobRuntimeInfo(const DescribeJobRuntimeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobRuntimeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobRuntimeInfoResponse rsp = DescribeJobRuntimeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobRuntimeInfoOutcome(rsp);
        else
            return DescribeJobRuntimeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeJobRuntimeInfoOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobRuntimeInfoAsync(const DescribeJobRuntimeInfoRequest& request, const DescribeJobRuntimeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobRuntimeInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeJobRuntimeInfoOutcomeCallable OceanusClient::DescribeJobRuntimeInfoCallable(const DescribeJobRuntimeInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobRuntimeInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobRuntimeInfo(request);
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

OceanusClient::DescribeJobSubmissionLogOutcome OceanusClient::DescribeJobSubmissionLog(const DescribeJobSubmissionLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobSubmissionLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobSubmissionLogResponse rsp = DescribeJobSubmissionLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobSubmissionLogOutcome(rsp);
        else
            return DescribeJobSubmissionLogOutcome(o.GetError());
    }
    else
    {
        return DescribeJobSubmissionLogOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobSubmissionLogAsync(const DescribeJobSubmissionLogRequest& request, const DescribeJobSubmissionLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobSubmissionLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeJobSubmissionLogOutcomeCallable OceanusClient::DescribeJobSubmissionLogCallable(const DescribeJobSubmissionLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobSubmissionLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobSubmissionLog(request);
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

OceanusClient::DescribeTreeJobsOutcome OceanusClient::DescribeTreeJobs(const DescribeTreeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTreeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTreeJobsResponse rsp = DescribeTreeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTreeJobsOutcome(rsp);
        else
            return DescribeTreeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeTreeJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeTreeJobsAsync(const DescribeTreeJobsRequest& request, const DescribeTreeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTreeJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeTreeJobsOutcomeCallable OceanusClient::DescribeTreeJobsCallable(const DescribeTreeJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTreeJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTreeJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeTreeResourcesOutcome OceanusClient::DescribeTreeResources(const DescribeTreeResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTreeResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTreeResourcesResponse rsp = DescribeTreeResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTreeResourcesOutcome(rsp);
        else
            return DescribeTreeResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeTreeResourcesOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeTreeResourcesAsync(const DescribeTreeResourcesRequest& request, const DescribeTreeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTreeResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeTreeResourcesOutcomeCallable OceanusClient::DescribeTreeResourcesCallable(const DescribeTreeResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTreeResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTreeResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::DescribeWorkSpacesOutcome OceanusClient::DescribeWorkSpaces(const DescribeWorkSpacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkSpaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkSpacesResponse rsp = DescribeWorkSpacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkSpacesOutcome(rsp);
        else
            return DescribeWorkSpacesOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkSpacesOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeWorkSpacesAsync(const DescribeWorkSpacesRequest& request, const DescribeWorkSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkSpaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::DescribeWorkSpacesOutcomeCallable OceanusClient::DescribeWorkSpacesCallable(const DescribeWorkSpacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkSpacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkSpaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::FetchSqlGatewayStatementResultOutcome OceanusClient::FetchSqlGatewayStatementResult(const FetchSqlGatewayStatementResultRequest &request)
{
    auto outcome = MakeRequest(request, "FetchSqlGatewayStatementResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchSqlGatewayStatementResultResponse rsp = FetchSqlGatewayStatementResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchSqlGatewayStatementResultOutcome(rsp);
        else
            return FetchSqlGatewayStatementResultOutcome(o.GetError());
    }
    else
    {
        return FetchSqlGatewayStatementResultOutcome(outcome.GetError());
    }
}

void OceanusClient::FetchSqlGatewayStatementResultAsync(const FetchSqlGatewayStatementResultRequest& request, const FetchSqlGatewayStatementResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FetchSqlGatewayStatementResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::FetchSqlGatewayStatementResultOutcomeCallable OceanusClient::FetchSqlGatewayStatementResultCallable(const FetchSqlGatewayStatementResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FetchSqlGatewayStatementResultOutcome()>>(
        [this, request]()
        {
            return this->FetchSqlGatewayStatementResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::GetMetaTableOutcome OceanusClient::GetMetaTable(const GetMetaTableRequest &request)
{
    auto outcome = MakeRequest(request, "GetMetaTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMetaTableResponse rsp = GetMetaTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMetaTableOutcome(rsp);
        else
            return GetMetaTableOutcome(o.GetError());
    }
    else
    {
        return GetMetaTableOutcome(outcome.GetError());
    }
}

void OceanusClient::GetMetaTableAsync(const GetMetaTableRequest& request, const GetMetaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetMetaTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::GetMetaTableOutcomeCallable OceanusClient::GetMetaTableCallable(const GetMetaTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetMetaTableOutcome()>>(
        [this, request]()
        {
            return this->GetMetaTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::ModifyFolderOutcome OceanusClient::ModifyFolder(const ModifyFolderRequest &request)
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

void OceanusClient::ModifyFolderAsync(const ModifyFolderRequest& request, const ModifyFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFolder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::ModifyFolderOutcomeCallable OceanusClient::ModifyFolderCallable(const ModifyFolderRequest &request)
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

OceanusClient::ModifyJobOutcome OceanusClient::ModifyJob(const ModifyJobRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyJobResponse rsp = ModifyJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyJobOutcome(rsp);
        else
            return ModifyJobOutcome(o.GetError());
    }
    else
    {
        return ModifyJobOutcome(outcome.GetError());
    }
}

void OceanusClient::ModifyJobAsync(const ModifyJobRequest& request, const ModifyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::ModifyJobOutcomeCallable OceanusClient::ModifyJobCallable(const ModifyJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyJobOutcome()>>(
        [this, request]()
        {
            return this->ModifyJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OceanusClient::ModifyWorkSpaceOutcome OceanusClient::ModifyWorkSpace(const ModifyWorkSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkSpaceResponse rsp = ModifyWorkSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkSpaceOutcome(rsp);
        else
            return ModifyWorkSpaceOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkSpaceOutcome(outcome.GetError());
    }
}

void OceanusClient::ModifyWorkSpaceAsync(const ModifyWorkSpaceRequest& request, const ModifyWorkSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkSpace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::ModifyWorkSpaceOutcomeCallable OceanusClient::ModifyWorkSpaceCallable(const ModifyWorkSpaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkSpaceOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkSpace(request);
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

OceanusClient::RunSqlGatewayStatementOutcome OceanusClient::RunSqlGatewayStatement(const RunSqlGatewayStatementRequest &request)
{
    auto outcome = MakeRequest(request, "RunSqlGatewayStatement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunSqlGatewayStatementResponse rsp = RunSqlGatewayStatementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunSqlGatewayStatementOutcome(rsp);
        else
            return RunSqlGatewayStatementOutcome(o.GetError());
    }
    else
    {
        return RunSqlGatewayStatementOutcome(outcome.GetError());
    }
}

void OceanusClient::RunSqlGatewayStatementAsync(const RunSqlGatewayStatementRequest& request, const RunSqlGatewayStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunSqlGatewayStatement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::RunSqlGatewayStatementOutcomeCallable OceanusClient::RunSqlGatewayStatementCallable(const RunSqlGatewayStatementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunSqlGatewayStatementOutcome()>>(
        [this, request]()
        {
            return this->RunSqlGatewayStatement(request);
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

OceanusClient::TriggerJobSavepointOutcome OceanusClient::TriggerJobSavepoint(const TriggerJobSavepointRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerJobSavepoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerJobSavepointResponse rsp = TriggerJobSavepointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerJobSavepointOutcome(rsp);
        else
            return TriggerJobSavepointOutcome(o.GetError());
    }
    else
    {
        return TriggerJobSavepointOutcome(outcome.GetError());
    }
}

void OceanusClient::TriggerJobSavepointAsync(const TriggerJobSavepointRequest& request, const TriggerJobSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TriggerJobSavepoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OceanusClient::TriggerJobSavepointOutcomeCallable OceanusClient::TriggerJobSavepointCallable(const TriggerJobSavepointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TriggerJobSavepointOutcome()>>(
        [this, request]()
        {
            return this->TriggerJobSavepoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


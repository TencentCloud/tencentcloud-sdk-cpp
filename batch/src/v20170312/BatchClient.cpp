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

#include <tencentcloud/batch/v20170312/BatchClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Batch::V20170312;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "batch.tencentcloudapi.com";
}

BatchClient::BatchClient(const Credential &credential, const string &region) :
    BatchClient(credential, region, ClientProfile())
{
}

BatchClient::BatchClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BatchClient::AttachInstancesOutcome BatchClient::AttachInstances(const AttachInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AttachInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachInstancesResponse rsp = AttachInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachInstancesOutcome(rsp);
        else
            return AttachInstancesOutcome(o.GetError());
    }
    else
    {
        return AttachInstancesOutcome(outcome.GetError());
    }
}

void BatchClient::AttachInstancesAsync(const AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::AttachInstancesOutcomeCallable BatchClient::AttachInstancesCallable(const AttachInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachInstancesOutcome()>>(
        [this, request]()
        {
            return this->AttachInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::CreateComputeEnvOutcome BatchClient::CreateComputeEnv(const CreateComputeEnvRequest &request)
{
    auto outcome = MakeRequest(request, "CreateComputeEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateComputeEnvResponse rsp = CreateComputeEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateComputeEnvOutcome(rsp);
        else
            return CreateComputeEnvOutcome(o.GetError());
    }
    else
    {
        return CreateComputeEnvOutcome(outcome.GetError());
    }
}

void BatchClient::CreateComputeEnvAsync(const CreateComputeEnvRequest& request, const CreateComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateComputeEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::CreateComputeEnvOutcomeCallable BatchClient::CreateComputeEnvCallable(const CreateComputeEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateComputeEnvOutcome()>>(
        [this, request]()
        {
            return this->CreateComputeEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::CreateTaskTemplateOutcome BatchClient::CreateTaskTemplate(const CreateTaskTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskTemplateResponse rsp = CreateTaskTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskTemplateOutcome(rsp);
        else
            return CreateTaskTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateTaskTemplateOutcome(outcome.GetError());
    }
}

void BatchClient::CreateTaskTemplateAsync(const CreateTaskTemplateRequest& request, const CreateTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::CreateTaskTemplateOutcomeCallable BatchClient::CreateTaskTemplateCallable(const CreateTaskTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DeleteComputeEnvOutcome BatchClient::DeleteComputeEnv(const DeleteComputeEnvRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteComputeEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteComputeEnvResponse rsp = DeleteComputeEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteComputeEnvOutcome(rsp);
        else
            return DeleteComputeEnvOutcome(o.GetError());
    }
    else
    {
        return DeleteComputeEnvOutcome(outcome.GetError());
    }
}

void BatchClient::DeleteComputeEnvAsync(const DeleteComputeEnvRequest& request, const DeleteComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteComputeEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DeleteComputeEnvOutcomeCallable BatchClient::DeleteComputeEnvCallable(const DeleteComputeEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteComputeEnvOutcome()>>(
        [this, request]()
        {
            return this->DeleteComputeEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DeleteJobOutcome BatchClient::DeleteJob(const DeleteJobRequest &request)
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

void BatchClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DeleteJobOutcomeCallable BatchClient::DeleteJobCallable(const DeleteJobRequest &request)
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

BatchClient::DeleteTaskTemplatesOutcome BatchClient::DeleteTaskTemplates(const DeleteTaskTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTaskTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskTemplatesResponse rsp = DeleteTaskTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskTemplatesOutcome(rsp);
        else
            return DeleteTaskTemplatesOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskTemplatesOutcome(outcome.GetError());
    }
}

void BatchClient::DeleteTaskTemplatesAsync(const DeleteTaskTemplatesRequest& request, const DeleteTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTaskTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DeleteTaskTemplatesOutcomeCallable BatchClient::DeleteTaskTemplatesCallable(const DeleteTaskTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DeleteTaskTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeAvailableCvmInstanceTypesOutcome BatchClient::DescribeAvailableCvmInstanceTypes(const DescribeAvailableCvmInstanceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableCvmInstanceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableCvmInstanceTypesResponse rsp = DescribeAvailableCvmInstanceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableCvmInstanceTypesOutcome(rsp);
        else
            return DescribeAvailableCvmInstanceTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableCvmInstanceTypesOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeAvailableCvmInstanceTypesAsync(const DescribeAvailableCvmInstanceTypesRequest& request, const DescribeAvailableCvmInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailableCvmInstanceTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeAvailableCvmInstanceTypesOutcomeCallable BatchClient::DescribeAvailableCvmInstanceTypesCallable(const DescribeAvailableCvmInstanceTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailableCvmInstanceTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailableCvmInstanceTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeComputeEnvOutcome BatchClient::DescribeComputeEnv(const DescribeComputeEnvRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComputeEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComputeEnvResponse rsp = DescribeComputeEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComputeEnvOutcome(rsp);
        else
            return DescribeComputeEnvOutcome(o.GetError());
    }
    else
    {
        return DescribeComputeEnvOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeComputeEnvAsync(const DescribeComputeEnvRequest& request, const DescribeComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComputeEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeComputeEnvOutcomeCallable BatchClient::DescribeComputeEnvCallable(const DescribeComputeEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComputeEnvOutcome()>>(
        [this, request]()
        {
            return this->DescribeComputeEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeComputeEnvActivitiesOutcome BatchClient::DescribeComputeEnvActivities(const DescribeComputeEnvActivitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComputeEnvActivities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComputeEnvActivitiesResponse rsp = DescribeComputeEnvActivitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComputeEnvActivitiesOutcome(rsp);
        else
            return DescribeComputeEnvActivitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeComputeEnvActivitiesOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeComputeEnvActivitiesAsync(const DescribeComputeEnvActivitiesRequest& request, const DescribeComputeEnvActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComputeEnvActivities(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeComputeEnvActivitiesOutcomeCallable BatchClient::DescribeComputeEnvActivitiesCallable(const DescribeComputeEnvActivitiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComputeEnvActivitiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeComputeEnvActivities(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeComputeEnvCreateInfoOutcome BatchClient::DescribeComputeEnvCreateInfo(const DescribeComputeEnvCreateInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComputeEnvCreateInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComputeEnvCreateInfoResponse rsp = DescribeComputeEnvCreateInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComputeEnvCreateInfoOutcome(rsp);
        else
            return DescribeComputeEnvCreateInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeComputeEnvCreateInfoOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeComputeEnvCreateInfoAsync(const DescribeComputeEnvCreateInfoRequest& request, const DescribeComputeEnvCreateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComputeEnvCreateInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeComputeEnvCreateInfoOutcomeCallable BatchClient::DescribeComputeEnvCreateInfoCallable(const DescribeComputeEnvCreateInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComputeEnvCreateInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeComputeEnvCreateInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeComputeEnvCreateInfosOutcome BatchClient::DescribeComputeEnvCreateInfos(const DescribeComputeEnvCreateInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComputeEnvCreateInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComputeEnvCreateInfosResponse rsp = DescribeComputeEnvCreateInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComputeEnvCreateInfosOutcome(rsp);
        else
            return DescribeComputeEnvCreateInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeComputeEnvCreateInfosOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeComputeEnvCreateInfosAsync(const DescribeComputeEnvCreateInfosRequest& request, const DescribeComputeEnvCreateInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComputeEnvCreateInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeComputeEnvCreateInfosOutcomeCallable BatchClient::DescribeComputeEnvCreateInfosCallable(const DescribeComputeEnvCreateInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComputeEnvCreateInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeComputeEnvCreateInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeComputeEnvsOutcome BatchClient::DescribeComputeEnvs(const DescribeComputeEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComputeEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComputeEnvsResponse rsp = DescribeComputeEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComputeEnvsOutcome(rsp);
        else
            return DescribeComputeEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeComputeEnvsOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeComputeEnvsAsync(const DescribeComputeEnvsRequest& request, const DescribeComputeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComputeEnvs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeComputeEnvsOutcomeCallable BatchClient::DescribeComputeEnvsCallable(const DescribeComputeEnvsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComputeEnvsOutcome()>>(
        [this, request]()
        {
            return this->DescribeComputeEnvs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeCvmZoneInstanceConfigInfosOutcome BatchClient::DescribeCvmZoneInstanceConfigInfos(const DescribeCvmZoneInstanceConfigInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCvmZoneInstanceConfigInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCvmZoneInstanceConfigInfosResponse rsp = DescribeCvmZoneInstanceConfigInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCvmZoneInstanceConfigInfosOutcome(rsp);
        else
            return DescribeCvmZoneInstanceConfigInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCvmZoneInstanceConfigInfosOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeCvmZoneInstanceConfigInfosAsync(const DescribeCvmZoneInstanceConfigInfosRequest& request, const DescribeCvmZoneInstanceConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCvmZoneInstanceConfigInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeCvmZoneInstanceConfigInfosOutcomeCallable BatchClient::DescribeCvmZoneInstanceConfigInfosCallable(const DescribeCvmZoneInstanceConfigInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCvmZoneInstanceConfigInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeCvmZoneInstanceConfigInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeInstanceCategoriesOutcome BatchClient::DescribeInstanceCategories(const DescribeInstanceCategoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceCategories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceCategoriesResponse rsp = DescribeInstanceCategoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceCategoriesOutcome(rsp);
        else
            return DescribeInstanceCategoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceCategoriesOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeInstanceCategoriesAsync(const DescribeInstanceCategoriesRequest& request, const DescribeInstanceCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceCategories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeInstanceCategoriesOutcomeCallable BatchClient::DescribeInstanceCategoriesCallable(const DescribeInstanceCategoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceCategoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceCategories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeJobOutcome BatchClient::DescribeJob(const DescribeJobRequest &request)
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

void BatchClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeJobOutcomeCallable BatchClient::DescribeJobCallable(const DescribeJobRequest &request)
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

BatchClient::DescribeJobSubmitInfoOutcome BatchClient::DescribeJobSubmitInfo(const DescribeJobSubmitInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobSubmitInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobSubmitInfoResponse rsp = DescribeJobSubmitInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobSubmitInfoOutcome(rsp);
        else
            return DescribeJobSubmitInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeJobSubmitInfoOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeJobSubmitInfoAsync(const DescribeJobSubmitInfoRequest& request, const DescribeJobSubmitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobSubmitInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeJobSubmitInfoOutcomeCallable BatchClient::DescribeJobSubmitInfoCallable(const DescribeJobSubmitInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobSubmitInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobSubmitInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeJobsOutcome BatchClient::DescribeJobs(const DescribeJobsRequest &request)
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

void BatchClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeJobsOutcomeCallable BatchClient::DescribeJobsCallable(const DescribeJobsRequest &request)
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

BatchClient::DescribeTaskOutcome BatchClient::DescribeTask(const DescribeTaskRequest &request)
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

void BatchClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeTaskOutcomeCallable BatchClient::DescribeTaskCallable(const DescribeTaskRequest &request)
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

BatchClient::DescribeTaskLogsOutcome BatchClient::DescribeTaskLogs(const DescribeTaskLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLogsResponse rsp = DescribeTaskLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLogsOutcome(rsp);
        else
            return DescribeTaskLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLogsOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeTaskLogsAsync(const DescribeTaskLogsRequest& request, const DescribeTaskLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeTaskLogsOutcomeCallable BatchClient::DescribeTaskLogsCallable(const DescribeTaskLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeTaskTemplatesOutcome BatchClient::DescribeTaskTemplates(const DescribeTaskTemplatesRequest &request)
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

void BatchClient::DescribeTaskTemplatesAsync(const DescribeTaskTemplatesRequest& request, const DescribeTaskTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeTaskTemplatesOutcomeCallable BatchClient::DescribeTaskTemplatesCallable(const DescribeTaskTemplatesRequest &request)
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

BatchClient::DetachInstancesOutcome BatchClient::DetachInstances(const DetachInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DetachInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachInstancesResponse rsp = DetachInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachInstancesOutcome(rsp);
        else
            return DetachInstancesOutcome(o.GetError());
    }
    else
    {
        return DetachInstancesOutcome(outcome.GetError());
    }
}

void BatchClient::DetachInstancesAsync(const DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DetachInstancesOutcomeCallable BatchClient::DetachInstancesCallable(const DetachInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachInstancesOutcome()>>(
        [this, request]()
        {
            return this->DetachInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::ModifyComputeEnvOutcome BatchClient::ModifyComputeEnv(const ModifyComputeEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyComputeEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyComputeEnvResponse rsp = ModifyComputeEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyComputeEnvOutcome(rsp);
        else
            return ModifyComputeEnvOutcome(o.GetError());
    }
    else
    {
        return ModifyComputeEnvOutcome(outcome.GetError());
    }
}

void BatchClient::ModifyComputeEnvAsync(const ModifyComputeEnvRequest& request, const ModifyComputeEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyComputeEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::ModifyComputeEnvOutcomeCallable BatchClient::ModifyComputeEnvCallable(const ModifyComputeEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyComputeEnvOutcome()>>(
        [this, request]()
        {
            return this->ModifyComputeEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::ModifyTaskTemplateOutcome BatchClient::ModifyTaskTemplate(const ModifyTaskTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTaskTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskTemplateResponse rsp = ModifyTaskTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskTemplateOutcome(rsp);
        else
            return ModifyTaskTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskTemplateOutcome(outcome.GetError());
    }
}

void BatchClient::ModifyTaskTemplateAsync(const ModifyTaskTemplateRequest& request, const ModifyTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTaskTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::ModifyTaskTemplateOutcomeCallable BatchClient::ModifyTaskTemplateCallable(const ModifyTaskTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyTaskTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::RetryJobsOutcome BatchClient::RetryJobs(const RetryJobsRequest &request)
{
    auto outcome = MakeRequest(request, "RetryJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryJobsResponse rsp = RetryJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryJobsOutcome(rsp);
        else
            return RetryJobsOutcome(o.GetError());
    }
    else
    {
        return RetryJobsOutcome(outcome.GetError());
    }
}

void BatchClient::RetryJobsAsync(const RetryJobsRequest& request, const RetryJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::RetryJobsOutcomeCallable BatchClient::RetryJobsCallable(const RetryJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryJobsOutcome()>>(
        [this, request]()
        {
            return this->RetryJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::SubmitJobOutcome BatchClient::SubmitJob(const SubmitJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitJobResponse rsp = SubmitJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitJobOutcome(rsp);
        else
            return SubmitJobOutcome(o.GetError());
    }
    else
    {
        return SubmitJobOutcome(outcome.GetError());
    }
}

void BatchClient::SubmitJobAsync(const SubmitJobRequest& request, const SubmitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::SubmitJobOutcomeCallable BatchClient::SubmitJobCallable(const SubmitJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::TerminateComputeNodeOutcome BatchClient::TerminateComputeNode(const TerminateComputeNodeRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateComputeNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateComputeNodeResponse rsp = TerminateComputeNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateComputeNodeOutcome(rsp);
        else
            return TerminateComputeNodeOutcome(o.GetError());
    }
    else
    {
        return TerminateComputeNodeOutcome(outcome.GetError());
    }
}

void BatchClient::TerminateComputeNodeAsync(const TerminateComputeNodeRequest& request, const TerminateComputeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateComputeNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::TerminateComputeNodeOutcomeCallable BatchClient::TerminateComputeNodeCallable(const TerminateComputeNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateComputeNodeOutcome()>>(
        [this, request]()
        {
            return this->TerminateComputeNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::TerminateComputeNodesOutcome BatchClient::TerminateComputeNodes(const TerminateComputeNodesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateComputeNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateComputeNodesResponse rsp = TerminateComputeNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateComputeNodesOutcome(rsp);
        else
            return TerminateComputeNodesOutcome(o.GetError());
    }
    else
    {
        return TerminateComputeNodesOutcome(outcome.GetError());
    }
}

void BatchClient::TerminateComputeNodesAsync(const TerminateComputeNodesRequest& request, const TerminateComputeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateComputeNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::TerminateComputeNodesOutcomeCallable BatchClient::TerminateComputeNodesCallable(const TerminateComputeNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateComputeNodesOutcome()>>(
        [this, request]()
        {
            return this->TerminateComputeNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::TerminateJobOutcome BatchClient::TerminateJob(const TerminateJobRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateJobResponse rsp = TerminateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateJobOutcome(rsp);
        else
            return TerminateJobOutcome(o.GetError());
    }
    else
    {
        return TerminateJobOutcome(outcome.GetError());
    }
}

void BatchClient::TerminateJobAsync(const TerminateJobRequest& request, const TerminateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::TerminateJobOutcomeCallable BatchClient::TerminateJobCallable(const TerminateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateJobOutcome()>>(
        [this, request]()
        {
            return this->TerminateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::TerminateTaskInstanceOutcome BatchClient::TerminateTaskInstance(const TerminateTaskInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateTaskInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateTaskInstanceResponse rsp = TerminateTaskInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateTaskInstanceOutcome(rsp);
        else
            return TerminateTaskInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateTaskInstanceOutcome(outcome.GetError());
    }
}

void BatchClient::TerminateTaskInstanceAsync(const TerminateTaskInstanceRequest& request, const TerminateTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateTaskInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::TerminateTaskInstanceOutcomeCallable BatchClient::TerminateTaskInstanceCallable(const TerminateTaskInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateTaskInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateTaskInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


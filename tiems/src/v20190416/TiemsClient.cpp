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

#include <tencentcloud/tiems/v20190416/TiemsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tiems::V20190416;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-16";
    const string ENDPOINT = "tiems.tencentcloudapi.com";
}

TiemsClient::TiemsClient(const Credential &credential, const string &region) :
    TiemsClient(credential, region, ClientProfile())
{
}

TiemsClient::TiemsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TiemsClient::CreateJobOutcome TiemsClient::CreateJob(const CreateJobRequest &request)
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

void TiemsClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::CreateJobOutcomeCallable TiemsClient::CreateJobCallable(const CreateJobRequest &request)
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

TiemsClient::CreateRsgAsGroupOutcome TiemsClient::CreateRsgAsGroup(const CreateRsgAsGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRsgAsGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRsgAsGroupResponse rsp = CreateRsgAsGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRsgAsGroupOutcome(rsp);
        else
            return CreateRsgAsGroupOutcome(o.GetError());
    }
    else
    {
        return CreateRsgAsGroupOutcome(outcome.GetError());
    }
}

void TiemsClient::CreateRsgAsGroupAsync(const CreateRsgAsGroupRequest& request, const CreateRsgAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRsgAsGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::CreateRsgAsGroupOutcomeCallable TiemsClient::CreateRsgAsGroupCallable(const CreateRsgAsGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRsgAsGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateRsgAsGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::CreateRuntimeOutcome TiemsClient::CreateRuntime(const CreateRuntimeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRuntime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuntimeResponse rsp = CreateRuntimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuntimeOutcome(rsp);
        else
            return CreateRuntimeOutcome(o.GetError());
    }
    else
    {
        return CreateRuntimeOutcome(outcome.GetError());
    }
}

void TiemsClient::CreateRuntimeAsync(const CreateRuntimeRequest& request, const CreateRuntimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRuntime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::CreateRuntimeOutcomeCallable TiemsClient::CreateRuntimeCallable(const CreateRuntimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRuntimeOutcome()>>(
        [this, request]()
        {
            return this->CreateRuntime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::CreateServiceOutcome TiemsClient::CreateService(const CreateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceResponse rsp = CreateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceOutcome(rsp);
        else
            return CreateServiceOutcome(o.GetError());
    }
    else
    {
        return CreateServiceOutcome(outcome.GetError());
    }
}

void TiemsClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::CreateServiceOutcomeCallable TiemsClient::CreateServiceCallable(const CreateServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::CreateServiceConfigOutcome TiemsClient::CreateServiceConfig(const CreateServiceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceConfigResponse rsp = CreateServiceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceConfigOutcome(rsp);
        else
            return CreateServiceConfigOutcome(o.GetError());
    }
    else
    {
        return CreateServiceConfigOutcome(outcome.GetError());
    }
}

void TiemsClient::CreateServiceConfigAsync(const CreateServiceConfigRequest& request, const CreateServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServiceConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::CreateServiceConfigOutcomeCallable TiemsClient::CreateServiceConfigCallable(const CreateServiceConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateServiceConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DeleteInstanceOutcome TiemsClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void TiemsClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DeleteInstanceOutcomeCallable TiemsClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DeleteJobOutcome TiemsClient::DeleteJob(const DeleteJobRequest &request)
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

void TiemsClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DeleteJobOutcomeCallable TiemsClient::DeleteJobCallable(const DeleteJobRequest &request)
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

TiemsClient::DeleteResourceGroupOutcome TiemsClient::DeleteResourceGroup(const DeleteResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceGroupResponse rsp = DeleteResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceGroupOutcome(rsp);
        else
            return DeleteResourceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceGroupOutcome(outcome.GetError());
    }
}

void TiemsClient::DeleteResourceGroupAsync(const DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteResourceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DeleteResourceGroupOutcomeCallable TiemsClient::DeleteResourceGroupCallable(const DeleteResourceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteResourceGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteResourceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DeleteRsgAsGroupOutcome TiemsClient::DeleteRsgAsGroup(const DeleteRsgAsGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRsgAsGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRsgAsGroupResponse rsp = DeleteRsgAsGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRsgAsGroupOutcome(rsp);
        else
            return DeleteRsgAsGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteRsgAsGroupOutcome(outcome.GetError());
    }
}

void TiemsClient::DeleteRsgAsGroupAsync(const DeleteRsgAsGroupRequest& request, const DeleteRsgAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRsgAsGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DeleteRsgAsGroupOutcomeCallable TiemsClient::DeleteRsgAsGroupCallable(const DeleteRsgAsGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRsgAsGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteRsgAsGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DeleteRuntimeOutcome TiemsClient::DeleteRuntime(const DeleteRuntimeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRuntime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuntimeResponse rsp = DeleteRuntimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuntimeOutcome(rsp);
        else
            return DeleteRuntimeOutcome(o.GetError());
    }
    else
    {
        return DeleteRuntimeOutcome(outcome.GetError());
    }
}

void TiemsClient::DeleteRuntimeAsync(const DeleteRuntimeRequest& request, const DeleteRuntimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRuntime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DeleteRuntimeOutcomeCallable TiemsClient::DeleteRuntimeCallable(const DeleteRuntimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRuntimeOutcome()>>(
        [this, request]()
        {
            return this->DeleteRuntime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DeleteServiceOutcome TiemsClient::DeleteService(const DeleteServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceResponse rsp = DeleteServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceOutcome(rsp);
        else
            return DeleteServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceOutcome(outcome.GetError());
    }
}

void TiemsClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DeleteServiceOutcomeCallable TiemsClient::DeleteServiceCallable(const DeleteServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceOutcome()>>(
        [this, request]()
        {
            return this->DeleteService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DeleteServiceConfigOutcome TiemsClient::DeleteServiceConfig(const DeleteServiceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceConfigResponse rsp = DeleteServiceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceConfigOutcome(rsp);
        else
            return DeleteServiceConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceConfigOutcome(outcome.GetError());
    }
}

void TiemsClient::DeleteServiceConfigAsync(const DeleteServiceConfigRequest& request, const DeleteServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServiceConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DeleteServiceConfigOutcomeCallable TiemsClient::DeleteServiceConfigCallable(const DeleteServiceConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteServiceConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DescribeInstancesOutcome TiemsClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void TiemsClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DescribeInstancesOutcomeCallable TiemsClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
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

TiemsClient::DescribeResourceGroupsOutcome TiemsClient::DescribeResourceGroups(const DescribeResourceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceGroupsResponse rsp = DescribeResourceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceGroupsOutcome(rsp);
        else
            return DescribeResourceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceGroupsOutcome(outcome.GetError());
    }
}

void TiemsClient::DescribeResourceGroupsAsync(const DescribeResourceGroupsRequest& request, const DescribeResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DescribeResourceGroupsOutcomeCallable TiemsClient::DescribeResourceGroupsCallable(const DescribeResourceGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DescribeRsgAsGroupActivitiesOutcome TiemsClient::DescribeRsgAsGroupActivities(const DescribeRsgAsGroupActivitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRsgAsGroupActivities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRsgAsGroupActivitiesResponse rsp = DescribeRsgAsGroupActivitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRsgAsGroupActivitiesOutcome(rsp);
        else
            return DescribeRsgAsGroupActivitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeRsgAsGroupActivitiesOutcome(outcome.GetError());
    }
}

void TiemsClient::DescribeRsgAsGroupActivitiesAsync(const DescribeRsgAsGroupActivitiesRequest& request, const DescribeRsgAsGroupActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRsgAsGroupActivities(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DescribeRsgAsGroupActivitiesOutcomeCallable TiemsClient::DescribeRsgAsGroupActivitiesCallable(const DescribeRsgAsGroupActivitiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRsgAsGroupActivitiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRsgAsGroupActivities(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DescribeRsgAsGroupsOutcome TiemsClient::DescribeRsgAsGroups(const DescribeRsgAsGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRsgAsGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRsgAsGroupsResponse rsp = DescribeRsgAsGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRsgAsGroupsOutcome(rsp);
        else
            return DescribeRsgAsGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeRsgAsGroupsOutcome(outcome.GetError());
    }
}

void TiemsClient::DescribeRsgAsGroupsAsync(const DescribeRsgAsGroupsRequest& request, const DescribeRsgAsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRsgAsGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DescribeRsgAsGroupsOutcomeCallable TiemsClient::DescribeRsgAsGroupsCallable(const DescribeRsgAsGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRsgAsGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRsgAsGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DescribeRuntimesOutcome TiemsClient::DescribeRuntimes(const DescribeRuntimesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuntimes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuntimesResponse rsp = DescribeRuntimesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuntimesOutcome(rsp);
        else
            return DescribeRuntimesOutcome(o.GetError());
    }
    else
    {
        return DescribeRuntimesOutcome(outcome.GetError());
    }
}

void TiemsClient::DescribeRuntimesAsync(const DescribeRuntimesRequest& request, const DescribeRuntimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuntimes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DescribeRuntimesOutcomeCallable TiemsClient::DescribeRuntimesCallable(const DescribeRuntimesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuntimesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuntimes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DescribeServiceConfigsOutcome TiemsClient::DescribeServiceConfigs(const DescribeServiceConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceConfigsResponse rsp = DescribeServiceConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceConfigsOutcome(rsp);
        else
            return DescribeServiceConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceConfigsOutcome(outcome.GetError());
    }
}

void TiemsClient::DescribeServiceConfigsAsync(const DescribeServiceConfigsRequest& request, const DescribeServiceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DescribeServiceConfigsOutcomeCallable TiemsClient::DescribeServiceConfigsCallable(const DescribeServiceConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DescribeServicesOutcome TiemsClient::DescribeServices(const DescribeServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServicesResponse rsp = DescribeServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServicesOutcome(rsp);
        else
            return DescribeServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeServicesOutcome(outcome.GetError());
    }
}

void TiemsClient::DescribeServicesAsync(const DescribeServicesRequest& request, const DescribeServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DescribeServicesOutcomeCallable TiemsClient::DescribeServicesCallable(const DescribeServicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeServices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::DisableRsgAsGroupOutcome TiemsClient::DisableRsgAsGroup(const DisableRsgAsGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DisableRsgAsGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableRsgAsGroupResponse rsp = DisableRsgAsGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableRsgAsGroupOutcome(rsp);
        else
            return DisableRsgAsGroupOutcome(o.GetError());
    }
    else
    {
        return DisableRsgAsGroupOutcome(outcome.GetError());
    }
}

void TiemsClient::DisableRsgAsGroupAsync(const DisableRsgAsGroupRequest& request, const DisableRsgAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableRsgAsGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::DisableRsgAsGroupOutcomeCallable TiemsClient::DisableRsgAsGroupCallable(const DisableRsgAsGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableRsgAsGroupOutcome()>>(
        [this, request]()
        {
            return this->DisableRsgAsGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::EnableRsgAsGroupOutcome TiemsClient::EnableRsgAsGroup(const EnableRsgAsGroupRequest &request)
{
    auto outcome = MakeRequest(request, "EnableRsgAsGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableRsgAsGroupResponse rsp = EnableRsgAsGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableRsgAsGroupOutcome(rsp);
        else
            return EnableRsgAsGroupOutcome(o.GetError());
    }
    else
    {
        return EnableRsgAsGroupOutcome(outcome.GetError());
    }
}

void TiemsClient::EnableRsgAsGroupAsync(const EnableRsgAsGroupRequest& request, const EnableRsgAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableRsgAsGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::EnableRsgAsGroupOutcomeCallable TiemsClient::EnableRsgAsGroupCallable(const EnableRsgAsGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableRsgAsGroupOutcome()>>(
        [this, request]()
        {
            return this->EnableRsgAsGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::ExposeServiceOutcome TiemsClient::ExposeService(const ExposeServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ExposeService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExposeServiceResponse rsp = ExposeServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExposeServiceOutcome(rsp);
        else
            return ExposeServiceOutcome(o.GetError());
    }
    else
    {
        return ExposeServiceOutcome(outcome.GetError());
    }
}

void TiemsClient::ExposeServiceAsync(const ExposeServiceRequest& request, const ExposeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExposeService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::ExposeServiceOutcomeCallable TiemsClient::ExposeServiceCallable(const ExposeServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExposeServiceOutcome()>>(
        [this, request]()
        {
            return this->ExposeService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::UpdateJobOutcome TiemsClient::UpdateJob(const UpdateJobRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateJobResponse rsp = UpdateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateJobOutcome(rsp);
        else
            return UpdateJobOutcome(o.GetError());
    }
    else
    {
        return UpdateJobOutcome(outcome.GetError());
    }
}

void TiemsClient::UpdateJobAsync(const UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::UpdateJobOutcomeCallable TiemsClient::UpdateJobCallable(const UpdateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateJobOutcome()>>(
        [this, request]()
        {
            return this->UpdateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::UpdateRsgAsGroupOutcome TiemsClient::UpdateRsgAsGroup(const UpdateRsgAsGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRsgAsGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRsgAsGroupResponse rsp = UpdateRsgAsGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRsgAsGroupOutcome(rsp);
        else
            return UpdateRsgAsGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateRsgAsGroupOutcome(outcome.GetError());
    }
}

void TiemsClient::UpdateRsgAsGroupAsync(const UpdateRsgAsGroupRequest& request, const UpdateRsgAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRsgAsGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::UpdateRsgAsGroupOutcomeCallable TiemsClient::UpdateRsgAsGroupCallable(const UpdateRsgAsGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRsgAsGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateRsgAsGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TiemsClient::UpdateServiceOutcome TiemsClient::UpdateService(const UpdateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServiceResponse rsp = UpdateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServiceOutcome(rsp);
        else
            return UpdateServiceOutcome(o.GetError());
    }
    else
    {
        return UpdateServiceOutcome(outcome.GetError());
    }
}

void TiemsClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TiemsClient::UpdateServiceOutcomeCallable TiemsClient::UpdateServiceCallable(const UpdateServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateServiceOutcome()>>(
        [this, request]()
        {
            return this->UpdateService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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

#include <tencentcloud/tsf/v20180326/TsfClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tsf::V20180326;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-26";
    const string ENDPOINT = "tsf.tencentcloudapi.com";
}

TsfClient::TsfClient(const Credential &credential, const string &region) :
    TsfClient(credential, region, ClientProfile())
{
}

TsfClient::TsfClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TsfClient::AddInstancesOutcome TsfClient::AddInstances(const AddInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AddInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddInstancesResponse rsp = AddInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddInstancesOutcome(rsp);
        else
            return AddInstancesOutcome(o.GetError());
    }
    else
    {
        return AddInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::AddInstancesAsync(const AddInstancesRequest& request, const AddInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::AddInstancesOutcomeCallable TsfClient::AddInstancesCallable(const AddInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddInstancesOutcome()>>(
        [this, request]()
        {
            return this->AddInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateApplicationOutcome TsfClient::CreateApplication(const CreateApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationResponse rsp = CreateApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationOutcome(rsp);
        else
            return CreateApplicationOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationOutcome(outcome.GetError());
    }
}

void TsfClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateApplicationOutcomeCallable TsfClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
        [this, request]()
        {
            return this->CreateApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateClusterOutcome TsfClient::CreateCluster(const CreateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterResponse rsp = CreateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterOutcome(rsp);
        else
            return CreateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateClusterOutcome(outcome.GetError());
    }
}

void TsfClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateClusterOutcomeCallable TsfClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateContainGroupOutcome TsfClient::CreateContainGroup(const CreateContainGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContainGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContainGroupResponse rsp = CreateContainGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContainGroupOutcome(rsp);
        else
            return CreateContainGroupOutcome(o.GetError());
    }
    else
    {
        return CreateContainGroupOutcome(outcome.GetError());
    }
}

void TsfClient::CreateContainGroupAsync(const CreateContainGroupRequest& request, const CreateContainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateContainGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateContainGroupOutcomeCallable TsfClient::CreateContainGroupCallable(const CreateContainGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateContainGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateContainGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateGroupOutcome TsfClient::CreateGroup(const CreateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupResponse rsp = CreateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupOutcome(rsp);
        else
            return CreateGroupOutcome(o.GetError());
    }
    else
    {
        return CreateGroupOutcome(outcome.GetError());
    }
}

void TsfClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateGroupOutcomeCallable TsfClient::CreateGroupCallable(const CreateGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateMicroserviceOutcome TsfClient::CreateMicroservice(const CreateMicroserviceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMicroservice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMicroserviceResponse rsp = CreateMicroserviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMicroserviceOutcome(rsp);
        else
            return CreateMicroserviceOutcome(o.GetError());
    }
    else
    {
        return CreateMicroserviceOutcome(outcome.GetError());
    }
}

void TsfClient::CreateMicroserviceAsync(const CreateMicroserviceRequest& request, const CreateMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMicroservice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateMicroserviceOutcomeCallable TsfClient::CreateMicroserviceCallable(const CreateMicroserviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMicroserviceOutcome()>>(
        [this, request]()
        {
            return this->CreateMicroservice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateNamespaceOutcome TsfClient::CreateNamespace(const CreateNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNamespaceResponse rsp = CreateNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNamespaceOutcome(rsp);
        else
            return CreateNamespaceOutcome(o.GetError());
    }
    else
    {
        return CreateNamespaceOutcome(outcome.GetError());
    }
}

void TsfClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateNamespaceOutcomeCallable TsfClient::CreateNamespaceCallable(const CreateNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNamespaceOutcome()>>(
        [this, request]()
        {
            return this->CreateNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteApplicationOutcome TsfClient::DeleteApplication(const DeleteApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationResponse rsp = DeleteApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationOutcome(rsp);
        else
            return DeleteApplicationOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteApplicationOutcomeCallable TsfClient::DeleteApplicationCallable(const DeleteApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteContainerGroupOutcome TsfClient::DeleteContainerGroup(const DeleteContainerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteContainerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteContainerGroupResponse rsp = DeleteContainerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteContainerGroupOutcome(rsp);
        else
            return DeleteContainerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteContainerGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteContainerGroupAsync(const DeleteContainerGroupRequest& request, const DeleteContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteContainerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteContainerGroupOutcomeCallable TsfClient::DeleteContainerGroupCallable(const DeleteContainerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteContainerGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteContainerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteGroupOutcome TsfClient::DeleteGroup(const DeleteGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGroupResponse rsp = DeleteGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGroupOutcome(rsp);
        else
            return DeleteGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteGroupOutcomeCallable TsfClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteImageTagsOutcome TsfClient::DeleteImageTags(const DeleteImageTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageTagsResponse rsp = DeleteImageTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageTagsOutcome(rsp);
        else
            return DeleteImageTagsOutcome(o.GetError());
    }
    else
    {
        return DeleteImageTagsOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteImageTagsAsync(const DeleteImageTagsRequest& request, const DeleteImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImageTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteImageTagsOutcomeCallable TsfClient::DeleteImageTagsCallable(const DeleteImageTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageTagsOutcome()>>(
        [this, request]()
        {
            return this->DeleteImageTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteMicroserviceOutcome TsfClient::DeleteMicroservice(const DeleteMicroserviceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMicroservice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMicroserviceResponse rsp = DeleteMicroserviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMicroserviceOutcome(rsp);
        else
            return DeleteMicroserviceOutcome(o.GetError());
    }
    else
    {
        return DeleteMicroserviceOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteMicroserviceAsync(const DeleteMicroserviceRequest& request, const DeleteMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMicroservice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteMicroserviceOutcomeCallable TsfClient::DeleteMicroserviceCallable(const DeleteMicroserviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMicroserviceOutcome()>>(
        [this, request]()
        {
            return this->DeleteMicroservice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteNamespaceOutcome TsfClient::DeleteNamespace(const DeleteNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNamespaceResponse rsp = DeleteNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNamespaceOutcome(rsp);
        else
            return DeleteNamespaceOutcome(o.GetError());
    }
    else
    {
        return DeleteNamespaceOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteNamespaceOutcomeCallable TsfClient::DeleteNamespaceCallable(const DeleteNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNamespaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeletePkgsOutcome TsfClient::DeletePkgs(const DeletePkgsRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePkgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePkgsResponse rsp = DeletePkgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePkgsOutcome(rsp);
        else
            return DeletePkgsOutcome(o.GetError());
    }
    else
    {
        return DeletePkgsOutcome(outcome.GetError());
    }
}

void TsfClient::DeletePkgsAsync(const DeletePkgsRequest& request, const DeletePkgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePkgs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeletePkgsOutcomeCallable TsfClient::DeletePkgsCallable(const DeletePkgsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePkgsOutcome()>>(
        [this, request]()
        {
            return this->DeletePkgs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeployContainerGroupOutcome TsfClient::DeployContainerGroup(const DeployContainerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeployContainerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployContainerGroupResponse rsp = DeployContainerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployContainerGroupOutcome(rsp);
        else
            return DeployContainerGroupOutcome(o.GetError());
    }
    else
    {
        return DeployContainerGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeployContainerGroupAsync(const DeployContainerGroupRequest& request, const DeployContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployContainerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeployContainerGroupOutcomeCallable TsfClient::DeployContainerGroupCallable(const DeployContainerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployContainerGroupOutcome()>>(
        [this, request]()
        {
            return this->DeployContainerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeployGroupOutcome TsfClient::DeployGroup(const DeployGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeployGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployGroupResponse rsp = DeployGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployGroupOutcome(rsp);
        else
            return DeployGroupOutcome(o.GetError());
    }
    else
    {
        return DeployGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeployGroupAsync(const DeployGroupRequest& request, const DeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeployGroupOutcomeCallable TsfClient::DeployGroupCallable(const DeployGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployGroupOutcome()>>(
        [this, request]()
        {
            return this->DeployGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeApplicationOutcome TsfClient::DescribeApplication(const DescribeApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationResponse rsp = DescribeApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationOutcome(rsp);
        else
            return DescribeApplicationOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeApplicationOutcomeCallable TsfClient::DescribeApplicationCallable(const DescribeApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeApplicationAttributeOutcome TsfClient::DescribeApplicationAttribute(const DescribeApplicationAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationAttributeResponse rsp = DescribeApplicationAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationAttributeOutcome(rsp);
        else
            return DescribeApplicationAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationAttributeOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApplicationAttributeAsync(const DescribeApplicationAttributeRequest& request, const DescribeApplicationAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeApplicationAttributeOutcomeCallable TsfClient::DescribeApplicationAttributeCallable(const DescribeApplicationAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationAttributeOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeApplicationsOutcome TsfClient::DescribeApplications(const DescribeApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationsResponse rsp = DescribeApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationsOutcome(rsp);
        else
            return DescribeApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeApplicationsOutcomeCallable TsfClient::DescribeApplicationsCallable(const DescribeApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeClusterInstancesOutcome TsfClient::DescribeClusterInstances(const DescribeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInstancesResponse rsp = DescribeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInstancesOutcome(rsp);
        else
            return DescribeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeClusterInstancesAsync(const DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeClusterInstancesOutcomeCallable TsfClient::DescribeClusterInstancesCallable(const DescribeClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeContainerGroupDetailOutcome TsfClient::DescribeContainerGroupDetail(const DescribeContainerGroupDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerGroupDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerGroupDetailResponse rsp = DescribeContainerGroupDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerGroupDetailOutcome(rsp);
        else
            return DescribeContainerGroupDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerGroupDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeContainerGroupDetailAsync(const DescribeContainerGroupDetailRequest& request, const DescribeContainerGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContainerGroupDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeContainerGroupDetailOutcomeCallable TsfClient::DescribeContainerGroupDetailCallable(const DescribeContainerGroupDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContainerGroupDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeContainerGroupDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeContainerGroupsOutcome TsfClient::DescribeContainerGroups(const DescribeContainerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerGroupsResponse rsp = DescribeContainerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerGroupsOutcome(rsp);
        else
            return DescribeContainerGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerGroupsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeContainerGroupsAsync(const DescribeContainerGroupsRequest& request, const DescribeContainerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContainerGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeContainerGroupsOutcomeCallable TsfClient::DescribeContainerGroupsCallable(const DescribeContainerGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContainerGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeContainerGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeDownloadInfoOutcome TsfClient::DescribeDownloadInfo(const DescribeDownloadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDownloadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDownloadInfoResponse rsp = DescribeDownloadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDownloadInfoOutcome(rsp);
        else
            return DescribeDownloadInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDownloadInfoOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeDownloadInfoAsync(const DescribeDownloadInfoRequest& request, const DescribeDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDownloadInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeDownloadInfoOutcomeCallable TsfClient::DescribeDownloadInfoCallable(const DescribeDownloadInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDownloadInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDownloadInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeGroupOutcome TsfClient::DescribeGroup(const DescribeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupResponse rsp = DescribeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupOutcome(rsp);
        else
            return DescribeGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGroupOutcomeCallable TsfClient::DescribeGroupCallable(const DescribeGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeGroupInstancesOutcome TsfClient::DescribeGroupInstances(const DescribeGroupInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupInstancesResponse rsp = DescribeGroupInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupInstancesOutcome(rsp);
        else
            return DescribeGroupInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupInstancesAsync(const DescribeGroupInstancesRequest& request, const DescribeGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGroupInstancesOutcomeCallable TsfClient::DescribeGroupInstancesCallable(const DescribeGroupInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeGroupsOutcome TsfClient::DescribeGroups(const DescribeGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupsResponse rsp = DescribeGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupsOutcome(rsp);
        else
            return DescribeGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupsAsync(const DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGroupsOutcomeCallable TsfClient::DescribeGroupsCallable(const DescribeGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeImageTagsOutcome TsfClient::DescribeImageTags(const DescribeImageTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageTagsResponse rsp = DescribeImageTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageTagsOutcome(rsp);
        else
            return DescribeImageTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeImageTagsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeImageTagsAsync(const DescribeImageTagsRequest& request, const DescribeImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeImageTagsOutcomeCallable TsfClient::DescribeImageTagsCallable(const DescribeImageTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeMicroserviceOutcome TsfClient::DescribeMicroservice(const DescribeMicroserviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMicroservice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMicroserviceResponse rsp = DescribeMicroserviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMicroserviceOutcome(rsp);
        else
            return DescribeMicroserviceOutcome(o.GetError());
    }
    else
    {
        return DescribeMicroserviceOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeMicroserviceAsync(const DescribeMicroserviceRequest& request, const DescribeMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMicroservice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeMicroserviceOutcomeCallable TsfClient::DescribeMicroserviceCallable(const DescribeMicroserviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMicroserviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeMicroservice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeMicroservicesOutcome TsfClient::DescribeMicroservices(const DescribeMicroservicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMicroservices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMicroservicesResponse rsp = DescribeMicroservicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMicroservicesOutcome(rsp);
        else
            return DescribeMicroservicesOutcome(o.GetError());
    }
    else
    {
        return DescribeMicroservicesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeMicroservicesAsync(const DescribeMicroservicesRequest& request, const DescribeMicroservicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMicroservices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeMicroservicesOutcomeCallable TsfClient::DescribeMicroservicesCallable(const DescribeMicroservicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMicroservicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMicroservices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribePkgsOutcome TsfClient::DescribePkgs(const DescribePkgsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePkgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePkgsResponse rsp = DescribePkgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePkgsOutcome(rsp);
        else
            return DescribePkgsOutcome(o.GetError());
    }
    else
    {
        return DescribePkgsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePkgsAsync(const DescribePkgsRequest& request, const DescribePkgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePkgs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribePkgsOutcomeCallable TsfClient::DescribePkgsCallable(const DescribePkgsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePkgsOutcome()>>(
        [this, request]()
        {
            return this->DescribePkgs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeSimpleApplicationsOutcome TsfClient::DescribeSimpleApplications(const DescribeSimpleApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleApplicationsResponse rsp = DescribeSimpleApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleApplicationsOutcome(rsp);
        else
            return DescribeSimpleApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleApplicationsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeSimpleApplicationsAsync(const DescribeSimpleApplicationsRequest& request, const DescribeSimpleApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSimpleApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeSimpleApplicationsOutcomeCallable TsfClient::DescribeSimpleApplicationsCallable(const DescribeSimpleApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSimpleApplicationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSimpleApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeSimpleClustersOutcome TsfClient::DescribeSimpleClusters(const DescribeSimpleClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleClustersResponse rsp = DescribeSimpleClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleClustersOutcome(rsp);
        else
            return DescribeSimpleClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleClustersOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeSimpleClustersAsync(const DescribeSimpleClustersRequest& request, const DescribeSimpleClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSimpleClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeSimpleClustersOutcomeCallable TsfClient::DescribeSimpleClustersCallable(const DescribeSimpleClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSimpleClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeSimpleClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeSimpleGroupsOutcome TsfClient::DescribeSimpleGroups(const DescribeSimpleGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleGroupsResponse rsp = DescribeSimpleGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleGroupsOutcome(rsp);
        else
            return DescribeSimpleGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleGroupsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeSimpleGroupsAsync(const DescribeSimpleGroupsRequest& request, const DescribeSimpleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSimpleGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeSimpleGroupsOutcomeCallable TsfClient::DescribeSimpleGroupsCallable(const DescribeSimpleGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSimpleGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSimpleGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeSimpleNamespacesOutcome TsfClient::DescribeSimpleNamespaces(const DescribeSimpleNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleNamespacesResponse rsp = DescribeSimpleNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleNamespacesOutcome(rsp);
        else
            return DescribeSimpleNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleNamespacesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeSimpleNamespacesAsync(const DescribeSimpleNamespacesRequest& request, const DescribeSimpleNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSimpleNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeSimpleNamespacesOutcomeCallable TsfClient::DescribeSimpleNamespacesCallable(const DescribeSimpleNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSimpleNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSimpleNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeUploadInfoOutcome TsfClient::DescribeUploadInfo(const DescribeUploadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadInfoResponse rsp = DescribeUploadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadInfoOutcome(rsp);
        else
            return DescribeUploadInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadInfoOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUploadInfoAsync(const DescribeUploadInfoRequest& request, const DescribeUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUploadInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeUploadInfoOutcomeCallable TsfClient::DescribeUploadInfoCallable(const DescribeUploadInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUploadInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUploadInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ExpandGroupOutcome TsfClient::ExpandGroup(const ExpandGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ExpandGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExpandGroupResponse rsp = ExpandGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExpandGroupOutcome(rsp);
        else
            return ExpandGroupOutcome(o.GetError());
    }
    else
    {
        return ExpandGroupOutcome(outcome.GetError());
    }
}

void TsfClient::ExpandGroupAsync(const ExpandGroupRequest& request, const ExpandGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExpandGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ExpandGroupOutcomeCallable TsfClient::ExpandGroupCallable(const ExpandGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExpandGroupOutcome()>>(
        [this, request]()
        {
            return this->ExpandGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ModifyContainerGroupOutcome TsfClient::ModifyContainerGroup(const ModifyContainerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyContainerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyContainerGroupResponse rsp = ModifyContainerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyContainerGroupOutcome(rsp);
        else
            return ModifyContainerGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyContainerGroupOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyContainerGroupAsync(const ModifyContainerGroupRequest& request, const ModifyContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyContainerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ModifyContainerGroupOutcomeCallable TsfClient::ModifyContainerGroupCallable(const ModifyContainerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyContainerGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyContainerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ModifyContainerReplicasOutcome TsfClient::ModifyContainerReplicas(const ModifyContainerReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyContainerReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyContainerReplicasResponse rsp = ModifyContainerReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyContainerReplicasOutcome(rsp);
        else
            return ModifyContainerReplicasOutcome(o.GetError());
    }
    else
    {
        return ModifyContainerReplicasOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyContainerReplicasAsync(const ModifyContainerReplicasRequest& request, const ModifyContainerReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyContainerReplicas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ModifyContainerReplicasOutcomeCallable TsfClient::ModifyContainerReplicasCallable(const ModifyContainerReplicasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyContainerReplicasOutcome()>>(
        [this, request]()
        {
            return this->ModifyContainerReplicas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ModifyMicroserviceOutcome TsfClient::ModifyMicroservice(const ModifyMicroserviceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMicroservice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMicroserviceResponse rsp = ModifyMicroserviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMicroserviceOutcome(rsp);
        else
            return ModifyMicroserviceOutcome(o.GetError());
    }
    else
    {
        return ModifyMicroserviceOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyMicroserviceAsync(const ModifyMicroserviceRequest& request, const ModifyMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMicroservice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ModifyMicroserviceOutcomeCallable TsfClient::ModifyMicroserviceCallable(const ModifyMicroserviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMicroserviceOutcome()>>(
        [this, request]()
        {
            return this->ModifyMicroservice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ModifyUploadInfoOutcome TsfClient::ModifyUploadInfo(const ModifyUploadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUploadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUploadInfoResponse rsp = ModifyUploadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUploadInfoOutcome(rsp);
        else
            return ModifyUploadInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyUploadInfoOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyUploadInfoAsync(const ModifyUploadInfoRequest& request, const ModifyUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUploadInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ModifyUploadInfoOutcomeCallable TsfClient::ModifyUploadInfoCallable(const ModifyUploadInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUploadInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyUploadInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::RemoveInstancesOutcome TsfClient::RemoveInstances(const RemoveInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveInstancesResponse rsp = RemoveInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveInstancesOutcome(rsp);
        else
            return RemoveInstancesOutcome(o.GetError());
    }
    else
    {
        return RemoveInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::RemoveInstancesAsync(const RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::RemoveInstancesOutcomeCallable TsfClient::RemoveInstancesCallable(const RemoveInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveInstancesOutcome()>>(
        [this, request]()
        {
            return this->RemoveInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ShrinkGroupOutcome TsfClient::ShrinkGroup(const ShrinkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ShrinkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ShrinkGroupResponse rsp = ShrinkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ShrinkGroupOutcome(rsp);
        else
            return ShrinkGroupOutcome(o.GetError());
    }
    else
    {
        return ShrinkGroupOutcome(outcome.GetError());
    }
}

void TsfClient::ShrinkGroupAsync(const ShrinkGroupRequest& request, const ShrinkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ShrinkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ShrinkGroupOutcomeCallable TsfClient::ShrinkGroupCallable(const ShrinkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ShrinkGroupOutcome()>>(
        [this, request]()
        {
            return this->ShrinkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ShrinkInstancesOutcome TsfClient::ShrinkInstances(const ShrinkInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ShrinkInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ShrinkInstancesResponse rsp = ShrinkInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ShrinkInstancesOutcome(rsp);
        else
            return ShrinkInstancesOutcome(o.GetError());
    }
    else
    {
        return ShrinkInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::ShrinkInstancesAsync(const ShrinkInstancesRequest& request, const ShrinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ShrinkInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ShrinkInstancesOutcomeCallable TsfClient::ShrinkInstancesCallable(const ShrinkInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ShrinkInstancesOutcome()>>(
        [this, request]()
        {
            return this->ShrinkInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::StartContainerGroupOutcome TsfClient::StartContainerGroup(const StartContainerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "StartContainerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartContainerGroupResponse rsp = StartContainerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartContainerGroupOutcome(rsp);
        else
            return StartContainerGroupOutcome(o.GetError());
    }
    else
    {
        return StartContainerGroupOutcome(outcome.GetError());
    }
}

void TsfClient::StartContainerGroupAsync(const StartContainerGroupRequest& request, const StartContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartContainerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::StartContainerGroupOutcomeCallable TsfClient::StartContainerGroupCallable(const StartContainerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartContainerGroupOutcome()>>(
        [this, request]()
        {
            return this->StartContainerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::StartGroupOutcome TsfClient::StartGroup(const StartGroupRequest &request)
{
    auto outcome = MakeRequest(request, "StartGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartGroupResponse rsp = StartGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartGroupOutcome(rsp);
        else
            return StartGroupOutcome(o.GetError());
    }
    else
    {
        return StartGroupOutcome(outcome.GetError());
    }
}

void TsfClient::StartGroupAsync(const StartGroupRequest& request, const StartGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::StartGroupOutcomeCallable TsfClient::StartGroupCallable(const StartGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartGroupOutcome()>>(
        [this, request]()
        {
            return this->StartGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::StopContainerGroupOutcome TsfClient::StopContainerGroup(const StopContainerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "StopContainerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopContainerGroupResponse rsp = StopContainerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopContainerGroupOutcome(rsp);
        else
            return StopContainerGroupOutcome(o.GetError());
    }
    else
    {
        return StopContainerGroupOutcome(outcome.GetError());
    }
}

void TsfClient::StopContainerGroupAsync(const StopContainerGroupRequest& request, const StopContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopContainerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::StopContainerGroupOutcomeCallable TsfClient::StopContainerGroupCallable(const StopContainerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopContainerGroupOutcome()>>(
        [this, request]()
        {
            return this->StopContainerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::StopGroupOutcome TsfClient::StopGroup(const StopGroupRequest &request)
{
    auto outcome = MakeRequest(request, "StopGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopGroupResponse rsp = StopGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopGroupOutcome(rsp);
        else
            return StopGroupOutcome(o.GetError());
    }
    else
    {
        return StopGroupOutcome(outcome.GetError());
    }
}

void TsfClient::StopGroupAsync(const StopGroupRequest& request, const StopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::StopGroupOutcomeCallable TsfClient::StopGroupCallable(const StopGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopGroupOutcome()>>(
        [this, request]()
        {
            return this->StopGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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

#include <tencentcloud/tke/v20180525/TkeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tke::V20180525;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-05-25";
    const string ENDPOINT = "tke.tencentcloudapi.com";
}

TkeClient::TkeClient(const Credential &credential, const string &region) :
    TkeClient(credential, region, ClientProfile())
{
}

TkeClient::TkeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TkeClient::AcquireClusterAdminRoleOutcome TkeClient::AcquireClusterAdminRole(const AcquireClusterAdminRoleRequest &request)
{
    auto outcome = MakeRequest(request, "AcquireClusterAdminRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcquireClusterAdminRoleResponse rsp = AcquireClusterAdminRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcquireClusterAdminRoleOutcome(rsp);
        else
            return AcquireClusterAdminRoleOutcome(o.GetError());
    }
    else
    {
        return AcquireClusterAdminRoleOutcome(outcome.GetError());
    }
}

void TkeClient::AcquireClusterAdminRoleAsync(const AcquireClusterAdminRoleRequest& request, const AcquireClusterAdminRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AcquireClusterAdminRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::AcquireClusterAdminRoleOutcomeCallable TkeClient::AcquireClusterAdminRoleCallable(const AcquireClusterAdminRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AcquireClusterAdminRoleOutcome()>>(
        [this, request]()
        {
            return this->AcquireClusterAdminRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::AddExistedInstancesOutcome TkeClient::AddExistedInstances(const AddExistedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AddExistedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddExistedInstancesResponse rsp = AddExistedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddExistedInstancesOutcome(rsp);
        else
            return AddExistedInstancesOutcome(o.GetError());
    }
    else
    {
        return AddExistedInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::AddExistedInstancesAsync(const AddExistedInstancesRequest& request, const AddExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddExistedInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::AddExistedInstancesOutcomeCallable TkeClient::AddExistedInstancesCallable(const AddExistedInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddExistedInstancesOutcome()>>(
        [this, request]()
        {
            return this->AddExistedInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::AddNodeToNodePoolOutcome TkeClient::AddNodeToNodePool(const AddNodeToNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "AddNodeToNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNodeToNodePoolResponse rsp = AddNodeToNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNodeToNodePoolOutcome(rsp);
        else
            return AddNodeToNodePoolOutcome(o.GetError());
    }
    else
    {
        return AddNodeToNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::AddNodeToNodePoolAsync(const AddNodeToNodePoolRequest& request, const AddNodeToNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddNodeToNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::AddNodeToNodePoolOutcomeCallable TkeClient::AddNodeToNodePoolCallable(const AddNodeToNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddNodeToNodePoolOutcome()>>(
        [this, request]()
        {
            return this->AddNodeToNodePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CheckInstancesUpgradeAbleOutcome TkeClient::CheckInstancesUpgradeAble(const CheckInstancesUpgradeAbleRequest &request)
{
    auto outcome = MakeRequest(request, "CheckInstancesUpgradeAble");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckInstancesUpgradeAbleResponse rsp = CheckInstancesUpgradeAbleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckInstancesUpgradeAbleOutcome(rsp);
        else
            return CheckInstancesUpgradeAbleOutcome(o.GetError());
    }
    else
    {
        return CheckInstancesUpgradeAbleOutcome(outcome.GetError());
    }
}

void TkeClient::CheckInstancesUpgradeAbleAsync(const CheckInstancesUpgradeAbleRequest& request, const CheckInstancesUpgradeAbleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckInstancesUpgradeAble(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CheckInstancesUpgradeAbleOutcomeCallable TkeClient::CheckInstancesUpgradeAbleCallable(const CheckInstancesUpgradeAbleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckInstancesUpgradeAbleOutcome()>>(
        [this, request]()
        {
            return this->CheckInstancesUpgradeAble(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterOutcome TkeClient::CreateCluster(const CreateClusterRequest &request)
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

void TkeClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterOutcomeCallable TkeClient::CreateClusterCallable(const CreateClusterRequest &request)
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

TkeClient::CreateClusterAsGroupOutcome TkeClient::CreateClusterAsGroup(const CreateClusterAsGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterAsGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterAsGroupResponse rsp = CreateClusterAsGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterAsGroupOutcome(rsp);
        else
            return CreateClusterAsGroupOutcome(o.GetError());
    }
    else
    {
        return CreateClusterAsGroupOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterAsGroupAsync(const CreateClusterAsGroupRequest& request, const CreateClusterAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterAsGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterAsGroupOutcomeCallable TkeClient::CreateClusterAsGroupCallable(const CreateClusterAsGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterAsGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterAsGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterEndpointOutcome TkeClient::CreateClusterEndpoint(const CreateClusterEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterEndpointResponse rsp = CreateClusterEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterEndpointOutcome(rsp);
        else
            return CreateClusterEndpointOutcome(o.GetError());
    }
    else
    {
        return CreateClusterEndpointOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterEndpointAsync(const CreateClusterEndpointRequest& request, const CreateClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterEndpointOutcomeCallable TkeClient::CreateClusterEndpointCallable(const CreateClusterEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterEndpointOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterEndpointVipOutcome TkeClient::CreateClusterEndpointVip(const CreateClusterEndpointVipRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterEndpointVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterEndpointVipResponse rsp = CreateClusterEndpointVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterEndpointVipOutcome(rsp);
        else
            return CreateClusterEndpointVipOutcome(o.GetError());
    }
    else
    {
        return CreateClusterEndpointVipOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterEndpointVipAsync(const CreateClusterEndpointVipRequest& request, const CreateClusterEndpointVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterEndpointVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterEndpointVipOutcomeCallable TkeClient::CreateClusterEndpointVipCallable(const CreateClusterEndpointVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterEndpointVipOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterEndpointVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterInstancesOutcome TkeClient::CreateClusterInstances(const CreateClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterInstancesResponse rsp = CreateClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterInstancesOutcome(rsp);
        else
            return CreateClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterInstancesAsync(const CreateClusterInstancesRequest& request, const CreateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterInstancesOutcomeCallable TkeClient::CreateClusterInstancesCallable(const CreateClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterNodePoolOutcome TkeClient::CreateClusterNodePool(const CreateClusterNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterNodePoolResponse rsp = CreateClusterNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterNodePoolOutcome(rsp);
        else
            return CreateClusterNodePoolOutcome(o.GetError());
    }
    else
    {
        return CreateClusterNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterNodePoolAsync(const CreateClusterNodePoolRequest& request, const CreateClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterNodePoolOutcomeCallable TkeClient::CreateClusterNodePoolCallable(const CreateClusterNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterNodePoolOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterNodePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterNodePoolFromExistingAsgOutcome TkeClient::CreateClusterNodePoolFromExistingAsg(const CreateClusterNodePoolFromExistingAsgRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterNodePoolFromExistingAsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterNodePoolFromExistingAsgResponse rsp = CreateClusterNodePoolFromExistingAsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterNodePoolFromExistingAsgOutcome(rsp);
        else
            return CreateClusterNodePoolFromExistingAsgOutcome(o.GetError());
    }
    else
    {
        return CreateClusterNodePoolFromExistingAsgOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterNodePoolFromExistingAsgAsync(const CreateClusterNodePoolFromExistingAsgRequest& request, const CreateClusterNodePoolFromExistingAsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterNodePoolFromExistingAsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterNodePoolFromExistingAsgOutcomeCallable TkeClient::CreateClusterNodePoolFromExistingAsgCallable(const CreateClusterNodePoolFromExistingAsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterNodePoolFromExistingAsgOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterNodePoolFromExistingAsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterRouteOutcome TkeClient::CreateClusterRoute(const CreateClusterRouteRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterRouteResponse rsp = CreateClusterRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterRouteOutcome(rsp);
        else
            return CreateClusterRouteOutcome(o.GetError());
    }
    else
    {
        return CreateClusterRouteOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterRouteAsync(const CreateClusterRouteRequest& request, const CreateClusterRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterRouteOutcomeCallable TkeClient::CreateClusterRouteCallable(const CreateClusterRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterRouteOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateClusterRouteTableOutcome TkeClient::CreateClusterRouteTable(const CreateClusterRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterRouteTableResponse rsp = CreateClusterRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterRouteTableOutcome(rsp);
        else
            return CreateClusterRouteTableOutcome(o.GetError());
    }
    else
    {
        return CreateClusterRouteTableOutcome(outcome.GetError());
    }
}

void TkeClient::CreateClusterRouteTableAsync(const CreateClusterRouteTableRequest& request, const CreateClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterRouteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateClusterRouteTableOutcomeCallable TkeClient::CreateClusterRouteTableCallable(const CreateClusterRouteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterRouteTableOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterRouteTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreatePrometheusDashboardOutcome TkeClient::CreatePrometheusDashboard(const CreatePrometheusDashboardRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusDashboard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusDashboardResponse rsp = CreatePrometheusDashboardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusDashboardOutcome(rsp);
        else
            return CreatePrometheusDashboardOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusDashboardOutcome(outcome.GetError());
    }
}

void TkeClient::CreatePrometheusDashboardAsync(const CreatePrometheusDashboardRequest& request, const CreatePrometheusDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusDashboard(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreatePrometheusDashboardOutcomeCallable TkeClient::CreatePrometheusDashboardCallable(const CreatePrometheusDashboardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusDashboardOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusDashboard(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterOutcome TkeClient::DeleteCluster(const DeleteClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterResponse rsp = DeleteClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterOutcome(rsp);
        else
            return DeleteClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterOutcomeCallable TkeClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
        [this, request]()
        {
            return this->DeleteCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterAsGroupsOutcome TkeClient::DeleteClusterAsGroups(const DeleteClusterAsGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterAsGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterAsGroupsResponse rsp = DeleteClusterAsGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterAsGroupsOutcome(rsp);
        else
            return DeleteClusterAsGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterAsGroupsOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterAsGroupsAsync(const DeleteClusterAsGroupsRequest& request, const DeleteClusterAsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterAsGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterAsGroupsOutcomeCallable TkeClient::DeleteClusterAsGroupsCallable(const DeleteClusterAsGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterAsGroupsOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterAsGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterEndpointOutcome TkeClient::DeleteClusterEndpoint(const DeleteClusterEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterEndpointResponse rsp = DeleteClusterEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterEndpointOutcome(rsp);
        else
            return DeleteClusterEndpointOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterEndpointOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterEndpointAsync(const DeleteClusterEndpointRequest& request, const DeleteClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterEndpointOutcomeCallable TkeClient::DeleteClusterEndpointCallable(const DeleteClusterEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterEndpointOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterEndpointVipOutcome TkeClient::DeleteClusterEndpointVip(const DeleteClusterEndpointVipRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterEndpointVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterEndpointVipResponse rsp = DeleteClusterEndpointVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterEndpointVipOutcome(rsp);
        else
            return DeleteClusterEndpointVipOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterEndpointVipOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterEndpointVipAsync(const DeleteClusterEndpointVipRequest& request, const DeleteClusterEndpointVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterEndpointVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterEndpointVipOutcomeCallable TkeClient::DeleteClusterEndpointVipCallable(const DeleteClusterEndpointVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterEndpointVipOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterEndpointVip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterInstancesOutcome TkeClient::DeleteClusterInstances(const DeleteClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterInstancesResponse rsp = DeleteClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterInstancesOutcome(rsp);
        else
            return DeleteClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterInstancesAsync(const DeleteClusterInstancesRequest& request, const DeleteClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterInstancesOutcomeCallable TkeClient::DeleteClusterInstancesCallable(const DeleteClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterNodePoolOutcome TkeClient::DeleteClusterNodePool(const DeleteClusterNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterNodePoolResponse rsp = DeleteClusterNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterNodePoolOutcome(rsp);
        else
            return DeleteClusterNodePoolOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterNodePoolAsync(const DeleteClusterNodePoolRequest& request, const DeleteClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterNodePoolOutcomeCallable TkeClient::DeleteClusterNodePoolCallable(const DeleteClusterNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterNodePoolOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterNodePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterRouteOutcome TkeClient::DeleteClusterRoute(const DeleteClusterRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterRouteResponse rsp = DeleteClusterRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterRouteOutcome(rsp);
        else
            return DeleteClusterRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterRouteOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterRouteAsync(const DeleteClusterRouteRequest& request, const DeleteClusterRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterRouteOutcomeCallable TkeClient::DeleteClusterRouteCallable(const DeleteClusterRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterRouteOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterRouteTableOutcome TkeClient::DeleteClusterRouteTable(const DeleteClusterRouteTableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterRouteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterRouteTableResponse rsp = DeleteClusterRouteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterRouteTableOutcome(rsp);
        else
            return DeleteClusterRouteTableOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterRouteTableOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterRouteTableAsync(const DeleteClusterRouteTableRequest& request, const DeleteClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterRouteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterRouteTableOutcomeCallable TkeClient::DeleteClusterRouteTableCallable(const DeleteClusterRouteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterRouteTableOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterRouteTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterAsGroupOptionOutcome TkeClient::DescribeClusterAsGroupOption(const DescribeClusterAsGroupOptionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterAsGroupOption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterAsGroupOptionResponse rsp = DescribeClusterAsGroupOptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterAsGroupOptionOutcome(rsp);
        else
            return DescribeClusterAsGroupOptionOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterAsGroupOptionOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterAsGroupOptionAsync(const DescribeClusterAsGroupOptionRequest& request, const DescribeClusterAsGroupOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterAsGroupOption(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterAsGroupOptionOutcomeCallable TkeClient::DescribeClusterAsGroupOptionCallable(const DescribeClusterAsGroupOptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterAsGroupOptionOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterAsGroupOption(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterAsGroupsOutcome TkeClient::DescribeClusterAsGroups(const DescribeClusterAsGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterAsGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterAsGroupsResponse rsp = DescribeClusterAsGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterAsGroupsOutcome(rsp);
        else
            return DescribeClusterAsGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterAsGroupsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterAsGroupsAsync(const DescribeClusterAsGroupsRequest& request, const DescribeClusterAsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterAsGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterAsGroupsOutcomeCallable TkeClient::DescribeClusterAsGroupsCallable(const DescribeClusterAsGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterAsGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterAsGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterEndpointStatusOutcome TkeClient::DescribeClusterEndpointStatus(const DescribeClusterEndpointStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterEndpointStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterEndpointStatusResponse rsp = DescribeClusterEndpointStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterEndpointStatusOutcome(rsp);
        else
            return DescribeClusterEndpointStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterEndpointStatusOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterEndpointStatusAsync(const DescribeClusterEndpointStatusRequest& request, const DescribeClusterEndpointStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterEndpointStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterEndpointStatusOutcomeCallable TkeClient::DescribeClusterEndpointStatusCallable(const DescribeClusterEndpointStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterEndpointStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterEndpointStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterEndpointVipStatusOutcome TkeClient::DescribeClusterEndpointVipStatus(const DescribeClusterEndpointVipStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterEndpointVipStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterEndpointVipStatusResponse rsp = DescribeClusterEndpointVipStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterEndpointVipStatusOutcome(rsp);
        else
            return DescribeClusterEndpointVipStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterEndpointVipStatusOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterEndpointVipStatusAsync(const DescribeClusterEndpointVipStatusRequest& request, const DescribeClusterEndpointVipStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterEndpointVipStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterEndpointVipStatusOutcomeCallable TkeClient::DescribeClusterEndpointVipStatusCallable(const DescribeClusterEndpointVipStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterEndpointVipStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterEndpointVipStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterInstancesOutcome TkeClient::DescribeClusterInstances(const DescribeClusterInstancesRequest &request)
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

void TkeClient::DescribeClusterInstancesAsync(const DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterInstancesOutcomeCallable TkeClient::DescribeClusterInstancesCallable(const DescribeClusterInstancesRequest &request)
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

TkeClient::DescribeClusterKubeconfigOutcome TkeClient::DescribeClusterKubeconfig(const DescribeClusterKubeconfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterKubeconfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterKubeconfigResponse rsp = DescribeClusterKubeconfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterKubeconfigOutcome(rsp);
        else
            return DescribeClusterKubeconfigOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterKubeconfigOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterKubeconfigAsync(const DescribeClusterKubeconfigRequest& request, const DescribeClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterKubeconfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterKubeconfigOutcomeCallable TkeClient::DescribeClusterKubeconfigCallable(const DescribeClusterKubeconfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterKubeconfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterKubeconfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterNodePoolDetailOutcome TkeClient::DescribeClusterNodePoolDetail(const DescribeClusterNodePoolDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterNodePoolDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterNodePoolDetailResponse rsp = DescribeClusterNodePoolDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterNodePoolDetailOutcome(rsp);
        else
            return DescribeClusterNodePoolDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterNodePoolDetailOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterNodePoolDetailAsync(const DescribeClusterNodePoolDetailRequest& request, const DescribeClusterNodePoolDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterNodePoolDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterNodePoolDetailOutcomeCallable TkeClient::DescribeClusterNodePoolDetailCallable(const DescribeClusterNodePoolDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterNodePoolDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterNodePoolDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterNodePoolsOutcome TkeClient::DescribeClusterNodePools(const DescribeClusterNodePoolsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterNodePools");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterNodePoolsResponse rsp = DescribeClusterNodePoolsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterNodePoolsOutcome(rsp);
        else
            return DescribeClusterNodePoolsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterNodePoolsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterNodePoolsAsync(const DescribeClusterNodePoolsRequest& request, const DescribeClusterNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterNodePools(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterNodePoolsOutcomeCallable TkeClient::DescribeClusterNodePoolsCallable(const DescribeClusterNodePoolsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterNodePoolsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterNodePools(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterRouteTablesOutcome TkeClient::DescribeClusterRouteTables(const DescribeClusterRouteTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRouteTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRouteTablesResponse rsp = DescribeClusterRouteTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRouteTablesOutcome(rsp);
        else
            return DescribeClusterRouteTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRouteTablesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterRouteTablesAsync(const DescribeClusterRouteTablesRequest& request, const DescribeClusterRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterRouteTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterRouteTablesOutcomeCallable TkeClient::DescribeClusterRouteTablesCallable(const DescribeClusterRouteTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterRouteTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterRouteTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterRoutesOutcome TkeClient::DescribeClusterRoutes(const DescribeClusterRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRoutesResponse rsp = DescribeClusterRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRoutesOutcome(rsp);
        else
            return DescribeClusterRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRoutesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterRoutesAsync(const DescribeClusterRoutesRequest& request, const DescribeClusterRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterRoutesOutcomeCallable TkeClient::DescribeClusterRoutesCallable(const DescribeClusterRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterRoutesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterSecurityOutcome TkeClient::DescribeClusterSecurity(const DescribeClusterSecurityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterSecurity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterSecurityResponse rsp = DescribeClusterSecurityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterSecurityOutcome(rsp);
        else
            return DescribeClusterSecurityOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterSecurityOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterSecurityAsync(const DescribeClusterSecurityRequest& request, const DescribeClusterSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterSecurity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterSecurityOutcomeCallable TkeClient::DescribeClusterSecurityCallable(const DescribeClusterSecurityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterSecurityOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterSecurity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClustersOutcome TkeClient::DescribeClusters(const DescribeClustersRequest &request)
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

void TkeClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClustersOutcomeCallable TkeClient::DescribeClustersCallable(const DescribeClustersRequest &request)
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

TkeClient::DescribeExistedInstancesOutcome TkeClient::DescribeExistedInstances(const DescribeExistedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExistedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExistedInstancesResponse rsp = DescribeExistedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExistedInstancesOutcome(rsp);
        else
            return DescribeExistedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeExistedInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeExistedInstancesAsync(const DescribeExistedInstancesRequest& request, const DescribeExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExistedInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeExistedInstancesOutcomeCallable TkeClient::DescribeExistedInstancesCallable(const DescribeExistedInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExistedInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeExistedInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeImagesOutcome TkeClient::DescribeImages(const DescribeImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagesResponse rsp = DescribeImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagesOutcome(rsp);
        else
            return DescribeImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeImagesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeImagesOutcomeCallable TkeClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusAgentInstancesOutcome TkeClient::DescribePrometheusAgentInstances(const DescribePrometheusAgentInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusAgentInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusAgentInstancesResponse rsp = DescribePrometheusAgentInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusAgentInstancesOutcome(rsp);
        else
            return DescribePrometheusAgentInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusAgentInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusAgentInstancesAsync(const DescribePrometheusAgentInstancesRequest& request, const DescribePrometheusAgentInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusAgentInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusAgentInstancesOutcomeCallable TkeClient::DescribePrometheusAgentInstancesCallable(const DescribePrometheusAgentInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusAgentInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusAgentInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeRegionsOutcome TkeClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeRegionsOutcomeCallable TkeClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeRouteTableConflictsOutcome TkeClient::DescribeRouteTableConflicts(const DescribeRouteTableConflictsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRouteTableConflicts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRouteTableConflictsResponse rsp = DescribeRouteTableConflictsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRouteTableConflictsOutcome(rsp);
        else
            return DescribeRouteTableConflictsOutcome(o.GetError());
    }
    else
    {
        return DescribeRouteTableConflictsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeRouteTableConflictsAsync(const DescribeRouteTableConflictsRequest& request, const DescribeRouteTableConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRouteTableConflicts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeRouteTableConflictsOutcomeCallable TkeClient::DescribeRouteTableConflictsCallable(const DescribeRouteTableConflictsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRouteTableConflictsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRouteTableConflicts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyClusterAsGroupAttributeOutcome TkeClient::ModifyClusterAsGroupAttribute(const ModifyClusterAsGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterAsGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterAsGroupAttributeResponse rsp = ModifyClusterAsGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterAsGroupAttributeOutcome(rsp);
        else
            return ModifyClusterAsGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterAsGroupAttributeOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterAsGroupAttributeAsync(const ModifyClusterAsGroupAttributeRequest& request, const ModifyClusterAsGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterAsGroupAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyClusterAsGroupAttributeOutcomeCallable TkeClient::ModifyClusterAsGroupAttributeCallable(const ModifyClusterAsGroupAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterAsGroupAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterAsGroupAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyClusterAttributeOutcome TkeClient::ModifyClusterAttribute(const ModifyClusterAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterAttributeResponse rsp = ModifyClusterAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterAttributeOutcome(rsp);
        else
            return ModifyClusterAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterAttributeOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterAttributeAsync(const ModifyClusterAttributeRequest& request, const ModifyClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyClusterAttributeOutcomeCallable TkeClient::ModifyClusterAttributeCallable(const ModifyClusterAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyClusterEndpointSPOutcome TkeClient::ModifyClusterEndpointSP(const ModifyClusterEndpointSPRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterEndpointSP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterEndpointSPResponse rsp = ModifyClusterEndpointSPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterEndpointSPOutcome(rsp);
        else
            return ModifyClusterEndpointSPOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterEndpointSPOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterEndpointSPAsync(const ModifyClusterEndpointSPRequest& request, const ModifyClusterEndpointSPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterEndpointSP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyClusterEndpointSPOutcomeCallable TkeClient::ModifyClusterEndpointSPCallable(const ModifyClusterEndpointSPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterEndpointSPOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterEndpointSP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyClusterNodePoolOutcome TkeClient::ModifyClusterNodePool(const ModifyClusterNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterNodePoolResponse rsp = ModifyClusterNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterNodePoolOutcome(rsp);
        else
            return ModifyClusterNodePoolOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterNodePoolAsync(const ModifyClusterNodePoolRequest& request, const ModifyClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyClusterNodePoolOutcomeCallable TkeClient::ModifyClusterNodePoolCallable(const ModifyClusterNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterNodePoolOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterNodePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::RemoveNodeFromNodePoolOutcome TkeClient::RemoveNodeFromNodePool(const RemoveNodeFromNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveNodeFromNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveNodeFromNodePoolResponse rsp = RemoveNodeFromNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveNodeFromNodePoolOutcome(rsp);
        else
            return RemoveNodeFromNodePoolOutcome(o.GetError());
    }
    else
    {
        return RemoveNodeFromNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::RemoveNodeFromNodePoolAsync(const RemoveNodeFromNodePoolRequest& request, const RemoveNodeFromNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveNodeFromNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::RemoveNodeFromNodePoolOutcomeCallable TkeClient::RemoveNodeFromNodePoolCallable(const RemoveNodeFromNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveNodeFromNodePoolOutcome()>>(
        [this, request]()
        {
            return this->RemoveNodeFromNodePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::UpgradeClusterInstancesOutcome TkeClient::UpgradeClusterInstances(const UpgradeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeClusterInstancesResponse rsp = UpgradeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeClusterInstancesOutcome(rsp);
        else
            return UpgradeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return UpgradeClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::UpgradeClusterInstancesAsync(const UpgradeClusterInstancesRequest& request, const UpgradeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::UpgradeClusterInstancesOutcomeCallable TkeClient::UpgradeClusterInstancesCallable(const UpgradeClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->UpgradeClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


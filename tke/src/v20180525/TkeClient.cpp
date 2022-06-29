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

TkeClient::AddClusterCIDROutcome TkeClient::AddClusterCIDR(const AddClusterCIDRRequest &request)
{
    auto outcome = MakeRequest(request, "AddClusterCIDR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddClusterCIDRResponse rsp = AddClusterCIDRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddClusterCIDROutcome(rsp);
        else
            return AddClusterCIDROutcome(o.GetError());
    }
    else
    {
        return AddClusterCIDROutcome(outcome.GetError());
    }
}

void TkeClient::AddClusterCIDRAsync(const AddClusterCIDRRequest& request, const AddClusterCIDRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddClusterCIDR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::AddClusterCIDROutcomeCallable TkeClient::AddClusterCIDRCallable(const AddClusterCIDRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddClusterCIDROutcome()>>(
        [this, request]()
        {
            return this->AddClusterCIDR(request);
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

TkeClient::AddVpcCniSubnetsOutcome TkeClient::AddVpcCniSubnets(const AddVpcCniSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "AddVpcCniSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddVpcCniSubnetsResponse rsp = AddVpcCniSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddVpcCniSubnetsOutcome(rsp);
        else
            return AddVpcCniSubnetsOutcome(o.GetError());
    }
    else
    {
        return AddVpcCniSubnetsOutcome(outcome.GetError());
    }
}

void TkeClient::AddVpcCniSubnetsAsync(const AddVpcCniSubnetsRequest& request, const AddVpcCniSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddVpcCniSubnets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::AddVpcCniSubnetsOutcomeCallable TkeClient::AddVpcCniSubnetsCallable(const AddVpcCniSubnetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddVpcCniSubnetsOutcome()>>(
        [this, request]()
        {
            return this->AddVpcCniSubnets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CheckEdgeClusterCIDROutcome TkeClient::CheckEdgeClusterCIDR(const CheckEdgeClusterCIDRRequest &request)
{
    auto outcome = MakeRequest(request, "CheckEdgeClusterCIDR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckEdgeClusterCIDRResponse rsp = CheckEdgeClusterCIDRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckEdgeClusterCIDROutcome(rsp);
        else
            return CheckEdgeClusterCIDROutcome(o.GetError());
    }
    else
    {
        return CheckEdgeClusterCIDROutcome(outcome.GetError());
    }
}

void TkeClient::CheckEdgeClusterCIDRAsync(const CheckEdgeClusterCIDRRequest& request, const CheckEdgeClusterCIDRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckEdgeClusterCIDR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CheckEdgeClusterCIDROutcomeCallable TkeClient::CheckEdgeClusterCIDRCallable(const CheckEdgeClusterCIDRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckEdgeClusterCIDROutcome()>>(
        [this, request]()
        {
            return this->CheckEdgeClusterCIDR(request);
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

TkeClient::CreateECMInstancesOutcome TkeClient::CreateECMInstances(const CreateECMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateECMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateECMInstancesResponse rsp = CreateECMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateECMInstancesOutcome(rsp);
        else
            return CreateECMInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateECMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::CreateECMInstancesAsync(const CreateECMInstancesRequest& request, const CreateECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateECMInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateECMInstancesOutcomeCallable TkeClient::CreateECMInstancesCallable(const CreateECMInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateECMInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateECMInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateEKSClusterOutcome TkeClient::CreateEKSCluster(const CreateEKSClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEKSCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEKSClusterResponse rsp = CreateEKSClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEKSClusterOutcome(rsp);
        else
            return CreateEKSClusterOutcome(o.GetError());
    }
    else
    {
        return CreateEKSClusterOutcome(outcome.GetError());
    }
}

void TkeClient::CreateEKSClusterAsync(const CreateEKSClusterRequest& request, const CreateEKSClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEKSCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateEKSClusterOutcomeCallable TkeClient::CreateEKSClusterCallable(const CreateEKSClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEKSClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateEKSCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateEKSContainerInstancesOutcome TkeClient::CreateEKSContainerInstances(const CreateEKSContainerInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEKSContainerInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEKSContainerInstancesResponse rsp = CreateEKSContainerInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEKSContainerInstancesOutcome(rsp);
        else
            return CreateEKSContainerInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateEKSContainerInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::CreateEKSContainerInstancesAsync(const CreateEKSContainerInstancesRequest& request, const CreateEKSContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEKSContainerInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateEKSContainerInstancesOutcomeCallable TkeClient::CreateEKSContainerInstancesCallable(const CreateEKSContainerInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEKSContainerInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateEKSContainerInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateImageCacheOutcome TkeClient::CreateImageCache(const CreateImageCacheRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImageCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageCacheResponse rsp = CreateImageCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageCacheOutcome(rsp);
        else
            return CreateImageCacheOutcome(o.GetError());
    }
    else
    {
        return CreateImageCacheOutcome(outcome.GetError());
    }
}

void TkeClient::CreateImageCacheAsync(const CreateImageCacheRequest& request, const CreateImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImageCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateImageCacheOutcomeCallable TkeClient::CreateImageCacheCallable(const CreateImageCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImageCacheOutcome()>>(
        [this, request]()
        {
            return this->CreateImageCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreatePrometheusAlertPolicyOutcome TkeClient::CreatePrometheusAlertPolicy(const CreatePrometheusAlertPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusAlertPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusAlertPolicyResponse rsp = CreatePrometheusAlertPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusAlertPolicyOutcome(rsp);
        else
            return CreatePrometheusAlertPolicyOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusAlertPolicyOutcome(outcome.GetError());
    }
}

void TkeClient::CreatePrometheusAlertPolicyAsync(const CreatePrometheusAlertPolicyRequest& request, const CreatePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusAlertPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreatePrometheusAlertPolicyOutcomeCallable TkeClient::CreatePrometheusAlertPolicyCallable(const CreatePrometheusAlertPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusAlertPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusAlertPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreatePrometheusAlertRuleOutcome TkeClient::CreatePrometheusAlertRule(const CreatePrometheusAlertRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusAlertRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusAlertRuleResponse rsp = CreatePrometheusAlertRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusAlertRuleOutcome(rsp);
        else
            return CreatePrometheusAlertRuleOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusAlertRuleOutcome(outcome.GetError());
    }
}

void TkeClient::CreatePrometheusAlertRuleAsync(const CreatePrometheusAlertRuleRequest& request, const CreatePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusAlertRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreatePrometheusAlertRuleOutcomeCallable TkeClient::CreatePrometheusAlertRuleCallable(const CreatePrometheusAlertRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusAlertRuleOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusAlertRule(request);
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

TkeClient::CreatePrometheusGlobalNotificationOutcome TkeClient::CreatePrometheusGlobalNotification(const CreatePrometheusGlobalNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusGlobalNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusGlobalNotificationResponse rsp = CreatePrometheusGlobalNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusGlobalNotificationOutcome(rsp);
        else
            return CreatePrometheusGlobalNotificationOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusGlobalNotificationOutcome(outcome.GetError());
    }
}

void TkeClient::CreatePrometheusGlobalNotificationAsync(const CreatePrometheusGlobalNotificationRequest& request, const CreatePrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusGlobalNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreatePrometheusGlobalNotificationOutcomeCallable TkeClient::CreatePrometheusGlobalNotificationCallable(const CreatePrometheusGlobalNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusGlobalNotificationOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusGlobalNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreatePrometheusTempOutcome TkeClient::CreatePrometheusTemp(const CreatePrometheusTempRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusTemp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusTempResponse rsp = CreatePrometheusTempResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusTempOutcome(rsp);
        else
            return CreatePrometheusTempOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusTempOutcome(outcome.GetError());
    }
}

void TkeClient::CreatePrometheusTempAsync(const CreatePrometheusTempRequest& request, const CreatePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusTemp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreatePrometheusTempOutcomeCallable TkeClient::CreatePrometheusTempCallable(const CreatePrometheusTempRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusTempOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusTemp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreatePrometheusTemplateOutcome TkeClient::CreatePrometheusTemplate(const CreatePrometheusTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheusTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusTemplateResponse rsp = CreatePrometheusTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusTemplateOutcome(rsp);
        else
            return CreatePrometheusTemplateOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusTemplateOutcome(outcome.GetError());
    }
}

void TkeClient::CreatePrometheusTemplateAsync(const CreatePrometheusTemplateRequest& request, const CreatePrometheusTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheusTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreatePrometheusTemplateOutcomeCallable TkeClient::CreatePrometheusTemplateCallable(const CreatePrometheusTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheusTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateTKEEdgeClusterOutcome TkeClient::CreateTKEEdgeCluster(const CreateTKEEdgeClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTKEEdgeCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTKEEdgeClusterResponse rsp = CreateTKEEdgeClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTKEEdgeClusterOutcome(rsp);
        else
            return CreateTKEEdgeClusterOutcome(o.GetError());
    }
    else
    {
        return CreateTKEEdgeClusterOutcome(outcome.GetError());
    }
}

void TkeClient::CreateTKEEdgeClusterAsync(const CreateTKEEdgeClusterRequest& request, const CreateTKEEdgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTKEEdgeCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateTKEEdgeClusterOutcomeCallable TkeClient::CreateTKEEdgeClusterCallable(const CreateTKEEdgeClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTKEEdgeClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateTKEEdgeCluster(request);
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

TkeClient::DeleteECMInstancesOutcome TkeClient::DeleteECMInstances(const DeleteECMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteECMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteECMInstancesResponse rsp = DeleteECMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteECMInstancesOutcome(rsp);
        else
            return DeleteECMInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteECMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteECMInstancesAsync(const DeleteECMInstancesRequest& request, const DeleteECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteECMInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteECMInstancesOutcomeCallable TkeClient::DeleteECMInstancesCallable(const DeleteECMInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteECMInstancesOutcome()>>(
        [this, request]()
        {
            return this->DeleteECMInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteEKSClusterOutcome TkeClient::DeleteEKSCluster(const DeleteEKSClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEKSCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEKSClusterResponse rsp = DeleteEKSClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEKSClusterOutcome(rsp);
        else
            return DeleteEKSClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteEKSClusterOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteEKSClusterAsync(const DeleteEKSClusterRequest& request, const DeleteEKSClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEKSCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteEKSClusterOutcomeCallable TkeClient::DeleteEKSClusterCallable(const DeleteEKSClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEKSClusterOutcome()>>(
        [this, request]()
        {
            return this->DeleteEKSCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteEKSContainerInstancesOutcome TkeClient::DeleteEKSContainerInstances(const DeleteEKSContainerInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEKSContainerInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEKSContainerInstancesResponse rsp = DeleteEKSContainerInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEKSContainerInstancesOutcome(rsp);
        else
            return DeleteEKSContainerInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteEKSContainerInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteEKSContainerInstancesAsync(const DeleteEKSContainerInstancesRequest& request, const DeleteEKSContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEKSContainerInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteEKSContainerInstancesOutcomeCallable TkeClient::DeleteEKSContainerInstancesCallable(const DeleteEKSContainerInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEKSContainerInstancesOutcome()>>(
        [this, request]()
        {
            return this->DeleteEKSContainerInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteEdgeCVMInstancesOutcome TkeClient::DeleteEdgeCVMInstances(const DeleteEdgeCVMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeCVMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeCVMInstancesResponse rsp = DeleteEdgeCVMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeCVMInstancesOutcome(rsp);
        else
            return DeleteEdgeCVMInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeCVMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteEdgeCVMInstancesAsync(const DeleteEdgeCVMInstancesRequest& request, const DeleteEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEdgeCVMInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteEdgeCVMInstancesOutcomeCallable TkeClient::DeleteEdgeCVMInstancesCallable(const DeleteEdgeCVMInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEdgeCVMInstancesOutcome()>>(
        [this, request]()
        {
            return this->DeleteEdgeCVMInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteEdgeClusterInstancesOutcome TkeClient::DeleteEdgeClusterInstances(const DeleteEdgeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeClusterInstancesResponse rsp = DeleteEdgeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeClusterInstancesOutcome(rsp);
        else
            return DeleteEdgeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteEdgeClusterInstancesAsync(const DeleteEdgeClusterInstancesRequest& request, const DeleteEdgeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEdgeClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteEdgeClusterInstancesOutcomeCallable TkeClient::DeleteEdgeClusterInstancesCallable(const DeleteEdgeClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEdgeClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->DeleteEdgeClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteImageCachesOutcome TkeClient::DeleteImageCaches(const DeleteImageCachesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageCaches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageCachesResponse rsp = DeleteImageCachesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageCachesOutcome(rsp);
        else
            return DeleteImageCachesOutcome(o.GetError());
    }
    else
    {
        return DeleteImageCachesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteImageCachesAsync(const DeleteImageCachesRequest& request, const DeleteImageCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImageCaches(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteImageCachesOutcomeCallable TkeClient::DeleteImageCachesCallable(const DeleteImageCachesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageCachesOutcome()>>(
        [this, request]()
        {
            return this->DeleteImageCaches(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeletePrometheusAlertPolicyOutcome TkeClient::DeletePrometheusAlertPolicy(const DeletePrometheusAlertPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusAlertPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusAlertPolicyResponse rsp = DeletePrometheusAlertPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusAlertPolicyOutcome(rsp);
        else
            return DeletePrometheusAlertPolicyOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusAlertPolicyOutcome(outcome.GetError());
    }
}

void TkeClient::DeletePrometheusAlertPolicyAsync(const DeletePrometheusAlertPolicyRequest& request, const DeletePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusAlertPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeletePrometheusAlertPolicyOutcomeCallable TkeClient::DeletePrometheusAlertPolicyCallable(const DeletePrometheusAlertPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusAlertPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusAlertPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeletePrometheusAlertRuleOutcome TkeClient::DeletePrometheusAlertRule(const DeletePrometheusAlertRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusAlertRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusAlertRuleResponse rsp = DeletePrometheusAlertRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusAlertRuleOutcome(rsp);
        else
            return DeletePrometheusAlertRuleOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusAlertRuleOutcome(outcome.GetError());
    }
}

void TkeClient::DeletePrometheusAlertRuleAsync(const DeletePrometheusAlertRuleRequest& request, const DeletePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusAlertRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeletePrometheusAlertRuleOutcomeCallable TkeClient::DeletePrometheusAlertRuleCallable(const DeletePrometheusAlertRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusAlertRuleOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusAlertRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeletePrometheusTempOutcome TkeClient::DeletePrometheusTemp(const DeletePrometheusTempRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusTemp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusTempResponse rsp = DeletePrometheusTempResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusTempOutcome(rsp);
        else
            return DeletePrometheusTempOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusTempOutcome(outcome.GetError());
    }
}

void TkeClient::DeletePrometheusTempAsync(const DeletePrometheusTempRequest& request, const DeletePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusTemp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeletePrometheusTempOutcomeCallable TkeClient::DeletePrometheusTempCallable(const DeletePrometheusTempRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusTempOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusTemp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeletePrometheusTempSyncOutcome TkeClient::DeletePrometheusTempSync(const DeletePrometheusTempSyncRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusTempSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusTempSyncResponse rsp = DeletePrometheusTempSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusTempSyncOutcome(rsp);
        else
            return DeletePrometheusTempSyncOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusTempSyncOutcome(outcome.GetError());
    }
}

void TkeClient::DeletePrometheusTempSyncAsync(const DeletePrometheusTempSyncRequest& request, const DeletePrometheusTempSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusTempSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeletePrometheusTempSyncOutcomeCallable TkeClient::DeletePrometheusTempSyncCallable(const DeletePrometheusTempSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusTempSyncOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusTempSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeletePrometheusTemplateOutcome TkeClient::DeletePrometheusTemplate(const DeletePrometheusTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusTemplateResponse rsp = DeletePrometheusTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusTemplateOutcome(rsp);
        else
            return DeletePrometheusTemplateOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusTemplateOutcome(outcome.GetError());
    }
}

void TkeClient::DeletePrometheusTemplateAsync(const DeletePrometheusTemplateRequest& request, const DeletePrometheusTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeletePrometheusTemplateOutcomeCallable TkeClient::DeletePrometheusTemplateCallable(const DeletePrometheusTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeletePrometheusTemplateSyncOutcome TkeClient::DeletePrometheusTemplateSync(const DeletePrometheusTemplateSyncRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrometheusTemplateSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrometheusTemplateSyncResponse rsp = DeletePrometheusTemplateSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrometheusTemplateSyncOutcome(rsp);
        else
            return DeletePrometheusTemplateSyncOutcome(o.GetError());
    }
    else
    {
        return DeletePrometheusTemplateSyncOutcome(outcome.GetError());
    }
}

void TkeClient::DeletePrometheusTemplateSyncAsync(const DeletePrometheusTemplateSyncRequest& request, const DeletePrometheusTemplateSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrometheusTemplateSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeletePrometheusTemplateSyncOutcomeCallable TkeClient::DeletePrometheusTemplateSyncCallable(const DeletePrometheusTemplateSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrometheusTemplateSyncOutcome()>>(
        [this, request]()
        {
            return this->DeletePrometheusTemplateSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteTKEEdgeClusterOutcome TkeClient::DeleteTKEEdgeCluster(const DeleteTKEEdgeClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTKEEdgeCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTKEEdgeClusterResponse rsp = DeleteTKEEdgeClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTKEEdgeClusterOutcome(rsp);
        else
            return DeleteTKEEdgeClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteTKEEdgeClusterOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteTKEEdgeClusterAsync(const DeleteTKEEdgeClusterRequest& request, const DeleteTKEEdgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTKEEdgeCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteTKEEdgeClusterOutcomeCallable TkeClient::DeleteTKEEdgeClusterCallable(const DeleteTKEEdgeClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTKEEdgeClusterOutcome()>>(
        [this, request]()
        {
            return this->DeleteTKEEdgeCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeAvailableClusterVersionOutcome TkeClient::DescribeAvailableClusterVersion(const DescribeAvailableClusterVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableClusterVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableClusterVersionResponse rsp = DescribeAvailableClusterVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableClusterVersionOutcome(rsp);
        else
            return DescribeAvailableClusterVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableClusterVersionOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeAvailableClusterVersionAsync(const DescribeAvailableClusterVersionRequest& request, const DescribeAvailableClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailableClusterVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeAvailableClusterVersionOutcomeCallable TkeClient::DescribeAvailableClusterVersionCallable(const DescribeAvailableClusterVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailableClusterVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailableClusterVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeAvailableTKEEdgeVersionOutcome TkeClient::DescribeAvailableTKEEdgeVersion(const DescribeAvailableTKEEdgeVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableTKEEdgeVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableTKEEdgeVersionResponse rsp = DescribeAvailableTKEEdgeVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableTKEEdgeVersionOutcome(rsp);
        else
            return DescribeAvailableTKEEdgeVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableTKEEdgeVersionOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeAvailableTKEEdgeVersionAsync(const DescribeAvailableTKEEdgeVersionRequest& request, const DescribeAvailableTKEEdgeVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailableTKEEdgeVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeAvailableTKEEdgeVersionOutcomeCallable TkeClient::DescribeAvailableTKEEdgeVersionCallable(const DescribeAvailableTKEEdgeVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailableTKEEdgeVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailableTKEEdgeVersion(request);
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

TkeClient::DescribeClusterAuthenticationOptionsOutcome TkeClient::DescribeClusterAuthenticationOptions(const DescribeClusterAuthenticationOptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterAuthenticationOptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterAuthenticationOptionsResponse rsp = DescribeClusterAuthenticationOptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterAuthenticationOptionsOutcome(rsp);
        else
            return DescribeClusterAuthenticationOptionsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterAuthenticationOptionsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterAuthenticationOptionsAsync(const DescribeClusterAuthenticationOptionsRequest& request, const DescribeClusterAuthenticationOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterAuthenticationOptions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterAuthenticationOptionsOutcomeCallable TkeClient::DescribeClusterAuthenticationOptionsCallable(const DescribeClusterAuthenticationOptionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterAuthenticationOptionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterAuthenticationOptions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterCommonNamesOutcome TkeClient::DescribeClusterCommonNames(const DescribeClusterCommonNamesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterCommonNames");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterCommonNamesResponse rsp = DescribeClusterCommonNamesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterCommonNamesOutcome(rsp);
        else
            return DescribeClusterCommonNamesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterCommonNamesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterCommonNamesAsync(const DescribeClusterCommonNamesRequest& request, const DescribeClusterCommonNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterCommonNames(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterCommonNamesOutcomeCallable TkeClient::DescribeClusterCommonNamesCallable(const DescribeClusterCommonNamesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterCommonNamesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterCommonNames(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterControllersOutcome TkeClient::DescribeClusterControllers(const DescribeClusterControllersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterControllers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterControllersResponse rsp = DescribeClusterControllersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterControllersOutcome(rsp);
        else
            return DescribeClusterControllersOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterControllersOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterControllersAsync(const DescribeClusterControllersRequest& request, const DescribeClusterControllersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterControllers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterControllersOutcomeCallable TkeClient::DescribeClusterControllersCallable(const DescribeClusterControllersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterControllersOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterControllers(request);
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

TkeClient::DescribeClusterLevelAttributeOutcome TkeClient::DescribeClusterLevelAttribute(const DescribeClusterLevelAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterLevelAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterLevelAttributeResponse rsp = DescribeClusterLevelAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterLevelAttributeOutcome(rsp);
        else
            return DescribeClusterLevelAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterLevelAttributeOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterLevelAttributeAsync(const DescribeClusterLevelAttributeRequest& request, const DescribeClusterLevelAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterLevelAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterLevelAttributeOutcomeCallable TkeClient::DescribeClusterLevelAttributeCallable(const DescribeClusterLevelAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterLevelAttributeOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterLevelAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeClusterLevelChangeRecordsOutcome TkeClient::DescribeClusterLevelChangeRecords(const DescribeClusterLevelChangeRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterLevelChangeRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterLevelChangeRecordsResponse rsp = DescribeClusterLevelChangeRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterLevelChangeRecordsOutcome(rsp);
        else
            return DescribeClusterLevelChangeRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterLevelChangeRecordsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterLevelChangeRecordsAsync(const DescribeClusterLevelChangeRecordsRequest& request, const DescribeClusterLevelChangeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterLevelChangeRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterLevelChangeRecordsOutcomeCallable TkeClient::DescribeClusterLevelChangeRecordsCallable(const DescribeClusterLevelChangeRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterLevelChangeRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterLevelChangeRecords(request);
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

TkeClient::DescribeClusterStatusOutcome TkeClient::DescribeClusterStatus(const DescribeClusterStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterStatusResponse rsp = DescribeClusterStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterStatusOutcome(rsp);
        else
            return DescribeClusterStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterStatusOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeClusterStatusAsync(const DescribeClusterStatusRequest& request, const DescribeClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeClusterStatusOutcomeCallable TkeClient::DescribeClusterStatusCallable(const DescribeClusterStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterStatus(request);
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

TkeClient::DescribeECMInstancesOutcome TkeClient::DescribeECMInstances(const DescribeECMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeECMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeECMInstancesResponse rsp = DescribeECMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeECMInstancesOutcome(rsp);
        else
            return DescribeECMInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeECMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeECMInstancesAsync(const DescribeECMInstancesRequest& request, const DescribeECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeECMInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeECMInstancesOutcomeCallable TkeClient::DescribeECMInstancesCallable(const DescribeECMInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeECMInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeECMInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEKSClusterCredentialOutcome TkeClient::DescribeEKSClusterCredential(const DescribeEKSClusterCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEKSClusterCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEKSClusterCredentialResponse rsp = DescribeEKSClusterCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEKSClusterCredentialOutcome(rsp);
        else
            return DescribeEKSClusterCredentialOutcome(o.GetError());
    }
    else
    {
        return DescribeEKSClusterCredentialOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEKSClusterCredentialAsync(const DescribeEKSClusterCredentialRequest& request, const DescribeEKSClusterCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEKSClusterCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEKSClusterCredentialOutcomeCallable TkeClient::DescribeEKSClusterCredentialCallable(const DescribeEKSClusterCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEKSClusterCredentialOutcome()>>(
        [this, request]()
        {
            return this->DescribeEKSClusterCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEKSClustersOutcome TkeClient::DescribeEKSClusters(const DescribeEKSClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEKSClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEKSClustersResponse rsp = DescribeEKSClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEKSClustersOutcome(rsp);
        else
            return DescribeEKSClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeEKSClustersOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEKSClustersAsync(const DescribeEKSClustersRequest& request, const DescribeEKSClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEKSClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEKSClustersOutcomeCallable TkeClient::DescribeEKSClustersCallable(const DescribeEKSClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEKSClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeEKSClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEKSContainerInstanceEventOutcome TkeClient::DescribeEKSContainerInstanceEvent(const DescribeEKSContainerInstanceEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEKSContainerInstanceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEKSContainerInstanceEventResponse rsp = DescribeEKSContainerInstanceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEKSContainerInstanceEventOutcome(rsp);
        else
            return DescribeEKSContainerInstanceEventOutcome(o.GetError());
    }
    else
    {
        return DescribeEKSContainerInstanceEventOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEKSContainerInstanceEventAsync(const DescribeEKSContainerInstanceEventRequest& request, const DescribeEKSContainerInstanceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEKSContainerInstanceEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEKSContainerInstanceEventOutcomeCallable TkeClient::DescribeEKSContainerInstanceEventCallable(const DescribeEKSContainerInstanceEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEKSContainerInstanceEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeEKSContainerInstanceEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEKSContainerInstanceRegionsOutcome TkeClient::DescribeEKSContainerInstanceRegions(const DescribeEKSContainerInstanceRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEKSContainerInstanceRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEKSContainerInstanceRegionsResponse rsp = DescribeEKSContainerInstanceRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEKSContainerInstanceRegionsOutcome(rsp);
        else
            return DescribeEKSContainerInstanceRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeEKSContainerInstanceRegionsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEKSContainerInstanceRegionsAsync(const DescribeEKSContainerInstanceRegionsRequest& request, const DescribeEKSContainerInstanceRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEKSContainerInstanceRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEKSContainerInstanceRegionsOutcomeCallable TkeClient::DescribeEKSContainerInstanceRegionsCallable(const DescribeEKSContainerInstanceRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEKSContainerInstanceRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEKSContainerInstanceRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEKSContainerInstancesOutcome TkeClient::DescribeEKSContainerInstances(const DescribeEKSContainerInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEKSContainerInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEKSContainerInstancesResponse rsp = DescribeEKSContainerInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEKSContainerInstancesOutcome(rsp);
        else
            return DescribeEKSContainerInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeEKSContainerInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEKSContainerInstancesAsync(const DescribeEKSContainerInstancesRequest& request, const DescribeEKSContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEKSContainerInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEKSContainerInstancesOutcomeCallable TkeClient::DescribeEKSContainerInstancesCallable(const DescribeEKSContainerInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEKSContainerInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEKSContainerInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEdgeAvailableExtraArgsOutcome TkeClient::DescribeEdgeAvailableExtraArgs(const DescribeEdgeAvailableExtraArgsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeAvailableExtraArgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeAvailableExtraArgsResponse rsp = DescribeEdgeAvailableExtraArgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeAvailableExtraArgsOutcome(rsp);
        else
            return DescribeEdgeAvailableExtraArgsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeAvailableExtraArgsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEdgeAvailableExtraArgsAsync(const DescribeEdgeAvailableExtraArgsRequest& request, const DescribeEdgeAvailableExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeAvailableExtraArgs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEdgeAvailableExtraArgsOutcomeCallable TkeClient::DescribeEdgeAvailableExtraArgsCallable(const DescribeEdgeAvailableExtraArgsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeAvailableExtraArgsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeAvailableExtraArgs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEdgeCVMInstancesOutcome TkeClient::DescribeEdgeCVMInstances(const DescribeEdgeCVMInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeCVMInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeCVMInstancesResponse rsp = DescribeEdgeCVMInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeCVMInstancesOutcome(rsp);
        else
            return DescribeEdgeCVMInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeCVMInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEdgeCVMInstancesAsync(const DescribeEdgeCVMInstancesRequest& request, const DescribeEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeCVMInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEdgeCVMInstancesOutcomeCallable TkeClient::DescribeEdgeCVMInstancesCallable(const DescribeEdgeCVMInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeCVMInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeCVMInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEdgeClusterExtraArgsOutcome TkeClient::DescribeEdgeClusterExtraArgs(const DescribeEdgeClusterExtraArgsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeClusterExtraArgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeClusterExtraArgsResponse rsp = DescribeEdgeClusterExtraArgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeClusterExtraArgsOutcome(rsp);
        else
            return DescribeEdgeClusterExtraArgsOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeClusterExtraArgsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEdgeClusterExtraArgsAsync(const DescribeEdgeClusterExtraArgsRequest& request, const DescribeEdgeClusterExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeClusterExtraArgs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEdgeClusterExtraArgsOutcomeCallable TkeClient::DescribeEdgeClusterExtraArgsCallable(const DescribeEdgeClusterExtraArgsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeClusterExtraArgsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeClusterExtraArgs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEdgeClusterInstancesOutcome TkeClient::DescribeEdgeClusterInstances(const DescribeEdgeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeClusterInstancesResponse rsp = DescribeEdgeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeClusterInstancesOutcome(rsp);
        else
            return DescribeEdgeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeClusterInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEdgeClusterInstancesAsync(const DescribeEdgeClusterInstancesRequest& request, const DescribeEdgeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEdgeClusterInstancesOutcomeCallable TkeClient::DescribeEdgeClusterInstancesCallable(const DescribeEdgeClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEksContainerInstanceLogOutcome TkeClient::DescribeEksContainerInstanceLog(const DescribeEksContainerInstanceLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEksContainerInstanceLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEksContainerInstanceLogResponse rsp = DescribeEksContainerInstanceLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEksContainerInstanceLogOutcome(rsp);
        else
            return DescribeEksContainerInstanceLogOutcome(o.GetError());
    }
    else
    {
        return DescribeEksContainerInstanceLogOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEksContainerInstanceLogAsync(const DescribeEksContainerInstanceLogRequest& request, const DescribeEksContainerInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEksContainerInstanceLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEksContainerInstanceLogOutcomeCallable TkeClient::DescribeEksContainerInstanceLogCallable(const DescribeEksContainerInstanceLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEksContainerInstanceLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeEksContainerInstanceLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeEnableVpcCniProgressOutcome TkeClient::DescribeEnableVpcCniProgress(const DescribeEnableVpcCniProgressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnableVpcCniProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnableVpcCniProgressResponse rsp = DescribeEnableVpcCniProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnableVpcCniProgressOutcome(rsp);
        else
            return DescribeEnableVpcCniProgressOutcome(o.GetError());
    }
    else
    {
        return DescribeEnableVpcCniProgressOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeEnableVpcCniProgressAsync(const DescribeEnableVpcCniProgressRequest& request, const DescribeEnableVpcCniProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnableVpcCniProgress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeEnableVpcCniProgressOutcomeCallable TkeClient::DescribeEnableVpcCniProgressCallable(const DescribeEnableVpcCniProgressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnableVpcCniProgressOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnableVpcCniProgress(request);
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

TkeClient::DescribeExternalClusterSpecOutcome TkeClient::DescribeExternalClusterSpec(const DescribeExternalClusterSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExternalClusterSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExternalClusterSpecResponse rsp = DescribeExternalClusterSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExternalClusterSpecOutcome(rsp);
        else
            return DescribeExternalClusterSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeExternalClusterSpecOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeExternalClusterSpecAsync(const DescribeExternalClusterSpecRequest& request, const DescribeExternalClusterSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExternalClusterSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeExternalClusterSpecOutcomeCallable TkeClient::DescribeExternalClusterSpecCallable(const DescribeExternalClusterSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExternalClusterSpecOutcome()>>(
        [this, request]()
        {
            return this->DescribeExternalClusterSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeImageCachesOutcome TkeClient::DescribeImageCaches(const DescribeImageCachesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageCaches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageCachesResponse rsp = DescribeImageCachesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageCachesOutcome(rsp);
        else
            return DescribeImageCachesOutcome(o.GetError());
    }
    else
    {
        return DescribeImageCachesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeImageCachesAsync(const DescribeImageCachesRequest& request, const DescribeImageCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageCaches(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeImageCachesOutcomeCallable TkeClient::DescribeImageCachesCallable(const DescribeImageCachesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageCachesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageCaches(request);
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

TkeClient::DescribePrometheusAgentsOutcome TkeClient::DescribePrometheusAgents(const DescribePrometheusAgentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusAgents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusAgentsResponse rsp = DescribePrometheusAgentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusAgentsOutcome(rsp);
        else
            return DescribePrometheusAgentsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusAgentsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusAgentsAsync(const DescribePrometheusAgentsRequest& request, const DescribePrometheusAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusAgents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusAgentsOutcomeCallable TkeClient::DescribePrometheusAgentsCallable(const DescribePrometheusAgentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusAgentsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusAgents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusAlertHistoryOutcome TkeClient::DescribePrometheusAlertHistory(const DescribePrometheusAlertHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusAlertHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusAlertHistoryResponse rsp = DescribePrometheusAlertHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusAlertHistoryOutcome(rsp);
        else
            return DescribePrometheusAlertHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusAlertHistoryOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusAlertHistoryAsync(const DescribePrometheusAlertHistoryRequest& request, const DescribePrometheusAlertHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusAlertHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusAlertHistoryOutcomeCallable TkeClient::DescribePrometheusAlertHistoryCallable(const DescribePrometheusAlertHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusAlertHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusAlertHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusAlertPolicyOutcome TkeClient::DescribePrometheusAlertPolicy(const DescribePrometheusAlertPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusAlertPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusAlertPolicyResponse rsp = DescribePrometheusAlertPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusAlertPolicyOutcome(rsp);
        else
            return DescribePrometheusAlertPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusAlertPolicyOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusAlertPolicyAsync(const DescribePrometheusAlertPolicyRequest& request, const DescribePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusAlertPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusAlertPolicyOutcomeCallable TkeClient::DescribePrometheusAlertPolicyCallable(const DescribePrometheusAlertPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusAlertPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusAlertPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusAlertRuleOutcome TkeClient::DescribePrometheusAlertRule(const DescribePrometheusAlertRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusAlertRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusAlertRuleResponse rsp = DescribePrometheusAlertRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusAlertRuleOutcome(rsp);
        else
            return DescribePrometheusAlertRuleOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusAlertRuleOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusAlertRuleAsync(const DescribePrometheusAlertRuleRequest& request, const DescribePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusAlertRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusAlertRuleOutcomeCallable TkeClient::DescribePrometheusAlertRuleCallable(const DescribePrometheusAlertRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusAlertRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusAlertRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusClusterAgentsOutcome TkeClient::DescribePrometheusClusterAgents(const DescribePrometheusClusterAgentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusClusterAgents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusClusterAgentsResponse rsp = DescribePrometheusClusterAgentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusClusterAgentsOutcome(rsp);
        else
            return DescribePrometheusClusterAgentsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusClusterAgentsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusClusterAgentsAsync(const DescribePrometheusClusterAgentsRequest& request, const DescribePrometheusClusterAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusClusterAgents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusClusterAgentsOutcomeCallable TkeClient::DescribePrometheusClusterAgentsCallable(const DescribePrometheusClusterAgentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusClusterAgentsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusClusterAgents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusGlobalNotificationOutcome TkeClient::DescribePrometheusGlobalNotification(const DescribePrometheusGlobalNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusGlobalNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusGlobalNotificationResponse rsp = DescribePrometheusGlobalNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusGlobalNotificationOutcome(rsp);
        else
            return DescribePrometheusGlobalNotificationOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusGlobalNotificationOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusGlobalNotificationAsync(const DescribePrometheusGlobalNotificationRequest& request, const DescribePrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusGlobalNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusGlobalNotificationOutcomeCallable TkeClient::DescribePrometheusGlobalNotificationCallable(const DescribePrometheusGlobalNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusGlobalNotificationOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusGlobalNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusInstanceOutcome TkeClient::DescribePrometheusInstance(const DescribePrometheusInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusInstanceResponse rsp = DescribePrometheusInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusInstanceOutcome(rsp);
        else
            return DescribePrometheusInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusInstanceOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusInstanceAsync(const DescribePrometheusInstanceRequest& request, const DescribePrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusInstanceOutcomeCallable TkeClient::DescribePrometheusInstanceCallable(const DescribePrometheusInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusInstancesOverviewOutcome TkeClient::DescribePrometheusInstancesOverview(const DescribePrometheusInstancesOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusInstancesOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusInstancesOverviewResponse rsp = DescribePrometheusInstancesOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusInstancesOverviewOutcome(rsp);
        else
            return DescribePrometheusInstancesOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusInstancesOverviewOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusInstancesOverviewAsync(const DescribePrometheusInstancesOverviewRequest& request, const DescribePrometheusInstancesOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusInstancesOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusInstancesOverviewOutcomeCallable TkeClient::DescribePrometheusInstancesOverviewCallable(const DescribePrometheusInstancesOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusInstancesOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusInstancesOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusOverviewsOutcome TkeClient::DescribePrometheusOverviews(const DescribePrometheusOverviewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusOverviews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusOverviewsResponse rsp = DescribePrometheusOverviewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusOverviewsOutcome(rsp);
        else
            return DescribePrometheusOverviewsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusOverviewsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusOverviewsAsync(const DescribePrometheusOverviewsRequest& request, const DescribePrometheusOverviewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusOverviews(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusOverviewsOutcomeCallable TkeClient::DescribePrometheusOverviewsCallable(const DescribePrometheusOverviewsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusOverviewsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusOverviews(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusRecordRulesOutcome TkeClient::DescribePrometheusRecordRules(const DescribePrometheusRecordRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusRecordRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusRecordRulesResponse rsp = DescribePrometheusRecordRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusRecordRulesOutcome(rsp);
        else
            return DescribePrometheusRecordRulesOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusRecordRulesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusRecordRulesAsync(const DescribePrometheusRecordRulesRequest& request, const DescribePrometheusRecordRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusRecordRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusRecordRulesOutcomeCallable TkeClient::DescribePrometheusRecordRulesCallable(const DescribePrometheusRecordRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusRecordRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusRecordRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusTargetsOutcome TkeClient::DescribePrometheusTargets(const DescribePrometheusTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusTargetsResponse rsp = DescribePrometheusTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusTargetsOutcome(rsp);
        else
            return DescribePrometheusTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusTargetsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusTargetsAsync(const DescribePrometheusTargetsRequest& request, const DescribePrometheusTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusTargetsOutcomeCallable TkeClient::DescribePrometheusTargetsCallable(const DescribePrometheusTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusTargetsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusTempOutcome TkeClient::DescribePrometheusTemp(const DescribePrometheusTempRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusTemp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusTempResponse rsp = DescribePrometheusTempResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusTempOutcome(rsp);
        else
            return DescribePrometheusTempOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusTempOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusTempAsync(const DescribePrometheusTempRequest& request, const DescribePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusTemp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusTempOutcomeCallable TkeClient::DescribePrometheusTempCallable(const DescribePrometheusTempRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusTempOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusTemp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusTempSyncOutcome TkeClient::DescribePrometheusTempSync(const DescribePrometheusTempSyncRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusTempSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusTempSyncResponse rsp = DescribePrometheusTempSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusTempSyncOutcome(rsp);
        else
            return DescribePrometheusTempSyncOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusTempSyncOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusTempSyncAsync(const DescribePrometheusTempSyncRequest& request, const DescribePrometheusTempSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusTempSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusTempSyncOutcomeCallable TkeClient::DescribePrometheusTempSyncCallable(const DescribePrometheusTempSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusTempSyncOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusTempSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusTemplateSyncOutcome TkeClient::DescribePrometheusTemplateSync(const DescribePrometheusTemplateSyncRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusTemplateSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusTemplateSyncResponse rsp = DescribePrometheusTemplateSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusTemplateSyncOutcome(rsp);
        else
            return DescribePrometheusTemplateSyncOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusTemplateSyncOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusTemplateSyncAsync(const DescribePrometheusTemplateSyncRequest& request, const DescribePrometheusTemplateSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusTemplateSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusTemplateSyncOutcomeCallable TkeClient::DescribePrometheusTemplateSyncCallable(const DescribePrometheusTemplateSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusTemplateSyncOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusTemplateSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribePrometheusTemplatesOutcome TkeClient::DescribePrometheusTemplates(const DescribePrometheusTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheusTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusTemplatesResponse rsp = DescribePrometheusTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusTemplatesOutcome(rsp);
        else
            return DescribePrometheusTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusTemplatesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribePrometheusTemplatesAsync(const DescribePrometheusTemplatesRequest& request, const DescribePrometheusTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheusTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribePrometheusTemplatesOutcomeCallable TkeClient::DescribePrometheusTemplatesCallable(const DescribePrometheusTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheusTemplates(request);
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

TkeClient::DescribeResourceUsageOutcome TkeClient::DescribeResourceUsage(const DescribeResourceUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceUsageResponse rsp = DescribeResourceUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceUsageOutcome(rsp);
        else
            return DescribeResourceUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceUsageOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeResourceUsageAsync(const DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeResourceUsageOutcomeCallable TkeClient::DescribeResourceUsageCallable(const DescribeResourceUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceUsage(request);
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

TkeClient::DescribeTKEEdgeClusterCredentialOutcome TkeClient::DescribeTKEEdgeClusterCredential(const DescribeTKEEdgeClusterCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTKEEdgeClusterCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTKEEdgeClusterCredentialResponse rsp = DescribeTKEEdgeClusterCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTKEEdgeClusterCredentialOutcome(rsp);
        else
            return DescribeTKEEdgeClusterCredentialOutcome(o.GetError());
    }
    else
    {
        return DescribeTKEEdgeClusterCredentialOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeTKEEdgeClusterCredentialAsync(const DescribeTKEEdgeClusterCredentialRequest& request, const DescribeTKEEdgeClusterCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTKEEdgeClusterCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeTKEEdgeClusterCredentialOutcomeCallable TkeClient::DescribeTKEEdgeClusterCredentialCallable(const DescribeTKEEdgeClusterCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTKEEdgeClusterCredentialOutcome()>>(
        [this, request]()
        {
            return this->DescribeTKEEdgeClusterCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeTKEEdgeClusterStatusOutcome TkeClient::DescribeTKEEdgeClusterStatus(const DescribeTKEEdgeClusterStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTKEEdgeClusterStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTKEEdgeClusterStatusResponse rsp = DescribeTKEEdgeClusterStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTKEEdgeClusterStatusOutcome(rsp);
        else
            return DescribeTKEEdgeClusterStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTKEEdgeClusterStatusOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeTKEEdgeClusterStatusAsync(const DescribeTKEEdgeClusterStatusRequest& request, const DescribeTKEEdgeClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTKEEdgeClusterStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeTKEEdgeClusterStatusOutcomeCallable TkeClient::DescribeTKEEdgeClusterStatusCallable(const DescribeTKEEdgeClusterStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTKEEdgeClusterStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTKEEdgeClusterStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeTKEEdgeClustersOutcome TkeClient::DescribeTKEEdgeClusters(const DescribeTKEEdgeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTKEEdgeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTKEEdgeClustersResponse rsp = DescribeTKEEdgeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTKEEdgeClustersOutcome(rsp);
        else
            return DescribeTKEEdgeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeTKEEdgeClustersOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeTKEEdgeClustersAsync(const DescribeTKEEdgeClustersRequest& request, const DescribeTKEEdgeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTKEEdgeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeTKEEdgeClustersOutcomeCallable TkeClient::DescribeTKEEdgeClustersCallable(const DescribeTKEEdgeClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTKEEdgeClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeTKEEdgeClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeTKEEdgeExternalKubeconfigOutcome TkeClient::DescribeTKEEdgeExternalKubeconfig(const DescribeTKEEdgeExternalKubeconfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTKEEdgeExternalKubeconfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTKEEdgeExternalKubeconfigResponse rsp = DescribeTKEEdgeExternalKubeconfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTKEEdgeExternalKubeconfigOutcome(rsp);
        else
            return DescribeTKEEdgeExternalKubeconfigOutcome(o.GetError());
    }
    else
    {
        return DescribeTKEEdgeExternalKubeconfigOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeTKEEdgeExternalKubeconfigAsync(const DescribeTKEEdgeExternalKubeconfigRequest& request, const DescribeTKEEdgeExternalKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTKEEdgeExternalKubeconfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeTKEEdgeExternalKubeconfigOutcomeCallable TkeClient::DescribeTKEEdgeExternalKubeconfigCallable(const DescribeTKEEdgeExternalKubeconfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTKEEdgeExternalKubeconfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeTKEEdgeExternalKubeconfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeTKEEdgeScriptOutcome TkeClient::DescribeTKEEdgeScript(const DescribeTKEEdgeScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTKEEdgeScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTKEEdgeScriptResponse rsp = DescribeTKEEdgeScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTKEEdgeScriptOutcome(rsp);
        else
            return DescribeTKEEdgeScriptOutcome(o.GetError());
    }
    else
    {
        return DescribeTKEEdgeScriptOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeTKEEdgeScriptAsync(const DescribeTKEEdgeScriptRequest& request, const DescribeTKEEdgeScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTKEEdgeScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeTKEEdgeScriptOutcomeCallable TkeClient::DescribeTKEEdgeScriptCallable(const DescribeTKEEdgeScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTKEEdgeScriptOutcome()>>(
        [this, request]()
        {
            return this->DescribeTKEEdgeScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeVersionsOutcome TkeClient::DescribeVersions(const DescribeVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVersionsResponse rsp = DescribeVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVersionsOutcome(rsp);
        else
            return DescribeVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeVersionsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeVersionsAsync(const DescribeVersionsRequest& request, const DescribeVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeVersionsOutcomeCallable TkeClient::DescribeVersionsCallable(const DescribeVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeVpcCniPodLimitsOutcome TkeClient::DescribeVpcCniPodLimits(const DescribeVpcCniPodLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcCniPodLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcCniPodLimitsResponse rsp = DescribeVpcCniPodLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcCniPodLimitsOutcome(rsp);
        else
            return DescribeVpcCniPodLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcCniPodLimitsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeVpcCniPodLimitsAsync(const DescribeVpcCniPodLimitsRequest& request, const DescribeVpcCniPodLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcCniPodLimits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeVpcCniPodLimitsOutcomeCallable TkeClient::DescribeVpcCniPodLimitsCallable(const DescribeVpcCniPodLimitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcCniPodLimitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcCniPodLimits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DisableClusterAuditOutcome TkeClient::DisableClusterAudit(const DisableClusterAuditRequest &request)
{
    auto outcome = MakeRequest(request, "DisableClusterAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableClusterAuditResponse rsp = DisableClusterAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableClusterAuditOutcome(rsp);
        else
            return DisableClusterAuditOutcome(o.GetError());
    }
    else
    {
        return DisableClusterAuditOutcome(outcome.GetError());
    }
}

void TkeClient::DisableClusterAuditAsync(const DisableClusterAuditRequest& request, const DisableClusterAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableClusterAudit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DisableClusterAuditOutcomeCallable TkeClient::DisableClusterAuditCallable(const DisableClusterAuditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableClusterAuditOutcome()>>(
        [this, request]()
        {
            return this->DisableClusterAudit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DisableClusterDeletionProtectionOutcome TkeClient::DisableClusterDeletionProtection(const DisableClusterDeletionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DisableClusterDeletionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableClusterDeletionProtectionResponse rsp = DisableClusterDeletionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableClusterDeletionProtectionOutcome(rsp);
        else
            return DisableClusterDeletionProtectionOutcome(o.GetError());
    }
    else
    {
        return DisableClusterDeletionProtectionOutcome(outcome.GetError());
    }
}

void TkeClient::DisableClusterDeletionProtectionAsync(const DisableClusterDeletionProtectionRequest& request, const DisableClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableClusterDeletionProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DisableClusterDeletionProtectionOutcomeCallable TkeClient::DisableClusterDeletionProtectionCallable(const DisableClusterDeletionProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableClusterDeletionProtectionOutcome()>>(
        [this, request]()
        {
            return this->DisableClusterDeletionProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DisableEventPersistenceOutcome TkeClient::DisableEventPersistence(const DisableEventPersistenceRequest &request)
{
    auto outcome = MakeRequest(request, "DisableEventPersistence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableEventPersistenceResponse rsp = DisableEventPersistenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableEventPersistenceOutcome(rsp);
        else
            return DisableEventPersistenceOutcome(o.GetError());
    }
    else
    {
        return DisableEventPersistenceOutcome(outcome.GetError());
    }
}

void TkeClient::DisableEventPersistenceAsync(const DisableEventPersistenceRequest& request, const DisableEventPersistenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableEventPersistence(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DisableEventPersistenceOutcomeCallable TkeClient::DisableEventPersistenceCallable(const DisableEventPersistenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableEventPersistenceOutcome()>>(
        [this, request]()
        {
            return this->DisableEventPersistence(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DisableVpcCniNetworkTypeOutcome TkeClient::DisableVpcCniNetworkType(const DisableVpcCniNetworkTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DisableVpcCniNetworkType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableVpcCniNetworkTypeResponse rsp = DisableVpcCniNetworkTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableVpcCniNetworkTypeOutcome(rsp);
        else
            return DisableVpcCniNetworkTypeOutcome(o.GetError());
    }
    else
    {
        return DisableVpcCniNetworkTypeOutcome(outcome.GetError());
    }
}

void TkeClient::DisableVpcCniNetworkTypeAsync(const DisableVpcCniNetworkTypeRequest& request, const DisableVpcCniNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableVpcCniNetworkType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DisableVpcCniNetworkTypeOutcomeCallable TkeClient::DisableVpcCniNetworkTypeCallable(const DisableVpcCniNetworkTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableVpcCniNetworkTypeOutcome()>>(
        [this, request]()
        {
            return this->DisableVpcCniNetworkType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::EnableClusterAuditOutcome TkeClient::EnableClusterAudit(const EnableClusterAuditRequest &request)
{
    auto outcome = MakeRequest(request, "EnableClusterAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableClusterAuditResponse rsp = EnableClusterAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableClusterAuditOutcome(rsp);
        else
            return EnableClusterAuditOutcome(o.GetError());
    }
    else
    {
        return EnableClusterAuditOutcome(outcome.GetError());
    }
}

void TkeClient::EnableClusterAuditAsync(const EnableClusterAuditRequest& request, const EnableClusterAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableClusterAudit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::EnableClusterAuditOutcomeCallable TkeClient::EnableClusterAuditCallable(const EnableClusterAuditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableClusterAuditOutcome()>>(
        [this, request]()
        {
            return this->EnableClusterAudit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::EnableClusterDeletionProtectionOutcome TkeClient::EnableClusterDeletionProtection(const EnableClusterDeletionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "EnableClusterDeletionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableClusterDeletionProtectionResponse rsp = EnableClusterDeletionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableClusterDeletionProtectionOutcome(rsp);
        else
            return EnableClusterDeletionProtectionOutcome(o.GetError());
    }
    else
    {
        return EnableClusterDeletionProtectionOutcome(outcome.GetError());
    }
}

void TkeClient::EnableClusterDeletionProtectionAsync(const EnableClusterDeletionProtectionRequest& request, const EnableClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableClusterDeletionProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::EnableClusterDeletionProtectionOutcomeCallable TkeClient::EnableClusterDeletionProtectionCallable(const EnableClusterDeletionProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableClusterDeletionProtectionOutcome()>>(
        [this, request]()
        {
            return this->EnableClusterDeletionProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::EnableEventPersistenceOutcome TkeClient::EnableEventPersistence(const EnableEventPersistenceRequest &request)
{
    auto outcome = MakeRequest(request, "EnableEventPersistence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableEventPersistenceResponse rsp = EnableEventPersistenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableEventPersistenceOutcome(rsp);
        else
            return EnableEventPersistenceOutcome(o.GetError());
    }
    else
    {
        return EnableEventPersistenceOutcome(outcome.GetError());
    }
}

void TkeClient::EnableEventPersistenceAsync(const EnableEventPersistenceRequest& request, const EnableEventPersistenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableEventPersistence(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::EnableEventPersistenceOutcomeCallable TkeClient::EnableEventPersistenceCallable(const EnableEventPersistenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableEventPersistenceOutcome()>>(
        [this, request]()
        {
            return this->EnableEventPersistence(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::EnableVpcCniNetworkTypeOutcome TkeClient::EnableVpcCniNetworkType(const EnableVpcCniNetworkTypeRequest &request)
{
    auto outcome = MakeRequest(request, "EnableVpcCniNetworkType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableVpcCniNetworkTypeResponse rsp = EnableVpcCniNetworkTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableVpcCniNetworkTypeOutcome(rsp);
        else
            return EnableVpcCniNetworkTypeOutcome(o.GetError());
    }
    else
    {
        return EnableVpcCniNetworkTypeOutcome(outcome.GetError());
    }
}

void TkeClient::EnableVpcCniNetworkTypeAsync(const EnableVpcCniNetworkTypeRequest& request, const EnableVpcCniNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableVpcCniNetworkType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::EnableVpcCniNetworkTypeOutcomeCallable TkeClient::EnableVpcCniNetworkTypeCallable(const EnableVpcCniNetworkTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableVpcCniNetworkTypeOutcome()>>(
        [this, request]()
        {
            return this->EnableVpcCniNetworkType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ForwardApplicationRequestV3Outcome TkeClient::ForwardApplicationRequestV3(const ForwardApplicationRequestV3Request &request)
{
    auto outcome = MakeRequest(request, "ForwardApplicationRequestV3");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForwardApplicationRequestV3Response rsp = ForwardApplicationRequestV3Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForwardApplicationRequestV3Outcome(rsp);
        else
            return ForwardApplicationRequestV3Outcome(o.GetError());
    }
    else
    {
        return ForwardApplicationRequestV3Outcome(outcome.GetError());
    }
}

void TkeClient::ForwardApplicationRequestV3Async(const ForwardApplicationRequestV3Request& request, const ForwardApplicationRequestV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForwardApplicationRequestV3(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ForwardApplicationRequestV3OutcomeCallable TkeClient::ForwardApplicationRequestV3Callable(const ForwardApplicationRequestV3Request &request)
{
    auto task = std::make_shared<std::packaged_task<ForwardApplicationRequestV3Outcome()>>(
        [this, request]()
        {
            return this->ForwardApplicationRequestV3(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ForwardTKEEdgeApplicationRequestV3Outcome TkeClient::ForwardTKEEdgeApplicationRequestV3(const ForwardTKEEdgeApplicationRequestV3Request &request)
{
    auto outcome = MakeRequest(request, "ForwardTKEEdgeApplicationRequestV3");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForwardTKEEdgeApplicationRequestV3Response rsp = ForwardTKEEdgeApplicationRequestV3Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForwardTKEEdgeApplicationRequestV3Outcome(rsp);
        else
            return ForwardTKEEdgeApplicationRequestV3Outcome(o.GetError());
    }
    else
    {
        return ForwardTKEEdgeApplicationRequestV3Outcome(outcome.GetError());
    }
}

void TkeClient::ForwardTKEEdgeApplicationRequestV3Async(const ForwardTKEEdgeApplicationRequestV3Request& request, const ForwardTKEEdgeApplicationRequestV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForwardTKEEdgeApplicationRequestV3(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ForwardTKEEdgeApplicationRequestV3OutcomeCallable TkeClient::ForwardTKEEdgeApplicationRequestV3Callable(const ForwardTKEEdgeApplicationRequestV3Request &request)
{
    auto task = std::make_shared<std::packaged_task<ForwardTKEEdgeApplicationRequestV3Outcome()>>(
        [this, request]()
        {
            return this->ForwardTKEEdgeApplicationRequestV3(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::GetClusterLevelPriceOutcome TkeClient::GetClusterLevelPrice(const GetClusterLevelPriceRequest &request)
{
    auto outcome = MakeRequest(request, "GetClusterLevelPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetClusterLevelPriceResponse rsp = GetClusterLevelPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetClusterLevelPriceOutcome(rsp);
        else
            return GetClusterLevelPriceOutcome(o.GetError());
    }
    else
    {
        return GetClusterLevelPriceOutcome(outcome.GetError());
    }
}

void TkeClient::GetClusterLevelPriceAsync(const GetClusterLevelPriceRequest& request, const GetClusterLevelPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetClusterLevelPrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::GetClusterLevelPriceOutcomeCallable TkeClient::GetClusterLevelPriceCallable(const GetClusterLevelPriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetClusterLevelPriceOutcome()>>(
        [this, request]()
        {
            return this->GetClusterLevelPrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::GetMostSuitableImageCacheOutcome TkeClient::GetMostSuitableImageCache(const GetMostSuitableImageCacheRequest &request)
{
    auto outcome = MakeRequest(request, "GetMostSuitableImageCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMostSuitableImageCacheResponse rsp = GetMostSuitableImageCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMostSuitableImageCacheOutcome(rsp);
        else
            return GetMostSuitableImageCacheOutcome(o.GetError());
    }
    else
    {
        return GetMostSuitableImageCacheOutcome(outcome.GetError());
    }
}

void TkeClient::GetMostSuitableImageCacheAsync(const GetMostSuitableImageCacheRequest& request, const GetMostSuitableImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetMostSuitableImageCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::GetMostSuitableImageCacheOutcomeCallable TkeClient::GetMostSuitableImageCacheCallable(const GetMostSuitableImageCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetMostSuitableImageCacheOutcome()>>(
        [this, request]()
        {
            return this->GetMostSuitableImageCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::GetTkeAppChartListOutcome TkeClient::GetTkeAppChartList(const GetTkeAppChartListRequest &request)
{
    auto outcome = MakeRequest(request, "GetTkeAppChartList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTkeAppChartListResponse rsp = GetTkeAppChartListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTkeAppChartListOutcome(rsp);
        else
            return GetTkeAppChartListOutcome(o.GetError());
    }
    else
    {
        return GetTkeAppChartListOutcome(outcome.GetError());
    }
}

void TkeClient::GetTkeAppChartListAsync(const GetTkeAppChartListRequest& request, const GetTkeAppChartListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTkeAppChartList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::GetTkeAppChartListOutcomeCallable TkeClient::GetTkeAppChartListCallable(const GetTkeAppChartListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTkeAppChartListOutcome()>>(
        [this, request]()
        {
            return this->GetTkeAppChartList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::GetUpgradeInstanceProgressOutcome TkeClient::GetUpgradeInstanceProgress(const GetUpgradeInstanceProgressRequest &request)
{
    auto outcome = MakeRequest(request, "GetUpgradeInstanceProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUpgradeInstanceProgressResponse rsp = GetUpgradeInstanceProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUpgradeInstanceProgressOutcome(rsp);
        else
            return GetUpgradeInstanceProgressOutcome(o.GetError());
    }
    else
    {
        return GetUpgradeInstanceProgressOutcome(outcome.GetError());
    }
}

void TkeClient::GetUpgradeInstanceProgressAsync(const GetUpgradeInstanceProgressRequest& request, const GetUpgradeInstanceProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetUpgradeInstanceProgress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::GetUpgradeInstanceProgressOutcomeCallable TkeClient::GetUpgradeInstanceProgressCallable(const GetUpgradeInstanceProgressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetUpgradeInstanceProgressOutcome()>>(
        [this, request]()
        {
            return this->GetUpgradeInstanceProgress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::InstallLogAgentOutcome TkeClient::InstallLogAgent(const InstallLogAgentRequest &request)
{
    auto outcome = MakeRequest(request, "InstallLogAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallLogAgentResponse rsp = InstallLogAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallLogAgentOutcome(rsp);
        else
            return InstallLogAgentOutcome(o.GetError());
    }
    else
    {
        return InstallLogAgentOutcome(outcome.GetError());
    }
}

void TkeClient::InstallLogAgentAsync(const InstallLogAgentRequest& request, const InstallLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InstallLogAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::InstallLogAgentOutcomeCallable TkeClient::InstallLogAgentCallable(const InstallLogAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InstallLogAgentOutcome()>>(
        [this, request]()
        {
            return this->InstallLogAgent(request);
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

TkeClient::ModifyClusterAsGroupOptionAttributeOutcome TkeClient::ModifyClusterAsGroupOptionAttribute(const ModifyClusterAsGroupOptionAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterAsGroupOptionAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterAsGroupOptionAttributeResponse rsp = ModifyClusterAsGroupOptionAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterAsGroupOptionAttributeOutcome(rsp);
        else
            return ModifyClusterAsGroupOptionAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterAsGroupOptionAttributeOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterAsGroupOptionAttributeAsync(const ModifyClusterAsGroupOptionAttributeRequest& request, const ModifyClusterAsGroupOptionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterAsGroupOptionAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyClusterAsGroupOptionAttributeOutcomeCallable TkeClient::ModifyClusterAsGroupOptionAttributeCallable(const ModifyClusterAsGroupOptionAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterAsGroupOptionAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterAsGroupOptionAttribute(request);
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

TkeClient::ModifyClusterAuthenticationOptionsOutcome TkeClient::ModifyClusterAuthenticationOptions(const ModifyClusterAuthenticationOptionsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterAuthenticationOptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterAuthenticationOptionsResponse rsp = ModifyClusterAuthenticationOptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterAuthenticationOptionsOutcome(rsp);
        else
            return ModifyClusterAuthenticationOptionsOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterAuthenticationOptionsOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyClusterAuthenticationOptionsAsync(const ModifyClusterAuthenticationOptionsRequest& request, const ModifyClusterAuthenticationOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterAuthenticationOptions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyClusterAuthenticationOptionsOutcomeCallable TkeClient::ModifyClusterAuthenticationOptionsCallable(const ModifyClusterAuthenticationOptionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterAuthenticationOptionsOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterAuthenticationOptions(request);
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

TkeClient::ModifyNodePoolDesiredCapacityAboutAsgOutcome TkeClient::ModifyNodePoolDesiredCapacityAboutAsg(const ModifyNodePoolDesiredCapacityAboutAsgRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNodePoolDesiredCapacityAboutAsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNodePoolDesiredCapacityAboutAsgResponse rsp = ModifyNodePoolDesiredCapacityAboutAsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNodePoolDesiredCapacityAboutAsgOutcome(rsp);
        else
            return ModifyNodePoolDesiredCapacityAboutAsgOutcome(o.GetError());
    }
    else
    {
        return ModifyNodePoolDesiredCapacityAboutAsgOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyNodePoolDesiredCapacityAboutAsgAsync(const ModifyNodePoolDesiredCapacityAboutAsgRequest& request, const ModifyNodePoolDesiredCapacityAboutAsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNodePoolDesiredCapacityAboutAsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyNodePoolDesiredCapacityAboutAsgOutcomeCallable TkeClient::ModifyNodePoolDesiredCapacityAboutAsgCallable(const ModifyNodePoolDesiredCapacityAboutAsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNodePoolDesiredCapacityAboutAsgOutcome()>>(
        [this, request]()
        {
            return this->ModifyNodePoolDesiredCapacityAboutAsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyNodePoolInstanceTypesOutcome TkeClient::ModifyNodePoolInstanceTypes(const ModifyNodePoolInstanceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNodePoolInstanceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNodePoolInstanceTypesResponse rsp = ModifyNodePoolInstanceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNodePoolInstanceTypesOutcome(rsp);
        else
            return ModifyNodePoolInstanceTypesOutcome(o.GetError());
    }
    else
    {
        return ModifyNodePoolInstanceTypesOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyNodePoolInstanceTypesAsync(const ModifyNodePoolInstanceTypesRequest& request, const ModifyNodePoolInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNodePoolInstanceTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyNodePoolInstanceTypesOutcomeCallable TkeClient::ModifyNodePoolInstanceTypesCallable(const ModifyNodePoolInstanceTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNodePoolInstanceTypesOutcome()>>(
        [this, request]()
        {
            return this->ModifyNodePoolInstanceTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyPrometheusAlertPolicyOutcome TkeClient::ModifyPrometheusAlertPolicy(const ModifyPrometheusAlertPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusAlertPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusAlertPolicyResponse rsp = ModifyPrometheusAlertPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusAlertPolicyOutcome(rsp);
        else
            return ModifyPrometheusAlertPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusAlertPolicyOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyPrometheusAlertPolicyAsync(const ModifyPrometheusAlertPolicyRequest& request, const ModifyPrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusAlertPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyPrometheusAlertPolicyOutcomeCallable TkeClient::ModifyPrometheusAlertPolicyCallable(const ModifyPrometheusAlertPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusAlertPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusAlertPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyPrometheusAlertRuleOutcome TkeClient::ModifyPrometheusAlertRule(const ModifyPrometheusAlertRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusAlertRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusAlertRuleResponse rsp = ModifyPrometheusAlertRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusAlertRuleOutcome(rsp);
        else
            return ModifyPrometheusAlertRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusAlertRuleOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyPrometheusAlertRuleAsync(const ModifyPrometheusAlertRuleRequest& request, const ModifyPrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusAlertRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyPrometheusAlertRuleOutcomeCallable TkeClient::ModifyPrometheusAlertRuleCallable(const ModifyPrometheusAlertRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusAlertRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusAlertRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyPrometheusGlobalNotificationOutcome TkeClient::ModifyPrometheusGlobalNotification(const ModifyPrometheusGlobalNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusGlobalNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusGlobalNotificationResponse rsp = ModifyPrometheusGlobalNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusGlobalNotificationOutcome(rsp);
        else
            return ModifyPrometheusGlobalNotificationOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusGlobalNotificationOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyPrometheusGlobalNotificationAsync(const ModifyPrometheusGlobalNotificationRequest& request, const ModifyPrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusGlobalNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyPrometheusGlobalNotificationOutcomeCallable TkeClient::ModifyPrometheusGlobalNotificationCallable(const ModifyPrometheusGlobalNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusGlobalNotificationOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusGlobalNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyPrometheusTempOutcome TkeClient::ModifyPrometheusTemp(const ModifyPrometheusTempRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusTemp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusTempResponse rsp = ModifyPrometheusTempResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusTempOutcome(rsp);
        else
            return ModifyPrometheusTempOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusTempOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyPrometheusTempAsync(const ModifyPrometheusTempRequest& request, const ModifyPrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusTemp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyPrometheusTempOutcomeCallable TkeClient::ModifyPrometheusTempCallable(const ModifyPrometheusTempRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusTempOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusTemp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyPrometheusTemplateOutcome TkeClient::ModifyPrometheusTemplate(const ModifyPrometheusTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrometheusTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrometheusTemplateResponse rsp = ModifyPrometheusTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrometheusTemplateOutcome(rsp);
        else
            return ModifyPrometheusTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyPrometheusTemplateOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyPrometheusTemplateAsync(const ModifyPrometheusTemplateRequest& request, const ModifyPrometheusTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrometheusTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyPrometheusTemplateOutcomeCallable TkeClient::ModifyPrometheusTemplateCallable(const ModifyPrometheusTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrometheusTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrometheusTemplate(request);
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

TkeClient::RestartEKSContainerInstancesOutcome TkeClient::RestartEKSContainerInstances(const RestartEKSContainerInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RestartEKSContainerInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartEKSContainerInstancesResponse rsp = RestartEKSContainerInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartEKSContainerInstancesOutcome(rsp);
        else
            return RestartEKSContainerInstancesOutcome(o.GetError());
    }
    else
    {
        return RestartEKSContainerInstancesOutcome(outcome.GetError());
    }
}

void TkeClient::RestartEKSContainerInstancesAsync(const RestartEKSContainerInstancesRequest& request, const RestartEKSContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartEKSContainerInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::RestartEKSContainerInstancesOutcomeCallable TkeClient::RestartEKSContainerInstancesCallable(const RestartEKSContainerInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartEKSContainerInstancesOutcome()>>(
        [this, request]()
        {
            return this->RestartEKSContainerInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ScaleInClusterMasterOutcome TkeClient::ScaleInClusterMaster(const ScaleInClusterMasterRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleInClusterMaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleInClusterMasterResponse rsp = ScaleInClusterMasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleInClusterMasterOutcome(rsp);
        else
            return ScaleInClusterMasterOutcome(o.GetError());
    }
    else
    {
        return ScaleInClusterMasterOutcome(outcome.GetError());
    }
}

void TkeClient::ScaleInClusterMasterAsync(const ScaleInClusterMasterRequest& request, const ScaleInClusterMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleInClusterMaster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ScaleInClusterMasterOutcomeCallable TkeClient::ScaleInClusterMasterCallable(const ScaleInClusterMasterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleInClusterMasterOutcome()>>(
        [this, request]()
        {
            return this->ScaleInClusterMaster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ScaleOutClusterMasterOutcome TkeClient::ScaleOutClusterMaster(const ScaleOutClusterMasterRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutClusterMaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutClusterMasterResponse rsp = ScaleOutClusterMasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutClusterMasterOutcome(rsp);
        else
            return ScaleOutClusterMasterOutcome(o.GetError());
    }
    else
    {
        return ScaleOutClusterMasterOutcome(outcome.GetError());
    }
}

void TkeClient::ScaleOutClusterMasterAsync(const ScaleOutClusterMasterRequest& request, const ScaleOutClusterMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutClusterMaster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ScaleOutClusterMasterOutcomeCallable TkeClient::ScaleOutClusterMasterCallable(const ScaleOutClusterMasterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleOutClusterMasterOutcome()>>(
        [this, request]()
        {
            return this->ScaleOutClusterMaster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::SetNodePoolNodeProtectionOutcome TkeClient::SetNodePoolNodeProtection(const SetNodePoolNodeProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "SetNodePoolNodeProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNodePoolNodeProtectionResponse rsp = SetNodePoolNodeProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNodePoolNodeProtectionOutcome(rsp);
        else
            return SetNodePoolNodeProtectionOutcome(o.GetError());
    }
    else
    {
        return SetNodePoolNodeProtectionOutcome(outcome.GetError());
    }
}

void TkeClient::SetNodePoolNodeProtectionAsync(const SetNodePoolNodeProtectionRequest& request, const SetNodePoolNodeProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetNodePoolNodeProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::SetNodePoolNodeProtectionOutcomeCallable TkeClient::SetNodePoolNodeProtectionCallable(const SetNodePoolNodeProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetNodePoolNodeProtectionOutcome()>>(
        [this, request]()
        {
            return this->SetNodePoolNodeProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::SyncPrometheusTempOutcome TkeClient::SyncPrometheusTemp(const SyncPrometheusTempRequest &request)
{
    auto outcome = MakeRequest(request, "SyncPrometheusTemp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncPrometheusTempResponse rsp = SyncPrometheusTempResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncPrometheusTempOutcome(rsp);
        else
            return SyncPrometheusTempOutcome(o.GetError());
    }
    else
    {
        return SyncPrometheusTempOutcome(outcome.GetError());
    }
}

void TkeClient::SyncPrometheusTempAsync(const SyncPrometheusTempRequest& request, const SyncPrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncPrometheusTemp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::SyncPrometheusTempOutcomeCallable TkeClient::SyncPrometheusTempCallable(const SyncPrometheusTempRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncPrometheusTempOutcome()>>(
        [this, request]()
        {
            return this->SyncPrometheusTemp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::SyncPrometheusTemplateOutcome TkeClient::SyncPrometheusTemplate(const SyncPrometheusTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "SyncPrometheusTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncPrometheusTemplateResponse rsp = SyncPrometheusTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncPrometheusTemplateOutcome(rsp);
        else
            return SyncPrometheusTemplateOutcome(o.GetError());
    }
    else
    {
        return SyncPrometheusTemplateOutcome(outcome.GetError());
    }
}

void TkeClient::SyncPrometheusTemplateAsync(const SyncPrometheusTemplateRequest& request, const SyncPrometheusTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncPrometheusTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::SyncPrometheusTemplateOutcomeCallable TkeClient::SyncPrometheusTemplateCallable(const SyncPrometheusTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncPrometheusTemplateOutcome()>>(
        [this, request]()
        {
            return this->SyncPrometheusTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::UninstallLogAgentOutcome TkeClient::UninstallLogAgent(const UninstallLogAgentRequest &request)
{
    auto outcome = MakeRequest(request, "UninstallLogAgent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UninstallLogAgentResponse rsp = UninstallLogAgentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UninstallLogAgentOutcome(rsp);
        else
            return UninstallLogAgentOutcome(o.GetError());
    }
    else
    {
        return UninstallLogAgentOutcome(outcome.GetError());
    }
}

void TkeClient::UninstallLogAgentAsync(const UninstallLogAgentRequest& request, const UninstallLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UninstallLogAgent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::UninstallLogAgentOutcomeCallable TkeClient::UninstallLogAgentCallable(const UninstallLogAgentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UninstallLogAgentOutcome()>>(
        [this, request]()
        {
            return this->UninstallLogAgent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::UpdateClusterVersionOutcome TkeClient::UpdateClusterVersion(const UpdateClusterVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateClusterVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateClusterVersionResponse rsp = UpdateClusterVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateClusterVersionOutcome(rsp);
        else
            return UpdateClusterVersionOutcome(o.GetError());
    }
    else
    {
        return UpdateClusterVersionOutcome(outcome.GetError());
    }
}

void TkeClient::UpdateClusterVersionAsync(const UpdateClusterVersionRequest& request, const UpdateClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateClusterVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::UpdateClusterVersionOutcomeCallable TkeClient::UpdateClusterVersionCallable(const UpdateClusterVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateClusterVersionOutcome()>>(
        [this, request]()
        {
            return this->UpdateClusterVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::UpdateEKSClusterOutcome TkeClient::UpdateEKSCluster(const UpdateEKSClusterRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEKSCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEKSClusterResponse rsp = UpdateEKSClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEKSClusterOutcome(rsp);
        else
            return UpdateEKSClusterOutcome(o.GetError());
    }
    else
    {
        return UpdateEKSClusterOutcome(outcome.GetError());
    }
}

void TkeClient::UpdateEKSClusterAsync(const UpdateEKSClusterRequest& request, const UpdateEKSClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateEKSCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::UpdateEKSClusterOutcomeCallable TkeClient::UpdateEKSClusterCallable(const UpdateEKSClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateEKSClusterOutcome()>>(
        [this, request]()
        {
            return this->UpdateEKSCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::UpdateEKSContainerInstanceOutcome TkeClient::UpdateEKSContainerInstance(const UpdateEKSContainerInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEKSContainerInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEKSContainerInstanceResponse rsp = UpdateEKSContainerInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEKSContainerInstanceOutcome(rsp);
        else
            return UpdateEKSContainerInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateEKSContainerInstanceOutcome(outcome.GetError());
    }
}

void TkeClient::UpdateEKSContainerInstanceAsync(const UpdateEKSContainerInstanceRequest& request, const UpdateEKSContainerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateEKSContainerInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::UpdateEKSContainerInstanceOutcomeCallable TkeClient::UpdateEKSContainerInstanceCallable(const UpdateEKSContainerInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateEKSContainerInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpdateEKSContainerInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::UpdateImageCacheOutcome TkeClient::UpdateImageCache(const UpdateImageCacheRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateImageCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateImageCacheResponse rsp = UpdateImageCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateImageCacheOutcome(rsp);
        else
            return UpdateImageCacheOutcome(o.GetError());
    }
    else
    {
        return UpdateImageCacheOutcome(outcome.GetError());
    }
}

void TkeClient::UpdateImageCacheAsync(const UpdateImageCacheRequest& request, const UpdateImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateImageCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::UpdateImageCacheOutcomeCallable TkeClient::UpdateImageCacheCallable(const UpdateImageCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateImageCacheOutcome()>>(
        [this, request]()
        {
            return this->UpdateImageCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::UpdateTKEEdgeClusterOutcome TkeClient::UpdateTKEEdgeCluster(const UpdateTKEEdgeClusterRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTKEEdgeCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTKEEdgeClusterResponse rsp = UpdateTKEEdgeClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTKEEdgeClusterOutcome(rsp);
        else
            return UpdateTKEEdgeClusterOutcome(o.GetError());
    }
    else
    {
        return UpdateTKEEdgeClusterOutcome(outcome.GetError());
    }
}

void TkeClient::UpdateTKEEdgeClusterAsync(const UpdateTKEEdgeClusterRequest& request, const UpdateTKEEdgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateTKEEdgeCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::UpdateTKEEdgeClusterOutcomeCallable TkeClient::UpdateTKEEdgeClusterCallable(const UpdateTKEEdgeClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateTKEEdgeClusterOutcome()>>(
        [this, request]()
        {
            return this->UpdateTKEEdgeCluster(request);
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


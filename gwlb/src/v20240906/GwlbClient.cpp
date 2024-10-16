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

#include <tencentcloud/gwlb/v20240906/GwlbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gwlb::V20240906;
using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-09-06";
    const string ENDPOINT = "gwlb.tencentcloudapi.com";
}

GwlbClient::GwlbClient(const Credential &credential, const string &region) :
    GwlbClient(credential, region, ClientProfile())
{
}

GwlbClient::GwlbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GwlbClient::AssociateTargetGroupsOutcome GwlbClient::AssociateTargetGroups(const AssociateTargetGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateTargetGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateTargetGroupsResponse rsp = AssociateTargetGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateTargetGroupsOutcome(rsp);
        else
            return AssociateTargetGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateTargetGroupsOutcome(outcome.GetError());
    }
}

void GwlbClient::AssociateTargetGroupsAsync(const AssociateTargetGroupsRequest& request, const AssociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateTargetGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::AssociateTargetGroupsOutcomeCallable GwlbClient::AssociateTargetGroupsCallable(const AssociateTargetGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateTargetGroupsOutcome()>>(
        [this, request]()
        {
            return this->AssociateTargetGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::CreateGatewayLoadBalancerOutcome GwlbClient::CreateGatewayLoadBalancer(const CreateGatewayLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGatewayLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGatewayLoadBalancerResponse rsp = CreateGatewayLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGatewayLoadBalancerOutcome(rsp);
        else
            return CreateGatewayLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return CreateGatewayLoadBalancerOutcome(outcome.GetError());
    }
}

void GwlbClient::CreateGatewayLoadBalancerAsync(const CreateGatewayLoadBalancerRequest& request, const CreateGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGatewayLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::CreateGatewayLoadBalancerOutcomeCallable GwlbClient::CreateGatewayLoadBalancerCallable(const CreateGatewayLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGatewayLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->CreateGatewayLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::CreateTargetGroupOutcome GwlbClient::CreateTargetGroup(const CreateTargetGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTargetGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTargetGroupResponse rsp = CreateTargetGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTargetGroupOutcome(rsp);
        else
            return CreateTargetGroupOutcome(o.GetError());
    }
    else
    {
        return CreateTargetGroupOutcome(outcome.GetError());
    }
}

void GwlbClient::CreateTargetGroupAsync(const CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTargetGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::CreateTargetGroupOutcomeCallable GwlbClient::CreateTargetGroupCallable(const CreateTargetGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTargetGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateTargetGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::DeleteGatewayLoadBalancerOutcome GwlbClient::DeleteGatewayLoadBalancer(const DeleteGatewayLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGatewayLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGatewayLoadBalancerResponse rsp = DeleteGatewayLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGatewayLoadBalancerOutcome(rsp);
        else
            return DeleteGatewayLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return DeleteGatewayLoadBalancerOutcome(outcome.GetError());
    }
}

void GwlbClient::DeleteGatewayLoadBalancerAsync(const DeleteGatewayLoadBalancerRequest& request, const DeleteGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGatewayLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::DeleteGatewayLoadBalancerOutcomeCallable GwlbClient::DeleteGatewayLoadBalancerCallable(const DeleteGatewayLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGatewayLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->DeleteGatewayLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::DeleteTargetGroupsOutcome GwlbClient::DeleteTargetGroups(const DeleteTargetGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTargetGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTargetGroupsResponse rsp = DeleteTargetGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTargetGroupsOutcome(rsp);
        else
            return DeleteTargetGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteTargetGroupsOutcome(outcome.GetError());
    }
}

void GwlbClient::DeleteTargetGroupsAsync(const DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTargetGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::DeleteTargetGroupsOutcomeCallable GwlbClient::DeleteTargetGroupsCallable(const DeleteTargetGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTargetGroupsOutcome()>>(
        [this, request]()
        {
            return this->DeleteTargetGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::DeregisterTargetGroupInstancesOutcome GwlbClient::DeregisterTargetGroupInstances(const DeregisterTargetGroupInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterTargetGroupInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterTargetGroupInstancesResponse rsp = DeregisterTargetGroupInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterTargetGroupInstancesOutcome(rsp);
        else
            return DeregisterTargetGroupInstancesOutcome(o.GetError());
    }
    else
    {
        return DeregisterTargetGroupInstancesOutcome(outcome.GetError());
    }
}

void GwlbClient::DeregisterTargetGroupInstancesAsync(const DeregisterTargetGroupInstancesRequest& request, const DeregisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeregisterTargetGroupInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::DeregisterTargetGroupInstancesOutcomeCallable GwlbClient::DeregisterTargetGroupInstancesCallable(const DeregisterTargetGroupInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeregisterTargetGroupInstancesOutcome()>>(
        [this, request]()
        {
            return this->DeregisterTargetGroupInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::DescribeGatewayLoadBalancersOutcome GwlbClient::DescribeGatewayLoadBalancers(const DescribeGatewayLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayLoadBalancersResponse rsp = DescribeGatewayLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayLoadBalancersOutcome(rsp);
        else
            return DescribeGatewayLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayLoadBalancersOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeGatewayLoadBalancersAsync(const DescribeGatewayLoadBalancersRequest& request, const DescribeGatewayLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::DescribeGatewayLoadBalancersOutcomeCallable GwlbClient::DescribeGatewayLoadBalancersCallable(const DescribeGatewayLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::DescribeTargetGroupInstanceStatusOutcome GwlbClient::DescribeTargetGroupInstanceStatus(const DescribeTargetGroupInstanceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetGroupInstanceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetGroupInstanceStatusResponse rsp = DescribeTargetGroupInstanceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetGroupInstanceStatusOutcome(rsp);
        else
            return DescribeTargetGroupInstanceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetGroupInstanceStatusOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeTargetGroupInstanceStatusAsync(const DescribeTargetGroupInstanceStatusRequest& request, const DescribeTargetGroupInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargetGroupInstanceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::DescribeTargetGroupInstanceStatusOutcomeCallable GwlbClient::DescribeTargetGroupInstanceStatusCallable(const DescribeTargetGroupInstanceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTargetGroupInstanceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTargetGroupInstanceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::DescribeTargetGroupInstancesOutcome GwlbClient::DescribeTargetGroupInstances(const DescribeTargetGroupInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetGroupInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetGroupInstancesResponse rsp = DescribeTargetGroupInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetGroupInstancesOutcome(rsp);
        else
            return DescribeTargetGroupInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetGroupInstancesOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeTargetGroupInstancesAsync(const DescribeTargetGroupInstancesRequest& request, const DescribeTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargetGroupInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::DescribeTargetGroupInstancesOutcomeCallable GwlbClient::DescribeTargetGroupInstancesCallable(const DescribeTargetGroupInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTargetGroupInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTargetGroupInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::DescribeTargetGroupListOutcome GwlbClient::DescribeTargetGroupList(const DescribeTargetGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetGroupListResponse rsp = DescribeTargetGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetGroupListOutcome(rsp);
        else
            return DescribeTargetGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetGroupListOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeTargetGroupListAsync(const DescribeTargetGroupListRequest& request, const DescribeTargetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargetGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::DescribeTargetGroupListOutcomeCallable GwlbClient::DescribeTargetGroupListCallable(const DescribeTargetGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTargetGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTargetGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::DescribeTargetGroupsOutcome GwlbClient::DescribeTargetGroups(const DescribeTargetGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetGroupsResponse rsp = DescribeTargetGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetGroupsOutcome(rsp);
        else
            return DescribeTargetGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetGroupsOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeTargetGroupsAsync(const DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargetGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::DescribeTargetGroupsOutcomeCallable GwlbClient::DescribeTargetGroupsCallable(const DescribeTargetGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTargetGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTargetGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::DescribeTaskStatusOutcome GwlbClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::DescribeTaskStatusOutcomeCallable GwlbClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::DisassociateTargetGroupsOutcome GwlbClient::DisassociateTargetGroups(const DisassociateTargetGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateTargetGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateTargetGroupsResponse rsp = DisassociateTargetGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateTargetGroupsOutcome(rsp);
        else
            return DisassociateTargetGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateTargetGroupsOutcome(outcome.GetError());
    }
}

void GwlbClient::DisassociateTargetGroupsAsync(const DisassociateTargetGroupsRequest& request, const DisassociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateTargetGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::DisassociateTargetGroupsOutcomeCallable GwlbClient::DisassociateTargetGroupsCallable(const DisassociateTargetGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateTargetGroupsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateTargetGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::InquirePriceCreateGatewayLoadBalancerOutcome GwlbClient::InquirePriceCreateGatewayLoadBalancer(const InquirePriceCreateGatewayLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateGatewayLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateGatewayLoadBalancerResponse rsp = InquirePriceCreateGatewayLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateGatewayLoadBalancerOutcome(rsp);
        else
            return InquirePriceCreateGatewayLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateGatewayLoadBalancerOutcome(outcome.GetError());
    }
}

void GwlbClient::InquirePriceCreateGatewayLoadBalancerAsync(const InquirePriceCreateGatewayLoadBalancerRequest& request, const InquirePriceCreateGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceCreateGatewayLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::InquirePriceCreateGatewayLoadBalancerOutcomeCallable GwlbClient::InquirePriceCreateGatewayLoadBalancerCallable(const InquirePriceCreateGatewayLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceCreateGatewayLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceCreateGatewayLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::ModifyGatewayLoadBalancerAttributeOutcome GwlbClient::ModifyGatewayLoadBalancerAttribute(const ModifyGatewayLoadBalancerAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGatewayLoadBalancerAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGatewayLoadBalancerAttributeResponse rsp = ModifyGatewayLoadBalancerAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGatewayLoadBalancerAttributeOutcome(rsp);
        else
            return ModifyGatewayLoadBalancerAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyGatewayLoadBalancerAttributeOutcome(outcome.GetError());
    }
}

void GwlbClient::ModifyGatewayLoadBalancerAttributeAsync(const ModifyGatewayLoadBalancerAttributeRequest& request, const ModifyGatewayLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGatewayLoadBalancerAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::ModifyGatewayLoadBalancerAttributeOutcomeCallable GwlbClient::ModifyGatewayLoadBalancerAttributeCallable(const ModifyGatewayLoadBalancerAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGatewayLoadBalancerAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyGatewayLoadBalancerAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::ModifyTargetGroupAttributeOutcome GwlbClient::ModifyTargetGroupAttribute(const ModifyTargetGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetGroupAttributeResponse rsp = ModifyTargetGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetGroupAttributeOutcome(rsp);
        else
            return ModifyTargetGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetGroupAttributeOutcome(outcome.GetError());
    }
}

void GwlbClient::ModifyTargetGroupAttributeAsync(const ModifyTargetGroupAttributeRequest& request, const ModifyTargetGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTargetGroupAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::ModifyTargetGroupAttributeOutcomeCallable GwlbClient::ModifyTargetGroupAttributeCallable(const ModifyTargetGroupAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTargetGroupAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyTargetGroupAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::ModifyTargetGroupInstancesWeightOutcome GwlbClient::ModifyTargetGroupInstancesWeight(const ModifyTargetGroupInstancesWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetGroupInstancesWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetGroupInstancesWeightResponse rsp = ModifyTargetGroupInstancesWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetGroupInstancesWeightOutcome(rsp);
        else
            return ModifyTargetGroupInstancesWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetGroupInstancesWeightOutcome(outcome.GetError());
    }
}

void GwlbClient::ModifyTargetGroupInstancesWeightAsync(const ModifyTargetGroupInstancesWeightRequest& request, const ModifyTargetGroupInstancesWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTargetGroupInstancesWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::ModifyTargetGroupInstancesWeightOutcomeCallable GwlbClient::ModifyTargetGroupInstancesWeightCallable(const ModifyTargetGroupInstancesWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTargetGroupInstancesWeightOutcome()>>(
        [this, request]()
        {
            return this->ModifyTargetGroupInstancesWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GwlbClient::RegisterTargetGroupInstancesOutcome GwlbClient::RegisterTargetGroupInstances(const RegisterTargetGroupInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterTargetGroupInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterTargetGroupInstancesResponse rsp = RegisterTargetGroupInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterTargetGroupInstancesOutcome(rsp);
        else
            return RegisterTargetGroupInstancesOutcome(o.GetError());
    }
    else
    {
        return RegisterTargetGroupInstancesOutcome(outcome.GetError());
    }
}

void GwlbClient::RegisterTargetGroupInstancesAsync(const RegisterTargetGroupInstancesRequest& request, const RegisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterTargetGroupInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GwlbClient::RegisterTargetGroupInstancesOutcomeCallable GwlbClient::RegisterTargetGroupInstancesCallable(const RegisterTargetGroupInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterTargetGroupInstancesOutcome()>>(
        [this, request]()
        {
            return this->RegisterTargetGroupInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


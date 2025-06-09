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

#include <tencentcloud/tke/v20220501/TkeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tke::V20220501;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-05-01";
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


TkeClient::CreateHealthCheckPolicyOutcome TkeClient::CreateHealthCheckPolicy(const CreateHealthCheckPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHealthCheckPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHealthCheckPolicyResponse rsp = CreateHealthCheckPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHealthCheckPolicyOutcome(rsp);
        else
            return CreateHealthCheckPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateHealthCheckPolicyOutcome(outcome.GetError());
    }
}

void TkeClient::CreateHealthCheckPolicyAsync(const CreateHealthCheckPolicyRequest& request, const CreateHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHealthCheckPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateHealthCheckPolicyOutcomeCallable TkeClient::CreateHealthCheckPolicyCallable(const CreateHealthCheckPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHealthCheckPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateHealthCheckPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::CreateNodePoolOutcome TkeClient::CreateNodePool(const CreateNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNodePoolResponse rsp = CreateNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNodePoolOutcome(rsp);
        else
            return CreateNodePoolOutcome(o.GetError());
    }
    else
    {
        return CreateNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::CreateNodePoolAsync(const CreateNodePoolRequest& request, const CreateNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::CreateNodePoolOutcomeCallable TkeClient::CreateNodePoolCallable(const CreateNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNodePoolOutcome()>>(
        [this, request]()
        {
            return this->CreateNodePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteClusterMachinesOutcome TkeClient::DeleteClusterMachines(const DeleteClusterMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterMachinesResponse rsp = DeleteClusterMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterMachinesOutcome(rsp);
        else
            return DeleteClusterMachinesOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterMachinesOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteClusterMachinesAsync(const DeleteClusterMachinesRequest& request, const DeleteClusterMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteClusterMachinesOutcomeCallable TkeClient::DeleteClusterMachinesCallable(const DeleteClusterMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterMachinesOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteHealthCheckPolicyOutcome TkeClient::DeleteHealthCheckPolicy(const DeleteHealthCheckPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHealthCheckPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHealthCheckPolicyResponse rsp = DeleteHealthCheckPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHealthCheckPolicyOutcome(rsp);
        else
            return DeleteHealthCheckPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteHealthCheckPolicyOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteHealthCheckPolicyAsync(const DeleteHealthCheckPolicyRequest& request, const DeleteHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteHealthCheckPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteHealthCheckPolicyOutcomeCallable TkeClient::DeleteHealthCheckPolicyCallable(const DeleteHealthCheckPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteHealthCheckPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteHealthCheckPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DeleteNodePoolOutcome TkeClient::DeleteNodePool(const DeleteNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNodePoolResponse rsp = DeleteNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNodePoolOutcome(rsp);
        else
            return DeleteNodePoolOutcome(o.GetError());
    }
    else
    {
        return DeleteNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::DeleteNodePoolAsync(const DeleteNodePoolRequest& request, const DeleteNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DeleteNodePoolOutcomeCallable TkeClient::DeleteNodePoolCallable(const DeleteNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNodePoolOutcome()>>(
        [this, request]()
        {
            return this->DeleteNodePool(request);
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

TkeClient::DescribeHealthCheckPoliciesOutcome TkeClient::DescribeHealthCheckPolicies(const DescribeHealthCheckPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHealthCheckPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHealthCheckPoliciesResponse rsp = DescribeHealthCheckPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHealthCheckPoliciesOutcome(rsp);
        else
            return DescribeHealthCheckPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeHealthCheckPoliciesOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeHealthCheckPoliciesAsync(const DescribeHealthCheckPoliciesRequest& request, const DescribeHealthCheckPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHealthCheckPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeHealthCheckPoliciesOutcomeCallable TkeClient::DescribeHealthCheckPoliciesCallable(const DescribeHealthCheckPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHealthCheckPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeHealthCheckPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeHealthCheckPolicyBindingsOutcome TkeClient::DescribeHealthCheckPolicyBindings(const DescribeHealthCheckPolicyBindingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHealthCheckPolicyBindings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHealthCheckPolicyBindingsResponse rsp = DescribeHealthCheckPolicyBindingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHealthCheckPolicyBindingsOutcome(rsp);
        else
            return DescribeHealthCheckPolicyBindingsOutcome(o.GetError());
    }
    else
    {
        return DescribeHealthCheckPolicyBindingsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeHealthCheckPolicyBindingsAsync(const DescribeHealthCheckPolicyBindingsRequest& request, const DescribeHealthCheckPolicyBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHealthCheckPolicyBindings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeHealthCheckPolicyBindingsOutcomeCallable TkeClient::DescribeHealthCheckPolicyBindingsCallable(const DescribeHealthCheckPolicyBindingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHealthCheckPolicyBindingsOutcome()>>(
        [this, request]()
        {
            return this->DescribeHealthCheckPolicyBindings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeHealthCheckTemplateOutcome TkeClient::DescribeHealthCheckTemplate(const DescribeHealthCheckTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHealthCheckTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHealthCheckTemplateResponse rsp = DescribeHealthCheckTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHealthCheckTemplateOutcome(rsp);
        else
            return DescribeHealthCheckTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeHealthCheckTemplateOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeHealthCheckTemplateAsync(const DescribeHealthCheckTemplateRequest& request, const DescribeHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHealthCheckTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeHealthCheckTemplateOutcomeCallable TkeClient::DescribeHealthCheckTemplateCallable(const DescribeHealthCheckTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHealthCheckTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeHealthCheckTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::DescribeNodePoolsOutcome TkeClient::DescribeNodePools(const DescribeNodePoolsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodePools");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodePoolsResponse rsp = DescribeNodePoolsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodePoolsOutcome(rsp);
        else
            return DescribeNodePoolsOutcome(o.GetError());
    }
    else
    {
        return DescribeNodePoolsOutcome(outcome.GetError());
    }
}

void TkeClient::DescribeNodePoolsAsync(const DescribeNodePoolsRequest& request, const DescribeNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNodePools(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::DescribeNodePoolsOutcomeCallable TkeClient::DescribeNodePoolsCallable(const DescribeNodePoolsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodePoolsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNodePools(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyHealthCheckPolicyOutcome TkeClient::ModifyHealthCheckPolicy(const ModifyHealthCheckPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHealthCheckPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHealthCheckPolicyResponse rsp = ModifyHealthCheckPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHealthCheckPolicyOutcome(rsp);
        else
            return ModifyHealthCheckPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyHealthCheckPolicyOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyHealthCheckPolicyAsync(const ModifyHealthCheckPolicyRequest& request, const ModifyHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHealthCheckPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyHealthCheckPolicyOutcomeCallable TkeClient::ModifyHealthCheckPolicyCallable(const ModifyHealthCheckPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHealthCheckPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyHealthCheckPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::ModifyNodePoolOutcome TkeClient::ModifyNodePool(const ModifyNodePoolRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNodePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNodePoolResponse rsp = ModifyNodePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNodePoolOutcome(rsp);
        else
            return ModifyNodePoolOutcome(o.GetError());
    }
    else
    {
        return ModifyNodePoolOutcome(outcome.GetError());
    }
}

void TkeClient::ModifyNodePoolAsync(const ModifyNodePoolRequest& request, const ModifyNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNodePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::ModifyNodePoolOutcomeCallable TkeClient::ModifyNodePoolCallable(const ModifyNodePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNodePoolOutcome()>>(
        [this, request]()
        {
            return this->ModifyNodePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::RebootMachinesOutcome TkeClient::RebootMachines(const RebootMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootMachinesResponse rsp = RebootMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootMachinesOutcome(rsp);
        else
            return RebootMachinesOutcome(o.GetError());
    }
    else
    {
        return RebootMachinesOutcome(outcome.GetError());
    }
}

void TkeClient::RebootMachinesAsync(const RebootMachinesRequest& request, const RebootMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebootMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::RebootMachinesOutcomeCallable TkeClient::RebootMachinesCallable(const RebootMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebootMachinesOutcome()>>(
        [this, request]()
        {
            return this->RebootMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::StartMachinesOutcome TkeClient::StartMachines(const StartMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "StartMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMachinesResponse rsp = StartMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMachinesOutcome(rsp);
        else
            return StartMachinesOutcome(o.GetError());
    }
    else
    {
        return StartMachinesOutcome(outcome.GetError());
    }
}

void TkeClient::StartMachinesAsync(const StartMachinesRequest& request, const StartMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::StartMachinesOutcomeCallable TkeClient::StartMachinesCallable(const StartMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMachinesOutcome()>>(
        [this, request]()
        {
            return this->StartMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TkeClient::StopMachinesOutcome TkeClient::StopMachines(const StopMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "StopMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMachinesResponse rsp = StopMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMachinesOutcome(rsp);
        else
            return StopMachinesOutcome(o.GetError());
    }
    else
    {
        return StopMachinesOutcome(outcome.GetError());
    }
}

void TkeClient::StopMachinesAsync(const StopMachinesRequest& request, const StopMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TkeClient::StopMachinesOutcomeCallable TkeClient::StopMachinesCallable(const StopMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMachinesOutcome()>>(
        [this, request]()
        {
            return this->StopMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


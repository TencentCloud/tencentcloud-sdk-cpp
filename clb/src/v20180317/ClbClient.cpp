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

#include <tencentcloud/clb/v20180317/ClbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Clb::V20180317;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-17";
    const string ENDPOINT = "clb.tencentcloudapi.com";
}

ClbClient::ClbClient(const Credential &credential, const string &region) :
    ClbClient(credential, region, ClientProfile())
{
}

ClbClient::ClbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ClbClient::AutoRewriteOutcome ClbClient::AutoRewrite(const AutoRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "AutoRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AutoRewriteResponse rsp = AutoRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AutoRewriteOutcome(rsp);
        else
            return AutoRewriteOutcome(o.GetError());
    }
    else
    {
        return AutoRewriteOutcome(outcome.GetError());
    }
}

void ClbClient::AutoRewriteAsync(const AutoRewriteRequest& request, const AutoRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AutoRewrite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::AutoRewriteOutcomeCallable ClbClient::AutoRewriteCallable(const AutoRewriteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AutoRewriteOutcome()>>(
        [this, request]()
        {
            return this->AutoRewrite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::BatchModifyTargetWeightOutcome ClbClient::BatchModifyTargetWeight(const BatchModifyTargetWeightRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyTargetWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyTargetWeightResponse rsp = BatchModifyTargetWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyTargetWeightOutcome(rsp);
        else
            return BatchModifyTargetWeightOutcome(o.GetError());
    }
    else
    {
        return BatchModifyTargetWeightOutcome(outcome.GetError());
    }
}

void ClbClient::BatchModifyTargetWeightAsync(const BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchModifyTargetWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::BatchModifyTargetWeightOutcomeCallable ClbClient::BatchModifyTargetWeightCallable(const BatchModifyTargetWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchModifyTargetWeightOutcome()>>(
        [this, request]()
        {
            return this->BatchModifyTargetWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::CreateListenerOutcome ClbClient::CreateListener(const CreateListenerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateListenerResponse rsp = CreateListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateListenerOutcome(rsp);
        else
            return CreateListenerOutcome(o.GetError());
    }
    else
    {
        return CreateListenerOutcome(outcome.GetError());
    }
}

void ClbClient::CreateListenerAsync(const CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::CreateListenerOutcomeCallable ClbClient::CreateListenerCallable(const CreateListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateListenerOutcome()>>(
        [this, request]()
        {
            return this->CreateListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::CreateLoadBalancerOutcome ClbClient::CreateLoadBalancer(const CreateLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadBalancerResponse rsp = CreateLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadBalancerOutcome(rsp);
        else
            return CreateLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return CreateLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::CreateLoadBalancerOutcomeCallable ClbClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->CreateLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::CreateRuleOutcome ClbClient::CreateRule(const CreateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleResponse rsp = CreateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleOutcome(rsp);
        else
            return CreateRuleOutcome(o.GetError());
    }
    else
    {
        return CreateRuleOutcome(outcome.GetError());
    }
}

void ClbClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::CreateRuleOutcomeCallable ClbClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DeleteListenerOutcome ClbClient::DeleteListener(const DeleteListenerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteListenerResponse rsp = DeleteListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteListenerOutcome(rsp);
        else
            return DeleteListenerOutcome(o.GetError());
    }
    else
    {
        return DeleteListenerOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeleteListenerOutcomeCallable ClbClient::DeleteListenerCallable(const DeleteListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteListenerOutcome()>>(
        [this, request]()
        {
            return this->DeleteListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DeleteLoadBalancerOutcome ClbClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerResponse rsp = DeleteLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerOutcome(rsp);
        else
            return DeleteLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeleteLoadBalancerOutcomeCallable ClbClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DeleteRewriteOutcome ClbClient::DeleteRewrite(const DeleteRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRewriteResponse rsp = DeleteRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRewriteOutcome(rsp);
        else
            return DeleteRewriteOutcome(o.GetError());
    }
    else
    {
        return DeleteRewriteOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteRewriteAsync(const DeleteRewriteRequest& request, const DeleteRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRewrite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeleteRewriteOutcomeCallable ClbClient::DeleteRewriteCallable(const DeleteRewriteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRewriteOutcome()>>(
        [this, request]()
        {
            return this->DeleteRewrite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DeleteRuleOutcome ClbClient::DeleteRule(const DeleteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleResponse rsp = DeleteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleOutcome(rsp);
        else
            return DeleteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeleteRuleOutcomeCallable ClbClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DeregisterTargetsOutcome ClbClient::DeregisterTargets(const DeregisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterTargetsResponse rsp = DeregisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterTargetsOutcome(rsp);
        else
            return DeregisterTargetsOutcome(o.GetError());
    }
    else
    {
        return DeregisterTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::DeregisterTargetsAsync(const DeregisterTargetsRequest& request, const DeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeregisterTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeregisterTargetsOutcomeCallable ClbClient::DeregisterTargetsCallable(const DeregisterTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeregisterTargetsOutcome()>>(
        [this, request]()
        {
            return this->DeregisterTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DeregisterTargetsFromClassicalLBOutcome ClbClient::DeregisterTargetsFromClassicalLB(const DeregisterTargetsFromClassicalLBRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterTargetsFromClassicalLB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterTargetsFromClassicalLBResponse rsp = DeregisterTargetsFromClassicalLBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterTargetsFromClassicalLBOutcome(rsp);
        else
            return DeregisterTargetsFromClassicalLBOutcome(o.GetError());
    }
    else
    {
        return DeregisterTargetsFromClassicalLBOutcome(outcome.GetError());
    }
}

void ClbClient::DeregisterTargetsFromClassicalLBAsync(const DeregisterTargetsFromClassicalLBRequest& request, const DeregisterTargetsFromClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeregisterTargetsFromClassicalLB(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeregisterTargetsFromClassicalLBOutcomeCallable ClbClient::DeregisterTargetsFromClassicalLBCallable(const DeregisterTargetsFromClassicalLBRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeregisterTargetsFromClassicalLBOutcome()>>(
        [this, request]()
        {
            return this->DeregisterTargetsFromClassicalLB(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeClassicalLBByInstanceIdOutcome ClbClient::DescribeClassicalLBByInstanceId(const DescribeClassicalLBByInstanceIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicalLBByInstanceId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicalLBByInstanceIdResponse rsp = DescribeClassicalLBByInstanceIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicalLBByInstanceIdOutcome(rsp);
        else
            return DescribeClassicalLBByInstanceIdOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicalLBByInstanceIdOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClassicalLBByInstanceIdAsync(const DescribeClassicalLBByInstanceIdRequest& request, const DescribeClassicalLBByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClassicalLBByInstanceId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeClassicalLBByInstanceIdOutcomeCallable ClbClient::DescribeClassicalLBByInstanceIdCallable(const DescribeClassicalLBByInstanceIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClassicalLBByInstanceIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeClassicalLBByInstanceId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeClassicalLBHealthStatusOutcome ClbClient::DescribeClassicalLBHealthStatus(const DescribeClassicalLBHealthStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicalLBHealthStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicalLBHealthStatusResponse rsp = DescribeClassicalLBHealthStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicalLBHealthStatusOutcome(rsp);
        else
            return DescribeClassicalLBHealthStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicalLBHealthStatusOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClassicalLBHealthStatusAsync(const DescribeClassicalLBHealthStatusRequest& request, const DescribeClassicalLBHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClassicalLBHealthStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeClassicalLBHealthStatusOutcomeCallable ClbClient::DescribeClassicalLBHealthStatusCallable(const DescribeClassicalLBHealthStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClassicalLBHealthStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeClassicalLBHealthStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeClassicalLBListenersOutcome ClbClient::DescribeClassicalLBListeners(const DescribeClassicalLBListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicalLBListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicalLBListenersResponse rsp = DescribeClassicalLBListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicalLBListenersOutcome(rsp);
        else
            return DescribeClassicalLBListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicalLBListenersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClassicalLBListenersAsync(const DescribeClassicalLBListenersRequest& request, const DescribeClassicalLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClassicalLBListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeClassicalLBListenersOutcomeCallable ClbClient::DescribeClassicalLBListenersCallable(const DescribeClassicalLBListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClassicalLBListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeClassicalLBListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeClassicalLBTargetsOutcome ClbClient::DescribeClassicalLBTargets(const DescribeClassicalLBTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicalLBTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicalLBTargetsResponse rsp = DescribeClassicalLBTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicalLBTargetsOutcome(rsp);
        else
            return DescribeClassicalLBTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicalLBTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClassicalLBTargetsAsync(const DescribeClassicalLBTargetsRequest& request, const DescribeClassicalLBTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClassicalLBTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeClassicalLBTargetsOutcomeCallable ClbClient::DescribeClassicalLBTargetsCallable(const DescribeClassicalLBTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClassicalLBTargetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClassicalLBTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeListenersOutcome ClbClient::DescribeListeners(const DescribeListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenersResponse rsp = DescribeListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenersOutcome(rsp);
        else
            return DescribeListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeListenersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeListenersAsync(const DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeListenersOutcomeCallable ClbClient::DescribeListenersCallable(const DescribeListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeLoadBalancersOutcome ClbClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancersResponse rsp = DescribeLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancersOutcome(rsp);
        else
            return DescribeLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeLoadBalancersOutcomeCallable ClbClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeRewriteOutcome ClbClient::DescribeRewrite(const DescribeRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRewriteResponse rsp = DescribeRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRewriteOutcome(rsp);
        else
            return DescribeRewriteOutcome(o.GetError());
    }
    else
    {
        return DescribeRewriteOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeRewriteAsync(const DescribeRewriteRequest& request, const DescribeRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRewrite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeRewriteOutcomeCallable ClbClient::DescribeRewriteCallable(const DescribeRewriteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRewriteOutcome()>>(
        [this, request]()
        {
            return this->DescribeRewrite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeTargetHealthOutcome ClbClient::DescribeTargetHealth(const DescribeTargetHealthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetHealthResponse rsp = DescribeTargetHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetHealthOutcome(rsp);
        else
            return DescribeTargetHealthOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetHealthOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeTargetHealthAsync(const DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargetHealth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeTargetHealthOutcomeCallable ClbClient::DescribeTargetHealthCallable(const DescribeTargetHealthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTargetHealthOutcome()>>(
        [this, request]()
        {
            return this->DescribeTargetHealth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeTargetsOutcome ClbClient::DescribeTargets(const DescribeTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetsResponse rsp = DescribeTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetsOutcome(rsp);
        else
            return DescribeTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeTargetsAsync(const DescribeTargetsRequest& request, const DescribeTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeTargetsOutcomeCallable ClbClient::DescribeTargetsCallable(const DescribeTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTargetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeTaskStatusOutcome ClbClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
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

void ClbClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeTaskStatusOutcomeCallable ClbClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
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

ClbClient::ManualRewriteOutcome ClbClient::ManualRewrite(const ManualRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "ManualRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManualRewriteResponse rsp = ManualRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManualRewriteOutcome(rsp);
        else
            return ManualRewriteOutcome(o.GetError());
    }
    else
    {
        return ManualRewriteOutcome(outcome.GetError());
    }
}

void ClbClient::ManualRewriteAsync(const ManualRewriteRequest& request, const ManualRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManualRewrite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ManualRewriteOutcomeCallable ClbClient::ManualRewriteCallable(const ManualRewriteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManualRewriteOutcome()>>(
        [this, request]()
        {
            return this->ManualRewrite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyDomainOutcome ClbClient::ModifyDomain(const ModifyDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainResponse rsp = ModifyDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainOutcome(rsp);
        else
            return ModifyDomainOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyDomainAsync(const ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyDomainOutcomeCallable ClbClient::ModifyDomainCallable(const ModifyDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyListenerOutcome ClbClient::ModifyListener(const ModifyListenerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyListenerResponse rsp = ModifyListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyListenerOutcome(rsp);
        else
            return ModifyListenerOutcome(o.GetError());
    }
    else
    {
        return ModifyListenerOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyListenerAsync(const ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyListenerOutcomeCallable ClbClient::ModifyListenerCallable(const ModifyListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyListenerOutcome()>>(
        [this, request]()
        {
            return this->ModifyListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyLoadBalancerAttributesOutcome ClbClient::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerAttributesResponse rsp = ModifyLoadBalancerAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerAttributesOutcome(rsp);
        else
            return ModifyLoadBalancerAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerAttributesOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancerAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyLoadBalancerAttributesOutcomeCallable ClbClient::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancerAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyRuleOutcome ClbClient::ModifyRule(const ModifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleResponse rsp = ModifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleOutcome(rsp);
        else
            return ModifyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyRuleOutcomeCallable ClbClient::ModifyRuleCallable(const ModifyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyTargetPortOutcome ClbClient::ModifyTargetPort(const ModifyTargetPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetPortResponse rsp = ModifyTargetPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetPortOutcome(rsp);
        else
            return ModifyTargetPortOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetPortOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyTargetPortAsync(const ModifyTargetPortRequest& request, const ModifyTargetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTargetPort(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyTargetPortOutcomeCallable ClbClient::ModifyTargetPortCallable(const ModifyTargetPortRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTargetPortOutcome()>>(
        [this, request]()
        {
            return this->ModifyTargetPort(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyTargetWeightOutcome ClbClient::ModifyTargetWeight(const ModifyTargetWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetWeightResponse rsp = ModifyTargetWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetWeightOutcome(rsp);
        else
            return ModifyTargetWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetWeightOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyTargetWeightAsync(const ModifyTargetWeightRequest& request, const ModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTargetWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyTargetWeightOutcomeCallable ClbClient::ModifyTargetWeightCallable(const ModifyTargetWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTargetWeightOutcome()>>(
        [this, request]()
        {
            return this->ModifyTargetWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::RegisterTargetsOutcome ClbClient::RegisterTargets(const RegisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterTargetsResponse rsp = RegisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterTargetsOutcome(rsp);
        else
            return RegisterTargetsOutcome(o.GetError());
    }
    else
    {
        return RegisterTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::RegisterTargetsAsync(const RegisterTargetsRequest& request, const RegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::RegisterTargetsOutcomeCallable ClbClient::RegisterTargetsCallable(const RegisterTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterTargetsOutcome()>>(
        [this, request]()
        {
            return this->RegisterTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::RegisterTargetsWithClassicalLBOutcome ClbClient::RegisterTargetsWithClassicalLB(const RegisterTargetsWithClassicalLBRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterTargetsWithClassicalLB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterTargetsWithClassicalLBResponse rsp = RegisterTargetsWithClassicalLBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterTargetsWithClassicalLBOutcome(rsp);
        else
            return RegisterTargetsWithClassicalLBOutcome(o.GetError());
    }
    else
    {
        return RegisterTargetsWithClassicalLBOutcome(outcome.GetError());
    }
}

void ClbClient::RegisterTargetsWithClassicalLBAsync(const RegisterTargetsWithClassicalLBRequest& request, const RegisterTargetsWithClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterTargetsWithClassicalLB(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::RegisterTargetsWithClassicalLBOutcomeCallable ClbClient::RegisterTargetsWithClassicalLBCallable(const RegisterTargetsWithClassicalLBRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterTargetsWithClassicalLBOutcome()>>(
        [this, request]()
        {
            return this->RegisterTargetsWithClassicalLB(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::SetLoadBalancerSecurityGroupsOutcome ClbClient::SetLoadBalancerSecurityGroups(const SetLoadBalancerSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "SetLoadBalancerSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLoadBalancerSecurityGroupsResponse rsp = SetLoadBalancerSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLoadBalancerSecurityGroupsOutcome(rsp);
        else
            return SetLoadBalancerSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return SetLoadBalancerSecurityGroupsOutcome(outcome.GetError());
    }
}

void ClbClient::SetLoadBalancerSecurityGroupsAsync(const SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetLoadBalancerSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::SetLoadBalancerSecurityGroupsOutcomeCallable ClbClient::SetLoadBalancerSecurityGroupsCallable(const SetLoadBalancerSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetLoadBalancerSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->SetLoadBalancerSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::SetSecurityGroupForLoadbalancersOutcome ClbClient::SetSecurityGroupForLoadbalancers(const SetSecurityGroupForLoadbalancersRequest &request)
{
    auto outcome = MakeRequest(request, "SetSecurityGroupForLoadbalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetSecurityGroupForLoadbalancersResponse rsp = SetSecurityGroupForLoadbalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetSecurityGroupForLoadbalancersOutcome(rsp);
        else
            return SetSecurityGroupForLoadbalancersOutcome(o.GetError());
    }
    else
    {
        return SetSecurityGroupForLoadbalancersOutcome(outcome.GetError());
    }
}

void ClbClient::SetSecurityGroupForLoadbalancersAsync(const SetSecurityGroupForLoadbalancersRequest& request, const SetSecurityGroupForLoadbalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetSecurityGroupForLoadbalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::SetSecurityGroupForLoadbalancersOutcomeCallable ClbClient::SetSecurityGroupForLoadbalancersCallable(const SetSecurityGroupForLoadbalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetSecurityGroupForLoadbalancersOutcome()>>(
        [this, request]()
        {
            return this->SetSecurityGroupForLoadbalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


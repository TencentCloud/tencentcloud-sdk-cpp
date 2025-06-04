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


ClbClient::AddCustomizedConfigOutcome ClbClient::AddCustomizedConfig(const AddCustomizedConfigRequest &request)
{
    auto outcome = MakeRequest(request, "AddCustomizedConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCustomizedConfigResponse rsp = AddCustomizedConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCustomizedConfigOutcome(rsp);
        else
            return AddCustomizedConfigOutcome(o.GetError());
    }
    else
    {
        return AddCustomizedConfigOutcome(outcome.GetError());
    }
}

void ClbClient::AddCustomizedConfigAsync(const AddCustomizedConfigRequest& request, const AddCustomizedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCustomizedConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::AddCustomizedConfigOutcomeCallable ClbClient::AddCustomizedConfigCallable(const AddCustomizedConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCustomizedConfigOutcome()>>(
        [this, request]()
        {
            return this->AddCustomizedConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::AssociateCustomizedConfigOutcome ClbClient::AssociateCustomizedConfig(const AssociateCustomizedConfigRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateCustomizedConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateCustomizedConfigResponse rsp = AssociateCustomizedConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateCustomizedConfigOutcome(rsp);
        else
            return AssociateCustomizedConfigOutcome(o.GetError());
    }
    else
    {
        return AssociateCustomizedConfigOutcome(outcome.GetError());
    }
}

void ClbClient::AssociateCustomizedConfigAsync(const AssociateCustomizedConfigRequest& request, const AssociateCustomizedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateCustomizedConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::AssociateCustomizedConfigOutcomeCallable ClbClient::AssociateCustomizedConfigCallable(const AssociateCustomizedConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateCustomizedConfigOutcome()>>(
        [this, request]()
        {
            return this->AssociateCustomizedConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::AssociateTargetGroupsOutcome ClbClient::AssociateTargetGroups(const AssociateTargetGroupsRequest &request)
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

void ClbClient::AssociateTargetGroupsAsync(const AssociateTargetGroupsRequest& request, const AssociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateTargetGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::AssociateTargetGroupsOutcomeCallable ClbClient::AssociateTargetGroupsCallable(const AssociateTargetGroupsRequest &request)
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

ClbClient::BatchDeregisterTargetsOutcome ClbClient::BatchDeregisterTargets(const BatchDeregisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeregisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeregisterTargetsResponse rsp = BatchDeregisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeregisterTargetsOutcome(rsp);
        else
            return BatchDeregisterTargetsOutcome(o.GetError());
    }
    else
    {
        return BatchDeregisterTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::BatchDeregisterTargetsAsync(const BatchDeregisterTargetsRequest& request, const BatchDeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeregisterTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::BatchDeregisterTargetsOutcomeCallable ClbClient::BatchDeregisterTargetsCallable(const BatchDeregisterTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeregisterTargetsOutcome()>>(
        [this, request]()
        {
            return this->BatchDeregisterTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::BatchModifyTargetTagOutcome ClbClient::BatchModifyTargetTag(const BatchModifyTargetTagRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyTargetTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyTargetTagResponse rsp = BatchModifyTargetTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyTargetTagOutcome(rsp);
        else
            return BatchModifyTargetTagOutcome(o.GetError());
    }
    else
    {
        return BatchModifyTargetTagOutcome(outcome.GetError());
    }
}

void ClbClient::BatchModifyTargetTagAsync(const BatchModifyTargetTagRequest& request, const BatchModifyTargetTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchModifyTargetTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::BatchModifyTargetTagOutcomeCallable ClbClient::BatchModifyTargetTagCallable(const BatchModifyTargetTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchModifyTargetTagOutcome()>>(
        [this, request]()
        {
            return this->BatchModifyTargetTag(request);
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

ClbClient::BatchRegisterTargetsOutcome ClbClient::BatchRegisterTargets(const BatchRegisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRegisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRegisterTargetsResponse rsp = BatchRegisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRegisterTargetsOutcome(rsp);
        else
            return BatchRegisterTargetsOutcome(o.GetError());
    }
    else
    {
        return BatchRegisterTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::BatchRegisterTargetsAsync(const BatchRegisterTargetsRequest& request, const BatchRegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchRegisterTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::BatchRegisterTargetsOutcomeCallable ClbClient::BatchRegisterTargetsCallable(const BatchRegisterTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchRegisterTargetsOutcome()>>(
        [this, request]()
        {
            return this->BatchRegisterTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::CloneLoadBalancerOutcome ClbClient::CloneLoadBalancer(const CloneLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "CloneLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneLoadBalancerResponse rsp = CloneLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneLoadBalancerOutcome(rsp);
        else
            return CloneLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return CloneLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::CloneLoadBalancerAsync(const CloneLoadBalancerRequest& request, const CloneLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloneLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::CloneLoadBalancerOutcomeCallable ClbClient::CloneLoadBalancerCallable(const CloneLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloneLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->CloneLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::CreateClsLogSetOutcome ClbClient::CreateClsLogSet(const CreateClsLogSetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClsLogSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClsLogSetResponse rsp = CreateClsLogSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClsLogSetOutcome(rsp);
        else
            return CreateClsLogSetOutcome(o.GetError());
    }
    else
    {
        return CreateClsLogSetOutcome(outcome.GetError());
    }
}

void ClbClient::CreateClsLogSetAsync(const CreateClsLogSetRequest& request, const CreateClsLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClsLogSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::CreateClsLogSetOutcomeCallable ClbClient::CreateClsLogSetCallable(const CreateClsLogSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClsLogSetOutcome()>>(
        [this, request]()
        {
            return this->CreateClsLogSet(request);
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

ClbClient::CreateLoadBalancerSnatIpsOutcome ClbClient::CreateLoadBalancerSnatIps(const CreateLoadBalancerSnatIpsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadBalancerSnatIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadBalancerSnatIpsResponse rsp = CreateLoadBalancerSnatIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadBalancerSnatIpsOutcome(rsp);
        else
            return CreateLoadBalancerSnatIpsOutcome(o.GetError());
    }
    else
    {
        return CreateLoadBalancerSnatIpsOutcome(outcome.GetError());
    }
}

void ClbClient::CreateLoadBalancerSnatIpsAsync(const CreateLoadBalancerSnatIpsRequest& request, const CreateLoadBalancerSnatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLoadBalancerSnatIps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::CreateLoadBalancerSnatIpsOutcomeCallable ClbClient::CreateLoadBalancerSnatIpsCallable(const CreateLoadBalancerSnatIpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLoadBalancerSnatIpsOutcome()>>(
        [this, request]()
        {
            return this->CreateLoadBalancerSnatIps(request);
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

ClbClient::CreateTargetGroupOutcome ClbClient::CreateTargetGroup(const CreateTargetGroupRequest &request)
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

void ClbClient::CreateTargetGroupAsync(const CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTargetGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::CreateTargetGroupOutcomeCallable ClbClient::CreateTargetGroupCallable(const CreateTargetGroupRequest &request)
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

ClbClient::CreateTopicOutcome ClbClient::CreateTopic(const CreateTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicResponse rsp = CreateTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicOutcome(rsp);
        else
            return CreateTopicOutcome(o.GetError());
    }
    else
    {
        return CreateTopicOutcome(outcome.GetError());
    }
}

void ClbClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::CreateTopicOutcomeCallable ClbClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DeleteCustomizedConfigOutcome ClbClient::DeleteCustomizedConfig(const DeleteCustomizedConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomizedConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomizedConfigResponse rsp = DeleteCustomizedConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomizedConfigOutcome(rsp);
        else
            return DeleteCustomizedConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomizedConfigOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteCustomizedConfigAsync(const DeleteCustomizedConfigRequest& request, const DeleteCustomizedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomizedConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeleteCustomizedConfigOutcomeCallable ClbClient::DeleteCustomizedConfigCallable(const DeleteCustomizedConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomizedConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomizedConfig(request);
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

ClbClient::DeleteLoadBalancerListenersOutcome ClbClient::DeleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancerListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerListenersResponse rsp = DeleteLoadBalancerListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerListenersOutcome(rsp);
        else
            return DeleteLoadBalancerListenersOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerListenersOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteLoadBalancerListenersAsync(const DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoadBalancerListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeleteLoadBalancerListenersOutcomeCallable ClbClient::DeleteLoadBalancerListenersCallable(const DeleteLoadBalancerListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerListenersOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoadBalancerListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DeleteLoadBalancerSnatIpsOutcome ClbClient::DeleteLoadBalancerSnatIps(const DeleteLoadBalancerSnatIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancerSnatIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerSnatIpsResponse rsp = DeleteLoadBalancerSnatIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerSnatIpsOutcome(rsp);
        else
            return DeleteLoadBalancerSnatIpsOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerSnatIpsOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteLoadBalancerSnatIpsAsync(const DeleteLoadBalancerSnatIpsRequest& request, const DeleteLoadBalancerSnatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoadBalancerSnatIps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeleteLoadBalancerSnatIpsOutcomeCallable ClbClient::DeleteLoadBalancerSnatIpsCallable(const DeleteLoadBalancerSnatIpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerSnatIpsOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoadBalancerSnatIps(request);
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

ClbClient::DeleteTargetGroupsOutcome ClbClient::DeleteTargetGroups(const DeleteTargetGroupsRequest &request)
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

void ClbClient::DeleteTargetGroupsAsync(const DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTargetGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeleteTargetGroupsOutcomeCallable ClbClient::DeleteTargetGroupsCallable(const DeleteTargetGroupsRequest &request)
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

ClbClient::DeregisterFunctionTargetsOutcome ClbClient::DeregisterFunctionTargets(const DeregisterFunctionTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterFunctionTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterFunctionTargetsResponse rsp = DeregisterFunctionTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterFunctionTargetsOutcome(rsp);
        else
            return DeregisterFunctionTargetsOutcome(o.GetError());
    }
    else
    {
        return DeregisterFunctionTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::DeregisterFunctionTargetsAsync(const DeregisterFunctionTargetsRequest& request, const DeregisterFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeregisterFunctionTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeregisterFunctionTargetsOutcomeCallable ClbClient::DeregisterFunctionTargetsCallable(const DeregisterFunctionTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeregisterFunctionTargetsOutcome()>>(
        [this, request]()
        {
            return this->DeregisterFunctionTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DeregisterTargetGroupInstancesOutcome ClbClient::DeregisterTargetGroupInstances(const DeregisterTargetGroupInstancesRequest &request)
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

void ClbClient::DeregisterTargetGroupInstancesAsync(const DeregisterTargetGroupInstancesRequest& request, const DeregisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeregisterTargetGroupInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DeregisterTargetGroupInstancesOutcomeCallable ClbClient::DeregisterTargetGroupInstancesCallable(const DeregisterTargetGroupInstancesRequest &request)
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

ClbClient::DescribeBlockIPListOutcome ClbClient::DescribeBlockIPList(const DescribeBlockIPListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockIPList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockIPListResponse rsp = DescribeBlockIPListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockIPListOutcome(rsp);
        else
            return DescribeBlockIPListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockIPListOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeBlockIPListAsync(const DescribeBlockIPListRequest& request, const DescribeBlockIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlockIPList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeBlockIPListOutcomeCallable ClbClient::DescribeBlockIPListCallable(const DescribeBlockIPListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlockIPListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlockIPList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeBlockIPTaskOutcome ClbClient::DescribeBlockIPTask(const DescribeBlockIPTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockIPTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockIPTaskResponse rsp = DescribeBlockIPTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockIPTaskOutcome(rsp);
        else
            return DescribeBlockIPTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockIPTaskOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeBlockIPTaskAsync(const DescribeBlockIPTaskRequest& request, const DescribeBlockIPTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlockIPTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeBlockIPTaskOutcomeCallable ClbClient::DescribeBlockIPTaskCallable(const DescribeBlockIPTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlockIPTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlockIPTask(request);
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

ClbClient::DescribeClsLogSetOutcome ClbClient::DescribeClsLogSet(const DescribeClsLogSetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClsLogSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClsLogSetResponse rsp = DescribeClsLogSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClsLogSetOutcome(rsp);
        else
            return DescribeClsLogSetOutcome(o.GetError());
    }
    else
    {
        return DescribeClsLogSetOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClsLogSetAsync(const DescribeClsLogSetRequest& request, const DescribeClsLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClsLogSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeClsLogSetOutcomeCallable ClbClient::DescribeClsLogSetCallable(const DescribeClsLogSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClsLogSetOutcome()>>(
        [this, request]()
        {
            return this->DescribeClsLogSet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeClusterResourcesOutcome ClbClient::DescribeClusterResources(const DescribeClusterResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterResourcesResponse rsp = DescribeClusterResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterResourcesOutcome(rsp);
        else
            return DescribeClusterResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterResourcesOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClusterResourcesAsync(const DescribeClusterResourcesRequest& request, const DescribeClusterResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeClusterResourcesOutcomeCallable ClbClient::DescribeClusterResourcesCallable(const DescribeClusterResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeCrossTargetsOutcome ClbClient::DescribeCrossTargets(const DescribeCrossTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossTargetsResponse rsp = DescribeCrossTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossTargetsOutcome(rsp);
        else
            return DescribeCrossTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeCrossTargetsAsync(const DescribeCrossTargetsRequest& request, const DescribeCrossTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCrossTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeCrossTargetsOutcomeCallable ClbClient::DescribeCrossTargetsCallable(const DescribeCrossTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCrossTargetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCrossTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeCustomizedConfigAssociateListOutcome ClbClient::DescribeCustomizedConfigAssociateList(const DescribeCustomizedConfigAssociateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomizedConfigAssociateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomizedConfigAssociateListResponse rsp = DescribeCustomizedConfigAssociateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomizedConfigAssociateListOutcome(rsp);
        else
            return DescribeCustomizedConfigAssociateListOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomizedConfigAssociateListOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeCustomizedConfigAssociateListAsync(const DescribeCustomizedConfigAssociateListRequest& request, const DescribeCustomizedConfigAssociateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomizedConfigAssociateList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeCustomizedConfigAssociateListOutcomeCallable ClbClient::DescribeCustomizedConfigAssociateListCallable(const DescribeCustomizedConfigAssociateListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomizedConfigAssociateListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomizedConfigAssociateList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeCustomizedConfigListOutcome ClbClient::DescribeCustomizedConfigList(const DescribeCustomizedConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomizedConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomizedConfigListResponse rsp = DescribeCustomizedConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomizedConfigListOutcome(rsp);
        else
            return DescribeCustomizedConfigListOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomizedConfigListOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeCustomizedConfigListAsync(const DescribeCustomizedConfigListRequest& request, const DescribeCustomizedConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomizedConfigList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeCustomizedConfigListOutcomeCallable ClbClient::DescribeCustomizedConfigListCallable(const DescribeCustomizedConfigListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomizedConfigListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomizedConfigList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeExclusiveClustersOutcome ClbClient::DescribeExclusiveClusters(const DescribeExclusiveClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExclusiveClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExclusiveClustersResponse rsp = DescribeExclusiveClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExclusiveClustersOutcome(rsp);
        else
            return DescribeExclusiveClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeExclusiveClustersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeExclusiveClustersAsync(const DescribeExclusiveClustersRequest& request, const DescribeExclusiveClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExclusiveClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeExclusiveClustersOutcomeCallable ClbClient::DescribeExclusiveClustersCallable(const DescribeExclusiveClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExclusiveClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeExclusiveClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeIdleLoadBalancersOutcome ClbClient::DescribeIdleLoadBalancers(const DescribeIdleLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdleLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdleLoadBalancersResponse rsp = DescribeIdleLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdleLoadBalancersOutcome(rsp);
        else
            return DescribeIdleLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DescribeIdleLoadBalancersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeIdleLoadBalancersAsync(const DescribeIdleLoadBalancersRequest& request, const DescribeIdleLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIdleLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeIdleLoadBalancersOutcomeCallable ClbClient::DescribeIdleLoadBalancersCallable(const DescribeIdleLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIdleLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->DescribeIdleLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeLBListenersOutcome ClbClient::DescribeLBListeners(const DescribeLBListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLBListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLBListenersResponse rsp = DescribeLBListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLBListenersOutcome(rsp);
        else
            return DescribeLBListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeLBListenersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLBListenersAsync(const DescribeLBListenersRequest& request, const DescribeLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLBListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeLBListenersOutcomeCallable ClbClient::DescribeLBListenersCallable(const DescribeLBListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLBListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeLBListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeLBOperateProtectOutcome ClbClient::DescribeLBOperateProtect(const DescribeLBOperateProtectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLBOperateProtect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLBOperateProtectResponse rsp = DescribeLBOperateProtectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLBOperateProtectOutcome(rsp);
        else
            return DescribeLBOperateProtectOutcome(o.GetError());
    }
    else
    {
        return DescribeLBOperateProtectOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLBOperateProtectAsync(const DescribeLBOperateProtectRequest& request, const DescribeLBOperateProtectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLBOperateProtect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeLBOperateProtectOutcomeCallable ClbClient::DescribeLBOperateProtectCallable(const DescribeLBOperateProtectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLBOperateProtectOutcome()>>(
        [this, request]()
        {
            return this->DescribeLBOperateProtect(request);
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

ClbClient::DescribeLoadBalancerListByCertIdOutcome ClbClient::DescribeLoadBalancerListByCertId(const DescribeLoadBalancerListByCertIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerListByCertId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerListByCertIdResponse rsp = DescribeLoadBalancerListByCertIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerListByCertIdOutcome(rsp);
        else
            return DescribeLoadBalancerListByCertIdOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerListByCertIdOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancerListByCertIdAsync(const DescribeLoadBalancerListByCertIdRequest& request, const DescribeLoadBalancerListByCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancerListByCertId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeLoadBalancerListByCertIdOutcomeCallable ClbClient::DescribeLoadBalancerListByCertIdCallable(const DescribeLoadBalancerListByCertIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerListByCertIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancerListByCertId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeLoadBalancerOverviewOutcome ClbClient::DescribeLoadBalancerOverview(const DescribeLoadBalancerOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerOverviewResponse rsp = DescribeLoadBalancerOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerOverviewOutcome(rsp);
        else
            return DescribeLoadBalancerOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerOverviewOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancerOverviewAsync(const DescribeLoadBalancerOverviewRequest& request, const DescribeLoadBalancerOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancerOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeLoadBalancerOverviewOutcomeCallable ClbClient::DescribeLoadBalancerOverviewCallable(const DescribeLoadBalancerOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancerOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeLoadBalancerTrafficOutcome ClbClient::DescribeLoadBalancerTraffic(const DescribeLoadBalancerTrafficRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerTraffic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerTrafficResponse rsp = DescribeLoadBalancerTrafficResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerTrafficOutcome(rsp);
        else
            return DescribeLoadBalancerTrafficOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerTrafficOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancerTrafficAsync(const DescribeLoadBalancerTrafficRequest& request, const DescribeLoadBalancerTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancerTraffic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeLoadBalancerTrafficOutcomeCallable ClbClient::DescribeLoadBalancerTrafficCallable(const DescribeLoadBalancerTrafficRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerTrafficOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancerTraffic(request);
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

ClbClient::DescribeLoadBalancersDetailOutcome ClbClient::DescribeLoadBalancersDetail(const DescribeLoadBalancersDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancersDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancersDetailResponse rsp = DescribeLoadBalancersDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancersDetailOutcome(rsp);
        else
            return DescribeLoadBalancersDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancersDetailOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancersDetailAsync(const DescribeLoadBalancersDetailRequest& request, const DescribeLoadBalancersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancersDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeLoadBalancersDetailOutcomeCallable ClbClient::DescribeLoadBalancersDetailCallable(const DescribeLoadBalancersDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancersDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancersDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeQuotaOutcome ClbClient::DescribeQuota(const DescribeQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotaResponse rsp = DescribeQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotaOutcome(rsp);
        else
            return DescribeQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotaOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeQuotaAsync(const DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeQuotaOutcomeCallable ClbClient::DescribeQuotaCallable(const DescribeQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DescribeResourcesOutcome ClbClient::DescribeResources(const DescribeResourcesRequest &request)
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

void ClbClient::DescribeResourcesAsync(const DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeResourcesOutcomeCallable ClbClient::DescribeResourcesCallable(const DescribeResourcesRequest &request)
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

ClbClient::DescribeTargetGroupInstancesOutcome ClbClient::DescribeTargetGroupInstances(const DescribeTargetGroupInstancesRequest &request)
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

void ClbClient::DescribeTargetGroupInstancesAsync(const DescribeTargetGroupInstancesRequest& request, const DescribeTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargetGroupInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeTargetGroupInstancesOutcomeCallable ClbClient::DescribeTargetGroupInstancesCallable(const DescribeTargetGroupInstancesRequest &request)
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

ClbClient::DescribeTargetGroupListOutcome ClbClient::DescribeTargetGroupList(const DescribeTargetGroupListRequest &request)
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

void ClbClient::DescribeTargetGroupListAsync(const DescribeTargetGroupListRequest& request, const DescribeTargetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargetGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeTargetGroupListOutcomeCallable ClbClient::DescribeTargetGroupListCallable(const DescribeTargetGroupListRequest &request)
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

ClbClient::DescribeTargetGroupsOutcome ClbClient::DescribeTargetGroups(const DescribeTargetGroupsRequest &request)
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

void ClbClient::DescribeTargetGroupsAsync(const DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTargetGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DescribeTargetGroupsOutcomeCallable ClbClient::DescribeTargetGroupsCallable(const DescribeTargetGroupsRequest &request)
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

ClbClient::DisassociateCustomizedConfigOutcome ClbClient::DisassociateCustomizedConfig(const DisassociateCustomizedConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateCustomizedConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateCustomizedConfigResponse rsp = DisassociateCustomizedConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateCustomizedConfigOutcome(rsp);
        else
            return DisassociateCustomizedConfigOutcome(o.GetError());
    }
    else
    {
        return DisassociateCustomizedConfigOutcome(outcome.GetError());
    }
}

void ClbClient::DisassociateCustomizedConfigAsync(const DisassociateCustomizedConfigRequest& request, const DisassociateCustomizedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateCustomizedConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DisassociateCustomizedConfigOutcomeCallable ClbClient::DisassociateCustomizedConfigCallable(const DisassociateCustomizedConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateCustomizedConfigOutcome()>>(
        [this, request]()
        {
            return this->DisassociateCustomizedConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::DisassociateTargetGroupsOutcome ClbClient::DisassociateTargetGroups(const DisassociateTargetGroupsRequest &request)
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

void ClbClient::DisassociateTargetGroupsAsync(const DisassociateTargetGroupsRequest& request, const DisassociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateTargetGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::DisassociateTargetGroupsOutcomeCallable ClbClient::DisassociateTargetGroupsCallable(const DisassociateTargetGroupsRequest &request)
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

ClbClient::InquiryPriceCreateLoadBalancerOutcome ClbClient::InquiryPriceCreateLoadBalancer(const InquiryPriceCreateLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateLoadBalancerResponse rsp = InquiryPriceCreateLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateLoadBalancerOutcome(rsp);
        else
            return InquiryPriceCreateLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::InquiryPriceCreateLoadBalancerAsync(const InquiryPriceCreateLoadBalancerRequest& request, const InquiryPriceCreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::InquiryPriceCreateLoadBalancerOutcomeCallable ClbClient::InquiryPriceCreateLoadBalancerCallable(const InquiryPriceCreateLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::InquiryPriceModifyLoadBalancerOutcome ClbClient::InquiryPriceModifyLoadBalancer(const InquiryPriceModifyLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceModifyLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceModifyLoadBalancerResponse rsp = InquiryPriceModifyLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceModifyLoadBalancerOutcome(rsp);
        else
            return InquiryPriceModifyLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceModifyLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::InquiryPriceModifyLoadBalancerAsync(const InquiryPriceModifyLoadBalancerRequest& request, const InquiryPriceModifyLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceModifyLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::InquiryPriceModifyLoadBalancerOutcomeCallable ClbClient::InquiryPriceModifyLoadBalancerCallable(const InquiryPriceModifyLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceModifyLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceModifyLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::InquiryPriceRefundLoadBalancerOutcome ClbClient::InquiryPriceRefundLoadBalancer(const InquiryPriceRefundLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRefundLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRefundLoadBalancerResponse rsp = InquiryPriceRefundLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRefundLoadBalancerOutcome(rsp);
        else
            return InquiryPriceRefundLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRefundLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::InquiryPriceRefundLoadBalancerAsync(const InquiryPriceRefundLoadBalancerRequest& request, const InquiryPriceRefundLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRefundLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::InquiryPriceRefundLoadBalancerOutcomeCallable ClbClient::InquiryPriceRefundLoadBalancerCallable(const InquiryPriceRefundLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRefundLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRefundLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::InquiryPriceRenewLoadBalancerOutcome ClbClient::InquiryPriceRenewLoadBalancer(const InquiryPriceRenewLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewLoadBalancerResponse rsp = InquiryPriceRenewLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewLoadBalancerOutcome(rsp);
        else
            return InquiryPriceRenewLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::InquiryPriceRenewLoadBalancerAsync(const InquiryPriceRenewLoadBalancerRequest& request, const InquiryPriceRenewLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::InquiryPriceRenewLoadBalancerOutcomeCallable ClbClient::InquiryPriceRenewLoadBalancerCallable(const InquiryPriceRenewLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewLoadBalancer(request);
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

ClbClient::MigrateClassicalLoadBalancersOutcome ClbClient::MigrateClassicalLoadBalancers(const MigrateClassicalLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "MigrateClassicalLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigrateClassicalLoadBalancersResponse rsp = MigrateClassicalLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigrateClassicalLoadBalancersOutcome(rsp);
        else
            return MigrateClassicalLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return MigrateClassicalLoadBalancersOutcome(outcome.GetError());
    }
}

void ClbClient::MigrateClassicalLoadBalancersAsync(const MigrateClassicalLoadBalancersRequest& request, const MigrateClassicalLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MigrateClassicalLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::MigrateClassicalLoadBalancersOutcomeCallable ClbClient::MigrateClassicalLoadBalancersCallable(const MigrateClassicalLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MigrateClassicalLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->MigrateClassicalLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyBlockIPListOutcome ClbClient::ModifyBlockIPList(const ModifyBlockIPListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockIPList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockIPListResponse rsp = ModifyBlockIPListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockIPListOutcome(rsp);
        else
            return ModifyBlockIPListOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockIPListOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyBlockIPListAsync(const ModifyBlockIPListRequest& request, const ModifyBlockIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBlockIPList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyBlockIPListOutcomeCallable ClbClient::ModifyBlockIPListCallable(const ModifyBlockIPListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBlockIPListOutcome()>>(
        [this, request]()
        {
            return this->ModifyBlockIPList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyCustomizedConfigOutcome ClbClient::ModifyCustomizedConfig(const ModifyCustomizedConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomizedConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizedConfigResponse rsp = ModifyCustomizedConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizedConfigOutcome(rsp);
        else
            return ModifyCustomizedConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizedConfigOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyCustomizedConfigAsync(const ModifyCustomizedConfigRequest& request, const ModifyCustomizedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomizedConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyCustomizedConfigOutcomeCallable ClbClient::ModifyCustomizedConfigCallable(const ModifyCustomizedConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomizedConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomizedConfig(request);
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

ClbClient::ModifyDomainAttributesOutcome ClbClient::ModifyDomainAttributes(const ModifyDomainAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainAttributesResponse rsp = ModifyDomainAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainAttributesOutcome(rsp);
        else
            return ModifyDomainAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainAttributesOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyDomainAttributesAsync(const ModifyDomainAttributesRequest& request, const ModifyDomainAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyDomainAttributesOutcomeCallable ClbClient::ModifyDomainAttributesCallable(const ModifyDomainAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyFunctionTargetsOutcome ClbClient::ModifyFunctionTargets(const ModifyFunctionTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFunctionTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFunctionTargetsResponse rsp = ModifyFunctionTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFunctionTargetsOutcome(rsp);
        else
            return ModifyFunctionTargetsOutcome(o.GetError());
    }
    else
    {
        return ModifyFunctionTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyFunctionTargetsAsync(const ModifyFunctionTargetsRequest& request, const ModifyFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFunctionTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyFunctionTargetsOutcomeCallable ClbClient::ModifyFunctionTargetsCallable(const ModifyFunctionTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFunctionTargetsOutcome()>>(
        [this, request]()
        {
            return this->ModifyFunctionTargets(request);
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

ClbClient::ModifyLoadBalancerMixIpTargetOutcome ClbClient::ModifyLoadBalancerMixIpTarget(const ModifyLoadBalancerMixIpTargetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerMixIpTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerMixIpTargetResponse rsp = ModifyLoadBalancerMixIpTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerMixIpTargetOutcome(rsp);
        else
            return ModifyLoadBalancerMixIpTargetOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerMixIpTargetOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyLoadBalancerMixIpTargetAsync(const ModifyLoadBalancerMixIpTargetRequest& request, const ModifyLoadBalancerMixIpTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancerMixIpTarget(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyLoadBalancerMixIpTargetOutcomeCallable ClbClient::ModifyLoadBalancerMixIpTargetCallable(const ModifyLoadBalancerMixIpTargetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerMixIpTargetOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancerMixIpTarget(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyLoadBalancerSlaOutcome ClbClient::ModifyLoadBalancerSla(const ModifyLoadBalancerSlaRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerSla");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerSlaResponse rsp = ModifyLoadBalancerSlaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerSlaOutcome(rsp);
        else
            return ModifyLoadBalancerSlaOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerSlaOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyLoadBalancerSlaAsync(const ModifyLoadBalancerSlaRequest& request, const ModifyLoadBalancerSlaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancerSla(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyLoadBalancerSlaOutcomeCallable ClbClient::ModifyLoadBalancerSlaCallable(const ModifyLoadBalancerSlaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerSlaOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancerSla(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyLoadBalancersProjectOutcome ClbClient::ModifyLoadBalancersProject(const ModifyLoadBalancersProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancersProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancersProjectResponse rsp = ModifyLoadBalancersProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancersProjectOutcome(rsp);
        else
            return ModifyLoadBalancersProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancersProjectOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyLoadBalancersProjectAsync(const ModifyLoadBalancersProjectRequest& request, const ModifyLoadBalancersProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancersProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyLoadBalancersProjectOutcomeCallable ClbClient::ModifyLoadBalancersProjectCallable(const ModifyLoadBalancersProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancersProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancersProject(request);
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

ClbClient::ModifyTargetGroupAttributeOutcome ClbClient::ModifyTargetGroupAttribute(const ModifyTargetGroupAttributeRequest &request)
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

void ClbClient::ModifyTargetGroupAttributeAsync(const ModifyTargetGroupAttributeRequest& request, const ModifyTargetGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTargetGroupAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyTargetGroupAttributeOutcomeCallable ClbClient::ModifyTargetGroupAttributeCallable(const ModifyTargetGroupAttributeRequest &request)
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

ClbClient::ModifyTargetGroupInstancesPortOutcome ClbClient::ModifyTargetGroupInstancesPort(const ModifyTargetGroupInstancesPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetGroupInstancesPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetGroupInstancesPortResponse rsp = ModifyTargetGroupInstancesPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetGroupInstancesPortOutcome(rsp);
        else
            return ModifyTargetGroupInstancesPortOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetGroupInstancesPortOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyTargetGroupInstancesPortAsync(const ModifyTargetGroupInstancesPortRequest& request, const ModifyTargetGroupInstancesPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTargetGroupInstancesPort(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyTargetGroupInstancesPortOutcomeCallable ClbClient::ModifyTargetGroupInstancesPortCallable(const ModifyTargetGroupInstancesPortRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTargetGroupInstancesPortOutcome()>>(
        [this, request]()
        {
            return this->ModifyTargetGroupInstancesPort(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::ModifyTargetGroupInstancesWeightOutcome ClbClient::ModifyTargetGroupInstancesWeight(const ModifyTargetGroupInstancesWeightRequest &request)
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

void ClbClient::ModifyTargetGroupInstancesWeightAsync(const ModifyTargetGroupInstancesWeightRequest& request, const ModifyTargetGroupInstancesWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTargetGroupInstancesWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ModifyTargetGroupInstancesWeightOutcomeCallable ClbClient::ModifyTargetGroupInstancesWeightCallable(const ModifyTargetGroupInstancesWeightRequest &request)
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

ClbClient::RegisterFunctionTargetsOutcome ClbClient::RegisterFunctionTargets(const RegisterFunctionTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterFunctionTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterFunctionTargetsResponse rsp = RegisterFunctionTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterFunctionTargetsOutcome(rsp);
        else
            return RegisterFunctionTargetsOutcome(o.GetError());
    }
    else
    {
        return RegisterFunctionTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::RegisterFunctionTargetsAsync(const RegisterFunctionTargetsRequest& request, const RegisterFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterFunctionTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::RegisterFunctionTargetsOutcomeCallable ClbClient::RegisterFunctionTargetsCallable(const RegisterFunctionTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterFunctionTargetsOutcome()>>(
        [this, request]()
        {
            return this->RegisterFunctionTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::RegisterTargetGroupInstancesOutcome ClbClient::RegisterTargetGroupInstances(const RegisterTargetGroupInstancesRequest &request)
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

void ClbClient::RegisterTargetGroupInstancesAsync(const RegisterTargetGroupInstancesRequest& request, const RegisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterTargetGroupInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::RegisterTargetGroupInstancesOutcomeCallable ClbClient::RegisterTargetGroupInstancesCallable(const RegisterTargetGroupInstancesRequest &request)
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

ClbClient::ReplaceCertForLoadBalancersOutcome ClbClient::ReplaceCertForLoadBalancers(const ReplaceCertForLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceCertForLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceCertForLoadBalancersResponse rsp = ReplaceCertForLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceCertForLoadBalancersOutcome(rsp);
        else
            return ReplaceCertForLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return ReplaceCertForLoadBalancersOutcome(outcome.GetError());
    }
}

void ClbClient::ReplaceCertForLoadBalancersAsync(const ReplaceCertForLoadBalancersRequest& request, const ReplaceCertForLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceCertForLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::ReplaceCertForLoadBalancersOutcomeCallable ClbClient::ReplaceCertForLoadBalancersCallable(const ReplaceCertForLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceCertForLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->ReplaceCertForLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::SetCustomizedConfigForLoadBalancerOutcome ClbClient::SetCustomizedConfigForLoadBalancer(const SetCustomizedConfigForLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "SetCustomizedConfigForLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetCustomizedConfigForLoadBalancerResponse rsp = SetCustomizedConfigForLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetCustomizedConfigForLoadBalancerOutcome(rsp);
        else
            return SetCustomizedConfigForLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return SetCustomizedConfigForLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::SetCustomizedConfigForLoadBalancerAsync(const SetCustomizedConfigForLoadBalancerRequest& request, const SetCustomizedConfigForLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetCustomizedConfigForLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::SetCustomizedConfigForLoadBalancerOutcomeCallable ClbClient::SetCustomizedConfigForLoadBalancerCallable(const SetCustomizedConfigForLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetCustomizedConfigForLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->SetCustomizedConfigForLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClbClient::SetLoadBalancerClsLogOutcome ClbClient::SetLoadBalancerClsLog(const SetLoadBalancerClsLogRequest &request)
{
    auto outcome = MakeRequest(request, "SetLoadBalancerClsLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLoadBalancerClsLogResponse rsp = SetLoadBalancerClsLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLoadBalancerClsLogOutcome(rsp);
        else
            return SetLoadBalancerClsLogOutcome(o.GetError());
    }
    else
    {
        return SetLoadBalancerClsLogOutcome(outcome.GetError());
    }
}

void ClbClient::SetLoadBalancerClsLogAsync(const SetLoadBalancerClsLogRequest& request, const SetLoadBalancerClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetLoadBalancerClsLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::SetLoadBalancerClsLogOutcomeCallable ClbClient::SetLoadBalancerClsLogCallable(const SetLoadBalancerClsLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetLoadBalancerClsLogOutcome()>>(
        [this, request]()
        {
            return this->SetLoadBalancerClsLog(request);
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

ClbClient::SetLoadBalancerStartStatusOutcome ClbClient::SetLoadBalancerStartStatus(const SetLoadBalancerStartStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetLoadBalancerStartStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLoadBalancerStartStatusResponse rsp = SetLoadBalancerStartStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLoadBalancerStartStatusOutcome(rsp);
        else
            return SetLoadBalancerStartStatusOutcome(o.GetError());
    }
    else
    {
        return SetLoadBalancerStartStatusOutcome(outcome.GetError());
    }
}

void ClbClient::SetLoadBalancerStartStatusAsync(const SetLoadBalancerStartStatusRequest& request, const SetLoadBalancerStartStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetLoadBalancerStartStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClbClient::SetLoadBalancerStartStatusOutcomeCallable ClbClient::SetLoadBalancerStartStatusCallable(const SetLoadBalancerStartStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetLoadBalancerStartStatusOutcome()>>(
        [this, request]()
        {
            return this->SetLoadBalancerStartStatus(request);
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


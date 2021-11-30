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


TsfClient::AddClusterInstancesOutcome TsfClient::AddClusterInstances(const AddClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AddClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddClusterInstancesResponse rsp = AddClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddClusterInstancesOutcome(rsp);
        else
            return AddClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return AddClusterInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::AddClusterInstancesAsync(const AddClusterInstancesRequest& request, const AddClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddClusterInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::AddClusterInstancesOutcomeCallable TsfClient::AddClusterInstancesCallable(const AddClusterInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddClusterInstancesOutcome()>>(
        [this, request]()
        {
            return this->AddClusterInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

TsfClient::BindApiGroupOutcome TsfClient::BindApiGroup(const BindApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "BindApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindApiGroupResponse rsp = BindApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindApiGroupOutcome(rsp);
        else
            return BindApiGroupOutcome(o.GetError());
    }
    else
    {
        return BindApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::BindApiGroupAsync(const BindApiGroupRequest& request, const BindApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindApiGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::BindApiGroupOutcomeCallable TsfClient::BindApiGroupCallable(const BindApiGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindApiGroupOutcome()>>(
        [this, request]()
        {
            return this->BindApiGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::BindPluginOutcome TsfClient::BindPlugin(const BindPluginRequest &request)
{
    auto outcome = MakeRequest(request, "BindPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindPluginResponse rsp = BindPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindPluginOutcome(rsp);
        else
            return BindPluginOutcome(o.GetError());
    }
    else
    {
        return BindPluginOutcome(outcome.GetError());
    }
}

void TsfClient::BindPluginAsync(const BindPluginRequest& request, const BindPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindPlugin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::BindPluginOutcomeCallable TsfClient::BindPluginCallable(const BindPluginRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindPluginOutcome()>>(
        [this, request]()
        {
            return this->BindPlugin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ChangeApiUsableStatusOutcome TsfClient::ChangeApiUsableStatus(const ChangeApiUsableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeApiUsableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeApiUsableStatusResponse rsp = ChangeApiUsableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeApiUsableStatusOutcome(rsp);
        else
            return ChangeApiUsableStatusOutcome(o.GetError());
    }
    else
    {
        return ChangeApiUsableStatusOutcome(outcome.GetError());
    }
}

void TsfClient::ChangeApiUsableStatusAsync(const ChangeApiUsableStatusRequest& request, const ChangeApiUsableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChangeApiUsableStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ChangeApiUsableStatusOutcomeCallable TsfClient::ChangeApiUsableStatusCallable(const ChangeApiUsableStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChangeApiUsableStatusOutcome()>>(
        [this, request]()
        {
            return this->ChangeApiUsableStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ContinueRunFailedTaskBatchOutcome TsfClient::ContinueRunFailedTaskBatch(const ContinueRunFailedTaskBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ContinueRunFailedTaskBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ContinueRunFailedTaskBatchResponse rsp = ContinueRunFailedTaskBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ContinueRunFailedTaskBatchOutcome(rsp);
        else
            return ContinueRunFailedTaskBatchOutcome(o.GetError());
    }
    else
    {
        return ContinueRunFailedTaskBatchOutcome(outcome.GetError());
    }
}

void TsfClient::ContinueRunFailedTaskBatchAsync(const ContinueRunFailedTaskBatchRequest& request, const ContinueRunFailedTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ContinueRunFailedTaskBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ContinueRunFailedTaskBatchOutcomeCallable TsfClient::ContinueRunFailedTaskBatchCallable(const ContinueRunFailedTaskBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ContinueRunFailedTaskBatchOutcome()>>(
        [this, request]()
        {
            return this->ContinueRunFailedTaskBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateAllGatewayApiAsyncOutcome TsfClient::CreateAllGatewayApiAsync(const CreateAllGatewayApiAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAllGatewayApiAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAllGatewayApiAsyncResponse rsp = CreateAllGatewayApiAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAllGatewayApiAsyncOutcome(rsp);
        else
            return CreateAllGatewayApiAsyncOutcome(o.GetError());
    }
    else
    {
        return CreateAllGatewayApiAsyncOutcome(outcome.GetError());
    }
}

void TsfClient::CreateAllGatewayApiAsyncAsync(const CreateAllGatewayApiAsyncRequest& request, const CreateAllGatewayApiAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAllGatewayApiAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateAllGatewayApiAsyncOutcomeCallable TsfClient::CreateAllGatewayApiAsyncCallable(const CreateAllGatewayApiAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAllGatewayApiAsyncOutcome()>>(
        [this, request]()
        {
            return this->CreateAllGatewayApiAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateApiGroupOutcome TsfClient::CreateApiGroup(const CreateApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiGroupResponse rsp = CreateApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiGroupOutcome(rsp);
        else
            return CreateApiGroupOutcome(o.GetError());
    }
    else
    {
        return CreateApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::CreateApiGroupAsync(const CreateApiGroupRequest& request, const CreateApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApiGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateApiGroupOutcomeCallable TsfClient::CreateApiGroupCallable(const CreateApiGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApiGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateApiGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateApiRateLimitRuleOutcome TsfClient::CreateApiRateLimitRule(const CreateApiRateLimitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiRateLimitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiRateLimitRuleResponse rsp = CreateApiRateLimitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiRateLimitRuleOutcome(rsp);
        else
            return CreateApiRateLimitRuleOutcome(o.GetError());
    }
    else
    {
        return CreateApiRateLimitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::CreateApiRateLimitRuleAsync(const CreateApiRateLimitRuleRequest& request, const CreateApiRateLimitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApiRateLimitRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateApiRateLimitRuleOutcomeCallable TsfClient::CreateApiRateLimitRuleCallable(const CreateApiRateLimitRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApiRateLimitRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateApiRateLimitRule(request);
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

TsfClient::CreateConfigOutcome TsfClient::CreateConfig(const CreateConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigResponse rsp = CreateConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigOutcome(rsp);
        else
            return CreateConfigOutcome(o.GetError());
    }
    else
    {
        return CreateConfigOutcome(outcome.GetError());
    }
}

void TsfClient::CreateConfigAsync(const CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateConfigOutcomeCallable TsfClient::CreateConfigCallable(const CreateConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateConfig(request);
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

TsfClient::CreateFileConfigOutcome TsfClient::CreateFileConfig(const CreateFileConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileConfigResponse rsp = CreateFileConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileConfigOutcome(rsp);
        else
            return CreateFileConfigOutcome(o.GetError());
    }
    else
    {
        return CreateFileConfigOutcome(outcome.GetError());
    }
}

void TsfClient::CreateFileConfigAsync(const CreateFileConfigRequest& request, const CreateFileConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFileConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateFileConfigOutcomeCallable TsfClient::CreateFileConfigCallable(const CreateFileConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFileConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateFileConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateGatewayApiOutcome TsfClient::CreateGatewayApi(const CreateGatewayApiRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGatewayApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGatewayApiResponse rsp = CreateGatewayApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGatewayApiOutcome(rsp);
        else
            return CreateGatewayApiOutcome(o.GetError());
    }
    else
    {
        return CreateGatewayApiOutcome(outcome.GetError());
    }
}

void TsfClient::CreateGatewayApiAsync(const CreateGatewayApiRequest& request, const CreateGatewayApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGatewayApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateGatewayApiOutcomeCallable TsfClient::CreateGatewayApiCallable(const CreateGatewayApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGatewayApiOutcome()>>(
        [this, request]()
        {
            return this->CreateGatewayApi(request);
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

TsfClient::CreateLaneOutcome TsfClient::CreateLane(const CreateLaneRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLane");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLaneResponse rsp = CreateLaneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLaneOutcome(rsp);
        else
            return CreateLaneOutcome(o.GetError());
    }
    else
    {
        return CreateLaneOutcome(outcome.GetError());
    }
}

void TsfClient::CreateLaneAsync(const CreateLaneRequest& request, const CreateLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLane(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateLaneOutcomeCallable TsfClient::CreateLaneCallable(const CreateLaneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLaneOutcome()>>(
        [this, request]()
        {
            return this->CreateLane(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateLaneRuleOutcome TsfClient::CreateLaneRule(const CreateLaneRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLaneRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLaneRuleResponse rsp = CreateLaneRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLaneRuleOutcome(rsp);
        else
            return CreateLaneRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLaneRuleOutcome(outcome.GetError());
    }
}

void TsfClient::CreateLaneRuleAsync(const CreateLaneRuleRequest& request, const CreateLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLaneRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateLaneRuleOutcomeCallable TsfClient::CreateLaneRuleCallable(const CreateLaneRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLaneRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLaneRule(request);
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

TsfClient::CreatePathRewritesOutcome TsfClient::CreatePathRewrites(const CreatePathRewritesRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePathRewrites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePathRewritesResponse rsp = CreatePathRewritesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePathRewritesOutcome(rsp);
        else
            return CreatePathRewritesOutcome(o.GetError());
    }
    else
    {
        return CreatePathRewritesOutcome(outcome.GetError());
    }
}

void TsfClient::CreatePathRewritesAsync(const CreatePathRewritesRequest& request, const CreatePathRewritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePathRewrites(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreatePathRewritesOutcomeCallable TsfClient::CreatePathRewritesCallable(const CreatePathRewritesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePathRewritesOutcome()>>(
        [this, request]()
        {
            return this->CreatePathRewrites(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreatePublicConfigOutcome TsfClient::CreatePublicConfig(const CreatePublicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePublicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePublicConfigResponse rsp = CreatePublicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePublicConfigOutcome(rsp);
        else
            return CreatePublicConfigOutcome(o.GetError());
    }
    else
    {
        return CreatePublicConfigOutcome(outcome.GetError());
    }
}

void TsfClient::CreatePublicConfigAsync(const CreatePublicConfigRequest& request, const CreatePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePublicConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreatePublicConfigOutcomeCallable TsfClient::CreatePublicConfigCallable(const CreatePublicConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePublicConfigOutcome()>>(
        [this, request]()
        {
            return this->CreatePublicConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateRepositoryOutcome TsfClient::CreateRepository(const CreateRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRepositoryResponse rsp = CreateRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRepositoryOutcome(rsp);
        else
            return CreateRepositoryOutcome(o.GetError());
    }
    else
    {
        return CreateRepositoryOutcome(outcome.GetError());
    }
}

void TsfClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateRepositoryOutcomeCallable TsfClient::CreateRepositoryCallable(const CreateRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRepositoryOutcome()>>(
        [this, request]()
        {
            return this->CreateRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateServerlessGroupOutcome TsfClient::CreateServerlessGroup(const CreateServerlessGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServerlessGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServerlessGroupResponse rsp = CreateServerlessGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServerlessGroupOutcome(rsp);
        else
            return CreateServerlessGroupOutcome(o.GetError());
    }
    else
    {
        return CreateServerlessGroupOutcome(outcome.GetError());
    }
}

void TsfClient::CreateServerlessGroupAsync(const CreateServerlessGroupRequest& request, const CreateServerlessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServerlessGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateServerlessGroupOutcomeCallable TsfClient::CreateServerlessGroupCallable(const CreateServerlessGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServerlessGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateServerlessGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateTaskOutcome TsfClient::CreateTask(const CreateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskResponse rsp = CreateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutcome(rsp);
        else
            return CreateTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutcome(outcome.GetError());
    }
}

void TsfClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateTaskOutcomeCallable TsfClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateTaskFlowOutcome TsfClient::CreateTaskFlow(const CreateTaskFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskFlowResponse rsp = CreateTaskFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskFlowOutcome(rsp);
        else
            return CreateTaskFlowOutcome(o.GetError());
    }
    else
    {
        return CreateTaskFlowOutcome(outcome.GetError());
    }
}

void TsfClient::CreateTaskFlowAsync(const CreateTaskFlowRequest& request, const CreateTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateTaskFlowOutcomeCallable TsfClient::CreateTaskFlowCallable(const CreateTaskFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::CreateUnitRuleOutcome TsfClient::CreateUnitRule(const CreateUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUnitRuleResponse rsp = CreateUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUnitRuleOutcome(rsp);
        else
            return CreateUnitRuleOutcome(o.GetError());
    }
    else
    {
        return CreateUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::CreateUnitRuleAsync(const CreateUnitRuleRequest& request, const CreateUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUnitRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::CreateUnitRuleOutcomeCallable TsfClient::CreateUnitRuleCallable(const CreateUnitRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUnitRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateUnitRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteApiGroupOutcome TsfClient::DeleteApiGroup(const DeleteApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiGroupResponse rsp = DeleteApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiGroupOutcome(rsp);
        else
            return DeleteApiGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteApiGroupAsync(const DeleteApiGroupRequest& request, const DeleteApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApiGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteApiGroupOutcomeCallable TsfClient::DeleteApiGroupCallable(const DeleteApiGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApiGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteApiGroup(request);
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

TsfClient::DeleteConfigOutcome TsfClient::DeleteConfig(const DeleteConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigResponse rsp = DeleteConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigOutcome(rsp);
        else
            return DeleteConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteConfigAsync(const DeleteConfigRequest& request, const DeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteConfigOutcomeCallable TsfClient::DeleteConfigCallable(const DeleteConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteConfig(request);
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

TsfClient::DeleteLaneOutcome TsfClient::DeleteLane(const DeleteLaneRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLane");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLaneResponse rsp = DeleteLaneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLaneOutcome(rsp);
        else
            return DeleteLaneOutcome(o.GetError());
    }
    else
    {
        return DeleteLaneOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteLaneAsync(const DeleteLaneRequest& request, const DeleteLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLane(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteLaneOutcomeCallable TsfClient::DeleteLaneCallable(const DeleteLaneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLaneOutcome()>>(
        [this, request]()
        {
            return this->DeleteLane(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteLaneRuleOutcome TsfClient::DeleteLaneRule(const DeleteLaneRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLaneRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLaneRuleResponse rsp = DeleteLaneRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLaneRuleOutcome(rsp);
        else
            return DeleteLaneRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLaneRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteLaneRuleAsync(const DeleteLaneRuleRequest& request, const DeleteLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLaneRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteLaneRuleOutcomeCallable TsfClient::DeleteLaneRuleCallable(const DeleteLaneRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLaneRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLaneRule(request);
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

TsfClient::DeletePathRewritesOutcome TsfClient::DeletePathRewrites(const DeletePathRewritesRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePathRewrites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePathRewritesResponse rsp = DeletePathRewritesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePathRewritesOutcome(rsp);
        else
            return DeletePathRewritesOutcome(o.GetError());
    }
    else
    {
        return DeletePathRewritesOutcome(outcome.GetError());
    }
}

void TsfClient::DeletePathRewritesAsync(const DeletePathRewritesRequest& request, const DeletePathRewritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePathRewrites(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeletePathRewritesOutcomeCallable TsfClient::DeletePathRewritesCallable(const DeletePathRewritesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePathRewritesOutcome()>>(
        [this, request]()
        {
            return this->DeletePathRewrites(request);
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

TsfClient::DeletePublicConfigOutcome TsfClient::DeletePublicConfig(const DeletePublicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePublicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePublicConfigResponse rsp = DeletePublicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePublicConfigOutcome(rsp);
        else
            return DeletePublicConfigOutcome(o.GetError());
    }
    else
    {
        return DeletePublicConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DeletePublicConfigAsync(const DeletePublicConfigRequest& request, const DeletePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePublicConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeletePublicConfigOutcomeCallable TsfClient::DeletePublicConfigCallable(const DeletePublicConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePublicConfigOutcome()>>(
        [this, request]()
        {
            return this->DeletePublicConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteRepositoryOutcome TsfClient::DeleteRepository(const DeleteRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRepositoryResponse rsp = DeleteRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRepositoryOutcome(rsp);
        else
            return DeleteRepositoryOutcome(o.GetError());
    }
    else
    {
        return DeleteRepositoryOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteRepositoryOutcomeCallable TsfClient::DeleteRepositoryCallable(const DeleteRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRepositoryOutcome()>>(
        [this, request]()
        {
            return this->DeleteRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteServerlessGroupOutcome TsfClient::DeleteServerlessGroup(const DeleteServerlessGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServerlessGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServerlessGroupResponse rsp = DeleteServerlessGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServerlessGroupOutcome(rsp);
        else
            return DeleteServerlessGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteServerlessGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteServerlessGroupAsync(const DeleteServerlessGroupRequest& request, const DeleteServerlessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServerlessGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteServerlessGroupOutcomeCallable TsfClient::DeleteServerlessGroupCallable(const DeleteServerlessGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServerlessGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteServerlessGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteTaskOutcome TsfClient::DeleteTask(const DeleteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskResponse rsp = DeleteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskOutcome(rsp);
        else
            return DeleteTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteTaskOutcomeCallable TsfClient::DeleteTaskCallable(const DeleteTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteUnitNamespacesOutcome TsfClient::DeleteUnitNamespaces(const DeleteUnitNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUnitNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUnitNamespacesResponse rsp = DeleteUnitNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUnitNamespacesOutcome(rsp);
        else
            return DeleteUnitNamespacesOutcome(o.GetError());
    }
    else
    {
        return DeleteUnitNamespacesOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteUnitNamespacesAsync(const DeleteUnitNamespacesRequest& request, const DeleteUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUnitNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteUnitNamespacesOutcomeCallable TsfClient::DeleteUnitNamespacesCallable(const DeleteUnitNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUnitNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DeleteUnitNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DeleteUnitRuleOutcome TsfClient::DeleteUnitRule(const DeleteUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUnitRuleResponse rsp = DeleteUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUnitRuleOutcome(rsp);
        else
            return DeleteUnitRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteUnitRuleAsync(const DeleteUnitRuleRequest& request, const DeleteUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUnitRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeleteUnitRuleOutcomeCallable TsfClient::DeleteUnitRuleCallable(const DeleteUnitRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUnitRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteUnitRule(request);
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

TsfClient::DeployServerlessGroupOutcome TsfClient::DeployServerlessGroup(const DeployServerlessGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeployServerlessGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployServerlessGroupResponse rsp = DeployServerlessGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployServerlessGroupOutcome(rsp);
        else
            return DeployServerlessGroupOutcome(o.GetError());
    }
    else
    {
        return DeployServerlessGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeployServerlessGroupAsync(const DeployServerlessGroupRequest& request, const DeployServerlessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployServerlessGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DeployServerlessGroupOutcomeCallable TsfClient::DeployServerlessGroupCallable(const DeployServerlessGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployServerlessGroupOutcome()>>(
        [this, request]()
        {
            return this->DeployServerlessGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeApiDetailOutcome TsfClient::DescribeApiDetail(const DescribeApiDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiDetailResponse rsp = DescribeApiDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiDetailOutcome(rsp);
        else
            return DescribeApiDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeApiDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiDetailAsync(const DescribeApiDetailRequest& request, const DescribeApiDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeApiDetailOutcomeCallable TsfClient::DescribeApiDetailCallable(const DescribeApiDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeApiGroupOutcome TsfClient::DescribeApiGroup(const DescribeApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiGroupResponse rsp = DescribeApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiGroupOutcome(rsp);
        else
            return DescribeApiGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiGroupAsync(const DescribeApiGroupRequest& request, const DescribeApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeApiGroupOutcomeCallable TsfClient::DescribeApiGroupCallable(const DescribeApiGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeApiGroupsOutcome TsfClient::DescribeApiGroups(const DescribeApiGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiGroupsResponse rsp = DescribeApiGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiGroupsOutcome(rsp);
        else
            return DescribeApiGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeApiGroupsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiGroupsAsync(const DescribeApiGroupsRequest& request, const DescribeApiGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeApiGroupsOutcomeCallable TsfClient::DescribeApiGroupsCallable(const DescribeApiGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeApiRateLimitRulesOutcome TsfClient::DescribeApiRateLimitRules(const DescribeApiRateLimitRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiRateLimitRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiRateLimitRulesResponse rsp = DescribeApiRateLimitRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiRateLimitRulesOutcome(rsp);
        else
            return DescribeApiRateLimitRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeApiRateLimitRulesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiRateLimitRulesAsync(const DescribeApiRateLimitRulesRequest& request, const DescribeApiRateLimitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiRateLimitRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeApiRateLimitRulesOutcomeCallable TsfClient::DescribeApiRateLimitRulesCallable(const DescribeApiRateLimitRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiRateLimitRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiRateLimitRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeApiUseDetailOutcome TsfClient::DescribeApiUseDetail(const DescribeApiUseDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiUseDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiUseDetailResponse rsp = DescribeApiUseDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiUseDetailOutcome(rsp);
        else
            return DescribeApiUseDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeApiUseDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiUseDetailAsync(const DescribeApiUseDetailRequest& request, const DescribeApiUseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiUseDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeApiUseDetailOutcomeCallable TsfClient::DescribeApiUseDetailCallable(const DescribeApiUseDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiUseDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiUseDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeApiVersionsOutcome TsfClient::DescribeApiVersions(const DescribeApiVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiVersionsResponse rsp = DescribeApiVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiVersionsOutcome(rsp);
        else
            return DescribeApiVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeApiVersionsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiVersionsAsync(const DescribeApiVersionsRequest& request, const DescribeApiVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApiVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeApiVersionsOutcomeCallable TsfClient::DescribeApiVersionsCallable(const DescribeApiVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApiVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeApiVersions(request);
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

TsfClient::DescribeBasicResourceUsageOutcome TsfClient::DescribeBasicResourceUsage(const DescribeBasicResourceUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBasicResourceUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBasicResourceUsageResponse rsp = DescribeBasicResourceUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBasicResourceUsageOutcome(rsp);
        else
            return DescribeBasicResourceUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeBasicResourceUsageOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeBasicResourceUsageAsync(const DescribeBasicResourceUsageRequest& request, const DescribeBasicResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBasicResourceUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeBasicResourceUsageOutcomeCallable TsfClient::DescribeBasicResourceUsageCallable(const DescribeBasicResourceUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBasicResourceUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeBasicResourceUsage(request);
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

TsfClient::DescribeConfigOutcome TsfClient::DescribeConfig(const DescribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigResponse rsp = DescribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigOutcome(rsp);
        else
            return DescribeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigAsync(const DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeConfigOutcomeCallable TsfClient::DescribeConfigCallable(const DescribeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeConfigReleaseLogsOutcome TsfClient::DescribeConfigReleaseLogs(const DescribeConfigReleaseLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigReleaseLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigReleaseLogsResponse rsp = DescribeConfigReleaseLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigReleaseLogsOutcome(rsp);
        else
            return DescribeConfigReleaseLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigReleaseLogsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigReleaseLogsAsync(const DescribeConfigReleaseLogsRequest& request, const DescribeConfigReleaseLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigReleaseLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeConfigReleaseLogsOutcomeCallable TsfClient::DescribeConfigReleaseLogsCallable(const DescribeConfigReleaseLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigReleaseLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigReleaseLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeConfigReleasesOutcome TsfClient::DescribeConfigReleases(const DescribeConfigReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigReleasesResponse rsp = DescribeConfigReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigReleasesOutcome(rsp);
        else
            return DescribeConfigReleasesOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigReleasesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigReleasesAsync(const DescribeConfigReleasesRequest& request, const DescribeConfigReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigReleases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeConfigReleasesOutcomeCallable TsfClient::DescribeConfigReleasesCallable(const DescribeConfigReleasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigReleasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigReleases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeConfigSummaryOutcome TsfClient::DescribeConfigSummary(const DescribeConfigSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigSummaryResponse rsp = DescribeConfigSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigSummaryOutcome(rsp);
        else
            return DescribeConfigSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigSummaryOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigSummaryAsync(const DescribeConfigSummaryRequest& request, const DescribeConfigSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeConfigSummaryOutcomeCallable TsfClient::DescribeConfigSummaryCallable(const DescribeConfigSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeConfigsOutcome TsfClient::DescribeConfigs(const DescribeConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigsResponse rsp = DescribeConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigsOutcome(rsp);
        else
            return DescribeConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigsAsync(const DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeConfigsOutcomeCallable TsfClient::DescribeConfigsCallable(const DescribeConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeContainerEventsOutcome TsfClient::DescribeContainerEvents(const DescribeContainerEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerEventsResponse rsp = DescribeContainerEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerEventsOutcome(rsp);
        else
            return DescribeContainerEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerEventsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeContainerEventsAsync(const DescribeContainerEventsRequest& request, const DescribeContainerEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContainerEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeContainerEventsOutcomeCallable TsfClient::DescribeContainerEventsCallable(const DescribeContainerEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContainerEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeContainerEvents(request);
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

TsfClient::DescribeCreateGatewayApiStatusOutcome TsfClient::DescribeCreateGatewayApiStatus(const DescribeCreateGatewayApiStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCreateGatewayApiStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCreateGatewayApiStatusResponse rsp = DescribeCreateGatewayApiStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCreateGatewayApiStatusOutcome(rsp);
        else
            return DescribeCreateGatewayApiStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCreateGatewayApiStatusOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeCreateGatewayApiStatusAsync(const DescribeCreateGatewayApiStatusRequest& request, const DescribeCreateGatewayApiStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCreateGatewayApiStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeCreateGatewayApiStatusOutcomeCallable TsfClient::DescribeCreateGatewayApiStatusCallable(const DescribeCreateGatewayApiStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCreateGatewayApiStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeCreateGatewayApiStatus(request);
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

TsfClient::DescribeEnabledUnitRuleOutcome TsfClient::DescribeEnabledUnitRule(const DescribeEnabledUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnabledUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnabledUnitRuleResponse rsp = DescribeEnabledUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnabledUnitRuleOutcome(rsp);
        else
            return DescribeEnabledUnitRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeEnabledUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeEnabledUnitRuleAsync(const DescribeEnabledUnitRuleRequest& request, const DescribeEnabledUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnabledUnitRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeEnabledUnitRuleOutcomeCallable TsfClient::DescribeEnabledUnitRuleCallable(const DescribeEnabledUnitRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnabledUnitRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnabledUnitRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeFileConfigsOutcome TsfClient::DescribeFileConfigs(const DescribeFileConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileConfigsResponse rsp = DescribeFileConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileConfigsOutcome(rsp);
        else
            return DescribeFileConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileConfigsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeFileConfigsAsync(const DescribeFileConfigsRequest& request, const DescribeFileConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeFileConfigsOutcomeCallable TsfClient::DescribeFileConfigsCallable(const DescribeFileConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeFlowLastBatchStateOutcome TsfClient::DescribeFlowLastBatchState(const DescribeFlowLastBatchStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowLastBatchState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowLastBatchStateResponse rsp = DescribeFlowLastBatchStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowLastBatchStateOutcome(rsp);
        else
            return DescribeFlowLastBatchStateOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowLastBatchStateOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeFlowLastBatchStateAsync(const DescribeFlowLastBatchStateRequest& request, const DescribeFlowLastBatchStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowLastBatchState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeFlowLastBatchStateOutcomeCallable TsfClient::DescribeFlowLastBatchStateCallable(const DescribeFlowLastBatchStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowLastBatchStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowLastBatchState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeGatewayAllGroupApisOutcome TsfClient::DescribeGatewayAllGroupApis(const DescribeGatewayAllGroupApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayAllGroupApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayAllGroupApisResponse rsp = DescribeGatewayAllGroupApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayAllGroupApisOutcome(rsp);
        else
            return DescribeGatewayAllGroupApisOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayAllGroupApisOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGatewayAllGroupApisAsync(const DescribeGatewayAllGroupApisRequest& request, const DescribeGatewayAllGroupApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayAllGroupApis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGatewayAllGroupApisOutcomeCallable TsfClient::DescribeGatewayAllGroupApisCallable(const DescribeGatewayAllGroupApisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayAllGroupApisOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayAllGroupApis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeGatewayApisOutcome TsfClient::DescribeGatewayApis(const DescribeGatewayApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayApisResponse rsp = DescribeGatewayApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayApisOutcome(rsp);
        else
            return DescribeGatewayApisOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayApisOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGatewayApisAsync(const DescribeGatewayApisRequest& request, const DescribeGatewayApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayApis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGatewayApisOutcomeCallable TsfClient::DescribeGatewayApisCallable(const DescribeGatewayApisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayApisOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayApis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeGatewayMonitorOverviewOutcome TsfClient::DescribeGatewayMonitorOverview(const DescribeGatewayMonitorOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayMonitorOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayMonitorOverviewResponse rsp = DescribeGatewayMonitorOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayMonitorOverviewOutcome(rsp);
        else
            return DescribeGatewayMonitorOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayMonitorOverviewOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGatewayMonitorOverviewAsync(const DescribeGatewayMonitorOverviewRequest& request, const DescribeGatewayMonitorOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayMonitorOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGatewayMonitorOverviewOutcomeCallable TsfClient::DescribeGatewayMonitorOverviewCallable(const DescribeGatewayMonitorOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayMonitorOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayMonitorOverview(request);
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

TsfClient::DescribeGroupAttributeOutcome TsfClient::DescribeGroupAttribute(const DescribeGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupAttributeResponse rsp = DescribeGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupAttributeOutcome(rsp);
        else
            return DescribeGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupAttributeOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupAttributeAsync(const DescribeGroupAttributeRequest& request, const DescribeGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGroupAttributeOutcomeCallable TsfClient::DescribeGroupAttributeCallable(const DescribeGroupAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupAttributeOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeGroupBindedGatewaysOutcome TsfClient::DescribeGroupBindedGateways(const DescribeGroupBindedGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupBindedGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupBindedGatewaysResponse rsp = DescribeGroupBindedGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupBindedGatewaysOutcome(rsp);
        else
            return DescribeGroupBindedGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupBindedGatewaysOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupBindedGatewaysAsync(const DescribeGroupBindedGatewaysRequest& request, const DescribeGroupBindedGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupBindedGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGroupBindedGatewaysOutcomeCallable TsfClient::DescribeGroupBindedGatewaysCallable(const DescribeGroupBindedGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupBindedGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupBindedGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeGroupGatewaysOutcome TsfClient::DescribeGroupGateways(const DescribeGroupGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupGatewaysResponse rsp = DescribeGroupGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupGatewaysOutcome(rsp);
        else
            return DescribeGroupGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupGatewaysOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupGatewaysAsync(const DescribeGroupGatewaysRequest& request, const DescribeGroupGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGroupGatewaysOutcomeCallable TsfClient::DescribeGroupGatewaysCallable(const DescribeGroupGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupGateways(request);
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

TsfClient::DescribeGroupReleaseOutcome TsfClient::DescribeGroupRelease(const DescribeGroupReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupReleaseResponse rsp = DescribeGroupReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupReleaseOutcome(rsp);
        else
            return DescribeGroupReleaseOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupReleaseOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupReleaseAsync(const DescribeGroupReleaseRequest& request, const DescribeGroupReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGroupReleaseOutcomeCallable TsfClient::DescribeGroupReleaseCallable(const DescribeGroupReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupReleaseOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeGroupUseDetailOutcome TsfClient::DescribeGroupUseDetail(const DescribeGroupUseDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupUseDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupUseDetailResponse rsp = DescribeGroupUseDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupUseDetailOutcome(rsp);
        else
            return DescribeGroupUseDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupUseDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupUseDetailAsync(const DescribeGroupUseDetailRequest& request, const DescribeGroupUseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupUseDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGroupUseDetailOutcomeCallable TsfClient::DescribeGroupUseDetailCallable(const DescribeGroupUseDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupUseDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupUseDetail(request);
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

TsfClient::DescribeGroupsWithPluginOutcome TsfClient::DescribeGroupsWithPlugin(const DescribeGroupsWithPluginRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupsWithPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupsWithPluginResponse rsp = DescribeGroupsWithPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupsWithPluginOutcome(rsp);
        else
            return DescribeGroupsWithPluginOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupsWithPluginOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupsWithPluginAsync(const DescribeGroupsWithPluginRequest& request, const DescribeGroupsWithPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupsWithPlugin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeGroupsWithPluginOutcomeCallable TsfClient::DescribeGroupsWithPluginCallable(const DescribeGroupsWithPluginRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupsWithPluginOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupsWithPlugin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeImageRepositoryOutcome TsfClient::DescribeImageRepository(const DescribeImageRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageRepositoryResponse rsp = DescribeImageRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageRepositoryOutcome(rsp);
        else
            return DescribeImageRepositoryOutcome(o.GetError());
    }
    else
    {
        return DescribeImageRepositoryOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeImageRepositoryAsync(const DescribeImageRepositoryRequest& request, const DescribeImageRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeImageRepositoryOutcomeCallable TsfClient::DescribeImageRepositoryCallable(const DescribeImageRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageRepositoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageRepository(request);
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

TsfClient::DescribeLaneRulesOutcome TsfClient::DescribeLaneRules(const DescribeLaneRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLaneRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLaneRulesResponse rsp = DescribeLaneRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLaneRulesOutcome(rsp);
        else
            return DescribeLaneRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLaneRulesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeLaneRulesAsync(const DescribeLaneRulesRequest& request, const DescribeLaneRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLaneRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeLaneRulesOutcomeCallable TsfClient::DescribeLaneRulesCallable(const DescribeLaneRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLaneRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLaneRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeLanesOutcome TsfClient::DescribeLanes(const DescribeLanesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLanes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLanesResponse rsp = DescribeLanesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLanesOutcome(rsp);
        else
            return DescribeLanesOutcome(o.GetError());
    }
    else
    {
        return DescribeLanesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeLanesAsync(const DescribeLanesRequest& request, const DescribeLanesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLanes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeLanesOutcomeCallable TsfClient::DescribeLanesCallable(const DescribeLanesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLanesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLanes(request);
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

TsfClient::DescribeMsApiListOutcome TsfClient::DescribeMsApiList(const DescribeMsApiListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMsApiList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMsApiListResponse rsp = DescribeMsApiListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMsApiListOutcome(rsp);
        else
            return DescribeMsApiListOutcome(o.GetError());
    }
    else
    {
        return DescribeMsApiListOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeMsApiListAsync(const DescribeMsApiListRequest& request, const DescribeMsApiListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMsApiList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeMsApiListOutcomeCallable TsfClient::DescribeMsApiListCallable(const DescribeMsApiListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMsApiListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMsApiList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribePathRewriteOutcome TsfClient::DescribePathRewrite(const DescribePathRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePathRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePathRewriteResponse rsp = DescribePathRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePathRewriteOutcome(rsp);
        else
            return DescribePathRewriteOutcome(o.GetError());
    }
    else
    {
        return DescribePathRewriteOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePathRewriteAsync(const DescribePathRewriteRequest& request, const DescribePathRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePathRewrite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribePathRewriteOutcomeCallable TsfClient::DescribePathRewriteCallable(const DescribePathRewriteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePathRewriteOutcome()>>(
        [this, request]()
        {
            return this->DescribePathRewrite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribePathRewritesOutcome TsfClient::DescribePathRewrites(const DescribePathRewritesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePathRewrites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePathRewritesResponse rsp = DescribePathRewritesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePathRewritesOutcome(rsp);
        else
            return DescribePathRewritesOutcome(o.GetError());
    }
    else
    {
        return DescribePathRewritesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePathRewritesAsync(const DescribePathRewritesRequest& request, const DescribePathRewritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePathRewrites(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribePathRewritesOutcomeCallable TsfClient::DescribePathRewritesCallable(const DescribePathRewritesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePathRewritesOutcome()>>(
        [this, request]()
        {
            return this->DescribePathRewrites(request);
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

TsfClient::DescribePluginInstancesOutcome TsfClient::DescribePluginInstances(const DescribePluginInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePluginInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginInstancesResponse rsp = DescribePluginInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginInstancesOutcome(rsp);
        else
            return DescribePluginInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribePluginInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePluginInstancesAsync(const DescribePluginInstancesRequest& request, const DescribePluginInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePluginInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribePluginInstancesOutcomeCallable TsfClient::DescribePluginInstancesCallable(const DescribePluginInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePluginInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribePluginInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribePodInstancesOutcome TsfClient::DescribePodInstances(const DescribePodInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePodInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePodInstancesResponse rsp = DescribePodInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePodInstancesOutcome(rsp);
        else
            return DescribePodInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribePodInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePodInstancesAsync(const DescribePodInstancesRequest& request, const DescribePodInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePodInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribePodInstancesOutcomeCallable TsfClient::DescribePodInstancesCallable(const DescribePodInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePodInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribePodInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribePublicConfigOutcome TsfClient::DescribePublicConfig(const DescribePublicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicConfigResponse rsp = DescribePublicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicConfigOutcome(rsp);
        else
            return DescribePublicConfigOutcome(o.GetError());
    }
    else
    {
        return DescribePublicConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePublicConfigAsync(const DescribePublicConfigRequest& request, const DescribePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribePublicConfigOutcomeCallable TsfClient::DescribePublicConfigCallable(const DescribePublicConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribePublicConfigReleaseLogsOutcome TsfClient::DescribePublicConfigReleaseLogs(const DescribePublicConfigReleaseLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicConfigReleaseLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicConfigReleaseLogsResponse rsp = DescribePublicConfigReleaseLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicConfigReleaseLogsOutcome(rsp);
        else
            return DescribePublicConfigReleaseLogsOutcome(o.GetError());
    }
    else
    {
        return DescribePublicConfigReleaseLogsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePublicConfigReleaseLogsAsync(const DescribePublicConfigReleaseLogsRequest& request, const DescribePublicConfigReleaseLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicConfigReleaseLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribePublicConfigReleaseLogsOutcomeCallable TsfClient::DescribePublicConfigReleaseLogsCallable(const DescribePublicConfigReleaseLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicConfigReleaseLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicConfigReleaseLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribePublicConfigReleasesOutcome TsfClient::DescribePublicConfigReleases(const DescribePublicConfigReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicConfigReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicConfigReleasesResponse rsp = DescribePublicConfigReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicConfigReleasesOutcome(rsp);
        else
            return DescribePublicConfigReleasesOutcome(o.GetError());
    }
    else
    {
        return DescribePublicConfigReleasesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePublicConfigReleasesAsync(const DescribePublicConfigReleasesRequest& request, const DescribePublicConfigReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicConfigReleases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribePublicConfigReleasesOutcomeCallable TsfClient::DescribePublicConfigReleasesCallable(const DescribePublicConfigReleasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicConfigReleasesOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicConfigReleases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribePublicConfigSummaryOutcome TsfClient::DescribePublicConfigSummary(const DescribePublicConfigSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicConfigSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicConfigSummaryResponse rsp = DescribePublicConfigSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicConfigSummaryOutcome(rsp);
        else
            return DescribePublicConfigSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribePublicConfigSummaryOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePublicConfigSummaryAsync(const DescribePublicConfigSummaryRequest& request, const DescribePublicConfigSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicConfigSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribePublicConfigSummaryOutcomeCallable TsfClient::DescribePublicConfigSummaryCallable(const DescribePublicConfigSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicConfigSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicConfigSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribePublicConfigsOutcome TsfClient::DescribePublicConfigs(const DescribePublicConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicConfigsResponse rsp = DescribePublicConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicConfigsOutcome(rsp);
        else
            return DescribePublicConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribePublicConfigsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePublicConfigsAsync(const DescribePublicConfigsRequest& request, const DescribePublicConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribePublicConfigsOutcomeCallable TsfClient::DescribePublicConfigsCallable(const DescribePublicConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeReleasedConfigOutcome TsfClient::DescribeReleasedConfig(const DescribeReleasedConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleasedConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleasedConfigResponse rsp = DescribeReleasedConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleasedConfigOutcome(rsp);
        else
            return DescribeReleasedConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeReleasedConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeReleasedConfigAsync(const DescribeReleasedConfigRequest& request, const DescribeReleasedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReleasedConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeReleasedConfigOutcomeCallable TsfClient::DescribeReleasedConfigCallable(const DescribeReleasedConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReleasedConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeReleasedConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeRepositoriesOutcome TsfClient::DescribeRepositories(const DescribeRepositoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoriesResponse rsp = DescribeRepositoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoriesOutcome(rsp);
        else
            return DescribeRepositoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoriesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeRepositoriesAsync(const DescribeRepositoriesRequest& request, const DescribeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepositories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeRepositoriesOutcomeCallable TsfClient::DescribeRepositoriesCallable(const DescribeRepositoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepositories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeRepositoryOutcome TsfClient::DescribeRepository(const DescribeRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoryResponse rsp = DescribeRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoryOutcome(rsp);
        else
            return DescribeRepositoryOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoryOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeRepositoryAsync(const DescribeRepositoryRequest& request, const DescribeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeRepositoryOutcomeCallable TsfClient::DescribeRepositoryCallable(const DescribeRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeServerlessGroupOutcome TsfClient::DescribeServerlessGroup(const DescribeServerlessGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessGroupResponse rsp = DescribeServerlessGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessGroupOutcome(rsp);
        else
            return DescribeServerlessGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeServerlessGroupAsync(const DescribeServerlessGroupRequest& request, const DescribeServerlessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerlessGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeServerlessGroupOutcomeCallable TsfClient::DescribeServerlessGroupCallable(const DescribeServerlessGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerlessGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerlessGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeServerlessGroupsOutcome TsfClient::DescribeServerlessGroups(const DescribeServerlessGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessGroupsResponse rsp = DescribeServerlessGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessGroupsOutcome(rsp);
        else
            return DescribeServerlessGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessGroupsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeServerlessGroupsAsync(const DescribeServerlessGroupsRequest& request, const DescribeServerlessGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerlessGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeServerlessGroupsOutcomeCallable TsfClient::DescribeServerlessGroupsCallable(const DescribeServerlessGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerlessGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerlessGroups(request);
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

TsfClient::DescribeTaskDetailOutcome TsfClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeTaskDetailOutcomeCallable TsfClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeTaskLastStatusOutcome TsfClient::DescribeTaskLastStatus(const DescribeTaskLastStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLastStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLastStatusResponse rsp = DescribeTaskLastStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLastStatusOutcome(rsp);
        else
            return DescribeTaskLastStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLastStatusOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeTaskLastStatusAsync(const DescribeTaskLastStatusRequest& request, const DescribeTaskLastStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskLastStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeTaskLastStatusOutcomeCallable TsfClient::DescribeTaskLastStatusCallable(const DescribeTaskLastStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskLastStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskLastStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeTaskRecordsOutcome TsfClient::DescribeTaskRecords(const DescribeTaskRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskRecordsResponse rsp = DescribeTaskRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskRecordsOutcome(rsp);
        else
            return DescribeTaskRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskRecordsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeTaskRecordsAsync(const DescribeTaskRecordsRequest& request, const DescribeTaskRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeTaskRecordsOutcomeCallable TsfClient::DescribeTaskRecordsCallable(const DescribeTaskRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeUnitApiUseDetailOutcome TsfClient::DescribeUnitApiUseDetail(const DescribeUnitApiUseDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnitApiUseDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnitApiUseDetailResponse rsp = DescribeUnitApiUseDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnitApiUseDetailOutcome(rsp);
        else
            return DescribeUnitApiUseDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeUnitApiUseDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUnitApiUseDetailAsync(const DescribeUnitApiUseDetailRequest& request, const DescribeUnitApiUseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnitApiUseDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeUnitApiUseDetailOutcomeCallable TsfClient::DescribeUnitApiUseDetailCallable(const DescribeUnitApiUseDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnitApiUseDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnitApiUseDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeUnitNamespacesOutcome TsfClient::DescribeUnitNamespaces(const DescribeUnitNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnitNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnitNamespacesResponse rsp = DescribeUnitNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnitNamespacesOutcome(rsp);
        else
            return DescribeUnitNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeUnitNamespacesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUnitNamespacesAsync(const DescribeUnitNamespacesRequest& request, const DescribeUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnitNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeUnitNamespacesOutcomeCallable TsfClient::DescribeUnitNamespacesCallable(const DescribeUnitNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnitNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnitNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeUnitRuleOutcome TsfClient::DescribeUnitRule(const DescribeUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnitRuleResponse rsp = DescribeUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnitRuleOutcome(rsp);
        else
            return DescribeUnitRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUnitRuleAsync(const DescribeUnitRuleRequest& request, const DescribeUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnitRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeUnitRuleOutcomeCallable TsfClient::DescribeUnitRuleCallable(const DescribeUnitRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnitRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnitRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DescribeUnitRulesOutcome TsfClient::DescribeUnitRules(const DescribeUnitRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnitRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnitRulesResponse rsp = DescribeUnitRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnitRulesOutcome(rsp);
        else
            return DescribeUnitRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeUnitRulesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUnitRulesAsync(const DescribeUnitRulesRequest& request, const DescribeUnitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnitRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeUnitRulesOutcomeCallable TsfClient::DescribeUnitRulesCallable(const DescribeUnitRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnitRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnitRules(request);
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

TsfClient::DescribeUsableUnitNamespacesOutcome TsfClient::DescribeUsableUnitNamespaces(const DescribeUsableUnitNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsableUnitNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsableUnitNamespacesResponse rsp = DescribeUsableUnitNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsableUnitNamespacesOutcome(rsp);
        else
            return DescribeUsableUnitNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeUsableUnitNamespacesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUsableUnitNamespacesAsync(const DescribeUsableUnitNamespacesRequest& request, const DescribeUsableUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsableUnitNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DescribeUsableUnitNamespacesOutcomeCallable TsfClient::DescribeUsableUnitNamespacesCallable(const DescribeUsableUnitNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsableUnitNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsableUnitNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DisableTaskOutcome TsfClient::DisableTask(const DisableTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DisableTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableTaskResponse rsp = DisableTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableTaskOutcome(rsp);
        else
            return DisableTaskOutcome(o.GetError());
    }
    else
    {
        return DisableTaskOutcome(outcome.GetError());
    }
}

void TsfClient::DisableTaskAsync(const DisableTaskRequest& request, const DisableTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DisableTaskOutcomeCallable TsfClient::DisableTaskCallable(const DisableTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableTaskOutcome()>>(
        [this, request]()
        {
            return this->DisableTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DisableTaskFlowOutcome TsfClient::DisableTaskFlow(const DisableTaskFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DisableTaskFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableTaskFlowResponse rsp = DisableTaskFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableTaskFlowOutcome(rsp);
        else
            return DisableTaskFlowOutcome(o.GetError());
    }
    else
    {
        return DisableTaskFlowOutcome(outcome.GetError());
    }
}

void TsfClient::DisableTaskFlowAsync(const DisableTaskFlowRequest& request, const DisableTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableTaskFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DisableTaskFlowOutcomeCallable TsfClient::DisableTaskFlowCallable(const DisableTaskFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableTaskFlowOutcome()>>(
        [this, request]()
        {
            return this->DisableTaskFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DisableUnitRouteOutcome TsfClient::DisableUnitRoute(const DisableUnitRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DisableUnitRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableUnitRouteResponse rsp = DisableUnitRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableUnitRouteOutcome(rsp);
        else
            return DisableUnitRouteOutcome(o.GetError());
    }
    else
    {
        return DisableUnitRouteOutcome(outcome.GetError());
    }
}

void TsfClient::DisableUnitRouteAsync(const DisableUnitRouteRequest& request, const DisableUnitRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableUnitRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DisableUnitRouteOutcomeCallable TsfClient::DisableUnitRouteCallable(const DisableUnitRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableUnitRouteOutcome()>>(
        [this, request]()
        {
            return this->DisableUnitRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DisableUnitRuleOutcome TsfClient::DisableUnitRule(const DisableUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DisableUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableUnitRuleResponse rsp = DisableUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableUnitRuleOutcome(rsp);
        else
            return DisableUnitRuleOutcome(o.GetError());
    }
    else
    {
        return DisableUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DisableUnitRuleAsync(const DisableUnitRuleRequest& request, const DisableUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableUnitRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DisableUnitRuleOutcomeCallable TsfClient::DisableUnitRuleCallable(const DisableUnitRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableUnitRuleOutcome()>>(
        [this, request]()
        {
            return this->DisableUnitRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::DraftApiGroupOutcome TsfClient::DraftApiGroup(const DraftApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DraftApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DraftApiGroupResponse rsp = DraftApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DraftApiGroupOutcome(rsp);
        else
            return DraftApiGroupOutcome(o.GetError());
    }
    else
    {
        return DraftApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DraftApiGroupAsync(const DraftApiGroupRequest& request, const DraftApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DraftApiGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::DraftApiGroupOutcomeCallable TsfClient::DraftApiGroupCallable(const DraftApiGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DraftApiGroupOutcome()>>(
        [this, request]()
        {
            return this->DraftApiGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::EnableTaskOutcome TsfClient::EnableTask(const EnableTaskRequest &request)
{
    auto outcome = MakeRequest(request, "EnableTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableTaskResponse rsp = EnableTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableTaskOutcome(rsp);
        else
            return EnableTaskOutcome(o.GetError());
    }
    else
    {
        return EnableTaskOutcome(outcome.GetError());
    }
}

void TsfClient::EnableTaskAsync(const EnableTaskRequest& request, const EnableTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::EnableTaskOutcomeCallable TsfClient::EnableTaskCallable(const EnableTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableTaskOutcome()>>(
        [this, request]()
        {
            return this->EnableTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::EnableTaskFlowOutcome TsfClient::EnableTaskFlow(const EnableTaskFlowRequest &request)
{
    auto outcome = MakeRequest(request, "EnableTaskFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableTaskFlowResponse rsp = EnableTaskFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableTaskFlowOutcome(rsp);
        else
            return EnableTaskFlowOutcome(o.GetError());
    }
    else
    {
        return EnableTaskFlowOutcome(outcome.GetError());
    }
}

void TsfClient::EnableTaskFlowAsync(const EnableTaskFlowRequest& request, const EnableTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableTaskFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::EnableTaskFlowOutcomeCallable TsfClient::EnableTaskFlowCallable(const EnableTaskFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableTaskFlowOutcome()>>(
        [this, request]()
        {
            return this->EnableTaskFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::EnableUnitRouteOutcome TsfClient::EnableUnitRoute(const EnableUnitRouteRequest &request)
{
    auto outcome = MakeRequest(request, "EnableUnitRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableUnitRouteResponse rsp = EnableUnitRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableUnitRouteOutcome(rsp);
        else
            return EnableUnitRouteOutcome(o.GetError());
    }
    else
    {
        return EnableUnitRouteOutcome(outcome.GetError());
    }
}

void TsfClient::EnableUnitRouteAsync(const EnableUnitRouteRequest& request, const EnableUnitRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableUnitRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::EnableUnitRouteOutcomeCallable TsfClient::EnableUnitRouteCallable(const EnableUnitRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableUnitRouteOutcome()>>(
        [this, request]()
        {
            return this->EnableUnitRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::EnableUnitRuleOutcome TsfClient::EnableUnitRule(const EnableUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EnableUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableUnitRuleResponse rsp = EnableUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableUnitRuleOutcome(rsp);
        else
            return EnableUnitRuleOutcome(o.GetError());
    }
    else
    {
        return EnableUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::EnableUnitRuleAsync(const EnableUnitRuleRequest& request, const EnableUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableUnitRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::EnableUnitRuleOutcomeCallable TsfClient::EnableUnitRuleCallable(const EnableUnitRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableUnitRuleOutcome()>>(
        [this, request]()
        {
            return this->EnableUnitRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ExecuteTaskOutcome TsfClient::ExecuteTask(const ExecuteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteTaskResponse rsp = ExecuteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteTaskOutcome(rsp);
        else
            return ExecuteTaskOutcome(o.GetError());
    }
    else
    {
        return ExecuteTaskOutcome(outcome.GetError());
    }
}

void TsfClient::ExecuteTaskAsync(const ExecuteTaskRequest& request, const ExecuteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ExecuteTaskOutcomeCallable TsfClient::ExecuteTaskCallable(const ExecuteTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteTaskOutcome()>>(
        [this, request]()
        {
            return this->ExecuteTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ExecuteTaskFlowOutcome TsfClient::ExecuteTaskFlow(const ExecuteTaskFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteTaskFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteTaskFlowResponse rsp = ExecuteTaskFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteTaskFlowOutcome(rsp);
        else
            return ExecuteTaskFlowOutcome(o.GetError());
    }
    else
    {
        return ExecuteTaskFlowOutcome(outcome.GetError());
    }
}

void TsfClient::ExecuteTaskFlowAsync(const ExecuteTaskFlowRequest& request, const ExecuteTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteTaskFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ExecuteTaskFlowOutcomeCallable TsfClient::ExecuteTaskFlowCallable(const ExecuteTaskFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteTaskFlowOutcome()>>(
        [this, request]()
        {
            return this->ExecuteTaskFlow(request);
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

TsfClient::ModifyLaneOutcome TsfClient::ModifyLane(const ModifyLaneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLane");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLaneResponse rsp = ModifyLaneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLaneOutcome(rsp);
        else
            return ModifyLaneOutcome(o.GetError());
    }
    else
    {
        return ModifyLaneOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyLaneAsync(const ModifyLaneRequest& request, const ModifyLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLane(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ModifyLaneOutcomeCallable TsfClient::ModifyLaneCallable(const ModifyLaneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLaneOutcome()>>(
        [this, request]()
        {
            return this->ModifyLane(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ModifyLaneRuleOutcome TsfClient::ModifyLaneRule(const ModifyLaneRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLaneRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLaneRuleResponse rsp = ModifyLaneRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLaneRuleOutcome(rsp);
        else
            return ModifyLaneRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyLaneRuleOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyLaneRuleAsync(const ModifyLaneRuleRequest& request, const ModifyLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLaneRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ModifyLaneRuleOutcomeCallable TsfClient::ModifyLaneRuleCallable(const ModifyLaneRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLaneRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyLaneRule(request);
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

TsfClient::ModifyPathRewriteOutcome TsfClient::ModifyPathRewrite(const ModifyPathRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPathRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPathRewriteResponse rsp = ModifyPathRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPathRewriteOutcome(rsp);
        else
            return ModifyPathRewriteOutcome(o.GetError());
    }
    else
    {
        return ModifyPathRewriteOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyPathRewriteAsync(const ModifyPathRewriteRequest& request, const ModifyPathRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPathRewrite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ModifyPathRewriteOutcomeCallable TsfClient::ModifyPathRewriteCallable(const ModifyPathRewriteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPathRewriteOutcome()>>(
        [this, request]()
        {
            return this->ModifyPathRewrite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ModifyTaskOutcome TsfClient::ModifyTask(const ModifyTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskResponse rsp = ModifyTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskOutcome(rsp);
        else
            return ModifyTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyTaskAsync(const ModifyTaskRequest& request, const ModifyTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ModifyTaskOutcomeCallable TsfClient::ModifyTaskCallable(const ModifyTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyTask(request);
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

TsfClient::OperateApplicationTcrBindingOutcome TsfClient::OperateApplicationTcrBinding(const OperateApplicationTcrBindingRequest &request)
{
    auto outcome = MakeRequest(request, "OperateApplicationTcrBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateApplicationTcrBindingResponse rsp = OperateApplicationTcrBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateApplicationTcrBindingOutcome(rsp);
        else
            return OperateApplicationTcrBindingOutcome(o.GetError());
    }
    else
    {
        return OperateApplicationTcrBindingOutcome(outcome.GetError());
    }
}

void TsfClient::OperateApplicationTcrBindingAsync(const OperateApplicationTcrBindingRequest& request, const OperateApplicationTcrBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OperateApplicationTcrBinding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::OperateApplicationTcrBindingOutcomeCallable TsfClient::OperateApplicationTcrBindingCallable(const OperateApplicationTcrBindingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OperateApplicationTcrBindingOutcome()>>(
        [this, request]()
        {
            return this->OperateApplicationTcrBinding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::RedoTaskOutcome TsfClient::RedoTask(const RedoTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RedoTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RedoTaskResponse rsp = RedoTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RedoTaskOutcome(rsp);
        else
            return RedoTaskOutcome(o.GetError());
    }
    else
    {
        return RedoTaskOutcome(outcome.GetError());
    }
}

void TsfClient::RedoTaskAsync(const RedoTaskRequest& request, const RedoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RedoTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::RedoTaskOutcomeCallable TsfClient::RedoTaskCallable(const RedoTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RedoTaskOutcome()>>(
        [this, request]()
        {
            return this->RedoTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::RedoTaskBatchOutcome TsfClient::RedoTaskBatch(const RedoTaskBatchRequest &request)
{
    auto outcome = MakeRequest(request, "RedoTaskBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RedoTaskBatchResponse rsp = RedoTaskBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RedoTaskBatchOutcome(rsp);
        else
            return RedoTaskBatchOutcome(o.GetError());
    }
    else
    {
        return RedoTaskBatchOutcome(outcome.GetError());
    }
}

void TsfClient::RedoTaskBatchAsync(const RedoTaskBatchRequest& request, const RedoTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RedoTaskBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::RedoTaskBatchOutcomeCallable TsfClient::RedoTaskBatchCallable(const RedoTaskBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RedoTaskBatchOutcome()>>(
        [this, request]()
        {
            return this->RedoTaskBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::RedoTaskExecuteOutcome TsfClient::RedoTaskExecute(const RedoTaskExecuteRequest &request)
{
    auto outcome = MakeRequest(request, "RedoTaskExecute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RedoTaskExecuteResponse rsp = RedoTaskExecuteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RedoTaskExecuteOutcome(rsp);
        else
            return RedoTaskExecuteOutcome(o.GetError());
    }
    else
    {
        return RedoTaskExecuteOutcome(outcome.GetError());
    }
}

void TsfClient::RedoTaskExecuteAsync(const RedoTaskExecuteRequest& request, const RedoTaskExecuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RedoTaskExecute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::RedoTaskExecuteOutcomeCallable TsfClient::RedoTaskExecuteCallable(const RedoTaskExecuteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RedoTaskExecuteOutcome()>>(
        [this, request]()
        {
            return this->RedoTaskExecute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::RedoTaskFlowBatchOutcome TsfClient::RedoTaskFlowBatch(const RedoTaskFlowBatchRequest &request)
{
    auto outcome = MakeRequest(request, "RedoTaskFlowBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RedoTaskFlowBatchResponse rsp = RedoTaskFlowBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RedoTaskFlowBatchOutcome(rsp);
        else
            return RedoTaskFlowBatchOutcome(o.GetError());
    }
    else
    {
        return RedoTaskFlowBatchOutcome(outcome.GetError());
    }
}

void TsfClient::RedoTaskFlowBatchAsync(const RedoTaskFlowBatchRequest& request, const RedoTaskFlowBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RedoTaskFlowBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::RedoTaskFlowBatchOutcomeCallable TsfClient::RedoTaskFlowBatchCallable(const RedoTaskFlowBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RedoTaskFlowBatchOutcome()>>(
        [this, request]()
        {
            return this->RedoTaskFlowBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ReleaseApiGroupOutcome TsfClient::ReleaseApiGroup(const ReleaseApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseApiGroupResponse rsp = ReleaseApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseApiGroupOutcome(rsp);
        else
            return ReleaseApiGroupOutcome(o.GetError());
    }
    else
    {
        return ReleaseApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::ReleaseApiGroupAsync(const ReleaseApiGroupRequest& request, const ReleaseApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseApiGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ReleaseApiGroupOutcomeCallable TsfClient::ReleaseApiGroupCallable(const ReleaseApiGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseApiGroupOutcome()>>(
        [this, request]()
        {
            return this->ReleaseApiGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ReleaseConfigOutcome TsfClient::ReleaseConfig(const ReleaseConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseConfigResponse rsp = ReleaseConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseConfigOutcome(rsp);
        else
            return ReleaseConfigOutcome(o.GetError());
    }
    else
    {
        return ReleaseConfigOutcome(outcome.GetError());
    }
}

void TsfClient::ReleaseConfigAsync(const ReleaseConfigRequest& request, const ReleaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ReleaseConfigOutcomeCallable TsfClient::ReleaseConfigCallable(const ReleaseConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseConfigOutcome()>>(
        [this, request]()
        {
            return this->ReleaseConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ReleaseFileConfigOutcome TsfClient::ReleaseFileConfig(const ReleaseFileConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseFileConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseFileConfigResponse rsp = ReleaseFileConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseFileConfigOutcome(rsp);
        else
            return ReleaseFileConfigOutcome(o.GetError());
    }
    else
    {
        return ReleaseFileConfigOutcome(outcome.GetError());
    }
}

void TsfClient::ReleaseFileConfigAsync(const ReleaseFileConfigRequest& request, const ReleaseFileConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseFileConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ReleaseFileConfigOutcomeCallable TsfClient::ReleaseFileConfigCallable(const ReleaseFileConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseFileConfigOutcome()>>(
        [this, request]()
        {
            return this->ReleaseFileConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::ReleasePublicConfigOutcome TsfClient::ReleasePublicConfig(const ReleasePublicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ReleasePublicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleasePublicConfigResponse rsp = ReleasePublicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleasePublicConfigOutcome(rsp);
        else
            return ReleasePublicConfigOutcome(o.GetError());
    }
    else
    {
        return ReleasePublicConfigOutcome(outcome.GetError());
    }
}

void TsfClient::ReleasePublicConfigAsync(const ReleasePublicConfigRequest& request, const ReleasePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleasePublicConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::ReleasePublicConfigOutcomeCallable TsfClient::ReleasePublicConfigCallable(const ReleasePublicConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleasePublicConfigOutcome()>>(
        [this, request]()
        {
            return this->ReleasePublicConfig(request);
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

TsfClient::RevocationConfigOutcome TsfClient::RevocationConfig(const RevocationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "RevocationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevocationConfigResponse rsp = RevocationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevocationConfigOutcome(rsp);
        else
            return RevocationConfigOutcome(o.GetError());
    }
    else
    {
        return RevocationConfigOutcome(outcome.GetError());
    }
}

void TsfClient::RevocationConfigAsync(const RevocationConfigRequest& request, const RevocationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevocationConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::RevocationConfigOutcomeCallable TsfClient::RevocationConfigCallable(const RevocationConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevocationConfigOutcome()>>(
        [this, request]()
        {
            return this->RevocationConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::RevocationPublicConfigOutcome TsfClient::RevocationPublicConfig(const RevocationPublicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "RevocationPublicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevocationPublicConfigResponse rsp = RevocationPublicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevocationPublicConfigOutcome(rsp);
        else
            return RevocationPublicConfigOutcome(o.GetError());
    }
    else
    {
        return RevocationPublicConfigOutcome(outcome.GetError());
    }
}

void TsfClient::RevocationPublicConfigAsync(const RevocationPublicConfigRequest& request, const RevocationPublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevocationPublicConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::RevocationPublicConfigOutcomeCallable TsfClient::RevocationPublicConfigCallable(const RevocationPublicConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevocationPublicConfigOutcome()>>(
        [this, request]()
        {
            return this->RevocationPublicConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::RollbackConfigOutcome TsfClient::RollbackConfig(const RollbackConfigRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackConfigResponse rsp = RollbackConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackConfigOutcome(rsp);
        else
            return RollbackConfigOutcome(o.GetError());
    }
    else
    {
        return RollbackConfigOutcome(outcome.GetError());
    }
}

void TsfClient::RollbackConfigAsync(const RollbackConfigRequest& request, const RollbackConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::RollbackConfigOutcomeCallable TsfClient::RollbackConfigCallable(const RollbackConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackConfigOutcome()>>(
        [this, request]()
        {
            return this->RollbackConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::SearchBusinessLogOutcome TsfClient::SearchBusinessLog(const SearchBusinessLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchBusinessLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchBusinessLogResponse rsp = SearchBusinessLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchBusinessLogOutcome(rsp);
        else
            return SearchBusinessLogOutcome(o.GetError());
    }
    else
    {
        return SearchBusinessLogOutcome(outcome.GetError());
    }
}

void TsfClient::SearchBusinessLogAsync(const SearchBusinessLogRequest& request, const SearchBusinessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchBusinessLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::SearchBusinessLogOutcomeCallable TsfClient::SearchBusinessLogCallable(const SearchBusinessLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchBusinessLogOutcome()>>(
        [this, request]()
        {
            return this->SearchBusinessLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::SearchStdoutLogOutcome TsfClient::SearchStdoutLog(const SearchStdoutLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchStdoutLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchStdoutLogResponse rsp = SearchStdoutLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchStdoutLogOutcome(rsp);
        else
            return SearchStdoutLogOutcome(o.GetError());
    }
    else
    {
        return SearchStdoutLogOutcome(outcome.GetError());
    }
}

void TsfClient::SearchStdoutLogAsync(const SearchStdoutLogRequest& request, const SearchStdoutLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchStdoutLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::SearchStdoutLogOutcomeCallable TsfClient::SearchStdoutLogCallable(const SearchStdoutLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchStdoutLogOutcome()>>(
        [this, request]()
        {
            return this->SearchStdoutLog(request);
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

TsfClient::StopTaskBatchOutcome TsfClient::StopTaskBatch(const StopTaskBatchRequest &request)
{
    auto outcome = MakeRequest(request, "StopTaskBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopTaskBatchResponse rsp = StopTaskBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopTaskBatchOutcome(rsp);
        else
            return StopTaskBatchOutcome(o.GetError());
    }
    else
    {
        return StopTaskBatchOutcome(outcome.GetError());
    }
}

void TsfClient::StopTaskBatchAsync(const StopTaskBatchRequest& request, const StopTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopTaskBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::StopTaskBatchOutcomeCallable TsfClient::StopTaskBatchCallable(const StopTaskBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopTaskBatchOutcome()>>(
        [this, request]()
        {
            return this->StopTaskBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::StopTaskExecuteOutcome TsfClient::StopTaskExecute(const StopTaskExecuteRequest &request)
{
    auto outcome = MakeRequest(request, "StopTaskExecute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopTaskExecuteResponse rsp = StopTaskExecuteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopTaskExecuteOutcome(rsp);
        else
            return StopTaskExecuteOutcome(o.GetError());
    }
    else
    {
        return StopTaskExecuteOutcome(outcome.GetError());
    }
}

void TsfClient::StopTaskExecuteAsync(const StopTaskExecuteRequest& request, const StopTaskExecuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopTaskExecute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::StopTaskExecuteOutcomeCallable TsfClient::StopTaskExecuteCallable(const StopTaskExecuteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopTaskExecuteOutcome()>>(
        [this, request]()
        {
            return this->StopTaskExecute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::TerminateTaskFlowBatchOutcome TsfClient::TerminateTaskFlowBatch(const TerminateTaskFlowBatchRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateTaskFlowBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateTaskFlowBatchResponse rsp = TerminateTaskFlowBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateTaskFlowBatchOutcome(rsp);
        else
            return TerminateTaskFlowBatchOutcome(o.GetError());
    }
    else
    {
        return TerminateTaskFlowBatchOutcome(outcome.GetError());
    }
}

void TsfClient::TerminateTaskFlowBatchAsync(const TerminateTaskFlowBatchRequest& request, const TerminateTaskFlowBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateTaskFlowBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::TerminateTaskFlowBatchOutcomeCallable TsfClient::TerminateTaskFlowBatchCallable(const TerminateTaskFlowBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateTaskFlowBatchOutcome()>>(
        [this, request]()
        {
            return this->TerminateTaskFlowBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::UnbindApiGroupOutcome TsfClient::UnbindApiGroup(const UnbindApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindApiGroupResponse rsp = UnbindApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindApiGroupOutcome(rsp);
        else
            return UnbindApiGroupOutcome(o.GetError());
    }
    else
    {
        return UnbindApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::UnbindApiGroupAsync(const UnbindApiGroupRequest& request, const UnbindApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindApiGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::UnbindApiGroupOutcomeCallable TsfClient::UnbindApiGroupCallable(const UnbindApiGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindApiGroupOutcome()>>(
        [this, request]()
        {
            return this->UnbindApiGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::UpdateApiGroupOutcome TsfClient::UpdateApiGroup(const UpdateApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiGroupResponse rsp = UpdateApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiGroupOutcome(rsp);
        else
            return UpdateApiGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateApiGroupAsync(const UpdateApiGroupRequest& request, const UpdateApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateApiGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::UpdateApiGroupOutcomeCallable TsfClient::UpdateApiGroupCallable(const UpdateApiGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateApiGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateApiGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::UpdateApiRateLimitRuleOutcome TsfClient::UpdateApiRateLimitRule(const UpdateApiRateLimitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiRateLimitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiRateLimitRuleResponse rsp = UpdateApiRateLimitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiRateLimitRuleOutcome(rsp);
        else
            return UpdateApiRateLimitRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateApiRateLimitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateApiRateLimitRuleAsync(const UpdateApiRateLimitRuleRequest& request, const UpdateApiRateLimitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateApiRateLimitRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::UpdateApiRateLimitRuleOutcomeCallable TsfClient::UpdateApiRateLimitRuleCallable(const UpdateApiRateLimitRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateApiRateLimitRuleOutcome()>>(
        [this, request]()
        {
            return this->UpdateApiRateLimitRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::UpdateApiRateLimitRulesOutcome TsfClient::UpdateApiRateLimitRules(const UpdateApiRateLimitRulesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiRateLimitRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiRateLimitRulesResponse rsp = UpdateApiRateLimitRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiRateLimitRulesOutcome(rsp);
        else
            return UpdateApiRateLimitRulesOutcome(o.GetError());
    }
    else
    {
        return UpdateApiRateLimitRulesOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateApiRateLimitRulesAsync(const UpdateApiRateLimitRulesRequest& request, const UpdateApiRateLimitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateApiRateLimitRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::UpdateApiRateLimitRulesOutcomeCallable TsfClient::UpdateApiRateLimitRulesCallable(const UpdateApiRateLimitRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateApiRateLimitRulesOutcome()>>(
        [this, request]()
        {
            return this->UpdateApiRateLimitRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::UpdateApiTimeoutsOutcome TsfClient::UpdateApiTimeouts(const UpdateApiTimeoutsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiTimeouts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiTimeoutsResponse rsp = UpdateApiTimeoutsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiTimeoutsOutcome(rsp);
        else
            return UpdateApiTimeoutsOutcome(o.GetError());
    }
    else
    {
        return UpdateApiTimeoutsOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateApiTimeoutsAsync(const UpdateApiTimeoutsRequest& request, const UpdateApiTimeoutsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateApiTimeouts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::UpdateApiTimeoutsOutcomeCallable TsfClient::UpdateApiTimeoutsCallable(const UpdateApiTimeoutsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateApiTimeoutsOutcome()>>(
        [this, request]()
        {
            return this->UpdateApiTimeouts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::UpdateGatewayApiOutcome TsfClient::UpdateGatewayApi(const UpdateGatewayApiRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGatewayApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGatewayApiResponse rsp = UpdateGatewayApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGatewayApiOutcome(rsp);
        else
            return UpdateGatewayApiOutcome(o.GetError());
    }
    else
    {
        return UpdateGatewayApiOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateGatewayApiAsync(const UpdateGatewayApiRequest& request, const UpdateGatewayApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGatewayApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::UpdateGatewayApiOutcomeCallable TsfClient::UpdateGatewayApiCallable(const UpdateGatewayApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGatewayApiOutcome()>>(
        [this, request]()
        {
            return this->UpdateGatewayApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::UpdateHealthCheckSettingsOutcome TsfClient::UpdateHealthCheckSettings(const UpdateHealthCheckSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateHealthCheckSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateHealthCheckSettingsResponse rsp = UpdateHealthCheckSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateHealthCheckSettingsOutcome(rsp);
        else
            return UpdateHealthCheckSettingsOutcome(o.GetError());
    }
    else
    {
        return UpdateHealthCheckSettingsOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateHealthCheckSettingsAsync(const UpdateHealthCheckSettingsRequest& request, const UpdateHealthCheckSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateHealthCheckSettings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::UpdateHealthCheckSettingsOutcomeCallable TsfClient::UpdateHealthCheckSettingsCallable(const UpdateHealthCheckSettingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateHealthCheckSettingsOutcome()>>(
        [this, request]()
        {
            return this->UpdateHealthCheckSettings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::UpdateRepositoryOutcome TsfClient::UpdateRepository(const UpdateRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRepositoryResponse rsp = UpdateRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRepositoryOutcome(rsp);
        else
            return UpdateRepositoryOutcome(o.GetError());
    }
    else
    {
        return UpdateRepositoryOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateRepositoryAsync(const UpdateRepositoryRequest& request, const UpdateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::UpdateRepositoryOutcomeCallable TsfClient::UpdateRepositoryCallable(const UpdateRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRepositoryOutcome()>>(
        [this, request]()
        {
            return this->UpdateRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TsfClient::UpdateUnitRuleOutcome TsfClient::UpdateUnitRule(const UpdateUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUnitRuleResponse rsp = UpdateUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUnitRuleOutcome(rsp);
        else
            return UpdateUnitRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateUnitRuleAsync(const UpdateUnitRuleRequest& request, const UpdateUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUnitRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TsfClient::UpdateUnitRuleOutcomeCallable TsfClient::UpdateUnitRuleCallable(const UpdateUnitRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUnitRuleOutcome()>>(
        [this, request]()
        {
            return this->UpdateUnitRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


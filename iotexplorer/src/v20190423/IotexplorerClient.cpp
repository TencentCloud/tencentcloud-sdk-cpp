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

#include <tencentcloud/iotexplorer/v20190423/IotexplorerClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotexplorer::V20190423;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-23";
    const string ENDPOINT = "iotexplorer.tencentcloudapi.com";
}

IotexplorerClient::IotexplorerClient(const Credential &credential, const string &region) :
    IotexplorerClient(credential, region, ClientProfile())
{
}

IotexplorerClient::IotexplorerClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotexplorerClient::BindDevicesOutcome IotexplorerClient::BindDevices(const BindDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "BindDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDevicesResponse rsp = BindDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDevicesOutcome(rsp);
        else
            return BindDevicesOutcome(o.GetError());
    }
    else
    {
        return BindDevicesOutcome(outcome.GetError());
    }
}

void IotexplorerClient::BindDevicesAsync(const BindDevicesRequest& request, const BindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::BindDevicesOutcomeCallable IotexplorerClient::BindDevicesCallable(const BindDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindDevicesOutcome()>>(
        [this, request]()
        {
            return this->BindDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::BindProductsOutcome IotexplorerClient::BindProducts(const BindProductsRequest &request)
{
    auto outcome = MakeRequest(request, "BindProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindProductsResponse rsp = BindProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindProductsOutcome(rsp);
        else
            return BindProductsOutcome(o.GetError());
    }
    else
    {
        return BindProductsOutcome(outcome.GetError());
    }
}

void IotexplorerClient::BindProductsAsync(const BindProductsRequest& request, const BindProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::BindProductsOutcomeCallable IotexplorerClient::BindProductsCallable(const BindProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindProductsOutcome()>>(
        [this, request]()
        {
            return this->BindProducts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CallDeviceActionAsyncOutcome IotexplorerClient::CallDeviceActionAsync(const CallDeviceActionAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "CallDeviceActionAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CallDeviceActionAsyncResponse rsp = CallDeviceActionAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CallDeviceActionAsyncOutcome(rsp);
        else
            return CallDeviceActionAsyncOutcome(o.GetError());
    }
    else
    {
        return CallDeviceActionAsyncOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CallDeviceActionAsyncAsync(const CallDeviceActionAsyncRequest& request, const CallDeviceActionAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CallDeviceActionAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CallDeviceActionAsyncOutcomeCallable IotexplorerClient::CallDeviceActionAsyncCallable(const CallDeviceActionAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CallDeviceActionAsyncOutcome()>>(
        [this, request]()
        {
            return this->CallDeviceActionAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CallDeviceActionSyncOutcome IotexplorerClient::CallDeviceActionSync(const CallDeviceActionSyncRequest &request)
{
    auto outcome = MakeRequest(request, "CallDeviceActionSync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CallDeviceActionSyncResponse rsp = CallDeviceActionSyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CallDeviceActionSyncOutcome(rsp);
        else
            return CallDeviceActionSyncOutcome(o.GetError());
    }
    else
    {
        return CallDeviceActionSyncOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CallDeviceActionSyncAsync(const CallDeviceActionSyncRequest& request, const CallDeviceActionSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CallDeviceActionSync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CallDeviceActionSyncOutcomeCallable IotexplorerClient::CallDeviceActionSyncCallable(const CallDeviceActionSyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CallDeviceActionSyncOutcome()>>(
        [this, request]()
        {
            return this->CallDeviceActionSync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ControlDeviceDataOutcome IotexplorerClient::ControlDeviceData(const ControlDeviceDataRequest &request)
{
    auto outcome = MakeRequest(request, "ControlDeviceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlDeviceDataResponse rsp = ControlDeviceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlDeviceDataOutcome(rsp);
        else
            return ControlDeviceDataOutcome(o.GetError());
    }
    else
    {
        return ControlDeviceDataOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ControlDeviceDataAsync(const ControlDeviceDataRequest& request, const ControlDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlDeviceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ControlDeviceDataOutcomeCallable IotexplorerClient::ControlDeviceDataCallable(const ControlDeviceDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlDeviceDataOutcome()>>(
        [this, request]()
        {
            return this->ControlDeviceData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateBatchProductionOutcome IotexplorerClient::CreateBatchProduction(const CreateBatchProductionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchProduction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchProductionResponse rsp = CreateBatchProductionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchProductionOutcome(rsp);
        else
            return CreateBatchProductionOutcome(o.GetError());
    }
    else
    {
        return CreateBatchProductionOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateBatchProductionAsync(const CreateBatchProductionRequest& request, const CreateBatchProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchProduction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateBatchProductionOutcomeCallable IotexplorerClient::CreateBatchProductionCallable(const CreateBatchProductionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchProductionOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchProduction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateDeviceOutcome IotexplorerClient::CreateDevice(const CreateDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceResponse rsp = CreateDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceOutcome(rsp);
        else
            return CreateDeviceOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateDeviceOutcomeCallable IotexplorerClient::CreateDeviceCallable(const CreateDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDeviceOutcome()>>(
        [this, request]()
        {
            return this->CreateDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateFenceBindOutcome IotexplorerClient::CreateFenceBind(const CreateFenceBindRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFenceBind");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFenceBindResponse rsp = CreateFenceBindResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFenceBindOutcome(rsp);
        else
            return CreateFenceBindOutcome(o.GetError());
    }
    else
    {
        return CreateFenceBindOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateFenceBindAsync(const CreateFenceBindRequest& request, const CreateFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFenceBind(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateFenceBindOutcomeCallable IotexplorerClient::CreateFenceBindCallable(const CreateFenceBindRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFenceBindOutcome()>>(
        [this, request]()
        {
            return this->CreateFenceBind(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateLoRaFrequencyOutcome IotexplorerClient::CreateLoRaFrequency(const CreateLoRaFrequencyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoRaFrequency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoRaFrequencyResponse rsp = CreateLoRaFrequencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoRaFrequencyOutcome(rsp);
        else
            return CreateLoRaFrequencyOutcome(o.GetError());
    }
    else
    {
        return CreateLoRaFrequencyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateLoRaFrequencyAsync(const CreateLoRaFrequencyRequest& request, const CreateLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLoRaFrequency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateLoRaFrequencyOutcomeCallable IotexplorerClient::CreateLoRaFrequencyCallable(const CreateLoRaFrequencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLoRaFrequencyOutcome()>>(
        [this, request]()
        {
            return this->CreateLoRaFrequency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateLoRaGatewayOutcome IotexplorerClient::CreateLoRaGateway(const CreateLoRaGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoRaGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoRaGatewayResponse rsp = CreateLoRaGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoRaGatewayOutcome(rsp);
        else
            return CreateLoRaGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateLoRaGatewayOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateLoRaGatewayAsync(const CreateLoRaGatewayRequest& request, const CreateLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLoRaGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateLoRaGatewayOutcomeCallable IotexplorerClient::CreateLoRaGatewayCallable(const CreateLoRaGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLoRaGatewayOutcome()>>(
        [this, request]()
        {
            return this->CreateLoRaGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreatePositionFenceOutcome IotexplorerClient::CreatePositionFence(const CreatePositionFenceRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePositionFence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePositionFenceResponse rsp = CreatePositionFenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePositionFenceOutcome(rsp);
        else
            return CreatePositionFenceOutcome(o.GetError());
    }
    else
    {
        return CreatePositionFenceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreatePositionFenceAsync(const CreatePositionFenceRequest& request, const CreatePositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePositionFence(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreatePositionFenceOutcomeCallable IotexplorerClient::CreatePositionFenceCallable(const CreatePositionFenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePositionFenceOutcome()>>(
        [this, request]()
        {
            return this->CreatePositionFence(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreatePositionSpaceOutcome IotexplorerClient::CreatePositionSpace(const CreatePositionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePositionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePositionSpaceResponse rsp = CreatePositionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePositionSpaceOutcome(rsp);
        else
            return CreatePositionSpaceOutcome(o.GetError());
    }
    else
    {
        return CreatePositionSpaceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreatePositionSpaceAsync(const CreatePositionSpaceRequest& request, const CreatePositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePositionSpace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreatePositionSpaceOutcomeCallable IotexplorerClient::CreatePositionSpaceCallable(const CreatePositionSpaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePositionSpaceOutcome()>>(
        [this, request]()
        {
            return this->CreatePositionSpace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateProjectOutcome IotexplorerClient::CreateProject(const CreateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProjectResponse rsp = CreateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProjectOutcome(rsp);
        else
            return CreateProjectOutcome(o.GetError());
    }
    else
    {
        return CreateProjectOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateProjectOutcomeCallable IotexplorerClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
        [this, request]()
        {
            return this->CreateProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateStudioProductOutcome IotexplorerClient::CreateStudioProduct(const CreateStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStudioProductResponse rsp = CreateStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStudioProductOutcome(rsp);
        else
            return CreateStudioProductOutcome(o.GetError());
    }
    else
    {
        return CreateStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateStudioProductAsync(const CreateStudioProductRequest& request, const CreateStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateStudioProductOutcomeCallable IotexplorerClient::CreateStudioProductCallable(const CreateStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStudioProductOutcome()>>(
        [this, request]()
        {
            return this->CreateStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateTopicPolicyOutcome IotexplorerClient::CreateTopicPolicy(const CreateTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicPolicyResponse rsp = CreateTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicPolicyOutcome(rsp);
        else
            return CreateTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateTopicPolicyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateTopicPolicyAsync(const CreateTopicPolicyRequest& request, const CreateTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopicPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateTopicPolicyOutcomeCallable IotexplorerClient::CreateTopicPolicyCallable(const CreateTopicPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTopicPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateTopicPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::CreateTopicRuleOutcome IotexplorerClient::CreateTopicRule(const CreateTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicRuleResponse rsp = CreateTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicRuleOutcome(rsp);
        else
            return CreateTopicRuleOutcome(o.GetError());
    }
    else
    {
        return CreateTopicRuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::CreateTopicRuleAsync(const CreateTopicRuleRequest& request, const CreateTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::CreateTopicRuleOutcomeCallable IotexplorerClient::CreateTopicRuleCallable(const CreateTopicRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTopicRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateTopicRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteDeviceOutcome IotexplorerClient::DeleteDevice(const DeleteDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceResponse rsp = DeleteDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceOutcome(rsp);
        else
            return DeleteDeviceOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteDeviceOutcomeCallable IotexplorerClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeviceOutcome()>>(
        [this, request]()
        {
            return this->DeleteDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteDevicesOutcome IotexplorerClient::DeleteDevices(const DeleteDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDevicesResponse rsp = DeleteDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDevicesOutcome(rsp);
        else
            return DeleteDevicesOutcome(o.GetError());
    }
    else
    {
        return DeleteDevicesOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteDevicesAsync(const DeleteDevicesRequest& request, const DeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteDevicesOutcomeCallable IotexplorerClient::DeleteDevicesCallable(const DeleteDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDevicesOutcome()>>(
        [this, request]()
        {
            return this->DeleteDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteFenceBindOutcome IotexplorerClient::DeleteFenceBind(const DeleteFenceBindRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFenceBind");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFenceBindResponse rsp = DeleteFenceBindResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFenceBindOutcome(rsp);
        else
            return DeleteFenceBindOutcome(o.GetError());
    }
    else
    {
        return DeleteFenceBindOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteFenceBindAsync(const DeleteFenceBindRequest& request, const DeleteFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFenceBind(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteFenceBindOutcomeCallable IotexplorerClient::DeleteFenceBindCallable(const DeleteFenceBindRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFenceBindOutcome()>>(
        [this, request]()
        {
            return this->DeleteFenceBind(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteLoRaFrequencyOutcome IotexplorerClient::DeleteLoRaFrequency(const DeleteLoRaFrequencyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoRaFrequency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoRaFrequencyResponse rsp = DeleteLoRaFrequencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoRaFrequencyOutcome(rsp);
        else
            return DeleteLoRaFrequencyOutcome(o.GetError());
    }
    else
    {
        return DeleteLoRaFrequencyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteLoRaFrequencyAsync(const DeleteLoRaFrequencyRequest& request, const DeleteLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoRaFrequency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteLoRaFrequencyOutcomeCallable IotexplorerClient::DeleteLoRaFrequencyCallable(const DeleteLoRaFrequencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoRaFrequencyOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoRaFrequency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteLoRaGatewayOutcome IotexplorerClient::DeleteLoRaGateway(const DeleteLoRaGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoRaGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoRaGatewayResponse rsp = DeleteLoRaGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoRaGatewayOutcome(rsp);
        else
            return DeleteLoRaGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteLoRaGatewayOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteLoRaGatewayAsync(const DeleteLoRaGatewayRequest& request, const DeleteLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoRaGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteLoRaGatewayOutcomeCallable IotexplorerClient::DeleteLoRaGatewayCallable(const DeleteLoRaGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoRaGatewayOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoRaGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeletePositionFenceOutcome IotexplorerClient::DeletePositionFence(const DeletePositionFenceRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePositionFence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePositionFenceResponse rsp = DeletePositionFenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePositionFenceOutcome(rsp);
        else
            return DeletePositionFenceOutcome(o.GetError());
    }
    else
    {
        return DeletePositionFenceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeletePositionFenceAsync(const DeletePositionFenceRequest& request, const DeletePositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePositionFence(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeletePositionFenceOutcomeCallable IotexplorerClient::DeletePositionFenceCallable(const DeletePositionFenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePositionFenceOutcome()>>(
        [this, request]()
        {
            return this->DeletePositionFence(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeletePositionSpaceOutcome IotexplorerClient::DeletePositionSpace(const DeletePositionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePositionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePositionSpaceResponse rsp = DeletePositionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePositionSpaceOutcome(rsp);
        else
            return DeletePositionSpaceOutcome(o.GetError());
    }
    else
    {
        return DeletePositionSpaceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeletePositionSpaceAsync(const DeletePositionSpaceRequest& request, const DeletePositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePositionSpace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeletePositionSpaceOutcomeCallable IotexplorerClient::DeletePositionSpaceCallable(const DeletePositionSpaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePositionSpaceOutcome()>>(
        [this, request]()
        {
            return this->DeletePositionSpace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteProjectOutcome IotexplorerClient::DeleteProject(const DeleteProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectResponse rsp = DeleteProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectOutcome(rsp);
        else
            return DeleteProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteProjectOutcomeCallable IotexplorerClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
        [this, request]()
        {
            return this->DeleteProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteStudioProductOutcome IotexplorerClient::DeleteStudioProduct(const DeleteStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStudioProductResponse rsp = DeleteStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStudioProductOutcome(rsp);
        else
            return DeleteStudioProductOutcome(o.GetError());
    }
    else
    {
        return DeleteStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteStudioProductAsync(const DeleteStudioProductRequest& request, const DeleteStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteStudioProductOutcomeCallable IotexplorerClient::DeleteStudioProductCallable(const DeleteStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStudioProductOutcome()>>(
        [this, request]()
        {
            return this->DeleteStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteTopicPolicyOutcome IotexplorerClient::DeleteTopicPolicy(const DeleteTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicPolicyResponse rsp = DeleteTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicPolicyOutcome(rsp);
        else
            return DeleteTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicPolicyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteTopicPolicyAsync(const DeleteTopicPolicyRequest& request, const DeleteTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopicPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteTopicPolicyOutcomeCallable IotexplorerClient::DeleteTopicPolicyCallable(const DeleteTopicPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTopicPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteTopicPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DeleteTopicRuleOutcome IotexplorerClient::DeleteTopicRule(const DeleteTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicRuleResponse rsp = DeleteTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicRuleOutcome(rsp);
        else
            return DeleteTopicRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicRuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DeleteTopicRuleAsync(const DeleteTopicRuleRequest& request, const DeleteTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DeleteTopicRuleOutcomeCallable IotexplorerClient::DeleteTopicRuleCallable(const DeleteTopicRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTopicRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteTopicRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeBatchProductionOutcome IotexplorerClient::DescribeBatchProduction(const DescribeBatchProductionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchProduction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchProductionResponse rsp = DescribeBatchProductionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchProductionOutcome(rsp);
        else
            return DescribeBatchProductionOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchProductionOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeBatchProductionAsync(const DescribeBatchProductionRequest& request, const DescribeBatchProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchProduction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeBatchProductionOutcomeCallable IotexplorerClient::DescribeBatchProductionCallable(const DescribeBatchProductionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchProductionOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchProduction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeBindedProductsOutcome IotexplorerClient::DescribeBindedProducts(const DescribeBindedProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindedProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindedProductsResponse rsp = DescribeBindedProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindedProductsOutcome(rsp);
        else
            return DescribeBindedProductsOutcome(o.GetError());
    }
    else
    {
        return DescribeBindedProductsOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeBindedProductsAsync(const DescribeBindedProductsRequest& request, const DescribeBindedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindedProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeBindedProductsOutcomeCallable IotexplorerClient::DescribeBindedProductsCallable(const DescribeBindedProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindedProductsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindedProducts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeDeviceOutcome IotexplorerClient::DescribeDevice(const DescribeDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceResponse rsp = DescribeDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceOutcome(rsp);
        else
            return DescribeDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeDeviceOutcomeCallable IotexplorerClient::DescribeDeviceCallable(const DescribeDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeDeviceBindGatewayOutcome IotexplorerClient::DescribeDeviceBindGateway(const DescribeDeviceBindGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceBindGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceBindGatewayResponse rsp = DescribeDeviceBindGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceBindGatewayOutcome(rsp);
        else
            return DescribeDeviceBindGatewayOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceBindGatewayOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceBindGatewayAsync(const DescribeDeviceBindGatewayRequest& request, const DescribeDeviceBindGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceBindGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeDeviceBindGatewayOutcomeCallable IotexplorerClient::DescribeDeviceBindGatewayCallable(const DescribeDeviceBindGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceBindGatewayOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceBindGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeDeviceDataOutcome IotexplorerClient::DescribeDeviceData(const DescribeDeviceDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceDataResponse rsp = DescribeDeviceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceDataOutcome(rsp);
        else
            return DescribeDeviceDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceDataOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceDataAsync(const DescribeDeviceDataRequest& request, const DescribeDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeDeviceDataOutcomeCallable IotexplorerClient::DescribeDeviceDataCallable(const DescribeDeviceDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeDeviceDataHistoryOutcome IotexplorerClient::DescribeDeviceDataHistory(const DescribeDeviceDataHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceDataHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceDataHistoryResponse rsp = DescribeDeviceDataHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceDataHistoryOutcome(rsp);
        else
            return DescribeDeviceDataHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceDataHistoryOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceDataHistoryAsync(const DescribeDeviceDataHistoryRequest& request, const DescribeDeviceDataHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceDataHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeDeviceDataHistoryOutcomeCallable IotexplorerClient::DescribeDeviceDataHistoryCallable(const DescribeDeviceDataHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceDataHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceDataHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeDeviceFirmWareOutcome IotexplorerClient::DescribeDeviceFirmWare(const DescribeDeviceFirmWareRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceFirmWare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceFirmWareResponse rsp = DescribeDeviceFirmWareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceFirmWareOutcome(rsp);
        else
            return DescribeDeviceFirmWareOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceFirmWareOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceFirmWareAsync(const DescribeDeviceFirmWareRequest& request, const DescribeDeviceFirmWareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceFirmWare(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeDeviceFirmWareOutcomeCallable IotexplorerClient::DescribeDeviceFirmWareCallable(const DescribeDeviceFirmWareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceFirmWareOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceFirmWare(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeDeviceLocationSolveOutcome IotexplorerClient::DescribeDeviceLocationSolve(const DescribeDeviceLocationSolveRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceLocationSolve");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceLocationSolveResponse rsp = DescribeDeviceLocationSolveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceLocationSolveOutcome(rsp);
        else
            return DescribeDeviceLocationSolveOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceLocationSolveOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDeviceLocationSolveAsync(const DescribeDeviceLocationSolveRequest& request, const DescribeDeviceLocationSolveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceLocationSolve(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeDeviceLocationSolveOutcomeCallable IotexplorerClient::DescribeDeviceLocationSolveCallable(const DescribeDeviceLocationSolveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceLocationSolveOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceLocationSolve(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeDevicePositionListOutcome IotexplorerClient::DescribeDevicePositionList(const DescribeDevicePositionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevicePositionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicePositionListResponse rsp = DescribeDevicePositionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicePositionListOutcome(rsp);
        else
            return DescribeDevicePositionListOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicePositionListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeDevicePositionListAsync(const DescribeDevicePositionListRequest& request, const DescribeDevicePositionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevicePositionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeDevicePositionListOutcomeCallable IotexplorerClient::DescribeDevicePositionListCallable(const DescribeDevicePositionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicePositionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevicePositionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeFenceBindListOutcome IotexplorerClient::DescribeFenceBindList(const DescribeFenceBindListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFenceBindList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFenceBindListResponse rsp = DescribeFenceBindListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFenceBindListOutcome(rsp);
        else
            return DescribeFenceBindListOutcome(o.GetError());
    }
    else
    {
        return DescribeFenceBindListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeFenceBindListAsync(const DescribeFenceBindListRequest& request, const DescribeFenceBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFenceBindList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeFenceBindListOutcomeCallable IotexplorerClient::DescribeFenceBindListCallable(const DescribeFenceBindListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFenceBindListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFenceBindList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeFenceEventListOutcome IotexplorerClient::DescribeFenceEventList(const DescribeFenceEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFenceEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFenceEventListResponse rsp = DescribeFenceEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFenceEventListOutcome(rsp);
        else
            return DescribeFenceEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeFenceEventListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeFenceEventListAsync(const DescribeFenceEventListRequest& request, const DescribeFenceEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFenceEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeFenceEventListOutcomeCallable IotexplorerClient::DescribeFenceEventListCallable(const DescribeFenceEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFenceEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFenceEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeFirmwareTaskOutcome IotexplorerClient::DescribeFirmwareTask(const DescribeFirmwareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareTaskResponse rsp = DescribeFirmwareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareTaskOutcome(rsp);
        else
            return DescribeFirmwareTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareTaskOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeFirmwareTaskAsync(const DescribeFirmwareTaskRequest& request, const DescribeFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeFirmwareTaskOutcomeCallable IotexplorerClient::DescribeFirmwareTaskCallable(const DescribeFirmwareTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFirmwareTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeFirmwareTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeGatewayBindDevicesOutcome IotexplorerClient::DescribeGatewayBindDevices(const DescribeGatewayBindDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayBindDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayBindDevicesResponse rsp = DescribeGatewayBindDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayBindDevicesOutcome(rsp);
        else
            return DescribeGatewayBindDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayBindDevicesOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeGatewayBindDevicesAsync(const DescribeGatewayBindDevicesRequest& request, const DescribeGatewayBindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayBindDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeGatewayBindDevicesOutcomeCallable IotexplorerClient::DescribeGatewayBindDevicesCallable(const DescribeGatewayBindDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayBindDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayBindDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeGatewaySubDeviceListOutcome IotexplorerClient::DescribeGatewaySubDeviceList(const DescribeGatewaySubDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewaySubDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewaySubDeviceListResponse rsp = DescribeGatewaySubDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewaySubDeviceListOutcome(rsp);
        else
            return DescribeGatewaySubDeviceListOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewaySubDeviceListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeGatewaySubDeviceListAsync(const DescribeGatewaySubDeviceListRequest& request, const DescribeGatewaySubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewaySubDeviceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeGatewaySubDeviceListOutcomeCallable IotexplorerClient::DescribeGatewaySubDeviceListCallable(const DescribeGatewaySubDeviceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewaySubDeviceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewaySubDeviceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeGatewaySubProductsOutcome IotexplorerClient::DescribeGatewaySubProducts(const DescribeGatewaySubProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewaySubProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewaySubProductsResponse rsp = DescribeGatewaySubProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewaySubProductsOutcome(rsp);
        else
            return DescribeGatewaySubProductsOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewaySubProductsOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeGatewaySubProductsAsync(const DescribeGatewaySubProductsRequest& request, const DescribeGatewaySubProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewaySubProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeGatewaySubProductsOutcomeCallable IotexplorerClient::DescribeGatewaySubProductsCallable(const DescribeGatewaySubProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewaySubProductsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewaySubProducts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeInstanceOutcome IotexplorerClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeInstanceOutcomeCallable IotexplorerClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeLoRaFrequencyOutcome IotexplorerClient::DescribeLoRaFrequency(const DescribeLoRaFrequencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoRaFrequency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoRaFrequencyResponse rsp = DescribeLoRaFrequencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoRaFrequencyOutcome(rsp);
        else
            return DescribeLoRaFrequencyOutcome(o.GetError());
    }
    else
    {
        return DescribeLoRaFrequencyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeLoRaFrequencyAsync(const DescribeLoRaFrequencyRequest& request, const DescribeLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoRaFrequency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeLoRaFrequencyOutcomeCallable IotexplorerClient::DescribeLoRaFrequencyCallable(const DescribeLoRaFrequencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoRaFrequencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoRaFrequency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeModelDefinitionOutcome IotexplorerClient::DescribeModelDefinition(const DescribeModelDefinitionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelDefinition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelDefinitionResponse rsp = DescribeModelDefinitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelDefinitionOutcome(rsp);
        else
            return DescribeModelDefinitionOutcome(o.GetError());
    }
    else
    {
        return DescribeModelDefinitionOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeModelDefinitionAsync(const DescribeModelDefinitionRequest& request, const DescribeModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelDefinition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeModelDefinitionOutcomeCallable IotexplorerClient::DescribeModelDefinitionCallable(const DescribeModelDefinitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelDefinitionOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelDefinition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribePositionFenceListOutcome IotexplorerClient::DescribePositionFenceList(const DescribePositionFenceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePositionFenceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePositionFenceListResponse rsp = DescribePositionFenceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePositionFenceListOutcome(rsp);
        else
            return DescribePositionFenceListOutcome(o.GetError());
    }
    else
    {
        return DescribePositionFenceListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribePositionFenceListAsync(const DescribePositionFenceListRequest& request, const DescribePositionFenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePositionFenceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribePositionFenceListOutcomeCallable IotexplorerClient::DescribePositionFenceListCallable(const DescribePositionFenceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePositionFenceListOutcome()>>(
        [this, request]()
        {
            return this->DescribePositionFenceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeProjectOutcome IotexplorerClient::DescribeProject(const DescribeProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectResponse rsp = DescribeProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectOutcome(rsp);
        else
            return DescribeProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeProjectOutcomeCallable IotexplorerClient::DescribeProjectCallable(const DescribeProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeSpaceFenceEventListOutcome IotexplorerClient::DescribeSpaceFenceEventList(const DescribeSpaceFenceEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceFenceEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceFenceEventListResponse rsp = DescribeSpaceFenceEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceFenceEventListOutcome(rsp);
        else
            return DescribeSpaceFenceEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceFenceEventListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeSpaceFenceEventListAsync(const DescribeSpaceFenceEventListRequest& request, const DescribeSpaceFenceEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpaceFenceEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeSpaceFenceEventListOutcomeCallable IotexplorerClient::DescribeSpaceFenceEventListCallable(const DescribeSpaceFenceEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpaceFenceEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpaceFenceEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeStudioProductOutcome IotexplorerClient::DescribeStudioProduct(const DescribeStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStudioProductResponse rsp = DescribeStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStudioProductOutcome(rsp);
        else
            return DescribeStudioProductOutcome(o.GetError());
    }
    else
    {
        return DescribeStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeStudioProductAsync(const DescribeStudioProductRequest& request, const DescribeStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeStudioProductOutcomeCallable IotexplorerClient::DescribeStudioProductCallable(const DescribeStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStudioProductOutcome()>>(
        [this, request]()
        {
            return this->DescribeStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeTopicPolicyOutcome IotexplorerClient::DescribeTopicPolicy(const DescribeTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicPolicyResponse rsp = DescribeTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicPolicyOutcome(rsp);
        else
            return DescribeTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicPolicyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeTopicPolicyAsync(const DescribeTopicPolicyRequest& request, const DescribeTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeTopicPolicyOutcomeCallable IotexplorerClient::DescribeTopicPolicyCallable(const DescribeTopicPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DescribeTopicRuleOutcome IotexplorerClient::DescribeTopicRule(const DescribeTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicRuleResponse rsp = DescribeTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicRuleOutcome(rsp);
        else
            return DescribeTopicRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicRuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DescribeTopicRuleAsync(const DescribeTopicRuleRequest& request, const DescribeTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DescribeTopicRuleOutcomeCallable IotexplorerClient::DescribeTopicRuleCallable(const DescribeTopicRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DirectBindDeviceInFamilyOutcome IotexplorerClient::DirectBindDeviceInFamily(const DirectBindDeviceInFamilyRequest &request)
{
    auto outcome = MakeRequest(request, "DirectBindDeviceInFamily");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DirectBindDeviceInFamilyResponse rsp = DirectBindDeviceInFamilyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DirectBindDeviceInFamilyOutcome(rsp);
        else
            return DirectBindDeviceInFamilyOutcome(o.GetError());
    }
    else
    {
        return DirectBindDeviceInFamilyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DirectBindDeviceInFamilyAsync(const DirectBindDeviceInFamilyRequest& request, const DirectBindDeviceInFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DirectBindDeviceInFamily(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DirectBindDeviceInFamilyOutcomeCallable IotexplorerClient::DirectBindDeviceInFamilyCallable(const DirectBindDeviceInFamilyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DirectBindDeviceInFamilyOutcome()>>(
        [this, request]()
        {
            return this->DirectBindDeviceInFamily(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::DisableTopicRuleOutcome IotexplorerClient::DisableTopicRule(const DisableTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DisableTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableTopicRuleResponse rsp = DisableTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableTopicRuleOutcome(rsp);
        else
            return DisableTopicRuleOutcome(o.GetError());
    }
    else
    {
        return DisableTopicRuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::DisableTopicRuleAsync(const DisableTopicRuleRequest& request, const DisableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::DisableTopicRuleOutcomeCallable IotexplorerClient::DisableTopicRuleCallable(const DisableTopicRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableTopicRuleOutcome()>>(
        [this, request]()
        {
            return this->DisableTopicRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::EnableTopicRuleOutcome IotexplorerClient::EnableTopicRule(const EnableTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EnableTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableTopicRuleResponse rsp = EnableTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableTopicRuleOutcome(rsp);
        else
            return EnableTopicRuleOutcome(o.GetError());
    }
    else
    {
        return EnableTopicRuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::EnableTopicRuleAsync(const EnableTopicRuleRequest& request, const EnableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::EnableTopicRuleOutcomeCallable IotexplorerClient::EnableTopicRuleCallable(const EnableTopicRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableTopicRuleOutcome()>>(
        [this, request]()
        {
            return this->EnableTopicRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GenSingleDeviceSignatureOfPublicOutcome IotexplorerClient::GenSingleDeviceSignatureOfPublic(const GenSingleDeviceSignatureOfPublicRequest &request)
{
    auto outcome = MakeRequest(request, "GenSingleDeviceSignatureOfPublic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenSingleDeviceSignatureOfPublicResponse rsp = GenSingleDeviceSignatureOfPublicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenSingleDeviceSignatureOfPublicOutcome(rsp);
        else
            return GenSingleDeviceSignatureOfPublicOutcome(o.GetError());
    }
    else
    {
        return GenSingleDeviceSignatureOfPublicOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GenSingleDeviceSignatureOfPublicAsync(const GenSingleDeviceSignatureOfPublicRequest& request, const GenSingleDeviceSignatureOfPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenSingleDeviceSignatureOfPublic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GenSingleDeviceSignatureOfPublicOutcomeCallable IotexplorerClient::GenSingleDeviceSignatureOfPublicCallable(const GenSingleDeviceSignatureOfPublicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenSingleDeviceSignatureOfPublicOutcome()>>(
        [this, request]()
        {
            return this->GenSingleDeviceSignatureOfPublic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetBatchProductionsListOutcome IotexplorerClient::GetBatchProductionsList(const GetBatchProductionsListRequest &request)
{
    auto outcome = MakeRequest(request, "GetBatchProductionsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBatchProductionsListResponse rsp = GetBatchProductionsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBatchProductionsListOutcome(rsp);
        else
            return GetBatchProductionsListOutcome(o.GetError());
    }
    else
    {
        return GetBatchProductionsListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetBatchProductionsListAsync(const GetBatchProductionsListRequest& request, const GetBatchProductionsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBatchProductionsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetBatchProductionsListOutcomeCallable IotexplorerClient::GetBatchProductionsListCallable(const GetBatchProductionsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBatchProductionsListOutcome()>>(
        [this, request]()
        {
            return this->GetBatchProductionsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetCOSURLOutcome IotexplorerClient::GetCOSURL(const GetCOSURLRequest &request)
{
    auto outcome = MakeRequest(request, "GetCOSURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCOSURLResponse rsp = GetCOSURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCOSURLOutcome(rsp);
        else
            return GetCOSURLOutcome(o.GetError());
    }
    else
    {
        return GetCOSURLOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetCOSURLAsync(const GetCOSURLRequest& request, const GetCOSURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCOSURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetCOSURLOutcomeCallable IotexplorerClient::GetCOSURLCallable(const GetCOSURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCOSURLOutcome()>>(
        [this, request]()
        {
            return this->GetCOSURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetDeviceListOutcome IotexplorerClient::GetDeviceList(const GetDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceListResponse rsp = GetDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceListOutcome(rsp);
        else
            return GetDeviceListOutcome(o.GetError());
    }
    else
    {
        return GetDeviceListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetDeviceListAsync(const GetDeviceListRequest& request, const GetDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeviceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetDeviceListOutcomeCallable IotexplorerClient::GetDeviceListCallable(const GetDeviceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceListOutcome()>>(
        [this, request]()
        {
            return this->GetDeviceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetDeviceLocationHistoryOutcome IotexplorerClient::GetDeviceLocationHistory(const GetDeviceLocationHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceLocationHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceLocationHistoryResponse rsp = GetDeviceLocationHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceLocationHistoryOutcome(rsp);
        else
            return GetDeviceLocationHistoryOutcome(o.GetError());
    }
    else
    {
        return GetDeviceLocationHistoryOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetDeviceLocationHistoryAsync(const GetDeviceLocationHistoryRequest& request, const GetDeviceLocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeviceLocationHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetDeviceLocationHistoryOutcomeCallable IotexplorerClient::GetDeviceLocationHistoryCallable(const GetDeviceLocationHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceLocationHistoryOutcome()>>(
        [this, request]()
        {
            return this->GetDeviceLocationHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetDeviceSumStatisticsOutcome IotexplorerClient::GetDeviceSumStatistics(const GetDeviceSumStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceSumStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceSumStatisticsResponse rsp = GetDeviceSumStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceSumStatisticsOutcome(rsp);
        else
            return GetDeviceSumStatisticsOutcome(o.GetError());
    }
    else
    {
        return GetDeviceSumStatisticsOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetDeviceSumStatisticsAsync(const GetDeviceSumStatisticsRequest& request, const GetDeviceSumStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeviceSumStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetDeviceSumStatisticsOutcomeCallable IotexplorerClient::GetDeviceSumStatisticsCallable(const GetDeviceSumStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceSumStatisticsOutcome()>>(
        [this, request]()
        {
            return this->GetDeviceSumStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetFamilyDeviceUserListOutcome IotexplorerClient::GetFamilyDeviceUserList(const GetFamilyDeviceUserListRequest &request)
{
    auto outcome = MakeRequest(request, "GetFamilyDeviceUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFamilyDeviceUserListResponse rsp = GetFamilyDeviceUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFamilyDeviceUserListOutcome(rsp);
        else
            return GetFamilyDeviceUserListOutcome(o.GetError());
    }
    else
    {
        return GetFamilyDeviceUserListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetFamilyDeviceUserListAsync(const GetFamilyDeviceUserListRequest& request, const GetFamilyDeviceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFamilyDeviceUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetFamilyDeviceUserListOutcomeCallable IotexplorerClient::GetFamilyDeviceUserListCallable(const GetFamilyDeviceUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFamilyDeviceUserListOutcome()>>(
        [this, request]()
        {
            return this->GetFamilyDeviceUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetGatewaySubDeviceListOutcome IotexplorerClient::GetGatewaySubDeviceList(const GetGatewaySubDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetGatewaySubDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGatewaySubDeviceListResponse rsp = GetGatewaySubDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGatewaySubDeviceListOutcome(rsp);
        else
            return GetGatewaySubDeviceListOutcome(o.GetError());
    }
    else
    {
        return GetGatewaySubDeviceListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetGatewaySubDeviceListAsync(const GetGatewaySubDeviceListRequest& request, const GetGatewaySubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGatewaySubDeviceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetGatewaySubDeviceListOutcomeCallable IotexplorerClient::GetGatewaySubDeviceListCallable(const GetGatewaySubDeviceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetGatewaySubDeviceListOutcome()>>(
        [this, request]()
        {
            return this->GetGatewaySubDeviceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetLoRaGatewayListOutcome IotexplorerClient::GetLoRaGatewayList(const GetLoRaGatewayListRequest &request)
{
    auto outcome = MakeRequest(request, "GetLoRaGatewayList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLoRaGatewayListResponse rsp = GetLoRaGatewayListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLoRaGatewayListOutcome(rsp);
        else
            return GetLoRaGatewayListOutcome(o.GetError());
    }
    else
    {
        return GetLoRaGatewayListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetLoRaGatewayListAsync(const GetLoRaGatewayListRequest& request, const GetLoRaGatewayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLoRaGatewayList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetLoRaGatewayListOutcomeCallable IotexplorerClient::GetLoRaGatewayListCallable(const GetLoRaGatewayListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLoRaGatewayListOutcome()>>(
        [this, request]()
        {
            return this->GetLoRaGatewayList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetPositionSpaceListOutcome IotexplorerClient::GetPositionSpaceList(const GetPositionSpaceListRequest &request)
{
    auto outcome = MakeRequest(request, "GetPositionSpaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPositionSpaceListResponse rsp = GetPositionSpaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPositionSpaceListOutcome(rsp);
        else
            return GetPositionSpaceListOutcome(o.GetError());
    }
    else
    {
        return GetPositionSpaceListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetPositionSpaceListAsync(const GetPositionSpaceListRequest& request, const GetPositionSpaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPositionSpaceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetPositionSpaceListOutcomeCallable IotexplorerClient::GetPositionSpaceListCallable(const GetPositionSpaceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPositionSpaceListOutcome()>>(
        [this, request]()
        {
            return this->GetPositionSpaceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetProjectListOutcome IotexplorerClient::GetProjectList(const GetProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "GetProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProjectListResponse rsp = GetProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProjectListOutcome(rsp);
        else
            return GetProjectListOutcome(o.GetError());
    }
    else
    {
        return GetProjectListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetProjectListAsync(const GetProjectListRequest& request, const GetProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetProjectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetProjectListOutcomeCallable IotexplorerClient::GetProjectListCallable(const GetProjectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetProjectListOutcome()>>(
        [this, request]()
        {
            return this->GetProjectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetStudioProductListOutcome IotexplorerClient::GetStudioProductList(const GetStudioProductListRequest &request)
{
    auto outcome = MakeRequest(request, "GetStudioProductList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetStudioProductListResponse rsp = GetStudioProductListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetStudioProductListOutcome(rsp);
        else
            return GetStudioProductListOutcome(o.GetError());
    }
    else
    {
        return GetStudioProductListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetStudioProductListAsync(const GetStudioProductListRequest& request, const GetStudioProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetStudioProductList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetStudioProductListOutcomeCallable IotexplorerClient::GetStudioProductListCallable(const GetStudioProductListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetStudioProductListOutcome()>>(
        [this, request]()
        {
            return this->GetStudioProductList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::GetTopicRuleListOutcome IotexplorerClient::GetTopicRuleList(const GetTopicRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "GetTopicRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTopicRuleListResponse rsp = GetTopicRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTopicRuleListOutcome(rsp);
        else
            return GetTopicRuleListOutcome(o.GetError());
    }
    else
    {
        return GetTopicRuleListOutcome(outcome.GetError());
    }
}

void IotexplorerClient::GetTopicRuleListAsync(const GetTopicRuleListRequest& request, const GetTopicRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTopicRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::GetTopicRuleListOutcomeCallable IotexplorerClient::GetTopicRuleListCallable(const GetTopicRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTopicRuleListOutcome()>>(
        [this, request]()
        {
            return this->GetTopicRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ListEventHistoryOutcome IotexplorerClient::ListEventHistory(const ListEventHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "ListEventHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEventHistoryResponse rsp = ListEventHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEventHistoryOutcome(rsp);
        else
            return ListEventHistoryOutcome(o.GetError());
    }
    else
    {
        return ListEventHistoryOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ListEventHistoryAsync(const ListEventHistoryRequest& request, const ListEventHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListEventHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ListEventHistoryOutcomeCallable IotexplorerClient::ListEventHistoryCallable(const ListEventHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListEventHistoryOutcome()>>(
        [this, request]()
        {
            return this->ListEventHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ListFirmwaresOutcome IotexplorerClient::ListFirmwares(const ListFirmwaresRequest &request)
{
    auto outcome = MakeRequest(request, "ListFirmwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListFirmwaresResponse rsp = ListFirmwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListFirmwaresOutcome(rsp);
        else
            return ListFirmwaresOutcome(o.GetError());
    }
    else
    {
        return ListFirmwaresOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ListFirmwaresAsync(const ListFirmwaresRequest& request, const ListFirmwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListFirmwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ListFirmwaresOutcomeCallable IotexplorerClient::ListFirmwaresCallable(const ListFirmwaresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListFirmwaresOutcome()>>(
        [this, request]()
        {
            return this->ListFirmwares(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ListTopicPolicyOutcome IotexplorerClient::ListTopicPolicy(const ListTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopicPolicyResponse rsp = ListTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopicPolicyOutcome(rsp);
        else
            return ListTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return ListTopicPolicyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ListTopicPolicyAsync(const ListTopicPolicyRequest& request, const ListTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTopicPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ListTopicPolicyOutcomeCallable IotexplorerClient::ListTopicPolicyCallable(const ListTopicPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTopicPolicyOutcome()>>(
        [this, request]()
        {
            return this->ListTopicPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyFenceBindOutcome IotexplorerClient::ModifyFenceBind(const ModifyFenceBindRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFenceBind");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFenceBindResponse rsp = ModifyFenceBindResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFenceBindOutcome(rsp);
        else
            return ModifyFenceBindOutcome(o.GetError());
    }
    else
    {
        return ModifyFenceBindOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyFenceBindAsync(const ModifyFenceBindRequest& request, const ModifyFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFenceBind(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyFenceBindOutcomeCallable IotexplorerClient::ModifyFenceBindCallable(const ModifyFenceBindRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFenceBindOutcome()>>(
        [this, request]()
        {
            return this->ModifyFenceBind(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyLoRaFrequencyOutcome IotexplorerClient::ModifyLoRaFrequency(const ModifyLoRaFrequencyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoRaFrequency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoRaFrequencyResponse rsp = ModifyLoRaFrequencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoRaFrequencyOutcome(rsp);
        else
            return ModifyLoRaFrequencyOutcome(o.GetError());
    }
    else
    {
        return ModifyLoRaFrequencyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyLoRaFrequencyAsync(const ModifyLoRaFrequencyRequest& request, const ModifyLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoRaFrequency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyLoRaFrequencyOutcomeCallable IotexplorerClient::ModifyLoRaFrequencyCallable(const ModifyLoRaFrequencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoRaFrequencyOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoRaFrequency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyLoRaGatewayOutcome IotexplorerClient::ModifyLoRaGateway(const ModifyLoRaGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoRaGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoRaGatewayResponse rsp = ModifyLoRaGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoRaGatewayOutcome(rsp);
        else
            return ModifyLoRaGatewayOutcome(o.GetError());
    }
    else
    {
        return ModifyLoRaGatewayOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyLoRaGatewayAsync(const ModifyLoRaGatewayRequest& request, const ModifyLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoRaGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyLoRaGatewayOutcomeCallable IotexplorerClient::ModifyLoRaGatewayCallable(const ModifyLoRaGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoRaGatewayOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoRaGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyModelDefinitionOutcome IotexplorerClient::ModifyModelDefinition(const ModifyModelDefinitionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModelDefinition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModelDefinitionResponse rsp = ModifyModelDefinitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModelDefinitionOutcome(rsp);
        else
            return ModifyModelDefinitionOutcome(o.GetError());
    }
    else
    {
        return ModifyModelDefinitionOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyModelDefinitionAsync(const ModifyModelDefinitionRequest& request, const ModifyModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModelDefinition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyModelDefinitionOutcomeCallable IotexplorerClient::ModifyModelDefinitionCallable(const ModifyModelDefinitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModelDefinitionOutcome()>>(
        [this, request]()
        {
            return this->ModifyModelDefinition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyPositionFenceOutcome IotexplorerClient::ModifyPositionFence(const ModifyPositionFenceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPositionFence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPositionFenceResponse rsp = ModifyPositionFenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPositionFenceOutcome(rsp);
        else
            return ModifyPositionFenceOutcome(o.GetError());
    }
    else
    {
        return ModifyPositionFenceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyPositionFenceAsync(const ModifyPositionFenceRequest& request, const ModifyPositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPositionFence(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyPositionFenceOutcomeCallable IotexplorerClient::ModifyPositionFenceCallable(const ModifyPositionFenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPositionFenceOutcome()>>(
        [this, request]()
        {
            return this->ModifyPositionFence(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyPositionSpaceOutcome IotexplorerClient::ModifyPositionSpace(const ModifyPositionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPositionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPositionSpaceResponse rsp = ModifyPositionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPositionSpaceOutcome(rsp);
        else
            return ModifyPositionSpaceOutcome(o.GetError());
    }
    else
    {
        return ModifyPositionSpaceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyPositionSpaceAsync(const ModifyPositionSpaceRequest& request, const ModifyPositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPositionSpace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyPositionSpaceOutcomeCallable IotexplorerClient::ModifyPositionSpaceCallable(const ModifyPositionSpaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPositionSpaceOutcome()>>(
        [this, request]()
        {
            return this->ModifyPositionSpace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyProjectOutcome IotexplorerClient::ModifyProject(const ModifyProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectResponse rsp = ModifyProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectOutcome(rsp);
        else
            return ModifyProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyProjectOutcomeCallable IotexplorerClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifySpacePropertyOutcome IotexplorerClient::ModifySpaceProperty(const ModifySpacePropertyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySpaceProperty");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySpacePropertyResponse rsp = ModifySpacePropertyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySpacePropertyOutcome(rsp);
        else
            return ModifySpacePropertyOutcome(o.GetError());
    }
    else
    {
        return ModifySpacePropertyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifySpacePropertyAsync(const ModifySpacePropertyRequest& request, const ModifySpacePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySpaceProperty(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifySpacePropertyOutcomeCallable IotexplorerClient::ModifySpacePropertyCallable(const ModifySpacePropertyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySpacePropertyOutcome()>>(
        [this, request]()
        {
            return this->ModifySpaceProperty(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyStudioProductOutcome IotexplorerClient::ModifyStudioProduct(const ModifyStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStudioProductResponse rsp = ModifyStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStudioProductOutcome(rsp);
        else
            return ModifyStudioProductOutcome(o.GetError());
    }
    else
    {
        return ModifyStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyStudioProductAsync(const ModifyStudioProductRequest& request, const ModifyStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyStudioProductOutcomeCallable IotexplorerClient::ModifyStudioProductCallable(const ModifyStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStudioProductOutcome()>>(
        [this, request]()
        {
            return this->ModifyStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyTopicPolicyOutcome IotexplorerClient::ModifyTopicPolicy(const ModifyTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicPolicyResponse rsp = ModifyTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicPolicyOutcome(rsp);
        else
            return ModifyTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicPolicyOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyTopicPolicyAsync(const ModifyTopicPolicyRequest& request, const ModifyTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopicPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyTopicPolicyOutcomeCallable IotexplorerClient::ModifyTopicPolicyCallable(const ModifyTopicPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTopicPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyTopicPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ModifyTopicRuleOutcome IotexplorerClient::ModifyTopicRule(const ModifyTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicRuleResponse rsp = ModifyTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicRuleOutcome(rsp);
        else
            return ModifyTopicRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicRuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ModifyTopicRuleAsync(const ModifyTopicRuleRequest& request, const ModifyTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ModifyTopicRuleOutcomeCallable IotexplorerClient::ModifyTopicRuleCallable(const ModifyTopicRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTopicRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyTopicRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::PublishBroadcastMessageOutcome IotexplorerClient::PublishBroadcastMessage(const PublishBroadcastMessageRequest &request)
{
    auto outcome = MakeRequest(request, "PublishBroadcastMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishBroadcastMessageResponse rsp = PublishBroadcastMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishBroadcastMessageOutcome(rsp);
        else
            return PublishBroadcastMessageOutcome(o.GetError());
    }
    else
    {
        return PublishBroadcastMessageOutcome(outcome.GetError());
    }
}

void IotexplorerClient::PublishBroadcastMessageAsync(const PublishBroadcastMessageRequest& request, const PublishBroadcastMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishBroadcastMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::PublishBroadcastMessageOutcomeCallable IotexplorerClient::PublishBroadcastMessageCallable(const PublishBroadcastMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishBroadcastMessageOutcome()>>(
        [this, request]()
        {
            return this->PublishBroadcastMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::PublishMessageOutcome IotexplorerClient::PublishMessage(const PublishMessageRequest &request)
{
    auto outcome = MakeRequest(request, "PublishMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishMessageResponse rsp = PublishMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishMessageOutcome(rsp);
        else
            return PublishMessageOutcome(o.GetError());
    }
    else
    {
        return PublishMessageOutcome(outcome.GetError());
    }
}

void IotexplorerClient::PublishMessageAsync(const PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::PublishMessageOutcomeCallable IotexplorerClient::PublishMessageCallable(const PublishMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishMessageOutcome()>>(
        [this, request]()
        {
            return this->PublishMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::PublishRRPCMessageOutcome IotexplorerClient::PublishRRPCMessage(const PublishRRPCMessageRequest &request)
{
    auto outcome = MakeRequest(request, "PublishRRPCMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishRRPCMessageResponse rsp = PublishRRPCMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishRRPCMessageOutcome(rsp);
        else
            return PublishRRPCMessageOutcome(o.GetError());
    }
    else
    {
        return PublishRRPCMessageOutcome(outcome.GetError());
    }
}

void IotexplorerClient::PublishRRPCMessageAsync(const PublishRRPCMessageRequest& request, const PublishRRPCMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishRRPCMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::PublishRRPCMessageOutcomeCallable IotexplorerClient::PublishRRPCMessageCallable(const PublishRRPCMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishRRPCMessageOutcome()>>(
        [this, request]()
        {
            return this->PublishRRPCMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::ReleaseStudioProductOutcome IotexplorerClient::ReleaseStudioProduct(const ReleaseStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseStudioProductResponse rsp = ReleaseStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseStudioProductOutcome(rsp);
        else
            return ReleaseStudioProductOutcome(o.GetError());
    }
    else
    {
        return ReleaseStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::ReleaseStudioProductAsync(const ReleaseStudioProductRequest& request, const ReleaseStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::ReleaseStudioProductOutcomeCallable IotexplorerClient::ReleaseStudioProductCallable(const ReleaseStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseStudioProductOutcome()>>(
        [this, request]()
        {
            return this->ReleaseStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::SearchPositionSpaceOutcome IotexplorerClient::SearchPositionSpace(const SearchPositionSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "SearchPositionSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchPositionSpaceResponse rsp = SearchPositionSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchPositionSpaceOutcome(rsp);
        else
            return SearchPositionSpaceOutcome(o.GetError());
    }
    else
    {
        return SearchPositionSpaceOutcome(outcome.GetError());
    }
}

void IotexplorerClient::SearchPositionSpaceAsync(const SearchPositionSpaceRequest& request, const SearchPositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchPositionSpace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::SearchPositionSpaceOutcomeCallable IotexplorerClient::SearchPositionSpaceCallable(const SearchPositionSpaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchPositionSpaceOutcome()>>(
        [this, request]()
        {
            return this->SearchPositionSpace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::SearchStudioProductOutcome IotexplorerClient::SearchStudioProduct(const SearchStudioProductRequest &request)
{
    auto outcome = MakeRequest(request, "SearchStudioProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchStudioProductResponse rsp = SearchStudioProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchStudioProductOutcome(rsp);
        else
            return SearchStudioProductOutcome(o.GetError());
    }
    else
    {
        return SearchStudioProductOutcome(outcome.GetError());
    }
}

void IotexplorerClient::SearchStudioProductAsync(const SearchStudioProductRequest& request, const SearchStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchStudioProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::SearchStudioProductOutcomeCallable IotexplorerClient::SearchStudioProductCallable(const SearchStudioProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchStudioProductOutcome()>>(
        [this, request]()
        {
            return this->SearchStudioProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::SearchTopicRuleOutcome IotexplorerClient::SearchTopicRule(const SearchTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "SearchTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchTopicRuleResponse rsp = SearchTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchTopicRuleOutcome(rsp);
        else
            return SearchTopicRuleOutcome(o.GetError());
    }
    else
    {
        return SearchTopicRuleOutcome(outcome.GetError());
    }
}

void IotexplorerClient::SearchTopicRuleAsync(const SearchTopicRuleRequest& request, const SearchTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::SearchTopicRuleOutcomeCallable IotexplorerClient::SearchTopicRuleCallable(const SearchTopicRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchTopicRuleOutcome()>>(
        [this, request]()
        {
            return this->SearchTopicRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::UnbindDevicesOutcome IotexplorerClient::UnbindDevices(const UnbindDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindDevicesResponse rsp = UnbindDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindDevicesOutcome(rsp);
        else
            return UnbindDevicesOutcome(o.GetError());
    }
    else
    {
        return UnbindDevicesOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UnbindDevicesAsync(const UnbindDevicesRequest& request, const UnbindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::UnbindDevicesOutcomeCallable IotexplorerClient::UnbindDevicesCallable(const UnbindDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindDevicesOutcome()>>(
        [this, request]()
        {
            return this->UnbindDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::UnbindProductsOutcome IotexplorerClient::UnbindProducts(const UnbindProductsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindProductsResponse rsp = UnbindProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindProductsOutcome(rsp);
        else
            return UnbindProductsOutcome(o.GetError());
    }
    else
    {
        return UnbindProductsOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UnbindProductsAsync(const UnbindProductsRequest& request, const UnbindProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::UnbindProductsOutcomeCallable IotexplorerClient::UnbindProductsCallable(const UnbindProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindProductsOutcome()>>(
        [this, request]()
        {
            return this->UnbindProducts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::UpdateDevicesEnableStateOutcome IotexplorerClient::UpdateDevicesEnableState(const UpdateDevicesEnableStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDevicesEnableState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDevicesEnableStateResponse rsp = UpdateDevicesEnableStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDevicesEnableStateOutcome(rsp);
        else
            return UpdateDevicesEnableStateOutcome(o.GetError());
    }
    else
    {
        return UpdateDevicesEnableStateOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UpdateDevicesEnableStateAsync(const UpdateDevicesEnableStateRequest& request, const UpdateDevicesEnableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDevicesEnableState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::UpdateDevicesEnableStateOutcomeCallable IotexplorerClient::UpdateDevicesEnableStateCallable(const UpdateDevicesEnableStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDevicesEnableStateOutcome()>>(
        [this, request]()
        {
            return this->UpdateDevicesEnableState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::UpdateFirmwareOutcome IotexplorerClient::UpdateFirmware(const UpdateFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFirmwareResponse rsp = UpdateFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFirmwareOutcome(rsp);
        else
            return UpdateFirmwareOutcome(o.GetError());
    }
    else
    {
        return UpdateFirmwareOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UpdateFirmwareAsync(const UpdateFirmwareRequest& request, const UpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::UpdateFirmwareOutcomeCallable IotexplorerClient::UpdateFirmwareCallable(const UpdateFirmwareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateFirmwareOutcome()>>(
        [this, request]()
        {
            return this->UpdateFirmware(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotexplorerClient::UploadFirmwareOutcome IotexplorerClient::UploadFirmware(const UploadFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFirmwareResponse rsp = UploadFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFirmwareOutcome(rsp);
        else
            return UploadFirmwareOutcome(o.GetError());
    }
    else
    {
        return UploadFirmwareOutcome(outcome.GetError());
    }
}

void IotexplorerClient::UploadFirmwareAsync(const UploadFirmwareRequest& request, const UploadFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotexplorerClient::UploadFirmwareOutcomeCallable IotexplorerClient::UploadFirmwareCallable(const UploadFirmwareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadFirmwareOutcome()>>(
        [this, request]()
        {
            return this->UploadFirmware(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


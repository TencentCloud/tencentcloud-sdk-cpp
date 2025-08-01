/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/iotcloud/v20180614/IotcloudClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotcloud::V20180614;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-14";
    const string ENDPOINT = "iotcloud.tencentcloudapi.com";
}

IotcloudClient::IotcloudClient(const Credential &credential, const string &region) :
    IotcloudClient(credential, region, ClientProfile())
{
}

IotcloudClient::IotcloudClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotcloudClient::BatchUpdateFirmwareOutcome IotcloudClient::BatchUpdateFirmware(const BatchUpdateFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "BatchUpdateFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchUpdateFirmwareResponse rsp = BatchUpdateFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchUpdateFirmwareOutcome(rsp);
        else
            return BatchUpdateFirmwareOutcome(o.GetError());
    }
    else
    {
        return BatchUpdateFirmwareOutcome(outcome.GetError());
    }
}

void IotcloudClient::BatchUpdateFirmwareAsync(const BatchUpdateFirmwareRequest& request, const BatchUpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchUpdateFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::BatchUpdateFirmwareOutcomeCallable IotcloudClient::BatchUpdateFirmwareCallable(const BatchUpdateFirmwareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchUpdateFirmwareOutcome()>>(
        [this, request]()
        {
            return this->BatchUpdateFirmware(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::BindDevicesOutcome IotcloudClient::BindDevices(const BindDevicesRequest &request)
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

void IotcloudClient::BindDevicesAsync(const BindDevicesRequest& request, const BindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::BindDevicesOutcomeCallable IotcloudClient::BindDevicesCallable(const BindDevicesRequest &request)
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

IotcloudClient::CancelDeviceFirmwareTaskOutcome IotcloudClient::CancelDeviceFirmwareTask(const CancelDeviceFirmwareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelDeviceFirmwareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelDeviceFirmwareTaskResponse rsp = CancelDeviceFirmwareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelDeviceFirmwareTaskOutcome(rsp);
        else
            return CancelDeviceFirmwareTaskOutcome(o.GetError());
    }
    else
    {
        return CancelDeviceFirmwareTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::CancelDeviceFirmwareTaskAsync(const CancelDeviceFirmwareTaskRequest& request, const CancelDeviceFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelDeviceFirmwareTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CancelDeviceFirmwareTaskOutcomeCallable IotcloudClient::CancelDeviceFirmwareTaskCallable(const CancelDeviceFirmwareTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelDeviceFirmwareTaskOutcome()>>(
        [this, request]()
        {
            return this->CancelDeviceFirmwareTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::CancelTaskOutcome IotcloudClient::CancelTask(const CancelTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelTaskResponse rsp = CancelTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelTaskOutcome(rsp);
        else
            return CancelTaskOutcome(o.GetError());
    }
    else
    {
        return CancelTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CancelTaskOutcomeCallable IotcloudClient::CancelTaskCallable(const CancelTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelTaskOutcome()>>(
        [this, request]()
        {
            return this->CancelTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::CreateDeviceOutcome IotcloudClient::CreateDevice(const CreateDeviceRequest &request)
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

void IotcloudClient::CreateDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateDeviceOutcomeCallable IotcloudClient::CreateDeviceCallable(const CreateDeviceRequest &request)
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

IotcloudClient::CreateLoraDeviceOutcome IotcloudClient::CreateLoraDevice(const CreateLoraDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoraDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoraDeviceResponse rsp = CreateLoraDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoraDeviceOutcome(rsp);
        else
            return CreateLoraDeviceOutcome(o.GetError());
    }
    else
    {
        return CreateLoraDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateLoraDeviceAsync(const CreateLoraDeviceRequest& request, const CreateLoraDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLoraDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateLoraDeviceOutcomeCallable IotcloudClient::CreateLoraDeviceCallable(const CreateLoraDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLoraDeviceOutcome()>>(
        [this, request]()
        {
            return this->CreateLoraDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::CreateMultiDeviceOutcome IotcloudClient::CreateMultiDevice(const CreateMultiDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultiDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultiDeviceResponse rsp = CreateMultiDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultiDeviceOutcome(rsp);
        else
            return CreateMultiDeviceOutcome(o.GetError());
    }
    else
    {
        return CreateMultiDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateMultiDeviceAsync(const CreateMultiDeviceRequest& request, const CreateMultiDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMultiDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateMultiDeviceOutcomeCallable IotcloudClient::CreateMultiDeviceCallable(const CreateMultiDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMultiDeviceOutcome()>>(
        [this, request]()
        {
            return this->CreateMultiDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::CreateMultiDevicesTaskOutcome IotcloudClient::CreateMultiDevicesTask(const CreateMultiDevicesTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultiDevicesTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultiDevicesTaskResponse rsp = CreateMultiDevicesTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultiDevicesTaskOutcome(rsp);
        else
            return CreateMultiDevicesTaskOutcome(o.GetError());
    }
    else
    {
        return CreateMultiDevicesTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateMultiDevicesTaskAsync(const CreateMultiDevicesTaskRequest& request, const CreateMultiDevicesTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMultiDevicesTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateMultiDevicesTaskOutcomeCallable IotcloudClient::CreateMultiDevicesTaskCallable(const CreateMultiDevicesTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMultiDevicesTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateMultiDevicesTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::CreateProductOutcome IotcloudClient::CreateProduct(const CreateProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProductResponse rsp = CreateProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProductOutcome(rsp);
        else
            return CreateProductOutcome(o.GetError());
    }
    else
    {
        return CreateProductOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateProductOutcomeCallable IotcloudClient::CreateProductCallable(const CreateProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProductOutcome()>>(
        [this, request]()
        {
            return this->CreateProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::CreateTaskOutcome IotcloudClient::CreateTask(const CreateTaskRequest &request)
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

void IotcloudClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateTaskOutcomeCallable IotcloudClient::CreateTaskCallable(const CreateTaskRequest &request)
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

IotcloudClient::CreateTaskFileUrlOutcome IotcloudClient::CreateTaskFileUrl(const CreateTaskFileUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskFileUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskFileUrlResponse rsp = CreateTaskFileUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskFileUrlOutcome(rsp);
        else
            return CreateTaskFileUrlOutcome(o.GetError());
    }
    else
    {
        return CreateTaskFileUrlOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateTaskFileUrlAsync(const CreateTaskFileUrlRequest& request, const CreateTaskFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskFileUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateTaskFileUrlOutcomeCallable IotcloudClient::CreateTaskFileUrlCallable(const CreateTaskFileUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskFileUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateTaskFileUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::CreateTopicPolicyOutcome IotcloudClient::CreateTopicPolicy(const CreateTopicPolicyRequest &request)
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

void IotcloudClient::CreateTopicPolicyAsync(const CreateTopicPolicyRequest& request, const CreateTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopicPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateTopicPolicyOutcomeCallable IotcloudClient::CreateTopicPolicyCallable(const CreateTopicPolicyRequest &request)
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

IotcloudClient::CreateTopicRuleOutcome IotcloudClient::CreateTopicRule(const CreateTopicRuleRequest &request)
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

void IotcloudClient::CreateTopicRuleAsync(const CreateTopicRuleRequest& request, const CreateTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateTopicRuleOutcomeCallable IotcloudClient::CreateTopicRuleCallable(const CreateTopicRuleRequest &request)
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

IotcloudClient::DeleteDeviceOutcome IotcloudClient::DeleteDevice(const DeleteDeviceRequest &request)
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

void IotcloudClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DeleteDeviceOutcomeCallable IotcloudClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
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

IotcloudClient::DeleteDeviceResourceOutcome IotcloudClient::DeleteDeviceResource(const DeleteDeviceResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceResourceResponse rsp = DeleteDeviceResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceResourceOutcome(rsp);
        else
            return DeleteDeviceResourceOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceResourceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteDeviceResourceAsync(const DeleteDeviceResourceRequest& request, const DeleteDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeviceResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DeleteDeviceResourceOutcomeCallable IotcloudClient::DeleteDeviceResourceCallable(const DeleteDeviceResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeviceResourceOutcome()>>(
        [this, request]()
        {
            return this->DeleteDeviceResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DeleteLoraDeviceOutcome IotcloudClient::DeleteLoraDevice(const DeleteLoraDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoraDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoraDeviceResponse rsp = DeleteLoraDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoraDeviceOutcome(rsp);
        else
            return DeleteLoraDeviceOutcome(o.GetError());
    }
    else
    {
        return DeleteLoraDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteLoraDeviceAsync(const DeleteLoraDeviceRequest& request, const DeleteLoraDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoraDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DeleteLoraDeviceOutcomeCallable IotcloudClient::DeleteLoraDeviceCallable(const DeleteLoraDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoraDeviceOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoraDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DeleteProductOutcome IotcloudClient::DeleteProduct(const DeleteProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProductResponse rsp = DeleteProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProductOutcome(rsp);
        else
            return DeleteProductOutcome(o.GetError());
    }
    else
    {
        return DeleteProductOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DeleteProductOutcomeCallable IotcloudClient::DeleteProductCallable(const DeleteProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProductOutcome()>>(
        [this, request]()
        {
            return this->DeleteProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DeleteTopicRuleOutcome IotcloudClient::DeleteTopicRule(const DeleteTopicRuleRequest &request)
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

void IotcloudClient::DeleteTopicRuleAsync(const DeleteTopicRuleRequest& request, const DeleteTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DeleteTopicRuleOutcomeCallable IotcloudClient::DeleteTopicRuleCallable(const DeleteTopicRuleRequest &request)
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

IotcloudClient::DescribeAllDevicesOutcome IotcloudClient::DescribeAllDevices(const DescribeAllDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllDevicesResponse rsp = DescribeAllDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllDevicesOutcome(rsp);
        else
            return DescribeAllDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeAllDevicesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeAllDevicesAsync(const DescribeAllDevicesRequest& request, const DescribeAllDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeAllDevicesOutcomeCallable IotcloudClient::DescribeAllDevicesCallable(const DescribeAllDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeDeviceOutcome IotcloudClient::DescribeDevice(const DescribeDeviceRequest &request)
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

void IotcloudClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeDeviceOutcomeCallable IotcloudClient::DescribeDeviceCallable(const DescribeDeviceRequest &request)
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

IotcloudClient::DescribeDeviceClientKeyOutcome IotcloudClient::DescribeDeviceClientKey(const DescribeDeviceClientKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceClientKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceClientKeyResponse rsp = DescribeDeviceClientKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceClientKeyOutcome(rsp);
        else
            return DescribeDeviceClientKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceClientKeyOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDeviceClientKeyAsync(const DescribeDeviceClientKeyRequest& request, const DescribeDeviceClientKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceClientKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeDeviceClientKeyOutcomeCallable IotcloudClient::DescribeDeviceClientKeyCallable(const DescribeDeviceClientKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceClientKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceClientKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeDeviceResourceOutcome IotcloudClient::DescribeDeviceResource(const DescribeDeviceResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceResourceResponse rsp = DescribeDeviceResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceResourceOutcome(rsp);
        else
            return DescribeDeviceResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceResourceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDeviceResourceAsync(const DescribeDeviceResourceRequest& request, const DescribeDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeDeviceResourceOutcomeCallable IotcloudClient::DescribeDeviceResourceCallable(const DescribeDeviceResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeDeviceResourcesOutcome IotcloudClient::DescribeDeviceResources(const DescribeDeviceResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceResourcesResponse rsp = DescribeDeviceResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceResourcesOutcome(rsp);
        else
            return DescribeDeviceResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceResourcesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDeviceResourcesAsync(const DescribeDeviceResourcesRequest& request, const DescribeDeviceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeDeviceResourcesOutcomeCallable IotcloudClient::DescribeDeviceResourcesCallable(const DescribeDeviceResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeDeviceShadowOutcome IotcloudClient::DescribeDeviceShadow(const DescribeDeviceShadowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceShadow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceShadowResponse rsp = DescribeDeviceShadowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceShadowOutcome(rsp);
        else
            return DescribeDeviceShadowOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceShadowOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDeviceShadowAsync(const DescribeDeviceShadowRequest& request, const DescribeDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceShadow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeDeviceShadowOutcomeCallable IotcloudClient::DescribeDeviceShadowCallable(const DescribeDeviceShadowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceShadowOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceShadow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeDevicesOutcome IotcloudClient::DescribeDevices(const DescribeDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicesResponse rsp = DescribeDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicesOutcome(rsp);
        else
            return DescribeDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeDevicesOutcomeCallable IotcloudClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeFirmwareOutcome IotcloudClient::DescribeFirmware(const DescribeFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareResponse rsp = DescribeFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareOutcome(rsp);
        else
            return DescribeFirmwareOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareAsync(const DescribeFirmwareRequest& request, const DescribeFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeFirmwareOutcomeCallable IotcloudClient::DescribeFirmwareCallable(const DescribeFirmwareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFirmwareOutcome()>>(
        [this, request]()
        {
            return this->DescribeFirmware(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeFirmwareTaskOutcome IotcloudClient::DescribeFirmwareTask(const DescribeFirmwareTaskRequest &request)
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

void IotcloudClient::DescribeFirmwareTaskAsync(const DescribeFirmwareTaskRequest& request, const DescribeFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeFirmwareTaskOutcomeCallable IotcloudClient::DescribeFirmwareTaskCallable(const DescribeFirmwareTaskRequest &request)
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

IotcloudClient::DescribeFirmwareTaskDevicesOutcome IotcloudClient::DescribeFirmwareTaskDevices(const DescribeFirmwareTaskDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareTaskDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareTaskDevicesResponse rsp = DescribeFirmwareTaskDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareTaskDevicesOutcome(rsp);
        else
            return DescribeFirmwareTaskDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareTaskDevicesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareTaskDevicesAsync(const DescribeFirmwareTaskDevicesRequest& request, const DescribeFirmwareTaskDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTaskDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeFirmwareTaskDevicesOutcomeCallable IotcloudClient::DescribeFirmwareTaskDevicesCallable(const DescribeFirmwareTaskDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFirmwareTaskDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFirmwareTaskDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeFirmwareTaskDistributionOutcome IotcloudClient::DescribeFirmwareTaskDistribution(const DescribeFirmwareTaskDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareTaskDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareTaskDistributionResponse rsp = DescribeFirmwareTaskDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareTaskDistributionOutcome(rsp);
        else
            return DescribeFirmwareTaskDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareTaskDistributionOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareTaskDistributionAsync(const DescribeFirmwareTaskDistributionRequest& request, const DescribeFirmwareTaskDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTaskDistribution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeFirmwareTaskDistributionOutcomeCallable IotcloudClient::DescribeFirmwareTaskDistributionCallable(const DescribeFirmwareTaskDistributionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFirmwareTaskDistributionOutcome()>>(
        [this, request]()
        {
            return this->DescribeFirmwareTaskDistribution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeFirmwareTaskStatisticsOutcome IotcloudClient::DescribeFirmwareTaskStatistics(const DescribeFirmwareTaskStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareTaskStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareTaskStatisticsResponse rsp = DescribeFirmwareTaskStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareTaskStatisticsOutcome(rsp);
        else
            return DescribeFirmwareTaskStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareTaskStatisticsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareTaskStatisticsAsync(const DescribeFirmwareTaskStatisticsRequest& request, const DescribeFirmwareTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTaskStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeFirmwareTaskStatisticsOutcomeCallable IotcloudClient::DescribeFirmwareTaskStatisticsCallable(const DescribeFirmwareTaskStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFirmwareTaskStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFirmwareTaskStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeFirmwareTasksOutcome IotcloudClient::DescribeFirmwareTasks(const DescribeFirmwareTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirmwareTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirmwareTasksResponse rsp = DescribeFirmwareTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirmwareTasksOutcome(rsp);
        else
            return DescribeFirmwareTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeFirmwareTasksOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeFirmwareTasksAsync(const DescribeFirmwareTasksRequest& request, const DescribeFirmwareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeFirmwareTasksOutcomeCallable IotcloudClient::DescribeFirmwareTasksCallable(const DescribeFirmwareTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFirmwareTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeFirmwareTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeLoraDeviceOutcome IotcloudClient::DescribeLoraDevice(const DescribeLoraDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoraDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoraDeviceResponse rsp = DescribeLoraDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoraDeviceOutcome(rsp);
        else
            return DescribeLoraDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeLoraDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeLoraDeviceAsync(const DescribeLoraDeviceRequest& request, const DescribeLoraDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoraDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeLoraDeviceOutcomeCallable IotcloudClient::DescribeLoraDeviceCallable(const DescribeLoraDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoraDeviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoraDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeMultiDevTaskOutcome IotcloudClient::DescribeMultiDevTask(const DescribeMultiDevTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMultiDevTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMultiDevTaskResponse rsp = DescribeMultiDevTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMultiDevTaskOutcome(rsp);
        else
            return DescribeMultiDevTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeMultiDevTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeMultiDevTaskAsync(const DescribeMultiDevTaskRequest& request, const DescribeMultiDevTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMultiDevTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeMultiDevTaskOutcomeCallable IotcloudClient::DescribeMultiDevTaskCallable(const DescribeMultiDevTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMultiDevTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeMultiDevTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeMultiDevicesOutcome IotcloudClient::DescribeMultiDevices(const DescribeMultiDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMultiDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMultiDevicesResponse rsp = DescribeMultiDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMultiDevicesOutcome(rsp);
        else
            return DescribeMultiDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeMultiDevicesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeMultiDevicesAsync(const DescribeMultiDevicesRequest& request, const DescribeMultiDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMultiDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeMultiDevicesOutcomeCallable IotcloudClient::DescribeMultiDevicesCallable(const DescribeMultiDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMultiDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMultiDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeProductOutcome IotcloudClient::DescribeProduct(const DescribeProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductResponse rsp = DescribeProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductOutcome(rsp);
        else
            return DescribeProductOutcome(o.GetError());
    }
    else
    {
        return DescribeProductOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductAsync(const DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeProductOutcomeCallable IotcloudClient::DescribeProductCallable(const DescribeProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductOutcome()>>(
        [this, request]()
        {
            return this->DescribeProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeProductResourceOutcome IotcloudClient::DescribeProductResource(const DescribeProductResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductResourceResponse rsp = DescribeProductResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductResourceOutcome(rsp);
        else
            return DescribeProductResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeProductResourceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductResourceAsync(const DescribeProductResourceRequest& request, const DescribeProductResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeProductResourceOutcomeCallable IotcloudClient::DescribeProductResourceCallable(const DescribeProductResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeProductResourcesOutcome IotcloudClient::DescribeProductResources(const DescribeProductResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductResourcesResponse rsp = DescribeProductResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductResourcesOutcome(rsp);
        else
            return DescribeProductResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeProductResourcesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductResourcesAsync(const DescribeProductResourcesRequest& request, const DescribeProductResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeProductResourcesOutcomeCallable IotcloudClient::DescribeProductResourcesCallable(const DescribeProductResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeProductTaskOutcome IotcloudClient::DescribeProductTask(const DescribeProductTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductTaskResponse rsp = DescribeProductTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductTaskOutcome(rsp);
        else
            return DescribeProductTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeProductTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductTaskAsync(const DescribeProductTaskRequest& request, const DescribeProductTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeProductTaskOutcomeCallable IotcloudClient::DescribeProductTaskCallable(const DescribeProductTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeProductTasksOutcome IotcloudClient::DescribeProductTasks(const DescribeProductTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductTasksResponse rsp = DescribeProductTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductTasksOutcome(rsp);
        else
            return DescribeProductTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeProductTasksOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductTasksAsync(const DescribeProductTasksRequest& request, const DescribeProductTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeProductTasksOutcomeCallable IotcloudClient::DescribeProductTasksCallable(const DescribeProductTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeProductsOutcome IotcloudClient::DescribeProducts(const DescribeProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductsResponse rsp = DescribeProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductsOutcome(rsp);
        else
            return DescribeProductsOutcome(o.GetError());
    }
    else
    {
        return DescribeProductsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductsAsync(const DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeProductsOutcomeCallable IotcloudClient::DescribeProductsCallable(const DescribeProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProducts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribePushResourceTaskStatisticsOutcome IotcloudClient::DescribePushResourceTaskStatistics(const DescribePushResourceTaskStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePushResourceTaskStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePushResourceTaskStatisticsResponse rsp = DescribePushResourceTaskStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePushResourceTaskStatisticsOutcome(rsp);
        else
            return DescribePushResourceTaskStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribePushResourceTaskStatisticsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribePushResourceTaskStatisticsAsync(const DescribePushResourceTaskStatisticsRequest& request, const DescribePushResourceTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePushResourceTaskStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribePushResourceTaskStatisticsOutcomeCallable IotcloudClient::DescribePushResourceTaskStatisticsCallable(const DescribePushResourceTaskStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePushResourceTaskStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribePushResourceTaskStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeResourceTasksOutcome IotcloudClient::DescribeResourceTasks(const DescribeResourceTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTasksResponse rsp = DescribeResourceTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTasksOutcome(rsp);
        else
            return DescribeResourceTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTasksOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeResourceTasksAsync(const DescribeResourceTasksRequest& request, const DescribeResourceTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeResourceTasksOutcomeCallable IotcloudClient::DescribeResourceTasksCallable(const DescribeResourceTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeTaskOutcome IotcloudClient::DescribeTask(const DescribeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResponse rsp = DescribeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskOutcome(rsp);
        else
            return DescribeTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeTaskOutcomeCallable IotcloudClient::DescribeTaskCallable(const DescribeTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeTasksOutcome IotcloudClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeTasksOutcomeCallable IotcloudClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DisableTopicRuleOutcome IotcloudClient::DisableTopicRule(const DisableTopicRuleRequest &request)
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

void IotcloudClient::DisableTopicRuleAsync(const DisableTopicRuleRequest& request, const DisableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DisableTopicRuleOutcomeCallable IotcloudClient::DisableTopicRuleCallable(const DisableTopicRuleRequest &request)
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

IotcloudClient::DownloadDeviceResourceOutcome IotcloudClient::DownloadDeviceResource(const DownloadDeviceResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadDeviceResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadDeviceResourceResponse rsp = DownloadDeviceResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadDeviceResourceOutcome(rsp);
        else
            return DownloadDeviceResourceOutcome(o.GetError());
    }
    else
    {
        return DownloadDeviceResourceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DownloadDeviceResourceAsync(const DownloadDeviceResourceRequest& request, const DownloadDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadDeviceResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DownloadDeviceResourceOutcomeCallable IotcloudClient::DownloadDeviceResourceCallable(const DownloadDeviceResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadDeviceResourceOutcome()>>(
        [this, request]()
        {
            return this->DownloadDeviceResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::EditFirmwareOutcome IotcloudClient::EditFirmware(const EditFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "EditFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditFirmwareResponse rsp = EditFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditFirmwareOutcome(rsp);
        else
            return EditFirmwareOutcome(o.GetError());
    }
    else
    {
        return EditFirmwareOutcome(outcome.GetError());
    }
}

void IotcloudClient::EditFirmwareAsync(const EditFirmwareRequest& request, const EditFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::EditFirmwareOutcomeCallable IotcloudClient::EditFirmwareCallable(const EditFirmwareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditFirmwareOutcome()>>(
        [this, request]()
        {
            return this->EditFirmware(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::EnableTopicRuleOutcome IotcloudClient::EnableTopicRule(const EnableTopicRuleRequest &request)
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

void IotcloudClient::EnableTopicRuleAsync(const EnableTopicRuleRequest& request, const EnableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::EnableTopicRuleOutcomeCallable IotcloudClient::EnableTopicRuleCallable(const EnableTopicRuleRequest &request)
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

IotcloudClient::GetCOSURLOutcome IotcloudClient::GetCOSURL(const GetCOSURLRequest &request)
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

void IotcloudClient::GetCOSURLAsync(const GetCOSURLRequest& request, const GetCOSURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCOSURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::GetCOSURLOutcomeCallable IotcloudClient::GetCOSURLCallable(const GetCOSURLRequest &request)
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

IotcloudClient::GetUserResourceInfoOutcome IotcloudClient::GetUserResourceInfo(const GetUserResourceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetUserResourceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUserResourceInfoResponse rsp = GetUserResourceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUserResourceInfoOutcome(rsp);
        else
            return GetUserResourceInfoOutcome(o.GetError());
    }
    else
    {
        return GetUserResourceInfoOutcome(outcome.GetError());
    }
}

void IotcloudClient::GetUserResourceInfoAsync(const GetUserResourceInfoRequest& request, const GetUserResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetUserResourceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::GetUserResourceInfoOutcomeCallable IotcloudClient::GetUserResourceInfoCallable(const GetUserResourceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetUserResourceInfoOutcome()>>(
        [this, request]()
        {
            return this->GetUserResourceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::ListLogOutcome IotcloudClient::ListLog(const ListLogRequest &request)
{
    auto outcome = MakeRequest(request, "ListLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLogResponse rsp = ListLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLogOutcome(rsp);
        else
            return ListLogOutcome(o.GetError());
    }
    else
    {
        return ListLogOutcome(outcome.GetError());
    }
}

void IotcloudClient::ListLogAsync(const ListLogRequest& request, const ListLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::ListLogOutcomeCallable IotcloudClient::ListLogCallable(const ListLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListLogOutcome()>>(
        [this, request]()
        {
            return this->ListLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::ListLogPayloadOutcome IotcloudClient::ListLogPayload(const ListLogPayloadRequest &request)
{
    auto outcome = MakeRequest(request, "ListLogPayload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLogPayloadResponse rsp = ListLogPayloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLogPayloadOutcome(rsp);
        else
            return ListLogPayloadOutcome(o.GetError());
    }
    else
    {
        return ListLogPayloadOutcome(outcome.GetError());
    }
}

void IotcloudClient::ListLogPayloadAsync(const ListLogPayloadRequest& request, const ListLogPayloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListLogPayload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::ListLogPayloadOutcomeCallable IotcloudClient::ListLogPayloadCallable(const ListLogPayloadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListLogPayloadOutcome()>>(
        [this, request]()
        {
            return this->ListLogPayload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::ListSDKLogOutcome IotcloudClient::ListSDKLog(const ListSDKLogRequest &request)
{
    auto outcome = MakeRequest(request, "ListSDKLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSDKLogResponse rsp = ListSDKLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSDKLogOutcome(rsp);
        else
            return ListSDKLogOutcome(o.GetError());
    }
    else
    {
        return ListSDKLogOutcome(outcome.GetError());
    }
}

void IotcloudClient::ListSDKLogAsync(const ListSDKLogRequest& request, const ListSDKLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSDKLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::ListSDKLogOutcomeCallable IotcloudClient::ListSDKLogCallable(const ListSDKLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSDKLogOutcome()>>(
        [this, request]()
        {
            return this->ListSDKLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::PublishAsDeviceOutcome IotcloudClient::PublishAsDevice(const PublishAsDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "PublishAsDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishAsDeviceResponse rsp = PublishAsDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishAsDeviceOutcome(rsp);
        else
            return PublishAsDeviceOutcome(o.GetError());
    }
    else
    {
        return PublishAsDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::PublishAsDeviceAsync(const PublishAsDeviceRequest& request, const PublishAsDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishAsDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::PublishAsDeviceOutcomeCallable IotcloudClient::PublishAsDeviceCallable(const PublishAsDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishAsDeviceOutcome()>>(
        [this, request]()
        {
            return this->PublishAsDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::PublishBroadcastMessageOutcome IotcloudClient::PublishBroadcastMessage(const PublishBroadcastMessageRequest &request)
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

void IotcloudClient::PublishBroadcastMessageAsync(const PublishBroadcastMessageRequest& request, const PublishBroadcastMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishBroadcastMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::PublishBroadcastMessageOutcomeCallable IotcloudClient::PublishBroadcastMessageCallable(const PublishBroadcastMessageRequest &request)
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

IotcloudClient::PublishMessageOutcome IotcloudClient::PublishMessage(const PublishMessageRequest &request)
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

void IotcloudClient::PublishMessageAsync(const PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::PublishMessageOutcomeCallable IotcloudClient::PublishMessageCallable(const PublishMessageRequest &request)
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

IotcloudClient::PublishRRPCMessageOutcome IotcloudClient::PublishRRPCMessage(const PublishRRPCMessageRequest &request)
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

void IotcloudClient::PublishRRPCMessageAsync(const PublishRRPCMessageRequest& request, const PublishRRPCMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishRRPCMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::PublishRRPCMessageOutcomeCallable IotcloudClient::PublishRRPCMessageCallable(const PublishRRPCMessageRequest &request)
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

IotcloudClient::PublishToDeviceOutcome IotcloudClient::PublishToDevice(const PublishToDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "PublishToDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishToDeviceResponse rsp = PublishToDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishToDeviceOutcome(rsp);
        else
            return PublishToDeviceOutcome(o.GetError());
    }
    else
    {
        return PublishToDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::PublishToDeviceAsync(const PublishToDeviceRequest& request, const PublishToDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishToDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::PublishToDeviceOutcomeCallable IotcloudClient::PublishToDeviceCallable(const PublishToDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishToDeviceOutcome()>>(
        [this, request]()
        {
            return this->PublishToDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::ReplaceTopicRuleOutcome IotcloudClient::ReplaceTopicRule(const ReplaceTopicRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceTopicRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceTopicRuleResponse rsp = ReplaceTopicRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceTopicRuleOutcome(rsp);
        else
            return ReplaceTopicRuleOutcome(o.GetError());
    }
    else
    {
        return ReplaceTopicRuleOutcome(outcome.GetError());
    }
}

void IotcloudClient::ReplaceTopicRuleAsync(const ReplaceTopicRuleRequest& request, const ReplaceTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceTopicRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::ReplaceTopicRuleOutcomeCallable IotcloudClient::ReplaceTopicRuleCallable(const ReplaceTopicRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceTopicRuleOutcome()>>(
        [this, request]()
        {
            return this->ReplaceTopicRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::ResetDeviceStateOutcome IotcloudClient::ResetDeviceState(const ResetDeviceStateRequest &request)
{
    auto outcome = MakeRequest(request, "ResetDeviceState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetDeviceStateResponse rsp = ResetDeviceStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetDeviceStateOutcome(rsp);
        else
            return ResetDeviceStateOutcome(o.GetError());
    }
    else
    {
        return ResetDeviceStateOutcome(outcome.GetError());
    }
}

void IotcloudClient::ResetDeviceStateAsync(const ResetDeviceStateRequest& request, const ResetDeviceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetDeviceState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::ResetDeviceStateOutcomeCallable IotcloudClient::ResetDeviceStateCallable(const ResetDeviceStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetDeviceStateOutcome()>>(
        [this, request]()
        {
            return this->ResetDeviceState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::RetryDeviceFirmwareTaskOutcome IotcloudClient::RetryDeviceFirmwareTask(const RetryDeviceFirmwareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RetryDeviceFirmwareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryDeviceFirmwareTaskResponse rsp = RetryDeviceFirmwareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryDeviceFirmwareTaskOutcome(rsp);
        else
            return RetryDeviceFirmwareTaskOutcome(o.GetError());
    }
    else
    {
        return RetryDeviceFirmwareTaskOutcome(outcome.GetError());
    }
}

void IotcloudClient::RetryDeviceFirmwareTaskAsync(const RetryDeviceFirmwareTaskRequest& request, const RetryDeviceFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryDeviceFirmwareTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::RetryDeviceFirmwareTaskOutcomeCallable IotcloudClient::RetryDeviceFirmwareTaskCallable(const RetryDeviceFirmwareTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryDeviceFirmwareTaskOutcome()>>(
        [this, request]()
        {
            return this->RetryDeviceFirmwareTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::SetProductsForbiddenStatusOutcome IotcloudClient::SetProductsForbiddenStatus(const SetProductsForbiddenStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetProductsForbiddenStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetProductsForbiddenStatusResponse rsp = SetProductsForbiddenStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetProductsForbiddenStatusOutcome(rsp);
        else
            return SetProductsForbiddenStatusOutcome(o.GetError());
    }
    else
    {
        return SetProductsForbiddenStatusOutcome(outcome.GetError());
    }
}

void IotcloudClient::SetProductsForbiddenStatusAsync(const SetProductsForbiddenStatusRequest& request, const SetProductsForbiddenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetProductsForbiddenStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::SetProductsForbiddenStatusOutcomeCallable IotcloudClient::SetProductsForbiddenStatusCallable(const SetProductsForbiddenStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetProductsForbiddenStatusOutcome()>>(
        [this, request]()
        {
            return this->SetProductsForbiddenStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::UnbindDevicesOutcome IotcloudClient::UnbindDevices(const UnbindDevicesRequest &request)
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

void IotcloudClient::UnbindDevicesAsync(const UnbindDevicesRequest& request, const UnbindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UnbindDevicesOutcomeCallable IotcloudClient::UnbindDevicesCallable(const UnbindDevicesRequest &request)
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

IotcloudClient::UpdateDeviceAvailableStateOutcome IotcloudClient::UpdateDeviceAvailableState(const UpdateDeviceAvailableStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeviceAvailableState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceAvailableStateResponse rsp = UpdateDeviceAvailableStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceAvailableStateOutcome(rsp);
        else
            return UpdateDeviceAvailableStateOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceAvailableStateOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateDeviceAvailableStateAsync(const UpdateDeviceAvailableStateRequest& request, const UpdateDeviceAvailableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDeviceAvailableState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UpdateDeviceAvailableStateOutcomeCallable IotcloudClient::UpdateDeviceAvailableStateCallable(const UpdateDeviceAvailableStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDeviceAvailableStateOutcome()>>(
        [this, request]()
        {
            return this->UpdateDeviceAvailableState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::UpdateDeviceShadowOutcome IotcloudClient::UpdateDeviceShadow(const UpdateDeviceShadowRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeviceShadow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceShadowResponse rsp = UpdateDeviceShadowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceShadowOutcome(rsp);
        else
            return UpdateDeviceShadowOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceShadowOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateDeviceShadowAsync(const UpdateDeviceShadowRequest& request, const UpdateDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDeviceShadow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UpdateDeviceShadowOutcomeCallable IotcloudClient::UpdateDeviceShadowCallable(const UpdateDeviceShadowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDeviceShadowOutcome()>>(
        [this, request]()
        {
            return this->UpdateDeviceShadow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::UpdateDevicesEnableStateOutcome IotcloudClient::UpdateDevicesEnableState(const UpdateDevicesEnableStateRequest &request)
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

void IotcloudClient::UpdateDevicesEnableStateAsync(const UpdateDevicesEnableStateRequest& request, const UpdateDevicesEnableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDevicesEnableState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UpdateDevicesEnableStateOutcomeCallable IotcloudClient::UpdateDevicesEnableStateCallable(const UpdateDevicesEnableStateRequest &request)
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

IotcloudClient::UpdateProductDynamicRegisterOutcome IotcloudClient::UpdateProductDynamicRegister(const UpdateProductDynamicRegisterRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProductDynamicRegister");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProductDynamicRegisterResponse rsp = UpdateProductDynamicRegisterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProductDynamicRegisterOutcome(rsp);
        else
            return UpdateProductDynamicRegisterOutcome(o.GetError());
    }
    else
    {
        return UpdateProductDynamicRegisterOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateProductDynamicRegisterAsync(const UpdateProductDynamicRegisterRequest& request, const UpdateProductDynamicRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateProductDynamicRegister(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UpdateProductDynamicRegisterOutcomeCallable IotcloudClient::UpdateProductDynamicRegisterCallable(const UpdateProductDynamicRegisterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateProductDynamicRegisterOutcome()>>(
        [this, request]()
        {
            return this->UpdateProductDynamicRegister(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::UpdateTopicPolicyOutcome IotcloudClient::UpdateTopicPolicy(const UpdateTopicPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTopicPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTopicPolicyResponse rsp = UpdateTopicPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTopicPolicyOutcome(rsp);
        else
            return UpdateTopicPolicyOutcome(o.GetError());
    }
    else
    {
        return UpdateTopicPolicyOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateTopicPolicyAsync(const UpdateTopicPolicyRequest& request, const UpdateTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateTopicPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UpdateTopicPolicyOutcomeCallable IotcloudClient::UpdateTopicPolicyCallable(const UpdateTopicPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateTopicPolicyOutcome()>>(
        [this, request]()
        {
            return this->UpdateTopicPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::UploadFirmwareOutcome IotcloudClient::UploadFirmware(const UploadFirmwareRequest &request)
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

void IotcloudClient::UploadFirmwareAsync(const UploadFirmwareRequest& request, const UploadFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UploadFirmwareOutcomeCallable IotcloudClient::UploadFirmwareCallable(const UploadFirmwareRequest &request)
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


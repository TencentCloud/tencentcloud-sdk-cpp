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


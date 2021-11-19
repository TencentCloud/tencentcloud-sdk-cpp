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

#include <tencentcloud/iotvideo/v20201215/IotvideoClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotvideo::V20201215;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-15";
    const string ENDPOINT = "iotvideo.tencentcloudapi.com";
}

IotvideoClient::IotvideoClient(const Credential &credential, const string &region) :
    IotvideoClient(credential, region, ClientProfile())
{
}

IotvideoClient::IotvideoClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotvideoClient::ApplyAIModelOutcome IotvideoClient::ApplyAIModel(const ApplyAIModelRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyAIModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyAIModelResponse rsp = ApplyAIModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyAIModelOutcome(rsp);
        else
            return ApplyAIModelOutcome(o.GetError());
    }
    else
    {
        return ApplyAIModelOutcome(outcome.GetError());
    }
}

void IotvideoClient::ApplyAIModelAsync(const ApplyAIModelRequest& request, const ApplyAIModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyAIModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ApplyAIModelOutcomeCallable IotvideoClient::ApplyAIModelCallable(const ApplyAIModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyAIModelOutcome()>>(
        [this, request]()
        {
            return this->ApplyAIModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::BatchUpdateFirmwareOutcome IotvideoClient::BatchUpdateFirmware(const BatchUpdateFirmwareRequest &request)
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

void IotvideoClient::BatchUpdateFirmwareAsync(const BatchUpdateFirmwareRequest& request, const BatchUpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchUpdateFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::BatchUpdateFirmwareOutcomeCallable IotvideoClient::BatchUpdateFirmwareCallable(const BatchUpdateFirmwareRequest &request)
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

IotvideoClient::BindCloudStorageUserOutcome IotvideoClient::BindCloudStorageUser(const BindCloudStorageUserRequest &request)
{
    auto outcome = MakeRequest(request, "BindCloudStorageUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindCloudStorageUserResponse rsp = BindCloudStorageUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindCloudStorageUserOutcome(rsp);
        else
            return BindCloudStorageUserOutcome(o.GetError());
    }
    else
    {
        return BindCloudStorageUserOutcome(outcome.GetError());
    }
}

void IotvideoClient::BindCloudStorageUserAsync(const BindCloudStorageUserRequest& request, const BindCloudStorageUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindCloudStorageUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::BindCloudStorageUserOutcomeCallable IotvideoClient::BindCloudStorageUserCallable(const BindCloudStorageUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindCloudStorageUserOutcome()>>(
        [this, request]()
        {
            return this->BindCloudStorageUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CancelAIModelApplicationOutcome IotvideoClient::CancelAIModelApplication(const CancelAIModelApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "CancelAIModelApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelAIModelApplicationResponse rsp = CancelAIModelApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelAIModelApplicationOutcome(rsp);
        else
            return CancelAIModelApplicationOutcome(o.GetError());
    }
    else
    {
        return CancelAIModelApplicationOutcome(outcome.GetError());
    }
}

void IotvideoClient::CancelAIModelApplicationAsync(const CancelAIModelApplicationRequest& request, const CancelAIModelApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelAIModelApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CancelAIModelApplicationOutcomeCallable IotvideoClient::CancelAIModelApplicationCallable(const CancelAIModelApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelAIModelApplicationOutcome()>>(
        [this, request]()
        {
            return this->CancelAIModelApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CancelDeviceFirmwareTaskOutcome IotvideoClient::CancelDeviceFirmwareTask(const CancelDeviceFirmwareTaskRequest &request)
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

void IotvideoClient::CancelDeviceFirmwareTaskAsync(const CancelDeviceFirmwareTaskRequest& request, const CancelDeviceFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelDeviceFirmwareTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CancelDeviceFirmwareTaskOutcomeCallable IotvideoClient::CancelDeviceFirmwareTaskCallable(const CancelDeviceFirmwareTaskRequest &request)
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

IotvideoClient::CheckForwardAuthOutcome IotvideoClient::CheckForwardAuth(const CheckForwardAuthRequest &request)
{
    auto outcome = MakeRequest(request, "CheckForwardAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckForwardAuthResponse rsp = CheckForwardAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckForwardAuthOutcome(rsp);
        else
            return CheckForwardAuthOutcome(o.GetError());
    }
    else
    {
        return CheckForwardAuthOutcome(outcome.GetError());
    }
}

void IotvideoClient::CheckForwardAuthAsync(const CheckForwardAuthRequest& request, const CheckForwardAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckForwardAuth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CheckForwardAuthOutcomeCallable IotvideoClient::CheckForwardAuthCallable(const CheckForwardAuthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckForwardAuthOutcome()>>(
        [this, request]()
        {
            return this->CheckForwardAuth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ControlDeviceDataOutcome IotvideoClient::ControlDeviceData(const ControlDeviceDataRequest &request)
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

void IotvideoClient::ControlDeviceDataAsync(const ControlDeviceDataRequest& request, const ControlDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlDeviceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ControlDeviceDataOutcomeCallable IotvideoClient::ControlDeviceDataCallable(const ControlDeviceDataRequest &request)
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

IotvideoClient::CreateAIDetectionOutcome IotvideoClient::CreateAIDetection(const CreateAIDetectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAIDetection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAIDetectionResponse rsp = CreateAIDetectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAIDetectionOutcome(rsp);
        else
            return CreateAIDetectionOutcome(o.GetError());
    }
    else
    {
        return CreateAIDetectionOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateAIDetectionAsync(const CreateAIDetectionRequest& request, const CreateAIDetectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAIDetection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateAIDetectionOutcomeCallable IotvideoClient::CreateAIDetectionCallable(const CreateAIDetectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAIDetectionOutcome()>>(
        [this, request]()
        {
            return this->CreateAIDetection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateBatchOutcome IotvideoClient::CreateBatch(const CreateBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchResponse rsp = CreateBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchOutcome(rsp);
        else
            return CreateBatchOutcome(o.GetError());
    }
    else
    {
        return CreateBatchOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateBatchAsync(const CreateBatchRequest& request, const CreateBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateBatchOutcomeCallable IotvideoClient::CreateBatchCallable(const CreateBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchOutcome()>>(
        [this, request]()
        {
            return this->CreateBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateCOSCredentialsOutcome IotvideoClient::CreateCOSCredentials(const CreateCOSCredentialsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCOSCredentials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCOSCredentialsResponse rsp = CreateCOSCredentialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCOSCredentialsOutcome(rsp);
        else
            return CreateCOSCredentialsOutcome(o.GetError());
    }
    else
    {
        return CreateCOSCredentialsOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateCOSCredentialsAsync(const CreateCOSCredentialsRequest& request, const CreateCOSCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCOSCredentials(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateCOSCredentialsOutcomeCallable IotvideoClient::CreateCOSCredentialsCallable(const CreateCOSCredentialsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCOSCredentialsOutcome()>>(
        [this, request]()
        {
            return this->CreateCOSCredentials(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateCloudStorageOutcome IotvideoClient::CreateCloudStorage(const CreateCloudStorageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudStorageResponse rsp = CreateCloudStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudStorageOutcome(rsp);
        else
            return CreateCloudStorageOutcome(o.GetError());
    }
    else
    {
        return CreateCloudStorageOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateCloudStorageAsync(const CreateCloudStorageRequest& request, const CreateCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateCloudStorageOutcomeCallable IotvideoClient::CreateCloudStorageCallable(const CreateCloudStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudStorageOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateDataForwardOutcome IotvideoClient::CreateDataForward(const CreateDataForwardRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataForward");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataForwardResponse rsp = CreateDataForwardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataForwardOutcome(rsp);
        else
            return CreateDataForwardOutcome(o.GetError());
    }
    else
    {
        return CreateDataForwardOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateDataForwardAsync(const CreateDataForwardRequest& request, const CreateDataForwardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataForward(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateDataForwardOutcomeCallable IotvideoClient::CreateDataForwardCallable(const CreateDataForwardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataForwardOutcome()>>(
        [this, request]()
        {
            return this->CreateDataForward(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateForwardRuleOutcome IotvideoClient::CreateForwardRule(const CreateForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateForwardRuleResponse rsp = CreateForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateForwardRuleOutcome(rsp);
        else
            return CreateForwardRuleOutcome(o.GetError());
    }
    else
    {
        return CreateForwardRuleOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateForwardRuleAsync(const CreateForwardRuleRequest& request, const CreateForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateForwardRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateForwardRuleOutcomeCallable IotvideoClient::CreateForwardRuleCallable(const CreateForwardRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateForwardRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateForwardRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateProductOutcome IotvideoClient::CreateProduct(const CreateProductRequest &request)
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

void IotvideoClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateProductOutcomeCallable IotvideoClient::CreateProductCallable(const CreateProductRequest &request)
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

IotvideoClient::CreateTaskFileUrlOutcome IotvideoClient::CreateTaskFileUrl(const CreateTaskFileUrlRequest &request)
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

void IotvideoClient::CreateTaskFileUrlAsync(const CreateTaskFileUrlRequest& request, const CreateTaskFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTaskFileUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateTaskFileUrlOutcomeCallable IotvideoClient::CreateTaskFileUrlCallable(const CreateTaskFileUrlRequest &request)
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

IotvideoClient::DeleteDeviceOutcome IotvideoClient::DeleteDevice(const DeleteDeviceRequest &request)
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

void IotvideoClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeleteDeviceOutcomeCallable IotvideoClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
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

IotvideoClient::DeleteFirmwareOutcome IotvideoClient::DeleteFirmware(const DeleteFirmwareRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFirmware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFirmwareResponse rsp = DeleteFirmwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFirmwareOutcome(rsp);
        else
            return DeleteFirmwareOutcome(o.GetError());
    }
    else
    {
        return DeleteFirmwareOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteFirmwareAsync(const DeleteFirmwareRequest& request, const DeleteFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeleteFirmwareOutcomeCallable IotvideoClient::DeleteFirmwareCallable(const DeleteFirmwareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFirmwareOutcome()>>(
        [this, request]()
        {
            return this->DeleteFirmware(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DeleteForwardRuleOutcome IotvideoClient::DeleteForwardRule(const DeleteForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteForwardRuleResponse rsp = DeleteForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteForwardRuleOutcome(rsp);
        else
            return DeleteForwardRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteForwardRuleOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteForwardRuleAsync(const DeleteForwardRuleRequest& request, const DeleteForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteForwardRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeleteForwardRuleOutcomeCallable IotvideoClient::DeleteForwardRuleCallable(const DeleteForwardRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteForwardRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteForwardRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DeleteProductOutcome IotvideoClient::DeleteProduct(const DeleteProductRequest &request)
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

void IotvideoClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeleteProductOutcomeCallable IotvideoClient::DeleteProductCallable(const DeleteProductRequest &request)
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

IotvideoClient::DescribeAIModelApplicationsOutcome IotvideoClient::DescribeAIModelApplications(const DescribeAIModelApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIModelApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIModelApplicationsResponse rsp = DescribeAIModelApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIModelApplicationsOutcome(rsp);
        else
            return DescribeAIModelApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeAIModelApplicationsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeAIModelApplicationsAsync(const DescribeAIModelApplicationsRequest& request, const DescribeAIModelApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIModelApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeAIModelApplicationsOutcomeCallable IotvideoClient::DescribeAIModelApplicationsCallable(const DescribeAIModelApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAIModelApplicationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAIModelApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeAIModelChannelOutcome IotvideoClient::DescribeAIModelChannel(const DescribeAIModelChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIModelChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIModelChannelResponse rsp = DescribeAIModelChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIModelChannelOutcome(rsp);
        else
            return DescribeAIModelChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeAIModelChannelOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeAIModelChannelAsync(const DescribeAIModelChannelRequest& request, const DescribeAIModelChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIModelChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeAIModelChannelOutcomeCallable IotvideoClient::DescribeAIModelChannelCallable(const DescribeAIModelChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAIModelChannelOutcome()>>(
        [this, request]()
        {
            return this->DescribeAIModelChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeAIModelUsageOutcome IotvideoClient::DescribeAIModelUsage(const DescribeAIModelUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIModelUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIModelUsageResponse rsp = DescribeAIModelUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIModelUsageOutcome(rsp);
        else
            return DescribeAIModelUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeAIModelUsageOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeAIModelUsageAsync(const DescribeAIModelUsageRequest& request, const DescribeAIModelUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIModelUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeAIModelUsageOutcomeCallable IotvideoClient::DescribeAIModelUsageCallable(const DescribeAIModelUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAIModelUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeAIModelUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeAIModelsOutcome IotvideoClient::DescribeAIModels(const DescribeAIModelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIModels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIModelsResponse rsp = DescribeAIModelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIModelsOutcome(rsp);
        else
            return DescribeAIModelsOutcome(o.GetError());
    }
    else
    {
        return DescribeAIModelsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeAIModelsAsync(const DescribeAIModelsRequest& request, const DescribeAIModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIModels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeAIModelsOutcomeCallable IotvideoClient::DescribeAIModelsCallable(const DescribeAIModelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAIModelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAIModels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeBalanceOutcome IotvideoClient::DescribeBalance(const DescribeBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBalanceResponse rsp = DescribeBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBalanceOutcome(rsp);
        else
            return DescribeBalanceOutcome(o.GetError());
    }
    else
    {
        return DescribeBalanceOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeBalanceAsync(const DescribeBalanceRequest& request, const DescribeBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeBalanceOutcomeCallable IotvideoClient::DescribeBalanceCallable(const DescribeBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBalanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeBalanceTransactionsOutcome IotvideoClient::DescribeBalanceTransactions(const DescribeBalanceTransactionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBalanceTransactions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBalanceTransactionsResponse rsp = DescribeBalanceTransactionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBalanceTransactionsOutcome(rsp);
        else
            return DescribeBalanceTransactionsOutcome(o.GetError());
    }
    else
    {
        return DescribeBalanceTransactionsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeBalanceTransactionsAsync(const DescribeBalanceTransactionsRequest& request, const DescribeBalanceTransactionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBalanceTransactions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeBalanceTransactionsOutcomeCallable IotvideoClient::DescribeBalanceTransactionsCallable(const DescribeBalanceTransactionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBalanceTransactionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBalanceTransactions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeBatchOutcome IotvideoClient::DescribeBatch(const DescribeBatchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchResponse rsp = DescribeBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOutcome(rsp);
        else
            return DescribeBatchOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeBatchAsync(const DescribeBatchRequest& request, const DescribeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeBatchOutcomeCallable IotvideoClient::DescribeBatchCallable(const DescribeBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeBatchsOutcome IotvideoClient::DescribeBatchs(const DescribeBatchsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchsResponse rsp = DescribeBatchsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchsOutcome(rsp);
        else
            return DescribeBatchsOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeBatchsAsync(const DescribeBatchsRequest& request, const DescribeBatchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeBatchsOutcomeCallable IotvideoClient::DescribeBatchsCallable(const DescribeBatchsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeCategoryOutcome IotvideoClient::DescribeCategory(const DescribeCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCategoryResponse rsp = DescribeCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCategoryOutcome(rsp);
        else
            return DescribeCategoryOutcome(o.GetError());
    }
    else
    {
        return DescribeCategoryOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCategoryAsync(const DescribeCategoryRequest& request, const DescribeCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCategory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeCategoryOutcomeCallable IotvideoClient::DescribeCategoryCallable(const DescribeCategoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCategoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeCategory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeCloudStorageOutcome IotvideoClient::DescribeCloudStorage(const DescribeCloudStorageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageResponse rsp = DescribeCloudStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageOutcome(rsp);
        else
            return DescribeCloudStorageOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStorageAsync(const DescribeCloudStorageRequest& request, const DescribeCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeCloudStorageOutcomeCallable IotvideoClient::DescribeCloudStorageCallable(const DescribeCloudStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudStorageOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeCloudStorageDateOutcome IotvideoClient::DescribeCloudStorageDate(const DescribeCloudStorageDateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageDate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageDateResponse rsp = DescribeCloudStorageDateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageDateOutcome(rsp);
        else
            return DescribeCloudStorageDateOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageDateOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStorageDateAsync(const DescribeCloudStorageDateRequest& request, const DescribeCloudStorageDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudStorageDate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeCloudStorageDateOutcomeCallable IotvideoClient::DescribeCloudStorageDateCallable(const DescribeCloudStorageDateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudStorageDateOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudStorageDate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeCloudStorageEventsOutcome IotvideoClient::DescribeCloudStorageEvents(const DescribeCloudStorageEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageEventsResponse rsp = DescribeCloudStorageEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageEventsOutcome(rsp);
        else
            return DescribeCloudStorageEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageEventsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStorageEventsAsync(const DescribeCloudStorageEventsRequest& request, const DescribeCloudStorageEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudStorageEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeCloudStorageEventsOutcomeCallable IotvideoClient::DescribeCloudStorageEventsCallable(const DescribeCloudStorageEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudStorageEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudStorageEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeCloudStorageThumbnailOutcome IotvideoClient::DescribeCloudStorageThumbnail(const DescribeCloudStorageThumbnailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageThumbnail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageThumbnailResponse rsp = DescribeCloudStorageThumbnailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageThumbnailOutcome(rsp);
        else
            return DescribeCloudStorageThumbnailOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageThumbnailOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStorageThumbnailAsync(const DescribeCloudStorageThumbnailRequest& request, const DescribeCloudStorageThumbnailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudStorageThumbnail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeCloudStorageThumbnailOutcomeCallable IotvideoClient::DescribeCloudStorageThumbnailCallable(const DescribeCloudStorageThumbnailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudStorageThumbnailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudStorageThumbnail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeCloudStorageTimeOutcome IotvideoClient::DescribeCloudStorageTime(const DescribeCloudStorageTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageTimeResponse rsp = DescribeCloudStorageTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageTimeOutcome(rsp);
        else
            return DescribeCloudStorageTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageTimeOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStorageTimeAsync(const DescribeCloudStorageTimeRequest& request, const DescribeCloudStorageTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudStorageTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeCloudStorageTimeOutcomeCallable IotvideoClient::DescribeCloudStorageTimeCallable(const DescribeCloudStorageTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudStorageTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudStorageTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeCloudStorageUsersOutcome IotvideoClient::DescribeCloudStorageUsers(const DescribeCloudStorageUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageUsersResponse rsp = DescribeCloudStorageUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageUsersOutcome(rsp);
        else
            return DescribeCloudStorageUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageUsersOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStorageUsersAsync(const DescribeCloudStorageUsersRequest& request, const DescribeCloudStorageUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudStorageUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeCloudStorageUsersOutcomeCallable IotvideoClient::DescribeCloudStorageUsersCallable(const DescribeCloudStorageUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudStorageUsersOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudStorageUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeDataForwardListOutcome IotvideoClient::DescribeDataForwardList(const DescribeDataForwardListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataForwardList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataForwardListResponse rsp = DescribeDataForwardListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataForwardListOutcome(rsp);
        else
            return DescribeDataForwardListOutcome(o.GetError());
    }
    else
    {
        return DescribeDataForwardListOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeDataForwardListAsync(const DescribeDataForwardListRequest& request, const DescribeDataForwardListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataForwardList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDataForwardListOutcomeCallable IotvideoClient::DescribeDataForwardListCallable(const DescribeDataForwardListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataForwardListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataForwardList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeDeviceOutcome IotvideoClient::DescribeDevice(const DescribeDeviceRequest &request)
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

void IotvideoClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDeviceOutcomeCallable IotvideoClient::DescribeDeviceCallable(const DescribeDeviceRequest &request)
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

IotvideoClient::DescribeDeviceActionHistoryOutcome IotvideoClient::DescribeDeviceActionHistory(const DescribeDeviceActionHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceActionHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceActionHistoryResponse rsp = DescribeDeviceActionHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceActionHistoryOutcome(rsp);
        else
            return DescribeDeviceActionHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceActionHistoryOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeDeviceActionHistoryAsync(const DescribeDeviceActionHistoryRequest& request, const DescribeDeviceActionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceActionHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDeviceActionHistoryOutcomeCallable IotvideoClient::DescribeDeviceActionHistoryCallable(const DescribeDeviceActionHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceActionHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceActionHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeDeviceCommLogOutcome IotvideoClient::DescribeDeviceCommLog(const DescribeDeviceCommLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceCommLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceCommLogResponse rsp = DescribeDeviceCommLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceCommLogOutcome(rsp);
        else
            return DescribeDeviceCommLogOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceCommLogOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeDeviceCommLogAsync(const DescribeDeviceCommLogRequest& request, const DescribeDeviceCommLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceCommLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDeviceCommLogOutcomeCallable IotvideoClient::DescribeDeviceCommLogCallable(const DescribeDeviceCommLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceCommLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceCommLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeDeviceDataOutcome IotvideoClient::DescribeDeviceData(const DescribeDeviceDataRequest &request)
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

void IotvideoClient::DescribeDeviceDataAsync(const DescribeDeviceDataRequest& request, const DescribeDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDeviceDataOutcomeCallable IotvideoClient::DescribeDeviceDataCallable(const DescribeDeviceDataRequest &request)
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

IotvideoClient::DescribeDeviceDataHistoryOutcome IotvideoClient::DescribeDeviceDataHistory(const DescribeDeviceDataHistoryRequest &request)
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

void IotvideoClient::DescribeDeviceDataHistoryAsync(const DescribeDeviceDataHistoryRequest& request, const DescribeDeviceDataHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceDataHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDeviceDataHistoryOutcomeCallable IotvideoClient::DescribeDeviceDataHistoryCallable(const DescribeDeviceDataHistoryRequest &request)
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

IotvideoClient::DescribeDeviceEventHistoryOutcome IotvideoClient::DescribeDeviceEventHistory(const DescribeDeviceEventHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceEventHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceEventHistoryResponse rsp = DescribeDeviceEventHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceEventHistoryOutcome(rsp);
        else
            return DescribeDeviceEventHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceEventHistoryOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeDeviceEventHistoryAsync(const DescribeDeviceEventHistoryRequest& request, const DescribeDeviceEventHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceEventHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDeviceEventHistoryOutcomeCallable IotvideoClient::DescribeDeviceEventHistoryCallable(const DescribeDeviceEventHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceEventHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceEventHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeDeviceStatusLogOutcome IotvideoClient::DescribeDeviceStatusLog(const DescribeDeviceStatusLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceStatusLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceStatusLogResponse rsp = DescribeDeviceStatusLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceStatusLogOutcome(rsp);
        else
            return DescribeDeviceStatusLogOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceStatusLogOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeDeviceStatusLogAsync(const DescribeDeviceStatusLogRequest& request, const DescribeDeviceStatusLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceStatusLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDeviceStatusLogOutcomeCallable IotvideoClient::DescribeDeviceStatusLogCallable(const DescribeDeviceStatusLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceStatusLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceStatusLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeDevicesOutcome IotvideoClient::DescribeDevices(const DescribeDevicesRequest &request)
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

void IotvideoClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDevicesOutcomeCallable IotvideoClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
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

IotvideoClient::DescribeFirmwareOutcome IotvideoClient::DescribeFirmware(const DescribeFirmwareRequest &request)
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

void IotvideoClient::DescribeFirmwareAsync(const DescribeFirmwareRequest& request, const DescribeFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeFirmwareOutcomeCallable IotvideoClient::DescribeFirmwareCallable(const DescribeFirmwareRequest &request)
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

IotvideoClient::DescribeFirmwareTaskOutcome IotvideoClient::DescribeFirmwareTask(const DescribeFirmwareTaskRequest &request)
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

void IotvideoClient::DescribeFirmwareTaskAsync(const DescribeFirmwareTaskRequest& request, const DescribeFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeFirmwareTaskOutcomeCallable IotvideoClient::DescribeFirmwareTaskCallable(const DescribeFirmwareTaskRequest &request)
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

IotvideoClient::DescribeFirmwareTaskDevicesOutcome IotvideoClient::DescribeFirmwareTaskDevices(const DescribeFirmwareTaskDevicesRequest &request)
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

void IotvideoClient::DescribeFirmwareTaskDevicesAsync(const DescribeFirmwareTaskDevicesRequest& request, const DescribeFirmwareTaskDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTaskDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeFirmwareTaskDevicesOutcomeCallable IotvideoClient::DescribeFirmwareTaskDevicesCallable(const DescribeFirmwareTaskDevicesRequest &request)
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

IotvideoClient::DescribeFirmwareTaskDistributionOutcome IotvideoClient::DescribeFirmwareTaskDistribution(const DescribeFirmwareTaskDistributionRequest &request)
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

void IotvideoClient::DescribeFirmwareTaskDistributionAsync(const DescribeFirmwareTaskDistributionRequest& request, const DescribeFirmwareTaskDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTaskDistribution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeFirmwareTaskDistributionOutcomeCallable IotvideoClient::DescribeFirmwareTaskDistributionCallable(const DescribeFirmwareTaskDistributionRequest &request)
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

IotvideoClient::DescribeFirmwareTaskStatisticsOutcome IotvideoClient::DescribeFirmwareTaskStatistics(const DescribeFirmwareTaskStatisticsRequest &request)
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

void IotvideoClient::DescribeFirmwareTaskStatisticsAsync(const DescribeFirmwareTaskStatisticsRequest& request, const DescribeFirmwareTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTaskStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeFirmwareTaskStatisticsOutcomeCallable IotvideoClient::DescribeFirmwareTaskStatisticsCallable(const DescribeFirmwareTaskStatisticsRequest &request)
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

IotvideoClient::DescribeFirmwareTasksOutcome IotvideoClient::DescribeFirmwareTasks(const DescribeFirmwareTasksRequest &request)
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

void IotvideoClient::DescribeFirmwareTasksAsync(const DescribeFirmwareTasksRequest& request, const DescribeFirmwareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirmwareTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeFirmwareTasksOutcomeCallable IotvideoClient::DescribeFirmwareTasksCallable(const DescribeFirmwareTasksRequest &request)
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

IotvideoClient::DescribeForwardRuleOutcome IotvideoClient::DescribeForwardRule(const DescribeForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeForwardRuleResponse rsp = DescribeForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeForwardRuleOutcome(rsp);
        else
            return DescribeForwardRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeForwardRuleOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeForwardRuleAsync(const DescribeForwardRuleRequest& request, const DescribeForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeForwardRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeForwardRuleOutcomeCallable IotvideoClient::DescribeForwardRuleCallable(const DescribeForwardRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeForwardRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeForwardRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeModelDefinitionOutcome IotvideoClient::DescribeModelDefinition(const DescribeModelDefinitionRequest &request)
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

void IotvideoClient::DescribeModelDefinitionAsync(const DescribeModelDefinitionRequest& request, const DescribeModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelDefinition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeModelDefinitionOutcomeCallable IotvideoClient::DescribeModelDefinitionCallable(const DescribeModelDefinitionRequest &request)
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

IotvideoClient::DescribeProductOutcome IotvideoClient::DescribeProduct(const DescribeProductRequest &request)
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

void IotvideoClient::DescribeProductAsync(const DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeProductOutcomeCallable IotvideoClient::DescribeProductCallable(const DescribeProductRequest &request)
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

IotvideoClient::DescribeProductDynamicRegisterOutcome IotvideoClient::DescribeProductDynamicRegister(const DescribeProductDynamicRegisterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductDynamicRegister");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductDynamicRegisterResponse rsp = DescribeProductDynamicRegisterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductDynamicRegisterOutcome(rsp);
        else
            return DescribeProductDynamicRegisterOutcome(o.GetError());
    }
    else
    {
        return DescribeProductDynamicRegisterOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeProductDynamicRegisterAsync(const DescribeProductDynamicRegisterRequest& request, const DescribeProductDynamicRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductDynamicRegister(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeProductDynamicRegisterOutcomeCallable IotvideoClient::DescribeProductDynamicRegisterCallable(const DescribeProductDynamicRegisterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductDynamicRegisterOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductDynamicRegister(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeProductsOutcome IotvideoClient::DescribeProducts(const DescribeProductsRequest &request)
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

void IotvideoClient::DescribeProductsAsync(const DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeProductsOutcomeCallable IotvideoClient::DescribeProductsCallable(const DescribeProductsRequest &request)
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

IotvideoClient::DescribeSDKLogOutcome IotvideoClient::DescribeSDKLog(const DescribeSDKLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSDKLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSDKLogResponse rsp = DescribeSDKLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSDKLogOutcome(rsp);
        else
            return DescribeSDKLogOutcome(o.GetError());
    }
    else
    {
        return DescribeSDKLogOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeSDKLogAsync(const DescribeSDKLogRequest& request, const DescribeSDKLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSDKLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeSDKLogOutcomeCallable IotvideoClient::DescribeSDKLogCallable(const DescribeSDKLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSDKLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeSDKLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::EditFirmwareOutcome IotvideoClient::EditFirmware(const EditFirmwareRequest &request)
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

void IotvideoClient::EditFirmwareAsync(const EditFirmwareRequest& request, const EditFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::EditFirmwareOutcomeCallable IotvideoClient::EditFirmwareCallable(const EditFirmwareRequest &request)
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

IotvideoClient::GenerateSignedVideoURLOutcome IotvideoClient::GenerateSignedVideoURL(const GenerateSignedVideoURLRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateSignedVideoURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateSignedVideoURLResponse rsp = GenerateSignedVideoURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateSignedVideoURLOutcome(rsp);
        else
            return GenerateSignedVideoURLOutcome(o.GetError());
    }
    else
    {
        return GenerateSignedVideoURLOutcome(outcome.GetError());
    }
}

void IotvideoClient::GenerateSignedVideoURLAsync(const GenerateSignedVideoURLRequest& request, const GenerateSignedVideoURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateSignedVideoURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::GenerateSignedVideoURLOutcomeCallable IotvideoClient::GenerateSignedVideoURLCallable(const GenerateSignedVideoURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateSignedVideoURLOutcome()>>(
        [this, request]()
        {
            return this->GenerateSignedVideoURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::GetAllFirmwareVersionOutcome IotvideoClient::GetAllFirmwareVersion(const GetAllFirmwareVersionRequest &request)
{
    auto outcome = MakeRequest(request, "GetAllFirmwareVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAllFirmwareVersionResponse rsp = GetAllFirmwareVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAllFirmwareVersionOutcome(rsp);
        else
            return GetAllFirmwareVersionOutcome(o.GetError());
    }
    else
    {
        return GetAllFirmwareVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::GetAllFirmwareVersionAsync(const GetAllFirmwareVersionRequest& request, const GetAllFirmwareVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAllFirmwareVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::GetAllFirmwareVersionOutcomeCallable IotvideoClient::GetAllFirmwareVersionCallable(const GetAllFirmwareVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAllFirmwareVersionOutcome()>>(
        [this, request]()
        {
            return this->GetAllFirmwareVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::GetFirmwareURLOutcome IotvideoClient::GetFirmwareURL(const GetFirmwareURLRequest &request)
{
    auto outcome = MakeRequest(request, "GetFirmwareURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFirmwareURLResponse rsp = GetFirmwareURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFirmwareURLOutcome(rsp);
        else
            return GetFirmwareURLOutcome(o.GetError());
    }
    else
    {
        return GetFirmwareURLOutcome(outcome.GetError());
    }
}

void IotvideoClient::GetFirmwareURLAsync(const GetFirmwareURLRequest& request, const GetFirmwareURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFirmwareURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::GetFirmwareURLOutcomeCallable IotvideoClient::GetFirmwareURLCallable(const GetFirmwareURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFirmwareURLOutcome()>>(
        [this, request]()
        {
            return this->GetFirmwareURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ImportModelDefinitionOutcome IotvideoClient::ImportModelDefinition(const ImportModelDefinitionRequest &request)
{
    auto outcome = MakeRequest(request, "ImportModelDefinition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportModelDefinitionResponse rsp = ImportModelDefinitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportModelDefinitionOutcome(rsp);
        else
            return ImportModelDefinitionOutcome(o.GetError());
    }
    else
    {
        return ImportModelDefinitionOutcome(outcome.GetError());
    }
}

void IotvideoClient::ImportModelDefinitionAsync(const ImportModelDefinitionRequest& request, const ImportModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportModelDefinition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ImportModelDefinitionOutcomeCallable IotvideoClient::ImportModelDefinitionCallable(const ImportModelDefinitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportModelDefinitionOutcome()>>(
        [this, request]()
        {
            return this->ImportModelDefinition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::InheritCloudStorageUserOutcome IotvideoClient::InheritCloudStorageUser(const InheritCloudStorageUserRequest &request)
{
    auto outcome = MakeRequest(request, "InheritCloudStorageUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InheritCloudStorageUserResponse rsp = InheritCloudStorageUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InheritCloudStorageUserOutcome(rsp);
        else
            return InheritCloudStorageUserOutcome(o.GetError());
    }
    else
    {
        return InheritCloudStorageUserOutcome(outcome.GetError());
    }
}

void IotvideoClient::InheritCloudStorageUserAsync(const InheritCloudStorageUserRequest& request, const InheritCloudStorageUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InheritCloudStorageUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::InheritCloudStorageUserOutcomeCallable IotvideoClient::InheritCloudStorageUserCallable(const InheritCloudStorageUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InheritCloudStorageUserOutcome()>>(
        [this, request]()
        {
            return this->InheritCloudStorageUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ListFirmwaresOutcome IotvideoClient::ListFirmwares(const ListFirmwaresRequest &request)
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

void IotvideoClient::ListFirmwaresAsync(const ListFirmwaresRequest& request, const ListFirmwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListFirmwares(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ListFirmwaresOutcomeCallable IotvideoClient::ListFirmwaresCallable(const ListFirmwaresRequest &request)
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

IotvideoClient::ModifyDataForwardOutcome IotvideoClient::ModifyDataForward(const ModifyDataForwardRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataForward");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataForwardResponse rsp = ModifyDataForwardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataForwardOutcome(rsp);
        else
            return ModifyDataForwardOutcome(o.GetError());
    }
    else
    {
        return ModifyDataForwardOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyDataForwardAsync(const ModifyDataForwardRequest& request, const ModifyDataForwardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDataForward(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyDataForwardOutcomeCallable IotvideoClient::ModifyDataForwardCallable(const ModifyDataForwardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDataForwardOutcome()>>(
        [this, request]()
        {
            return this->ModifyDataForward(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ModifyDataForwardStatusOutcome IotvideoClient::ModifyDataForwardStatus(const ModifyDataForwardStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataForwardStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataForwardStatusResponse rsp = ModifyDataForwardStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataForwardStatusOutcome(rsp);
        else
            return ModifyDataForwardStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDataForwardStatusOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyDataForwardStatusAsync(const ModifyDataForwardStatusRequest& request, const ModifyDataForwardStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDataForwardStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyDataForwardStatusOutcomeCallable IotvideoClient::ModifyDataForwardStatusCallable(const ModifyDataForwardStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDataForwardStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDataForwardStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ModifyDeviceOutcome IotvideoClient::ModifyDevice(const ModifyDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceResponse rsp = ModifyDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceOutcome(rsp);
        else
            return ModifyDeviceOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyDeviceAsync(const ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyDeviceOutcomeCallable IotvideoClient::ModifyDeviceCallable(const ModifyDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceOutcome()>>(
        [this, request]()
        {
            return this->ModifyDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ModifyDeviceLogLevelOutcome IotvideoClient::ModifyDeviceLogLevel(const ModifyDeviceLogLevelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceLogLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceLogLevelResponse rsp = ModifyDeviceLogLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceLogLevelOutcome(rsp);
        else
            return ModifyDeviceLogLevelOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceLogLevelOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyDeviceLogLevelAsync(const ModifyDeviceLogLevelRequest& request, const ModifyDeviceLogLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceLogLevel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyDeviceLogLevelOutcomeCallable IotvideoClient::ModifyDeviceLogLevelCallable(const ModifyDeviceLogLevelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceLogLevelOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceLogLevel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ModifyForwardRuleOutcome IotvideoClient::ModifyForwardRule(const ModifyForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyForwardRuleResponse rsp = ModifyForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyForwardRuleOutcome(rsp);
        else
            return ModifyForwardRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyForwardRuleOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyForwardRuleAsync(const ModifyForwardRuleRequest& request, const ModifyForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyForwardRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyForwardRuleOutcomeCallable IotvideoClient::ModifyForwardRuleCallable(const ModifyForwardRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyForwardRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyForwardRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ModifyModelDefinitionOutcome IotvideoClient::ModifyModelDefinition(const ModifyModelDefinitionRequest &request)
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

void IotvideoClient::ModifyModelDefinitionAsync(const ModifyModelDefinitionRequest& request, const ModifyModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModelDefinition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyModelDefinitionOutcomeCallable IotvideoClient::ModifyModelDefinitionCallable(const ModifyModelDefinitionRequest &request)
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

IotvideoClient::ModifyProductOutcome IotvideoClient::ModifyProduct(const ModifyProductRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProductResponse rsp = ModifyProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProductOutcome(rsp);
        else
            return ModifyProductOutcome(o.GetError());
    }
    else
    {
        return ModifyProductOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyProductAsync(const ModifyProductRequest& request, const ModifyProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyProductOutcomeCallable IotvideoClient::ModifyProductCallable(const ModifyProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProductOutcome()>>(
        [this, request]()
        {
            return this->ModifyProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ModifyProductDynamicRegisterOutcome IotvideoClient::ModifyProductDynamicRegister(const ModifyProductDynamicRegisterRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProductDynamicRegister");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProductDynamicRegisterResponse rsp = ModifyProductDynamicRegisterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProductDynamicRegisterOutcome(rsp);
        else
            return ModifyProductDynamicRegisterOutcome(o.GetError());
    }
    else
    {
        return ModifyProductDynamicRegisterOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyProductDynamicRegisterAsync(const ModifyProductDynamicRegisterRequest& request, const ModifyProductDynamicRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProductDynamicRegister(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyProductDynamicRegisterOutcomeCallable IotvideoClient::ModifyProductDynamicRegisterCallable(const ModifyProductDynamicRegisterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProductDynamicRegisterOutcome()>>(
        [this, request]()
        {
            return this->ModifyProductDynamicRegister(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::PublishMessageOutcome IotvideoClient::PublishMessage(const PublishMessageRequest &request)
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

void IotvideoClient::PublishMessageAsync(const PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::PublishMessageOutcomeCallable IotvideoClient::PublishMessageCallable(const PublishMessageRequest &request)
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

IotvideoClient::ReportAliveDeviceOutcome IotvideoClient::ReportAliveDevice(const ReportAliveDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ReportAliveDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportAliveDeviceResponse rsp = ReportAliveDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportAliveDeviceOutcome(rsp);
        else
            return ReportAliveDeviceOutcome(o.GetError());
    }
    else
    {
        return ReportAliveDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::ReportAliveDeviceAsync(const ReportAliveDeviceRequest& request, const ReportAliveDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportAliveDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ReportAliveDeviceOutcomeCallable IotvideoClient::ReportAliveDeviceCallable(const ReportAliveDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportAliveDeviceOutcome()>>(
        [this, request]()
        {
            return this->ReportAliveDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ResetCloudStorageOutcome IotvideoClient::ResetCloudStorage(const ResetCloudStorageRequest &request)
{
    auto outcome = MakeRequest(request, "ResetCloudStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetCloudStorageResponse rsp = ResetCloudStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetCloudStorageOutcome(rsp);
        else
            return ResetCloudStorageOutcome(o.GetError());
    }
    else
    {
        return ResetCloudStorageOutcome(outcome.GetError());
    }
}

void IotvideoClient::ResetCloudStorageAsync(const ResetCloudStorageRequest& request, const ResetCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetCloudStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ResetCloudStorageOutcomeCallable IotvideoClient::ResetCloudStorageCallable(const ResetCloudStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetCloudStorageOutcome()>>(
        [this, request]()
        {
            return this->ResetCloudStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::RetryDeviceFirmwareTaskOutcome IotvideoClient::RetryDeviceFirmwareTask(const RetryDeviceFirmwareTaskRequest &request)
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

void IotvideoClient::RetryDeviceFirmwareTaskAsync(const RetryDeviceFirmwareTaskRequest& request, const RetryDeviceFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryDeviceFirmwareTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::RetryDeviceFirmwareTaskOutcomeCallable IotvideoClient::RetryDeviceFirmwareTaskCallable(const RetryDeviceFirmwareTaskRequest &request)
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

IotvideoClient::SetForwardAuthOutcome IotvideoClient::SetForwardAuth(const SetForwardAuthRequest &request)
{
    auto outcome = MakeRequest(request, "SetForwardAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetForwardAuthResponse rsp = SetForwardAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetForwardAuthOutcome(rsp);
        else
            return SetForwardAuthOutcome(o.GetError());
    }
    else
    {
        return SetForwardAuthOutcome(outcome.GetError());
    }
}

void IotvideoClient::SetForwardAuthAsync(const SetForwardAuthRequest& request, const SetForwardAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetForwardAuth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::SetForwardAuthOutcomeCallable IotvideoClient::SetForwardAuthCallable(const SetForwardAuthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetForwardAuthOutcome()>>(
        [this, request]()
        {
            return this->SetForwardAuth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::TransferCloudStorageOutcome IotvideoClient::TransferCloudStorage(const TransferCloudStorageRequest &request)
{
    auto outcome = MakeRequest(request, "TransferCloudStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransferCloudStorageResponse rsp = TransferCloudStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransferCloudStorageOutcome(rsp);
        else
            return TransferCloudStorageOutcome(o.GetError());
    }
    else
    {
        return TransferCloudStorageOutcome(outcome.GetError());
    }
}

void IotvideoClient::TransferCloudStorageAsync(const TransferCloudStorageRequest& request, const TransferCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TransferCloudStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::TransferCloudStorageOutcomeCallable IotvideoClient::TransferCloudStorageCallable(const TransferCloudStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TransferCloudStorageOutcome()>>(
        [this, request]()
        {
            return this->TransferCloudStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::UpdateAIModelChannelOutcome IotvideoClient::UpdateAIModelChannel(const UpdateAIModelChannelRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAIModelChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAIModelChannelResponse rsp = UpdateAIModelChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAIModelChannelOutcome(rsp);
        else
            return UpdateAIModelChannelOutcome(o.GetError());
    }
    else
    {
        return UpdateAIModelChannelOutcome(outcome.GetError());
    }
}

void IotvideoClient::UpdateAIModelChannelAsync(const UpdateAIModelChannelRequest& request, const UpdateAIModelChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAIModelChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::UpdateAIModelChannelOutcomeCallable IotvideoClient::UpdateAIModelChannelCallable(const UpdateAIModelChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAIModelChannelOutcome()>>(
        [this, request]()
        {
            return this->UpdateAIModelChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::UploadFirmwareOutcome IotvideoClient::UploadFirmware(const UploadFirmwareRequest &request)
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

void IotvideoClient::UploadFirmwareAsync(const UploadFirmwareRequest& request, const UploadFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFirmware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::UploadFirmwareOutcomeCallable IotvideoClient::UploadFirmwareCallable(const UploadFirmwareRequest &request)
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

IotvideoClient::WakeUpDeviceOutcome IotvideoClient::WakeUpDevice(const WakeUpDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "WakeUpDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        WakeUpDeviceResponse rsp = WakeUpDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return WakeUpDeviceOutcome(rsp);
        else
            return WakeUpDeviceOutcome(o.GetError());
    }
    else
    {
        return WakeUpDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::WakeUpDeviceAsync(const WakeUpDeviceRequest& request, const WakeUpDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->WakeUpDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::WakeUpDeviceOutcomeCallable IotvideoClient::WakeUpDeviceCallable(const WakeUpDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<WakeUpDeviceOutcome()>>(
        [this, request]()
        {
            return this->WakeUpDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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

#include <tencentcloud/iotvideo/v20191126/IotvideoClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotvideo::V20191126;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-11-26";
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


IotvideoClient::ClearDeviceActiveCodeOutcome IotvideoClient::ClearDeviceActiveCode(const ClearDeviceActiveCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ClearDeviceActiveCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearDeviceActiveCodeResponse rsp = ClearDeviceActiveCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearDeviceActiveCodeOutcome(rsp);
        else
            return ClearDeviceActiveCodeOutcome(o.GetError());
    }
    else
    {
        return ClearDeviceActiveCodeOutcome(outcome.GetError());
    }
}

void IotvideoClient::ClearDeviceActiveCodeAsync(const ClearDeviceActiveCodeRequest& request, const ClearDeviceActiveCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClearDeviceActiveCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ClearDeviceActiveCodeOutcomeCallable IotvideoClient::ClearDeviceActiveCodeCallable(const ClearDeviceActiveCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClearDeviceActiveCodeOutcome()>>(
        [this, request]()
        {
            return this->ClearDeviceActiveCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateAnonymousAccessTokenOutcome IotvideoClient::CreateAnonymousAccessToken(const CreateAnonymousAccessTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAnonymousAccessToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAnonymousAccessTokenResponse rsp = CreateAnonymousAccessTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAnonymousAccessTokenOutcome(rsp);
        else
            return CreateAnonymousAccessTokenOutcome(o.GetError());
    }
    else
    {
        return CreateAnonymousAccessTokenOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateAnonymousAccessTokenAsync(const CreateAnonymousAccessTokenRequest& request, const CreateAnonymousAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAnonymousAccessToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateAnonymousAccessTokenOutcomeCallable IotvideoClient::CreateAnonymousAccessTokenCallable(const CreateAnonymousAccessTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAnonymousAccessTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateAnonymousAccessToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateAppUsrOutcome IotvideoClient::CreateAppUsr(const CreateAppUsrRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAppUsr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppUsrResponse rsp = CreateAppUsrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppUsrOutcome(rsp);
        else
            return CreateAppUsrOutcome(o.GetError());
    }
    else
    {
        return CreateAppUsrOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateAppUsrAsync(const CreateAppUsrRequest& request, const CreateAppUsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAppUsr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateAppUsrOutcomeCallable IotvideoClient::CreateAppUsrCallable(const CreateAppUsrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAppUsrOutcome()>>(
        [this, request]()
        {
            return this->CreateAppUsr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateBindingOutcome IotvideoClient::CreateBinding(const CreateBindingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBindingResponse rsp = CreateBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBindingOutcome(rsp);
        else
            return CreateBindingOutcome(o.GetError());
    }
    else
    {
        return CreateBindingOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateBindingAsync(const CreateBindingRequest& request, const CreateBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBinding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateBindingOutcomeCallable IotvideoClient::CreateBindingCallable(const CreateBindingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBindingOutcome()>>(
        [this, request]()
        {
            return this->CreateBinding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateDevTokenOutcome IotvideoClient::CreateDevToken(const CreateDevTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDevToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDevTokenResponse rsp = CreateDevTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDevTokenOutcome(rsp);
        else
            return CreateDevTokenOutcome(o.GetError());
    }
    else
    {
        return CreateDevTokenOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateDevTokenAsync(const CreateDevTokenRequest& request, const CreateDevTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDevToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateDevTokenOutcomeCallable IotvideoClient::CreateDevTokenCallable(const CreateDevTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDevTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateDevToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateDevicesOutcome IotvideoClient::CreateDevices(const CreateDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDevicesResponse rsp = CreateDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDevicesOutcome(rsp);
        else
            return CreateDevicesOutcome(o.GetError());
    }
    else
    {
        return CreateDevicesOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateDevicesAsync(const CreateDevicesRequest& request, const CreateDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateDevicesOutcomeCallable IotvideoClient::CreateDevicesCallable(const CreateDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDevicesOutcome()>>(
        [this, request]()
        {
            return this->CreateDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateGencodeOutcome IotvideoClient::CreateGencode(const CreateGencodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGencode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGencodeResponse rsp = CreateGencodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGencodeOutcome(rsp);
        else
            return CreateGencodeOutcome(o.GetError());
    }
    else
    {
        return CreateGencodeOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateGencodeAsync(const CreateGencodeRequest& request, const CreateGencodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGencode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateGencodeOutcomeCallable IotvideoClient::CreateGencodeCallable(const CreateGencodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGencodeOutcome()>>(
        [this, request]()
        {
            return this->CreateGencode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateIotDataTypeOutcome IotvideoClient::CreateIotDataType(const CreateIotDataTypeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIotDataType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIotDataTypeResponse rsp = CreateIotDataTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIotDataTypeOutcome(rsp);
        else
            return CreateIotDataTypeOutcome(o.GetError());
    }
    else
    {
        return CreateIotDataTypeOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateIotDataTypeAsync(const CreateIotDataTypeRequest& request, const CreateIotDataTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIotDataType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateIotDataTypeOutcomeCallable IotvideoClient::CreateIotDataTypeCallable(const CreateIotDataTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIotDataTypeOutcome()>>(
        [this, request]()
        {
            return this->CreateIotDataType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateIotModelOutcome IotvideoClient::CreateIotModel(const CreateIotModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIotModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIotModelResponse rsp = CreateIotModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIotModelOutcome(rsp);
        else
            return CreateIotModelOutcome(o.GetError());
    }
    else
    {
        return CreateIotModelOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateIotModelAsync(const CreateIotModelRequest& request, const CreateIotModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIotModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateIotModelOutcomeCallable IotvideoClient::CreateIotModelCallable(const CreateIotModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIotModelOutcome()>>(
        [this, request]()
        {
            return this->CreateIotModel(request);
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

IotvideoClient::CreateStorageOutcome IotvideoClient::CreateStorage(const CreateStorageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStorageResponse rsp = CreateStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStorageOutcome(rsp);
        else
            return CreateStorageOutcome(o.GetError());
    }
    else
    {
        return CreateStorageOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateStorageAsync(const CreateStorageRequest& request, const CreateStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateStorageOutcomeCallable IotvideoClient::CreateStorageCallable(const CreateStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStorageOutcome()>>(
        [this, request]()
        {
            return this->CreateStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateStorageServiceOutcome IotvideoClient::CreateStorageService(const CreateStorageServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStorageService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStorageServiceResponse rsp = CreateStorageServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStorageServiceOutcome(rsp);
        else
            return CreateStorageServiceOutcome(o.GetError());
    }
    else
    {
        return CreateStorageServiceOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateStorageServiceAsync(const CreateStorageServiceRequest& request, const CreateStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStorageService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateStorageServiceOutcomeCallable IotvideoClient::CreateStorageServiceCallable(const CreateStorageServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStorageServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateStorageService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateTraceIdsOutcome IotvideoClient::CreateTraceIds(const CreateTraceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTraceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTraceIdsResponse rsp = CreateTraceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTraceIdsOutcome(rsp);
        else
            return CreateTraceIdsOutcome(o.GetError());
    }
    else
    {
        return CreateTraceIdsOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateTraceIdsAsync(const CreateTraceIdsRequest& request, const CreateTraceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTraceIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateTraceIdsOutcomeCallable IotvideoClient::CreateTraceIdsCallable(const CreateTraceIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTraceIdsOutcome()>>(
        [this, request]()
        {
            return this->CreateTraceIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateUploadPathOutcome IotvideoClient::CreateUploadPath(const CreateUploadPathRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUploadPath");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUploadPathResponse rsp = CreateUploadPathResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUploadPathOutcome(rsp);
        else
            return CreateUploadPathOutcome(o.GetError());
    }
    else
    {
        return CreateUploadPathOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateUploadPathAsync(const CreateUploadPathRequest& request, const CreateUploadPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUploadPath(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateUploadPathOutcomeCallable IotvideoClient::CreateUploadPathCallable(const CreateUploadPathRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUploadPathOutcome()>>(
        [this, request]()
        {
            return this->CreateUploadPath(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateUploadTestOutcome IotvideoClient::CreateUploadTest(const CreateUploadTestRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUploadTest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUploadTestResponse rsp = CreateUploadTestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUploadTestOutcome(rsp);
        else
            return CreateUploadTestOutcome(o.GetError());
    }
    else
    {
        return CreateUploadTestOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateUploadTestAsync(const CreateUploadTestRequest& request, const CreateUploadTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUploadTest(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateUploadTestOutcomeCallable IotvideoClient::CreateUploadTestCallable(const CreateUploadTestRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUploadTestOutcome()>>(
        [this, request]()
        {
            return this->CreateUploadTest(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::CreateUsrTokenOutcome IotvideoClient::CreateUsrToken(const CreateUsrTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUsrToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUsrTokenResponse rsp = CreateUsrTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUsrTokenOutcome(rsp);
        else
            return CreateUsrTokenOutcome(o.GetError());
    }
    else
    {
        return CreateUsrTokenOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateUsrTokenAsync(const CreateUsrTokenRequest& request, const CreateUsrTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUsrToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::CreateUsrTokenOutcomeCallable IotvideoClient::CreateUsrTokenCallable(const CreateUsrTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUsrTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateUsrToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DeleteAppUsrOutcome IotvideoClient::DeleteAppUsr(const DeleteAppUsrRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAppUsr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppUsrResponse rsp = DeleteAppUsrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppUsrOutcome(rsp);
        else
            return DeleteAppUsrOutcome(o.GetError());
    }
    else
    {
        return DeleteAppUsrOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteAppUsrAsync(const DeleteAppUsrRequest& request, const DeleteAppUsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAppUsr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeleteAppUsrOutcomeCallable IotvideoClient::DeleteAppUsrCallable(const DeleteAppUsrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAppUsrOutcome()>>(
        [this, request]()
        {
            return this->DeleteAppUsr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DeleteBindingOutcome IotvideoClient::DeleteBinding(const DeleteBindingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBindingResponse rsp = DeleteBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBindingOutcome(rsp);
        else
            return DeleteBindingOutcome(o.GetError());
    }
    else
    {
        return DeleteBindingOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteBindingAsync(const DeleteBindingRequest& request, const DeleteBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBinding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeleteBindingOutcomeCallable IotvideoClient::DeleteBindingCallable(const DeleteBindingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBindingOutcome()>>(
        [this, request]()
        {
            return this->DeleteBinding(request);
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

IotvideoClient::DeleteIotDataTypeOutcome IotvideoClient::DeleteIotDataType(const DeleteIotDataTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIotDataType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIotDataTypeResponse rsp = DeleteIotDataTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIotDataTypeOutcome(rsp);
        else
            return DeleteIotDataTypeOutcome(o.GetError());
    }
    else
    {
        return DeleteIotDataTypeOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteIotDataTypeAsync(const DeleteIotDataTypeRequest& request, const DeleteIotDataTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIotDataType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeleteIotDataTypeOutcomeCallable IotvideoClient::DeleteIotDataTypeCallable(const DeleteIotDataTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIotDataTypeOutcome()>>(
        [this, request]()
        {
            return this->DeleteIotDataType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DeleteMessageQueueOutcome IotvideoClient::DeleteMessageQueue(const DeleteMessageQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMessageQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMessageQueueResponse rsp = DeleteMessageQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMessageQueueOutcome(rsp);
        else
            return DeleteMessageQueueOutcome(o.GetError());
    }
    else
    {
        return DeleteMessageQueueOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteMessageQueueAsync(const DeleteMessageQueueRequest& request, const DeleteMessageQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMessageQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeleteMessageQueueOutcomeCallable IotvideoClient::DeleteMessageQueueCallable(const DeleteMessageQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMessageQueueOutcome()>>(
        [this, request]()
        {
            return this->DeleteMessageQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DeleteOtaVersionOutcome IotvideoClient::DeleteOtaVersion(const DeleteOtaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOtaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOtaVersionResponse rsp = DeleteOtaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOtaVersionOutcome(rsp);
        else
            return DeleteOtaVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteOtaVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteOtaVersionAsync(const DeleteOtaVersionRequest& request, const DeleteOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOtaVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeleteOtaVersionOutcomeCallable IotvideoClient::DeleteOtaVersionCallable(const DeleteOtaVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOtaVersionOutcome()>>(
        [this, request]()
        {
            return this->DeleteOtaVersion(request);
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

IotvideoClient::DeleteTraceIdsOutcome IotvideoClient::DeleteTraceIds(const DeleteTraceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTraceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTraceIdsResponse rsp = DeleteTraceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTraceIdsOutcome(rsp);
        else
            return DeleteTraceIdsOutcome(o.GetError());
    }
    else
    {
        return DeleteTraceIdsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteTraceIdsAsync(const DeleteTraceIdsRequest& request, const DeleteTraceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTraceIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeleteTraceIdsOutcomeCallable IotvideoClient::DeleteTraceIdsCallable(const DeleteTraceIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTraceIdsOutcome()>>(
        [this, request]()
        {
            return this->DeleteTraceIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DeliverStorageServiceOutcome IotvideoClient::DeliverStorageService(const DeliverStorageServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeliverStorageService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeliverStorageServiceResponse rsp = DeliverStorageServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeliverStorageServiceOutcome(rsp);
        else
            return DeliverStorageServiceOutcome(o.GetError());
    }
    else
    {
        return DeliverStorageServiceOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeliverStorageServiceAsync(const DeliverStorageServiceRequest& request, const DeliverStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeliverStorageService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DeliverStorageServiceOutcomeCallable IotvideoClient::DeliverStorageServiceCallable(const DeliverStorageServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeliverStorageServiceOutcome()>>(
        [this, request]()
        {
            return this->DeliverStorageService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeAccountBalanceOutcome IotvideoClient::DescribeAccountBalance(const DescribeAccountBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountBalanceResponse rsp = DescribeAccountBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountBalanceOutcome(rsp);
        else
            return DescribeAccountBalanceOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountBalanceOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeAccountBalanceAsync(const DescribeAccountBalanceRequest& request, const DescribeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeAccountBalanceOutcomeCallable IotvideoClient::DescribeAccountBalanceCallable(const DescribeAccountBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountBalanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeBindDevOutcome IotvideoClient::DescribeBindDev(const DescribeBindDevRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindDev");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindDevResponse rsp = DescribeBindDevResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindDevOutcome(rsp);
        else
            return DescribeBindDevOutcome(o.GetError());
    }
    else
    {
        return DescribeBindDevOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeBindDevAsync(const DescribeBindDevRequest& request, const DescribeBindDevAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindDev(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeBindDevOutcomeCallable IotvideoClient::DescribeBindDevCallable(const DescribeBindDevRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindDevOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindDev(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeBindUsrOutcome IotvideoClient::DescribeBindUsr(const DescribeBindUsrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindUsr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindUsrResponse rsp = DescribeBindUsrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindUsrOutcome(rsp);
        else
            return DescribeBindUsrOutcome(o.GetError());
    }
    else
    {
        return DescribeBindUsrOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeBindUsrAsync(const DescribeBindUsrRequest& request, const DescribeBindUsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindUsr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeBindUsrOutcomeCallable IotvideoClient::DescribeBindUsrCallable(const DescribeBindUsrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindUsrOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindUsr(request);
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

IotvideoClient::DescribeDeviceModelOutcome IotvideoClient::DescribeDeviceModel(const DescribeDeviceModelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceModelResponse rsp = DescribeDeviceModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceModelOutcome(rsp);
        else
            return DescribeDeviceModelOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceModelOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeDeviceModelAsync(const DescribeDeviceModelRequest& request, const DescribeDeviceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeDeviceModelOutcomeCallable IotvideoClient::DescribeDeviceModelCallable(const DescribeDeviceModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceModelOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceModel(request);
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

IotvideoClient::DescribeIotDataTypeOutcome IotvideoClient::DescribeIotDataType(const DescribeIotDataTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIotDataType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIotDataTypeResponse rsp = DescribeIotDataTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIotDataTypeOutcome(rsp);
        else
            return DescribeIotDataTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeIotDataTypeOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeIotDataTypeAsync(const DescribeIotDataTypeRequest& request, const DescribeIotDataTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIotDataType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeIotDataTypeOutcomeCallable IotvideoClient::DescribeIotDataTypeCallable(const DescribeIotDataTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIotDataTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeIotDataType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeIotModelOutcome IotvideoClient::DescribeIotModel(const DescribeIotModelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIotModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIotModelResponse rsp = DescribeIotModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIotModelOutcome(rsp);
        else
            return DescribeIotModelOutcome(o.GetError());
    }
    else
    {
        return DescribeIotModelOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeIotModelAsync(const DescribeIotModelRequest& request, const DescribeIotModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIotModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeIotModelOutcomeCallable IotvideoClient::DescribeIotModelCallable(const DescribeIotModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIotModelOutcome()>>(
        [this, request]()
        {
            return this->DescribeIotModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeIotModelsOutcome IotvideoClient::DescribeIotModels(const DescribeIotModelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIotModels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIotModelsResponse rsp = DescribeIotModelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIotModelsOutcome(rsp);
        else
            return DescribeIotModelsOutcome(o.GetError());
    }
    else
    {
        return DescribeIotModelsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeIotModelsAsync(const DescribeIotModelsRequest& request, const DescribeIotModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIotModels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeIotModelsOutcomeCallable IotvideoClient::DescribeIotModelsCallable(const DescribeIotModelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIotModelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIotModels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeLogsOutcome IotvideoClient::DescribeLogs(const DescribeLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogsResponse rsp = DescribeLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogsOutcome(rsp);
        else
            return DescribeLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeLogsAsync(const DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeLogsOutcomeCallable IotvideoClient::DescribeLogsCallable(const DescribeLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeMessageQueueOutcome IotvideoClient::DescribeMessageQueue(const DescribeMessageQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageQueueResponse rsp = DescribeMessageQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageQueueOutcome(rsp);
        else
            return DescribeMessageQueueOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageQueueOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeMessageQueueAsync(const DescribeMessageQueueRequest& request, const DescribeMessageQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMessageQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeMessageQueueOutcomeCallable IotvideoClient::DescribeMessageQueueCallable(const DescribeMessageQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMessageQueueOutcome()>>(
        [this, request]()
        {
            return this->DescribeMessageQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeModelDataRetOutcome IotvideoClient::DescribeModelDataRet(const DescribeModelDataRetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelDataRet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelDataRetResponse rsp = DescribeModelDataRetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelDataRetOutcome(rsp);
        else
            return DescribeModelDataRetOutcome(o.GetError());
    }
    else
    {
        return DescribeModelDataRetOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeModelDataRetAsync(const DescribeModelDataRetRequest& request, const DescribeModelDataRetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelDataRet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeModelDataRetOutcomeCallable IotvideoClient::DescribeModelDataRetCallable(const DescribeModelDataRetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelDataRetOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelDataRet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeOsListOutcome IotvideoClient::DescribeOsList(const DescribeOsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOsListResponse rsp = DescribeOsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOsListOutcome(rsp);
        else
            return DescribeOsListOutcome(o.GetError());
    }
    else
    {
        return DescribeOsListOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeOsListAsync(const DescribeOsListRequest& request, const DescribeOsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeOsListOutcomeCallable IotvideoClient::DescribeOsListCallable(const DescribeOsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeOsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeOtaVersionsOutcome IotvideoClient::DescribeOtaVersions(const DescribeOtaVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOtaVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOtaVersionsResponse rsp = DescribeOtaVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOtaVersionsOutcome(rsp);
        else
            return DescribeOtaVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeOtaVersionsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeOtaVersionsAsync(const DescribeOtaVersionsRequest& request, const DescribeOtaVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOtaVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeOtaVersionsOutcomeCallable IotvideoClient::DescribeOtaVersionsCallable(const DescribeOtaVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOtaVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOtaVersions(request);
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

IotvideoClient::DescribePubVersionsOutcome IotvideoClient::DescribePubVersions(const DescribePubVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePubVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePubVersionsResponse rsp = DescribePubVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePubVersionsOutcome(rsp);
        else
            return DescribePubVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribePubVersionsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribePubVersionsAsync(const DescribePubVersionsRequest& request, const DescribePubVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePubVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribePubVersionsOutcomeCallable IotvideoClient::DescribePubVersionsCallable(const DescribePubVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePubVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribePubVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeRechargeRecordsOutcome IotvideoClient::DescribeRechargeRecords(const DescribeRechargeRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRechargeRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRechargeRecordsResponse rsp = DescribeRechargeRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRechargeRecordsOutcome(rsp);
        else
            return DescribeRechargeRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeRechargeRecordsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeRechargeRecordsAsync(const DescribeRechargeRecordsRequest& request, const DescribeRechargeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRechargeRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeRechargeRecordsOutcomeCallable IotvideoClient::DescribeRechargeRecordsCallable(const DescribeRechargeRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRechargeRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRechargeRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeRegistrationStatusOutcome IotvideoClient::DescribeRegistrationStatus(const DescribeRegistrationStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegistrationStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegistrationStatusResponse rsp = DescribeRegistrationStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegistrationStatusOutcome(rsp);
        else
            return DescribeRegistrationStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeRegistrationStatusOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeRegistrationStatusAsync(const DescribeRegistrationStatusRequest& request, const DescribeRegistrationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegistrationStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeRegistrationStatusOutcomeCallable IotvideoClient::DescribeRegistrationStatusCallable(const DescribeRegistrationStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegistrationStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegistrationStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeRunLogOutcome IotvideoClient::DescribeRunLog(const DescribeRunLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRunLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRunLogResponse rsp = DescribeRunLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRunLogOutcome(rsp);
        else
            return DescribeRunLogOutcome(o.GetError());
    }
    else
    {
        return DescribeRunLogOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeRunLogAsync(const DescribeRunLogRequest& request, const DescribeRunLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRunLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeRunLogOutcomeCallable IotvideoClient::DescribeRunLogCallable(const DescribeRunLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRunLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeRunLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeStorageServiceOutcome IotvideoClient::DescribeStorageService(const DescribeStorageServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStorageService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStorageServiceResponse rsp = DescribeStorageServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStorageServiceOutcome(rsp);
        else
            return DescribeStorageServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeStorageServiceOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeStorageServiceAsync(const DescribeStorageServiceRequest& request, const DescribeStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStorageService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeStorageServiceOutcomeCallable IotvideoClient::DescribeStorageServiceCallable(const DescribeStorageServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStorageServiceOutcome()>>(
        [this, request]()
        {
            return this->DescribeStorageService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeStreamOutcome IotvideoClient::DescribeStream(const DescribeStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamResponse rsp = DescribeStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamOutcome(rsp);
        else
            return DescribeStreamOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeStreamAsync(const DescribeStreamRequest& request, const DescribeStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeStreamOutcomeCallable IotvideoClient::DescribeStreamCallable(const DescribeStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamOutcome()>>(
        [this, request]()
        {
            return this->DescribeStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeTraceIdsOutcome IotvideoClient::DescribeTraceIds(const DescribeTraceIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceIdsResponse rsp = DescribeTraceIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceIdsOutcome(rsp);
        else
            return DescribeTraceIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceIdsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeTraceIdsAsync(const DescribeTraceIdsRequest& request, const DescribeTraceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTraceIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeTraceIdsOutcomeCallable IotvideoClient::DescribeTraceIdsCallable(const DescribeTraceIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTraceIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTraceIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DescribeTraceStatusOutcome IotvideoClient::DescribeTraceStatus(const DescribeTraceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceStatusResponse rsp = DescribeTraceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceStatusOutcome(rsp);
        else
            return DescribeTraceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceStatusOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeTraceStatusAsync(const DescribeTraceStatusRequest& request, const DescribeTraceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTraceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DescribeTraceStatusOutcomeCallable IotvideoClient::DescribeTraceStatusCallable(const DescribeTraceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTraceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTraceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DisableDeviceOutcome IotvideoClient::DisableDevice(const DisableDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DisableDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableDeviceResponse rsp = DisableDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableDeviceOutcome(rsp);
        else
            return DisableDeviceOutcome(o.GetError());
    }
    else
    {
        return DisableDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::DisableDeviceAsync(const DisableDeviceRequest& request, const DisableDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DisableDeviceOutcomeCallable IotvideoClient::DisableDeviceCallable(const DisableDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableDeviceOutcome()>>(
        [this, request]()
        {
            return this->DisableDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DisableDeviceStreamOutcome IotvideoClient::DisableDeviceStream(const DisableDeviceStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DisableDeviceStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableDeviceStreamResponse rsp = DisableDeviceStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableDeviceStreamOutcome(rsp);
        else
            return DisableDeviceStreamOutcome(o.GetError());
    }
    else
    {
        return DisableDeviceStreamOutcome(outcome.GetError());
    }
}

void IotvideoClient::DisableDeviceStreamAsync(const DisableDeviceStreamRequest& request, const DisableDeviceStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableDeviceStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DisableDeviceStreamOutcomeCallable IotvideoClient::DisableDeviceStreamCallable(const DisableDeviceStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableDeviceStreamOutcome()>>(
        [this, request]()
        {
            return this->DisableDeviceStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::DisableOtaVersionOutcome IotvideoClient::DisableOtaVersion(const DisableOtaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DisableOtaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableOtaVersionResponse rsp = DisableOtaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableOtaVersionOutcome(rsp);
        else
            return DisableOtaVersionOutcome(o.GetError());
    }
    else
    {
        return DisableOtaVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::DisableOtaVersionAsync(const DisableOtaVersionRequest& request, const DisableOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableOtaVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::DisableOtaVersionOutcomeCallable IotvideoClient::DisableOtaVersionCallable(const DisableOtaVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableOtaVersionOutcome()>>(
        [this, request]()
        {
            return this->DisableOtaVersion(request);
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

IotvideoClient::ModifyDeviceActionOutcome IotvideoClient::ModifyDeviceAction(const ModifyDeviceActionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceAction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceActionResponse rsp = ModifyDeviceActionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceActionOutcome(rsp);
        else
            return ModifyDeviceActionOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceActionOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyDeviceActionAsync(const ModifyDeviceActionRequest& request, const ModifyDeviceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceAction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyDeviceActionOutcomeCallable IotvideoClient::ModifyDeviceActionCallable(const ModifyDeviceActionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceActionOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceAction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::ModifyDevicePropertyOutcome IotvideoClient::ModifyDeviceProperty(const ModifyDevicePropertyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceProperty");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDevicePropertyResponse rsp = ModifyDevicePropertyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDevicePropertyOutcome(rsp);
        else
            return ModifyDevicePropertyOutcome(o.GetError());
    }
    else
    {
        return ModifyDevicePropertyOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyDevicePropertyAsync(const ModifyDevicePropertyRequest& request, const ModifyDevicePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceProperty(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyDevicePropertyOutcomeCallable IotvideoClient::ModifyDevicePropertyCallable(const ModifyDevicePropertyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDevicePropertyOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceProperty(request);
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

IotvideoClient::ModifyVerContentOutcome IotvideoClient::ModifyVerContent(const ModifyVerContentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVerContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVerContentResponse rsp = ModifyVerContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVerContentOutcome(rsp);
        else
            return ModifyVerContentOutcome(o.GetError());
    }
    else
    {
        return ModifyVerContentOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyVerContentAsync(const ModifyVerContentRequest& request, const ModifyVerContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVerContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::ModifyVerContentOutcomeCallable IotvideoClient::ModifyVerContentCallable(const ModifyVerContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVerContentOutcome()>>(
        [this, request]()
        {
            return this->ModifyVerContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::RefundStorageServiceOutcome IotvideoClient::RefundStorageService(const RefundStorageServiceRequest &request)
{
    auto outcome = MakeRequest(request, "RefundStorageService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundStorageServiceResponse rsp = RefundStorageServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundStorageServiceOutcome(rsp);
        else
            return RefundStorageServiceOutcome(o.GetError());
    }
    else
    {
        return RefundStorageServiceOutcome(outcome.GetError());
    }
}

void IotvideoClient::RefundStorageServiceAsync(const RefundStorageServiceRequest& request, const RefundStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefundStorageService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::RefundStorageServiceOutcomeCallable IotvideoClient::RefundStorageServiceCallable(const RefundStorageServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefundStorageServiceOutcome()>>(
        [this, request]()
        {
            return this->RefundStorageService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::RenewUploadTestOutcome IotvideoClient::RenewUploadTest(const RenewUploadTestRequest &request)
{
    auto outcome = MakeRequest(request, "RenewUploadTest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewUploadTestResponse rsp = RenewUploadTestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewUploadTestOutcome(rsp);
        else
            return RenewUploadTestOutcome(o.GetError());
    }
    else
    {
        return RenewUploadTestOutcome(outcome.GetError());
    }
}

void IotvideoClient::RenewUploadTestAsync(const RenewUploadTestRequest& request, const RenewUploadTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewUploadTest(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::RenewUploadTestOutcomeCallable IotvideoClient::RenewUploadTestCallable(const RenewUploadTestRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewUploadTestOutcome()>>(
        [this, request]()
        {
            return this->RenewUploadTest(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::RunDeviceOutcome IotvideoClient::RunDevice(const RunDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "RunDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunDeviceResponse rsp = RunDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunDeviceOutcome(rsp);
        else
            return RunDeviceOutcome(o.GetError());
    }
    else
    {
        return RunDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::RunDeviceAsync(const RunDeviceRequest& request, const RunDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::RunDeviceOutcomeCallable IotvideoClient::RunDeviceCallable(const RunDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunDeviceOutcome()>>(
        [this, request]()
        {
            return this->RunDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::RunDeviceStreamOutcome IotvideoClient::RunDeviceStream(const RunDeviceStreamRequest &request)
{
    auto outcome = MakeRequest(request, "RunDeviceStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunDeviceStreamResponse rsp = RunDeviceStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunDeviceStreamOutcome(rsp);
        else
            return RunDeviceStreamOutcome(o.GetError());
    }
    else
    {
        return RunDeviceStreamOutcome(outcome.GetError());
    }
}

void IotvideoClient::RunDeviceStreamAsync(const RunDeviceStreamRequest& request, const RunDeviceStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunDeviceStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::RunDeviceStreamOutcomeCallable IotvideoClient::RunDeviceStreamCallable(const RunDeviceStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunDeviceStreamOutcome()>>(
        [this, request]()
        {
            return this->RunDeviceStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::RunIotModelOutcome IotvideoClient::RunIotModel(const RunIotModelRequest &request)
{
    auto outcome = MakeRequest(request, "RunIotModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunIotModelResponse rsp = RunIotModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunIotModelOutcome(rsp);
        else
            return RunIotModelOutcome(o.GetError());
    }
    else
    {
        return RunIotModelOutcome(outcome.GetError());
    }
}

void IotvideoClient::RunIotModelAsync(const RunIotModelRequest& request, const RunIotModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunIotModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::RunIotModelOutcomeCallable IotvideoClient::RunIotModelCallable(const RunIotModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunIotModelOutcome()>>(
        [this, request]()
        {
            return this->RunIotModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::RunOtaVersionOutcome IotvideoClient::RunOtaVersion(const RunOtaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RunOtaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunOtaVersionResponse rsp = RunOtaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunOtaVersionOutcome(rsp);
        else
            return RunOtaVersionOutcome(o.GetError());
    }
    else
    {
        return RunOtaVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::RunOtaVersionAsync(const RunOtaVersionRequest& request, const RunOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunOtaVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::RunOtaVersionOutcomeCallable IotvideoClient::RunOtaVersionCallable(const RunOtaVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunOtaVersionOutcome()>>(
        [this, request]()
        {
            return this->RunOtaVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::RunTestOtaVersionOutcome IotvideoClient::RunTestOtaVersion(const RunTestOtaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RunTestOtaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunTestOtaVersionResponse rsp = RunTestOtaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunTestOtaVersionOutcome(rsp);
        else
            return RunTestOtaVersionOutcome(o.GetError());
    }
    else
    {
        return RunTestOtaVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::RunTestOtaVersionAsync(const RunTestOtaVersionRequest& request, const RunTestOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunTestOtaVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::RunTestOtaVersionOutcomeCallable IotvideoClient::RunTestOtaVersionCallable(const RunTestOtaVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunTestOtaVersionOutcome()>>(
        [this, request]()
        {
            return this->RunTestOtaVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::SendOnlineMsgOutcome IotvideoClient::SendOnlineMsg(const SendOnlineMsgRequest &request)
{
    auto outcome = MakeRequest(request, "SendOnlineMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendOnlineMsgResponse rsp = SendOnlineMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendOnlineMsgOutcome(rsp);
        else
            return SendOnlineMsgOutcome(o.GetError());
    }
    else
    {
        return SendOnlineMsgOutcome(outcome.GetError());
    }
}

void IotvideoClient::SendOnlineMsgAsync(const SendOnlineMsgRequest& request, const SendOnlineMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendOnlineMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::SendOnlineMsgOutcomeCallable IotvideoClient::SendOnlineMsgCallable(const SendOnlineMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendOnlineMsgOutcome()>>(
        [this, request]()
        {
            return this->SendOnlineMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::SetMessageQueueOutcome IotvideoClient::SetMessageQueue(const SetMessageQueueRequest &request)
{
    auto outcome = MakeRequest(request, "SetMessageQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetMessageQueueResponse rsp = SetMessageQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetMessageQueueOutcome(rsp);
        else
            return SetMessageQueueOutcome(o.GetError());
    }
    else
    {
        return SetMessageQueueOutcome(outcome.GetError());
    }
}

void IotvideoClient::SetMessageQueueAsync(const SetMessageQueueRequest& request, const SetMessageQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetMessageQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::SetMessageQueueOutcomeCallable IotvideoClient::SetMessageQueueCallable(const SetMessageQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetMessageQueueOutcome()>>(
        [this, request]()
        {
            return this->SetMessageQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::UpgradeDeviceOutcome IotvideoClient::UpgradeDevice(const UpgradeDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDeviceResponse rsp = UpgradeDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDeviceOutcome(rsp);
        else
            return UpgradeDeviceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::UpgradeDeviceAsync(const UpgradeDeviceRequest& request, const UpgradeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::UpgradeDeviceOutcomeCallable IotvideoClient::UpgradeDeviceCallable(const UpgradeDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDeviceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotvideoClient::UploadOtaVersionOutcome IotvideoClient::UploadOtaVersion(const UploadOtaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UploadOtaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadOtaVersionResponse rsp = UploadOtaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadOtaVersionOutcome(rsp);
        else
            return UploadOtaVersionOutcome(o.GetError());
    }
    else
    {
        return UploadOtaVersionOutcome(outcome.GetError());
    }
}

void IotvideoClient::UploadOtaVersionAsync(const UploadOtaVersionRequest& request, const UploadOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadOtaVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotvideoClient::UploadOtaVersionOutcomeCallable IotvideoClient::UploadOtaVersionCallable(const UploadOtaVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadOtaVersionOutcome()>>(
        [this, request]()
        {
            return this->UploadOtaVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


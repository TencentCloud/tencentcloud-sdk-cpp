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


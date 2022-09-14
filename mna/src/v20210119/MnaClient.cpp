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

#include <tencentcloud/mna/v20210119/MnaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mna::V20210119;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-19";
    const string ENDPOINT = "mna.tencentcloudapi.com";
}

MnaClient::MnaClient(const Credential &credential, const string &region) :
    MnaClient(credential, region, ClientProfile())
{
}

MnaClient::MnaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MnaClient::AddDeviceOutcome MnaClient::AddDevice(const AddDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "AddDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDeviceResponse rsp = AddDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDeviceOutcome(rsp);
        else
            return AddDeviceOutcome(o.GetError());
    }
    else
    {
        return AddDeviceOutcome(outcome.GetError());
    }
}

void MnaClient::AddDeviceAsync(const AddDeviceRequest& request, const AddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::AddDeviceOutcomeCallable MnaClient::AddDeviceCallable(const AddDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddDeviceOutcome()>>(
        [this, request]()
        {
            return this->AddDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::CreateQosOutcome MnaClient::CreateQos(const CreateQosRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQosResponse rsp = CreateQosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQosOutcome(rsp);
        else
            return CreateQosOutcome(o.GetError());
    }
    else
    {
        return CreateQosOutcome(outcome.GetError());
    }
}

void MnaClient::CreateQosAsync(const CreateQosRequest& request, const CreateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateQos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::CreateQosOutcomeCallable MnaClient::CreateQosCallable(const CreateQosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateQosOutcome()>>(
        [this, request]()
        {
            return this->CreateQos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::DeleteDeviceOutcome MnaClient::DeleteDevice(const DeleteDeviceRequest &request)
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

void MnaClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::DeleteDeviceOutcomeCallable MnaClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
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

MnaClient::DeleteQosOutcome MnaClient::DeleteQos(const DeleteQosRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQosResponse rsp = DeleteQosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQosOutcome(rsp);
        else
            return DeleteQosOutcome(o.GetError());
    }
    else
    {
        return DeleteQosOutcome(outcome.GetError());
    }
}

void MnaClient::DeleteQosAsync(const DeleteQosRequest& request, const DeleteQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::DeleteQosOutcomeCallable MnaClient::DeleteQosCallable(const DeleteQosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQosOutcome()>>(
        [this, request]()
        {
            return this->DeleteQos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::DescribeQosOutcome MnaClient::DescribeQos(const DescribeQosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQosResponse rsp = DescribeQosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQosOutcome(rsp);
        else
            return DescribeQosOutcome(o.GetError());
    }
    else
    {
        return DescribeQosOutcome(outcome.GetError());
    }
}

void MnaClient::DescribeQosAsync(const DescribeQosRequest& request, const DescribeQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::DescribeQosOutcomeCallable MnaClient::DescribeQosCallable(const DescribeQosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQosOutcome()>>(
        [this, request]()
        {
            return this->DescribeQos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetDeviceOutcome MnaClient::GetDevice(const GetDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "GetDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceResponse rsp = GetDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceOutcome(rsp);
        else
            return GetDeviceOutcome(o.GetError());
    }
    else
    {
        return GetDeviceOutcome(outcome.GetError());
    }
}

void MnaClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetDeviceOutcomeCallable MnaClient::GetDeviceCallable(const GetDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceOutcome()>>(
        [this, request]()
        {
            return this->GetDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetDevicesOutcome MnaClient::GetDevices(const GetDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "GetDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDevicesResponse rsp = GetDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDevicesOutcome(rsp);
        else
            return GetDevicesOutcome(o.GetError());
    }
    else
    {
        return GetDevicesOutcome(outcome.GetError());
    }
}

void MnaClient::GetDevicesAsync(const GetDevicesRequest& request, const GetDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetDevicesOutcomeCallable MnaClient::GetDevicesCallable(const GetDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDevicesOutcome()>>(
        [this, request]()
        {
            return this->GetDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetStatisticDataOutcome MnaClient::GetStatisticData(const GetStatisticDataRequest &request)
{
    auto outcome = MakeRequest(request, "GetStatisticData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetStatisticDataResponse rsp = GetStatisticDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetStatisticDataOutcome(rsp);
        else
            return GetStatisticDataOutcome(o.GetError());
    }
    else
    {
        return GetStatisticDataOutcome(outcome.GetError());
    }
}

void MnaClient::GetStatisticDataAsync(const GetStatisticDataRequest& request, const GetStatisticDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetStatisticData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetStatisticDataOutcomeCallable MnaClient::GetStatisticDataCallable(const GetStatisticDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetStatisticDataOutcome()>>(
        [this, request]()
        {
            return this->GetStatisticData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::UpdateDeviceOutcome MnaClient::UpdateDevice(const UpdateDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceResponse rsp = UpdateDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceOutcome(rsp);
        else
            return UpdateDeviceOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceOutcome(outcome.GetError());
    }
}

void MnaClient::UpdateDeviceAsync(const UpdateDeviceRequest& request, const UpdateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::UpdateDeviceOutcomeCallable MnaClient::UpdateDeviceCallable(const UpdateDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDeviceOutcome()>>(
        [this, request]()
        {
            return this->UpdateDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


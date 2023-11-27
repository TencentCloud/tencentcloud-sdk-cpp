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


MnaClient::ActivateHardwareOutcome MnaClient::ActivateHardware(const ActivateHardwareRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateHardware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateHardwareResponse rsp = ActivateHardwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateHardwareOutcome(rsp);
        else
            return ActivateHardwareOutcome(o.GetError());
    }
    else
    {
        return ActivateHardwareOutcome(outcome.GetError());
    }
}

void MnaClient::ActivateHardwareAsync(const ActivateHardwareRequest& request, const ActivateHardwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ActivateHardware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::ActivateHardwareOutcomeCallable MnaClient::ActivateHardwareCallable(const ActivateHardwareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ActivateHardwareOutcome()>>(
        [this, request]()
        {
            return this->ActivateHardware(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

MnaClient::AddHardwareOutcome MnaClient::AddHardware(const AddHardwareRequest &request)
{
    auto outcome = MakeRequest(request, "AddHardware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddHardwareResponse rsp = AddHardwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddHardwareOutcome(rsp);
        else
            return AddHardwareOutcome(o.GetError());
    }
    else
    {
        return AddHardwareOutcome(outcome.GetError());
    }
}

void MnaClient::AddHardwareAsync(const AddHardwareRequest& request, const AddHardwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddHardware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::AddHardwareOutcomeCallable MnaClient::AddHardwareCallable(const AddHardwareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddHardwareOutcome()>>(
        [this, request]()
        {
            return this->AddHardware(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::CreateEncryptedKeyOutcome MnaClient::CreateEncryptedKey(const CreateEncryptedKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEncryptedKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEncryptedKeyResponse rsp = CreateEncryptedKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEncryptedKeyOutcome(rsp);
        else
            return CreateEncryptedKeyOutcome(o.GetError());
    }
    else
    {
        return CreateEncryptedKeyOutcome(outcome.GetError());
    }
}

void MnaClient::CreateEncryptedKeyAsync(const CreateEncryptedKeyRequest& request, const CreateEncryptedKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEncryptedKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::CreateEncryptedKeyOutcomeCallable MnaClient::CreateEncryptedKeyCallable(const CreateEncryptedKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEncryptedKeyOutcome()>>(
        [this, request]()
        {
            return this->CreateEncryptedKey(request);
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

MnaClient::GetFlowStatisticOutcome MnaClient::GetFlowStatistic(const GetFlowStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "GetFlowStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFlowStatisticResponse rsp = GetFlowStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFlowStatisticOutcome(rsp);
        else
            return GetFlowStatisticOutcome(o.GetError());
    }
    else
    {
        return GetFlowStatisticOutcome(outcome.GetError());
    }
}

void MnaClient::GetFlowStatisticAsync(const GetFlowStatisticRequest& request, const GetFlowStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFlowStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetFlowStatisticOutcomeCallable MnaClient::GetFlowStatisticCallable(const GetFlowStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFlowStatisticOutcome()>>(
        [this, request]()
        {
            return this->GetFlowStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetHardwareListOutcome MnaClient::GetHardwareList(const GetHardwareListRequest &request)
{
    auto outcome = MakeRequest(request, "GetHardwareList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetHardwareListResponse rsp = GetHardwareListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetHardwareListOutcome(rsp);
        else
            return GetHardwareListOutcome(o.GetError());
    }
    else
    {
        return GetHardwareListOutcome(outcome.GetError());
    }
}

void MnaClient::GetHardwareListAsync(const GetHardwareListRequest& request, const GetHardwareListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetHardwareList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetHardwareListOutcomeCallable MnaClient::GetHardwareListCallable(const GetHardwareListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetHardwareListOutcome()>>(
        [this, request]()
        {
            return this->GetHardwareList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetMultiFlowStatisticOutcome MnaClient::GetMultiFlowStatistic(const GetMultiFlowStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "GetMultiFlowStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMultiFlowStatisticResponse rsp = GetMultiFlowStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMultiFlowStatisticOutcome(rsp);
        else
            return GetMultiFlowStatisticOutcome(o.GetError());
    }
    else
    {
        return GetMultiFlowStatisticOutcome(outcome.GetError());
    }
}

void MnaClient::GetMultiFlowStatisticAsync(const GetMultiFlowStatisticRequest& request, const GetMultiFlowStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetMultiFlowStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetMultiFlowStatisticOutcomeCallable MnaClient::GetMultiFlowStatisticCallable(const GetMultiFlowStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetMultiFlowStatisticOutcome()>>(
        [this, request]()
        {
            return this->GetMultiFlowStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetNetMonitorOutcome MnaClient::GetNetMonitor(const GetNetMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "GetNetMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetNetMonitorResponse rsp = GetNetMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetNetMonitorOutcome(rsp);
        else
            return GetNetMonitorOutcome(o.GetError());
    }
    else
    {
        return GetNetMonitorOutcome(outcome.GetError());
    }
}

void MnaClient::GetNetMonitorAsync(const GetNetMonitorRequest& request, const GetNetMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetNetMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetNetMonitorOutcomeCallable MnaClient::GetNetMonitorCallable(const GetNetMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetNetMonitorOutcome()>>(
        [this, request]()
        {
            return this->GetNetMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetPublicKeyOutcome MnaClient::GetPublicKey(const GetPublicKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GetPublicKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPublicKeyResponse rsp = GetPublicKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPublicKeyOutcome(rsp);
        else
            return GetPublicKeyOutcome(o.GetError());
    }
    else
    {
        return GetPublicKeyOutcome(outcome.GetError());
    }
}

void MnaClient::GetPublicKeyAsync(const GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPublicKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetPublicKeyOutcomeCallable MnaClient::GetPublicKeyCallable(const GetPublicKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPublicKeyOutcome()>>(
        [this, request]()
        {
            return this->GetPublicKey(request);
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

MnaClient::GetVendorHardwareOutcome MnaClient::GetVendorHardware(const GetVendorHardwareRequest &request)
{
    auto outcome = MakeRequest(request, "GetVendorHardware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetVendorHardwareResponse rsp = GetVendorHardwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetVendorHardwareOutcome(rsp);
        else
            return GetVendorHardwareOutcome(o.GetError());
    }
    else
    {
        return GetVendorHardwareOutcome(outcome.GetError());
    }
}

void MnaClient::GetVendorHardwareAsync(const GetVendorHardwareRequest& request, const GetVendorHardwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetVendorHardware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetVendorHardwareOutcomeCallable MnaClient::GetVendorHardwareCallable(const GetVendorHardwareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetVendorHardwareOutcome()>>(
        [this, request]()
        {
            return this->GetVendorHardware(request);
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

MnaClient::UpdateHardwareOutcome MnaClient::UpdateHardware(const UpdateHardwareRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateHardware");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateHardwareResponse rsp = UpdateHardwareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateHardwareOutcome(rsp);
        else
            return UpdateHardwareOutcome(o.GetError());
    }
    else
    {
        return UpdateHardwareOutcome(outcome.GetError());
    }
}

void MnaClient::UpdateHardwareAsync(const UpdateHardwareRequest& request, const UpdateHardwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateHardware(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::UpdateHardwareOutcomeCallable MnaClient::UpdateHardwareCallable(const UpdateHardwareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateHardwareOutcome()>>(
        [this, request]()
        {
            return this->UpdateHardware(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


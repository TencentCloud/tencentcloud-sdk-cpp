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

MnaClient::AddGroupOutcome MnaClient::AddGroup(const AddGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddGroupResponse rsp = AddGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddGroupOutcome(rsp);
        else
            return AddGroupOutcome(o.GetError());
    }
    else
    {
        return AddGroupOutcome(outcome.GetError());
    }
}

void MnaClient::AddGroupAsync(const AddGroupRequest& request, const AddGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::AddGroupOutcomeCallable MnaClient::AddGroupCallable(const AddGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddGroupOutcome()>>(
        [this, request]()
        {
            return this->AddGroup(request);
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

MnaClient::AddL3ConnOutcome MnaClient::AddL3Conn(const AddL3ConnRequest &request)
{
    auto outcome = MakeRequest(request, "AddL3Conn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddL3ConnResponse rsp = AddL3ConnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddL3ConnOutcome(rsp);
        else
            return AddL3ConnOutcome(o.GetError());
    }
    else
    {
        return AddL3ConnOutcome(outcome.GetError());
    }
}

void MnaClient::AddL3ConnAsync(const AddL3ConnRequest& request, const AddL3ConnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddL3Conn(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::AddL3ConnOutcomeCallable MnaClient::AddL3ConnCallable(const AddL3ConnRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddL3ConnOutcome()>>(
        [this, request]()
        {
            return this->AddL3Conn(request);
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

MnaClient::DeleteGroupOutcome MnaClient::DeleteGroup(const DeleteGroupRequest &request)
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

void MnaClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::DeleteGroupOutcomeCallable MnaClient::DeleteGroupCallable(const DeleteGroupRequest &request)
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

MnaClient::DeleteL3ConnOutcome MnaClient::DeleteL3Conn(const DeleteL3ConnRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteL3Conn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteL3ConnResponse rsp = DeleteL3ConnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteL3ConnOutcome(rsp);
        else
            return DeleteL3ConnOutcome(o.GetError());
    }
    else
    {
        return DeleteL3ConnOutcome(outcome.GetError());
    }
}

void MnaClient::DeleteL3ConnAsync(const DeleteL3ConnRequest& request, const DeleteL3ConnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteL3Conn(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::DeleteL3ConnOutcomeCallable MnaClient::DeleteL3ConnCallable(const DeleteL3ConnRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteL3ConnOutcome()>>(
        [this, request]()
        {
            return this->DeleteL3Conn(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::DownloadActiveDeviceCountOutcome MnaClient::DownloadActiveDeviceCount(const DownloadActiveDeviceCountRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadActiveDeviceCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadActiveDeviceCountResponse rsp = DownloadActiveDeviceCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadActiveDeviceCountOutcome(rsp);
        else
            return DownloadActiveDeviceCountOutcome(o.GetError());
    }
    else
    {
        return DownloadActiveDeviceCountOutcome(outcome.GetError());
    }
}

void MnaClient::DownloadActiveDeviceCountAsync(const DownloadActiveDeviceCountRequest& request, const DownloadActiveDeviceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadActiveDeviceCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::DownloadActiveDeviceCountOutcomeCallable MnaClient::DownloadActiveDeviceCountCallable(const DownloadActiveDeviceCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadActiveDeviceCountOutcome()>>(
        [this, request]()
        {
            return this->DownloadActiveDeviceCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetActiveDeviceCountOutcome MnaClient::GetActiveDeviceCount(const GetActiveDeviceCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetActiveDeviceCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetActiveDeviceCountResponse rsp = GetActiveDeviceCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetActiveDeviceCountOutcome(rsp);
        else
            return GetActiveDeviceCountOutcome(o.GetError());
    }
    else
    {
        return GetActiveDeviceCountOutcome(outcome.GetError());
    }
}

void MnaClient::GetActiveDeviceCountAsync(const GetActiveDeviceCountRequest& request, const GetActiveDeviceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetActiveDeviceCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetActiveDeviceCountOutcomeCallable MnaClient::GetActiveDeviceCountCallable(const GetActiveDeviceCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetActiveDeviceCountOutcome()>>(
        [this, request]()
        {
            return this->GetActiveDeviceCount(request);
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

MnaClient::GetDevicePayModeOutcome MnaClient::GetDevicePayMode(const GetDevicePayModeRequest &request)
{
    auto outcome = MakeRequest(request, "GetDevicePayMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDevicePayModeResponse rsp = GetDevicePayModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDevicePayModeOutcome(rsp);
        else
            return GetDevicePayModeOutcome(o.GetError());
    }
    else
    {
        return GetDevicePayModeOutcome(outcome.GetError());
    }
}

void MnaClient::GetDevicePayModeAsync(const GetDevicePayModeRequest& request, const GetDevicePayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDevicePayMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetDevicePayModeOutcomeCallable MnaClient::GetDevicePayModeCallable(const GetDevicePayModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDevicePayModeOutcome()>>(
        [this, request]()
        {
            return this->GetDevicePayMode(request);
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

MnaClient::GetFlowAlarmInfoOutcome MnaClient::GetFlowAlarmInfo(const GetFlowAlarmInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetFlowAlarmInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFlowAlarmInfoResponse rsp = GetFlowAlarmInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFlowAlarmInfoOutcome(rsp);
        else
            return GetFlowAlarmInfoOutcome(o.GetError());
    }
    else
    {
        return GetFlowAlarmInfoOutcome(outcome.GetError());
    }
}

void MnaClient::GetFlowAlarmInfoAsync(const GetFlowAlarmInfoRequest& request, const GetFlowAlarmInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFlowAlarmInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetFlowAlarmInfoOutcomeCallable MnaClient::GetFlowAlarmInfoCallable(const GetFlowAlarmInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFlowAlarmInfoOutcome()>>(
        [this, request]()
        {
            return this->GetFlowAlarmInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetFlowPackagesOutcome MnaClient::GetFlowPackages(const GetFlowPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "GetFlowPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFlowPackagesResponse rsp = GetFlowPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFlowPackagesOutcome(rsp);
        else
            return GetFlowPackagesOutcome(o.GetError());
    }
    else
    {
        return GetFlowPackagesOutcome(outcome.GetError());
    }
}

void MnaClient::GetFlowPackagesAsync(const GetFlowPackagesRequest& request, const GetFlowPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFlowPackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetFlowPackagesOutcomeCallable MnaClient::GetFlowPackagesCallable(const GetFlowPackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFlowPackagesOutcome()>>(
        [this, request]()
        {
            return this->GetFlowPackages(request);
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

MnaClient::GetFlowStatisticByGroupOutcome MnaClient::GetFlowStatisticByGroup(const GetFlowStatisticByGroupRequest &request)
{
    auto outcome = MakeRequest(request, "GetFlowStatisticByGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFlowStatisticByGroupResponse rsp = GetFlowStatisticByGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFlowStatisticByGroupOutcome(rsp);
        else
            return GetFlowStatisticByGroupOutcome(o.GetError());
    }
    else
    {
        return GetFlowStatisticByGroupOutcome(outcome.GetError());
    }
}

void MnaClient::GetFlowStatisticByGroupAsync(const GetFlowStatisticByGroupRequest& request, const GetFlowStatisticByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFlowStatisticByGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetFlowStatisticByGroupOutcomeCallable MnaClient::GetFlowStatisticByGroupCallable(const GetFlowStatisticByGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFlowStatisticByGroupOutcome()>>(
        [this, request]()
        {
            return this->GetFlowStatisticByGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetFlowStatisticByRegionOutcome MnaClient::GetFlowStatisticByRegion(const GetFlowStatisticByRegionRequest &request)
{
    auto outcome = MakeRequest(request, "GetFlowStatisticByRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFlowStatisticByRegionResponse rsp = GetFlowStatisticByRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFlowStatisticByRegionOutcome(rsp);
        else
            return GetFlowStatisticByRegionOutcome(o.GetError());
    }
    else
    {
        return GetFlowStatisticByRegionOutcome(outcome.GetError());
    }
}

void MnaClient::GetFlowStatisticByRegionAsync(const GetFlowStatisticByRegionRequest& request, const GetFlowStatisticByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFlowStatisticByRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetFlowStatisticByRegionOutcomeCallable MnaClient::GetFlowStatisticByRegionCallable(const GetFlowStatisticByRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFlowStatisticByRegionOutcome()>>(
        [this, request]()
        {
            return this->GetFlowStatisticByRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetGroupDetailOutcome MnaClient::GetGroupDetail(const GetGroupDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroupDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupDetailResponse rsp = GetGroupDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupDetailOutcome(rsp);
        else
            return GetGroupDetailOutcome(o.GetError());
    }
    else
    {
        return GetGroupDetailOutcome(outcome.GetError());
    }
}

void MnaClient::GetGroupDetailAsync(const GetGroupDetailRequest& request, const GetGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGroupDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetGroupDetailOutcomeCallable MnaClient::GetGroupDetailCallable(const GetGroupDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetGroupDetailOutcome()>>(
        [this, request]()
        {
            return this->GetGroupDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GetGroupListOutcome MnaClient::GetGroupList(const GetGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupListResponse rsp = GetGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupListOutcome(rsp);
        else
            return GetGroupListOutcome(o.GetError());
    }
    else
    {
        return GetGroupListOutcome(outcome.GetError());
    }
}

void MnaClient::GetGroupListAsync(const GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetGroupListOutcomeCallable MnaClient::GetGroupListCallable(const GetGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetGroupListOutcome()>>(
        [this, request]()
        {
            return this->GetGroupList(request);
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

MnaClient::GetL3ConnListOutcome MnaClient::GetL3ConnList(const GetL3ConnListRequest &request)
{
    auto outcome = MakeRequest(request, "GetL3ConnList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetL3ConnListResponse rsp = GetL3ConnListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetL3ConnListOutcome(rsp);
        else
            return GetL3ConnListOutcome(o.GetError());
    }
    else
    {
        return GetL3ConnListOutcome(outcome.GetError());
    }
}

void MnaClient::GetL3ConnListAsync(const GetL3ConnListRequest& request, const GetL3ConnListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetL3ConnList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GetL3ConnListOutcomeCallable MnaClient::GetL3ConnListCallable(const GetL3ConnListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetL3ConnListOutcome()>>(
        [this, request]()
        {
            return this->GetL3ConnList(request);
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

MnaClient::GroupAddDeviceOutcome MnaClient::GroupAddDevice(const GroupAddDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "GroupAddDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GroupAddDeviceResponse rsp = GroupAddDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GroupAddDeviceOutcome(rsp);
        else
            return GroupAddDeviceOutcome(o.GetError());
    }
    else
    {
        return GroupAddDeviceOutcome(outcome.GetError());
    }
}

void MnaClient::GroupAddDeviceAsync(const GroupAddDeviceRequest& request, const GroupAddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GroupAddDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GroupAddDeviceOutcomeCallable MnaClient::GroupAddDeviceCallable(const GroupAddDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GroupAddDeviceOutcome()>>(
        [this, request]()
        {
            return this->GroupAddDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::GroupDeleteDeviceOutcome MnaClient::GroupDeleteDevice(const GroupDeleteDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "GroupDeleteDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GroupDeleteDeviceResponse rsp = GroupDeleteDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GroupDeleteDeviceOutcome(rsp);
        else
            return GroupDeleteDeviceOutcome(o.GetError());
    }
    else
    {
        return GroupDeleteDeviceOutcome(outcome.GetError());
    }
}

void MnaClient::GroupDeleteDeviceAsync(const GroupDeleteDeviceRequest& request, const GroupDeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GroupDeleteDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::GroupDeleteDeviceOutcomeCallable MnaClient::GroupDeleteDeviceCallable(const GroupDeleteDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GroupDeleteDeviceOutcome()>>(
        [this, request]()
        {
            return this->GroupDeleteDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::ModifyPackageRenewFlagOutcome MnaClient::ModifyPackageRenewFlag(const ModifyPackageRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPackageRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPackageRenewFlagResponse rsp = ModifyPackageRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPackageRenewFlagOutcome(rsp);
        else
            return ModifyPackageRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyPackageRenewFlagOutcome(outcome.GetError());
    }
}

void MnaClient::ModifyPackageRenewFlagAsync(const ModifyPackageRenewFlagRequest& request, const ModifyPackageRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPackageRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::ModifyPackageRenewFlagOutcomeCallable MnaClient::ModifyPackageRenewFlagCallable(const ModifyPackageRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPackageRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyPackageRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::OrderFlowPackageOutcome MnaClient::OrderFlowPackage(const OrderFlowPackageRequest &request)
{
    auto outcome = MakeRequest(request, "OrderFlowPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OrderFlowPackageResponse rsp = OrderFlowPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OrderFlowPackageOutcome(rsp);
        else
            return OrderFlowPackageOutcome(o.GetError());
    }
    else
    {
        return OrderFlowPackageOutcome(outcome.GetError());
    }
}

void MnaClient::OrderFlowPackageAsync(const OrderFlowPackageRequest& request, const OrderFlowPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OrderFlowPackage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::OrderFlowPackageOutcomeCallable MnaClient::OrderFlowPackageCallable(const OrderFlowPackageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OrderFlowPackageOutcome()>>(
        [this, request]()
        {
            return this->OrderFlowPackage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::OrderPerLicenseOutcome MnaClient::OrderPerLicense(const OrderPerLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "OrderPerLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OrderPerLicenseResponse rsp = OrderPerLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OrderPerLicenseOutcome(rsp);
        else
            return OrderPerLicenseOutcome(o.GetError());
    }
    else
    {
        return OrderPerLicenseOutcome(outcome.GetError());
    }
}

void MnaClient::OrderPerLicenseAsync(const OrderPerLicenseRequest& request, const OrderPerLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OrderPerLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::OrderPerLicenseOutcomeCallable MnaClient::OrderPerLicenseCallable(const OrderPerLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OrderPerLicenseOutcome()>>(
        [this, request]()
        {
            return this->OrderPerLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::SetNotifyUrlOutcome MnaClient::SetNotifyUrl(const SetNotifyUrlRequest &request)
{
    auto outcome = MakeRequest(request, "SetNotifyUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNotifyUrlResponse rsp = SetNotifyUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNotifyUrlOutcome(rsp);
        else
            return SetNotifyUrlOutcome(o.GetError());
    }
    else
    {
        return SetNotifyUrlOutcome(outcome.GetError());
    }
}

void MnaClient::SetNotifyUrlAsync(const SetNotifyUrlRequest& request, const SetNotifyUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetNotifyUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::SetNotifyUrlOutcomeCallable MnaClient::SetNotifyUrlCallable(const SetNotifyUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetNotifyUrlOutcome()>>(
        [this, request]()
        {
            return this->SetNotifyUrl(request);
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

MnaClient::UpdateGroupOutcome MnaClient::UpdateGroup(const UpdateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGroupResponse rsp = UpdateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGroupOutcome(rsp);
        else
            return UpdateGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateGroupOutcome(outcome.GetError());
    }
}

void MnaClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::UpdateGroupOutcomeCallable MnaClient::UpdateGroupCallable(const UpdateGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateGroup(request);
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

MnaClient::UpdateL3CidrOutcome MnaClient::UpdateL3Cidr(const UpdateL3CidrRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateL3Cidr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateL3CidrResponse rsp = UpdateL3CidrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateL3CidrOutcome(rsp);
        else
            return UpdateL3CidrOutcome(o.GetError());
    }
    else
    {
        return UpdateL3CidrOutcome(outcome.GetError());
    }
}

void MnaClient::UpdateL3CidrAsync(const UpdateL3CidrRequest& request, const UpdateL3CidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateL3Cidr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::UpdateL3CidrOutcomeCallable MnaClient::UpdateL3CidrCallable(const UpdateL3CidrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateL3CidrOutcome()>>(
        [this, request]()
        {
            return this->UpdateL3Cidr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::UpdateL3ConnOutcome MnaClient::UpdateL3Conn(const UpdateL3ConnRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateL3Conn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateL3ConnResponse rsp = UpdateL3ConnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateL3ConnOutcome(rsp);
        else
            return UpdateL3ConnOutcome(o.GetError());
    }
    else
    {
        return UpdateL3ConnOutcome(outcome.GetError());
    }
}

void MnaClient::UpdateL3ConnAsync(const UpdateL3ConnRequest& request, const UpdateL3ConnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateL3Conn(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::UpdateL3ConnOutcomeCallable MnaClient::UpdateL3ConnCallable(const UpdateL3ConnRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateL3ConnOutcome()>>(
        [this, request]()
        {
            return this->UpdateL3Conn(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MnaClient::UpdateL3SwitchOutcome MnaClient::UpdateL3Switch(const UpdateL3SwitchRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateL3Switch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateL3SwitchResponse rsp = UpdateL3SwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateL3SwitchOutcome(rsp);
        else
            return UpdateL3SwitchOutcome(o.GetError());
    }
    else
    {
        return UpdateL3SwitchOutcome(outcome.GetError());
    }
}

void MnaClient::UpdateL3SwitchAsync(const UpdateL3SwitchRequest& request, const UpdateL3SwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateL3Switch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MnaClient::UpdateL3SwitchOutcomeCallable MnaClient::UpdateL3SwitchCallable(const UpdateL3SwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateL3SwitchOutcome()>>(
        [this, request]()
        {
            return this->UpdateL3Switch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


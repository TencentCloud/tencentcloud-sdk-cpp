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
    using Req = const ActivateHardwareRequest&;
    using Resp = ActivateHardwareResponse;

    DoRequestAsync<Req, Resp>(
        "ActivateHardware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::ActivateHardwareOutcomeCallable MnaClient::ActivateHardwareCallable(const ActivateHardwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActivateHardwareOutcome>>();
    ActivateHardwareAsync(
    request,
    [prom](
        const MnaClient*,
        const ActivateHardwareRequest&,
        ActivateHardwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddDeviceRequest&;
    using Resp = AddDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "AddDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::AddDeviceOutcomeCallable MnaClient::AddDeviceCallable(const AddDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddDeviceOutcome>>();
    AddDeviceAsync(
    request,
    [prom](
        const MnaClient*,
        const AddDeviceRequest&,
        AddDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddGroupRequest&;
    using Resp = AddGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AddGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::AddGroupOutcomeCallable MnaClient::AddGroupCallable(const AddGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddGroupOutcome>>();
    AddGroupAsync(
    request,
    [prom](
        const MnaClient*,
        const AddGroupRequest&,
        AddGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddHardwareRequest&;
    using Resp = AddHardwareResponse;

    DoRequestAsync<Req, Resp>(
        "AddHardware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::AddHardwareOutcomeCallable MnaClient::AddHardwareCallable(const AddHardwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddHardwareOutcome>>();
    AddHardwareAsync(
    request,
    [prom](
        const MnaClient*,
        const AddHardwareRequest&,
        AddHardwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddL3ConnRequest&;
    using Resp = AddL3ConnResponse;

    DoRequestAsync<Req, Resp>(
        "AddL3Conn", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::AddL3ConnOutcomeCallable MnaClient::AddL3ConnCallable(const AddL3ConnRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddL3ConnOutcome>>();
    AddL3ConnAsync(
    request,
    [prom](
        const MnaClient*,
        const AddL3ConnRequest&,
        AddL3ConnOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateEncryptedKeyRequest&;
    using Resp = CreateEncryptedKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEncryptedKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::CreateEncryptedKeyOutcomeCallable MnaClient::CreateEncryptedKeyCallable(const CreateEncryptedKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEncryptedKeyOutcome>>();
    CreateEncryptedKeyAsync(
    request,
    [prom](
        const MnaClient*,
        const CreateEncryptedKeyRequest&,
        CreateEncryptedKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDeviceRequest&;
    using Resp = DeleteDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::DeleteDeviceOutcomeCallable MnaClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceOutcome>>();
    DeleteDeviceAsync(
    request,
    [prom](
        const MnaClient*,
        const DeleteDeviceRequest&,
        DeleteDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteGroupRequest&;
    using Resp = DeleteGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::DeleteGroupOutcomeCallable MnaClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGroupOutcome>>();
    DeleteGroupAsync(
    request,
    [prom](
        const MnaClient*,
        const DeleteGroupRequest&,
        DeleteGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteL3ConnRequest&;
    using Resp = DeleteL3ConnResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteL3Conn", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::DeleteL3ConnOutcomeCallable MnaClient::DeleteL3ConnCallable(const DeleteL3ConnRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteL3ConnOutcome>>();
    DeleteL3ConnAsync(
    request,
    [prom](
        const MnaClient*,
        const DeleteL3ConnRequest&,
        DeleteL3ConnOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DownloadActiveDeviceCountRequest&;
    using Resp = DownloadActiveDeviceCountResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadActiveDeviceCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::DownloadActiveDeviceCountOutcomeCallable MnaClient::DownloadActiveDeviceCountCallable(const DownloadActiveDeviceCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadActiveDeviceCountOutcome>>();
    DownloadActiveDeviceCountAsync(
    request,
    [prom](
        const MnaClient*,
        const DownloadActiveDeviceCountRequest&,
        DownloadActiveDeviceCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetActiveDeviceCountRequest&;
    using Resp = GetActiveDeviceCountResponse;

    DoRequestAsync<Req, Resp>(
        "GetActiveDeviceCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetActiveDeviceCountOutcomeCallable MnaClient::GetActiveDeviceCountCallable(const GetActiveDeviceCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetActiveDeviceCountOutcome>>();
    GetActiveDeviceCountAsync(
    request,
    [prom](
        const MnaClient*,
        const GetActiveDeviceCountRequest&,
        GetActiveDeviceCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetDeviceRequest&;
    using Resp = GetDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "GetDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetDeviceOutcomeCallable MnaClient::GetDeviceCallable(const GetDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceOutcome>>();
    GetDeviceAsync(
    request,
    [prom](
        const MnaClient*,
        const GetDeviceRequest&,
        GetDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetDevicePayModeRequest&;
    using Resp = GetDevicePayModeResponse;

    DoRequestAsync<Req, Resp>(
        "GetDevicePayMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetDevicePayModeOutcomeCallable MnaClient::GetDevicePayModeCallable(const GetDevicePayModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDevicePayModeOutcome>>();
    GetDevicePayModeAsync(
    request,
    [prom](
        const MnaClient*,
        const GetDevicePayModeRequest&,
        GetDevicePayModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetDevicesRequest&;
    using Resp = GetDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "GetDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetDevicesOutcomeCallable MnaClient::GetDevicesCallable(const GetDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDevicesOutcome>>();
    GetDevicesAsync(
    request,
    [prom](
        const MnaClient*,
        const GetDevicesRequest&,
        GetDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetFlowAlarmInfoRequest&;
    using Resp = GetFlowAlarmInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetFlowAlarmInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetFlowAlarmInfoOutcomeCallable MnaClient::GetFlowAlarmInfoCallable(const GetFlowAlarmInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFlowAlarmInfoOutcome>>();
    GetFlowAlarmInfoAsync(
    request,
    [prom](
        const MnaClient*,
        const GetFlowAlarmInfoRequest&,
        GetFlowAlarmInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetFlowPackagesRequest&;
    using Resp = GetFlowPackagesResponse;

    DoRequestAsync<Req, Resp>(
        "GetFlowPackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetFlowPackagesOutcomeCallable MnaClient::GetFlowPackagesCallable(const GetFlowPackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFlowPackagesOutcome>>();
    GetFlowPackagesAsync(
    request,
    [prom](
        const MnaClient*,
        const GetFlowPackagesRequest&,
        GetFlowPackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetFlowStatisticRequest&;
    using Resp = GetFlowStatisticResponse;

    DoRequestAsync<Req, Resp>(
        "GetFlowStatistic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetFlowStatisticOutcomeCallable MnaClient::GetFlowStatisticCallable(const GetFlowStatisticRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFlowStatisticOutcome>>();
    GetFlowStatisticAsync(
    request,
    [prom](
        const MnaClient*,
        const GetFlowStatisticRequest&,
        GetFlowStatisticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetFlowStatisticByGroupRequest&;
    using Resp = GetFlowStatisticByGroupResponse;

    DoRequestAsync<Req, Resp>(
        "GetFlowStatisticByGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetFlowStatisticByGroupOutcomeCallable MnaClient::GetFlowStatisticByGroupCallable(const GetFlowStatisticByGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFlowStatisticByGroupOutcome>>();
    GetFlowStatisticByGroupAsync(
    request,
    [prom](
        const MnaClient*,
        const GetFlowStatisticByGroupRequest&,
        GetFlowStatisticByGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetFlowStatisticByRegionRequest&;
    using Resp = GetFlowStatisticByRegionResponse;

    DoRequestAsync<Req, Resp>(
        "GetFlowStatisticByRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetFlowStatisticByRegionOutcomeCallable MnaClient::GetFlowStatisticByRegionCallable(const GetFlowStatisticByRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFlowStatisticByRegionOutcome>>();
    GetFlowStatisticByRegionAsync(
    request,
    [prom](
        const MnaClient*,
        const GetFlowStatisticByRegionRequest&,
        GetFlowStatisticByRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetGroupDetailRequest&;
    using Resp = GetGroupDetailResponse;

    DoRequestAsync<Req, Resp>(
        "GetGroupDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetGroupDetailOutcomeCallable MnaClient::GetGroupDetailCallable(const GetGroupDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetGroupDetailOutcome>>();
    GetGroupDetailAsync(
    request,
    [prom](
        const MnaClient*,
        const GetGroupDetailRequest&,
        GetGroupDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetGroupListRequest&;
    using Resp = GetGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "GetGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetGroupListOutcomeCallable MnaClient::GetGroupListCallable(const GetGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetGroupListOutcome>>();
    GetGroupListAsync(
    request,
    [prom](
        const MnaClient*,
        const GetGroupListRequest&,
        GetGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetHardwareListRequest&;
    using Resp = GetHardwareListResponse;

    DoRequestAsync<Req, Resp>(
        "GetHardwareList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetHardwareListOutcomeCallable MnaClient::GetHardwareListCallable(const GetHardwareListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetHardwareListOutcome>>();
    GetHardwareListAsync(
    request,
    [prom](
        const MnaClient*,
        const GetHardwareListRequest&,
        GetHardwareListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetL3ConnListRequest&;
    using Resp = GetL3ConnListResponse;

    DoRequestAsync<Req, Resp>(
        "GetL3ConnList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetL3ConnListOutcomeCallable MnaClient::GetL3ConnListCallable(const GetL3ConnListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetL3ConnListOutcome>>();
    GetL3ConnListAsync(
    request,
    [prom](
        const MnaClient*,
        const GetL3ConnListRequest&,
        GetL3ConnListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetMultiFlowStatisticRequest&;
    using Resp = GetMultiFlowStatisticResponse;

    DoRequestAsync<Req, Resp>(
        "GetMultiFlowStatistic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetMultiFlowStatisticOutcomeCallable MnaClient::GetMultiFlowStatisticCallable(const GetMultiFlowStatisticRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetMultiFlowStatisticOutcome>>();
    GetMultiFlowStatisticAsync(
    request,
    [prom](
        const MnaClient*,
        const GetMultiFlowStatisticRequest&,
        GetMultiFlowStatisticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetNetMonitorRequest&;
    using Resp = GetNetMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "GetNetMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetNetMonitorOutcomeCallable MnaClient::GetNetMonitorCallable(const GetNetMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetNetMonitorOutcome>>();
    GetNetMonitorAsync(
    request,
    [prom](
        const MnaClient*,
        const GetNetMonitorRequest&,
        GetNetMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetPublicKeyRequest&;
    using Resp = GetPublicKeyResponse;

    DoRequestAsync<Req, Resp>(
        "GetPublicKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetPublicKeyOutcomeCallable MnaClient::GetPublicKeyCallable(const GetPublicKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPublicKeyOutcome>>();
    GetPublicKeyAsync(
    request,
    [prom](
        const MnaClient*,
        const GetPublicKeyRequest&,
        GetPublicKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetStatisticDataRequest&;
    using Resp = GetStatisticDataResponse;

    DoRequestAsync<Req, Resp>(
        "GetStatisticData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetStatisticDataOutcomeCallable MnaClient::GetStatisticDataCallable(const GetStatisticDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetStatisticDataOutcome>>();
    GetStatisticDataAsync(
    request,
    [prom](
        const MnaClient*,
        const GetStatisticDataRequest&,
        GetStatisticDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetVendorHardwareRequest&;
    using Resp = GetVendorHardwareResponse;

    DoRequestAsync<Req, Resp>(
        "GetVendorHardware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GetVendorHardwareOutcomeCallable MnaClient::GetVendorHardwareCallable(const GetVendorHardwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetVendorHardwareOutcome>>();
    GetVendorHardwareAsync(
    request,
    [prom](
        const MnaClient*,
        const GetVendorHardwareRequest&,
        GetVendorHardwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GroupAddDeviceRequest&;
    using Resp = GroupAddDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "GroupAddDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GroupAddDeviceOutcomeCallable MnaClient::GroupAddDeviceCallable(const GroupAddDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GroupAddDeviceOutcome>>();
    GroupAddDeviceAsync(
    request,
    [prom](
        const MnaClient*,
        const GroupAddDeviceRequest&,
        GroupAddDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GroupDeleteDeviceRequest&;
    using Resp = GroupDeleteDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "GroupDeleteDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::GroupDeleteDeviceOutcomeCallable MnaClient::GroupDeleteDeviceCallable(const GroupDeleteDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GroupDeleteDeviceOutcome>>();
    GroupDeleteDeviceAsync(
    request,
    [prom](
        const MnaClient*,
        const GroupDeleteDeviceRequest&,
        GroupDeleteDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyPackageRenewFlagRequest&;
    using Resp = ModifyPackageRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPackageRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::ModifyPackageRenewFlagOutcomeCallable MnaClient::ModifyPackageRenewFlagCallable(const ModifyPackageRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPackageRenewFlagOutcome>>();
    ModifyPackageRenewFlagAsync(
    request,
    [prom](
        const MnaClient*,
        const ModifyPackageRenewFlagRequest&,
        ModifyPackageRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const OrderFlowPackageRequest&;
    using Resp = OrderFlowPackageResponse;

    DoRequestAsync<Req, Resp>(
        "OrderFlowPackage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::OrderFlowPackageOutcomeCallable MnaClient::OrderFlowPackageCallable(const OrderFlowPackageRequest &request)
{
    const auto prom = std::make_shared<std::promise<OrderFlowPackageOutcome>>();
    OrderFlowPackageAsync(
    request,
    [prom](
        const MnaClient*,
        const OrderFlowPackageRequest&,
        OrderFlowPackageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const OrderPerLicenseRequest&;
    using Resp = OrderPerLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "OrderPerLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::OrderPerLicenseOutcomeCallable MnaClient::OrderPerLicenseCallable(const OrderPerLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<OrderPerLicenseOutcome>>();
    OrderPerLicenseAsync(
    request,
    [prom](
        const MnaClient*,
        const OrderPerLicenseRequest&,
        OrderPerLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MnaClient::ReportOrderOutcome MnaClient::ReportOrder(const ReportOrderRequest &request)
{
    auto outcome = MakeRequest(request, "ReportOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportOrderResponse rsp = ReportOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportOrderOutcome(rsp);
        else
            return ReportOrderOutcome(o.GetError());
    }
    else
    {
        return ReportOrderOutcome(outcome.GetError());
    }
}

void MnaClient::ReportOrderAsync(const ReportOrderRequest& request, const ReportOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportOrderRequest&;
    using Resp = ReportOrderResponse;

    DoRequestAsync<Req, Resp>(
        "ReportOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::ReportOrderOutcomeCallable MnaClient::ReportOrderCallable(const ReportOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportOrderOutcome>>();
    ReportOrderAsync(
    request,
    [prom](
        const MnaClient*,
        const ReportOrderRequest&,
        ReportOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SetNotifyUrlRequest&;
    using Resp = SetNotifyUrlResponse;

    DoRequestAsync<Req, Resp>(
        "SetNotifyUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::SetNotifyUrlOutcomeCallable MnaClient::SetNotifyUrlCallable(const SetNotifyUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetNotifyUrlOutcome>>();
    SetNotifyUrlAsync(
    request,
    [prom](
        const MnaClient*,
        const SetNotifyUrlRequest&,
        SetNotifyUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateDeviceRequest&;
    using Resp = UpdateDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::UpdateDeviceOutcomeCallable MnaClient::UpdateDeviceCallable(const UpdateDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDeviceOutcome>>();
    UpdateDeviceAsync(
    request,
    [prom](
        const MnaClient*,
        const UpdateDeviceRequest&,
        UpdateDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateGroupRequest&;
    using Resp = UpdateGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::UpdateGroupOutcomeCallable MnaClient::UpdateGroupCallable(const UpdateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGroupOutcome>>();
    UpdateGroupAsync(
    request,
    [prom](
        const MnaClient*,
        const UpdateGroupRequest&,
        UpdateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateHardwareRequest&;
    using Resp = UpdateHardwareResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateHardware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::UpdateHardwareOutcomeCallable MnaClient::UpdateHardwareCallable(const UpdateHardwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateHardwareOutcome>>();
    UpdateHardwareAsync(
    request,
    [prom](
        const MnaClient*,
        const UpdateHardwareRequest&,
        UpdateHardwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateL3CidrRequest&;
    using Resp = UpdateL3CidrResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateL3Cidr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::UpdateL3CidrOutcomeCallable MnaClient::UpdateL3CidrCallable(const UpdateL3CidrRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateL3CidrOutcome>>();
    UpdateL3CidrAsync(
    request,
    [prom](
        const MnaClient*,
        const UpdateL3CidrRequest&,
        UpdateL3CidrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateL3ConnRequest&;
    using Resp = UpdateL3ConnResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateL3Conn", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::UpdateL3ConnOutcomeCallable MnaClient::UpdateL3ConnCallable(const UpdateL3ConnRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateL3ConnOutcome>>();
    UpdateL3ConnAsync(
    request,
    [prom](
        const MnaClient*,
        const UpdateL3ConnRequest&,
        UpdateL3ConnOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateL3SwitchRequest&;
    using Resp = UpdateL3SwitchResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateL3Switch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MnaClient::UpdateL3SwitchOutcomeCallable MnaClient::UpdateL3SwitchCallable(const UpdateL3SwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateL3SwitchOutcome>>();
    UpdateL3SwitchAsync(
    request,
    [prom](
        const MnaClient*,
        const UpdateL3SwitchRequest&,
        UpdateL3SwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


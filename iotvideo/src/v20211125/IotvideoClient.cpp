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

#include <tencentcloud/iotvideo/v20211125/IotvideoClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotvideo::V20211125;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-11-25";
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
    using Req = const ApplyAIModelRequest&;
    using Resp = ApplyAIModelResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyAIModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ApplyAIModelOutcomeCallable IotvideoClient::ApplyAIModelCallable(const ApplyAIModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyAIModelOutcome>>();
    ApplyAIModelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ApplyAIModelRequest&,
        ApplyAIModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BatchUpdateFirmwareRequest&;
    using Resp = BatchUpdateFirmwareResponse;

    DoRequestAsync<Req, Resp>(
        "BatchUpdateFirmware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::BatchUpdateFirmwareOutcomeCallable IotvideoClient::BatchUpdateFirmwareCallable(const BatchUpdateFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchUpdateFirmwareOutcome>>();
    BatchUpdateFirmwareAsync(
    request,
    [prom](
        const IotvideoClient*,
        const BatchUpdateFirmwareRequest&,
        BatchUpdateFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindCloudStorageUserRequest&;
    using Resp = BindCloudStorageUserResponse;

    DoRequestAsync<Req, Resp>(
        "BindCloudStorageUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::BindCloudStorageUserOutcomeCallable IotvideoClient::BindCloudStorageUserCallable(const BindCloudStorageUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindCloudStorageUserOutcome>>();
    BindCloudStorageUserAsync(
    request,
    [prom](
        const IotvideoClient*,
        const BindCloudStorageUserRequest&,
        BindCloudStorageUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CallDeviceActionAsyncOutcome IotvideoClient::CallDeviceActionAsync(const CallDeviceActionAsyncRequest &request)
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

void IotvideoClient::CallDeviceActionAsyncAsync(const CallDeviceActionAsyncRequest& request, const CallDeviceActionAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CallDeviceActionAsyncRequest&;
    using Resp = CallDeviceActionAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "CallDeviceActionAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CallDeviceActionAsyncOutcomeCallable IotvideoClient::CallDeviceActionAsyncCallable(const CallDeviceActionAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<CallDeviceActionAsyncOutcome>>();
    CallDeviceActionAsyncAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CallDeviceActionAsyncRequest&,
        CallDeviceActionAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CallDeviceActionSyncOutcome IotvideoClient::CallDeviceActionSync(const CallDeviceActionSyncRequest &request)
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

void IotvideoClient::CallDeviceActionSyncAsync(const CallDeviceActionSyncRequest& request, const CallDeviceActionSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CallDeviceActionSyncRequest&;
    using Resp = CallDeviceActionSyncResponse;

    DoRequestAsync<Req, Resp>(
        "CallDeviceActionSync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CallDeviceActionSyncOutcomeCallable IotvideoClient::CallDeviceActionSyncCallable(const CallDeviceActionSyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<CallDeviceActionSyncOutcome>>();
    CallDeviceActionSyncAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CallDeviceActionSyncRequest&,
        CallDeviceActionSyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CallTRTCDeviceOutcome IotvideoClient::CallTRTCDevice(const CallTRTCDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "CallTRTCDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CallTRTCDeviceResponse rsp = CallTRTCDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CallTRTCDeviceOutcome(rsp);
        else
            return CallTRTCDeviceOutcome(o.GetError());
    }
    else
    {
        return CallTRTCDeviceOutcome(outcome.GetError());
    }
}

void IotvideoClient::CallTRTCDeviceAsync(const CallTRTCDeviceRequest& request, const CallTRTCDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CallTRTCDeviceRequest&;
    using Resp = CallTRTCDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "CallTRTCDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CallTRTCDeviceOutcomeCallable IotvideoClient::CallTRTCDeviceCallable(const CallTRTCDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CallTRTCDeviceOutcome>>();
    CallTRTCDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CallTRTCDeviceRequest&,
        CallTRTCDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelAIModelApplicationRequest&;
    using Resp = CancelAIModelApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "CancelAIModelApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CancelAIModelApplicationOutcomeCallable IotvideoClient::CancelAIModelApplicationCallable(const CancelAIModelApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelAIModelApplicationOutcome>>();
    CancelAIModelApplicationAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CancelAIModelApplicationRequest&,
        CancelAIModelApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CancelDeviceFirmwareTaskRequest&;
    using Resp = CancelDeviceFirmwareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelDeviceFirmwareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CancelDeviceFirmwareTaskOutcomeCallable IotvideoClient::CancelDeviceFirmwareTaskCallable(const CancelDeviceFirmwareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelDeviceFirmwareTaskOutcome>>();
    CancelDeviceFirmwareTaskAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CancelDeviceFirmwareTaskRequest&,
        CancelDeviceFirmwareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::ChangeP2PRouteOutcome IotvideoClient::ChangeP2PRoute(const ChangeP2PRouteRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeP2PRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeP2PRouteResponse rsp = ChangeP2PRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeP2PRouteOutcome(rsp);
        else
            return ChangeP2PRouteOutcome(o.GetError());
    }
    else
    {
        return ChangeP2PRouteOutcome(outcome.GetError());
    }
}

void IotvideoClient::ChangeP2PRouteAsync(const ChangeP2PRouteRequest& request, const ChangeP2PRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeP2PRouteRequest&;
    using Resp = ChangeP2PRouteResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeP2PRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ChangeP2PRouteOutcomeCallable IotvideoClient::ChangeP2PRouteCallable(const ChangeP2PRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeP2PRouteOutcome>>();
    ChangeP2PRouteAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ChangeP2PRouteRequest&,
        ChangeP2PRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CheckForwardAuthRequest&;
    using Resp = CheckForwardAuthResponse;

    DoRequestAsync<Req, Resp>(
        "CheckForwardAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CheckForwardAuthOutcomeCallable IotvideoClient::CheckForwardAuthCallable(const CheckForwardAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckForwardAuthOutcome>>();
    CheckForwardAuthAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CheckForwardAuthRequest&,
        CheckForwardAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ControlDeviceDataRequest&;
    using Resp = ControlDeviceDataResponse;

    DoRequestAsync<Req, Resp>(
        "ControlDeviceData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ControlDeviceDataOutcomeCallable IotvideoClient::ControlDeviceDataCallable(const ControlDeviceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlDeviceDataOutcome>>();
    ControlDeviceDataAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ControlDeviceDataRequest&,
        ControlDeviceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAIDetectionRequest&;
    using Resp = CreateAIDetectionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAIDetection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateAIDetectionOutcomeCallable IotvideoClient::CreateAIDetectionCallable(const CreateAIDetectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAIDetectionOutcome>>();
    CreateAIDetectionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateAIDetectionRequest&,
        CreateAIDetectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateBatchRequest&;
    using Resp = CreateBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateBatchOutcomeCallable IotvideoClient::CreateBatchCallable(const CreateBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchOutcome>>();
    CreateBatchAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateBatchRequest&,
        CreateBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCOSCredentialsRequest&;
    using Resp = CreateCOSCredentialsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCOSCredentials", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateCOSCredentialsOutcomeCallable IotvideoClient::CreateCOSCredentialsCallable(const CreateCOSCredentialsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCOSCredentialsOutcome>>();
    CreateCOSCredentialsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateCOSCredentialsRequest&,
        CreateCOSCredentialsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCloudStorageRequest&;
    using Resp = CreateCloudStorageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateCloudStorageOutcomeCallable IotvideoClient::CreateCloudStorageCallable(const CreateCloudStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudStorageOutcome>>();
    CreateCloudStorageAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateCloudStorageRequest&,
        CreateCloudStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDataForwardRequest&;
    using Resp = CreateDataForwardResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataForward", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateDataForwardOutcomeCallable IotvideoClient::CreateDataForwardCallable(const CreateDataForwardRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataForwardOutcome>>();
    CreateDataForwardAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateDataForwardRequest&,
        CreateDataForwardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateDeviceChannelOutcome IotvideoClient::CreateDeviceChannel(const CreateDeviceChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceChannelResponse rsp = CreateDeviceChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceChannelOutcome(rsp);
        else
            return CreateDeviceChannelOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceChannelOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateDeviceChannelAsync(const CreateDeviceChannelRequest& request, const CreateDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceChannelRequest&;
    using Resp = CreateDeviceChannelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeviceChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateDeviceChannelOutcomeCallable IotvideoClient::CreateDeviceChannelCallable(const CreateDeviceChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceChannelOutcome>>();
    CreateDeviceChannelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateDeviceChannelRequest&,
        CreateDeviceChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateForwardRuleRequest&;
    using Resp = CreateForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateForwardRuleOutcomeCallable IotvideoClient::CreateForwardRuleCallable(const CreateForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateForwardRuleOutcome>>();
    CreateForwardRuleAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateForwardRuleRequest&,
        CreateForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::CreateFreeCloudStorageOutcome IotvideoClient::CreateFreeCloudStorage(const CreateFreeCloudStorageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFreeCloudStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFreeCloudStorageResponse rsp = CreateFreeCloudStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFreeCloudStorageOutcome(rsp);
        else
            return CreateFreeCloudStorageOutcome(o.GetError());
    }
    else
    {
        return CreateFreeCloudStorageOutcome(outcome.GetError());
    }
}

void IotvideoClient::CreateFreeCloudStorageAsync(const CreateFreeCloudStorageRequest& request, const CreateFreeCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFreeCloudStorageRequest&;
    using Resp = CreateFreeCloudStorageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFreeCloudStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateFreeCloudStorageOutcomeCallable IotvideoClient::CreateFreeCloudStorageCallable(const CreateFreeCloudStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFreeCloudStorageOutcome>>();
    CreateFreeCloudStorageAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateFreeCloudStorageRequest&,
        CreateFreeCloudStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateProductRequest&;
    using Resp = CreateProductResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateProductOutcomeCallable IotvideoClient::CreateProductCallable(const CreateProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProductOutcome>>();
    CreateProductAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateProductRequest&,
        CreateProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateTaskFileUrlRequest&;
    using Resp = CreateTaskFileUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTaskFileUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::CreateTaskFileUrlOutcomeCallable IotvideoClient::CreateTaskFileUrlCallable(const CreateTaskFileUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskFileUrlOutcome>>();
    CreateTaskFileUrlAsync(
    request,
    [prom](
        const IotvideoClient*,
        const CreateTaskFileUrlRequest&,
        CreateTaskFileUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DeleteCloudStorageEventOutcome IotvideoClient::DeleteCloudStorageEvent(const DeleteCloudStorageEventRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudStorageEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudStorageEventResponse rsp = DeleteCloudStorageEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudStorageEventOutcome(rsp);
        else
            return DeleteCloudStorageEventOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudStorageEventOutcome(outcome.GetError());
    }
}

void IotvideoClient::DeleteCloudStorageEventAsync(const DeleteCloudStorageEventRequest& request, const DeleteCloudStorageEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudStorageEventRequest&;
    using Resp = DeleteCloudStorageEventResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudStorageEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteCloudStorageEventOutcomeCallable IotvideoClient::DeleteCloudStorageEventCallable(const DeleteCloudStorageEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudStorageEventOutcome>>();
    DeleteCloudStorageEventAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteCloudStorageEventRequest&,
        DeleteCloudStorageEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDeviceRequest&;
    using Resp = DeleteDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteDeviceOutcomeCallable IotvideoClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceOutcome>>();
    DeleteDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteDeviceRequest&,
        DeleteDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteFirmwareRequest&;
    using Resp = DeleteFirmwareResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFirmware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteFirmwareOutcomeCallable IotvideoClient::DeleteFirmwareCallable(const DeleteFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFirmwareOutcome>>();
    DeleteFirmwareAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteFirmwareRequest&,
        DeleteFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteForwardRuleRequest&;
    using Resp = DeleteForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteForwardRuleOutcomeCallable IotvideoClient::DeleteForwardRuleCallable(const DeleteForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteForwardRuleOutcome>>();
    DeleteForwardRuleAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteForwardRuleRequest&,
        DeleteForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteProductRequest&;
    using Resp = DeleteProductResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DeleteProductOutcomeCallable IotvideoClient::DeleteProductCallable(const DeleteProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProductOutcome>>();
    DeleteProductAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DeleteProductRequest&,
        DeleteProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAIModelApplicationsRequest&;
    using Resp = DescribeAIModelApplicationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIModelApplications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeAIModelApplicationsOutcomeCallable IotvideoClient::DescribeAIModelApplicationsCallable(const DescribeAIModelApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIModelApplicationsOutcome>>();
    DescribeAIModelApplicationsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeAIModelApplicationsRequest&,
        DescribeAIModelApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAIModelChannelRequest&;
    using Resp = DescribeAIModelChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIModelChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeAIModelChannelOutcomeCallable IotvideoClient::DescribeAIModelChannelCallable(const DescribeAIModelChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIModelChannelOutcome>>();
    DescribeAIModelChannelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeAIModelChannelRequest&,
        DescribeAIModelChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAIModelUsageRequest&;
    using Resp = DescribeAIModelUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIModelUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeAIModelUsageOutcomeCallable IotvideoClient::DescribeAIModelUsageCallable(const DescribeAIModelUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIModelUsageOutcome>>();
    DescribeAIModelUsageAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeAIModelUsageRequest&,
        DescribeAIModelUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAIModelsRequest&;
    using Resp = DescribeAIModelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIModels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeAIModelsOutcomeCallable IotvideoClient::DescribeAIModelsCallable(const DescribeAIModelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIModelsOutcome>>();
    DescribeAIModelsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeAIModelsRequest&,
        DescribeAIModelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeAccountOutcome IotvideoClient::DescribeAccount(const DescribeAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountResponse rsp = DescribeAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountOutcome(rsp);
        else
            return DescribeAccountOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeAccountAsync(const DescribeAccountRequest& request, const DescribeAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountRequest&;
    using Resp = DescribeAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeAccountOutcomeCallable IotvideoClient::DescribeAccountCallable(const DescribeAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountOutcome>>();
    DescribeAccountAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeAccountRequest&,
        DescribeAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeBalanceRequest&;
    using Resp = DescribeBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeBalanceOutcomeCallable IotvideoClient::DescribeBalanceCallable(const DescribeBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBalanceOutcome>>();
    DescribeBalanceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeBalanceRequest&,
        DescribeBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeBalanceTransactionsRequest&;
    using Resp = DescribeBalanceTransactionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBalanceTransactions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeBalanceTransactionsOutcomeCallable IotvideoClient::DescribeBalanceTransactionsCallable(const DescribeBalanceTransactionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBalanceTransactionsOutcome>>();
    DescribeBalanceTransactionsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeBalanceTransactionsRequest&,
        DescribeBalanceTransactionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeBatchRequest&;
    using Resp = DescribeBatchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeBatchOutcomeCallable IotvideoClient::DescribeBatchCallable(const DescribeBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchOutcome>>();
    DescribeBatchAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeBatchRequest&,
        DescribeBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeBatchsRequest&;
    using Resp = DescribeBatchsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeBatchsOutcomeCallable IotvideoClient::DescribeBatchsCallable(const DescribeBatchsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchsOutcome>>();
    DescribeBatchsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeBatchsRequest&,
        DescribeBatchsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeBonusesOutcome IotvideoClient::DescribeBonuses(const DescribeBonusesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBonuses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBonusesResponse rsp = DescribeBonusesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBonusesOutcome(rsp);
        else
            return DescribeBonusesOutcome(o.GetError());
    }
    else
    {
        return DescribeBonusesOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeBonusesAsync(const DescribeBonusesRequest& request, const DescribeBonusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBonusesRequest&;
    using Resp = DescribeBonusesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBonuses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeBonusesOutcomeCallable IotvideoClient::DescribeBonusesCallable(const DescribeBonusesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBonusesOutcome>>();
    DescribeBonusesAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeBonusesRequest&,
        DescribeBonusesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCategoryRequest&;
    using Resp = DescribeCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCategoryOutcomeCallable IotvideoClient::DescribeCategoryCallable(const DescribeCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCategoryOutcome>>();
    DescribeCategoryAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCategoryRequest&,
        DescribeCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCloudStorageRequest&;
    using Resp = DescribeCloudStorageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStorageOutcomeCallable IotvideoClient::DescribeCloudStorageCallable(const DescribeCloudStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageOutcome>>();
    DescribeCloudStorageAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStorageRequest&,
        DescribeCloudStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCloudStorageDateRequest&;
    using Resp = DescribeCloudStorageDateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageDate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStorageDateOutcomeCallable IotvideoClient::DescribeCloudStorageDateCallable(const DescribeCloudStorageDateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageDateOutcome>>();
    DescribeCloudStorageDateAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStorageDateRequest&,
        DescribeCloudStorageDateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCloudStorageEventsRequest&;
    using Resp = DescribeCloudStorageEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStorageEventsOutcomeCallable IotvideoClient::DescribeCloudStorageEventsCallable(const DescribeCloudStorageEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageEventsOutcome>>();
    DescribeCloudStorageEventsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStorageEventsRequest&,
        DescribeCloudStorageEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeCloudStorageMultiThumbnailOutcome IotvideoClient::DescribeCloudStorageMultiThumbnail(const DescribeCloudStorageMultiThumbnailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageMultiThumbnail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageMultiThumbnailResponse rsp = DescribeCloudStorageMultiThumbnailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageMultiThumbnailOutcome(rsp);
        else
            return DescribeCloudStorageMultiThumbnailOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageMultiThumbnailOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStorageMultiThumbnailAsync(const DescribeCloudStorageMultiThumbnailRequest& request, const DescribeCloudStorageMultiThumbnailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStorageMultiThumbnailRequest&;
    using Resp = DescribeCloudStorageMultiThumbnailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageMultiThumbnail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStorageMultiThumbnailOutcomeCallable IotvideoClient::DescribeCloudStorageMultiThumbnailCallable(const DescribeCloudStorageMultiThumbnailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageMultiThumbnailOutcome>>();
    DescribeCloudStorageMultiThumbnailAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStorageMultiThumbnailRequest&,
        DescribeCloudStorageMultiThumbnailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeCloudStorageOrderOutcome IotvideoClient::DescribeCloudStorageOrder(const DescribeCloudStorageOrderRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageOrderResponse rsp = DescribeCloudStorageOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageOrderOutcome(rsp);
        else
            return DescribeCloudStorageOrderOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageOrderOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStorageOrderAsync(const DescribeCloudStorageOrderRequest& request, const DescribeCloudStorageOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStorageOrderRequest&;
    using Resp = DescribeCloudStorageOrderResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStorageOrderOutcomeCallable IotvideoClient::DescribeCloudStorageOrderCallable(const DescribeCloudStorageOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageOrderOutcome>>();
    DescribeCloudStorageOrderAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStorageOrderRequest&,
        DescribeCloudStorageOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeCloudStoragePackageConsumeDetailsOutcome IotvideoClient::DescribeCloudStoragePackageConsumeDetails(const DescribeCloudStoragePackageConsumeDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStoragePackageConsumeDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStoragePackageConsumeDetailsResponse rsp = DescribeCloudStoragePackageConsumeDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStoragePackageConsumeDetailsOutcome(rsp);
        else
            return DescribeCloudStoragePackageConsumeDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStoragePackageConsumeDetailsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStoragePackageConsumeDetailsAsync(const DescribeCloudStoragePackageConsumeDetailsRequest& request, const DescribeCloudStoragePackageConsumeDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStoragePackageConsumeDetailsRequest&;
    using Resp = DescribeCloudStoragePackageConsumeDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStoragePackageConsumeDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStoragePackageConsumeDetailsOutcomeCallable IotvideoClient::DescribeCloudStoragePackageConsumeDetailsCallable(const DescribeCloudStoragePackageConsumeDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStoragePackageConsumeDetailsOutcome>>();
    DescribeCloudStoragePackageConsumeDetailsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStoragePackageConsumeDetailsRequest&,
        DescribeCloudStoragePackageConsumeDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeCloudStoragePackageConsumeStatsOutcome IotvideoClient::DescribeCloudStoragePackageConsumeStats(const DescribeCloudStoragePackageConsumeStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStoragePackageConsumeStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStoragePackageConsumeStatsResponse rsp = DescribeCloudStoragePackageConsumeStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStoragePackageConsumeStatsOutcome(rsp);
        else
            return DescribeCloudStoragePackageConsumeStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStoragePackageConsumeStatsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStoragePackageConsumeStatsAsync(const DescribeCloudStoragePackageConsumeStatsRequest& request, const DescribeCloudStoragePackageConsumeStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStoragePackageConsumeStatsRequest&;
    using Resp = DescribeCloudStoragePackageConsumeStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStoragePackageConsumeStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStoragePackageConsumeStatsOutcomeCallable IotvideoClient::DescribeCloudStoragePackageConsumeStatsCallable(const DescribeCloudStoragePackageConsumeStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStoragePackageConsumeStatsOutcome>>();
    DescribeCloudStoragePackageConsumeStatsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStoragePackageConsumeStatsRequest&,
        DescribeCloudStoragePackageConsumeStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeCloudStorageStreamDataOutcome IotvideoClient::DescribeCloudStorageStreamData(const DescribeCloudStorageStreamDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageStreamData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageStreamDataResponse rsp = DescribeCloudStorageStreamDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageStreamDataOutcome(rsp);
        else
            return DescribeCloudStorageStreamDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageStreamDataOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStorageStreamDataAsync(const DescribeCloudStorageStreamDataRequest& request, const DescribeCloudStorageStreamDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStorageStreamDataRequest&;
    using Resp = DescribeCloudStorageStreamDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageStreamData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStorageStreamDataOutcomeCallable IotvideoClient::DescribeCloudStorageStreamDataCallable(const DescribeCloudStorageStreamDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageStreamDataOutcome>>();
    DescribeCloudStorageStreamDataAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStorageStreamDataRequest&,
        DescribeCloudStorageStreamDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCloudStorageThumbnailRequest&;
    using Resp = DescribeCloudStorageThumbnailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageThumbnail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStorageThumbnailOutcomeCallable IotvideoClient::DescribeCloudStorageThumbnailCallable(const DescribeCloudStorageThumbnailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageThumbnailOutcome>>();
    DescribeCloudStorageThumbnailAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStorageThumbnailRequest&,
        DescribeCloudStorageThumbnailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeCloudStorageThumbnailListOutcome IotvideoClient::DescribeCloudStorageThumbnailList(const DescribeCloudStorageThumbnailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudStorageThumbnailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudStorageThumbnailListResponse rsp = DescribeCloudStorageThumbnailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudStorageThumbnailListOutcome(rsp);
        else
            return DescribeCloudStorageThumbnailListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudStorageThumbnailListOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCloudStorageThumbnailListAsync(const DescribeCloudStorageThumbnailListRequest& request, const DescribeCloudStorageThumbnailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudStorageThumbnailListRequest&;
    using Resp = DescribeCloudStorageThumbnailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageThumbnailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStorageThumbnailListOutcomeCallable IotvideoClient::DescribeCloudStorageThumbnailListCallable(const DescribeCloudStorageThumbnailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageThumbnailListOutcome>>();
    DescribeCloudStorageThumbnailListAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStorageThumbnailListRequest&,
        DescribeCloudStorageThumbnailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCloudStorageTimeRequest&;
    using Resp = DescribeCloudStorageTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStorageTimeOutcomeCallable IotvideoClient::DescribeCloudStorageTimeCallable(const DescribeCloudStorageTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageTimeOutcome>>();
    DescribeCloudStorageTimeAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStorageTimeRequest&,
        DescribeCloudStorageTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCloudStorageUsersRequest&;
    using Resp = DescribeCloudStorageUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudStorageUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCloudStorageUsersOutcomeCallable IotvideoClient::DescribeCloudStorageUsersCallable(const DescribeCloudStorageUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudStorageUsersOutcome>>();
    DescribeCloudStorageUsersAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCloudStorageUsersRequest&,
        DescribeCloudStorageUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeCsReportCountDataInfoOutcome IotvideoClient::DescribeCsReportCountDataInfo(const DescribeCsReportCountDataInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCsReportCountDataInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCsReportCountDataInfoResponse rsp = DescribeCsReportCountDataInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCsReportCountDataInfoOutcome(rsp);
        else
            return DescribeCsReportCountDataInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCsReportCountDataInfoOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeCsReportCountDataInfoAsync(const DescribeCsReportCountDataInfoRequest& request, const DescribeCsReportCountDataInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCsReportCountDataInfoRequest&;
    using Resp = DescribeCsReportCountDataInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCsReportCountDataInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeCsReportCountDataInfoOutcomeCallable IotvideoClient::DescribeCsReportCountDataInfoCallable(const DescribeCsReportCountDataInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCsReportCountDataInfoOutcome>>();
    DescribeCsReportCountDataInfoAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeCsReportCountDataInfoRequest&,
        DescribeCsReportCountDataInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDataForwardListRequest&;
    using Resp = DescribeDataForwardListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataForwardList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDataForwardListOutcomeCallable IotvideoClient::DescribeDataForwardListCallable(const DescribeDataForwardListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataForwardListOutcome>>();
    DescribeDataForwardListAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDataForwardListRequest&,
        DescribeDataForwardListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceRequest&;
    using Resp = DescribeDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDeviceOutcomeCallable IotvideoClient::DescribeDeviceCallable(const DescribeDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceOutcome>>();
    DescribeDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDeviceRequest&,
        DescribeDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceActionHistoryRequest&;
    using Resp = DescribeDeviceActionHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceActionHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDeviceActionHistoryOutcomeCallable IotvideoClient::DescribeDeviceActionHistoryCallable(const DescribeDeviceActionHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceActionHistoryOutcome>>();
    DescribeDeviceActionHistoryAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDeviceActionHistoryRequest&,
        DescribeDeviceActionHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceCommLogRequest&;
    using Resp = DescribeDeviceCommLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceCommLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDeviceCommLogOutcomeCallable IotvideoClient::DescribeDeviceCommLogCallable(const DescribeDeviceCommLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceCommLogOutcome>>();
    DescribeDeviceCommLogAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDeviceCommLogRequest&,
        DescribeDeviceCommLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceDataRequest&;
    using Resp = DescribeDeviceDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDeviceDataOutcomeCallable IotvideoClient::DescribeDeviceDataCallable(const DescribeDeviceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceDataOutcome>>();
    DescribeDeviceDataAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDeviceDataRequest&,
        DescribeDeviceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceDataHistoryRequest&;
    using Resp = DescribeDeviceDataHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceDataHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDeviceDataHistoryOutcomeCallable IotvideoClient::DescribeDeviceDataHistoryCallable(const DescribeDeviceDataHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceDataHistoryOutcome>>();
    DescribeDeviceDataHistoryAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDeviceDataHistoryRequest&,
        DescribeDeviceDataHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeDeviceDataStatsOutcome IotvideoClient::DescribeDeviceDataStats(const DescribeDeviceDataStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceDataStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceDataStatsResponse rsp = DescribeDeviceDataStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceDataStatsOutcome(rsp);
        else
            return DescribeDeviceDataStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceDataStatsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeDeviceDataStatsAsync(const DescribeDeviceDataStatsRequest& request, const DescribeDeviceDataStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceDataStatsRequest&;
    using Resp = DescribeDeviceDataStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceDataStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDeviceDataStatsOutcomeCallable IotvideoClient::DescribeDeviceDataStatsCallable(const DescribeDeviceDataStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceDataStatsOutcome>>();
    DescribeDeviceDataStatsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDeviceDataStatsRequest&,
        DescribeDeviceDataStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceEventHistoryRequest&;
    using Resp = DescribeDeviceEventHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceEventHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDeviceEventHistoryOutcomeCallable IotvideoClient::DescribeDeviceEventHistoryCallable(const DescribeDeviceEventHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceEventHistoryOutcome>>();
    DescribeDeviceEventHistoryAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDeviceEventHistoryRequest&,
        DescribeDeviceEventHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeDevicePackagesOutcome IotvideoClient::DescribeDevicePackages(const DescribeDevicePackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevicePackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicePackagesResponse rsp = DescribeDevicePackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicePackagesOutcome(rsp);
        else
            return DescribeDevicePackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicePackagesOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeDevicePackagesAsync(const DescribeDevicePackagesRequest& request, const DescribeDevicePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDevicePackagesRequest&;
    using Resp = DescribeDevicePackagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevicePackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDevicePackagesOutcomeCallable IotvideoClient::DescribeDevicePackagesCallable(const DescribeDevicePackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicePackagesOutcome>>();
    DescribeDevicePackagesAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDevicePackagesRequest&,
        DescribeDevicePackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceStatusLogRequest&;
    using Resp = DescribeDeviceStatusLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceStatusLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDeviceStatusLogOutcomeCallable IotvideoClient::DescribeDeviceStatusLogCallable(const DescribeDeviceStatusLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceStatusLogOutcome>>();
    DescribeDeviceStatusLogAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDeviceStatusLogRequest&,
        DescribeDeviceStatusLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDevicesRequest&;
    using Resp = DescribeDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeDevicesOutcomeCallable IotvideoClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDevicesOutcome>>();
    DescribeDevicesAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeDevicesRequest&,
        DescribeDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFirmwareRequest&;
    using Resp = DescribeFirmwareResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeFirmwareOutcomeCallable IotvideoClient::DescribeFirmwareCallable(const DescribeFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareOutcome>>();
    DescribeFirmwareAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeFirmwareRequest&,
        DescribeFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFirmwareTaskRequest&;
    using Resp = DescribeFirmwareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeFirmwareTaskOutcomeCallable IotvideoClient::DescribeFirmwareTaskCallable(const DescribeFirmwareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTaskOutcome>>();
    DescribeFirmwareTaskAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeFirmwareTaskRequest&,
        DescribeFirmwareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFirmwareTaskDevicesRequest&;
    using Resp = DescribeFirmwareTaskDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareTaskDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeFirmwareTaskDevicesOutcomeCallable IotvideoClient::DescribeFirmwareTaskDevicesCallable(const DescribeFirmwareTaskDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTaskDevicesOutcome>>();
    DescribeFirmwareTaskDevicesAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeFirmwareTaskDevicesRequest&,
        DescribeFirmwareTaskDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFirmwareTaskDistributionRequest&;
    using Resp = DescribeFirmwareTaskDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareTaskDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeFirmwareTaskDistributionOutcomeCallable IotvideoClient::DescribeFirmwareTaskDistributionCallable(const DescribeFirmwareTaskDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTaskDistributionOutcome>>();
    DescribeFirmwareTaskDistributionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeFirmwareTaskDistributionRequest&,
        DescribeFirmwareTaskDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFirmwareTaskStatisticsRequest&;
    using Resp = DescribeFirmwareTaskStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareTaskStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeFirmwareTaskStatisticsOutcomeCallable IotvideoClient::DescribeFirmwareTaskStatisticsCallable(const DescribeFirmwareTaskStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTaskStatisticsOutcome>>();
    DescribeFirmwareTaskStatisticsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeFirmwareTaskStatisticsRequest&,
        DescribeFirmwareTaskStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFirmwareTasksRequest&;
    using Resp = DescribeFirmwareTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFirmwareTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeFirmwareTasksOutcomeCallable IotvideoClient::DescribeFirmwareTasksCallable(const DescribeFirmwareTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFirmwareTasksOutcome>>();
    DescribeFirmwareTasksAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeFirmwareTasksRequest&,
        DescribeFirmwareTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeForwardRuleRequest&;
    using Resp = DescribeForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeForwardRuleOutcomeCallable IotvideoClient::DescribeForwardRuleCallable(const DescribeForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeForwardRuleOutcome>>();
    DescribeForwardRuleAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeForwardRuleRequest&,
        DescribeForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeFreeCloudStorageNumOutcome IotvideoClient::DescribeFreeCloudStorageNum(const DescribeFreeCloudStorageNumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFreeCloudStorageNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFreeCloudStorageNumResponse rsp = DescribeFreeCloudStorageNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFreeCloudStorageNumOutcome(rsp);
        else
            return DescribeFreeCloudStorageNumOutcome(o.GetError());
    }
    else
    {
        return DescribeFreeCloudStorageNumOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeFreeCloudStorageNumAsync(const DescribeFreeCloudStorageNumRequest& request, const DescribeFreeCloudStorageNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFreeCloudStorageNumRequest&;
    using Resp = DescribeFreeCloudStorageNumResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFreeCloudStorageNum", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeFreeCloudStorageNumOutcomeCallable IotvideoClient::DescribeFreeCloudStorageNumCallable(const DescribeFreeCloudStorageNumRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFreeCloudStorageNumOutcome>>();
    DescribeFreeCloudStorageNumAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeFreeCloudStorageNumRequest&,
        DescribeFreeCloudStorageNumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeMessageDataStatsOutcome IotvideoClient::DescribeMessageDataStats(const DescribeMessageDataStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageDataStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageDataStatsResponse rsp = DescribeMessageDataStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageDataStatsOutcome(rsp);
        else
            return DescribeMessageDataStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageDataStatsOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeMessageDataStatsAsync(const DescribeMessageDataStatsRequest& request, const DescribeMessageDataStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageDataStatsRequest&;
    using Resp = DescribeMessageDataStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageDataStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeMessageDataStatsOutcomeCallable IotvideoClient::DescribeMessageDataStatsCallable(const DescribeMessageDataStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageDataStatsOutcome>>();
    DescribeMessageDataStatsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeMessageDataStatsRequest&,
        DescribeMessageDataStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeModelDefinitionRequest&;
    using Resp = DescribeModelDefinitionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelDefinition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeModelDefinitionOutcomeCallable IotvideoClient::DescribeModelDefinitionCallable(const DescribeModelDefinitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelDefinitionOutcome>>();
    DescribeModelDefinitionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeModelDefinitionRequest&,
        DescribeModelDefinitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeP2PInfoOutcome IotvideoClient::DescribeP2PInfo(const DescribeP2PInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeP2PInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeP2PInfoResponse rsp = DescribeP2PInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeP2PInfoOutcome(rsp);
        else
            return DescribeP2PInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeP2PInfoOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeP2PInfoAsync(const DescribeP2PInfoRequest& request, const DescribeP2PInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeP2PInfoRequest&;
    using Resp = DescribeP2PInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeP2PInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeP2PInfoOutcomeCallable IotvideoClient::DescribeP2PInfoCallable(const DescribeP2PInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeP2PInfoOutcome>>();
    DescribeP2PInfoAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeP2PInfoRequest&,
        DescribeP2PInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeP2PRouteOutcome IotvideoClient::DescribeP2PRoute(const DescribeP2PRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeP2PRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeP2PRouteResponse rsp = DescribeP2PRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeP2PRouteOutcome(rsp);
        else
            return DescribeP2PRouteOutcome(o.GetError());
    }
    else
    {
        return DescribeP2PRouteOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeP2PRouteAsync(const DescribeP2PRouteRequest& request, const DescribeP2PRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeP2PRouteRequest&;
    using Resp = DescribeP2PRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeP2PRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeP2PRouteOutcomeCallable IotvideoClient::DescribeP2PRouteCallable(const DescribeP2PRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeP2PRouteOutcome>>();
    DescribeP2PRouteAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeP2PRouteRequest&,
        DescribeP2PRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribePackageConsumeTaskOutcome IotvideoClient::DescribePackageConsumeTask(const DescribePackageConsumeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackageConsumeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackageConsumeTaskResponse rsp = DescribePackageConsumeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackageConsumeTaskOutcome(rsp);
        else
            return DescribePackageConsumeTaskOutcome(o.GetError());
    }
    else
    {
        return DescribePackageConsumeTaskOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribePackageConsumeTaskAsync(const DescribePackageConsumeTaskRequest& request, const DescribePackageConsumeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePackageConsumeTaskRequest&;
    using Resp = DescribePackageConsumeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePackageConsumeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribePackageConsumeTaskOutcomeCallable IotvideoClient::DescribePackageConsumeTaskCallable(const DescribePackageConsumeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePackageConsumeTaskOutcome>>();
    DescribePackageConsumeTaskAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribePackageConsumeTaskRequest&,
        DescribePackageConsumeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribePackageConsumeTasksOutcome IotvideoClient::DescribePackageConsumeTasks(const DescribePackageConsumeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackageConsumeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackageConsumeTasksResponse rsp = DescribePackageConsumeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackageConsumeTasksOutcome(rsp);
        else
            return DescribePackageConsumeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePackageConsumeTasksOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribePackageConsumeTasksAsync(const DescribePackageConsumeTasksRequest& request, const DescribePackageConsumeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePackageConsumeTasksRequest&;
    using Resp = DescribePackageConsumeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePackageConsumeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribePackageConsumeTasksOutcomeCallable IotvideoClient::DescribePackageConsumeTasksCallable(const DescribePackageConsumeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePackageConsumeTasksOutcome>>();
    DescribePackageConsumeTasksAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribePackageConsumeTasksRequest&,
        DescribePackageConsumeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProductRequest&;
    using Resp = DescribeProductResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeProductOutcomeCallable IotvideoClient::DescribeProductCallable(const DescribeProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductOutcome>>();
    DescribeProductAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeProductRequest&,
        DescribeProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProductDynamicRegisterRequest&;
    using Resp = DescribeProductDynamicRegisterResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductDynamicRegister", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeProductDynamicRegisterOutcomeCallable IotvideoClient::DescribeProductDynamicRegisterCallable(const DescribeProductDynamicRegisterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductDynamicRegisterOutcome>>();
    DescribeProductDynamicRegisterAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeProductDynamicRegisterRequest&,
        DescribeProductDynamicRegisterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProductsRequest&;
    using Resp = DescribeProductsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeProductsOutcomeCallable IotvideoClient::DescribeProductsCallable(const DescribeProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductsOutcome>>();
    DescribeProductsAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeProductsRequest&,
        DescribeProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribePushChannelOutcome IotvideoClient::DescribePushChannel(const DescribePushChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePushChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePushChannelResponse rsp = DescribePushChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePushChannelOutcome(rsp);
        else
            return DescribePushChannelOutcome(o.GetError());
    }
    else
    {
        return DescribePushChannelOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribePushChannelAsync(const DescribePushChannelRequest& request, const DescribePushChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePushChannelRequest&;
    using Resp = DescribePushChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePushChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribePushChannelOutcomeCallable IotvideoClient::DescribePushChannelCallable(const DescribePushChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePushChannelOutcome>>();
    DescribePushChannelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribePushChannelRequest&,
        DescribePushChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSDKLogRequest&;
    using Resp = DescribeSDKLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSDKLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeSDKLogOutcomeCallable IotvideoClient::DescribeSDKLogCallable(const DescribeSDKLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSDKLogOutcome>>();
    DescribeSDKLogAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeSDKLogRequest&,
        DescribeSDKLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::DescribeUserOutcome IotvideoClient::DescribeUser(const DescribeUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserResponse rsp = DescribeUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserOutcome(rsp);
        else
            return DescribeUserOutcome(o.GetError());
    }
    else
    {
        return DescribeUserOutcome(outcome.GetError());
    }
}

void IotvideoClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserRequest&;
    using Resp = DescribeUserResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::DescribeUserOutcomeCallable IotvideoClient::DescribeUserCallable(const DescribeUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserOutcome>>();
    DescribeUserAsync(
    request,
    [prom](
        const IotvideoClient*,
        const DescribeUserRequest&,
        DescribeUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EditFirmwareRequest&;
    using Resp = EditFirmwareResponse;

    DoRequestAsync<Req, Resp>(
        "EditFirmware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::EditFirmwareOutcomeCallable IotvideoClient::EditFirmwareCallable(const EditFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditFirmwareOutcome>>();
    EditFirmwareAsync(
    request,
    [prom](
        const IotvideoClient*,
        const EditFirmwareRequest&,
        EditFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::GenSingleDeviceSignatureOfPublicOutcome IotvideoClient::GenSingleDeviceSignatureOfPublic(const GenSingleDeviceSignatureOfPublicRequest &request)
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

void IotvideoClient::GenSingleDeviceSignatureOfPublicAsync(const GenSingleDeviceSignatureOfPublicRequest& request, const GenSingleDeviceSignatureOfPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenSingleDeviceSignatureOfPublicRequest&;
    using Resp = GenSingleDeviceSignatureOfPublicResponse;

    DoRequestAsync<Req, Resp>(
        "GenSingleDeviceSignatureOfPublic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::GenSingleDeviceSignatureOfPublicOutcomeCallable IotvideoClient::GenSingleDeviceSignatureOfPublicCallable(const GenSingleDeviceSignatureOfPublicRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenSingleDeviceSignatureOfPublicOutcome>>();
    GenSingleDeviceSignatureOfPublicAsync(
    request,
    [prom](
        const IotvideoClient*,
        const GenSingleDeviceSignatureOfPublicRequest&,
        GenSingleDeviceSignatureOfPublicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GenerateSignedVideoURLRequest&;
    using Resp = GenerateSignedVideoURLResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateSignedVideoURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::GenerateSignedVideoURLOutcomeCallable IotvideoClient::GenerateSignedVideoURLCallable(const GenerateSignedVideoURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateSignedVideoURLOutcome>>();
    GenerateSignedVideoURLAsync(
    request,
    [prom](
        const IotvideoClient*,
        const GenerateSignedVideoURLRequest&,
        GenerateSignedVideoURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetAllFirmwareVersionRequest&;
    using Resp = GetAllFirmwareVersionResponse;

    DoRequestAsync<Req, Resp>(
        "GetAllFirmwareVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::GetAllFirmwareVersionOutcomeCallable IotvideoClient::GetAllFirmwareVersionCallable(const GetAllFirmwareVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAllFirmwareVersionOutcome>>();
    GetAllFirmwareVersionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const GetAllFirmwareVersionRequest&,
        GetAllFirmwareVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetFirmwareURLRequest&;
    using Resp = GetFirmwareURLResponse;

    DoRequestAsync<Req, Resp>(
        "GetFirmwareURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::GetFirmwareURLOutcomeCallable IotvideoClient::GetFirmwareURLCallable(const GetFirmwareURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFirmwareURLOutcome>>();
    GetFirmwareURLAsync(
    request,
    [prom](
        const IotvideoClient*,
        const GetFirmwareURLRequest&,
        GetFirmwareURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImportModelDefinitionRequest&;
    using Resp = ImportModelDefinitionResponse;

    DoRequestAsync<Req, Resp>(
        "ImportModelDefinition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ImportModelDefinitionOutcomeCallable IotvideoClient::ImportModelDefinitionCallable(const ImportModelDefinitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportModelDefinitionOutcome>>();
    ImportModelDefinitionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ImportModelDefinitionRequest&,
        ImportModelDefinitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InheritCloudStorageUserRequest&;
    using Resp = InheritCloudStorageUserResponse;

    DoRequestAsync<Req, Resp>(
        "InheritCloudStorageUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::InheritCloudStorageUserOutcomeCallable IotvideoClient::InheritCloudStorageUserCallable(const InheritCloudStorageUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<InheritCloudStorageUserOutcome>>();
    InheritCloudStorageUserAsync(
    request,
    [prom](
        const IotvideoClient*,
        const InheritCloudStorageUserRequest&,
        InheritCloudStorageUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListFirmwaresRequest&;
    using Resp = ListFirmwaresResponse;

    DoRequestAsync<Req, Resp>(
        "ListFirmwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ListFirmwaresOutcomeCallable IotvideoClient::ListFirmwaresCallable(const ListFirmwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListFirmwaresOutcome>>();
    ListFirmwaresAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ListFirmwaresRequest&,
        ListFirmwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDataForwardRequest&;
    using Resp = ModifyDataForwardResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDataForward", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyDataForwardOutcomeCallable IotvideoClient::ModifyDataForwardCallable(const ModifyDataForwardRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDataForwardOutcome>>();
    ModifyDataForwardAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyDataForwardRequest&,
        ModifyDataForwardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDataForwardStatusRequest&;
    using Resp = ModifyDataForwardStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDataForwardStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyDataForwardStatusOutcomeCallable IotvideoClient::ModifyDataForwardStatusCallable(const ModifyDataForwardStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDataForwardStatusOutcome>>();
    ModifyDataForwardStatusAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyDataForwardStatusRequest&,
        ModifyDataForwardStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDeviceRequest&;
    using Resp = ModifyDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyDeviceOutcomeCallable IotvideoClient::ModifyDeviceCallable(const ModifyDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceOutcome>>();
    ModifyDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyDeviceRequest&,
        ModifyDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDeviceLogLevelRequest&;
    using Resp = ModifyDeviceLogLevelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceLogLevel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyDeviceLogLevelOutcomeCallable IotvideoClient::ModifyDeviceLogLevelCallable(const ModifyDeviceLogLevelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceLogLevelOutcome>>();
    ModifyDeviceLogLevelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyDeviceLogLevelRequest&,
        ModifyDeviceLogLevelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyForwardRuleRequest&;
    using Resp = ModifyForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyForwardRuleOutcomeCallable IotvideoClient::ModifyForwardRuleCallable(const ModifyForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyForwardRuleOutcome>>();
    ModifyForwardRuleAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyForwardRuleRequest&,
        ModifyForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyModelDefinitionRequest&;
    using Resp = ModifyModelDefinitionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModelDefinition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyModelDefinitionOutcomeCallable IotvideoClient::ModifyModelDefinitionCallable(const ModifyModelDefinitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModelDefinitionOutcome>>();
    ModifyModelDefinitionAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyModelDefinitionRequest&,
        ModifyModelDefinitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyProductRequest&;
    using Resp = ModifyProductResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyProductOutcomeCallable IotvideoClient::ModifyProductCallable(const ModifyProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProductOutcome>>();
    ModifyProductAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyProductRequest&,
        ModifyProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyProductDynamicRegisterRequest&;
    using Resp = ModifyProductDynamicRegisterResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProductDynamicRegister", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyProductDynamicRegisterOutcomeCallable IotvideoClient::ModifyProductDynamicRegisterCallable(const ModifyProductDynamicRegisterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProductDynamicRegisterOutcome>>();
    ModifyProductDynamicRegisterAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyProductDynamicRegisterRequest&,
        ModifyProductDynamicRegisterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::ModifyPushChannelOutcome IotvideoClient::ModifyPushChannel(const ModifyPushChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPushChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPushChannelResponse rsp = ModifyPushChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPushChannelOutcome(rsp);
        else
            return ModifyPushChannelOutcome(o.GetError());
    }
    else
    {
        return ModifyPushChannelOutcome(outcome.GetError());
    }
}

void IotvideoClient::ModifyPushChannelAsync(const ModifyPushChannelRequest& request, const ModifyPushChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPushChannelRequest&;
    using Resp = ModifyPushChannelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPushChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ModifyPushChannelOutcomeCallable IotvideoClient::ModifyPushChannelCallable(const ModifyPushChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPushChannelOutcome>>();
    ModifyPushChannelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ModifyPushChannelRequest&,
        ModifyPushChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PublishMessageRequest&;
    using Resp = PublishMessageResponse;

    DoRequestAsync<Req, Resp>(
        "PublishMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::PublishMessageOutcomeCallable IotvideoClient::PublishMessageCallable(const PublishMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishMessageOutcome>>();
    PublishMessageAsync(
    request,
    [prom](
        const IotvideoClient*,
        const PublishMessageRequest&,
        PublishMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ReportAliveDeviceRequest&;
    using Resp = ReportAliveDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ReportAliveDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ReportAliveDeviceOutcomeCallable IotvideoClient::ReportAliveDeviceCallable(const ReportAliveDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportAliveDeviceOutcome>>();
    ReportAliveDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ReportAliveDeviceRequest&,
        ReportAliveDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResetCloudStorageRequest&;
    using Resp = ResetCloudStorageResponse;

    DoRequestAsync<Req, Resp>(
        "ResetCloudStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ResetCloudStorageOutcomeCallable IotvideoClient::ResetCloudStorageCallable(const ResetCloudStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetCloudStorageOutcome>>();
    ResetCloudStorageAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ResetCloudStorageRequest&,
        ResetCloudStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotvideoClient::ResetCloudStorageEventOutcome IotvideoClient::ResetCloudStorageEvent(const ResetCloudStorageEventRequest &request)
{
    auto outcome = MakeRequest(request, "ResetCloudStorageEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetCloudStorageEventResponse rsp = ResetCloudStorageEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetCloudStorageEventOutcome(rsp);
        else
            return ResetCloudStorageEventOutcome(o.GetError());
    }
    else
    {
        return ResetCloudStorageEventOutcome(outcome.GetError());
    }
}

void IotvideoClient::ResetCloudStorageEventAsync(const ResetCloudStorageEventRequest& request, const ResetCloudStorageEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetCloudStorageEventRequest&;
    using Resp = ResetCloudStorageEventResponse;

    DoRequestAsync<Req, Resp>(
        "ResetCloudStorageEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::ResetCloudStorageEventOutcomeCallable IotvideoClient::ResetCloudStorageEventCallable(const ResetCloudStorageEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetCloudStorageEventOutcome>>();
    ResetCloudStorageEventAsync(
    request,
    [prom](
        const IotvideoClient*,
        const ResetCloudStorageEventRequest&,
        ResetCloudStorageEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RetryDeviceFirmwareTaskRequest&;
    using Resp = RetryDeviceFirmwareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RetryDeviceFirmwareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::RetryDeviceFirmwareTaskOutcomeCallable IotvideoClient::RetryDeviceFirmwareTaskCallable(const RetryDeviceFirmwareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryDeviceFirmwareTaskOutcome>>();
    RetryDeviceFirmwareTaskAsync(
    request,
    [prom](
        const IotvideoClient*,
        const RetryDeviceFirmwareTaskRequest&,
        RetryDeviceFirmwareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SetForwardAuthRequest&;
    using Resp = SetForwardAuthResponse;

    DoRequestAsync<Req, Resp>(
        "SetForwardAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::SetForwardAuthOutcomeCallable IotvideoClient::SetForwardAuthCallable(const SetForwardAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetForwardAuthOutcome>>();
    SetForwardAuthAsync(
    request,
    [prom](
        const IotvideoClient*,
        const SetForwardAuthRequest&,
        SetForwardAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TransferCloudStorageRequest&;
    using Resp = TransferCloudStorageResponse;

    DoRequestAsync<Req, Resp>(
        "TransferCloudStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::TransferCloudStorageOutcomeCallable IotvideoClient::TransferCloudStorageCallable(const TransferCloudStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransferCloudStorageOutcome>>();
    TransferCloudStorageAsync(
    request,
    [prom](
        const IotvideoClient*,
        const TransferCloudStorageRequest&,
        TransferCloudStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateAIModelChannelRequest&;
    using Resp = UpdateAIModelChannelResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAIModelChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::UpdateAIModelChannelOutcomeCallable IotvideoClient::UpdateAIModelChannelCallable(const UpdateAIModelChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAIModelChannelOutcome>>();
    UpdateAIModelChannelAsync(
    request,
    [prom](
        const IotvideoClient*,
        const UpdateAIModelChannelRequest&,
        UpdateAIModelChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UploadFirmwareRequest&;
    using Resp = UploadFirmwareResponse;

    DoRequestAsync<Req, Resp>(
        "UploadFirmware", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::UploadFirmwareOutcomeCallable IotvideoClient::UploadFirmwareCallable(const UploadFirmwareRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadFirmwareOutcome>>();
    UploadFirmwareAsync(
    request,
    [prom](
        const IotvideoClient*,
        const UploadFirmwareRequest&,
        UploadFirmwareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const WakeUpDeviceRequest&;
    using Resp = WakeUpDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "WakeUpDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotvideoClient::WakeUpDeviceOutcomeCallable IotvideoClient::WakeUpDeviceCallable(const WakeUpDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<WakeUpDeviceOutcome>>();
    WakeUpDeviceAsync(
    request,
    [prom](
        const IotvideoClient*,
        const WakeUpDeviceRequest&,
        WakeUpDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

